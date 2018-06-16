/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_10 9
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_7 13
#define EXECUTE_CACHE_1_6 15
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto symbol_table_defineB_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_table_defineB_7)
DEFLABEL (symbol_table_defineB_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_8 7
#define LABEL_2_5 9
#define LABEL_2_10 11
#define ENVIRONMENT_LABEL_2_3 21
#define DEBUGGING_LABEL_2_2 20
#define OBJECT_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_9 13
#define EXECUTE_CACHE_2_6 15
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_2_4);
      goto symbol_table_value_6;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_table_value_10)
DEFLABEL (symbol_table_value_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  goto label_11;

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_6 13
#define ENVIRONMENT_LABEL_3_3 22
#define DEBUGGING_LABEL_3_2 21
#define OBJECT_3_1 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_11 15
#define EXECUTE_CACHE_3_7 17
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_3_4);
      goto symbol_table__assq_list_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_table__assq_list_11)
DEFLABEL (symbol_table__assq_list_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_17)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_14;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_13)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto symbol_table_bindings_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_table_bindings_3)
DEFLABEL (symbol_table_bindings_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
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
symtab_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto make_binding_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_binding_3)
DEFLABEL (make_binding_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 6
#define DEBUGGING_LABEL_6_2 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto binding_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binding_value_3)
DEFLABEL (binding_value_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symtab_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto set_binding_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binding_valueB_3)
DEFLABEL (set_binding_valueB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6 3
#define LABEL_7 5
#define LABEL_4 7
#define LABEL_5 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define ENVIRONMENT_LABEL_3 33
#define DEBUGGING_LABEL_2 32
#define PURIFICATION_ROOT 31
#define OBJECT_5 30
#define OBJECT_4 29
#define OBJECT_3 28
#define OBJECT_2 27
#define OBJECT_1 26
#define OBJECT_0 25
#define EXECUTE_CACHE_8 17
#define FREE_REFERENCE_1 20
#define FREE_REFERENCE_0 21
#define GLOBAL_EXECUTE_CACHE_9 23
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
symtab_so_04e97f81b8826fab (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
      goto label_7;
    blocks = (current_block [OBJECT_5]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_7)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_13;
  Wrd13 = Wrd17;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_11;
  Wrd19 = Wrd23;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd20.pObj));

DEFLABEL (label_5)
  (Wrd19.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd14.pObj));

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_symtab_so_04e97f81b8826fab [7] =
  {
    { "symtab_so_code_1", 3, symtab_so_code_1 },
    { "symtab_so_code_2", 5, symtab_so_code_2 },
    { "symtab_so_code_3", 6, symtab_so_code_3 },
    { "symtab_so_code_4", 1, symtab_so_code_4 },
    { "symtab_so_code_5", 1, symtab_so_code_5 },
    { "symtab_so_code_6", 1, symtab_so_code_6 },
    { "symtab_so_code_7", 1, symtab_so_code_7 }
  };

int
decl_symtab_so_04e97f81b8826fab (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_symtab_so_04e97f81b8826fab);
  return (0);
}

DECLARE_COMPILED_CODE ("symtab.so", 7, decl_symtab_so_04e97f81b8826fab, symtab_so_04e97f81b8826fab)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_symtab_so_data_04e97f81b8826fab [826] =
  "\x22\x0a\xbe\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x08\x28\x0d"
  "\xb9\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x0c\xc1\xbd\x0c\x28\xb1\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x83\x88\xb5\xc1\x28\x0d\xb9\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x28"
  "\xb1\x23\x22\x29\x21\x9f\x2b\xb9\x1d\xb0\x85\x88\x08\x22\x29\x21"
  "\x9d\x2b\xbf\x1d\xb0\x86\x88\xb5\x22\x29\x21\x9d\x2b\xbd\x1d\xb0"
  "\x02\x88\xc2\x1d\x22\x29\x21\x9e\x2b\xb8\x9e\x1c\x88\x1b\xc3\x0d"
  "\xb0\x2a\xb5\x2a\xb7\x2a\xb1\x2a\xb6\x2a\xb2\x2a\xb4\x2a\x9e\xb3"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x9e\x07\x28\x0d\x26\x0d\x0d\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x63\x6b"
  "\x2f\x73\x79\x6d\x74\x61\x62\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x13\x52\x65\x64\x65\x66\x69\x6e\x69\x6e\x67\x20\x73\x79\x6d"
  "\x62\x6f\x6c\x3a\x05\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x67\x65\x74\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x70\x75\x74\x21\x04\x06\x65\x72\x72\x6f\x72\x04\x13\x73\x65"
  "\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x2d\x76\x61\x6c\x75\x65\x21"
  "\x05\x0a\x08\x81\x89\x02\x09\x06\x81\x87\x02\x08\x04\x85\x08\x07"
  "\x15\x02\x12\x4b\x65\x79\x20\x68\x61\x73\x20\x6e\x6f\x20\x76\x61"
  "\x6c\x75\x65\x3a\x04\x63\x61\x72\x0f\x55\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x20\x6b\x65\x79\x3a\x05\x04\x03\x0f\x0c\x81\x87\x02\x0e"
  "\x0a\x81\x85\x02\x0d\x08\x81\x87\x02\x0c\x06\x81\x87\x02\x0b\x04"
  "\x84\x06\x0b\x16\x02\x04\x63\x64\x72\x03\x12\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x2d\x3e\x61\x6c\x69\x73\x74\x04\x04\x6d\x61"
  "\x70\x03\x15\x0e\x81\x85\x02\x14\x0c\x81\x85\x02\x13\x0a\x81\x83"
  "\x02\x12\x08\x81\x83\x02\x11\x06\x83\x04\x10\x04\x83\x04\x0d\x17"
  "\x02\x03\x02\x16\x04\x83\x04\x03\x02\x17\x04\x83\x04\x03\x02\x18"
  "\x04\x83\x04\x03\x02\x08\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x02"
  "\x19\x04\x84\x06\x03\x09\x09\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x6d\x61\x6b\x65\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x04\x04\x04\x04\x04\x04"
  "\x04\x0e\x62\x69\x6e\x64\x69\x6e\x67\x2d\x76\x61\x6c\x75\x65\x0d"
  "\x6d\x61\x6b\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x16\x73\x79\x6d"
  "\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x62\x69\x6e\x64\x69\x6e"
  "\x67\x73\x18\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d"
  "\x3e\x61\x73\x73\x71\x2d\x6c\x69\x73\x74\x13\x73\x79\x6d\x62\x6f"
  "\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65\x15\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x64\x65\x66\x69\x6e"
  "\x65\x21\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x04\x65\x71\x3f\x0c\x65\x71\x2d\x68\x61\x73\x68"
  "\x2d\x6d\x6f\x64\x03\x05\x1e\x73\x74\x72\x6f\x6e\x67\x2d\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x63\x6f\x6e\x73\x74\x72\x75"
  "\x63\x74\x6f\x72\x02\x07\x10\x80\x80\x04\x06\x0e\x81\x81\x02\x05"
  "\x0c\x81\x81\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x8b\x02\x01\x04\x81\x89\x02\x0f\x22";

SCHEME_OBJECT *
symtab_so_data_04e97f81b8826fab (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_symtab_so_data_04e97f81b8826fab [0]))), (sizeof (prog_symtab_so_data_04e97f81b8826fab)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("symtab.so", symtab_so_data_04e97f81b8826fab)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("symtab.so", "862778aede3b5e1a")
