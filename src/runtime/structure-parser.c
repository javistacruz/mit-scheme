/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:55-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define ENVIRONMENT_LABEL_1_3 24
#define DEBUGGING_LABEL_1_2 23
#define OBJECT_1_3 22
#define OBJECT_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_11 13
#define EXECUTE_CACHE_1_8 15
#define EXECUTE_CACHE_1_7 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd24.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

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
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_12)
  (Wrd23.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_2_4);
      goto apply_object_parser_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_object_parser_5)
DEFLABEL (apply_object_parser_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (Rsp [3]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_6);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_9 9
#define ENVIRONMENT_LABEL_3_3 22
#define DEBUGGING_LABEL_3_2 21
#define OBJECT_3_3 20
#define OBJECT_3_2 19
#define OBJECT_3_1 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_10 11
#define EXECUTE_CACHE_3_8 13
#define EXECUTE_CACHE_3_7 15
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_14;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd17.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_10)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_11)
  (Wrd19.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_3]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto apply_list_parser_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_list_parser_6)
DEFLABEL (apply_list_parser_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (Rsp [3]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_9;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_6);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_9 9
#define ENVIRONMENT_LABEL_5_3 22
#define DEBUGGING_LABEL_5_2 21
#define OBJECT_5_3 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_8 13
#define EXECUTE_CACHE_5_7 15
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_14;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_10)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_11)
  (Wrd19.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define TAG_6_9 4
#define ENVIRONMENT_LABEL_6_3 19
#define DEBUGGING_LABEL_6_2 18
#define OBJECT_6_2 17
#define OBJECT_6_1 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_10 13
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto apply_vector_parser_8;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_vector_parser_12)
DEFLABEL (apply_vector_parser_8)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_6_0]))
    goto label_19;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  if ((Wrd13.Obj) == (current_block [OBJECT_6_0]))
    goto label_16;
  Wrd15 = Wrd13;
  goto label_15;

DEFLABEL (label_16)
  (Wrd15.Obj) = (current_block [OBJECT_6_2]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_8])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  ((Wrd22.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_19)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_21;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_18;

DEFLABEL (label_21)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_10)
  (Wrd26.Obj) = Rvl;
  goto label_20;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_6_7);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_6_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_22;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define TAG_7_10 2
#define LABEL_7_7 9
#define TAG_7_8 3
#define LABEL_7_14 11
#define LABEL_7_15 13
#define LABEL_7_16 15
#define LABEL_7_12 17
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_17 19
#define EXECUTE_CACHE_7_13 21
#define EXECUTE_CACHE_7_11 23
#define EXECUTE_CACHE_7_6 25
#define FREE_REFERENCE_7_0 28
#define FREE_ASSIGNMENT_7_0 30
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
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
      goto compile_top_level_11;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto swapB_18;

    case 4:
      current_block = (Rpc - LABEL_7_14);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_top_level_17)
DEFLABEL (compile_top_level_11)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_7])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  ((Wrd24.pObj) [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_9])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_7_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_7_7);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_23)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_20;

DEFLABEL (label_25)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_7_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_8 7
#define LABEL_8_5 9
#define LABEL_8_9 11
#define LABEL_8_13 13
#define LABEL_8_16 15
#define LABEL_8_12 17
#define LABEL_8_14 19
#define LABEL_8_17 21
#define LABEL_8_20 23
#define LABEL_8_26 25
#define LABEL_8_24 27
#define LABEL_8_27 29
#define LABEL_8_22 31
#define LABEL_8_31 33
#define LABEL_8_28 35
#define LABEL_8_30 37
#define LABEL_8_32 39
#define ENVIRONMENT_LABEL_8_3 69
#define DEBUGGING_LABEL_8_2 68
#define OBJECT_8_6 67
#define OBJECT_8_5 66
#define OBJECT_8_4 65
#define OBJECT_8_3 64
#define OBJECT_8_2 63
#define OBJECT_8_1 62
#define OBJECT_8_0 61
#define EXECUTE_CACHE_8_29 41
#define EXECUTE_CACHE_8_25 43
#define EXECUTE_CACHE_8_23 45
#define EXECUTE_CACHE_8_21 47
#define EXECUTE_CACHE_8_19 49
#define EXECUTE_CACHE_8_18 51
#define EXECUTE_CACHE_8_15 53
#define EXECUTE_CACHE_8_11 55
#define EXECUTE_CACHE_8_10 57
#define EXECUTE_CACHE_8_6 59
#define FREE_REFERENCES_LABEL_8_0 40
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
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
      goto compile_pattern_24;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_8_13);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_8_27);
      goto lambda_11;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_8_31);
      goto lambda_13;

    case 16:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_8_32);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_pattern_29)
DEFLABEL (compile_pattern_24)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 1)
    goto label_43;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_7);

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_40;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_39)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  goto lambda_11;

DEFLABEL (label_33)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_26);
  goto label_32;

DEFLABEL (label_34)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [4]);
  if (! ((Wrd12.Obj) == (Wrd13.Obj)))
    goto label_35;
  (Wrd23.pObj) = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd23.pObj)));
  (Rsp [0]) = (Wrd25.Obj);
  Rdl = (& (Rsp [6]));
  goto lambda_13;

DEFLABEL (label_35)
  if ((Wrd12.Obj) == (current_block [OBJECT_8_4]))
    goto label_36;
  Rsp = (& (Rsp [1]));
  goto lambda_11;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_13;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_16);
  goto label_37;

DEFLABEL (label_40)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  if (! ((Wrd9.uLng) == 1))
    goto label_45;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (lambda_30)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_8_27);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_31)
DEFLABEL (lambda_13)
  DLINK_INTERRUPT_CHECK (25, LABEL_8_31);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_32);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_10 7
#define LABEL_9_5 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_13 15
#define LABEL_9_14 17
#define LABEL_9_8 19
#define LABEL_9_19 21
#define LABEL_9_20 23
#define LABEL_9_18 25
#define LABEL_9_17 27
#define LABEL_9_22 29
#define ENVIRONMENT_LABEL_9_3 60
#define DEBUGGING_LABEL_9_2 59
#define OBJECT_9_17 58
#define OBJECT_9_16 57
#define OBJECT_9_15 56
#define OBJECT_9_14 55
#define OBJECT_9_13 54
#define OBJECT_9_12 53
#define OBJECT_9_11 52
#define OBJECT_9_10 51
#define OBJECT_9_9 50
#define OBJECT_9_8 49
#define OBJECT_9_7 48
#define OBJECT_9_6 47
#define OBJECT_9_5 46
#define OBJECT_9_4 45
#define OBJECT_9_3 44
#define OBJECT_9_2 43
#define OBJECT_9_1 42
#define OBJECT_9_0 41
#define EXECUTE_CACHE_9_21 31
#define EXECUTE_CACHE_9_16 33
#define EXECUTE_CACHE_9_15 35
#define EXECUTE_CACHE_9_9 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd104;
  machine_word Wrd25;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd110;
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
      goto rewrite_pattern_28;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_9_19);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_9_20);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_9_22);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_pattern_38)
DEFLABEL (rewrite_pattern_28)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_9_11]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Rsp [0]) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 2)
    goto label_44;
  if ((Wrd17.uLng) == 30)
    goto label_44;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd96.Obj) = (current_block [OBJECT_9_2]);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd99.Lng))))
    goto label_64;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd96.Obj));
  if ((Wrd25.Obj) == (Wrd17.Obj))
    goto label_57;

DEFLABEL (label_63)
  (Wrd86.Obj) = (current_block [OBJECT_9_4]);
  (Wrd89.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd89.Lng))))
    goto label_62;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_57;

DEFLABEL (label_61)
  (Wrd76.Obj) = (current_block [OBJECT_9_5]);
  (Wrd79.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd79.Lng))))
    goto label_60;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd76.Obj));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_57;

DEFLABEL (label_59)
  (Wrd66.Obj) = (current_block [OBJECT_9_6]);
  (Wrd69.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd69.Lng))))
    goto label_58;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd40.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd50.Lng)))
    goto label_41;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_41)
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_43;
  (Wrd42.Obj) = (current_block [OBJECT_9_9]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd42.Obj) = (current_block [OBJECT_9_8]);

DEFLABEL (label_42)
DEFLABEL (label_55)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd42.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_54)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd64.Obj) = (current_block [OBJECT_9_10]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  goto label_39;

DEFLABEL (label_45)
  (Wrd110.Obj) = (Rsp [0]);
  if ((Wrd110.Obj) == (current_block [OBJECT_9_0]))
    goto label_44;
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd116.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd116.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_9_12]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_48;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_47)
  (Wrd19.Obj) = (current_block [OBJECT_9_15]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_9_16]);
  (Wrd24.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_9_17]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_13]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_53;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_52)
  (Wrd22.Obj) = (current_block [OBJECT_9_14]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_51;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Wrd9.Obj) = (current_block [OBJECT_9_15]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_51)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_13]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_13]), 1);

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto label_44;

DEFLABEL (label_58)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_60)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_57;

DEFLABEL (label_62)
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_57;

DEFLABEL (label_64)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_57;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_9 9
#define LABEL_10_11 11
#define LABEL_10_13 13
#define ENVIRONMENT_LABEL_10_3 29
#define DEBUGGING_LABEL_10_2 28
#define OBJECT_10_2 27
#define OBJECT_10_1 26
#define OBJECT_10_0 25
#define EXECUTE_CACHE_10_14 15
#define EXECUTE_CACHE_10_12 17
#define EXECUTE_CACHE_10_10 19
#define EXECUTE_CACHE_10_8 21
#define FREE_REFERENCE_10_0 24
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_10_4);
      goto get_pattern_compiler_9;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_pattern_compiler_13)
DEFLABEL (get_pattern_compiler_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_16;
  Wrd13 = Wrd17;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  if (Rvl == (Wrd8.Obj))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = Rvl;

DEFLABEL (label_18)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  if ((Wrd9.Obj) == (Wrd12.Obj))
    goto label_21;
  if ((Wrd9.Obj) == (current_block [OBJECT_10_0]))
    goto label_21;
  if ((Wrd9.Obj) == (current_block [OBJECT_10_1]))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_10_2]);

DEFLABEL (label_20)
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_6 9
#define LABEL_11_10 11
#define LABEL_11_8 13
#define LABEL_11_15 15
#define LABEL_11_9 17
#define LABEL_11_18 19
#define LABEL_11_12 21
#define TAG_11_13 9
#define LABEL_11_16 23
#define LABEL_11_19 25
#define LABEL_11_21 27
#define LABEL_11_22 29
#define LABEL_11_24 31
#define TAG_11_25 14
#define ENVIRONMENT_LABEL_11_3 56
#define DEBUGGING_LABEL_11_2 55
#define OBJECT_11_3 54
#define OBJECT_11_2 53
#define OBJECT_11_1 52
#define OBJECT_11_0 51
#define EXECUTE_CACHE_11_27 33
#define EXECUTE_CACHE_11_26 35
#define EXECUTE_CACHE_11_23 37
#define EXECUTE_CACHE_11_20 39
#define EXECUTE_CACHE_11_17 41
#define EXECUTE_CACHE_11_14 43
#define EXECUTE_CACHE_11_11 45
#define FREE_REFERENCE_11_0 48
#define FREE_ASSIGNMENT_11_0 50
#define FREE_REFERENCES_LABEL_11_0 32
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto define_pattern_compiler_18;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_11_18);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_11_12);
      goto lambda_26;

    case 10:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_11_24);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_pattern_compiler_25)
DEFLABEL (define_pattern_compiler_18)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_30;
  Wrd17 = Wrd21;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_5;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_12])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_7])), (Wrd18.pObj));

DEFLABEL (label_21)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd11.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_18])), (Wrd11.pObj), (Wrd8.Obj));

DEFLABEL (label_23)
  goto label_33;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_27)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_11_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = (Rsp [0]);
  goto label_38;

DEFLABEL (label_39)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_38)
DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_11_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if (Rvl == (Wrd8.Obj))
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (* (--Rsp)) = Rvl;
  goto lambda_5;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_11_24);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_10 7
#define LABEL_12_5 9
#define LABEL_12_7 11
#define TAG_12_8 4
#define LABEL_12_12 13
#define LABEL_12_13 15
#define ENVIRONMENT_LABEL_12_3 30
#define DEBUGGING_LABEL_12_2 29
#define OBJECT_12_5 28
#define OBJECT_12_4 27
#define OBJECT_12_3 26
#define OBJECT_12_2 25
#define OBJECT_12_1 24
#define OBJECT_12_0 23
#define EXECUTE_CACHE_12_11 17
#define EXECUTE_CACHE_12_9 19
#define FREE_REFERENCE_12_0 22
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_12_4);
      goto get_context_method_7;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_context_method_13)
DEFLABEL (get_context_method_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_10);

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_16)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_15;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  if ((Wrd5.Obj) == (Wrd23.Obj))
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_24;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_24;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_23)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  if (! ((Wrd26.Obj) == (Wrd45.Obj)))
    goto label_21;
  Rvl = (current_block [OBJECT_12_5]);
  goto label_20;

DEFLABEL (label_24)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_12_4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_11)
  (Wrd26.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define LABEL_13_10 9
#define LABEL_13_11 11
#define LABEL_13_7 13
#define TAG_13_8 5
#define LABEL_13_12 15
#define LABEL_13_13 17
#define ENVIRONMENT_LABEL_13_3 33
#define DEBUGGING_LABEL_13_2 32
#define OBJECT_13_6 31
#define OBJECT_13_5 30
#define OBJECT_13_4 29
#define OBJECT_13_3 28
#define OBJECT_13_2 27
#define OBJECT_13_1 26
#define OBJECT_13_0 25
#define EXECUTE_CACHE_13_9 19
#define FREE_REFERENCE_13_0 22
#define FREE_ASSIGNMENT_13_0 24
#define FREE_REFERENCES_LABEL_13_0 18
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_13_4);
      goto define_context_method_8;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_context_method_16)
DEFLABEL (define_context_method_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 3);

DEFLABEL (label_19)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_25;
  Wrd24 = Wrd28;

DEFLABEL (label_24)
  (Wrd33.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd35.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd32.pObj) = (& (Rhp [-4]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd42.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd48.Obj) = (MAKE_OBJECT (50, (Wrd33.uLng)));
  if ((Wrd50.Obj) == (Wrd48.Obj))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_11])), (Wrd42.pObj), (Wrd39.Obj));

DEFLABEL (label_12)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd25.pObj));

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  if ((Wrd5.Obj) == (Wrd23.Obj))
    goto label_30;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_32;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_32;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_31)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  if (! ((Wrd26.Obj) == (Wrd45.Obj)))
    goto label_29;
  Rvl = (current_block [OBJECT_13_6]);
  goto label_28;

DEFLABEL (label_32)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_13_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_14)
  (Wrd26.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_13_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_14_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_8 7
#define LABEL_15_11 9
#define LABEL_15_12 11
#define LABEL_15_10 13
#define ENVIRONMENT_LABEL_15_3 26
#define DEBUGGING_LABEL_15_2 25
#define OBJECT_15_3 24
#define OBJECT_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_13 15
#define EXECUTE_CACHE_15_9 17
#define EXECUTE_CACHE_15_7 19
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_15_11);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd43.Obj) = ((Wrd34.pObj) [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_24;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_23)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_22;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
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
  (Wrd22.Obj) = (current_block [OBJECT_15_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_16)
  (Wrd36.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_8 7
#define LABEL_16_11 9
#define LABEL_16_12 11
#define LABEL_16_10 13
#define ENVIRONMENT_LABEL_16_3 26
#define DEBUGGING_LABEL_16_2 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_13 15
#define EXECUTE_CACHE_16_9 17
#define EXECUTE_CACHE_16_7 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_16_11);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_16_12);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd43.Obj) = ((Wrd34.pObj) [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_24;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_23)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_22;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
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
  (Wrd22.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_16)
  (Wrd36.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_8 7
#define LABEL_17_10 9
#define LABEL_17_11 11
#define LABEL_17_13 13
#define LABEL_17_14 15
#define LABEL_17_12 17
#define ENVIRONMENT_LABEL_17_3 31
#define DEBUGGING_LABEL_17_2 30
#define OBJECT_17_4 29
#define OBJECT_17_3 28
#define OBJECT_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_15 19
#define EXECUTE_CACHE_17_9 21
#define EXECUTE_CACHE_17_7 23
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_17_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_17_14);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_35;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd30.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_34)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_33;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_32)
  (Wrd55.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd59.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd67.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_31;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd71.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_30)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_29;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_17_4]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_23)
  (Wrd71.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_22)
  (Wrd45.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_8 7
#define LABEL_18_10 9
#define LABEL_18_11 11
#define LABEL_18_13 13
#define LABEL_18_14 15
#define LABEL_18_12 17
#define ENVIRONMENT_LABEL_18_3 31
#define DEBUGGING_LABEL_18_2 30
#define OBJECT_18_4 29
#define OBJECT_18_3 28
#define OBJECT_18_2 27
#define OBJECT_18_1 26
#define OBJECT_18_0 25
#define EXECUTE_CACHE_18_15 19
#define EXECUTE_CACHE_18_9 21
#define EXECUTE_CACHE_18_7 23
#define FREE_REFERENCES_LABEL_18_0 18
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_18_13);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_35;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd30.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_34)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_33;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_32)
  (Wrd55.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd59.Obj) = (current_block [OBJECT_18_3]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd67.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_31;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd71.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_30)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_29;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_18_4]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_23)
  (Wrd71.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_22)
  (Wrd45.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define LABEL_19_11 15
#define LABEL_19_4 17
#define LABEL_19_12 19
#define ENVIRONMENT_LABEL_19_3 38
#define DEBUGGING_LABEL_19_2 37
#define OBJECT_19_13 36
#define OBJECT_19_12 35
#define OBJECT_19_11 34
#define OBJECT_19_10 33
#define OBJECT_19_9 32
#define OBJECT_19_8 31
#define OBJECT_19_7 30
#define OBJECT_19_6 29
#define OBJECT_19_5 28
#define OBJECT_19_4 27
#define OBJECT_19_3 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_13 21
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd125;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd52;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_19_4);
      goto equality_predicate_12;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (equality_predicate_20)
DEFLABEL (equality_predicate_12)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_19_11]);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd37.Lng))))
    goto label_46;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_45;

DEFLABEL (label_44)
  (Wrd13.Obj) = (current_block [OBJECT_19_12]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_22)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_24;
  (Wrd15.Obj) = (current_block [OBJECT_19_8]);
  goto label_23;

DEFLABEL (label_24)
  (Wrd15.Obj) = (current_block [OBJECT_19_7]);

DEFLABEL (label_23)
DEFLABEL (label_43)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_19_13]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 2)
    goto label_26;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd48.Obj) = (Rsp [0]);
  if ((Wrd48.Obj) == (current_block [OBJECT_19_0]))
    goto label_26;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_19_1]);
  (Wrd120.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd120.Lng))))
    goto label_42;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd117.Obj));
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd55.Obj) == (Wrd57.Obj))
    goto label_35;

DEFLABEL (label_41)
  (Wrd107.Obj) = (current_block [OBJECT_19_3]);
  (Wrd110.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd110.Lng))))
    goto label_40;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd107.Obj));
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_35;

DEFLABEL (label_39)
  (Wrd97.Obj) = (current_block [OBJECT_19_4]);
  (Wrd100.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd100.Lng))))
    goto label_38;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd97.Obj));
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd63.Obj) == (Wrd65.Obj))
    goto label_35;

DEFLABEL (label_37)
  (Wrd87.Obj) = (current_block [OBJECT_19_5]);
  (Wrd90.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd90.Lng))))
    goto label_36;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd87.Obj));
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd67.Obj) == (Wrd69.Obj))
    goto label_35;

DEFLABEL (label_34)
  (Wrd70.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd80.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd80.Lng))))
    goto label_21;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd74.Obj) == (Wrd76.Obj))
    goto label_29;
  (Wrd72.Obj) = (current_block [OBJECT_19_8]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd72.Obj) = (current_block [OBJECT_19_7]);

DEFLABEL (label_28)
DEFLABEL (label_33)
  Rsp = (& (Rsp [3]));
  if ((Wrd72.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_19_10]);
  goto label_30;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_19_9]);

DEFLABEL (label_30)
  goto label_25;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_36)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_35;

DEFLABEL (label_40)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_35;

DEFLABEL (label_42)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_35;

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto label_26;

DEFLABEL (label_46)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_7 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
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
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define LABEL_21_8 7
#define TAG_21_9 2
#define ENVIRONMENT_LABEL_21_3 13
#define DEBUGGING_LABEL_21_2 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_7 9
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_21_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_21_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_21_0]);
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
  (Wrd21.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_8 7
#define LABEL_22_9 9
#define TAG_22_10 3
#define LABEL_22_12 11
#define TAG_22_13 4
#define ENVIRONMENT_LABEL_22_3 19
#define DEBUGGING_LABEL_22_2 18
#define OBJECT_22_0 17
#define EXECUTE_CACHE_22_11 13
#define EXECUTE_CACHE_22_7 15
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_22_12);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_22_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_12])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd16.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_22_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_8 7
#define LABEL_23_13 9
#define LABEL_23_14 11
#define LABEL_23_9 13
#define TAG_23_10 5
#define LABEL_23_12 15
#define LABEL_23_16 17
#define LABEL_23_20 19
#define LABEL_23_21 21
#define LABEL_23_22 23
#define LABEL_23_17 25
#define TAG_23_18 11
#define LABEL_23_19 27
#define LABEL_23_23 29
#define ENVIRONMENT_LABEL_23_3 48
#define DEBUGGING_LABEL_23_2 47
#define OBJECT_23_7 46
#define OBJECT_23_6 45
#define OBJECT_23_5 44
#define OBJECT_23_4 43
#define OBJECT_23_3 42
#define OBJECT_23_2 41
#define OBJECT_23_1 40
#define OBJECT_23_0 39
#define EXECUTE_CACHE_23_24 31
#define EXECUTE_CACHE_23_15 33
#define EXECUTE_CACHE_23_11 35
#define EXECUTE_CACHE_23_7 37
#define FREE_REFERENCES_LABEL_23_0 30
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_32;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_41;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_23_13);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_23_14);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto lambda_42;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_23_16);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_23_20);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_23_21);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_23_22);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_23_17);
      goto lambda_43;

    case 12:
      current_block = (Rpc - LABEL_23_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_23_23);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_9])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd18 = Wrd9;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
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
  (Wrd22.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd40.Obj) = ((Wrd30.pObj) [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_47;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd33.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_46)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_45;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_23_5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_23_6]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_34)
  (Wrd33.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_23_9);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_17])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23_16);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_23_7]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd42.Obj) = ((Wrd18.pObj) [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_53;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd35.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_52)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_51;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_50)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_49;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_21]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_37)
  (Wrd50.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_20]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_36)
  (Wrd35.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_23_17);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_23);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_14 9
#define LABEL_24_9 11
#define TAG_24_10 4
#define LABEL_24_12 13
#define LABEL_24_13 15
#define ENVIRONMENT_LABEL_24_3 31
#define DEBUGGING_LABEL_24_2 30
#define OBJECT_24_4 29
#define OBJECT_24_3 28
#define OBJECT_24_2 27
#define OBJECT_24_1 26
#define OBJECT_24_0 25
#define EXECUTE_CACHE_24_16 17
#define EXECUTE_CACHE_24_15 19
#define EXECUTE_CACHE_24_11 21
#define EXECUTE_CACHE_24_7 23
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_24_14);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd36.Obj) = ((Wrd22.pObj) [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_20;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Wrd9.Obj) = (current_block [OBJECT_24_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_24_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define LABEL_25_14 9
#define LABEL_25_9 11
#define TAG_25_10 4
#define LABEL_25_12 13
#define LABEL_25_13 15
#define ENVIRONMENT_LABEL_25_3 35
#define DEBUGGING_LABEL_25_2 34
#define OBJECT_25_8 33
#define OBJECT_25_7 32
#define OBJECT_25_6 31
#define OBJECT_25_5 30
#define OBJECT_25_4 29
#define OBJECT_25_3 28
#define OBJECT_25_2 27
#define OBJECT_25_1 26
#define OBJECT_25_0 25
#define EXECUTE_CACHE_25_16 17
#define EXECUTE_CACHE_25_15 19
#define EXECUTE_CACHE_25_11 21
#define EXECUTE_CACHE_25_7 23
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_25_14);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
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
  (Wrd22.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd52.Obj) = ((Wrd38.pObj) [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_31;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (Wrd9.Obj) = (current_block [OBJECT_25_8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_25_6]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_25_7]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_5]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_25_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 14
#define DEBUGGING_LABEL_26_2 13
#define OBJECT_26_1 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_10)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_9;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (label_9)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_9 7
#define LABEL_27_7 9
#define LABEL_27_8 11
#define LABEL_27_13 13
#define LABEL_27_10 15
#define TAG_27_11 6
#define LABEL_27_14 17
#define ENVIRONMENT_LABEL_27_3 33
#define DEBUGGING_LABEL_27_2 32
#define OBJECT_27_2 31
#define OBJECT_27_1 30
#define OBJECT_27_0 29
#define EXECUTE_CACHE_27_16 19
#define EXECUTE_CACHE_27_15 21
#define EXECUTE_CACHE_27_12 23
#define EXECUTE_CACHE_27_6 25
#define FREE_REFERENCE_27_0 28
#define FREE_REFERENCES_LABEL_27_0 18
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_27_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_27_13);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_27_10);
      goto lambda_12;

    case 7:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_16;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_15)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_10])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [5]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_13])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_27_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_9 7
#define LABEL_28_7 9
#define LABEL_28_10 11
#define LABEL_28_13 13
#define LABEL_28_11 15
#define LABEL_28_15 17
#define LABEL_28_12 19
#define LABEL_28_14 21
#define ENVIRONMENT_LABEL_28_3 34
#define DEBUGGING_LABEL_28_2 33
#define OBJECT_28_3 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_17 23
#define EXECUTE_CACHE_28_16 25
#define EXECUTE_CACHE_28_8 27
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto loop_8;

    case 5:
      current_block = (Rpc - LABEL_28_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_28_15);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_22;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_21)
  Rdl = (& (Rsp [5]));
  goto loop_8;

DEFLABEL (label_22)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_28_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.Obj) = (current_block [OBJECT_28_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_27;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_26)
  Rdl = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 1);

DEFLABEL (label_16)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_15)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define LABEL_29_9 9
#define TAG_29_10 3
#define LABEL_29_11 11
#define LABEL_29_13 13
#define LABEL_29_19 15
#define LABEL_29_14 17
#define LABEL_29_16 19
#define TAG_29_17 8
#define LABEL_29_18 21
#define LABEL_29_22 23
#define ENVIRONMENT_LABEL_29_3 45
#define DEBUGGING_LABEL_29_2 44
#define OBJECT_29_6 43
#define OBJECT_29_5 42
#define OBJECT_29_4 41
#define OBJECT_29_3 40
#define OBJECT_29_2 39
#define OBJECT_29_1 38
#define OBJECT_29_0 37
#define EXECUTE_CACHE_29_23 25
#define EXECUTE_CACHE_29_21 27
#define EXECUTE_CACHE_29_20 29
#define EXECUTE_CACHE_29_15 31
#define EXECUTE_CACHE_29_12 33
#define EXECUTE_CACHE_29_8 35
#define FREE_REFERENCES_LABEL_29_0 24
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto lambda_29;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_29_19);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_29_16);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_29_18);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_29_22);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd20 = Wrd7;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [6]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_29_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_29_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_29_4]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_29_9);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_16])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = ((Wrd17.pObj) [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_32;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd22.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_31)
  (Wrd40.Obj) = (current_block [OBJECT_29_6]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_18);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [6]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_32)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_5]), 1);

DEFLABEL (label_25)
  (Wrd22.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_29_16);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_22);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_10 9
#define LABEL_30_7 11
#define TAG_30_8 4
#define LABEL_30_11 13
#define LABEL_30_14 15
#define TAG_30_15 6
#define LABEL_30_20 17
#define LABEL_30_18 19
#define LABEL_30_16 21
#define TAG_30_17 9
#define LABEL_30_23 23
#define LABEL_30_21 25
#define TAG_30_22 11
#define LABEL_30_24 27
#define LABEL_30_26 29
#define ENVIRONMENT_LABEL_30_3 46
#define DEBUGGING_LABEL_30_2 45
#define OBJECT_30_3 44
#define OBJECT_30_2 43
#define OBJECT_30_1 42
#define OBJECT_30_0 41
#define EXECUTE_CACHE_30_25 31
#define EXECUTE_CACHE_30_19 33
#define EXECUTE_CACHE_30_13 35
#define EXECUTE_CACHE_30_12 37
#define EXECUTE_CACHE_30_9 39
#define FREE_REFERENCES_LABEL_30_0 30
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_30_7);
      goto lambda_28;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_30_14);
      goto lambda_29;

    case 7:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_30_16);
      goto loop_15;

    case 10:
      current_block = (Rpc - LABEL_30_23);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_30_21);
      goto lambda_31;

    case 12:
      current_block = (Rpc - LABEL_30_24);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_30_26);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_7])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_33;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  if (! ((Wrd6.uLng) == 1))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_35)
  if (! ((Wrd12.Obj) == (current_block [OBJECT_30_1])))
    goto label_32;
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_34;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd25.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_30_7);

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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_30_14);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_39;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_39)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_16])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  Wrd21 = Wrd23;
  (Wrd22.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_15;

DEFLABEL (loop_30)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_30_16);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_21])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  ((Wrd18.pObj) [4]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [0]) = (Wrd20.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_42)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_24)
  (Wrd23.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_30_21);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_24);
  (Rsp [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_15;

DEFLABEL (label_44)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_7 7
#define LABEL_31_5 9
#define LABEL_31_9 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define ENVIRONMENT_LABEL_31_3 27
#define DEBUGGING_LABEL_31_2 26
#define OBJECT_31_2 25
#define OBJECT_31_1 24
#define OBJECT_31_0 23
#define EXECUTE_CACHE_31_13 17
#define EXECUTE_CACHE_31_10 19
#define EXECUTE_CACHE_31_8 21
#define FREE_REFERENCES_LABEL_31_0 16
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_16;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_15)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_14;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_12)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_31_11);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_12);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_5 11
#define LABEL_32_10 13
#define TAG_32_11 5
#define LABEL_32_15 15
#define LABEL_32_16 17
#define LABEL_32_12 19
#define LABEL_32_14 21
#define ENVIRONMENT_LABEL_32_3 35
#define DEBUGGING_LABEL_32_2 34
#define OBJECT_32_4 33
#define OBJECT_32_3 32
#define OBJECT_32_2 31
#define OBJECT_32_1 30
#define OBJECT_32_0 29
#define EXECUTE_CACHE_32_17 23
#define EXECUTE_CACHE_32_13 25
#define EXECUTE_CACHE_32_9 27
#define FREE_REFERENCES_LABEL_32_0 22
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_32_15);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_32_16);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_27;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_26)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_24)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_23;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_23)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_15)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_32_10);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd11.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd13.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_30)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_29;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_32_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_32_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd18.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_29)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_5 11
#define LABEL_33_10 13
#define TAG_33_11 5
#define LABEL_33_17 15
#define LABEL_33_18 17
#define LABEL_33_12 19
#define LABEL_33_14 21
#define LABEL_33_15 23
#define LABEL_33_16 25
#define ENVIRONMENT_LABEL_33_3 41
#define DEBUGGING_LABEL_33_2 40
#define OBJECT_33_2 39
#define OBJECT_33_1 38
#define OBJECT_33_0 37
#define EXECUTE_CACHE_33_21 27
#define EXECUTE_CACHE_33_20 29
#define EXECUTE_CACHE_33_19 31
#define EXECUTE_CACHE_33_13 33
#define EXECUTE_CACHE_33_9 35
#define FREE_REFERENCES_LABEL_33_0 26
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_33_10);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_33_17);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_33_18);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_25)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_23)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_22;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_22)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_33_10);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd27.Obj) = ((Wrd18.pObj) [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_30;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_29)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_28;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_28)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_7 7
#define LABEL_34_8 9
#define LABEL_34_5 11
#define LABEL_34_10 13
#define TAG_34_11 5
#define LABEL_34_12 15
#define LABEL_34_14 17
#define LABEL_34_17 19
#define LABEL_34_18 21
#define LABEL_34_15 23
#define LABEL_34_16 25
#define ENVIRONMENT_LABEL_34_3 41
#define DEBUGGING_LABEL_34_2 40
#define OBJECT_34_4 39
#define OBJECT_34_3 38
#define OBJECT_34_2 37
#define OBJECT_34_1 36
#define OBJECT_34_0 35
#define EXECUTE_CACHE_34_20 27
#define EXECUTE_CACHE_34_19 29
#define EXECUTE_CACHE_34_13 31
#define EXECUTE_CACHE_34_9 33
#define FREE_REFERENCES_LABEL_34_0 26
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_34_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_34_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_34_18);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_29)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_27)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_26;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_26)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_34_10);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_34_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd35.Obj) = ((Wrd26.pObj) [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_34;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd28.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_33)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_32;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_34_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_20)
  (Wrd28.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define LABEL_35_5 11
#define LABEL_35_10 13
#define TAG_35_11 5
#define LABEL_35_12 15
#define LABEL_35_14 17
#define LABEL_35_17 19
#define LABEL_35_18 21
#define LABEL_35_15 23
#define LABEL_35_16 25
#define ENVIRONMENT_LABEL_35_3 42
#define DEBUGGING_LABEL_35_2 41
#define OBJECT_35_5 40
#define OBJECT_35_4 39
#define OBJECT_35_3 38
#define OBJECT_35_2 37
#define OBJECT_35_1 36
#define OBJECT_35_0 35
#define EXECUTE_CACHE_35_20 27
#define EXECUTE_CACHE_35_19 29
#define EXECUTE_CACHE_35_13 31
#define EXECUTE_CACHE_35_9 33
#define FREE_REFERENCES_LABEL_35_0 26
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_35_10);
      goto lambda_26;

    case 6:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_35_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_35_17);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_35_18);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_35_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_32;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_31)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_29)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_28)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_20)
  (Wrd19.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_35_10);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_14);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd35.Obj) = ((Wrd26.pObj) [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_36;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd28.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_35)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_34;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Wrd9.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_35_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_35_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_7 7
#define LABEL_36_8 9
#define LABEL_36_5 11
#define LABEL_36_10 13
#define TAG_36_11 5
#define LABEL_36_18 15
#define LABEL_36_19 17
#define LABEL_36_12 19
#define LABEL_36_14 21
#define TAG_36_15 9
#define LABEL_36_16 23
#define LABEL_36_17 25
#define LABEL_36_21 27
#define ENVIRONMENT_LABEL_36_3 47
#define DEBUGGING_LABEL_36_2 46
#define OBJECT_36_6 45
#define OBJECT_36_5 44
#define OBJECT_36_4 43
#define OBJECT_36_3 42
#define OBJECT_36_2 41
#define OBJECT_36_1 40
#define OBJECT_36_0 39
#define EXECUTE_CACHE_36_23 29
#define EXECUTE_CACHE_36_22 31
#define EXECUTE_CACHE_36_20 33
#define EXECUTE_CACHE_36_13 35
#define EXECUTE_CACHE_36_9 37
#define FREE_REFERENCES_LABEL_36_0 28
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto lambda_30;

    case 6:
      current_block = (Rpc - LABEL_36_18);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_36_19);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_36_14);
      goto lambda_31;

    case 10:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_36_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_36_21);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_29)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_36_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_33)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_24)
  (Wrd19.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_36_10);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_14])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = ((Wrd20.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_41;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd22.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_40)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_39;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (Wrd9.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_36_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_22]));

DEFLABEL (label_39)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_36_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_36_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_36_21);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_36_6]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_8 7
#define LABEL_37_9 9
#define LABEL_37_7 11
#define ENVIRONMENT_LABEL_37_3 22
#define DEBUGGING_LABEL_37_2 21
#define OBJECT_37_3 20
#define OBJECT_37_2 19
#define OBJECT_37_1 18
#define OBJECT_37_0 17
#define EXECUTE_CACHE_37_10 13
#define EXECUTE_CACHE_37_6 15
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_37_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_12)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_11;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
#define EXECUTE_CACHE_38_8 9
#define EXECUTE_CACHE_38_6 11
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (lambda_16)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_38_0]);
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
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_8 7
#define LABEL_39_9 9
#define TAG_39_10 3
#define ENVIRONMENT_LABEL_39_3 21
#define DEBUGGING_LABEL_39_2 20
#define OBJECT_39_4 19
#define OBJECT_39_3 18
#define OBJECT_39_2 17
#define OBJECT_39_1 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_11 11
#define EXECUTE_CACHE_39_7 13
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_24;

    case 2:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
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
  (Wrd22.Obj) = (current_block [OBJECT_39_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_39_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_39_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_39_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
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
  (Wrd34.Obj) = ((Wrd9.pObj) [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_8 7
#define TAG_40_9 2
#define LABEL_40_10 9
#define LABEL_40_11 11
#define ENVIRONMENT_LABEL_40_3 19
#define DEBUGGING_LABEL_40_2 18
#define OBJECT_40_0 17
#define EXECUTE_CACHE_40_12 13
#define EXECUTE_CACHE_40_7 15
#define FREE_REFERENCES_LABEL_40_0 12
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_40_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_40_10);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_8])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (Rsp [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_40_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_40_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_40_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_40_0]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define ENVIRONMENT_LABEL_41_3 11
#define DEBUGGING_LABEL_41_2 10
#define OBJECT_41_0 9
#define EXECUTE_CACHE_41_7 7
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_41_0]);
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
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define TAG_42_6 1
#define LABEL_42_8 7
#define TAG_42_9 2
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_7 9
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_42_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_42_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_42_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
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
  (Wrd21.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_8 7
#define TAG_43_9 2
#define LABEL_43_10 9
#define LABEL_43_11 11
#define ENVIRONMENT_LABEL_43_3 19
#define DEBUGGING_LABEL_43_2 18
#define OBJECT_43_0 17
#define EXECUTE_CACHE_43_12 13
#define EXECUTE_CACHE_43_7 15
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_43_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_43_10);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_8])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (Rsp [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_43_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_43_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_43_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_11);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_43_0]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_8 7
#define LABEL_44_9 9
#define TAG_44_10 3
#define LABEL_44_12 11
#define TAG_44_13 4
#define ENVIRONMENT_LABEL_44_3 19
#define DEBUGGING_LABEL_44_2 18
#define OBJECT_44_0 17
#define EXECUTE_CACHE_44_11 13
#define EXECUTE_CACHE_44_7 15
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_44_12);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_44_0]);
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
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_44_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_44_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_44_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd26.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define ENVIRONMENT_LABEL_45_3 17
#define DEBUGGING_LABEL_45_2 16
#define OBJECT_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 9
#define EXECUTE_CACHE_45_6 11
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (lambda_17)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_45_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_45_1]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_8 7
#define LABEL_46_9 9
#define TAG_46_10 3
#define ENVIRONMENT_LABEL_46_3 22
#define DEBUGGING_LABEL_46_2 21
#define OBJECT_46_5 20
#define OBJECT_46_4 19
#define OBJECT_46_3 18
#define OBJECT_46_2 17
#define OBJECT_46_1 16
#define OBJECT_46_0 15
#define EXECUTE_CACHE_46_11 11
#define EXECUTE_CACHE_46_7 13
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_46_4);
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd51.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_46_2]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_46_3]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_46_9);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_46_4]);
  (Wrd9.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_46_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd38.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define TAG_47_6 1
#define LABEL_47_8 7
#define TAG_47_9 2
#define LABEL_47_10 9
#define TAG_47_11 3
#define LABEL_47_12 11
#define ENVIRONMENT_LABEL_47_3 19
#define DEBUGGING_LABEL_47_2 18
#define OBJECT_47_0 17
#define EXECUTE_CACHE_47_13 13
#define EXECUTE_CACHE_47_7 15
#define FREE_REFERENCES_LABEL_47_0 12
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_47_8);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_47_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_10])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Rsp [5]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_47_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_47_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd29.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd34.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_47_10);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_47_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define ENVIRONMENT_LABEL_48_3 11
#define DEBUGGING_LABEL_48_2 10
#define OBJECT_48_0 9
#define EXECUTE_CACHE_48_7 7
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [5]);
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
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define LABEL_49_8 7
#define TAG_49_9 2
#define ENVIRONMENT_LABEL_49_3 13
#define DEBUGGING_LABEL_49_2 12
#define OBJECT_49_0 11
#define EXECUTE_CACHE_49_7 9
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_49_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_49_8);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_8])));
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
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_49_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
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
  (Wrd21.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd14.pObj) [4]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd33.Obj) = ((Wrd14.pObj) [5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define TAG_50_6 1
#define LABEL_50_8 7
#define TAG_50_9 2
#define LABEL_50_10 9
#define TAG_50_11 3
#define LABEL_50_12 11
#define ENVIRONMENT_LABEL_50_3 19
#define DEBUGGING_LABEL_50_2 18
#define OBJECT_50_0 17
#define EXECUTE_CACHE_50_13 13
#define EXECUTE_CACHE_50_7 15
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_50_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_50_10);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_50_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_10])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Rsp [5]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_50_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd29.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd34.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_50_10);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define TAG_51_6 1
#define LABEL_51_8 7
#define LABEL_51_9 9
#define TAG_51_10 3
#define LABEL_51_12 11
#define TAG_51_13 4
#define ENVIRONMENT_LABEL_51_3 19
#define DEBUGGING_LABEL_51_2 18
#define OBJECT_51_0 17
#define EXECUTE_CACHE_51_11 13
#define EXECUTE_CACHE_51_7 15
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_51_9);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_51_12);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_51_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_51_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_51_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd26.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define ENVIRONMENT_LABEL_52_3 16
#define DEBUGGING_LABEL_52_2 15
#define OBJECT_52_1 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_8 9
#define EXECUTE_CACHE_52_6 11
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto join_vals_4;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (join_vals_7)
DEFLABEL (join_vals_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_52_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_52_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 12
#define DEBUGGING_LABEL_53_2 11
#define OBJECT_53_2 10
#define OBJECT_53_1 9
#define OBJECT_53_0 8
#define FREE_REFERENCE_53_0 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_53_4);
      goto single_val_4;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (single_val_8)
DEFLABEL (single_val_4)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd15.Obj) = (current_block [OBJECT_53_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_53_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_53_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 6
#define DEBUGGING_LABEL_54_2 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto null_vals_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (null_vals_3)
DEFLABEL (null_vals_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  Rvl = (current_block [OBJECT_54_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_8 11
#define LABEL_55_10 13
#define LABEL_55_9 15
#define LABEL_55_12 17
#define ENVIRONMENT_LABEL_55_3 28
#define DEBUGGING_LABEL_55_2 27
#define OBJECT_55_3 26
#define OBJECT_55_2 25
#define OBJECT_55_1 24
#define OBJECT_55_0 23
#define EXECUTE_CACHE_55_11 19
#define FREE_REFERENCE_55_0 22
#define FREE_REFERENCES_LABEL_55_0 18
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd66;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_55_4);
      goto structure_parser_values__list_11;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_55_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_55_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_55_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_parser_values__list_19)
DEFLABEL (structure_parser_values__list_11)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_9;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_55_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_55_0]))
    goto label_34;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_21;
  (Wrd9.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (label_21)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd21.Obj) = ((Wrd14.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_33;
  Wrd13 = Wrd21;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_31;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_30)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd36.Obj))
    goto label_26;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_25;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_24)
  Rdl = (& (Rsp [3]));
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_23;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_9;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 1);

DEFLABEL (label_15)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_29;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_28)
  (Wrd77.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));

DEFLABEL (label_27)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 1);

DEFLABEL (label_16)
  (Wrd66.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd61.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 1);

DEFLABEL (label_14)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_6])), (Wrd14.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rvl = (Rsp [1]);
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define ENVIRONMENT_LABEL_56_3 14
#define DEBUGGING_LABEL_56_2 13
#define EXECUTE_CACHE_56_6 9
#define FREE_REFERENCE_56_0 12
#define FREE_REFERENCES_LABEL_56_0 8
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_56_4);
      goto list__structure_parser_values_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list__structure_parser_values_5)
DEFLABEL (list__structure_parser_values_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_56_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 8
#define DEBUGGING_LABEL_57_2 7
#define EXECUTE_CACHE_57_5 5
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto structure_parser_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_parser_values_3)
DEFLABEL (structure_parser_values_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define LABEL_58_9 11
#define LABEL_58_11 13
#define LABEL_58_10 15
#define LABEL_58_14 17
#define LABEL_58_8 19
#define LABEL_58_15 21
#define LABEL_58_13 23
#define ENVIRONMENT_LABEL_58_3 34
#define DEBUGGING_LABEL_58_2 33
#define OBJECT_58_3 32
#define OBJECT_58_2 31
#define OBJECT_58_1 30
#define OBJECT_58_0 29
#define EXECUTE_CACHE_58_12 25
#define FREE_REFERENCE_58_0 28
#define FREE_REFERENCES_LABEL_58_0 24
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_58_4);
      goto map_structure_parser_values_13;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_58_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_58_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_58_15);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_58_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_structure_parser_values_22)
DEFLABEL (map_structure_parser_values_13)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_11;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  DLINK_INTERRUPT_CHECK (25, LABEL_58_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_58_0])))
    goto label_24;
  Rvl = (Wrd5.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_25;
  (Wrd9.Obj) = (current_block [OBJECT_58_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (label_25)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd21.Obj) = ((Wrd14.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_38;
  Wrd13 = Wrd21;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_36;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_35)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd36.Obj))
    goto label_30;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_29;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_28)
  Rdl = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_27;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_26)
  Rdl = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_58_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 1);

DEFLABEL (label_19)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_17)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_34;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_33)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd16.Obj) = ((Wrd9.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd16;

DEFLABEL (label_31)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_15])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd10.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_18)
  (Wrd70.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd70.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 1);

DEFLABEL (label_16)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd14.pObj));

DEFLABEL (label_15)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_9 11
#define LABEL_59_8 13
#define LABEL_59_10 15
#define ENVIRONMENT_LABEL_59_3 23
#define DEBUGGING_LABEL_59_2 22
#define OBJECT_59_3 21
#define OBJECT_59_2 20
#define OBJECT_59_1 19
#define OBJECT_59_0 18
#define FREE_REFERENCE_59_0 17
#define FREE_REFERENCES_LABEL_59_0 16
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_59_4);
      goto structure_parser_valuesP_10;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_59_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_parser_valuesP_17)
DEFLABEL (structure_parser_valuesP_10)
  INTERRUPT_CHECK (26, LABEL_59_4);
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_59_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_59_0]))
    goto label_26;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_28;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_27)
  (Wrd26.Obj) = (* (Rsp++));
  if ((Wrd17.Obj) == (Wrd26.Obj))
    goto label_26;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_25;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_24)
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_8;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_59_2]);
  goto label_19;

DEFLABEL (label_28)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_13)
  (Wrd17.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd12.pObj));

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 13
#define DEBUGGING_LABEL_60_2 12
#define OBJECT_60_0 11
#define EXECUTE_CACHE_60_7 7
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto guarantee_structure_parser_values_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_structure_parser_values_4)
DEFLABEL (guarantee_structure_parser_values_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 11
#define DEBUGGING_LABEL_61_2 10
#define OBJECT_61_2 9
#define OBJECT_61_1 8
#define OBJECT_61_0 7
#define EXECUTE_CACHE_61_5 5
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_61_4);
      goto error_not_structure_parser_values_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_structure_parser_values_5)
DEFLABEL (error_not_structure_parser_values_2)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_61_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_61_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define LABEL_62_7 9
#define LABEL_62_9 11
#define LABEL_62_8 13
#define LABEL_62_12 15
#define LABEL_62_11 17
#define ENVIRONMENT_LABEL_62_3 30
#define DEBUGGING_LABEL_62_2 29
#define OBJECT_62_5 28
#define OBJECT_62_4 27
#define OBJECT_62_3 26
#define OBJECT_62_2 25
#define OBJECT_62_1 24
#define OBJECT_62_0 23
#define EXECUTE_CACHE_62_10 19
#define FREE_REFERENCE_62_0 22
#define FREE_REFERENCES_LABEL_62_0 18
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_62_4);
      goto structure_parser_values_length_11;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_62_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_62_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_parser_values_length_18)
DEFLABEL (structure_parser_values_length_11)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_9;

DEFLABEL (loop_19)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_62_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_62_0]))
    goto label_33;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_20;
  (Wrd9.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (label_20)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd21.Obj) = ((Wrd14.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_32;
  Wrd13 = Wrd21;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_30;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_29)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd36.Obj))
    goto label_27;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_26;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_25)
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_23)
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_21;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_21;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_16)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 1);

DEFLABEL (label_15)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_62_3]);

DEFLABEL (label_28)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_30)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_14)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd23.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_6])), (Wrd14.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_62_1]);
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_7 9
#define LABEL_63_8 11
#define LABEL_63_9 13
#define LABEL_63_10 15
#define LABEL_63_11 17
#define LABEL_63_13 19
#define LABEL_63_14 21
#define LABEL_63_15 23
#define LABEL_63_16 25
#define ENVIRONMENT_LABEL_63_3 39
#define DEBUGGING_LABEL_63_2 38
#define OBJECT_63_4 37
#define OBJECT_63_3 36
#define OBJECT_63_2 35
#define OBJECT_63_1 34
#define OBJECT_63_0 33
#define EXECUTE_CACHE_63_17 27
#define EXECUTE_CACHE_63_12 29
#define FREE_REFERENCE_63_0 32
#define FREE_REFERENCES_LABEL_63_0 26
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_63_4);
      goto structure_parser_values_ref_17;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_63_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_63_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_63_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_63_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_63_14);
      goto pop_15;

    case 10:
      current_block = (Rpc - LABEL_63_15);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_63_16);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_parser_values_ref_28)
DEFLABEL (structure_parser_values_ref_17)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_6;

DEFLABEL (loop_29)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_63_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_63_0])))
    goto label_32;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  goto pop_15;

DEFLABEL (label_32)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_33;
  (Wrd9.Obj) = (current_block [OBJECT_63_4]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (label_33)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_48;
  Wrd11 = Wrd15;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_45)
  (Wrd26.Obj) = (* (Rsp++));
  if ((Wrd17.Obj) == (Wrd26.Obj))
    goto label_38;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_37;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_36)
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [2]) = (Wrd36.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_35;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_6;

DEFLABEL (label_35)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (label_22)
  (Wrd40.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 1);

DEFLABEL (label_21)
  (Wrd27.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_44;
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_44;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if ((Wrd79.Lng) < (Wrd81.Lng))
    goto label_41;

DEFLABEL (label_40)
  (Wrd59.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd59.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_39;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  Rvl = ((Wrd62.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 1);

DEFLABEL (label_41)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_43;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd74.Lng) = ((Wrd76.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd74.Lng)))
    goto label_43;
  (Wrd71.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd71.Obj);
  goto label_31;

DEFLABEL (label_43)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (Wrd71.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (label_20)
  (Wrd17.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_47;

DEFLABEL (pop_30)
DEFLABEL (pop_15)
  INTERRUPT_CHECK (26, LABEL_63_14);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_63_13);

DEFLABEL (label_53)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_52;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_51)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_50;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_49)
  (Rsp [2]) = (Wrd21.Obj);
  goto loop_6;

DEFLABEL (label_50)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 1);

DEFLABEL (label_26)
  (Wrd21.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 9
#define DEBUGGING_LABEL_64_2 8
#define OBJECT_64_0 7
#define EXECUTE_CACHE_64_5 5
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto make_object_parser_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_object_parser_3)
DEFLABEL (make_object_parser_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 9
#define DEBUGGING_LABEL_65_2 8
#define OBJECT_65_0 7
#define EXECUTE_CACHE_65_5 5
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto make_object_winner_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_object_winner_3)
DEFLABEL (make_object_winner_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 9
#define DEBUGGING_LABEL_66_2 8
#define OBJECT_66_0 7
#define EXECUTE_CACHE_66_5 5
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto make_list_parser_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_list_parser_3)
DEFLABEL (make_list_parser_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 9
#define DEBUGGING_LABEL_67_2 8
#define OBJECT_67_0 7
#define EXECUTE_CACHE_67_5 5
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto make_list_winner_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_list_winner_3)
DEFLABEL (make_list_winner_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 9
#define DEBUGGING_LABEL_68_2 8
#define OBJECT_68_0 7
#define EXECUTE_CACHE_68_5 5
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto make_vector_parser_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_vector_parser_3)
DEFLABEL (make_vector_parser_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 9
#define DEBUGGING_LABEL_69_2 8
#define OBJECT_69_0 7
#define EXECUTE_CACHE_69_5 5
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto make_vector_winner_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_vector_winner_3)
DEFLABEL (make_vector_winner_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (current_block [OBJECT_69_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define TAG_70_6 1
#define ENVIRONMENT_LABEL_70_3 11
#define DEBUGGING_LABEL_70_2 10
#define OBJECT_70_0 9
#define EXECUTE_CACHE_70_7 7
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto make_loser_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_loser_4)
DEFLABEL (make_loser_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_70_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 8
#define DEBUGGING_LABEL_71_2 7
#define OBJECT_71_2 6
#define OBJECT_71_1 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_71_4);
      goto call_out_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_out_7)
DEFLABEL (call_out_4)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_71_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_71_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_71_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define TAG_72_6 1
#define LABEL_72_8 7
#define ENVIRONMENT_LABEL_72_3 15
#define DEBUGGING_LABEL_72_2 14
#define OBJECT_72_2 13
#define OBJECT_72_1 12
#define OBJECT_72_0 11
#define EXECUTE_CACHE_72_7 9
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_72_4);
      goto make_lambda_4;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_72_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_lambda_7)
DEFLABEL (make_lambda_4)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_72_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_8);
  (Wrd9.Obj) = (current_block [OBJECT_72_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_72_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_5 7
#define LABEL_73_9 9
#define LABEL_73_8 11
#define LABEL_73_10 13
#define TAG_73_11 5
#define LABEL_73_13 15
#define ENVIRONMENT_LABEL_73_3 28
#define DEBUGGING_LABEL_73_2 27
#define OBJECT_73_2 26
#define OBJECT_73_1 25
#define OBJECT_73_0 24
#define EXECUTE_CACHE_73_12 17
#define EXECUTE_CACHE_73_7 19
#define FREE_REFERENCE_73_1 22
#define FREE_REFERENCE_73_0 23
#define FREE_REFERENCES_LABEL_73_0 16
#define NUMBER_OF_LINKER_SECTIONS_73_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_73_4);
      goto make_let_8;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_73_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_73_10);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_73_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_let_13)
DEFLABEL (make_let_8)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_10])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_9])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_73_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_13);
  (Wrd9.Obj) = (current_block [OBJECT_73_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_73_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_6 5
#define LABEL_74_5 7
#define LABEL_74_9 9
#define LABEL_74_8 11
#define LABEL_74_10 13
#define TAG_74_11 5
#define LABEL_74_13 15
#define LABEL_74_15 17
#define LABEL_74_14 19
#define LABEL_74_18 21
#define LABEL_74_16 23
#define ENVIRONMENT_LABEL_74_3 41
#define DEBUGGING_LABEL_74_2 40
#define OBJECT_74_5 39
#define OBJECT_74_4 38
#define OBJECT_74_3 37
#define OBJECT_74_2 36
#define OBJECT_74_1 35
#define OBJECT_74_0 34
#define EXECUTE_CACHE_74_12 25
#define EXECUTE_CACHE_74_17 27
#define EXECUTE_CACHE_74_7 29
#define FREE_REFERENCE_74_1 32
#define FREE_REFERENCE_74_0 33
#define FREE_REFERENCES_LABEL_74_0 24
#define NUMBER_OF_LINKER_SECTIONS_74_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_74_4);
      goto make_loop_14;

    case 1:
      current_block = (Rpc - LABEL_74_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_74_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_74_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_74_10);
      goto lambda_22;

    case 6:
      current_block = (Rpc - LABEL_74_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_74_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_74_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_74_18);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_74_16);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_loop_21)
DEFLABEL (make_loop_14)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_27;
  Wrd9 = Wrd13;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_25;
  Wrd9 = Wrd13;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_74_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_10])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_12]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_9])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_6])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_74_10);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_74_13);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_74_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_29;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_28)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_74_5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_4]), 1);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_23)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_74_16);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_9 9
#define LABEL_75_8 11
#define LABEL_75_12 13
#define LABEL_75_13 15
#define LABEL_75_11 17
#define ENVIRONMENT_LABEL_75_3 33
#define DEBUGGING_LABEL_75_2 32
#define OBJECT_75_2 31
#define OBJECT_75_1 30
#define OBJECT_75_0 29
#define EXECUTE_CACHE_75_15 19
#define EXECUTE_CACHE_75_14 21
#define EXECUTE_CACHE_75_10 23
#define EXECUTE_CACHE_75_7 25
#define FREE_REFERENCE_75_0 28
#define FREE_REFERENCES_LABEL_75_0 18
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_75_4);
      goto call_with_new_names_6;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_75_12);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_75_13);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_new_names_12)
DEFLABEL (call_with_new_names_6)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 2);

DEFLABEL (lambda_13)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_75_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;
  Wrd10 = Wrd14;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_17;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_15;
  Wrd19 = Wrd23;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_75_2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_13])), (Wrd20.pObj));

DEFLABEL (label_10)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_9])), (Wrd11.pObj));

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_5 3
#define LABEL_76_4 5
#define LABEL_76_6 7
#define LABEL_76_8 9
#define ENVIRONMENT_LABEL_76_3 20
#define DEBUGGING_LABEL_76_2 19
#define EXECUTE_CACHE_76_10 11
#define EXECUTE_CACHE_76_9 13
#define EXECUTE_CACHE_76_7 15
#define FREE_REFERENCE_76_0 18
#define FREE_REFERENCES_LABEL_76_0 10
#define NUMBER_OF_LINKER_SECTIONS_76_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_76_4);
      goto optimize_result_2;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_result_6)
DEFLABEL (optimize_result_2)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd20.Obj) = Rvl;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define LABEL_77_8 11
#define LABEL_77_9 13
#define LABEL_77_10 15
#define LABEL_77_12 17
#define LABEL_77_15 19
#define LABEL_77_14 21
#define LABEL_77_17 23
#define LABEL_77_18 25
#define LABEL_77_19 27
#define LABEL_77_20 29
#define LABEL_77_21 31
#define LABEL_77_22 33
#define LABEL_77_23 35
#define LABEL_77_24 37
#define ENVIRONMENT_LABEL_77_3 57
#define DEBUGGING_LABEL_77_2 56
#define OBJECT_77_2 55
#define OBJECT_77_1 54
#define OBJECT_77_0 53
#define EXECUTE_CACHE_77_25 39
#define EXECUTE_CACHE_77_16 41
#define EXECUTE_CACHE_77_13 43
#define EXECUTE_CACHE_77_11 45
#define FREE_REFERENCE_77_4 48
#define FREE_REFERENCE_77_3 49
#define FREE_REFERENCE_77_2 50
#define FREE_REFERENCE_77_1 51
#define FREE_REFERENCE_77_0 52
#define FREE_REFERENCES_LABEL_77_0 38
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_77_4);
      goto optimize_lets_13;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_77_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_77_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_77_10);
      goto lambda_12;

    case 7:
      current_block = (Rpc - LABEL_77_12);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_77_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_77_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_77_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_77_18);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_77_19);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_77_20);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_77_21);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_77_22);
      goto label_26;

    case 16:
      current_block = (Rpc - LABEL_77_23);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_77_24);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_lets_30)
DEFLABEL (optimize_lets_13)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;
  Wrd5 = Wrd9;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_37;
  Wrd17 = Wrd21;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_35;
  Wrd23 = Wrd27;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_33;
  Wrd29 = Wrd33;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (Rsp [6]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_9])), (Wrd30.pObj));

DEFLABEL (label_19)
  (Wrd29.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_8])), (Wrd24.pObj));

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_7])), (Wrd18.pObj));

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_6])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_5])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_31)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_77_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_60;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd17.Obj) = (current_block [OBJECT_77_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_58;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_57)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_56;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_55)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_54;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_53)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_51)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_50;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_49)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_48;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_47)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_46;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_44;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_25]));

DEFLABEL (label_44)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_24]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_28)
  (Wrd60.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_23]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_27)
  (Wrd53.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_26)
  (Wrd46.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_25)
  (Wrd39.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_22)
  (Wrd16.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_8 9
#define LABEL_78_9 11
#define LABEL_78_10 13
#define TAG_78_11 5
#define LABEL_78_13 15
#define LABEL_78_14 17
#define LABEL_78_22 19
#define LABEL_78_23 21
#define LABEL_78_24 23
#define LABEL_78_25 25
#define LABEL_78_16 27
#define LABEL_78_27 29
#define LABEL_78_18 31
#define LABEL_78_28 33
#define LABEL_78_20 35
#define TAG_78_21 16
#define LABEL_78_31 37
#define LABEL_78_29 39
#define LABEL_78_34 41
#define LABEL_78_30 43
#define LABEL_78_33 45
#define LABEL_78_37 47
#define LABEL_78_36 49
#define ENVIRONMENT_LABEL_78_3 78
#define DEBUGGING_LABEL_78_2 77
#define OBJECT_78_5 76
#define OBJECT_78_4 75
#define OBJECT_78_3 74
#define OBJECT_78_2 73
#define OBJECT_78_1 72
#define OBJECT_78_0 71
#define EXECUTE_CACHE_78_35 51
#define EXECUTE_CACHE_78_32 53
#define EXECUTE_CACHE_78_26 55
#define EXECUTE_CACHE_78_19 57
#define EXECUTE_CACHE_78_17 59
#define EXECUTE_CACHE_78_15 61
#define EXECUTE_CACHE_78_12 63
#define EXECUTE_CACHE_78_7 65
#define FREE_REFERENCE_78_2 68
#define FREE_REFERENCE_78_1 69
#define FREE_REFERENCE_78_0 70
#define FREE_REFERENCES_LABEL_78_0 50
#define NUMBER_OF_LINKER_SECTIONS_78_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_78_4);
      goto optimize_let_29;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_78_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_78_10);
      goto lambda_41;

    case 6:
      current_block = (Rpc - LABEL_78_13);
      goto continuation_26;

    case 7:
      current_block = (Rpc - LABEL_78_14);
      goto lambda_25;

    case 8:
      current_block = (Rpc - LABEL_78_22);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_78_23);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_78_24);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_78_25);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_78_16);
      goto lambda_3;

    case 13:
      current_block = (Rpc - LABEL_78_27);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_78_18);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_78_28);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_78_20);
      goto lambda_42;

    case 17:
      current_block = (Rpc - LABEL_78_31);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_78_29);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_78_34);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_78_30);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_78_33);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_78_37);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_78_36);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_let_40)
DEFLABEL (optimize_let_29)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_10])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_78_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_16]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_78_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_15]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_78_13);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_78_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_78_18);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_43)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_78_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_53;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_52)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_51;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_78_1])))
    goto label_46;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_78_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_50;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_49)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_48;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_26]));

DEFLABEL (label_48)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 1);

DEFLABEL (label_33)
  (Wrd25.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 1);

DEFLABEL (label_32)
  (Wrd16.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd35.Obj) = (current_block [OBJECT_78_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_23]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (label_53)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_44)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_78_16);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_59;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd16.uLng) == 26)
    goto label_54;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_54)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_56;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_78_3]);

DEFLABEL (label_55)
DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_58;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_78_20);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_66;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_78_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_64;
  Wrd13 = Wrd17;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_78_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_62;
  Wrd9 = Wrd13;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_78_36);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_78_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_78_5]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_37])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_34])), (Wrd14.pObj));

DEFLABEL (label_37)
  (Wrd13.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_68;
  Wrd24 = Wrd28;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_78_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_35]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_78_28);
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_31])), (Wrd25.pObj));

DEFLABEL (label_36)
  (Wrd24.Obj) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_5 3
#define LABEL_79_6 5
#define LABEL_79_4 7
#define LABEL_79_7 9
#define LABEL_79_8 11
#define LABEL_79_9 13
#define LABEL_79_10 15
#define LABEL_79_11 17
#define LABEL_79_13 19
#define LABEL_79_12 21
#define LABEL_79_16 23
#define LABEL_79_15 25
#define LABEL_79_18 27
#define LABEL_79_17 29
#define LABEL_79_20 31
#define LABEL_79_21 33
#define LABEL_79_19 35
#define LABEL_79_23 37
#define LABEL_79_24 39
#define LABEL_79_22 41
#define LABEL_79_26 43
#define LABEL_79_27 45
#define LABEL_79_25 47
#define LABEL_79_28 49
#define LABEL_79_29 51
#define ENVIRONMENT_LABEL_79_3 76
#define DEBUGGING_LABEL_79_2 75
#define OBJECT_79_17 74
#define OBJECT_79_16 73
#define OBJECT_79_15 72
#define OBJECT_79_14 71
#define OBJECT_79_13 70
#define OBJECT_79_12 69
#define OBJECT_79_11 68
#define OBJECT_79_10 67
#define OBJECT_79_9 66
#define OBJECT_79_8 65
#define OBJECT_79_7 64
#define OBJECT_79_6 63
#define OBJECT_79_5 62
#define OBJECT_79_4 61
#define OBJECT_79_3 60
#define OBJECT_79_2 59
#define OBJECT_79_1 58
#define OBJECT_79_0 57
#define EXECUTE_CACHE_79_14 53
#define FREE_REFERENCE_79_0 56
#define FREE_REFERENCES_LABEL_79_0 52
#define NUMBER_OF_LINKER_SECTIONS_79_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd80;
  machine_word Wrd79;
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
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd121;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd124;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd133;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_79_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_79_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_79_4);
      goto substitutableP_41;

    case 3:
      current_block = (Rpc - LABEL_79_7);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_79_8);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_79_9);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_79_10);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_79_11);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_79_13);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_79_12);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_79_16);
      goto label_49;

    case 11:
      current_block = (Rpc - LABEL_79_15);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_79_18);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_79_17);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_79_20);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_79_21);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_79_19);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_79_23);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_79_24);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_79_22);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_79_26);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_79_27);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_79_25);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_79_28);
      goto label_57;

    case 24:
      current_block = (Rpc - LABEL_79_29);
      goto label_58;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitutableP_60)
DEFLABEL (substitutableP_41)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd125.Obj) = (current_block [OBJECT_79_0]);
  (Wrd128.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd128.Lng))))
    goto label_113;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd125.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_112;

DEFLABEL (label_111)
  (Wrd13.Obj) = (current_block [OBJECT_79_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_62;

DEFLABEL (label_61)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_62)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_64;
  (Wrd15.Obj) = (current_block [OBJECT_79_4]);
  goto label_63;

DEFLABEL (label_64)
  (Wrd15.Obj) = (current_block [OBJECT_79_3]);

DEFLABEL (label_63)
DEFLABEL (label_110)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_109)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_79_5]);
  (Wrd116.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd116.Lng))))
    goto label_108;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_101;

DEFLABEL (label_107)
  (Wrd103.Obj) = (current_block [OBJECT_79_6]);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd106.Lng))))
    goto label_106;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd103.Obj));
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_101;

DEFLABEL (label_105)
  (Wrd93.Obj) = (current_block [OBJECT_79_7]);
  (Wrd96.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd96.Lng))))
    goto label_104;
  (Wrd41.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd41.Obj) == (Wrd43.Obj))
    goto label_101;

DEFLABEL (label_103)
  (Wrd83.Obj) = (current_block [OBJECT_79_8]);
  (Wrd86.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd86.Lng))))
    goto label_102;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_101;

DEFLABEL (label_100)
  (Wrd48.Obj) = (current_block [OBJECT_79_9]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd58.Lng))))
    goto label_61;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd51.Obj) == (Wrd53.Obj))
    goto label_68;
  (Wrd54.Obj) = (current_block [OBJECT_79_4]);
  goto label_67;

DEFLABEL (label_68)
  (Wrd54.Obj) = (current_block [OBJECT_79_3]);

DEFLABEL (label_67)
DEFLABEL (label_99)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_98)
  (Rsp [0]) = (Wrd54.Obj);
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  Rvl = (Wrd54.Obj);
  goto label_65;

DEFLABEL (label_69)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_97;
  Wrd68 = Wrd72;

DEFLABEL (label_96)
  (Wrd77.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (current_block [OBJECT_79_11]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_79_12);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_95;
  Wrd15 = Wrd19;

DEFLABEL (label_94)
  (Wrd24.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_79_12]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_79_15);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_93;
  Wrd15 = Wrd19;

DEFLABEL (label_92)
  (Wrd24.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_79_13]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_79_17);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_91;
  Wrd15 = Wrd19;

DEFLABEL (label_90)
  (Wrd24.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_89;
  Wrd26 = Wrd30;

DEFLABEL (label_88)
  (Wrd32.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_79_14]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_79_19);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_87;
  Wrd15 = Wrd19;

DEFLABEL (label_86)
  (Wrd24.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_85;
  Wrd26 = Wrd30;

DEFLABEL (label_84)
  (Wrd32.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_79_15]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_79_22);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_83;
  Wrd15 = Wrd19;

DEFLABEL (label_82)
  (Wrd24.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_81;
  Wrd26 = Wrd30;

DEFLABEL (label_80)
  (Wrd32.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_79_16]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_79_25);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_79;
  Wrd11 = Wrd15;

DEFLABEL (label_78)
  (Wrd20.Obj) = (current_block [OBJECT_79_10]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_77;
  Wrd22 = Wrd26;

DEFLABEL (label_76)
  (Wrd28.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd35.Obj) = (current_block [OBJECT_79_17]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Rsp [0]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_29])), (Wrd23.pObj));

DEFLABEL (label_58)
  (Wrd22.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_28])), (Wrd12.pObj));

DEFLABEL (label_57)
  (Wrd11.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_27])), (Wrd27.pObj));

DEFLABEL (label_56)
  (Wrd26.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_26])), (Wrd16.pObj));

DEFLABEL (label_55)
  (Wrd15.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_24])), (Wrd27.pObj));

DEFLABEL (label_54)
  (Wrd26.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_23])), (Wrd16.pObj));

DEFLABEL (label_53)
  (Wrd15.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_21])), (Wrd27.pObj));

DEFLABEL (label_52)
  (Wrd26.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_20])), (Wrd16.pObj));

DEFLABEL (label_51)
  (Wrd15.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_18])), (Wrd16.pObj));

DEFLABEL (label_50)
  (Wrd15.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_16])), (Wrd16.pObj));

DEFLABEL (label_49)
  (Wrd15.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_13])), (Wrd69.pObj));

DEFLABEL (label_43)
  (Wrd68.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_101)
  (Wrd54.Obj) = (current_block [OBJECT_79_3]);
  Rsp = (& (Rsp [2]));
  goto label_98;

DEFLABEL (label_102)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_101;

DEFLABEL (label_104)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_101;

DEFLABEL (label_106)
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_101;

DEFLABEL (label_108)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  goto label_101;

DEFLABEL (label_112)
  (Wrd124.Obj) = (current_block [OBJECT_79_3]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd124.Obj);
  goto label_109;

DEFLABEL (label_113)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  goto label_112;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Wrd54.Obj) = Rvl;
  goto label_98;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_6);
  (* (--Rsp)) = Rvl;
  goto label_109;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_13 7
#define LABEL_80_14 9
#define LABEL_80_15 11
#define LABEL_80_6 13
#define TAG_80_7 5
#define LABEL_80_8 15
#define LABEL_80_9 17
#define LABEL_80_10 19
#define LABEL_80_17 21
#define LABEL_80_18 23
#define LABEL_80_19 25
#define LABEL_80_20 27
#define LABEL_80_11 29
#define LABEL_80_16 31
#define LABEL_80_25 33
#define LABEL_80_26 35
#define LABEL_80_27 37
#define LABEL_80_21 39
#define LABEL_80_30 41
#define LABEL_80_23 43
#define LABEL_80_24 45
#define LABEL_80_31 47
#define LABEL_80_28 49
#define TAG_80_29 23
#define LABEL_80_32 51
#define LABEL_80_33 53
#define ENVIRONMENT_LABEL_80_3 67
#define DEBUGGING_LABEL_80_2 66
#define OBJECT_80_4 65
#define OBJECT_80_3 64
#define OBJECT_80_2 63
#define OBJECT_80_1 62
#define OBJECT_80_0 61
#define EXECUTE_CACHE_80_22 55
#define EXECUTE_CACHE_80_12 57
#define FREE_REFERENCE_80_0 60
#define FREE_REFERENCES_LABEL_80_0 54
#define NUMBER_OF_LINKER_SECTIONS_80_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_80_4);
      goto count_refs_in_24;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_80_13);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_80_14);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_80_15);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_80_6);
      goto lambda_42;

    case 6:
      current_block = (Rpc - LABEL_80_8);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_80_9);
      goto lambda_0;

    case 8:
      current_block = (Rpc - LABEL_80_10);
      goto lambda_21;

    case 9:
      current_block = (Rpc - LABEL_80_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_80_18);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_80_19);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_80_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_80_11);
      goto lambda_23;

    case 14:
      current_block = (Rpc - LABEL_80_16);
      goto continuation_20;

    case 15:
      current_block = (Rpc - LABEL_80_25);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_80_26);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_80_27);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_80_21);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_80_30);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_80_23);
      goto continuation_15;

    case 21:
      current_block = (Rpc - LABEL_80_24);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_80_31);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_80_28);
      goto lambda_48;

    case 24:
      current_block = (Rpc - LABEL_80_32);
      goto label_38;

    case 25:
      current_block = (Rpc - LABEL_80_33);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (count_refs_in_41)
DEFLABEL (count_refs_in_24)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_80_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80_6])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_11]))));
  (Rsp [6]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_12]));

DEFLABEL (lambda_43)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_80_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_53)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_52;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_51)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_50;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_49)
  (Wrd28.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd28.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_50)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_80_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_56;
  Rvl = (current_block [OBJECT_80_3]);
  goto label_55;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_80_2]);

DEFLABEL (label_55)
DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_44)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_80_8);
  Rvl = (current_block [OBJECT_80_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_45)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_80_9);
  Rvl = (current_block [OBJECT_80_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_46)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_80_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_75;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_74)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_73;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_72)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_71;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_70)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_69;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_68)
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_80_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_67;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_66)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_65;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_64)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_63;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_80_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80_28])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd36 = Wrd35;
  (Wrd37.Obj) = (Rsp [5]);
  ((Wrd36.pObj) [2]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_80_24);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_61;
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_4]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_80_23);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_59)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_58;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_58;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_31])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_26]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_34)
  (Wrd20.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_19]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_31)
  (Wrd24.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_30)
  (Wrd17.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_74;

DEFLABEL (lambda_47)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_80_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_80_21);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_77;
  Wrd7 = Wrd11;

DEFLABEL (label_76)
  (Rsp [0]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_4]), 2);

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_30])), (Wrd8.pObj));

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_80_28);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_81;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_80)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_79;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_78)
  (Rsp [1]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_79)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_39)
  (Wrd17.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_80;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_8 7
#define LABEL_81_9 9
#define LABEL_81_10 11
#define LABEL_81_11 13
#define LABEL_81_6 15
#define TAG_81_7 6
#define LABEL_81_13 17
#define LABEL_81_15 19
#define ENVIRONMENT_LABEL_81_3 35
#define DEBUGGING_LABEL_81_2 34
#define OBJECT_81_0 33
#define EXECUTE_CACHE_81_16 21
#define EXECUTE_CACHE_81_14 23
#define EXECUTE_CACHE_81_12 25
#define FREE_REFERENCE_81_4 28
#define FREE_REFERENCE_81_3 29
#define FREE_REFERENCE_81_2 30
#define FREE_REFERENCE_81_1 31
#define FREE_REFERENCE_81_0 32
#define FREE_REFERENCES_LABEL_81_0 20
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto substitute_5;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_81_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_81_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_81_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_81_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_81_6);
      goto lambda_14;

    case 7:
      current_block = (Rpc - LABEL_81_13);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_81_15);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitute_13)
DEFLABEL (substitute_5)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_81_6])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_20;
  Wrd21 = Wrd25;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_3]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_18;
  Wrd29 = Wrd33;

DEFLABEL (label_17)
  (Rsp [5]) = (Wrd29.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_4]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_16;
  Wrd36 = Wrd40;

DEFLABEL (label_15)
  (Rsp [6]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_12]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_11])), (Wrd37.pObj));

DEFLABEL (label_11)
  (Wrd36.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_10])), (Wrd30.pObj));

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_9])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_8])), (Wrd16.pObj));

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_81_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_7 7
#define LABEL_82_8 9
#define LABEL_82_9 11
#define LABEL_82_10 13
#define LABEL_82_6 15
#define LABEL_82_13 17
#define LABEL_82_14 19
#define LABEL_82_15 21
#define LABEL_82_12 23
#define LABEL_82_16 25
#define LABEL_82_17 27
#define LABEL_82_18 29
#define LABEL_82_19 31
#define LABEL_82_20 33
#define TAG_82_21 15
#define LABEL_82_24 35
#define ENVIRONMENT_LABEL_82_3 57
#define DEBUGGING_LABEL_82_2 56
#define OBJECT_82_4 55
#define OBJECT_82_3 54
#define OBJECT_82_2 53
#define OBJECT_82_1 52
#define OBJECT_82_0 51
#define EXECUTE_CACHE_82_25 37
#define EXECUTE_CACHE_82_23 39
#define EXECUTE_CACHE_82_22 41
#define EXECUTE_CACHE_82_11 43
#define FREE_REFERENCE_82_4 46
#define FREE_REFERENCE_82_3 47
#define FREE_REFERENCE_82_2 48
#define FREE_REFERENCE_82_1 49
#define FREE_REFERENCE_82_0 50
#define FREE_REFERENCES_LABEL_82_0 36
#define NUMBER_OF_LINKER_SECTIONS_82_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_82_4);
      goto fixup_lambdas_14;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_82_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_82_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_82_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_82_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_82_6);
      goto lambda_13;

    case 7:
      current_block = (Rpc - LABEL_82_13);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_82_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_82_15);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_82_12);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_82_16);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_82_17);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_82_18);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_82_19);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_82_20);
      goto lambda_29;

    case 16:
      current_block = (Rpc - LABEL_82_24);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixup_lambdas_27)
DEFLABEL (fixup_lambdas_14)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_39;
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_37;
  Wrd13 = Wrd17;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_35;
  Wrd19 = Wrd23;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_3]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_33;
  Wrd25 = Wrd29;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_4]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_31;
  Wrd33 = Wrd37;

DEFLABEL (label_30)
  (Rsp [6]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_11]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_10])), (Wrd34.pObj));

DEFLABEL (label_20)
  (Wrd33.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_9])), (Wrd26.pObj));

DEFLABEL (label_19)
  (Wrd25.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_8])), (Wrd20.pObj));

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_7])), (Wrd14.pObj));

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_5])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_28)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_82_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_49;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_48)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_47;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_46)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_45;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_44)
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_82_12);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_43;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_42)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_41;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_82_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_20])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  ((Wrd35.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_82_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_82_18);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_82_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_22)
  (Wrd17.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_82_20);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_82_24);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_50;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_50)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) == 0)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_82_4]);

DEFLABEL (label_51)
DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_6 7
#define LABEL_83_7 9
#define LABEL_83_8 11
#define LABEL_83_9 13
#define LABEL_83_10 15
#define LABEL_83_12 17
#define LABEL_83_16 19
#define LABEL_83_14 21
#define TAG_83_15 9
#define LABEL_83_18 23
#define LABEL_83_21 25
#define LABEL_83_19 27
#define TAG_83_20 12
#define LABEL_83_22 29
#define ENVIRONMENT_LABEL_83_3 47
#define DEBUGGING_LABEL_83_2 46
#define OBJECT_83_1 45
#define OBJECT_83_0 44
#define EXECUTE_CACHE_83_17 31
#define EXECUTE_CACHE_83_13 33
#define EXECUTE_CACHE_83_11 35
#define FREE_REFERENCE_83_5 38
#define FREE_REFERENCE_83_4 39
#define FREE_REFERENCE_83_3 40
#define FREE_REFERENCE_83_2 41
#define FREE_REFERENCE_83_1 42
#define FREE_REFERENCE_83_0 43
#define FREE_REFERENCES_LABEL_83_0 30
#define NUMBER_OF_LINKER_SECTIONS_83_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_83_4);
      goto peephole_optimizer_11;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_83_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_83_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_83_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_83_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_83_10);
      goto lambda_10;

    case 7:
      current_block = (Rpc - LABEL_83_12);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_83_16);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_83_14);
      goto loop_7;

    case 10:
      current_block = (Rpc - LABEL_83_18);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_83_21);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_83_19);
      goto lambda_25;

    case 13:
      current_block = (Rpc - LABEL_83_22);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (peephole_optimizer_22)
DEFLABEL (peephole_optimizer_11)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_33;
  Wrd11 = Wrd15;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_31;
  Wrd17 = Wrd21;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_29;
  Wrd23 = Wrd27;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_27;
  Wrd29 = Wrd33;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_10]))));
  (Rsp [6]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_11]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_9])), (Wrd30.pObj));

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_8])), (Wrd24.pObj));

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_7])), (Wrd18.pObj));

DEFLABEL (label_15)
  (Wrd17.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_6])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_23)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_83_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_12);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_14])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd13 = Wrd15;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_16);
  (Rsp [1]) = Rvl;
  goto loop_7;

DEFLABEL (loop_24)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_83_14);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_39)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_19])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_5]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_38;
  Wrd31 = Wrd35;

DEFLABEL (label_37)
  (Rsp [2]) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_21])), (Wrd32.pObj));

DEFLABEL (label_19)
  (Wrd31.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_83_19);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_42;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_7;

DEFLABEL (label_42)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define ENVIRONMENT_LABEL_84_3 14
#define DEBUGGING_LABEL_84_2 13
#define OBJECT_84_0 12
#define FREE_REFERENCE_84_0 9
#define FREE_ASSIGNMENT_84_0 11
#define FREE_REFERENCES_LABEL_84_0 8
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_84_4);
      goto define_peephole_optimizer_2;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_peephole_optimizer_7)
DEFLABEL (define_peephole_optimizer_2)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_84_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd20.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_84_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_84_6])), (Wrd20.pObj), (Wrd17.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_7 7
#define LABEL_85_6 9
#define LABEL_85_8 11
#define TAG_85_9 4
#define LABEL_85_12 13
#define ENVIRONMENT_LABEL_85_3 26
#define DEBUGGING_LABEL_85_2 25
#define OBJECT_85_0 24
#define EXECUTE_CACHE_85_13 15
#define EXECUTE_CACHE_85_11 17
#define EXECUTE_CACHE_85_10 19
#define FREE_REFERENCE_85_1 22
#define FREE_REFERENCE_85_0 23
#define FREE_REFERENCES_LABEL_85_0 14
#define NUMBER_OF_LINKER_SECTIONS_85_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_85_4);
      goto get_peephole_optimizers_3;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_85_8);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_85_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_peephole_optimizers_9)
DEFLABEL (get_peephole_optimizers_3)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_12;
  Wrd14 = Wrd18;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_8])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_7])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_85_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_16;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_13]));

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_0]), 1);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_10 7
#define LABEL_86_11 9
#define LABEL_86_12 11
#define LABEL_86_6 13
#define LABEL_86_13 15
#define LABEL_86_14 17
#define LABEL_86_8 19
#define LABEL_86_16 21
#define LABEL_86_17 23
#define LABEL_86_9 25
#define LABEL_86_18 27
#define LABEL_86_19 29
#define LABEL_86_20 31
#define ENVIRONMENT_LABEL_86_3 40
#define DEBUGGING_LABEL_86_2 39
#define OBJECT_86_1 38
#define OBJECT_86_0 37
#define EXECUTE_CACHE_86_15 33
#define EXECUTE_CACHE_86_7 35
#define FREE_REFERENCES_LABEL_86_0 32
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_86_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_86_10);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_86_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_86_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_86_13);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_86_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_86_8);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_86_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_86_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_86_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_86_18);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_86_19);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_86_20);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_49;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_48)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_47;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_86_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_86_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_37)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_35)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_86_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_31)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_22)
  (Wrd16.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_20]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_44)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_43;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_42)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_41;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_41)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_6 7
#define LABEL_87_7 9
#define LABEL_87_8 11
#define LABEL_87_9 13
#define ENVIRONMENT_LABEL_87_3 17
#define DEBUGGING_LABEL_87_2 16
#define OBJECT_87_1 15
#define OBJECT_87_0 14
#define FREE_REFERENCES_LABEL_87_0 14
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_87_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_87_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_87_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_87_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_87_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_23)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_21)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_17)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_16;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_15)
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd48.Lng) = ((Wrd46.Lng) + (Wrd47.Lng));
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Rsp [2]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_12)
  (Wrd37.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_11)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define LABEL_88_8 11
#define LABEL_88_9 13
#define LABEL_88_10 15
#define LABEL_88_11 17
#define LABEL_88_12 19
#define LABEL_88_13 21
#define LABEL_88_14 23
#define LABEL_88_15 25
#define LABEL_88_16 27
#define ENVIRONMENT_LABEL_88_3 33
#define DEBUGGING_LABEL_88_2 32
#define OBJECT_88_3 31
#define OBJECT_88_2 30
#define OBJECT_88_1 29
#define OBJECT_88_0 28
#define FREE_REFERENCES_LABEL_88_0 28
#define NUMBER_OF_LINKER_SECTIONS_88_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_88_4);
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_88_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_88_9);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_88_10);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_88_11);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_88_12);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_88_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_88_14);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_88_15);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_88_16);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_31)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_53;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_52)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_51;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_50)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_49;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_48)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_47;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_46)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_45;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_44)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_43;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_42)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_41;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_40)
  (Wrd65.Obj) = (* (Rsp++));
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd69.Lng) = ((Wrd67.Lng) + (Wrd68.Lng));
  (Wrd66.Obj) = (LONG_TO_FIXNUM (Wrd69.Lng));
  (Wrd73.Obj) = (current_block [OBJECT_88_2]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_39;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_38)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_37;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd83.Obj) = ((Wrd84.pObj) [0]);

DEFLABEL (label_36)
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_35;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd90.Obj) = ((Wrd91.pObj) [1]);

DEFLABEL (label_34)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_33;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd97.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_32)
  (Wrd104.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd111.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = (Wrd111.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (Rsp [2]) = (Wrd108.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_16]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_29)
  (Wrd97.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_15]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_28)
  (Wrd90.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_14]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_27)
  (Wrd83.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_13]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_26)
  (Wrd74.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_25)
  (Wrd58.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_24)
  (Wrd51.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_23)
  (Wrd44.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_22)
  (Wrd37.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_21)
  (Wrd28.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_7 9
#define LABEL_89_8 11
#define LABEL_89_9 13
#define ENVIRONMENT_LABEL_89_3 19
#define DEBUGGING_LABEL_89_2 18
#define OBJECT_89_3 17
#define OBJECT_89_2 16
#define OBJECT_89_1 15
#define OBJECT_89_0 14
#define FREE_REFERENCES_LABEL_89_0 14
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_89_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_89_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_24)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_23;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_22)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_20)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_19;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_18)
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if ((Wrd45.Lng) < (Wrd46.Lng))
    goto label_16;
  (Wrd47.Obj) = (current_block [OBJECT_89_3]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd47.Obj) = (current_block [OBJECT_89_2]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Rsp [2]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_19)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_12)
  (Wrd37.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_11)
  (Wrd28.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define LABEL_90_8 11
#define LABEL_90_9 13
#define LABEL_90_10 15
#define LABEL_90_11 17
#define LABEL_90_12 19
#define LABEL_90_13 21
#define LABEL_90_14 23
#define LABEL_90_15 25
#define LABEL_90_16 27
#define ENVIRONMENT_LABEL_90_3 33
#define DEBUGGING_LABEL_90_2 32
#define OBJECT_90_3 31
#define OBJECT_90_2 30
#define OBJECT_90_1 29
#define OBJECT_90_0 28
#define FREE_REFERENCES_LABEL_90_0 28
#define NUMBER_OF_LINKER_SECTIONS_90_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_90_4);
      goto lambda_18;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_90_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_90_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_90_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_90_11);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_90_12);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_90_13);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_90_14);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_90_15);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_90_16);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_57)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_56;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_55)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_54;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_53)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_52;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_51)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_50;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_49)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_48;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_47)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_46;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_45)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_44;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_43)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_42;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd74.Obj) = ((Wrd75.pObj) [0]);

DEFLABEL (label_41)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_40;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd81.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_39)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_38;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_37)
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if ((Wrd96.Lng) > (Wrd98.Lng))
    goto label_35;
  (Wrd104.Lng) = ((Wrd98.Lng) - (Wrd96.Lng));
  (Wrd99.Obj) = (LONG_TO_FIXNUM (Wrd104.Lng));
  (Wrd108.Obj) = (current_block [OBJECT_90_2]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd116.Obj) = (current_block [OBJECT_90_3]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Rsp [5]) = (Wrd113.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Rsp [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_38)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_16]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_15]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_30)
  (Wrd81.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_29)
  (Wrd74.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_28)
  (Wrd65.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_26)
  (Wrd51.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_25)
  (Wrd44.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_24)
  (Wrd37.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define LABEL_91_7 9
#define LABEL_91_8 11
#define ENVIRONMENT_LABEL_91_3 15
#define DEBUGGING_LABEL_91_2 14
#define OBJECT_91_1 13
#define OBJECT_91_0 12
#define FREE_REFERENCES_LABEL_91_0 12
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_91_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_91_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_91_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_18)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_16)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_14)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_13;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define LABEL_92_7 9
#define ENVIRONMENT_LABEL_92_3 13
#define DEBUGGING_LABEL_92_2 12
#define OBJECT_92_1 11
#define OBJECT_92_0 10
#define FREE_REFERENCES_LABEL_92_0 10
#define NUMBER_OF_LINKER_SECTIONS_92_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_92_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_92_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_14)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_12)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_6 5
#define LABEL_93_7 7
#define LABEL_93_8 9
#define LABEL_93_9 11
#define LABEL_93_10 13
#define LABEL_93_11 15
#define LABEL_93_12 17
#define LABEL_93_13 19
#define LABEL_93_14 21
#define LABEL_93_15 23
#define LABEL_93_16 25
#define LABEL_93_5 27
#define LABEL_93_18 29
#define LABEL_93_19 31
#define LABEL_93_20 33
#define LABEL_93_21 35
#define LABEL_93_22 37
#define LABEL_93_23 39
#define LABEL_93_24 41
#define LABEL_93_25 43
#define LABEL_93_26 45
#define LABEL_93_27 47
#define LABEL_93_28 49
#define LABEL_93_29 51
#define LABEL_93_30 53
#define LABEL_93_31 55
#define LABEL_93_32 57
#define LABEL_93_33 59
#define LABEL_93_34 61
#define ENVIRONMENT_LABEL_93_3 71
#define DEBUGGING_LABEL_93_2 70
#define OBJECT_93_4 69
#define OBJECT_93_3 68
#define OBJECT_93_2 67
#define OBJECT_93_1 66
#define OBJECT_93_0 65
#define EXECUTE_CACHE_93_17 63
#define FREE_REFERENCES_LABEL_93_0 62
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd161;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_93_4);
      goto lambda_36;

    case 1:
      current_block = (Rpc - LABEL_93_6);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_93_8);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_93_9);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_93_10);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_93_11);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_93_12);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_93_13);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_93_14);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_93_15);
      goto label_47;

    case 11:
      current_block = (Rpc - LABEL_93_16);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_93_18);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_93_19);
      goto label_50;

    case 15:
      current_block = (Rpc - LABEL_93_20);
      goto label_51;

    case 16:
      current_block = (Rpc - LABEL_93_21);
      goto label_52;

    case 17:
      current_block = (Rpc - LABEL_93_22);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_93_23);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_93_24);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_93_25);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_93_26);
      goto label_57;

    case 22:
      current_block = (Rpc - LABEL_93_27);
      goto label_58;

    case 23:
      current_block = (Rpc - LABEL_93_28);
      goto label_59;

    case 24:
      current_block = (Rpc - LABEL_93_29);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_93_30);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_93_31);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_93_32);
      goto label_63;

    case 28:
      current_block = (Rpc - LABEL_93_33);
      goto label_64;

    case 29:
      current_block = (Rpc - LABEL_93_34);
      goto label_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_67)
DEFLABEL (lambda_36)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_124;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_123)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_122;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_121)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_120;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_119)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_118;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_117)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_116;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_115)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_114;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd47.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_113)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_112;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_111)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_110;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd61.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_109)
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_108;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd68.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_107)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_106;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd75.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_105)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_104;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_103)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_93_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_68)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_102;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_101)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_100;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_99)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_98;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_97)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_96;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_95)
  (Wrd40.Obj) = (current_block [OBJECT_93_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_94;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_93)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_92;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_91)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_90;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_89)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_88;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_87)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_86;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_85)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_84;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_83)
  (Wrd85.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd92.Obj) = (Rsp [1]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_82;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [1]);

DEFLABEL (label_81)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_80;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd98.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_79)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_78;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd105.Obj) = ((Wrd106.pObj) [0]);

DEFLABEL (label_77)
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_76;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd113.pObj) [1]);

DEFLABEL (label_75)
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_74;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd119.Obj) = ((Wrd120.pObj) [0]);

DEFLABEL (label_73)
  (Wrd129.Obj) = (current_block [OBJECT_93_2]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd133.Obj) = (Rsp [2]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_72;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_71)
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd141.uLng) == 1))
    goto label_70;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd139.Obj) = ((Wrd140.pObj) [0]);

DEFLABEL (label_69)
  (Wrd146.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd146.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (Wrd153.Obj) = (current_block [OBJECT_93_3]);
  (* (Rhp++)) = (Wrd153.Obj);
  (* (Rhp++)) = (Wrd147.Obj);
  (Wrd152.pObj) = (& (Rhp [-2]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd152.pObj)));
  (Wrd154.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd150.Obj);
  (* (Rhp++)) = (Wrd154.Obj);
  (Wrd157.pObj) = (& (Rhp [-2]));
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd157.pObj)));
  (Wrd161.Obj) = (current_block [OBJECT_93_4]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd155.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (Rsp [2]) = (Wrd158.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_70)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_34]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_65)
  (Wrd139.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_33]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_64)
  (Wrd130.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_32]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_63)
  (Wrd119.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_31]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_62)
  (Wrd112.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_30]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_61)
  (Wrd105.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_29]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_60)
  (Wrd98.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_28]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_59)
  (Wrd89.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_27]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_58)
  (Wrd78.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_26]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_57)
  (Wrd71.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_25]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_56)
  (Wrd64.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_24]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_55)
  (Wrd57.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_23]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_54)
  (Wrd50.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_53)
  (Wrd41.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_21]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_52)
  (Wrd30.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_16]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_15]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_47)
  (Wrd75.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_14]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_46)
  (Wrd68.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_45)
  (Wrd61.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_12]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_44)
  (Wrd54.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_43)
  (Wrd47.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_42)
  (Wrd38.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_40)
  (Wrd24.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_39)
  (Wrd17.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_123;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_7 9
#define LABEL_94_8 11
#define LABEL_94_9 13
#define LABEL_94_11 15
#define LABEL_94_10 17
#define LABEL_94_14 19
#define LABEL_94_16 21
#define LABEL_94_15 23
#define LABEL_94_13 25
#define LABEL_94_19 27
#define LABEL_94_18 29
#define LABEL_94_23 31
#define LABEL_94_20 33
#define LABEL_94_22 35
#define LABEL_94_24 37
#define LABEL_94_27 39
#define ENVIRONMENT_LABEL_94_3 58
#define DEBUGGING_LABEL_94_2 57
#define OBJECT_94_5 56
#define OBJECT_94_4 55
#define OBJECT_94_3 54
#define OBJECT_94_2 53
#define OBJECT_94_1 52
#define OBJECT_94_0 51
#define EXECUTE_CACHE_94_26 41
#define EXECUTE_CACHE_94_25 43
#define EXECUTE_CACHE_94_21 45
#define EXECUTE_CACHE_94_17 47
#define EXECUTE_CACHE_94_12 49
#define FREE_REFERENCES_LABEL_94_0 40
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_94_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_94_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_94_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_94_11);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_94_10);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_94_14);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_94_16);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_94_15);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_94_13);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_94_19);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_94_18);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_94_23);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_94_20);
      goto lambda_9;

    case 16:
      current_block = (Rpc - LABEL_94_22);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_94_24);
      goto lambda_13;

    case 18:
      current_block = (Rpc - LABEL_94_27);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_34)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_62;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_61)
  if ((Wrd5.Obj) == (current_block [OBJECT_94_1]))
    goto label_60;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_59;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_58)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_57;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_56)
  if ((Wrd24.Obj) == (current_block [OBJECT_94_1]))
    goto label_50;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_49;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_48)
  (Wrd44.Obj) = (current_block [OBJECT_94_2]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_94_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_37)
  (Wrd19.Obj) = (current_block [OBJECT_94_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_94_15);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_47;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_46)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_94_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_45;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_44)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_94_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_94_22);
  (Wrd9.Obj) = (current_block [OBJECT_94_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_54)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_53;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd54.Obj);

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_53)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_3]), 1);

DEFLABEL (label_28)
  (Wrd54.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_27)
  (Wrd45.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_25)
  (Wrd24.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_24)
  (Wrd15.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd62.Obj) = (current_block [OBJECT_94_2]);
  (Rsp [2]) = (Wrd62.Obj);
  goto label_51;

DEFLABEL (label_62)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (lambda_35)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_94_20);
  (Wrd5.Obj) = (current_block [OBJECT_94_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_26]));

DEFLABEL (lambda_36)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_94_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_94_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_63;
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_63)
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  Rvl = ((Wrd9.pObj) [1]);

DEFLABEL (label_64)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_94_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  goto label_64;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define TAG_95_6 1
#define LABEL_95_7 7
#define LABEL_95_9 9
#define LABEL_95_10 11
#define LABEL_95_11 13
#define LABEL_95_12 15
#define ENVIRONMENT_LABEL_95_3 25
#define DEBUGGING_LABEL_95_2 24
#define OBJECT_95_4 23
#define OBJECT_95_3 22
#define OBJECT_95_2 21
#define OBJECT_95_1 20
#define OBJECT_95_0 19
#define EXECUTE_CACHE_95_8 17
#define FREE_REFERENCES_LABEL_95_0 16
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_95_4);
      goto walk_expr_8;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_95_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_95_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_95_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_expr_11)
DEFLABEL (walk_expr_8)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_5])));
  Rhp += 6;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  (Wrd26.Obj) = (Rsp [7]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  ((Wrd25.pObj) [3]) = (Wrd23.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd25.pObj) [4]) = (Wrd20.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [5]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [6]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [7]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd28.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  goto loop_6;

DEFLABEL (loop_12)
  CLOSURE_HEADER (LABEL_95_5);

DEFLABEL (loop_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_95_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [6]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_15)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_95_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_95_4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [5]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [7]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define ENVIRONMENT_LABEL_96_3 5
#define DEBUGGING_LABEL_96_2 4
#define FREE_REFERENCES_LABEL_96_0 4
#define NUMBER_OF_LINKER_SECTIONS_96_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_96_4);
      goto rewrite_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_constant_3)
DEFLABEL (rewrite_constant_0)
  INTERRUPT_CHECK (26, LABEL_96_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 5
#define DEBUGGING_LABEL_97_2 4
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_97_4);
      goto rewrite_quote_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_quote_3)
DEFLABEL (rewrite_quote_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 5
#define DEBUGGING_LABEL_98_2 4
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto rewrite_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_reference_3)
DEFLABEL (rewrite_reference_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_6 5
#define LABEL_99_7 7
#define LABEL_99_8 9
#define LABEL_99_5 11
#define LABEL_99_9 13
#define LABEL_99_10 15
#define ENVIRONMENT_LABEL_99_3 21
#define DEBUGGING_LABEL_99_2 20
#define OBJECT_99_3 19
#define OBJECT_99_2 18
#define OBJECT_99_1 17
#define OBJECT_99_0 16
#define FREE_REFERENCES_LABEL_99_0 16
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_99_4);
      goto rewrite_lambda_8;

    case 1:
      current_block = (Rpc - LABEL_99_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_99_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_99_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_99_9);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_99_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_lambda_16)
DEFLABEL (rewrite_lambda_8)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_25)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_24;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_23)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (Wrd9.Obj) = (current_block [OBJECT_99_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_19)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_18;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_17)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_99_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_6 5
#define LABEL_100_7 7
#define LABEL_100_8 9
#define LABEL_100_9 11
#define LABEL_100_5 13
#define LABEL_100_11 15
#define LABEL_100_12 17
#define LABEL_100_13 19
#define LABEL_100_10 21
#define LABEL_100_17 23
#define LABEL_100_18 25
#define LABEL_100_14 27
#define TAG_100_15 12
#define LABEL_100_20 29
#define LABEL_100_21 31
#define LABEL_100_19 33
#define LABEL_100_22 35
#define ENVIRONMENT_LABEL_100_3 44
#define DEBUGGING_LABEL_100_2 43
#define OBJECT_100_3 42
#define OBJECT_100_2 41
#define OBJECT_100_1 40
#define OBJECT_100_0 39
#define EXECUTE_CACHE_100_16 37
#define FREE_REFERENCES_LABEL_100_0 36
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_100_4);
      goto rewrite_loop_20;

    case 1:
      current_block = (Rpc - LABEL_100_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_100_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_100_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_100_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_100_11);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_100_12);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_100_13);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_100_10);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_100_17);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_100_18);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_100_14);
      goto lambda_36;

    case 13:
      current_block = (Rpc - LABEL_100_20);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_100_21);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_100_19);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_100_22);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_loop_35)
DEFLABEL (rewrite_loop_20)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_54;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_53)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_52;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_51)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_50;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_49)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_48;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_47)
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (Wrd9.Obj) = (current_block [OBJECT_100_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_45)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_44;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_43)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_41)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_100_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_100_14])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [4]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_100_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
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
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_37)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_100_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_30)
  (Wrd19.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_27)
  (Wrd22.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_26)
  (Wrd13.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_24)
  (Wrd24.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_23)
  (Wrd17.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_100_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_60;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_59)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_58;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_57)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_100_19);
  (Wrd9.Obj) = (current_block [OBJECT_100_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_56;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_55)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_33)
  (Wrd10.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 8
#define DEBUGGING_LABEL_101_2 7
#define EXECUTE_CACHE_101_5 5
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
structure_parser_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto rewrite_form_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_form_3)
DEFLABEL (rewrite_form_0)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_5]));

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_28 41
#define LABEL_24 43
#define LABEL_26 45
#define LABEL_32 47
#define LABEL_27 49
#define LABEL_30 51
#define LABEL_36 53
#define LABEL_31 55
#define LABEL_34 57
#define LABEL_40 59
#define LABEL_35 61
#define LABEL_38 63
#define LABEL_43 65
#define LABEL_39 67
#define LABEL_41 69
#define LABEL_46 71
#define LABEL_42 73
#define LABEL_44 75
#define LABEL_45 77
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
#define LABEL_59 99
#define LABEL_60 101
#define LABEL_61 103
#define LABEL_62 105
#define LABEL_63 107
#define LABEL_64 109
#define LABEL_65 111
#define LABEL_66 113
#define LABEL_67 115
#define LABEL_68 117
#define LABEL_69 119
#define LABEL_70 121
#define LABEL_71 123
#define LABEL_72 125
#define LABEL_73 127
#define LABEL_74 129
#define LABEL_75 131
#define LABEL_76 133
#define LABEL_77 135
#define LABEL_78 137
#define LABEL_79 139
#define LABEL_80 141
#define LABEL_81 143
#define LABEL_82 145
#define LABEL_83 147
#define LABEL_84 149
#define LABEL_85 151
#define LABEL_86 153
#define LABEL_87 155
#define LABEL_88 157
#define LABEL_89 159
#define LABEL_90 161
#define LABEL_91 163
#define LABEL_92 165
#define LABEL_93 167
#define LABEL_94 169
#define LABEL_95 171
#define LABEL_96 173
#define LABEL_97 175
#define LABEL_98 177
#define LABEL_99 179
#define LABEL_100 181
#define LABEL_101 183
#define LABEL_102 185
#define LABEL_103 187
#define LABEL_104 189
#define LABEL_105 191
#define LABEL_106 193
#define LABEL_107 195
#define LABEL_108 197
#define LABEL_109 199
#define LABEL_110 201
#define LABEL_111 203
#define LABEL_112 205
#define LABEL_113 207
#define LABEL_114 209
#define LABEL_115 211
#define LABEL_116 213
#define LABEL_117 215
#define LABEL_118 217
#define LABEL_119 219
#define LABEL_120 221
#define LABEL_121 223
#define LABEL_122 225
#define LABEL_123 227
#define LABEL_124 229
#define LABEL_125 231
#define LABEL_126 233
#define LABEL_127 235
#define LABEL_128 237
#define LABEL_131 239
#define LABEL_132 241
#define LABEL_130 243
#define LABEL_134 245
#define LABEL_135 247
#define LABEL_133 249
#define LABEL_137 251
#define LABEL_138 253
#define LABEL_136 255
#define LABEL_140 257
#define LABEL_141 259
#define LABEL_139 261
#define LABEL_142 263
#define LABEL_143 265
#define LABEL_144 267
#define LABEL_145 269
#define LABEL_146 271
#define LABEL_147 273
#define LABEL_148 275
#define LABEL_149 277
#define LABEL_150 279
#define LABEL_151 281
#define LABEL_152 283
#define LABEL_153 285
#define LABEL_154 287
#define ENVIRONMENT_LABEL_3 533
#define DEBUGGING_LABEL_2 532
#define PURIFICATION_ROOT 531
#define OBJECT_221 530
#define OBJECT_220 529
#define OBJECT_219 528
#define OBJECT_218 527
#define OBJECT_217 526
#define OBJECT_216 525
#define OBJECT_215 524
#define OBJECT_214 523
#define OBJECT_213 522
#define OBJECT_212 521
#define OBJECT_211 520
#define OBJECT_210 519
#define OBJECT_209 518
#define OBJECT_208 517
#define OBJECT_207 516
#define OBJECT_206 515
#define OBJECT_205 514
#define OBJECT_204 513
#define OBJECT_203 512
#define OBJECT_202 511
#define OBJECT_201 510
#define OBJECT_200 509
#define OBJECT_199 508
#define OBJECT_198 507
#define OBJECT_197 506
#define OBJECT_196 505
#define OBJECT_195 504
#define OBJECT_194 503
#define OBJECT_193 502
#define OBJECT_192 501
#define OBJECT_191 500
#define OBJECT_190 499
#define OBJECT_189 498
#define OBJECT_188 497
#define OBJECT_187 496
#define OBJECT_186 495
#define OBJECT_185 494
#define OBJECT_184 493
#define OBJECT_183 492
#define OBJECT_182 491
#define OBJECT_181 490
#define OBJECT_180 489
#define OBJECT_179 488
#define OBJECT_178 487
#define OBJECT_177 486
#define OBJECT_176 485
#define OBJECT_175 484
#define OBJECT_174 483
#define OBJECT_173 482
#define OBJECT_172 481
#define OBJECT_171 480
#define OBJECT_170 479
#define OBJECT_169 478
#define OBJECT_168 477
#define OBJECT_167 476
#define OBJECT_166 475
#define OBJECT_165 474
#define OBJECT_164 473
#define OBJECT_163 472
#define OBJECT_162 471
#define OBJECT_161 470
#define OBJECT_160 469
#define OBJECT_159 468
#define OBJECT_158 467
#define OBJECT_157 466
#define OBJECT_156 465
#define OBJECT_155 464
#define OBJECT_154 463
#define OBJECT_153 462
#define OBJECT_152 461
#define OBJECT_151 460
#define OBJECT_150 459
#define OBJECT_149 458
#define OBJECT_148 457
#define OBJECT_147 456
#define OBJECT_146 455
#define OBJECT_145 454
#define OBJECT_144 453
#define OBJECT_143 452
#define OBJECT_142 451
#define OBJECT_141 450
#define OBJECT_140 449
#define OBJECT_139 448
#define OBJECT_138 447
#define OBJECT_137 446
#define OBJECT_136 445
#define OBJECT_135 444
#define OBJECT_134 443
#define OBJECT_133 442
#define OBJECT_132 441
#define OBJECT_131 440
#define OBJECT_130 439
#define OBJECT_129 438
#define OBJECT_128 437
#define OBJECT_127 436
#define OBJECT_126 435
#define OBJECT_125 434
#define OBJECT_124 433
#define OBJECT_123 432
#define OBJECT_122 431
#define OBJECT_121 430
#define OBJECT_120 429
#define OBJECT_119 428
#define OBJECT_118 427
#define OBJECT_117 426
#define OBJECT_116 425
#define OBJECT_115 424
#define OBJECT_114 423
#define OBJECT_113 422
#define OBJECT_112 421
#define OBJECT_111 420
#define OBJECT_110 419
#define OBJECT_109 418
#define OBJECT_108 417
#define OBJECT_107 416
#define OBJECT_106 415
#define OBJECT_105 414
#define OBJECT_104 413
#define OBJECT_103 412
#define OBJECT_102 411
#define OBJECT_101 410
#define OBJECT_100 409
#define OBJECT_99 408
#define OBJECT_98 407
#define OBJECT_97 406
#define OBJECT_96 405
#define OBJECT_95 404
#define OBJECT_94 403
#define OBJECT_93 402
#define OBJECT_92 401
#define OBJECT_91 400
#define OBJECT_90 399
#define OBJECT_89 398
#define OBJECT_88 397
#define OBJECT_87 396
#define OBJECT_86 395
#define OBJECT_85 394
#define OBJECT_84 393
#define OBJECT_83 392
#define OBJECT_82 391
#define OBJECT_81 390
#define OBJECT_80 389
#define OBJECT_79 388
#define OBJECT_78 387
#define OBJECT_77 386
#define OBJECT_76 385
#define OBJECT_75 384
#define OBJECT_74 383
#define OBJECT_73 382
#define OBJECT_72 381
#define OBJECT_71 380
#define OBJECT_70 379
#define OBJECT_69 378
#define OBJECT_68 377
#define OBJECT_67 376
#define OBJECT_66 375
#define OBJECT_65 374
#define OBJECT_64 373
#define OBJECT_63 372
#define OBJECT_62 371
#define OBJECT_61 370
#define OBJECT_60 369
#define OBJECT_59 368
#define OBJECT_58 367
#define OBJECT_57 366
#define OBJECT_56 365
#define OBJECT_55 364
#define OBJECT_54 363
#define OBJECT_53 362
#define OBJECT_52 361
#define OBJECT_51 360
#define OBJECT_50 359
#define OBJECT_49 358
#define OBJECT_48 357
#define OBJECT_47 356
#define OBJECT_46 355
#define OBJECT_45 354
#define OBJECT_44 353
#define OBJECT_43 352
#define OBJECT_42 351
#define OBJECT_41 350
#define OBJECT_40 349
#define OBJECT_39 348
#define OBJECT_38 347
#define OBJECT_37 346
#define OBJECT_36 345
#define OBJECT_35 344
#define OBJECT_34 343
#define OBJECT_33 342
#define OBJECT_32 341
#define OBJECT_31 340
#define OBJECT_30 339
#define OBJECT_29 338
#define OBJECT_28 337
#define OBJECT_27 336
#define OBJECT_26 335
#define OBJECT_25 334
#define OBJECT_24 333
#define OBJECT_23 332
#define OBJECT_22 331
#define OBJECT_21 330
#define OBJECT_20 329
#define OBJECT_19 328
#define OBJECT_18 327
#define OBJECT_17 326
#define OBJECT_16 325
#define OBJECT_15 324
#define OBJECT_14 323
#define OBJECT_13 322
#define OBJECT_12 321
#define OBJECT_11 320
#define OBJECT_10 319
#define OBJECT_9 318
#define OBJECT_8 317
#define OBJECT_7 316
#define OBJECT_6 315
#define OBJECT_5 314
#define OBJECT_4 313
#define OBJECT_3 312
#define OBJECT_2 311
#define OBJECT_1 310
#define OBJECT_0 309
#define EXECUTE_CACHE_129 289
#define EXECUTE_CACHE_58 291
#define EXECUTE_CACHE_51 293
#define EXECUTE_CACHE_37 295
#define EXECUTE_CACHE_33 297
#define EXECUTE_CACHE_29 299
#define EXECUTE_CACHE_25 301
#define FREE_REFERENCE_1 304
#define FREE_REFERENCE_0 305
#define GLOBAL_EXECUTE_CACHE_7 307
#define FREE_REFERENCES_LABEL_0 288
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
structure_parser_so_846a2bc82ac8d310 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd13;
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
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto label_149;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto label_150;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto label_151;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_152;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_27;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto label_153;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto label_154;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_31;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_34;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_33;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_35;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_36;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_37;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_38;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_39;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_40;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_41;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_42;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_43;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_44;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto continuation_45;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto continuation_46;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_47;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_48;

    case 52:
      current_block = (Rpc - LABEL_63);
      goto continuation_49;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto continuation_50;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto continuation_51;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto continuation_52;

    case 56:
      current_block = (Rpc - LABEL_67);
      goto continuation_53;

    case 57:
      current_block = (Rpc - LABEL_68);
      goto continuation_54;

    case 58:
      current_block = (Rpc - LABEL_69);
      goto continuation_55;

    case 59:
      current_block = (Rpc - LABEL_70);
      goto continuation_56;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_57;

    case 61:
      current_block = (Rpc - LABEL_72);
      goto continuation_58;

    case 62:
      current_block = (Rpc - LABEL_73);
      goto continuation_59;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto continuation_60;

    case 64:
      current_block = (Rpc - LABEL_75);
      goto continuation_61;

    case 65:
      current_block = (Rpc - LABEL_76);
      goto continuation_62;

    case 66:
      current_block = (Rpc - LABEL_77);
      goto continuation_63;

    case 67:
      current_block = (Rpc - LABEL_78);
      goto continuation_64;

    case 68:
      current_block = (Rpc - LABEL_79);
      goto continuation_65;

    case 69:
      current_block = (Rpc - LABEL_80);
      goto continuation_66;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_67;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_68;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto continuation_69;

    case 73:
      current_block = (Rpc - LABEL_84);
      goto continuation_70;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto continuation_71;

    case 75:
      current_block = (Rpc - LABEL_86);
      goto continuation_72;

    case 76:
      current_block = (Rpc - LABEL_87);
      goto continuation_73;

    case 77:
      current_block = (Rpc - LABEL_88);
      goto continuation_74;

    case 78:
      current_block = (Rpc - LABEL_89);
      goto continuation_75;

    case 79:
      current_block = (Rpc - LABEL_90);
      goto continuation_76;

    case 80:
      current_block = (Rpc - LABEL_91);
      goto continuation_77;

    case 81:
      current_block = (Rpc - LABEL_92);
      goto continuation_78;

    case 82:
      current_block = (Rpc - LABEL_93);
      goto continuation_79;

    case 83:
      current_block = (Rpc - LABEL_94);
      goto continuation_80;

    case 84:
      current_block = (Rpc - LABEL_95);
      goto continuation_81;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto continuation_82;

    case 86:
      current_block = (Rpc - LABEL_97);
      goto continuation_83;

    case 87:
      current_block = (Rpc - LABEL_98);
      goto continuation_84;

    case 88:
      current_block = (Rpc - LABEL_99);
      goto continuation_85;

    case 89:
      current_block = (Rpc - LABEL_100);
      goto continuation_86;

    case 90:
      current_block = (Rpc - LABEL_101);
      goto continuation_87;

    case 91:
      current_block = (Rpc - LABEL_102);
      goto continuation_88;

    case 92:
      current_block = (Rpc - LABEL_103);
      goto continuation_89;

    case 93:
      current_block = (Rpc - LABEL_104);
      goto continuation_90;

    case 94:
      current_block = (Rpc - LABEL_105);
      goto continuation_91;

    case 95:
      current_block = (Rpc - LABEL_106);
      goto continuation_92;

    case 96:
      current_block = (Rpc - LABEL_107);
      goto continuation_93;

    case 97:
      current_block = (Rpc - LABEL_108);
      goto continuation_94;

    case 98:
      current_block = (Rpc - LABEL_109);
      goto continuation_95;

    case 99:
      current_block = (Rpc - LABEL_110);
      goto continuation_96;

    case 100:
      current_block = (Rpc - LABEL_111);
      goto continuation_97;

    case 101:
      current_block = (Rpc - LABEL_112);
      goto continuation_98;

    case 102:
      current_block = (Rpc - LABEL_113);
      goto continuation_99;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_100;

    case 104:
      current_block = (Rpc - LABEL_115);
      goto continuation_101;

    case 105:
      current_block = (Rpc - LABEL_116);
      goto continuation_102;

    case 106:
      current_block = (Rpc - LABEL_117);
      goto continuation_103;

    case 107:
      current_block = (Rpc - LABEL_118);
      goto continuation_104;

    case 108:
      current_block = (Rpc - LABEL_119);
      goto continuation_105;

    case 109:
      current_block = (Rpc - LABEL_120);
      goto continuation_106;

    case 110:
      current_block = (Rpc - LABEL_121);
      goto continuation_107;

    case 111:
      current_block = (Rpc - LABEL_122);
      goto continuation_108;

    case 112:
      current_block = (Rpc - LABEL_123);
      goto continuation_109;

    case 113:
      current_block = (Rpc - LABEL_124);
      goto continuation_110;

    case 114:
      current_block = (Rpc - LABEL_125);
      goto continuation_111;

    case 115:
      current_block = (Rpc - LABEL_126);
      goto continuation_112;

    case 116:
      current_block = (Rpc - LABEL_127);
      goto continuation_113;

    case 117:
      current_block = (Rpc - LABEL_128);
      goto continuation_114;

    case 118:
      current_block = (Rpc - LABEL_131);
      goto label_155;

    case 119:
      current_block = (Rpc - LABEL_132);
      goto label_156;

    case 120:
      current_block = (Rpc - LABEL_130);
      goto continuation_118;

    case 121:
      current_block = (Rpc - LABEL_134);
      goto label_157;

    case 122:
      current_block = (Rpc - LABEL_135);
      goto label_158;

    case 123:
      current_block = (Rpc - LABEL_133);
      goto continuation_125;

    case 124:
      current_block = (Rpc - LABEL_137);
      goto label_159;

    case 125:
      current_block = (Rpc - LABEL_138);
      goto label_160;

    case 126:
      current_block = (Rpc - LABEL_136);
      goto continuation_129;

    case 127:
      current_block = (Rpc - LABEL_140);
      goto label_161;

    case 128:
      current_block = (Rpc - LABEL_141);
      goto label_162;

    case 129:
      current_block = (Rpc - LABEL_139);
      goto continuation_136;

    case 130:
      current_block = (Rpc - LABEL_142);
      goto continuation_137;

    case 131:
      current_block = (Rpc - LABEL_143);
      goto continuation_138;

    case 132:
      current_block = (Rpc - LABEL_144);
      goto continuation_139;

    case 133:
      current_block = (Rpc - LABEL_145);
      goto continuation_140;

    case 134:
      current_block = (Rpc - LABEL_146);
      goto continuation_141;

    case 135:
      current_block = (Rpc - LABEL_147);
      goto continuation_142;

    case 136:
      current_block = (Rpc - LABEL_148);
      goto continuation_143;

    case 137:
      current_block = (Rpc - LABEL_149);
      goto continuation_144;

    case 138:
      current_block = (Rpc - LABEL_150);
      goto continuation_145;

    case 139:
      current_block = (Rpc - LABEL_151);
      goto continuation_146;

    case 140:
      current_block = (Rpc - LABEL_152);
      goto label_165;

    case 141:
      current_block = (Rpc - LABEL_153);
      goto label_166;

    case 142:
      current_block = (Rpc - LABEL_154);
      goto expression_148;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_148)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_153])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_166)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_165)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
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
	2,
	2,
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
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
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
	3,
	2,
	3,
	2,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 101)
      goto label_164;
    blocks = (current_block [OBJECT_221]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_152])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_164)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_194;
  Wrd12 = Wrd16;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_192;
  Wrd11 = Wrd15;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_190;
  Wrd12 = Wrd16;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_188;
  Wrd12 = Wrd16;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_186;
  Wrd12 = Wrd16;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_184;
  Wrd12 = Wrd16;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_182;
  Wrd10 = Wrd14;

DEFLABEL (label_181)
  (Wrd19.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_180;
  Wrd21 = Wrd25;

DEFLABEL (label_179)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_193]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_178;
  Wrd10 = Wrd14;

DEFLABEL (label_177)
  (Wrd19.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_176;
  Wrd21 = Wrd25;

DEFLABEL (label_175)
  (Wrd30.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_195]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_193]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_193]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_174;
  Wrd10 = Wrd14;

DEFLABEL (label_173)
  (Wrd19.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_172;
  Wrd21 = Wrd25;

DEFLABEL (label_171)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_197]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_170;
  Wrd10 = Wrd14;

DEFLABEL (label_169)
  (Wrd19.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_168;
  Wrd21 = Wrd25;

DEFLABEL (label_167)
  (Wrd30.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_195]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_193]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_197]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd5.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_220]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141])), (Wrd22.pObj));

DEFLABEL (label_162)
  (Wrd21.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd11.pObj));

DEFLABEL (label_161)
  (Wrd10.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_138])), (Wrd22.pObj));

DEFLABEL (label_160)
  (Wrd21.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd11.pObj));

DEFLABEL (label_159)
  (Wrd10.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_135])), (Wrd22.pObj));

DEFLABEL (label_158)
  (Wrd21.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134])), (Wrd11.pObj));

DEFLABEL (label_157)
  (Wrd10.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_132])), (Wrd22.pObj));

DEFLABEL (label_156)
  (Wrd21.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd11.pObj));

DEFLABEL (label_155)
  (Wrd10.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd13.pObj));

DEFLABEL (label_154)
  (Wrd12.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd13.pObj));

DEFLABEL (label_153)
  (Wrd12.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd13.pObj));

DEFLABEL (label_152)
  (Wrd12.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd13.pObj));

DEFLABEL (label_151)
  (Wrd12.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_150)
  (Wrd11.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd13.pObj));

DEFLABEL (label_149)
  (Wrd12.Obj) = Rvl;
  goto label_193;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_structure_parser_so_846a2bc82ac8d310 [101] =
  {
    { "structure_parser_so_code_1", 5, structure_parser_so_code_1 },
    { "structure_parser_so_code_2", 3, structure_parser_so_code_2 },
    { "structure_parser_so_code_3", 4, structure_parser_so_code_3 },
    { "structure_parser_so_code_4", 3, structure_parser_so_code_4 },
    { "structure_parser_so_code_5", 4, structure_parser_so_code_5 },
    { "structure_parser_so_code_6", 5, structure_parser_so_code_6 },
    { "structure_parser_so_code_7", 8, structure_parser_so_code_7 },
    { "structure_parser_so_code_8", 19, structure_parser_so_code_8 },
    { "structure_parser_so_code_9", 14, structure_parser_so_code_9 },
    { "structure_parser_so_code_10", 6, structure_parser_so_code_10 },
    { "structure_parser_so_code_11", 15, structure_parser_so_code_11 },
    { "structure_parser_so_code_12", 7, structure_parser_so_code_12 },
    { "structure_parser_so_code_13", 8, structure_parser_so_code_13 },
    { "structure_parser_so_code_14", 3, structure_parser_so_code_14 },
    { "structure_parser_so_code_15", 6, structure_parser_so_code_15 },
    { "structure_parser_so_code_16", 6, structure_parser_so_code_16 },
    { "structure_parser_so_code_17", 8, structure_parser_so_code_17 },
    { "structure_parser_so_code_18", 8, structure_parser_so_code_18 },
    { "structure_parser_so_code_19", 9, structure_parser_so_code_19 },
    { "structure_parser_so_code_20", 2, structure_parser_so_code_20 },
    { "structure_parser_so_code_21", 3, structure_parser_so_code_21 },
    { "structure_parser_so_code_22", 5, structure_parser_so_code_22 },
    { "structure_parser_so_code_23", 14, structure_parser_so_code_23 },
    { "structure_parser_so_code_24", 7, structure_parser_so_code_24 },
    { "structure_parser_so_code_25", 7, structure_parser_so_code_25 },
    { "structure_parser_so_code_26", 3, structure_parser_so_code_26 },
    { "structure_parser_so_code_27", 8, structure_parser_so_code_27 },
    { "structure_parser_so_code_28", 10, structure_parser_so_code_28 },
    { "structure_parser_so_code_29", 11, structure_parser_so_code_29 },
    { "structure_parser_so_code_30", 14, structure_parser_so_code_30 },
    { "structure_parser_so_code_31", 7, structure_parser_so_code_31 },
    { "structure_parser_so_code_32", 10, structure_parser_so_code_32 },
    { "structure_parser_so_code_33", 12, structure_parser_so_code_33 },
    { "structure_parser_so_code_34", 12, structure_parser_so_code_34 },
    { "structure_parser_so_code_35", 12, structure_parser_so_code_35 },
    { "structure_parser_so_code_36", 13, structure_parser_so_code_36 },
    { "structure_parser_so_code_37", 5, structure_parser_so_code_37 },
    { "structure_parser_so_code_38", 3, structure_parser_so_code_38 },
    { "structure_parser_so_code_39", 4, structure_parser_so_code_39 },
    { "structure_parser_so_code_40", 5, structure_parser_so_code_40 },
    { "structure_parser_so_code_41", 2, structure_parser_so_code_41 },
    { "structure_parser_so_code_42", 3, structure_parser_so_code_42 },
    { "structure_parser_so_code_43", 5, structure_parser_so_code_43 },
    { "structure_parser_so_code_44", 5, structure_parser_so_code_44 },
    { "structure_parser_so_code_45", 3, structure_parser_so_code_45 },
    { "structure_parser_so_code_46", 4, structure_parser_so_code_46 },
    { "structure_parser_so_code_47", 5, structure_parser_so_code_47 },
    { "structure_parser_so_code_48", 2, structure_parser_so_code_48 },
    { "structure_parser_so_code_49", 3, structure_parser_so_code_49 },
    { "structure_parser_so_code_50", 5, structure_parser_so_code_50 },
    { "structure_parser_so_code_51", 5, structure_parser_so_code_51 },
    { "structure_parser_so_code_52", 3, structure_parser_so_code_52 },
    { "structure_parser_so_code_53", 2, structure_parser_so_code_53 },
    { "structure_parser_so_code_54", 1, structure_parser_so_code_54 },
    { "structure_parser_so_code_55", 8, structure_parser_so_code_55 },
    { "structure_parser_so_code_56", 3, structure_parser_so_code_56 },
    { "structure_parser_so_code_57", 1, structure_parser_so_code_57 },
    { "structure_parser_so_code_58", 11, structure_parser_so_code_58 },
    { "structure_parser_so_code_59", 7, structure_parser_so_code_59 },
    { "structure_parser_so_code_60", 2, structure_parser_so_code_60 },
    { "structure_parser_so_code_61", 1, structure_parser_so_code_61 },
    { "structure_parser_so_code_62", 8, structure_parser_so_code_62 },
    { "structure_parser_so_code_63", 12, structure_parser_so_code_63 },
    { "structure_parser_so_code_64", 1, structure_parser_so_code_64 },
    { "structure_parser_so_code_65", 1, structure_parser_so_code_65 },
    { "structure_parser_so_code_66", 1, structure_parser_so_code_66 },
    { "structure_parser_so_code_67", 1, structure_parser_so_code_67 },
    { "structure_parser_so_code_68", 1, structure_parser_so_code_68 },
    { "structure_parser_so_code_69", 1, structure_parser_so_code_69 },
    { "structure_parser_so_code_70", 2, structure_parser_so_code_70 },
    { "structure_parser_so_code_71", 1, structure_parser_so_code_71 },
    { "structure_parser_so_code_72", 3, structure_parser_so_code_72 },
    { "structure_parser_so_code_73", 7, structure_parser_so_code_73 },
    { "structure_parser_so_code_74", 11, structure_parser_so_code_74 },
    { "structure_parser_so_code_75", 8, structure_parser_so_code_75 },
    { "structure_parser_so_code_76", 4, structure_parser_so_code_76 },
    { "structure_parser_so_code_77", 18, structure_parser_so_code_77 },
    { "structure_parser_so_code_78", 24, structure_parser_so_code_78 },
    { "structure_parser_so_code_79", 25, structure_parser_so_code_79 },
    { "structure_parser_so_code_80", 26, structure_parser_so_code_80 },
    { "structure_parser_so_code_81", 9, structure_parser_so_code_81 },
    { "structure_parser_so_code_82", 17, structure_parser_so_code_82 },
    { "structure_parser_so_code_83", 14, structure_parser_so_code_83 },
    { "structure_parser_so_code_84", 3, structure_parser_so_code_84 },
    { "structure_parser_so_code_85", 6, structure_parser_so_code_85 },
    { "structure_parser_so_code_86", 15, structure_parser_so_code_86 },
    { "structure_parser_so_code_87", 6, structure_parser_so_code_87 },
    { "structure_parser_so_code_88", 13, structure_parser_so_code_88 },
    { "structure_parser_so_code_89", 6, structure_parser_so_code_89 },
    { "structure_parser_so_code_90", 13, structure_parser_so_code_90 },
    { "structure_parser_so_code_91", 5, structure_parser_so_code_91 },
    { "structure_parser_so_code_92", 4, structure_parser_so_code_92 },
    { "structure_parser_so_code_93", 30, structure_parser_so_code_93 },
    { "structure_parser_so_code_94", 19, structure_parser_so_code_94 },
    { "structure_parser_so_code_95", 7, structure_parser_so_code_95 },
    { "structure_parser_so_code_96", 1, structure_parser_so_code_96 },
    { "structure_parser_so_code_97", 1, structure_parser_so_code_97 },
    { "structure_parser_so_code_98", 1, structure_parser_so_code_98 },
    { "structure_parser_so_code_99", 7, structure_parser_so_code_99 },
    { "structure_parser_so_code_100", 17, structure_parser_so_code_100 },
    { "structure_parser_so_code_101", 1, structure_parser_so_code_101 }
  };

int
decl_structure_parser_so_846a2bc82ac8d310 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_structure_parser_so_846a2bc82ac8d310);
  return (0);
}

DECLARE_COMPILED_CODE ("structure-parser.so", 143, decl_structure_parser_so_846a2bc82ac8d310, structure_parser_so_846a2bc82ac8d310)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_structure_parser_so_data_846a2bc82ac8d310 [13554] =
  "\x96\x04\xb4\x01\x9b\x21\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9"
  "\xc1\xba\x0d\xbb\x08\x88\xc1\xbc\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c\x0d\x1c\x0d\x1c\xb3\x08\x89\xb4"
  "\x28\xb5\x28\xb6\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x1c\x1b\x1b\xb3\x08\x89"
  "\xb4\x28\xb5\x28\xb6\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x86\x88\x80\xc1\x1d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\xb1\x0c\xb4\x0c"
  "\xb2\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\xb5\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d"
  "\x1c\x08\x88\x1b\x1b\xb4\x0d\x1c\x0d\x08\x89\x1b\xb3\x08\x8a\x0d"
  "\x1c\x1b\x06\x07\x02\x86\x02\x02\xc2\x1c\x02\x1b\x0d\x1c\x08\x89"
  "\x1b\xb3\x08\x8a\x08\x28\x0d\x28\xb5\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\xb1\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1d\xb4\xb2"
  "\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x80\xc2\x1c\x82"
  "\x0c\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x81\x1b\x80\xc3\x82\x1d\x1b\x25\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb2\xb4\x08"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\xb4\x08"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb2\xb4"
  "\x08\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\xb2\xb4\x08\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x85\x02\x0d\x0d\x1c\x06\x07\x02\x86\x02"
  "\x02\x1b\x02\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x0d"
  "\x1c\xb2\xb4\xb1\x0d\x1c\x08\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb4\x0d\x1c\x08\x88\x08\x88\x1b\x08\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x0d\xb4\x1b\x08\x88\x08\x88\x1b\x80\x0d\x1c\x08\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb4\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\xb4\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb4\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb4\x0d\x0d\x1c\x0d\x1c\x08\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb2\x08\xb4\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb2\xb4\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x1b\xb2\xb4\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xb2\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x1b\xb2\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x08\x1b\xb2\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x0d\x1c\x08\x1b\xb2\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\xb4\xb1\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x08\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x81\x1b\x0d\x1c\x0d\x1c\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x08\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\x08\x89\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb4\xb2\x08\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xb4\xb2\x08\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x07\xb2\x08\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb4\x81\xb2\x80\x08\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb4\xb2"
  "\x80\x08\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x1b\x08\x8a\x28"
  "\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08"
  "\x89\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\x1b\x08\x8a\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x1b\x08\x8a\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x1c\x1b\x1b\x1b\x08\x8c\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x8a\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x08\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b"
  "\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\xb2\xb4\x08\x1b\x0d\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x80"
  "\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x1b\x1b\x08\x89\x1b\x1b\x08\x89\x0d\x1c\x08\x8a\xb2"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\x07\xb4\x81\xb2\x1b\x0d\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x89\x1b\x1b\x08"
  "\x89\x1b\x1b\x08\x89\x1b\x1b\x08\x89\x1b\x1b\x08\x89\x1b\x1b\x08"
  "\x89\x1b\x1b\x08\x89\x08\x02\x86\x02\x02\x02\x06\x07\x85\x1b\x02"
  "\x1b\x24\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x80\x81\xb2\xb4\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x08\xb2\xb4\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb2"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x1b\x1b\x24\x28\x1b\x28\x1b\x28"
  "\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\xb4\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2\xb4\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x07\xb2\xb4\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2\xb4\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb4\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb2\xb4\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x1c\x08\xb2\xb4\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\xb2\x07\x08\xb4\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x0d\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x1b\x08\x89\x1b\x1b\x08\x89\x1b"
  "\x08\x89\x1b\x1b\x08\x89\x1b\x1b\x1b\x1b\x08\x89\x08\x89\x1b\x08"
  "\x8b\x1b\x1b\x08\x89\x1b\x1b\x08\x89\x1b\x08\x8a\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\xbd\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\xb2\xb4\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2"
  "\xb4\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x23\x22\x29\x21\x9f\x2b\xbc\x17\xba\x88\xb2\xb4\x2a\x1b\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\xb5\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b"
  "\x1b\x08\x89\x1b\x1b\x1b\x08\x8b\x1b\x08\x8b\x1b\x2a\x1b\x1b\x08"
  "\x89\x07\x1b\x1b\x08\x8b\x1b\x2a\x1b\x1b\x08\x89\x06\x1b\x1b\x08"
  "\x8b\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b\x2a\x1b\x1b"
  "\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x07\x1b\x1b\x2a"
  "\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x0d\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x08\x88\x1b\x1b\x2a\xb1"
  "\xb3\x08\x89\x1b\x2a\x0d\x1b\xb3\x08\x8a\x1b\x2a\x0d\x1b\xb3\x08"
  "\x8a\x1b\x2a\x0d\x1b\xb3\x08\x8a\x1b\x2a\x0d\x1b\xb3\x08\x8a\x1b"
  "\x2a\x1b\x1b\xb3\x08\x8a\x1b\x2a\x0d\xb3\x08\x89\x1b\x2a\x1b\x1b"
  "\xb3\x08\x8a\x1b\x2a\x1b\x1b\xb3\x08\x8a\x1b\x1b\x08\x89\x1b\x2a"
  "\x1b\x1b\xb3\x08\x8a\x1b\x2a\x1b\x1b\x1b\x08\x8a\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x1b\x2a\x1b\x1b\xb3\x08\x8a\x1b\x2a\x1b\x1b\xb3\x08"
  "\x8a\x1b\x2a\x1b\xb3\xb3\x08\x8a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x1c\x08\x89\x1b\x2a\x0d\x1b\x08"
  "\x89\x1b\x2a\x0d\x1b\x08\x89\x1b\x2a\x0d\x1b\x08\x89\x1b\x2a\x0d"
  "\x08\x88\xb1\x1b\x2a\x1b\x0d\x1c\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x0d"
  "\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x0d\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x1b"
  "\x1b\x08\x8b\x1b\x08\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\xb7\x1b\x2a\x0d\x0d\x1b\x2a\xb6\x2a\x0d\x0d\x1b\x2a\x1b"
  "\x2a\xc2\x02\x02\x0d\xc3\x0d\x1b\x2a\x1b\x2a\x28\x0d\x26\x1b\x0d"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23"
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
  "\x02\x5f\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x07\x6f\x62\x6a\x65\x63\x74\x04\x63\x61"
  "\x72\x05\x66\x6f\x72\x6d\x04\x63\x64\x72\x04\x0e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x03\x12\x69\x6c\x6c\x2d\x66"
  "\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x05\x12\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x04"
  "\x94\x01\x0c\x81\x85\x02\x93\x01\x0a\x81\x85\x02\x92\x01\x08\x81"
  "\x85\x02\x91\x01\x06\x81\x87\x02\x90\x01\x04\x84\x06\x0b\x19\x09"
  "\x02\x03\x1e\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70\x61\x72"
  "\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x2d\x3e\x6c\x69\x73\x74"
  "\x0a\x02\x97\x01\x08\x82\x02\x96\x01\x06\x84\x06\x95\x01\x04\x84"
  "\x06\x07\x0d\x0b\x02\x05\x6c\x69\x73\x74\x0c\x04\x73\x65\x71\x0d"
  "\x02\x2a\x0e\x04\x03\x05\x04\x9b\x01\x0a\x81\x85\x02\x9a\x01\x08"
  "\x81\x85\x02\x99\x01\x06\x81\x87\x02\x98\x01\x04\x84\x06\x09\x17"
  "\x0f\x02\x03\x0a\x02\x9e\x01\x08\x82\x02\x9d\x01\x06\x85\x08\x9c"
  "\x01\x04\x84\x06\x07\x0e\x10\x02\x07\x76\x65\x63\x74\x6f\x72\x11"
  "\x0d\x0e\x04\x03\x05\x04\xa2\x01\x0a\x81\x85\x02\xa1\x01\x08\x81"
  "\x85\x02\xa0\x01\x06\x81\x87\x02\x9f\x01\x04\x84\x06\x09\x17\x02"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x08\x03"
  "\x0a\x02\xa7\x01\x0c\x81\x89\x02\xa6\x01\x0a\x82\x02\xa5\x01\x08"
  "\x81\x8b\x02\xa4\x01\x06\x86\x06\xa3\x01\x04\x81\x89\x02\x0b\x14"
  "\x12\x02\x08\x02\x0e\x6e\x61\x6d\x65\x2d\x63\x6f\x75\x6e\x74\x65"
  "\x72\x73\x13\x02\x13\x02\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72"
  "\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64"
  "\x2d\x62\x69\x6e\x64\x05\x10\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70"
  "\x61\x74\x74\x65\x72\x6e\x14\x03\x10\x6f\x70\x74\x69\x6d\x69\x7a"
  "\x65\x2d\x72\x65\x73\x75\x6c\x74\x15\x05\xaf\x01\x12\x81\x83\x02"
  "\xae\x01\x10\x81\x83\x02\xad\x01\x0e\x81\x85\x02\xac\x01\x0c\x81"
  "\x83\x02\xab\x01\x0a\x81\x83\x02\xaa\x01\x08\x81\x83\x02\xa9\x01"
  "\x06\x81\x87\x02\xa8\x01\x04\x85\x08\x11\x22\x16\x02\x09\x1f\x50"
  "\x61\x74\x74\x65\x72\x6e\x20\x75\x73\x65\x64\x20\x69\x6e\x20\x77"
  "\x72\x6f\x6e\x67\x20\x63\x6f\x6e\x74\x65\x78\x74\x3a\x13\x63\x61"
  "\x6c\x6c\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x17\x14\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x70\x61\x74"
  "\x74\x65\x72\x6e\x3a\x16\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a"
  "\x65\x64\x20\x70\x61\x74\x74\x65\x72\x6e\x3a\x03\x10\x72\x65\x77"
  "\x72\x69\x74\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x18\x04\x15\x67"
  "\x65\x74\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x19\x04\x06\x65\x72\x72\x6f\x72\x1a\x03\x0a\x70\x63"
  "\x2d\x73\x79\x6e\x74\x61\x78\x1b\x03\x0b\x70\x63\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x1c\x04\x03\x06\x6c\x69\x73\x74\x3f\x1d\x04\x13"
  "\x67\x65\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x1e\x04\x05\x6d\x65\x6d\x71\x1f\x03\x0c\x70\x63\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x20\x0b\xc2\x01\x28\xfd\xff\x03\xc1"
  "\x01\x26\x81\x8d\x02\xc0\x01\x24\x81\x8b\x02\xbf\x01\x22\xff\xff"
  "\x03\xbe\x01\x20\x81\x8d\x02\xbd\x01\x1e\x81\x8b\x02\xbc\x01\x1c"
  "\x81\x8d\x02\xbb\x01\x1a\x81\x8d\x02\xba\x01\x18\x81\x8d\x02\xb9"
  "\x01\x16\x81\x8b\x02\xb8\x01\x14\x81\x8f\x02\xb7\x01\x12\x81\x8b"
  "\x02\xb6\x01\x10\x81\x8b\x02\xb5\x01\x0e\x81\x8d\x02\xb4\x01\x0c"
  "\x81\x8d\x02\xb3\x01\x0a\x81\x87\x02\xb2\x01\x08\x81\x89\x02\xb1"
  "\x01\x06\x81\x8b\x02\xb0\x01\x04\x85\x08\x27\x46\x21\x02\x0a\x04"
  "\x61\x6c\x74\x22\x07\x76\x61\x6c\x75\x65\x73\x23\x0d\x0e\x06\x71"
  "\x75\x6f\x74\x65\x24\x02\x3f\x0e\x05\x73\x65\x78\x70\x25\x24\x3d"
  "\x3b\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x26"
  "\x1b\x24\x02\x2b\x27\x0e\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x65\x72\x3f\x04\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x28\x03"
  "\x18\x04\x07\x61\x70\x70\x65\x6e\x64\x29\x06\xd0\x01\x1e\x81\x83"
  "\x02\xcf\x01\x1c\x81\x83\x02\xce\x01\x1a\x81\x83\x02\xcd\x01\x18"
  "\x81\x87\x02\xcc\x01\x16\x81\x85\x02\xcb\x01\x14\x81\x83\x02\xca"
  "\x01\x12\x81\x83\x02\xc9\x01\x10\x81\x83\x02\xc8\x01\x0e\x81\x83"
  "\x02\xc7\x01\x0c\x81\x83\x02\xc6\x01\x0a\x81\x83\x02\xc5\x01\x08"
  "\x81\x83\x02\xc4\x01\x06\x81\x83\x02\xc3\x01\x04\x83\x04\x1d\x3d"
  "\x2a\x02\x0b\x04\x61\x6e\x79\x2b\x12\x70\x61\x74\x74\x65\x72\x6e"
  "\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x73\x2c\x02\x04\x05\x66\x69"
  "\x6e\x64\x2d\x03\x08\x70\x63\x2d\x6e\x61\x6d\x65\x2e\x03\x1c\x03"
  "\x1d\x05\xd6\x01\x0e\x81\x87\x02\xd5\x01\x0c\x81\x85\x02\xd4\x01"
  "\x0a\x81\x85\x02\xd3\x01\x08\x81\x85\x02\xd2\x01\x06\x81\x85\x02"
  "\xd1\x01\x04\x84\x06\x0d\x1e\x2f\x02\x0c\x02\x2c\x02\x2c\x02\x06"
  "\x08\x6d\x61\x6b\x65\x2d\x70\x63\x30\x04\x08\x72\x65\x6d\x6f\x76"
  "\x65\x21\x03\x1d\x03\x2e\x03\x1c\x04\x2b\x04\x1f\x08\xe5\x01\x20"
  "\x81\x85\x02\xe4\x01\x1e\x81\x87\x02\xe3\x01\x1c\x81\x85\x02\xe2"
  "\x01\x1a\x81\x85\x02\xe1\x01\x18\x81\x83\x02\xe0\x01\x16\x81\x85"
  "\x02\xdf\x01\x14\x81\x87\x02\xde\x01\x12\x81\x8b\x02\xdd\x01\x10"
  "\x81\x83\x02\xdc\x01\x0e\x81\x83\x02\xdb\x01\x0c\x81\x91\x02\xda"
  "\x01\x0a\x81\x89\x02\xd9\x01\x08\x81\x81\x02\xd8\x01\x06\x81\x87"
  "\x02\xd7\x01\x04\x85\x08\x1f\x39\x1d\x02\x0d\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x31\x18\x4d\x69\x73\x73\x69\x6e\x67\x20"
  "\x63\x6f\x6e\x74\x65\x78\x74\x20\x6d\x65\x74\x68\x6f\x64\x3a\x10"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2d\x6d\x65\x74\x68\x6f\x64\x73\x32"
  "\x02\x04\x2d\x05\x1a\x03\xec\x01\x10\x81\x85\x02\xeb\x01\x0e\x81"
  "\x85\x02\xea\x01\x0c\x81\x85\x02\xe9\x01\x0a\x81\x85\x02\xe8\x01"
  "\x08\x81\x87\x02\xe7\x01\x06\x81\x87\x02\xe6\x01\x04\x84\x06\x0f"
  "\x1f\x1a\x02\x0e\x31\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x02\x32\x02\x32\x02\x04\x2d\x02\xf4\x01\x12\x81\x85\x02\xf3"
  "\x01\x10\x81\x85\x02\xf2\x01\x0e\x81\x85\x02\xf1\x01\x0c\x81\x89"
  "\x02\xf0\x01\x0a\x81\x89\x02\xef\x01\x08\x81\x87\x02\xee\x01\x06"
  "\x81\x89\x02\xed\x01\x04\x85\x08\x11\x22\x31\x02\x0f\x03\x13\x6d"
  "\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x03\x0b\x73\x69\x6e\x67\x6c\x65\x2d\x76\x61\x6c\x33\x03"
  "\xf7\x01\x08\x81\x87\x02\xf6\x01\x06\x85\x08\xf5\x01\x04\x84\x06"
  "\x07\x10\x34\x02\x10\x03\x69\x66\x35\x03\x2d\x03\x33\x04\x0d\x63"
  "\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x36\x04\xfd\x01\x0e"
  "\x81\x8b\x02\xfc\x01\x0c\x81\x8f\x02\xfb\x01\x0a\x81\x8f\x02\xfa"
  "\x01\x08\x81\x89\x02\xf9\x01\x06\x81\x89\x02\xf8\x01\x04\x84\x06"
  "\x0d\x1b\x37\x02\x11\x35\x03\x2d\x02\x0a\x6e\x75\x6c\x6c\x2d\x76"
  "\x61\x6c\x73\x38\x04\x36\x04\x83\x02\x0e\x81\x8b\x02\x82\x02\x0c"
  "\x81\x8f\x02\x81\x02\x0a\x81\x8f\x02\x80\x02\x08\x81\x89\x02\xff"
  "\x01\x06\x81\x89\x02\xfe\x01\x04\x84\x06\x0d\x1b\x39\x02\x12\x35"
  "\x24\x03\x2d\x03\x33\x03\x13\x65\x71\x75\x61\x6c\x69\x74\x79\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x3a\x04\x8b\x02\x12\x81\x8d"
  "\x02\x8a\x02\x10\x81\x8f\x02\x89\x02\x0e\x81\x8f\x02\x88\x02\x0c"
  "\x81\x8b\x02\x87\x02\x0a\x81\x8b\x02\x86\x02\x08\x81\x89\x02\x85"
  "\x02\x06\x81\x89\x02\x84\x02\x04\x84\x06\x11\x20\x3b\x02\x13\x35"
  "\x24\x03\x2d\x02\x38\x03\x3a\x04\x93\x02\x12\x81\x8d\x02\x92\x02"
  "\x10\x81\x8f\x02\x91\x02\x0e\x81\x8f\x02\x90\x02\x0c\x81\x8b\x02"
  "\x8f\x02\x0a\x81\x8b\x02\x8e\x02\x08\x81\x89\x02\x8d\x02\x06\x81"
  "\x89\x02\x8c\x02\x04\x84\x06\x11\x20\x3c\x02\x14\x04\x65\x71\x3f"
  "\x1e\x05\x65\x71\x76\x3f\x07\x65\x71\x75\x61\x6c\x3f\x3d\x3d\x3b"
  "\x0f\x26\x1b\x03\x28\x02\x9c\x02\x14\x81\x83\x02\x9b\x02\x12\x83"
  "\x04\x9a\x02\x10\x81\x83\x02\x99\x02\x0e\x81\x83\x02\x98\x02\x0c"
  "\x81\x83\x02\x97\x02\x0a\x81\x83\x02\x96\x02\x08\x81\x83\x02\x95"
  "\x02\x06\x81\x83\x02\x94\x02\x04\x81\x83\x02\x13\x27\x28\x02\x15"
  "\x03\x2d\x02\x9e\x02\x06\x81\x89\x02\x9d\x02\x04\x83\x04\x05\x0c"
  "\x3e\x02\x16\x03\x2d\x02\xa1\x02\x08\x81\x87\x02\xa0\x02\x06\x81"
  "\x89\x02\x9f\x02\x04\x83\x04\x07\x0e\x3f\x02\x17\x03\x2d\x03\x13"
  "\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x77\x69\x6e\x6e"
  "\x65\x72\x40\x03\xa6\x02\x0c\x81\x87\x02\xa5\x02\x0a\x81\x87\x02"
  "\xa4\x02\x08\x81\x89\x02\xa3\x02\x06\x81\x89\x02\xa2\x02\x04\x84"
  "\x06\x0b\x14\x41\x02\x18\x04\x63\x64\x72\x42\x35\x06\x70\x61\x69"
  "\x72\x3f\x43\x04\x63\x61\x72\x44\x03\x2d\x03\x40\x05\x14\x04\x0a"
  "\x6a\x6f\x69\x6e\x2d\x76\x61\x6c\x73\x45\x05\xb4\x02\x1e\x81\x87"
  "\x02\xb3\x02\x1c\x81\x89\x02\xb2\x02\x1a\x81\x87\x02\xb1\x02\x18"
  "\x81\x8f\x02\xb0\x02\x16\x81\x8f\x02\xaf\x02\x14\x81\x8f\x02\xae"
  "\x02\x12\x81\x87\x02\xad\x02\x10\x81\x8b\x02\xac\x02\x0e\x81\x87"
  "\x02\xab\x02\x0c\x81\x91\x02\xaa\x02\x0a\x81\x91\x02\xa9\x02\x08"
  "\x81\x89\x02\xa8\x02\x06\x81\x89\x02\xa7\x02\x04\x84\x06\x1d\x31"
  "\x46\x02\x19\x0d\x04\x65\x6e\x64\x47\x0c\x03\x2d\x03\x11\x6d\x61"
  "\x6b\x65\x2d\x6c\x69\x73\x74\x2d\x77\x69\x6e\x6e\x65\x72\x48\x04"
  "\x29\x05\x14\x05\xbb\x02\x10\x81\x91\x02\xba\x02\x0e\x81\x8b\x02"
  "\xb9\x02\x0c\x81\x89\x02\xb8\x02\x0a\x81\x95\x02\xb7\x02\x08\x81"
  "\x89\x02\xb6\x02\x06\x81\x89\x02\xb5\x02\x04\x84\x06\x0f\x20\x49"
  "\x02\x1a\x0d\x35\x08\x76\x65\x63\x74\x6f\x72\x3f\x47\x11\x0e\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x4a\x03\x2d\x03"
  "\x13\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x77\x69\x6e"
  "\x6e\x65\x72\x4b\x04\x29\x05\x14\x05\xc2\x02\x10\x81\x91\x02\xc1"
  "\x02\x0e\x81\x8b\x02\xc0\x02\x0c\x81\x89\x02\xbf\x02\x0a\x81\x95"
  "\x02\xbe\x02\x08\x81\x89\x02\xbd\x02\x06\x81\x89\x02\xbc\x02\x04"
  "\x84\x06\x0f\x24\x4c\x02\x1b\x04\x36\x02\xc5\x02\x08\x81\x87\x02"
  "\xc4\x02\x06\x81\x87\x02\xc3\x02\x04\x85\x08\x07\x0f\x4d\x02\x1c"
  "\x06\x61\x70\x70\x6c\x79\x4e\x23\x45\x02\x04\x1e\x04\x04\x6d\x61"
  "\x70\x4f\x04\x36\x03\x33\x05\xcd\x02\x12\x81\x85\x02\xcc\x02\x10"
  "\x81\x85\x02\xcb\x02\x0e\x81\x8b\x02\xca\x02\x0c\x81\x89\x02\xc9"
  "\x02\x0a\x81\x87\x02\xc8\x02\x08\x81\x8b\x02\xc7\x02\x06\x81\x87"
  "\x02\xc6\x02\x04\x85\x08\x11\x22\x50\x02\x1d\x22\x04\x1e\x05\x14"
  "\x03\x0b\x6d\x61\x6b\x65\x2d\x6c\x6f\x73\x65\x72\x51\x04\xd7\x02"
  "\x16\xfd\xff\x03\xd6\x02\x14\xfd\xff\x03\xd5\x02\x12\xfd\xff\x03"
  "\xd4\x02\x10\xfd\xff\x03\xd3\x02\x0e\xfd\xff\x03\xd2\x02\x0c\xff"
  "\xff\x03\xd1\x02\x0a\x81\x87\x02\xd0\x02\x08\x81\x89\x02\xcf\x02"
  "\x06\x81\x87\x02\xce\x02\x04\x85\x08\x15\x23\x52\x02\x1e\x0d\x09"
  "\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x05\x6c\x6f\x73\x65\x53\x05\x76"
  "\x61\x6c\x73\x54\x0e\x04\x1e\x02\x38\x04\x0a\x6d\x61\x6b\x65\x2d"
  "\x6c\x6f\x6f\x70\x55\x05\x14\x03\x51\x04\x45\x07\xe2\x02\x18\x81"
  "\x89\x02\xe1\x02\x16\x81\x8b\x02\xe0\x02\x14\x81\x89\x02\xdf\x02"
  "\x12\x81\x8d\x02\xde\x02\x10\x81\x91\x02\xdd\x02\x0e\x81\x8b\x02"
  "\xdc\x02\x0c\x81\x8b\x02\xdb\x02\x0a\x81\x8b\x02\xda\x02\x08\x81"
  "\x87\x02\xd9\x02\x06\x81\x8b\x02\xd8\x02\x04\x85\x08\x17\x2e\x56"
  "\x02\x1f\x0d\x04\x4f\x04\x1e\x05\x14\x02\x38\x04\x45\x06\xf0\x02"
  "\x1e\x81\x8b\x02\xef\x02\x1c\x81\x8b\x02\xee\x02\x1a\x81\x89\x02"
  "\xed\x02\x18\x81\x8b\x02\xec\x02\x16\x81\x8b\x02\xeb\x02\x14\x81"
  "\x8d\x02\xea\x02\x12\x81\x8b\x02\xe9\x02\x10\x81\x8b\x02\xe8\x02"
  "\x0e\x81\x89\x02\xe7\x02\x0c\x81\x85\x02\xe6\x02\x0a\x81\x89\x02"
  "\xe5\x02\x08\x81\x87\x02\xe4\x02\x06\x81\x89\x02\xe3\x02\x04\x85"
  "\x08\x1d\x2f\x57\x02\x20\x0f\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x2d\x76\x61\x6c\x73\x58\x05\x14\x04\x1e\x02\x38\x04\xf7\x02\x10"
  "\x81\x87\x02\xf6\x02\x0e\x85\x08\xf5\x02\x0c\x81\x89\x02\xf4\x02"
  "\x0a\x81\x87\x02\xf3\x02\x08\x81\x8d\x02\xf2\x02\x06\x81\x8d\x02"
  "\xf1\x02\x04\x85\x08\x0f\x1c\x59\x02\x21\x1c\x6d\x61\x70\x2d\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x73\x5a\x58\x05\x14\x04\x1e\x04\x36\x04\x81"
  "\x03\x16\x81\x8b\x02\x80\x03\x14\x81\x89\x02\xff\x02\x12\x81\x8f"
  "\x02\xfe\x02\x10\x81\x8f\x02\xfd\x02\x0e\x81\x89\x02\xfc\x02\x0c"
  "\x81\x87\x02\xfb\x02\x0a\x81\x8d\x02\xfa\x02\x08\x81\x8d\x02\xf9"
  "\x02\x06\x81\x8d\x02\xf8\x02\x04\x85\x08\x15\x24\x5b\x02\x22\x58"
  "\x05\x14\x04\x1e\x04\x36\x03\x33\x04\x09\x63\x61\x6c\x6c\x2d\x6f"
  "\x75\x74\x5c\x06\x8d\x03\x1a\x81\x91\x02\x8c\x03\x18\x81\x8d\x02"
  "\x8b\x03\x16\x81\x8b\x02\x8a\x03\x14\x81\x89\x02\x89\x03\x12\x81"
  "\x95\x02\x88\x03\x10\x81\x95\x02\x87\x03\x0e\x81\x89\x02\x86\x03"
  "\x0c\x81\x87\x02\x85\x03\x0a\x81\x8d\x02\x84\x03\x08\x81\x8d\x02"
  "\x83\x03\x06\x81\x8d\x02\x82\x03\x04\x85\x08\x19\x2a\x5d\x02\x23"
  "\x35\x58\x05\x14\x04\x1e\x04\x36\x04\x5c\x05\x99\x03\x1a\x81\x8f"
  "\x02\x98\x03\x18\x81\x8b\x02\x97\x03\x16\x81\x93\x02\x96\x03\x14"
  "\x81\x93\x02\x95\x03\x12\x81\x89\x02\x94\x03\x10\x81\x89\x02\x93"
  "\x03\x0e\x81\x89\x02\x92\x03\x0c\x81\x87\x02\x91\x03\x0a\x81\x8d"
  "\x02\x90\x03\x08\x81\x8d\x02\x8f\x03\x06\x81\x8d\x02\x8e\x03\x04"
  "\x85\x08\x19\x2a\x5e\x02\x24\x35\x04\x6e\x6f\x74\x58\x05\x14\x04"
  "\x1e\x04\x36\x04\x5c\x05\xa5\x03\x1a\x81\x8f\x02\xa4\x03\x18\x81"
  "\x8b\x02\xa3\x03\x16\x81\x93\x02\xa2\x03\x14\x81\x93\x02\xa1\x03"
  "\x12\x81\x89\x02\xa0\x03\x10\x81\x89\x02\x9f\x03\x0e\x81\x89\x02"
  "\x9e\x03\x0c\x81\x87\x02\x9d\x03\x0a\x81\x8d\x02\x9c\x03\x08\x81"
  "\x8d\x02\x9b\x03\x06\x81\x8d\x02\x9a\x03\x04\x85\x08\x19\x2b\x5f"
  "\x02\x25\x35\x54\x1e\x6c\x69\x73\x74\x2d\x3e\x73\x74\x72\x75\x63"
  "\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x76\x61\x6c\x75"
  "\x65\x73\x60\x58\x05\x14\x04\x1e\x04\x36\x04\x09\x6d\x61\x6b\x65"
  "\x2d\x6c\x65\x74\x36\x04\x5c\x06\xb2\x03\x1c\x81\x85\x02\xb1\x03"
  "\x1a\x81\x8d\x02\xb0\x03\x18\x81\x89\x02\xaf\x03\x16\x81\x85\x02"
  "\xae\x03\x14\x81\x89\x02\xad\x03\x12\x81\x91\x02\xac\x03\x10\x81"
  "\x91\x02\xab\x03\x0e\x81\x89\x02\xaa\x03\x0c\x81\x87\x02\xa9\x03"
  "\x0a\x81\x8d\x02\xa8\x03\x08\x81\x8d\x02\xa7\x03\x06\x81\x8d\x02"
  "\xa6\x03\x04\x85\x08\x1b\x30\x61\x02\x26\x17\x04\x1e\x05\x14\x03"
  "\xb7\x03\x0c\x81\x87\x02\xb6\x03\x0a\x81\x8d\x02\xb5\x03\x08\x81"
  "\x8d\x02\xb4\x03\x06\x81\x87\x02\xb3\x03\x04\x85\x08\x0b\x17\x62"
  "\x02\x27\x35\x06\x6e\x75\x6c\x6c\x3f\x03\x11\x6d\x61\x6b\x65\x2d"
  "\x6c\x69\x73\x74\x2d\x70\x61\x72\x73\x65\x72\x63\x02\x38\x03\xba"
  "\x03\x08\x81\x87\x02\xb9\x03\x06\x85\x08\xb8\x03\x04\x84\x06\x07"
  "\x12\x64\x02\x28\x42\x35\x43\x44\x03\x63\x03\x40\x03\xbe\x03\x0a"
  "\x81\x87\x02\xbd\x03\x08\x81\x89\x02\xbc\x03\x06\x81\x89\x02\xbb"
  "\x03\x04\x83\x04\x09\x16\x43\x02\x29\x03\x63\x03\x48\x03\xc3\x03"
  "\x0c\x81\x89\x02\xc2\x03\x0a\x86\x0a\xc1\x03\x08\x81\x89\x02\xc0"
  "\x03\x06\x81\x89\x02\xbf\x03\x04\x83\x04\x0b\x14\x65\x02\x2a\x03"
  "\x63\x02\xc5\x03\x06\x81\x89\x02\xc4\x03\x04\x83\x04\x05\x0c\x66"
  "\x02\x2b\x03\x63\x02\xc8\x03\x08\x81\x87\x02\xc7\x03\x06\x81\x89"
  "\x02\xc6\x03\x04\x83\x04\x07\x0e\x67\x02\x2c\x03\x63\x03\x48\x03"
  "\xcd\x03\x0c\x81\x89\x02\xcc\x03\x0a\x86\x0a\xcb\x03\x08\x81\x89"
  "\x02\xca\x03\x06\x81\x89\x02\xc9\x03\x04\x83\x04\x0b\x14\x68\x02"
  "\x2d\x03\x63\x03\x48\x03\xd2\x03\x0c\x81\x87\x02\xd1\x03\x0a\x81"
  "\x89\x02\xd0\x03\x08\x81\x89\x02\xcf\x03\x06\x81\x89\x02\xce\x03"
  "\x04\x84\x06\x0b\x14\x69\x02\x2e\x35\x06\x66\x69\x78\x3a\x3d\x6a"
  "\x03\x13\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x70\x61"
  "\x72\x73\x65\x72\x6b\x02\x38\x03\xd5\x03\x08\x81\x8b\x02\xd4\x03"
  "\x06\x87\x0c\xd3\x03\x04\x84\x06\x07\x12\x6c\x02\x2f\x06\x66\x69"
  "\x78\x3a\x2b\x6d\x35\x06\x66\x69\x78\x3a\x3c\x6e\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x6f\x03\x6b\x03\x40\x03\xd9\x03\x0a"
  "\x81\x87\x02\xd8\x03\x08\x81\x8d\x02\xd7\x03\x06\x81\x8d\x02\xd6"
  "\x03\x04\x83\x04\x09\x17\x70\x02\x30\x03\x6b\x03\x4b\x03\xde\x03"
  "\x0c\x81\x8b\x02\xdd\x03\x0a\x81\x89\x02\xdc\x03\x08\x81\x8b\x02"
  "\xdb\x03\x06\x81\x8d\x02\xda\x03\x04\x83\x04\x0b\x14\x71\x02\x31"
  "\x03\x6b\x02\xe0\x03\x06\x81\x8d\x02\xdf\x03\x04\x83\x04\x05\x0c"
  "\x72\x02\x32\x03\x6b\x02\xe3\x03\x08\x81\x87\x02\xe2\x03\x06\x81"
  "\x8d\x02\xe1\x03\x04\x83\x04\x07\x0e\x73\x02\x33\x03\x6b\x03\x4b"
  "\x03\xe8\x03\x0c\x81\x8b\x02\xe7\x03\x0a\x81\x89\x02\xe6\x03\x08"
  "\x81\x8b\x02\xe5\x03\x06\x81\x8d\x02\xe4\x03\x04\x83\x04\x0b\x14"
  "\x74\x02\x34\x03\x6b\x03\x4b\x03\xed\x03\x0c\x81\x87\x02\xec\x03"
  "\x0a\x81\x89\x02\xeb\x03\x08\x81\x8d\x02\xea\x03\x06\x81\x8d\x02"
  "\xe9\x03\x04\x84\x06\x0b\x14\x75\x02\x35\x05\x63\x6f\x6e\x73\x76"
  "\x02\x38\x05\x0d\x72\x65\x64\x75\x63\x65\x2d\x72\x69\x67\x68\x74"
  "\x03\xf0\x03\x08\x84\x06\xef\x03\x06\x81\x83\x02\xee\x03\x04\xff"
  "\x03\x07\x11\x77\x02\x36\x76\x24\x12\x73\x69\x6e\x67\x6c\x65\x2d"
  "\x76\x61\x6c\x2d\x6d\x61\x72\x6b\x65\x72\x78\x02\xf2\x03\x06\x81"
  "\x83\x02\xf1\x03\x04\x83\x04\x05\x0d\x79\x02\x37\x24\xf3\x03\x04"
  "\x82\x02\x03\x7a\x02\x38\x0a\x78\x02\x04\x22\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x7b\x02\xfb\x03"
  "\x12\xfd\xff\x03\xfa\x03\x10\xfd\xff\x03\xf9\x03\x0e\xfd\xff\x03"
  "\xf8\x03\x0c\xfd\xff\x03\xf7\x03\x0a\xfd\xff\x03\xf6\x03\x08\xfd"
  "\xff\x03\xf5\x03\x06\xff\xff\x03\xf4\x03\x04\x83\x04\x11\x1d\x7c"
  "\x02\x39\x78\x02\x04\x4f\x02\xfe\x03\x08\x81\x83\x02\xfd\x03\x06"
  "\x83\x04\xfc\x03\x04\x83\x04\x07\x0f\x7d\x02\x3a\x03\x60\x02\xff"
  "\x03\x04\xff\x03\x03\x7e\x02\x3b\x5a\x78\x02\x04\x7b\x02\x8a\x04"
  "\x18\xfd\xff\x03\x89\x04\x16\xfd\xff\x03\x88\x04\x14\xfd\xff\x03"
  "\x87\x04\x12\xfd\xff\x03\x86\x04\x10\xfd\xff\x03\x85\x04\x0e\xfd"
  "\xff\x03\x84\x04\x0c\xfd\xff\x03\x83\x04\x0a\xfd\xff\x03\x82\x04"
  "\x08\xfd\xff\x03\x81\x04\x06\xff\xff\x03\x80\x04\x04\x84\x06\x17"
  "\x23\x7f\x02\x3c\x78\x02\x91\x04\x10\x81\x83\x02\x90\x04\x0e\x81"
  "\x83\x02\x8f\x04\x0c\x81\x85\x02\x8e\x04\x0a\x81\x85\x02\x8d\x04"
  "\x08\x81\x83\x02\x8c\x04\x06\x81\x83\x02\x8b\x04\x04\x83\x04\x0f"
  "\x18\x80\x01\x02\x3d\x02\x03\x19\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x3f"
  "\x81\x01\x04\x7b\x03\x93\x04\x06\x81\x85\x02\x92\x04\x04\x84\x04"
  "\x05\x0e\x82\x01\x02\x3e\x08\x15\x6f\x62\x6a\x65\x63\x74\x2d\x70"
  "\x61\x72\x73\x65\x72\x20\x76\x61\x6c\x75\x65\x73\x05\x1a\x65\x72"
  "\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x02\x94\x04\x04\x84\x04\x03\x0c\x83"
  "\x01\x02\x3f\x1f\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x84\x01\x78\x02\x04\x7b\x02\x9c\x04\x12\xfd\xff\x03\x9b"
  "\x04\x10\xfd\xff\x03\x9a\x04\x0e\xfd\xff\x03\x99\x04\x0c\xfd\xff"
  "\x03\x98\x04\x0a\xfd\xff\x03\x97\x04\x08\xfd\xff\x03\x96\x04\x06"
  "\xff\xff\x03\x95\x04\x04\x83\x04\x11\x1f\x85\x01\x02\x40\x1c\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x73\x2d\x72\x65\x66\x86\x01\x78\x02\x04\x7b"
  "\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\xa8\x04\x1a\x81\x8b"
  "\x02\xa7\x04\x18\x81\x89\x02\xa6\x04\x16\x81\x89\x02\xa5\x04\x14"
  "\x81\x89\x02\xa4\x04\x12\x81\x8b\x02\xa3\x04\x10\x81\x8b\x02\xa2"
  "\x04\x0e\x81\x8b\x02\xa1\x04\x0c\x81\x8b\x02\xa0\x04\x0a\x81\x8d"
  "\x02\x9f\x04\x08\x81\x8b\x02\x9e\x04\x06\x81\x8b\x02\x9d\x04\x04"
  "\x84\x06\x19\x28\x87\x01\x02\x41\x05\x69\x74\x65\x6d\x04\x77\x69"
  "\x6e\x88\x01\x53\x04\x0c\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64"
  "\x61\x89\x01\x02\xa9\x04\x04\x83\x04\x03\x0a\x8a\x01\x02\x42\x54"
  "\x53\x04\x89\x01\x02\xaa\x04\x04\x83\x04\x03\x0a\x8b\x01\x02\x43"
  "\x06\x69\x74\x65\x6d\x73\x8c\x01\x88\x01\x53\x04\x89\x01\x02\xab"
  "\x04\x04\x83\x04\x03\x0a\x8d\x01\x02\x44\x8c\x01\x54\x53\x04\x89"
  "\x01\x02\xac\x04\x04\x83\x04\x03\x0a\x8c\x01\x02\x45\x11\x06\x73"
  "\x74\x61\x72\x74\x8e\x01\x47\x88\x01\x53\x04\x89\x01\x02\xad\x04"
  "\x04\x83\x04\x03\x0a\x88\x01\x02\x46\x8e\x01\x54\x53\x04\x89\x01"
  "\x02\xae\x04\x04\x83\x04\x03\x0a\x8e\x01\x02\x47\x04\x89\x01\x02"
  "\xb0\x04\x06\x81\x83\x02\xaf\x04\x04\x83\x04\x05\x0c\x54\x02\x48"
  "\x06\x61\x70\x70\x6c\x79\x0a\xb1\x04\x04\x84\x06\x03\x53\x02\x49"
  "\x07\x6c\x61\x6d\x62\x64\x61\x8f\x01\x4e\x04\x14\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x61\x6d\x65\x73\x90"
  "\x01\x02\xb4\x04\x08\x81\x85\x02\xb3\x04\x06\x81\x85\x02\xb2\x04"
  "\x04\x84\x06\x07\x10\x91\x01\x02\x4a\x8f\x01\x4e\x05\x63\x61\x64"
  "\x72\x92\x01\x44\x03\x04\x4f\x04\x90\x01\x03\xbb\x04\x10\x81\x85"
  "\x02\xba\x04\x0e\x81\x85\x02\xb9\x04\x0c\x81\x87\x02\xb8\x04\x0a"
  "\x81\x8b\x02\xb7\x04\x08\x81\x85\x02\xb6\x04\x06\x81\x89\x02\xb5"
  "\x04\x04\x84\x06\x0f\x1d\x93\x01\x02\x4b\x04\x6c\x65\x74\x94\x01"
  "\x4e\x05\x6c\x6f\x6f\x70\x92\x01\x44\x03\x04\x4f\x05\x4f\x04\x90"
  "\x01\x04\xc6\x04\x18\x84\x06\xc5\x04\x16\x81\x87\x02\xc4\x04\x14"
  "\x81\x87\x02\xc3\x04\x12\x81\x8b\x02\xc2\x04\x10\x81\x85\x02\xc1"
  "\x04\x0e\x81\x85\x02\xc0\x04\x0c\x81\x87\x02\xbf\x04\x0a\x81\x8b"
  "\x02\xbe\x04\x08\x81\x85\x02\xbd\x04\x06\x81\x89\x02\xbc\x04\x04"
  "\x84\x06\x17\x2a\x95\x01\x02\x4c\x02\x2e\x4e\x13\x02\x04\x4f\x05"
  "\x17\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d\x72\x65\x66\x2f"
  "\x64\x65\x66\x61\x75\x6c\x74\x05\x10\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2d\x73\x65\x74\x21\x05\x07\x73\x79\x6d\x62\x6f\x6c"
  "\x96\x01\x05\xce\x04\x12\x81\x85\x02\xcd\x04\x10\x81\x8b\x02\xcc"
  "\x04\x0e\x81\x87\x02\xcb\x04\x0c\x81\x83\x02\xca\x04\x0a\x81\x89"
  "\x02\xc9\x04\x08\x83\x04\xc8\x04\x06\x81\x85\x02\xc7\x04\x04\x84"
  "\x06\x11\x22\x97\x01\x02\x4d\x12\x65\x6e\x61\x62\x6c\x65\x2d\x6f"
  "\x70\x74\x69\x6d\x69\x7a\x65\x72\x3f\x98\x01\x02\x03\x0e\x66\x69"
  "\x78\x75\x70\x2d\x6c\x61\x6d\x62\x64\x61\x73\x99\x01\x03\x0e\x6f"
  "\x70\x74\x69\x6d\x69\x7a\x65\x2d\x6c\x65\x74\x73\x9a\x01\x03\x13"
  "\x70\x65\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a"
  "\x65\x72\x9b\x01\x04\xd2\x04\x0a\x81\x85\x02\xd1\x04\x08\x81\x85"
  "\x02\xd0\x04\x06\x83\x04\xcf\x04\x04\x81\x83\x02\x09\x15\x9c\x01"
  "\x02\x4e\x24\x8f\x01\x0e\x96\x01\x0b\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x9d\x01\x0d\x72\x65\x77\x72\x69\x74\x65\x2d\x6c\x6f"
  "\x6f\x70\x9e\x01\x0f\x72\x65\x77\x72\x69\x74\x65\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x9f\x01\x12\x72\x65\x77\x72\x69\x74\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\xa0\x01\x0e\x72\x65\x77\x72\x69\x74"
  "\x65\x2d\x71\x75\x6f\x74\x65\xa1\x01\x11\x72\x65\x77\x72\x69\x74"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\xa2\x01\x06\x09\x0a\x77"
  "\x61\x6c\x6b\x2d\x65\x78\x70\x72\xa3\x01\x04\x0d\x72\x65\x77\x72"
  "\x69\x74\x65\x2d\x66\x6f\x72\x6d\xa4\x01\x04\x06\x0d\x6f\x70\x74"
  "\x69\x6d\x69\x7a\x65\x2d\x6c\x65\x74\xa5\x01\x05\xe4\x04\x26\x81"
  "\x89\x02\xe3\x04\x24\x81\x89\x02\xe2\x04\x22\x81\x89\x02\xe1\x04"
  "\x20\x81\x89\x02\xe0\x04\x1e\x81\x89\x02\xdf\x04\x1c\x81\x87\x02"
  "\xde\x04\x1a\x81\x87\x02\xdd\x04\x18\x81\x87\x02\xdc\x04\x16\x81"
  "\x87\x02\xdb\x04\x14\x81\x89\x02\xda\x04\x12\x81\x85\x02\xd9\x04"
  "\x10\x84\x06\xd8\x04\x0e\x81\x8b\x02\xd7\x04\x0c\x81\x89\x02\xd6"
  "\x04\x0a\x81\x87\x02\xd5\x04\x08\x81\x85\x02\xd4\x04\x06\x81\x83"
  "\x02\xd3\x04\x04\x83\x04\x25\x3a\xa6\x01\x02\x4f\x8f\x01\x42\x05"
  "\x63\x64\x64\x72\x92\x01\x04\x04\x4f\x05\x4f\x04\x0a\x70\x61\x72"
  "\x74\x69\x74\x69\x6f\x6e\x04\x07\x72\x65\x6d\x6f\x76\x65\x04\x0e"
  "\x63\x6f\x75\x6e\x74\x2d\x72\x65\x66\x73\x2d\x69\x6e\x92\x01\x03"
  "\x0f\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61\x62\x6c\x65\x3f\xa7"
  "\x01\x03\x9a\x01\x04\x0b\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65"
  "\xa8\x01\x09\xfc\x04\x32\x81\x8b\x02\xfb\x04\x30\x81\x8f\x02\xfa"
  "\x04\x2e\x81\x89\x02\xf9\x04\x2c\x81\x8d\x02\xf8\x04\x2a\x81\x8d"
  "\x02\xf7\x04\x28\x81\x87\x02\xf6\x04\x26\x81\x91\x02\xf5\x04\x24"
  "\x81\x87\x02\xf4\x04\x22\x81\x89\x02\xf3\x04\x20\x81\x87\x02\xf2"
  "\x04\x1e\x81\x83\x02\xf1\x04\x1c\x83\x04\xf0\x04\x1a\x81\x83\x02"
  "\xef\x04\x18\x81\x83\x02\xee\x04\x16\x81\x83\x02\xed\x04\x14\x81"
  "\x83\x02\xec\x04\x12\x83\x04\xeb\x04\x10\x81\x8f\x02\xea\x04\x0e"
  "\x81\x87\x02\xe9\x04\x0c\x81\x8f\x02\xe8\x04\x0a\x81\x8d\x02\xe7"
  "\x04\x08\x81\x8b\x02\xe6\x04\x06\x81\x89\x02\xe5\x04\x04\x86\x0a"
  "\x31\x4f\xa9\x01\x02\x50\x24\x6f\x24\x6a\x24\x6e\x24\x6d\x24\x4a"
  "\x24\x42\x24\x44\x3d\x3b\x0f\x1b\x26\x1e\xa7\x01\x02\x04\x02\x95"
  "\x05\x34\x81\x87\x02\x94\x05\x32\x81\x85\x02\x93\x05\x30\x81\x85"
  "\x02\x92\x05\x2e\x81\x8b\x02\x91\x05\x2c\x81\x89\x02\x90\x05\x2a"
  "\x81\x85\x02\x8f\x05\x28\x81\x8b\x02\x8e\x05\x26\x81\x89\x02\x8d"
  "\x05\x24\x81\x85\x02\x8c\x05\x22\x81\x8b\x02\x8b\x05\x20\x81\x89"
  "\x02\x8a\x05\x1e\x81\x85\x02\x89\x05\x1c\x81\x89\x02\x88\x05\x1a"
  "\x81\x85\x02\x87\x05\x18\x81\x89\x02\x86\x05\x16\x81\x85\x02\x85"
  "\x05\x14\x81\x89\x02\x84\x05\x12\x81\x83\x02\x83\x05\x10\x81\x83"
  "\x02\x82\x05\x0e\x81\x83\x02\x81\x05\x0c\x81\x83\x02\x80\x05\x0a"
  "\x81\x83\x02\xff\x04\x08\x83\x04\xfe\x04\x06\x81\x83\x02\xfd\x04"
  "\x04\x81\x85\x02\x33\x4d\x6f\x02\x51\x4e\x27\x02\x09\xa3\x01\x04"
  "\x4f\x03\xaf\x05\x36\x81\x85\x02\xae\x05\x34\x81\x85\x02\xad\x05"
  "\x32\x81\x85\x02\xac\x05\x30\x81\x8b\x02\xab\x05\x2e\x81\x89\x02"
  "\xaa\x05\x2c\x81\x87\x02\xa9\x05\x2a\x81\x85\x02\xa8\x05\x28\x81"
  "\x85\x02\xa7\x05\x26\x81\x8b\x02\xa6\x05\x24\x81\x8b\x02\xa5\x05"
  "\x22\x81\x8b\x02\xa4\x05\x20\x81\x85\x02\xa3\x05\x1e\x84\x06\xa2"
  "\x05\x1c\x81\x87\x02\xa1\x05\x1a\x81\x87\x02\xa0\x05\x18\x81\x87"
  "\x02\x9f\x05\x16\x81\x87\x02\x9e\x05\x14\x84\x06\x9d\x05\x12\x83"
  "\x04\x9c\x05\x10\x83\x04\x9b\x05\x0e\x81\x85\x02\x9a\x05\x0c\x81"
  "\x85\x02\x99\x05\x0a\x81\x85\x02\x98\x05\x08\x81\x85\x02\x97\x05"
  "\x06\x84\x06\x96\x05\x04\x84\x06\x35\x44\x6a\x02\x52\x9f\x01\xa1"
  "\x01\xa2\x01\x9e\x01\xa4\x01\x06\x09\xa3\x01\x03\xa0\x01\x04\x05"
  "\x61\x73\x73\x71\x04\xb8\x05\x14\x81\x87\x02\xb7\x05\x12\x81\x85"
  "\x02\xb6\x05\x10\x81\x85\x02\xb5\x05\x0e\x81\x8f\x02\xb4\x05\x0c"
  "\x81\x8f\x02\xb3\x05\x0a\x81\x8b\x02\xb2\x05\x08\x81\x89\x02\xb1"
  "\x05\x06\x81\x85\x02\xb0\x05\x04\x84\x06\x13\x24\x4e\x02\x53\x8f"
  "\x01\x9e\x01\xa0\x01\xa1\x01\xa2\x01\xa4\x01\x06\x09\xa3\x01\x04"
  "\x07\x66\x69\x6c\x74\x65\x72\x4a\x04\x29\x04\x92\x01\x05\xc9\x05"
  "\x24\x81\x85\x02\xc8\x05\x22\x81\x85\x02\xc7\x05\x20\x81\x89\x02"
  "\xc6\x05\x1e\x81\x85\x02\xc5\x05\x1c\x81\x85\x02\xc4\x05\x1a\x81"
  "\x85\x02\xc3\x05\x18\x81\x85\x02\xc2\x05\x16\x81\x87\x02\xc1\x05"
  "\x14\x81\x87\x02\xc0\x05\x12\x81\x87\x02\xbf\x05\x10\x84\x06\xbe"
  "\x05\x0e\x81\x8f\x02\xbd\x05\x0c\x81\x8b\x02\xbc\x05\x0a\x81\x89"
  "\x02\xbb\x05\x08\x81\x87\x02\xba\x05\x06\x81\x83\x02\xb9\x05\x04"
  "\x83\x04\x23\x3a\x44\x02\x54\x9e\x01\x9f\x01\xa0\x01\xa1\x01\xa2"
  "\x01\x9b\x01\x07\x09\xa3\x01\x04\xa4\x01\x03\x18\x67\x65\x74\x2d"
  "\x70\x65\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a"
  "\x65\x72\x73\x29\x04\xd7\x05\x1e\x81\x85\x02\xd6\x05\x1c\x81\x83"
  "\x02\xd5\x05\x1a\x81\x89\x02\xd4\x05\x18\x81\x87\x02\xd3\x05\x16"
  "\x81\x85\x02\xd2\x05\x14\x81\x85\x02\xd1\x05\x12\x81\x85\x02\xd0"
  "\x05\x10\x84\x06\xcf\x05\x0e\x81\x8b\x02\xce\x05\x0c\x81\x89\x02"
  "\xcd\x05\x0a\x81\x87\x02\xcc\x05\x08\x81\x85\x02\xcb\x05\x06\x81"
  "\x83\x02\xca\x05\x04\x83\x04\x1d\x30\x26\x02\x55\x02\x14\x70\x65"
  "\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72"
  "\x73\xaa\x01\x02\xaa\x01\x02\xda\x05\x08\x81\x85\x02\xd9\x05\x06"
  "\x81\x85\x02\xd8\x05\x04\x84\x06\x07\x0f\xab\x01\x02\x56\x42\xaa"
  "\x01\x03\x04\x4a\x04\x4f\x04\x04\xe0\x05\x0e\x81\x87\x02\xdf\x05"
  "\x0c\x81\x85\x02\xde\x05\x0a\x81\x85\x02\xdd\x05\x08\x81\x87\x02"
  "\xdc\x05\x06\x81\x83\x02\xdb\x05\x04\x83\x04\x0d\x1b\x4a\x02\x57"
  "\x02\x38\x04\x3d\x03\xef\x05\x20\x81\x8b\x02\xee\x05\x1e\x81\x8b"
  "\x02\xed\x05\x1c\x81\x8b\x02\xec\x05\x1a\x81\x89\x02\xeb\x05\x18"
  "\x81\x87\x02\xea\x05\x16\x81\x87\x02\xe9\x05\x14\x81\x87\x02\xe8"
  "\x05\x12\x81\x8b\x02\xe7\x05\x10\x81\x8b\x02\xe6\x05\x0e\x81\x89"
  "\x02\xe5\x05\x0c\x81\x87\x02\xe4\x05\x0a\x81\x87\x02\xe3\x05\x08"
  "\x81\x87\x02\xe2\x05\x06\x81\x87\x02\xe1\x05\x04\x85\x08\x1f\x29"
  "\x42\x02\x58\xf5\x05\x0e\x81\x89\x02\xf4\x05\x0c\x81\x89\x02\xf3"
  "\x05\x0a\x81\x87\x02\xf2\x05\x08\x81\x87\x02\xf1\x05\x06\x81\x87"
  "\x02\xf0\x05\x04\x85\x08\x0d\x12\xac\x01\x02\x59\x6d\x82\x06\x1c"
  "\x81\x89\x02\x81\x06\x1a\x81\x89\x02\x80\x06\x18\x81\x89\x02\xff"
  "\x05\x16\x81\x89\x02\xfe\x05\x14\x81\x89\x02\xfd\x05\x12\x81\x89"
  "\x02\xfc\x05\x10\x81\x89\x02\xfb\x05\x0e\x81\x89\x02\xfa\x05\x0c"
  "\x81\x89\x02\xf9\x05\x0a\x81\x87\x02\xf8\x05\x08\x81\x87\x02\xf7"
  "\x05\x06\x81\x87\x02\xf6\x05\x04\x85\x08\x1b\x22\xad\x01\x02\x5a"
  "\x88\x06\x0e\x81\x89\x02\x87\x06\x0c\x81\x89\x02\x86\x06\x0a\x81"
  "\x87\x02\x85\x06\x08\x81\x87\x02\x84\x06\x06\x81\x87\x02\x83\x06"
  "\x04\x85\x08\x0d\x14\xae\x01\x02\x5b\x6e\x95\x06\x1c\x81\x8b\x02"
  "\x94\x06\x1a\x81\x8b\x02\x93\x06\x18\x81\x8b\x02\x92\x06\x16\x81"
  "\x8b\x02\x91\x06\x14\x81\x89\x02\x90\x06\x12\x81\x89\x02\x8f\x06"
  "\x10\x81\x89\x02\x8e\x06\x0e\x81\x89\x02\x8d\x06\x0c\x81\x89\x02"
  "\x8c\x06\x0a\x81\x87\x02\x8b\x06\x08\x81\x87\x02\x8a\x06\x06\x81"
  "\x87\x02\x89\x06\x04\x85\x08\x1b\x22\xaf\x01\x02\x5c\x9a\x06\x0c"
  "\x81\x87\x02\x99\x06\x0a\x81\x87\x02\x98\x06\x08\x81\x87\x02\x97"
  "\x06\x06\x81\x87\x02\x96\x06\x04\x85\x08\x0b\x10\xb0\x01\x02\x5d"
  "\x9e\x06\x0a\x81\x87\x02\x9d\x06\x08\x81\x87\x02\x9c\x06\x06\x81"
  "\x87\x02\x9b\x06\x04\x85\x08\x09\x0e\xb1\x01\x02\x5e\x35\x04\x61"
  "\x6e\x64\xb2\x01\x04\x3d\x02\xbc\x06\x3e\x81\x8b\x02\xbb\x06\x3c"
  "\x81\x8b\x02\xba\x06\x3a\x81\x89\x02\xb9\x06\x38\x81\x89\x02\xb8"
  "\x06\x36\x81\x89\x02\xb7\x06\x34\x81\x89\x02\xb6\x06\x32\x81\x89"
  "\x02\xb5\x06\x30\x81\x89\x02\xb4\x06\x2e\x81\x89\x02\xb3\x06\x2c"
  "\x81\x89\x02\xb2\x06\x2a\x81\x89\x02\xb1\x06\x28\x81\x89\x02\xb0"
  "\x06\x26\x81\x89\x02\xaf\x06\x24\x81\x87\x02\xae\x06\x22\x81\x87"
  "\x02\xad\x06\x20\x81\x87\x02\xac\x06\x1e\x81\x87\x02\xab\x06\x1c"
  "\x81\x87\x02\xaa\x06\x1a\x81\x8b\x02\xa9\x06\x18\x81\x8b\x02\xa8"
  "\x06\x16\x81\x8b\x02\xa7\x06\x14\x81\x8b\x02\xa6\x06\x12\x81\x8b"
  "\x02\xa5\x06\x10\x81\x8b\x02\xa4\x06\x0e\x81\x8b\x02\xa3\x06\x0c"
  "\x81\x89\x02\xa2\x06\x0a\x81\x89\x02\xa1\x06\x08\x81\x89\x02\xa0"
  "\x06\x06\x81\x89\x02\x9f\x06\x04\x85\x08\x3d\x48\x3d\x02\x5f\xb2"
  "\x01\x24\xb2\x01\x0e\x9d\x01\x04\x1f\x04\x05\x64\x65\x6c\x71\x04"
  "\x2b\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x04\x06\xcf"
  "\x06\x28\x81\x83\x02\xce\x06\x26\x83\x04\xcd\x06\x24\x81\x87\x02"
  "\xcc\x06\x22\x83\x04\xcb\x06\x20\x81\x89\x02\xca\x06\x1e\x81\x87"
  "\x02\xc9\x06\x1c\x81\x89\x02\xc8\x06\x1a\x81\x87\x02\xc7\x06\x18"
  "\x81\x87\x02\xc6\x06\x16\x81\x89\x02\xc5\x06\x14\x81\x89\x02\xc4"
  "\x06\x12\x81\x87\x02\xc3\x06\x10\x81\x89\x02\xc2\x06\x0e\x81\x87"
  "\x02\xc1\x06\x0c\x81\x87\x02\xc0\x06\x0a\x81\x87\x02\xbf\x06\x08"
  "\x81\x87\x02\xbe\x06\x06\x81\x87\x02\xbd\x06\x04\x85\x08\x27\x3b"
  "\x1f\x02\x60\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x27\x9d"
  "\x01\x24\x24\x9d\x01\x24\x94\x01\x96\x01\x0e\x96\x01\x9d\x01\x9d"
  "\x01\x24\x8f\x01\x0e\x96\x01\x9d\x01\x04\x02\xd6\x06\x10\x81\x85"
  "\x02\xd5\x06\x0e\x81\x85\x02\xd4\x06\x0c\x81\x85\x02\xd3\x06\x0a"
  "\x81\x85\x02\xd2\x06\x08\x81\x85\x02\xd1\x06\x06\x81\x85\x02\xd0"
  "\x06\x04\x89\x10\x0f\x1a\x96\x01\x02\x61\xd7\x06\x04\x83\x04\x03"
  "\x27\x02\x62\xd8\x06\x04\x83\x04\x03\x02\x63\xd9\x06\x04\x83\x04"
  "\x03\xb3\x01\x02\x64\x8f\x01\xe0\x06\x10\x81\x87\x02\xdf\x06\x0e"
  "\x81\x87\x02\xde\x06\x0c\x81\x85\x02\xdd\x06\x0a\x81\x87\x02\xdc"
  "\x06\x08\x81\x87\x02\xdb\x06\x06\x81\x87\x02\xda\x06\x04\x84\x06"
  "\x0f\x16\x8f\x01\x02\x65\x94\x01\x04\x4f\x02\xf1\x06\x24\x81\x87"
  "\x02\xf0\x06\x22\x81\x85\x02\xef\x06\x20\x81\x87\x02\xee\x06\x1e"
  "\x81\x87\x02\xed\x06\x1c\x81\x85\x02\xec\x06\x1a\x81\x87\x02\xeb"
  "\x06\x18\x81\x87\x02\xea\x06\x16\x81\x87\x02\xe9\x06\x14\x81\x89"
  "\x02\xe8\x06\x12\x81\x89\x02\xe7\x06\x10\x81\x89\x02\xe6\x06\x0e"
  "\x81\x85\x02\xe5\x06\x0c\x81\x87\x02\xe4\x06\x0a\x81\x87\x02\xe3"
  "\x06\x08\x81\x87\x02\xe2\x06\x06\x81\x87\x02\xe1\x06\x04\x84\x06"
  "\x23\x2d\x94\x01\x02\x66\x04\x4f\x02\xf2\x06\x04\x84\x06\x03\x66"
  "\x04\xa4\x01\x9e\x01\x94\x01\x04\x9f\x01\x8f\x01\x04\xa0\x01\xb3"
  "\x01\x04\xa1\x01\x04\xa2\x01\x27\x04\xa3\x01\x96\x01\x04\x24\xb2"
  "\x01\x0e\x9d\x01\x1f\x04\x24\x35\x9d\x01\x24\x35\x9d\x01\x9d\x01"
  "\x9d\x01\x9d\x01\x3d\x04\x24\x35\x9d\x01\x9d\x01\xb1\x01\x04\x24"
  "\x35\x9d\x01\x9d\x01\xb0\x01\x04\xaf\x01\x04\x24\x6e\xae\x01\x04"
  "\x9d\x01\xad\x01\x04\x24\x6d\xac\x01\x04\x24\x76\x9d\x01\x9d\x01"
  "\x42\x04\xaa\x01\x29\x4a\x04\x1a\x64\x65\x66\x69\x6e\x65\x2d\x70"
  "\x65\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x65"
  "\x72\xb3\x01\xab\x01\x04\x9b\x01\x26\x04\x99\x01\x44\x04\xa8\x01"
  "\x4e\x04\x92\x01\x6a\x04\xa7\x01\x6f\x08\xa5\x01\xa9\x01\x04\x9a"
  "\x01\xa6\x01\x04\x98\x01\x15\x9c\x01\x06\x13\x90\x01\x97\x01\x04"
  "\x55\x95\x01\x04\x36\x93\x01\x04\x89\x01\x91\x01\x04\x5c\x53\x04"
  "\x51\x54\x04\x4b\x8e\x01\x04\x6b\x88\x01\x04\x48\x8c\x01\x04\x63"
  "\x8d\x01\x04\x40\x8b\x01\x04\x2d\x8a\x01\x04\x86\x01\x87\x01\x04"
  "\x84\x01\x85\x01\x04\x7b\x83\x01\x04\x22\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x82\x01\x04\x81\x01"
  "\x80\x01\x04\x5a\x7f\x04\x18\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x76\x61\x6c\x75\x65\x73\x7e\x04"
  "\x60\x7d\x04\x0a\x7c\x04\x78\x2c\x23\x5b\x28\x72\x75\x6e\x74\x69"
  "\x6d\x65\x20\x6f\x62\x6a\x65\x63\x74\x2d\x70\x61\x72\x73\x65\x72"
  "\x29\x73\x69\x6e\x67\x6c\x65\x2d\x76\x61\x6c\x2d\x6d\x61\x72\x6b"
  "\x65\x72\x5d\x38\x7a\x04\x33\x79\x04\x45\x77\x04\x75\x04\x74\x04"
  "\x73\x04\x72\x04\x71\x04\x70\x04\x11\x6c\x04\x69\x04\x0e\x68\x04"
  "\x67\x04\x66\x04\x0d\x65\x04\x17\x43\x04\x47\x0c\x64\x04\x62\x04"
  "\x0a\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x9d\x01\x61\x04\x0b\x64"
  "\x69\x73\x71\x75\x61\x6c\x69\x66\x79\x9d\x01\x5f\x04\x08\x71\x75"
  "\x61\x6c\x69\x66\x79\x9d\x01\x5e\x04\x0c\x65\x6e\x63\x61\x70\x73"
  "\x75\x6c\x61\x74\x65\x9d\x01\x5d\x04\x4f\x9d\x01\x5b\x04\x06\x6e"
  "\x6f\x69\x73\x65\x59\x04\x0d\x0e\x57\x04\x0e\x0e\x0c\x11\x56\x04"
  "\x22\x0e\x52\x04\x23\x0e\x9d\x01\x50\x04\x25\x9d\x01\x2b\x4d\x04"
  "\x11\x0e\x4c\x04\x0c\x0e\x49\x04\x76\x46\x04\x58\x41\x04\x22\x3f"
  "\x04\x23\x3e\x04\x3a\x28\x12\x24\x06\x64\x61\x74\x75\x6d\xb2\x01"
  "\x3c\x04\x06\x6d\x61\x74\x63\x68\xb2\x01\x3b\x04\x09\x6e\x6f\x69"
  "\x73\x65\x2d\x69\x66\x9d\x01\x39\x04\x09\x6d\x61\x74\x63\x68\x2d"
  "\x69\x66\x9d\x01\x37\x04\x0a\x6d\x61\x74\x63\x68\x2d\x61\x6e\x79"
  "\x34\x04\x32\x16\x64\x65\x66\x69\x6e\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2d\x6d\x65\x74\x68\x6f\x64\xb2\x01\x31\x04\x20\x1e\x1a"
  "\x04\x1c\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\xb1\x01\x1b\x08\x63"
  "\x6f\x6e\x74\x65\x78\x74\xb0\x01\x2e\x07\x73\x79\x6e\x74\x61\x78"
  "\xaf\x01\x04\x70\x63\x3f\x05\x6e\x61\x6d\x65\xae\x01\x30\x05\x3c"
  "\x70\x63\x3e\xad\x01\xae\x01\xaf\x01\xb0\x01\xb1\x01\x2c\x18\x64"
  "\x65\x66\x69\x6e\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\xb1\x01\x1d\x04\x19\x2f\x04\x18\x2a\x04"
  "\x14\x21\x04\x16\x04\x0e\x76\x65\x63\x74\x6f\x72\x2d\x70\x61\x72"
  "\x73\x65\x72\x14\x61\x70\x70\x6c\x79\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x70\x61\x72\x73\x65\x72\x12\x06\x04\x0c\x6c\x69\x73\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x12\x61\x70\x70\x6c\x79\x2d\x6c\x69\x73"
  "\x74\x2d\x70\x61\x72\x73\x65\x72\x10\x04\x0f\x04\x1a\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65"
  "\x74\x2d\x74\x79\x70\x65\x33\x10\x0e\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x14\x61\x70\x70\x6c\x79\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x70\x61\x72\x73\x65\x72\x0b\x04\x09\x04\x04"
  "\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02"
  "\xad\x01\x0c\x66\x69\x78\x3a\x66\x69\x78\x6e\x75\x6d\x3f\x03\x04"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d"
  "\x61\x63\x63\x65\x73\x73\x6f\x72\x05\xb1\x01\x05\xb2\x01\x04\xb3"
  "\x01\x08\x8f\x01\xa0\x02\x80\x80\x04\x8e\x01\x9e\x02\x81\x81\x02"
  "\x8d\x01\x9c\x02\x81\x81\x02\x8c\x01\x9a\x02\x81\x83\x02\x8b\x01"
  "\x98\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x83\x02\x89\x01\x94\x02"
  "\x81\x83\x02\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90\x02\x81\x83"
  "\x02\x86\x01\x8e\x02\x81\x83\x02\x85\x01\x8c\x02\x81\x83\x02\x84"
  "\x01\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01\x86"
  "\x02\x81\x83\x02\x81\x01\x84\x02\x81\x89\x02\x80\x01\x82\x02\x81"
  "\x87\x02\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x89\x02\x7d\xfc"
  "\x01\x81\x87\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x89\x02"
  "\x7a\xf6\x01\x81\x87\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x81"
  "\x89\x02\x77\xf0\x01\x81\x87\x02\x76\xee\x01\x81\x83\x02\x75\xec"
  "\x01\x81\x83\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x83\x02"
  "\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81"
  "\x83\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc"
  "\x01\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x83\x02"
  "\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81"
  "\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc"
  "\x01\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02"
  "\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81"
  "\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc"
  "\x01\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02"
  "\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81"
  "\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac"
  "\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\x83\x02"
  "\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81"
  "\x83\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c"
  "\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02"
  "\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81"
  "\x83\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c"
  "\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02"
  "\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81"
  "\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81"
  "\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83"
  "\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83\x02"
  "\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33"
  "\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62"
  "\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81"
  "\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83"
  "\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02"
  "\x26\x4e\x81\x85\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23"
  "\x48\x81\x89\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42"
  "\x81\x89\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81"
  "\x89\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x89"
  "\x02\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x87\x02"
  "\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x89\x02\x13"
  "\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22"
  "\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81"
  "\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x87\x02\x0a\x16\x81\x85"
  "\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x87\x02"
  "\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03"
  "\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x9f\x02"
  "\x96\x04";

SCHEME_OBJECT *
structure_parser_so_data_846a2bc82ac8d310 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_structure_parser_so_data_846a2bc82ac8d310 [0]))), (sizeof (prog_structure_parser_so_data_846a2bc82ac8d310)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_154]));
}

DECLARE_COMPILED_DATA_NS ("structure-parser.so", structure_parser_so_data_846a2bc82ac8d310)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("structure-parser.so", "61dc7b366d1b5392")
