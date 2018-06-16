/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_4 7
#define LABEL_1_8 9
#define LABEL_1_7 11
#define LABEL_1_11 13
#define ENVIRONMENT_LABEL_1_3 30
#define DEBUGGING_LABEL_1_2 29
#define OBJECT_1_7 28
#define OBJECT_1_6 27
#define OBJECT_1_5 26
#define OBJECT_1_4 25
#define OBJECT_1_3 24
#define OBJECT_1_2 23
#define OBJECT_1_1 22
#define OBJECT_1_0 21
#define EXECUTE_CACHE_1_10 15
#define EXECUTE_CACHE_1_9 17
#define FREE_REFERENCE_1_0 20
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_4);
      goto comp_internal_error_6;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (comp_internal_error_11)
DEFLABEL (comp_internal_error_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_1_1]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd41.Lng))))
    goto label_23;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_22;

DEFLABEL (label_21)
  (Wrd21.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng)))
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_12)
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_14;
  (Wrd23.Obj) = (current_block [OBJECT_1_5]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd23.Obj) = (current_block [OBJECT_1_4]);

DEFLABEL (label_13)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_17)
  (Wrd35.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_16;
  Wrd11 = Wrd15;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 2);

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_17;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto label_18;

DEFLABEL (label_23)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 26
#define DEBUGGING_LABEL_2_2 25
#define OBJECT_2_17 24
#define OBJECT_2_16 23
#define OBJECT_2_15 22
#define OBJECT_2_14 21
#define OBJECT_2_13 20
#define OBJECT_2_12 19
#define OBJECT_2_11 18
#define OBJECT_2_10 17
#define OBJECT_2_9 16
#define OBJECT_2_8 15
#define OBJECT_2_7 14
#define OBJECT_2_6 13
#define OBJECT_2_5 12
#define OBJECT_2_4 11
#define OBJECT_2_3 10
#define OBJECT_2_2 9
#define OBJECT_2_1 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto type__name_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (type__name_12)
DEFLABEL (type__name_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_2_0]))
    goto label_21;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_2]))
    goto label_20;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_4]))
    goto label_19;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_6]))
    goto label_18;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_8]))
    goto label_17;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_10]))
    goto label_16;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_12]))
    goto label_15;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_14]))
    goto label_13;
  (Wrd21.Obj) = (current_block [OBJECT_2_16]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_2_17]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_2_15]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_2_13]);
  goto label_14;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_2_11]);
  goto label_14;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_2_9]);
  goto label_14;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_2_7]);
  goto label_14;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_2_5]);
  goto label_14;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_2_3]);
  goto label_14;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_2_1]);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define ENVIRONMENT_LABEL_3_3 22
#define DEBUGGING_LABEL_3_2 21
#define OBJECT_3_5 20
#define OBJECT_3_4 19
#define OBJECT_3_3 18
#define OBJECT_3_2 17
#define OBJECT_3_1 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_9 9
#define EXECUTE_CACHE_3_8 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto reg_type__name_5;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reg_type__name_8)
DEFLABEL (reg_type__name_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_3_0]))
    goto label_12;
  if ((Wrd8.Obj) == (current_block [OBJECT_3_2]))
    goto label_9;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_9)
  (Wrd16.Obj) = (current_block [OBJECT_3_3]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (current_block [OBJECT_3_1]);
  goto label_11;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd16.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_11 18
#define OBJECT_4_10 17
#define OBJECT_4_9 16
#define OBJECT_4_8 15
#define OBJECT_4_7 14
#define OBJECT_4_6 13
#define OBJECT_4_5 12
#define OBJECT_4_4 11
#define OBJECT_4_3 10
#define OBJECT_4_2 9
#define OBJECT_4_1 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto machine_register_name_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_name_8)
DEFLABEL (machine_register_name_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_14;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_2]))
    goto label_13;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_4]))
    goto label_12;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_6]))
    goto label_11;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_8]))
    goto label_9;
  (Wrd15.Obj) = (current_block [OBJECT_4_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_4_11]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_4_9]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_4_7]);
  goto label_10;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_4_5]);
  goto label_10;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_4_3]);
  goto label_10;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_4_1]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto machine_register_type_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_type_4)
DEFLABEL (machine_register_type_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_0]))
    goto label_6;
  Rvl = (current_block [OBJECT_5_2]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_5_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto machine_register_type_symbol_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_type_symbol_4)
DEFLABEL (machine_register_type_symbol_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_6_0]))
    goto label_6;
  Rvl = (current_block [OBJECT_6_2]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_6_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
lapgen_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto register_is_machine_registerP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_is_machine_registerP_3)
DEFLABEL (register_is_machine_registerP_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_4;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd11.Lng) < 5L)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_7_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_8_4);
      goto rhs_cast_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rhs_cast_4)
DEFLABEL (rhs_cast_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_9 9
#define ENVIRONMENT_LABEL_9_3 20
#define DEBUGGING_LABEL_9_2 19
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_8 15
#define EXECUTE_CACHE_9_7 17
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto lhs_cast_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lhs_cast_6)
DEFLABEL (lhs_cast_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_9 9
#define LABEL_10_8 11
#define LABEL_10_10 13
#define ENVIRONMENT_LABEL_10_3 22
#define DEBUGGING_LABEL_10_2 21
#define OBJECT_10_1 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_7 15
#define FREE_REFERENCE_10_0 18
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_10_4);
      goto find_register_7;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_register_13)
DEFLABEL (find_register_7)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = Rvl;

DEFLABEL (label_15)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_18;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd24.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_20)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_10 9
#define LABEL_11_8 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define LABEL_11_13 17
#define LABEL_11_14 19
#define LABEL_11_15 21
#define ENVIRONMENT_LABEL_11_3 35
#define DEBUGGING_LABEL_11_2 34
#define OBJECT_11_2 33
#define OBJECT_11_1 32
#define OBJECT_11_0 31
#define EXECUTE_CACHE_11_9 23
#define EXECUTE_CACHE_11_7 25
#define FREE_REFERENCE_11_0 28
#define FREE_ASSIGNMENT_11_0 30
#define FREE_REFERENCES_LABEL_11_0 22
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto allocate_registerB_13;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_11_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_registerB_22)
DEFLABEL (allocate_registerB_13)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  ((Wrd27.pObj) [1]) = (Wrd21.Obj);

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_17)
  goto label_23;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_35;
  Wrd39 = Wrd43;

DEFLABEL (label_34)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  Wrd61 = Wrd65;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd81.Obj) = ((Wrd73.pObj) [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd73.pObj) [0]) = (Wrd74.Obj);

DEFLABEL (label_28)
  Rsp = (& (Rsp [3]));
  goto label_23;

DEFLABEL (label_30)
  if ((Wrd81.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_13])), (Wrd73.pObj), (Wrd74.Obj));

DEFLABEL (label_20)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd65.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_12])), (Wrd62.pObj));

DEFLABEL (label_19)
  (Wrd61.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_10);
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto find_registerB_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_registerB_5)
DEFLABEL (find_registerB_2)
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
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (label_6)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto type__canonical_c_type_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (type__canonical_c_type_4)
DEFLABEL (type__canonical_c_type_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = (current_block [OBJECT_13_1]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Wrd6.Obj);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define ENVIRONMENT_LABEL_14_3 26
#define DEBUGGING_LABEL_14_2 25
#define OBJECT_14_13 24
#define OBJECT_14_12 23
#define OBJECT_14_11 22
#define OBJECT_14_10 21
#define OBJECT_14_9 20
#define OBJECT_14_8 19
#define OBJECT_14_7 18
#define OBJECT_14_6 17
#define OBJECT_14_5 16
#define OBJECT_14_4 15
#define OBJECT_14_3 14
#define OBJECT_14_2 13
#define OBJECT_14_1 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto reg_select_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reg_select_11)
DEFLABEL (reg_select_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_14_0]))
    goto label_19;
  if ((Wrd8.Obj) == (current_block [OBJECT_14_2]))
    goto label_18;
  if ((Wrd8.Obj) == (current_block [OBJECT_14_4]))
    goto label_17;
  if ((Wrd8.Obj) == (current_block [OBJECT_14_6]))
    goto label_16;
  if ((Wrd8.Obj) == (current_block [OBJECT_14_8]))
    goto label_15;
  if ((Wrd8.Obj) == (current_block [OBJECT_14_10]))
    goto label_12;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14_13]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_12)
  (Wrd24.Obj) = (current_block [OBJECT_14_11]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_15)
  (Wrd24.Obj) = (current_block [OBJECT_14_9]);
  goto label_14;

DEFLABEL (label_16)
  (Wrd24.Obj) = (current_block [OBJECT_14_7]);
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (current_block [OBJECT_14_5]);
  goto label_14;

DEFLABEL (label_18)
  (Wrd24.Obj) = (current_block [OBJECT_14_3]);
  goto label_14;

DEFLABEL (label_19)
  (Wrd24.Obj) = (current_block [OBJECT_14_1]);
  goto label_14;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd24.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_11 9
#define LABEL_15_8 11
#define LABEL_15_13 13
#define ENVIRONMENT_LABEL_15_3 34
#define DEBUGGING_LABEL_15_2 33
#define OBJECT_15_5 32
#define OBJECT_15_4 31
#define OBJECT_15_3 30
#define OBJECT_15_2 29
#define OBJECT_15_1 28
#define OBJECT_15_0 27
#define EXECUTE_CACHE_15_15 15
#define EXECUTE_CACHE_15_14 17
#define EXECUTE_CACHE_15_12 19
#define EXECUTE_CACHE_15_10 21
#define EXECUTE_CACHE_15_9 23
#define EXECUTE_CACHE_15_7 25
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_15_4);
      goto standard_sourceB_14;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_15_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_sourceB_19)
DEFLABEL (standard_sourceB_14)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_21;
  (Wrd7.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_20;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd6.Obj);

DEFLABEL (label_20)
DEFLABEL (label_30)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_29;
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd11.Lng) < 5L)
    goto label_27;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd22.Obj) = (current_block [OBJECT_15_3]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_15_4]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (label_22)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_25;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  if ((Wrd16.Obj) == (current_block [OBJECT_15_0]))
    goto label_23;
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (label_23)
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (Wrd6.Obj) = (Rsp [2]);
  if (Rvl == (Wrd6.Obj))
    goto label_28;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd24.Obj) = (current_block [OBJECT_15_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_13 9
#define LABEL_16_14 11
#define LABEL_16_8 13
#define LABEL_16_9 15
#define LABEL_16_18 17
#define LABEL_16_11 19
#define ENVIRONMENT_LABEL_16_3 41
#define DEBUGGING_LABEL_16_2 40
#define OBJECT_16_4 39
#define OBJECT_16_3 38
#define OBJECT_16_2 37
#define OBJECT_16_1 36
#define OBJECT_16_0 35
#define EXECUTE_CACHE_16_19 21
#define EXECUTE_CACHE_16_17 23
#define EXECUTE_CACHE_16_16 25
#define EXECUTE_CACHE_16_15 27
#define EXECUTE_CACHE_16_12 29
#define EXECUTE_CACHE_16_10 31
#define EXECUTE_CACHE_16_7 33
#define FREE_REFERENCES_LABEL_16_0 20
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_16_4);
      goto standard_targetB_15;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_16_13);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_16_18);
      goto lambda_3;

    case 8:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_targetB_20)
DEFLABEL (standard_targetB_15)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_23;
  (Wrd7.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_22;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd6.Obj);

DEFLABEL (label_22)
DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_31;
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd11.Lng) < 5L)
    goto label_28;

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [0]) = Rvl;
  goto lambda_3;

DEFLABEL (label_24)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd7.Obj);
  goto lambda_3;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_14);
  goto label_29;

DEFLABEL (label_31)
  (Wrd27.Obj) = (current_block [OBJECT_16_2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (lambda_21)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_16_18);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_33;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_11 9
#define LABEL_17_10 11
#define LABEL_17_8 13
#define LABEL_17_13 15
#define LABEL_17_14 17
#define LABEL_17_12 19
#define LABEL_17_15 21
#define LABEL_17_16 23
#define ENVIRONMENT_LABEL_17_3 37
#define DEBUGGING_LABEL_17_2 36
#define OBJECT_17_2 35
#define OBJECT_17_1 34
#define OBJECT_17_0 33
#define EXECUTE_CACHE_17_9 25
#define EXECUTE_CACHE_17_7 27
#define FREE_REFERENCE_17_0 30
#define FREE_ASSIGNMENT_17_0 32
#define FREE_REFERENCES_LABEL_17_0 24
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_17_4);
      goto new_register_name_18;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_11);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_17_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_17_16);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_register_name_27)
DEFLABEL (new_register_name_18)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd29.pObj) [0]) = (Wrd26.Obj);

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_14])), (Wrd29.pObj), (Wrd26.Obj));

DEFLABEL (label_23)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_13])), (Wrd8.pObj));

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_37;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_35;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_34)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_25)
  goto label_34;

DEFLABEL (label_37)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_39;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_41)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define LABEL_18_7 9
#define LABEL_18_11 11
#define LABEL_18_10 13
#define LABEL_18_14 15
#define LABEL_18_13 17
#define LABEL_18_16 19
#define ENVIRONMENT_LABEL_18_3 36
#define DEBUGGING_LABEL_18_2 35
#define OBJECT_18_1 34
#define OBJECT_18_0 33
#define EXECUTE_CACHE_18_17 21
#define EXECUTE_CACHE_18_15 23
#define EXECUTE_CACHE_18_12 25
#define EXECUTE_CACHE_18_9 27
#define EXECUTE_CACHE_18_8 29
#define FREE_REFERENCE_18_0 32
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto register_declarations_7;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_18_16);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_declarations_14)
DEFLABEL (register_declarations_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_15)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_16)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_18_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_8 7
#define LABEL_19_7 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define LABEL_19_11 15
#define LABEL_19_12 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define LABEL_19_18 23
#define LABEL_19_19 25
#define LABEL_19_21 27
#define LABEL_19_22 29
#define LABEL_19_23 31
#define LABEL_19_26 33
#define LABEL_19_27 35
#define ENVIRONMENT_LABEL_19_3 64
#define DEBUGGING_LABEL_19_2 63
#define OBJECT_19_7 62
#define OBJECT_19_6 61
#define OBJECT_19_5 60
#define OBJECT_19_4 59
#define OBJECT_19_3 58
#define OBJECT_19_2 57
#define OBJECT_19_1 56
#define OBJECT_19_0 55
#define EXECUTE_CACHE_19_29 37
#define EXECUTE_CACHE_19_28 39
#define EXECUTE_CACHE_19_25 41
#define EXECUTE_CACHE_19_24 43
#define EXECUTE_CACHE_19_17 45
#define EXECUTE_CACHE_19_20 47
#define EXECUTE_CACHE_19_14 49
#define EXECUTE_CACHE_19_13 51
#define EXECUTE_CACHE_19_6 53
#define FREE_REFERENCES_LABEL_19_0 36
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd32;
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
      goto standard_move_to_targetB_24;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_19_21);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_19_22);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_19_23);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_19_26);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_19_27);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_move_to_targetB_29)
DEFLABEL (standard_move_to_targetB_24)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Wrd6.Obj) = (Rsp [0]);
  if (Rvl == (Wrd6.Obj))
    goto label_30;
  (Wrd7.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_40;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd12.Lng) < 5L))
    goto label_32;

DEFLABEL (label_31)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_29]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19_26);
  (Wrd10.Obj) = (current_block [OBJECT_19_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_39;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! ((Wrd18.Lng) < 5L))
    goto label_34;

DEFLABEL (label_33)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_22);
  (Wrd10.Obj) = (current_block [OBJECT_19_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_19_1]);
  if ((Wrd24.Obj) == (Wrd25.Obj))
    goto label_38;
  if ((Wrd24.Obj) == (current_block [OBJECT_19_2]))
    goto label_35;
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (label_35)
  (Wrd32.Obj) = (current_block [OBJECT_19_3]);

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Wrd10.Obj) = (current_block [OBJECT_19_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  Wrd32 = Wrd25;
  goto label_37;

DEFLABEL (label_39)
  (Wrd50.Obj) = (current_block [OBJECT_19_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_40)
  (Wrd63.Obj) = (current_block [OBJECT_19_0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd32.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 14
#define DEBUGGING_LABEL_20_2 13
#define OBJECT_20_1 12
#define OBJECT_20_0 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto c_invoke_interface_0_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_interface_0_4)
DEFLABEL (c_invoke_interface_0_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 14
#define DEBUGGING_LABEL_21_2 13
#define OBJECT_21_1 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto c_invoke_interface_1_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_interface_1_4)
DEFLABEL (c_invoke_interface_1_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd5.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 14
#define DEBUGGING_LABEL_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto c_invoke_interface_2_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_interface_2_4)
DEFLABEL (c_invoke_interface_2_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd5.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 14
#define DEBUGGING_LABEL_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto c_invoke_interface_3_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_interface_3_4)
DEFLABEL (c_invoke_interface_3_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd5.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 14
#define DEBUGGING_LABEL_24_2 13
#define OBJECT_24_1 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto c_invoke_interface_4_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_interface_4_4)
DEFLABEL (c_invoke_interface_4_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_4 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define OBJECT_25_1 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_8 11
#define FREE_REFERENCE_25_0 14
#define FREE_ASSIGNMENT_25_0 16
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_25_4);
      goto use_invoke_interfaceB_3;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (use_invoke_interfaceB_8)
DEFLABEL (use_invoke_interfaceB_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == (current_block [OBJECT_25_0]))
    goto label_9;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd20.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_7])), (Wrd20.pObj), (Wrd19.Obj));

DEFLABEL (label_6)
  goto label_10;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd19.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 14
#define DEBUGGING_LABEL_26_2 13
#define OBJECT_26_1 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_6 7
#define FREE_ASSIGNMENT_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_26_4);
      goto c_invoke_primitive_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_invoke_primitive_4)
DEFLABEL (c_invoke_primitive_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  (Wrd17.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 15
#define DEBUGGING_LABEL_27_2 14
#define OBJECT_27_2 13
#define OBJECT_27_1 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto c_closure_interrupt_check_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_closure_interrupt_check_4)
DEFLABEL (c_closure_interrupt_check_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd5.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define OBJECT_28_1 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto c_interrupt_check_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_interrupt_check_4)
DEFLABEL (c_interrupt_check_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd5.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 15
#define DEBUGGING_LABEL_29_2 14
#define OBJECT_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 7
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto c_dlink_interrupt_check_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_dlink_interrupt_check_4)
DEFLABEL (c_dlink_interrupt_check_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd5.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 14
#define DEBUGGING_LABEL_30_2 13
#define OBJECT_30_1 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_6 7
#define FREE_ASSIGNMENT_30_0 10
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_30_4);
      goto c_jump_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_jump_4)
DEFLABEL (c_jump_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  (Wrd17.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 14
#define DEBUGGING_LABEL_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_6 7
#define FREE_ASSIGNMENT_31_0 10
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_31_4);
      goto c_pop_return_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pop_return_4)
DEFLABEL (c_pop_return_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  (Wrd17.Obj) = (current_block [OBJECT_31_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 6
#define DEBUGGING_LABEL_32_2 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto c_reg_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_reg_block_3)
DEFLABEL (c_reg_block_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  Rvl = (current_block [OBJECT_32_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 6
#define DEBUGGING_LABEL_33_2 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto c_free_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_free_reg_3)
DEFLABEL (c_free_reg_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  Rvl = (current_block [OBJECT_33_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 6
#define DEBUGGING_LABEL_34_2 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto c_sp_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_sp_reg_3)
DEFLABEL (c_sp_reg_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  Rvl = (current_block [OBJECT_34_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 6
#define DEBUGGING_LABEL_35_2 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto c_val_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_val_reg_3)
DEFLABEL (c_val_reg_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  Rvl = (current_block [OBJECT_35_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 6
#define DEBUGGING_LABEL_36_2 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto c_dlink_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_dlink_reg_3)
DEFLABEL (c_dlink_reg_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  Rvl = (current_block [OBJECT_36_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 6
#define DEBUGGING_LABEL_37_2 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto c_pc_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pc_reg_3)
DEFLABEL (c_pc_reg_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  Rvl = (current_block [OBJECT_37_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_7 7
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto c_rref_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_rref_4)
DEFLABEL (c_rref_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 9
#define DEBUGGING_LABEL_39_2 8
#define OBJECT_39_0 7
#define EXECUTE_CACHE_39_5 5
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto c_env_reg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_env_reg_3)
DEFLABEL (c_env_reg_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define ENVIRONMENT_LABEL_40_3 20
#define DEBUGGING_LABEL_40_2 19
#define EXECUTE_CACHE_40_11 11
#define EXECUTE_CACHE_40_10 13
#define EXECUTE_CACHE_40_9 15
#define EXECUTE_CACHE_40_8 17
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_40_4);
      goto c_push_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_push_6)
DEFLABEL (c_push_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define ENVIRONMENT_LABEL_41_3 16
#define DEBUGGING_LABEL_41_2 15
#define EXECUTE_CACHE_41_9 9
#define EXECUTE_CACHE_41_8 11
#define EXECUTE_CACHE_41_7 13
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto c_pop_2;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pop_5)
DEFLABEL (c_pop_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 12
#define DEBUGGING_LABEL_42_2 11
#define EXECUTE_CACHE_42_7 7
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto c_tos_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_tos_4)
DEFLABEL (c_tos_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define EXECUTE_CACHE_43_7 7
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto c_sref_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_sref_4)
DEFLABEL (c_sref_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 12
#define DEBUGGING_LABEL_44_2 11
#define EXECUTE_CACHE_44_7 7
#define EXECUTE_CACHE_44_6 9
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto c_sptr_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_sptr_4)
DEFLABEL (c_sptr_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 9
#define DEBUGGING_LABEL_45_2 8
#define OBJECT_45_0 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto c_cref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_cref_3)
DEFLABEL (c_cref_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 9
#define DEBUGGING_LABEL_46_2 8
#define OBJECT_46_0 7
#define EXECUTE_CACHE_46_5 5
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto c_cptr_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_cptr_3)
DEFLABEL (c_cptr_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 7
#define DEBUGGING_LABEL_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_47_4);
      goto make_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_table_3)
DEFLABEL (make_table_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (Wrd9.Obj) = (current_block [OBJECT_47_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_6 5
#define LABEL_48_5 7
#define ENVIRONMENT_LABEL_48_3 13
#define DEBUGGING_LABEL_48_2 12
#define OBJECT_48_0 11
#define EXECUTE_CACHE_48_7 9
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_48_4);
      goto find_association_3;

    case 1:
      current_block = (Rpc - LABEL_48_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_association_7)
DEFLABEL (find_association_3)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_8)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define OBJECT_49_2 10
#define OBJECT_49_1 9
#define OBJECT_49_0 8
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_49_4);
      goto add_objectB_4;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_objectB_9)
DEFLABEL (add_objectB_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_11;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  ((Wrd25.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_49_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_10 9
#define LABEL_50_11 11
#define LABEL_50_7 13
#define LABEL_50_8 15
#define LABEL_50_13 17
#define ENVIRONMENT_LABEL_50_3 30
#define DEBUGGING_LABEL_50_2 29
#define OBJECT_50_1 28
#define OBJECT_50_0 27
#define EXECUTE_CACHE_50_14 19
#define EXECUTE_CACHE_50_12 21
#define EXECUTE_CACHE_50_9 23
#define FREE_REFERENCE_50_0 26
#define FREE_REFERENCES_LABEL_50_0 18
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_50_4);
      goto add_associationB_7;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_50_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_50_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_50_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_associationB_14)
DEFLABEL (add_associationB_7)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_18;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_18;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  ((Wrd18.pObj) [0]) = (Wrd9.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_18)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_13])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define ENVIRONMENT_LABEL_51_3 14
#define DEBUGGING_LABEL_51_2 13
#define EXECUTE_CACHE_51_8 9
#define EXECUTE_CACHE_51_6 11
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_51_4);
      goto find_or_add_3;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_or_add_6)
DEFLABEL (find_or_add_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_5 3
#define LABEL_52_6 5
#define LABEL_52_4 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define ENVIRONMENT_LABEL_52_3 25
#define DEBUGGING_LABEL_52_2 24
#define OBJECT_52_4 23
#define OBJECT_52_3 22
#define OBJECT_52_2 21
#define OBJECT_52_1 20
#define OBJECT_52_0 19
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_9 15
#define FREE_REFERENCE_52_0 18
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd46;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_52_4);
      goto define_object_4;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_object_9)
DEFLABEL (define_object_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_52_0]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd41.Lng))))
    goto label_19;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd22.Obj) = (current_block [OBJECT_52_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_10)
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_12;
  (Wrd24.Obj) = (current_block [OBJECT_52_4]);
  goto label_11;

DEFLABEL (label_12)
  (Wrd24.Obj) = (current_block [OBJECT_52_3]);

DEFLABEL (label_11)
DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (Wrd35.Obj) = Rvl;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_13;

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_19)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_7])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_8 5
#define LABEL_53_9 7
#define LABEL_53_5 9
#define LABEL_53_6 11
#define TAG_53_7 4
#define LABEL_53_12 13
#define ENVIRONMENT_LABEL_53_3 27
#define DEBUGGING_LABEL_53_2 26
#define OBJECT_53_2 25
#define OBJECT_53_1 24
#define OBJECT_53_0 23
#define EXECUTE_CACHE_53_13 15
#define EXECUTE_CACHE_53_11 17
#define EXECUTE_CACHE_53_10 19
#define FREE_REFERENCE_53_0 22
#define FREE_REFERENCES_LABEL_53_0 14
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_53_4);
      goto object_label_value_5;

    case 1:
      current_block = (Rpc - LABEL_53_8);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_53_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_53_6);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_label_value_11)
DEFLABEL (object_label_value_5)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_18;
  Wrd13 = Wrd17;

DEFLABEL (label_17)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_16;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd15.Obj) = (current_block [OBJECT_53_1]);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (label_13)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 1);

DEFLABEL (label_16)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_8])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_53_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_20;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define LABEL_54_6 9
#define LABEL_54_8 11
#define LABEL_54_10 13
#define LABEL_54_12 15
#define ENVIRONMENT_LABEL_54_3 26
#define DEBUGGING_LABEL_54_2 25
#define OBJECT_54_3 24
#define OBJECT_54_2 23
#define OBJECT_54_1 22
#define OBJECT_54_0 21
#define EXECUTE_CACHE_54_11 17
#define EXECUTE_CACHE_54_9 19
#define FREE_REFERENCES_LABEL_54_0 16
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_54_4);
      goto make_special_labels_6;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto frob_5;

    case 3:
      current_block = (Rpc - LABEL_54_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_54_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_special_labels_9)
DEFLABEL (make_special_labels_6)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto frob_5;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto frob_5;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto frob_5;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto frob_5;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_12);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd14.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  goto pop_return;

DEFLABEL (frob_10)
DEFLABEL (frob_5)
  INTERRUPT_CHECK (26, LABEL_54_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 11
#define DEBUGGING_LABEL_55_2 10
#define OBJECT_55_1 9
#define OBJECT_55_0 8
#define FREE_REFERENCE_55_0 7
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_55_4);
      goto special_label_environment_0;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_label_environment_4)
DEFLABEL (special_label_environment_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 11
#define DEBUGGING_LABEL_56_2 10
#define OBJECT_56_1 9
#define OBJECT_56_0 8
#define FREE_REFERENCE_56_0 7
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_56_4);
      goto special_label_free_references_0;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_label_free_references_4)
DEFLABEL (special_label_free_references_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 11
#define DEBUGGING_LABEL_57_2 10
#define OBJECT_57_1 9
#define OBJECT_57_0 8
#define FREE_REFERENCE_57_0 7
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_57_4);
      goto special_label_number_of_sections_0;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_label_number_of_sections_4)
DEFLABEL (special_label_number_of_sections_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 11
#define DEBUGGING_LABEL_58_2 10
#define OBJECT_58_1 9
#define OBJECT_58_0 8
#define FREE_REFERENCE_58_0 7
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_58_4);
      goto special_label_debugging_0;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_label_debugging_4)
DEFLABEL (special_label_debugging_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_9 13
#define LABEL_59_10 15
#define LABEL_59_11 17
#define TAG_59_12 7
#define ENVIRONMENT_LABEL_59_3 26
#define DEBUGGING_LABEL_59_2 25
#define OBJECT_59_4 24
#define OBJECT_59_3 23
#define OBJECT_59_2 22
#define OBJECT_59_1 21
#define OBJECT_59_0 20
#define FREE_REFERENCE_59_0 19
#define FREE_REFERENCES_LABEL_59_0 18
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_59_4);
      goto prepare_constants_block_5;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_59_10);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_59_11);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prepare_constants_block_14)
DEFLABEL (prepare_constants_block_5)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_27;
  Wrd6 = Wrd10;

DEFLABEL (label_26)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_25;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_25;
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_24)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_23;
  Wrd26 = Wrd30;

DEFLABEL (label_22)
  Wrd25 = Wrd26;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_21;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_20)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_19;
  Wrd46 = Wrd50;

DEFLABEL (label_18)
  Wrd45 = Wrd46;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_17;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd58.Lng))))
    goto label_17;
  (Wrd53.Obj) = ((Wrd56.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_16)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_11])));
  Rhp += 3;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  Wrd72 = Wrd67;
  (Wrd73.Obj) = (Rsp [2]);
  ((Wrd72.pObj) [2]) = (Wrd73.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  ((Wrd72.pObj) [3]) = (Wrd71.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  ((Wrd72.pObj) [4]) = (Wrd69.Obj);
  Rvl = (Wrd66.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd61.Obj) = (current_block [OBJECT_59_3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_9])), (Wrd47.pObj));

DEFLABEL (label_11)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd41.Obj) = (current_block [OBJECT_59_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_7])), (Wrd27.pObj));

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd21.Obj) = (current_block [OBJECT_59_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_59_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_6 5
#define LABEL_60_5 7
#define LABEL_60_11 9
#define LABEL_60_10 11
#define LABEL_60_8 13
#define LABEL_60_13 15
#define LABEL_60_14 17
#define LABEL_60_12 19
#define LABEL_60_15 21
#define LABEL_60_16 23
#define ENVIRONMENT_LABEL_60_3 33
#define DEBUGGING_LABEL_60_2 32
#define OBJECT_60_2 31
#define OBJECT_60_1 30
#define OBJECT_60_0 29
#define EXECUTE_CACHE_60_9 25
#define EXECUTE_CACHE_60_7 27
#define FREE_REFERENCES_LABEL_60_0 24
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_60_4);
      goto uuo_link_label_21;

    case 1:
      current_block = (Rpc - LABEL_60_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_60_11);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_60_8);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_60_13);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_60_14);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_60_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_60_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_60_16);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uuo_link_label_30)
DEFLABEL (uuo_link_label_21)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_44)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_60_8);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_34;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_33)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_60_1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_32;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  ((Wrd34.pObj) [1]) = (Wrd28.Obj);

DEFLABEL (label_31)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_26)
  goto label_31;

DEFLABEL (label_34)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_60_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_60_12);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_39;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_37;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_36)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_28)
  goto label_36;

DEFLABEL (label_39)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_41;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 13
#define DEBUGGING_LABEL_61_2 12
#define OBJECT_61_0 11
#define EXECUTE_CACHE_61_6 7
#define FREE_REFERENCE_61_0 10
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_61_4);
      goto free_uuo_link_label_0;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_uuo_link_label_4)
DEFLABEL (free_uuo_link_label_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 13
#define DEBUGGING_LABEL_62_2 12
#define OBJECT_62_0 11
#define EXECUTE_CACHE_62_6 7
#define FREE_REFERENCE_62_0 10
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_62_4);
      goto global_uuo_link_label_0;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (global_uuo_link_label_4)
DEFLABEL (global_uuo_link_label_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 13
#define DEBUGGING_LABEL_63_2 12
#define OBJECT_63_0 11
#define EXECUTE_CACHE_63_6 7
#define FREE_REFERENCE_63_0 10
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_63_4);
      goto constant__label_1;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant__label_5)
DEFLABEL (constant__label_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 13
#define DEBUGGING_LABEL_64_2 12
#define OBJECT_64_0 11
#define EXECUTE_CACHE_64_6 7
#define FREE_REFERENCE_64_0 10
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_64_4);
      goto object__offset_0;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__offset_4)
DEFLABEL (object__offset_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 13
#define DEBUGGING_LABEL_65_2 12
#define OBJECT_65_0 11
#define EXECUTE_CACHE_65_6 7
#define FREE_REFERENCE_65_0 10
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_65_4);
      goto free_reference__offset_0;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_reference__offset_4)
DEFLABEL (free_reference__offset_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 13
#define DEBUGGING_LABEL_66_2 12
#define OBJECT_66_0 11
#define EXECUTE_CACHE_66_6 7
#define FREE_REFERENCE_66_0 10
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_66_4);
      goto free_assignment__offset_0;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_assignment__offset_4)
DEFLABEL (free_assignment__offset_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 8
#define DEBUGGING_LABEL_67_2 7
#define OBJECT_67_2 6
#define OBJECT_67_1 5
#define OBJECT_67_0 4
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_67_4);
      goto set_dispatch_1B_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dispatch_1B_3)
DEFLABEL (set_dispatch_1B_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_67_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_9 9
#define LABEL_68_10 11
#define LABEL_68_7 13
#define ENVIRONMENT_LABEL_68_3 23
#define DEBUGGING_LABEL_68_2 22
#define OBJECT_68_2 21
#define OBJECT_68_1 20
#define OBJECT_68_0 19
#define EXECUTE_CACHE_68_11 15
#define EXECUTE_CACHE_68_8 17
#define FREE_REFERENCES_LABEL_68_0 14
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_68_4);
      goto find_label_11;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_68_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_68_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_68_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_label_16)
DEFLABEL (find_label_11)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_68_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_68_0])))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_7);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_9);
  (Wrd14.Obj) = (Rsp [2]);
  if ((Wrd14.Obj) == Rvl)
    goto label_19;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_14)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_8 11
#define LABEL_69_10 13
#define ENVIRONMENT_LABEL_69_3 25
#define DEBUGGING_LABEL_69_2 24
#define EXECUTE_CACHE_69_11 15
#define EXECUTE_CACHE_69_9 17
#define FREE_REFERENCE_69_1 20
#define FREE_REFERENCE_69_0 21
#define FREE_ASSIGNMENT_69_0 23
#define FREE_REFERENCES_LABEL_69_0 14
#define NUMBER_OF_LINKER_SECTIONS_69_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_69_4);
      goto generate_new_label_symbol_3;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_69_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_69_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_new_label_symbol_10)
DEFLABEL (generate_new_label_symbol_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_17;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_17;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_16)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_69_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd21.pObj) [0]) = (Wrd15.Obj);

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_8);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_10])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_69_7])), (Wrd21.pObj), (Wrd15.Obj));

DEFLABEL (label_7)
  goto label_13;

DEFLABEL (label_17)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_8 9
#define ENVIRONMENT_LABEL_70_3 20
#define DEBUGGING_LABEL_70_2 19
#define OBJECT_70_1 18
#define OBJECT_70_0 17
#define EXECUTE_CACHE_70_7 11
#define FREE_REFERENCE_70_0 14
#define FREE_ASSIGNMENT_70_0 16
#define FREE_REFERENCES_LABEL_70_0 10
#define NUMBER_OF_LINKER_SECTIONS_70_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_70_4);
      goto define_labelB_3;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_70_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_labelB_8)
DEFLABEL (define_labelB_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_6);
  (Wrd13.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-8]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_70_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_70_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd28.Obj) = (MAKE_OBJECT (50, (Wrd13.uLng)));
  if ((Wrd30.Obj) == (Wrd28.Obj))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_70_8])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_5 7
#define LABEL_71_8 9
#define ENVIRONMENT_LABEL_71_3 22
#define DEBUGGING_LABEL_71_2 21
#define EXECUTE_CACHE_71_11 11
#define EXECUTE_CACHE_71_10 13
#define EXECUTE_CACHE_71_9 15
#define EXECUTE_CACHE_71_7 17
#define FREE_REFERENCE_71_0 20
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_71_4);
      goto label__offset_3;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_71_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (label__offset_7)
DEFLABEL (label__offset_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_10]));

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_8);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_6 5
#define LABEL_72_5 7
#define LABEL_72_10 9
#define LABEL_72_8 11
#define LABEL_72_12 13
#define LABEL_72_15 15
#define ENVIRONMENT_LABEL_72_3 33
#define DEBUGGING_LABEL_72_2 32
#define OBJECT_72_2 31
#define OBJECT_72_1 30
#define OBJECT_72_0 29
#define EXECUTE_CACHE_72_14 17
#define EXECUTE_CACHE_72_13 19
#define EXECUTE_CACHE_72_11 21
#define EXECUTE_CACHE_72_9 23
#define EXECUTE_CACHE_72_7 25
#define FREE_REFERENCE_72_0 28
#define FREE_REFERENCES_LABEL_72_0 16
#define NUMBER_OF_LINKER_SECTIONS_72_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_72_4);
      goto label__dispatch_tag_8;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_72_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_72_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_72_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_72_15);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (label__dispatch_tag_13)
DEFLABEL (label__dispatch_tag_8)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_72_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_72_12);
  (Rsp [0]) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  ((Wrd14.pObj) [5]) = Rvl;

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_72_1]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 3);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_8);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_14]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_5 3
#define LABEL_73_6 5
#define LABEL_73_7 7
#define LABEL_73_8 9
#define LABEL_73_9 11
#define LABEL_73_10 13
#define LABEL_73_4 15
#define LABEL_73_19 17
#define LABEL_73_21 19
#define LABEL_73_22 21
#define LABEL_73_23 23
#define LABEL_73_18 25
#define LABEL_73_17 27
#define LABEL_73_15 29
#define LABEL_73_13 31
#define LABEL_73_11 33
#define LABEL_73_25 35
#define LABEL_73_26 37
#define LABEL_73_28 39
#define LABEL_73_31 41
#define LABEL_73_32 43
#define LABEL_73_33 45
#define LABEL_73_34 47
#define LABEL_73_29 49
#define LABEL_73_30 51
#define LABEL_73_35 53
#define LABEL_73_37 55
#define LABEL_73_38 57
#define ENVIRONMENT_LABEL_73_3 80
#define DEBUGGING_LABEL_73_2 79
#define OBJECT_73_1 78
#define OBJECT_73_0 77
#define EXECUTE_CACHE_73_36 59
#define EXECUTE_CACHE_73_27 61
#define EXECUTE_CACHE_73_24 63
#define EXECUTE_CACHE_73_20 65
#define EXECUTE_CACHE_73_16 67
#define EXECUTE_CACHE_73_14 69
#define EXECUTE_CACHE_73_12 71
#define FREE_REFERENCE_73_0 74
#define FREE_ASSIGNMENT_73_0 76
#define FREE_REFERENCES_LABEL_73_0 58
#define NUMBER_OF_LINKER_SECTIONS_73_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd67;
  machine_word Wrd74;
  machine_word Wrd81;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd92;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd108;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_73_8);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_73_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_73_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_73_4);
      goto declare_block_labelB_25;

    case 7:
      current_block = (Rpc - LABEL_73_19);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_73_21);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_73_22);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_73_23);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_73_18);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_73_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_73_15);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_73_13);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_73_25);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_73_26);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_73_28);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_73_31);
      goto add_new_entry_24;

    case 20:
      current_block = (Rpc - LABEL_73_32);
      goto label_33;

    case 21:
      current_block = (Rpc - LABEL_73_33);
      goto label_34;

    case 22:
      current_block = (Rpc - LABEL_73_34);
      goto label_35;

    case 23:
      current_block = (Rpc - LABEL_73_29);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_73_30);
      goto continuation_12;

    case 25:
      current_block = (Rpc - LABEL_73_35);
      goto continuation_16;

    case 26:
      current_block = (Rpc - LABEL_73_37);
      goto continuation_11;

    case 27:
      current_block = (Rpc - LABEL_73_38);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_block_labelB_37)
DEFLABEL (declare_block_labelB_25)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;
  Wrd10 = Wrd14;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_24]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_23])), (Wrd11.pObj));

DEFLABEL (label_27)
  (Wrd10.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_61)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_44;
  Wrd24 = Wrd28;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_39;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_22])), (Wrd25.pObj));

DEFLABEL (label_28)
  (Wrd24.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_60)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_59;
  Wrd38 = Wrd42;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_7);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd103.Obj) = ((Wrd95.pObj) [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd95.pObj) [0]) = Rvl;

DEFLABEL (label_55)
  (Wrd45.Obj) = (Rsp [1]);
  if ((Wrd45.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_54;
  Wrd50 = Wrd54;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd116.Obj) = ((Wrd108.pObj) [0]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if ((Wrd117.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd108.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd60.Obj) = (Rsp [1]);
  if (! ((Wrd57.Obj) == (Wrd60.Obj)))
    goto label_46;
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_73_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_36]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_73_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_73_38);
  (* (--Rsp)) = Rvl;
  goto add_new_entry_24;

DEFLABEL (label_46)
  (Wrd61.Obj) = (Rsp [0]);
  if ((Wrd61.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd63.Obj) = (Rsp [1]);
  if ((Wrd63.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_18]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_73_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_73_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_73_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_73_37);
  (* (--Rsp)) = Rvl;
  goto add_new_entry_24;

DEFLABEL (label_47)
  (Wrd69.Obj) = (Rsp [0]);
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_17]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_73_17);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_73_26);
  (* (--Rsp)) = Rvl;
  goto add_new_entry_24;

DEFLABEL (label_48)
  (Wrd76.Obj) = (Rsp [1]);
  if ((Wrd76.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_15]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_15);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_73_28);
  (* (--Rsp)) = Rvl;
  goto add_new_entry_24;

DEFLABEL (label_49)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (current_block [OBJECT_73_0]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_73_13);
  (* (--Rsp)) = Rvl;
  goto add_new_entry_24;

DEFLABEL (label_52)
  if ((Wrd116.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_6])), (Wrd108.pObj), Rvl);

DEFLABEL (label_32)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_19])), (Wrd51.pObj));

DEFLABEL (label_30)
  (Wrd50.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  if ((Wrd103.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_8])), (Wrd95.pObj), Rvl);

DEFLABEL (label_31)
  goto label_55;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_21])), (Wrd39.pObj));

DEFLABEL (label_29)
  (Wrd38.Obj) = Rvl;
  goto label_58;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_9);
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_10);
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (add_new_entry_38)
DEFLABEL (add_new_entry_24)
  INTERRUPT_CHECK (26, LABEL_73_31);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_69;
  Wrd6 = Wrd10;

DEFLABEL (label_68)
  (Wrd19.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd22.Obj) = (Rsp [7]);
  (Wrd23.Obj) = (Rsp [8]);
  (Wrd24.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd14.pObj) = (& (Rhp [-8]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  Wrd28 = Wrd32;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd48.Obj) = ((Wrd40.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd40.pObj) [0]) = (Wrd41.Obj);

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  Rvl = (current_block [OBJECT_73_1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  if ((Wrd48.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_34])), (Wrd40.pObj), (Wrd41.Obj));

DEFLABEL (label_35)
  goto label_62;

DEFLABEL (label_67)
  (Wrd39.Obj) = (MAKE_OBJECT (50, (Wrd19.uLng)));
  if ((Wrd32.Obj) == (Wrd39.Obj))
    goto label_66;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_73_33])), (Wrd29.pObj));

DEFLABEL (label_34)
  (Wrd28.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_32])), (Wrd7.pObj));

DEFLABEL (label_33)
  (Wrd6.Obj) = Rvl;
  goto label_68;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 5
#define DEBUGGING_LABEL_74_2 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto sort_machine_registers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_machine_registers_3)
DEFLABEL (sort_machine_registers_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 8
#define DEBUGGING_LABEL_75_2 7
#define OBJECT_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_75_4);
      goto compatible_c_registerP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compatible_c_registerP_5)
DEFLABEL (compatible_c_registerP_2)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_75_0]))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_75_1]))
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_75_2]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd14.Obj) = (Rsp [1]);
  if ((Wrd14.Obj) == (current_block [OBJECT_75_1]))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 7
#define DEBUGGING_LABEL_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_76_4);
      goto compatible_c_cP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compatible_c_cP_5)
DEFLABEL (compatible_c_cP_2)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_76_1]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd14.Obj) = (Rsp [1]);
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_7 5
#define LABEL_77_5 7
#define LABEL_77_8 9
#define ENVIRONMENT_LABEL_77_3 23
#define DEBUGGING_LABEL_77_2 22
#define OBJECT_77_2 21
#define OBJECT_77_1 20
#define OBJECT_77_0 19
#define EXECUTE_CACHE_77_11 11
#define EXECUTE_CACHE_77_10 13
#define EXECUTE_CACHE_77_9 15
#define EXECUTE_CACHE_77_6 17
#define FREE_REFERENCES_LABEL_77_0 10
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_77_4);
      goto register_type_3;

    case 1:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_77_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_type_6)
DEFLABEL (register_type_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_77_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (current_block [OBJECT_77_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (current_block [OBJECT_77_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define ENVIRONMENT_LABEL_78_3 12
#define DEBUGGING_LABEL_78_2 11
#define OBJECT_78_1 10
#define OBJECT_78_0 9
#define EXECUTE_CACHE_78_6 7
#define FREE_REFERENCES_LABEL_78_0 6
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto word_registerP_1;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (word_registerP_4)
DEFLABEL (word_registerP_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  if (Rvl == (current_block [OBJECT_78_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_78_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 10
#define DEBUGGING_LABEL_79_2 9
#define OBJECT_79_1 8
#define OBJECT_79_0 7
#define EXECUTE_CACHE_79_5 5
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto register_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_reference_3)
DEFLABEL (register_reference_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 10
#define DEBUGGING_LABEL_80_2 9
#define OBJECT_80_1 8
#define OBJECT_80_0 7
#define EXECUTE_CACHE_80_5 5
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto register__register_transfer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register__register_transfer_3)
DEFLABEL (register__register_transfer_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_80_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 10
#define DEBUGGING_LABEL_81_2 9
#define OBJECT_81_1 8
#define OBJECT_81_0 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto reference__register_transfer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference__register_transfer_3)
DEFLABEL (reference__register_transfer_0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_81_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 10
#define DEBUGGING_LABEL_82_2 9
#define OBJECT_82_1 8
#define OBJECT_82_0 7
#define EXECUTE_CACHE_82_5 5
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto pseudo_register_home_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_home_3)
DEFLABEL (pseudo_register_home_0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_82_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 10
#define DEBUGGING_LABEL_83_2 9
#define OBJECT_83_1 8
#define OBJECT_83_0 7
#define EXECUTE_CACHE_83_5 5
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto home__register_transfer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (home__register_transfer_3)
DEFLABEL (home__register_transfer_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_83_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 10
#define DEBUGGING_LABEL_84_2 9
#define OBJECT_84_1 8
#define OBJECT_84_0 7
#define EXECUTE_CACHE_84_5 5
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto register__home_transfer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register__home_transfer_3)
DEFLABEL (register__home_transfer_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define ENVIRONMENT_LABEL_85_3 11
#define DEBUGGING_LABEL_85_2 10
#define OBJECT_85_0 9
#define EXECUTE_CACHE_85_6 7
#define FREE_REFERENCES_LABEL_85_0 6
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_85_4);
      goto lap_make_label_statement_1;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_make_label_statement_4)
DEFLABEL (lap_make_label_statement_1)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Wrd10.Obj) = (current_block [OBJECT_85_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define ENVIRONMENT_LABEL_86_3 11
#define DEBUGGING_LABEL_86_2 10
#define OBJECT_86_0 9
#define EXECUTE_CACHE_86_6 7
#define FREE_REFERENCES_LABEL_86_0 6
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_86_4);
      goto lap_make_unconditional_branch_1;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_make_unconditional_branch_4)
DEFLABEL (lap_make_unconditional_branch_1)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Wrd10.Obj) = (current_block [OBJECT_86_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_5 7
#define ENVIRONMENT_LABEL_87_3 16
#define DEBUGGING_LABEL_87_2 15
#define EXECUTE_CACHE_87_8 9
#define EXECUTE_CACHE_87_7 11
#define FREE_REFERENCE_87_0 14
#define FREE_REFERENCES_LABEL_87_0 8
#define NUMBER_OF_LINKER_SECTIONS_87_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_87_4);
      goto lap_make_entry_point_1;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_make_entry_point_5)
DEFLABEL (lap_make_entry_point_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_7;
  Wrd10 = Wrd14;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_8 7
#define LABEL_88_9 9
#define LABEL_88_12 11
#define LABEL_88_6 13
#define TAG_88_7 5
#define LABEL_88_10 15
#define TAG_88_11 6
#define LABEL_88_13 17
#define LABEL_88_15 19
#define LABEL_88_16 21
#define ENVIRONMENT_LABEL_88_3 34
#define DEBUGGING_LABEL_88_2 33
#define OBJECT_88_3 32
#define OBJECT_88_2 31
#define OBJECT_88_1 30
#define OBJECT_88_0 29
#define EXECUTE_CACHE_88_17 23
#define EXECUTE_CACHE_88_14 25
#define FREE_REFERENCE_88_0 28
#define FREE_REFERENCES_LABEL_88_0 22
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_88_4);
      goto branch_on_expr_7;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_88_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_88_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_88_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_88_6);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_88_10);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_88_13);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_88_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_88_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (branch_on_expr_14)
DEFLABEL (branch_on_expr_7)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  Wrd5 = Wrd6;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_6])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  Wrd12 = Wrd13;
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_22;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd49.Lng))))
    goto label_22;
  ((Wrd47.pObj) [15]) = (Wrd13.Obj);

DEFLABEL (label_21)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_20;
  Wrd18 = Wrd22;

DEFLABEL (label_19)
  Wrd17 = Wrd18;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_10])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  Wrd24 = Wrd25;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_18;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd36.Lng))))
    goto label_18;
  ((Wrd34.pObj) [16]) = (Wrd25.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_88_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd39.Obj) = (current_block [OBJECT_88_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 3);

DEFLABEL (label_11)
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_9])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd52.Obj) = (current_block [OBJECT_88_0]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 3);

DEFLABEL (label_12)
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_5])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_88_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_13);
  (Wrd10.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_88_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_88_15);
  (Wrd10.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 10
#define DEBUGGING_LABEL_89_2 9
#define EXECUTE_CACHE_89_6 7
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_89_4);
      goto compare_1;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compare_4)
DEFLABEL (compare_1)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_7 5
#define LABEL_90_6 7
#define LABEL_90_9 9
#define LABEL_90_5 11
#define ENVIRONMENT_LABEL_90_3 18
#define DEBUGGING_LABEL_90_2 17
#define OBJECT_90_1 16
#define OBJECT_90_0 15
#define EXECUTE_CACHE_90_8 13
#define FREE_REFERENCES_LABEL_90_0 12
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_90_4);
      goto define_arithmetic_method_7;

    case 1:
      current_block = (Rpc - LABEL_90_7);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_90_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_arithmetic_method_12)
DEFLABEL (define_arithmetic_method_7)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_21;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_14)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd13.pObj) [1]) = (Wrd10.Obj);

DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_13;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  ((Wrd37.pObj) [1]) = (Wrd32.Obj);
  goto label_16;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_7 5
#define LABEL_91_6 7
#define LABEL_91_5 9
#define ENVIRONMENT_LABEL_91_3 19
#define DEBUGGING_LABEL_91_2 18
#define OBJECT_91_2 17
#define OBJECT_91_1 16
#define OBJECT_91_0 15
#define EXECUTE_CACHE_91_9 11
#define EXECUTE_CACHE_91_8 13
#define FREE_REFERENCES_LABEL_91_0 10
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_91_4);
      goto lookup_arithmetic_method_4;

    case 1:
      current_block = (Rpc - LABEL_91_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_arithmetic_method_8)
DEFLABEL (lookup_arithmetic_method_4)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd16.Obj) = (current_block [OBJECT_91_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_91_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_9]));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_10;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_6 5
#define LABEL_92_7 7
#define LABEL_92_8 9
#define LABEL_92_9 11
#define LABEL_92_5 13
#define LABEL_92_10 15
#define LABEL_92_12 17
#define LABEL_92_13 19
#define LABEL_92_11 21
#define LABEL_92_15 23
#define LABEL_92_14 25
#define ENVIRONMENT_LABEL_92_3 36
#define DEBUGGING_LABEL_92_2 35
#define OBJECT_92_5 34
#define OBJECT_92_4 33
#define OBJECT_92_3 32
#define OBJECT_92_2 31
#define OBJECT_92_1 30
#define OBJECT_92_0 29
#define EXECUTE_CACHE_92_16 27
#define FREE_REFERENCES_LABEL_92_0 26
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_92_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_92_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_92_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_92_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_92_10);
      goto loop_15;

    case 7:
      current_block = (Rpc - LABEL_92_12);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_92_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_92_11);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_92_15);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_92_14);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_35)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_32;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_31)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_30;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_29)
  goto loop_15;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd10.Obj) = (current_block [OBJECT_92_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_35;

DEFLABEL (loop_28)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_92_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_37;
  Rvl = (current_block [OBJECT_92_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_43;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_43;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_42)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_41;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_40)
  goto loop_15;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_92_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  (Wrd17.Obj) = (current_block [OBJECT_92_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_92_14);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_92_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_92_5]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 6
#define DEBUGGING_LABEL_93_2 5
#define OBJECT_93_0 4
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgen_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto pre_lapgen_analysis_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pre_lapgen_analysis_3)
DEFLABEL (pre_lapgen_analysis_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  Rvl = (current_block [OBJECT_93_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_11 17
#define LABEL_12 19
#define LABEL_13 21
#define LABEL_14 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_18 31
#define LABEL_19 33
#define LABEL_20 35
#define LABEL_21 37
#define LABEL_22 39
#define LABEL_23 41
#define LABEL_24 43
#define LABEL_25 45
#define LABEL_26 47
#define LABEL_27 49
#define LABEL_28 51
#define LABEL_29 53
#define LABEL_30 55
#define LABEL_31 57
#define LABEL_32 59
#define LABEL_33 61
#define LABEL_34 63
#define LABEL_35 65
#define LABEL_36 67
#define LABEL_37 69
#define LABEL_38 71
#define LABEL_39 73
#define LABEL_40 75
#define LABEL_41 77
#define LABEL_42 79
#define LABEL_43 81
#define LABEL_44 83
#define LABEL_45 85
#define LABEL_46 87
#define LABEL_47 89
#define LABEL_48 91
#define LABEL_49 93
#define LABEL_50 95
#define LABEL_51 97
#define LABEL_53 99
#define LABEL_52 101
#define LABEL_55 103
#define LABEL_54 105
#define LABEL_57 107
#define LABEL_56 109
#define LABEL_58 111
#define LABEL_60 113
#define LABEL_59 115
#define LABEL_61 117
#define LABEL_62 119
#define LABEL_63 121
#define LABEL_64 123
#define LABEL_65 125
#define LABEL_66 127
#define LABEL_67 129
#define LABEL_68 131
#define LABEL_69 133
#define LABEL_70 135
#define LABEL_71 137
#define LABEL_72 139
#define LABEL_73 141
#define LABEL_74 143
#define LABEL_75 145
#define LABEL_76 147
#define LABEL_77 149
#define LABEL_78 151
#define LABEL_79 153
#define LABEL_80 155
#define LABEL_81 157
#define LABEL_82 159
#define LABEL_83 161
#define LABEL_84 163
#define LABEL_85 165
#define LABEL_86 167
#define LABEL_88 169
#define LABEL_87 171
#define LABEL_90 173
#define LABEL_89 175
#define LABEL_92 177
#define LABEL_91 179
#define LABEL_94 181
#define LABEL_93 183
#define LABEL_96 185
#define LABEL_95 187
#define LABEL_97 189
#define LABEL_99 191
#define LABEL_98 193
#define LABEL_101 195
#define LABEL_100 197
#define LABEL_102 199
#define LABEL_103 201
#define LABEL_104 203
#define LABEL_105 205
#define LABEL_106 207
#define LABEL_107 209
#define LABEL_108 211
#define LABEL_109 213
#define LABEL_110 215
#define LABEL_111 217
#define LABEL_112 219
#define LABEL_113 221
#define LABEL_114 223
#define LABEL_115 225
#define LABEL_116 227
#define LABEL_117 229
#define LABEL_118 231
#define LABEL_119 233
#define LABEL_120 235
#define LABEL_121 237
#define LABEL_122 239
#define LABEL_123 241
#define LABEL_124 243
#define LABEL_125 245
#define LABEL_126 247
#define LABEL_127 249
#define LABEL_128 251
#define LABEL_129 253
#define LABEL_131 255
#define LABEL_132 257
#define LABEL_133 259
#define LABEL_134 261
#define LABEL_135 263
#define LABEL_136 265
#define LABEL_137 267
#define LABEL_138 269
#define LABEL_139 271
#define LABEL_140 273
#define LABEL_141 275
#define LABEL_142 277
#define LABEL_143 279
#define LABEL_144 281
#define LABEL_145 283
#define LABEL_146 285
#define LABEL_147 287
#define LABEL_148 289
#define LABEL_149 291
#define LABEL_150 293
#define LABEL_151 295
#define LABEL_152 297
#define LABEL_153 299
#define LABEL_154 301
#define LABEL_155 303
#define LABEL_156 305
#define LABEL_157 307
#define LABEL_158 309
#define LABEL_159 311
#define LABEL_160 313
#define LABEL_161 315
#define LABEL_162 317
#define LABEL_163 319
#define LABEL_164 321
#define LABEL_165 323
#define LABEL_166 325
#define LABEL_167 327
#define LABEL_168 329
#define LABEL_169 331
#define LABEL_170 333
#define LABEL_171 335
#define LABEL_172 337
#define LABEL_173 339
#define LABEL_174 341
#define LABEL_175 343
#define LABEL_176 345
#define LABEL_177 347
#define ENVIRONMENT_LABEL_3 669
#define DEBUGGING_LABEL_2 668
#define PURIFICATION_ROOT 667
#define OBJECT_304 666
#define OBJECT_303 665
#define OBJECT_302 664
#define OBJECT_301 663
#define OBJECT_300 662
#define OBJECT_299 661
#define OBJECT_298 660
#define OBJECT_297 659
#define OBJECT_296 658
#define OBJECT_295 657
#define OBJECT_294 656
#define OBJECT_293 655
#define OBJECT_292 654
#define OBJECT_291 653
#define OBJECT_290 652
#define OBJECT_289 651
#define OBJECT_288 650
#define OBJECT_287 649
#define OBJECT_286 648
#define OBJECT_285 647
#define OBJECT_284 646
#define OBJECT_283 645
#define OBJECT_282 644
#define OBJECT_281 643
#define OBJECT_280 642
#define OBJECT_279 641
#define OBJECT_278 640
#define OBJECT_277 639
#define OBJECT_276 638
#define OBJECT_275 637
#define OBJECT_274 636
#define OBJECT_273 635
#define OBJECT_272 634
#define OBJECT_271 633
#define OBJECT_270 632
#define OBJECT_269 631
#define OBJECT_268 630
#define OBJECT_267 629
#define OBJECT_266 628
#define OBJECT_265 627
#define OBJECT_264 626
#define OBJECT_263 625
#define OBJECT_262 624
#define OBJECT_261 623
#define OBJECT_260 622
#define OBJECT_259 621
#define OBJECT_258 620
#define OBJECT_257 619
#define OBJECT_256 618
#define OBJECT_255 617
#define OBJECT_254 616
#define OBJECT_253 615
#define OBJECT_252 614
#define OBJECT_251 613
#define OBJECT_250 612
#define OBJECT_249 611
#define OBJECT_248 610
#define OBJECT_247 609
#define OBJECT_246 608
#define OBJECT_245 607
#define OBJECT_244 606
#define OBJECT_243 605
#define OBJECT_242 604
#define OBJECT_241 603
#define OBJECT_240 602
#define OBJECT_239 601
#define OBJECT_238 600
#define OBJECT_237 599
#define OBJECT_236 598
#define OBJECT_235 597
#define OBJECT_234 596
#define OBJECT_233 595
#define OBJECT_232 594
#define OBJECT_231 593
#define OBJECT_230 592
#define OBJECT_229 591
#define OBJECT_228 590
#define OBJECT_227 589
#define OBJECT_226 588
#define OBJECT_225 587
#define OBJECT_224 586
#define OBJECT_223 585
#define OBJECT_222 584
#define OBJECT_221 583
#define OBJECT_220 582
#define OBJECT_219 581
#define OBJECT_218 580
#define OBJECT_217 579
#define OBJECT_216 578
#define OBJECT_215 577
#define OBJECT_214 576
#define OBJECT_213 575
#define OBJECT_212 574
#define OBJECT_211 573
#define OBJECT_210 572
#define OBJECT_209 571
#define OBJECT_208 570
#define OBJECT_207 569
#define OBJECT_206 568
#define OBJECT_205 567
#define OBJECT_204 566
#define OBJECT_203 565
#define OBJECT_202 564
#define OBJECT_201 563
#define OBJECT_200 562
#define OBJECT_199 561
#define OBJECT_198 560
#define OBJECT_197 559
#define OBJECT_196 558
#define OBJECT_195 557
#define OBJECT_194 556
#define OBJECT_193 555
#define OBJECT_192 554
#define OBJECT_191 553
#define OBJECT_190 552
#define OBJECT_189 551
#define OBJECT_188 550
#define OBJECT_187 549
#define OBJECT_186 548
#define OBJECT_185 547
#define OBJECT_184 546
#define OBJECT_183 545
#define OBJECT_182 544
#define OBJECT_181 543
#define OBJECT_180 542
#define OBJECT_179 541
#define OBJECT_178 540
#define OBJECT_177 539
#define OBJECT_176 538
#define OBJECT_175 537
#define OBJECT_174 536
#define OBJECT_173 535
#define OBJECT_172 534
#define OBJECT_171 533
#define OBJECT_170 532
#define OBJECT_169 531
#define OBJECT_168 530
#define OBJECT_167 529
#define OBJECT_166 528
#define OBJECT_165 527
#define OBJECT_164 526
#define OBJECT_163 525
#define OBJECT_162 524
#define OBJECT_161 523
#define OBJECT_160 522
#define OBJECT_159 521
#define OBJECT_158 520
#define OBJECT_157 519
#define OBJECT_156 518
#define OBJECT_155 517
#define OBJECT_154 516
#define OBJECT_153 515
#define OBJECT_152 514
#define OBJECT_151 513
#define OBJECT_150 512
#define OBJECT_149 511
#define OBJECT_148 510
#define OBJECT_147 509
#define OBJECT_146 508
#define OBJECT_145 507
#define OBJECT_144 506
#define OBJECT_143 505
#define OBJECT_142 504
#define OBJECT_141 503
#define OBJECT_140 502
#define OBJECT_139 501
#define OBJECT_138 500
#define OBJECT_137 499
#define OBJECT_136 498
#define OBJECT_135 497
#define OBJECT_134 496
#define OBJECT_133 495
#define OBJECT_132 494
#define OBJECT_131 493
#define OBJECT_130 492
#define OBJECT_129 491
#define OBJECT_128 490
#define OBJECT_127 489
#define OBJECT_126 488
#define OBJECT_125 487
#define OBJECT_124 486
#define OBJECT_123 485
#define OBJECT_122 484
#define OBJECT_121 483
#define OBJECT_120 482
#define OBJECT_119 481
#define OBJECT_118 480
#define OBJECT_117 479
#define OBJECT_116 478
#define OBJECT_115 477
#define OBJECT_114 476
#define OBJECT_113 475
#define OBJECT_112 474
#define OBJECT_111 473
#define OBJECT_110 472
#define OBJECT_109 471
#define OBJECT_108 470
#define OBJECT_107 469
#define OBJECT_106 468
#define OBJECT_105 467
#define OBJECT_104 466
#define OBJECT_103 465
#define OBJECT_102 464
#define OBJECT_101 463
#define OBJECT_100 462
#define OBJECT_99 461
#define OBJECT_98 460
#define OBJECT_97 459
#define OBJECT_96 458
#define OBJECT_95 457
#define OBJECT_94 456
#define OBJECT_93 455
#define OBJECT_92 454
#define OBJECT_91 453
#define OBJECT_90 452
#define OBJECT_89 451
#define OBJECT_88 450
#define OBJECT_87 449
#define OBJECT_86 448
#define OBJECT_85 447
#define OBJECT_84 446
#define OBJECT_83 445
#define OBJECT_82 444
#define OBJECT_81 443
#define OBJECT_80 442
#define OBJECT_79 441
#define OBJECT_78 440
#define OBJECT_77 439
#define OBJECT_76 438
#define OBJECT_75 437
#define OBJECT_74 436
#define OBJECT_73 435
#define OBJECT_72 434
#define OBJECT_71 433
#define OBJECT_70 432
#define OBJECT_69 431
#define OBJECT_68 430
#define OBJECT_67 429
#define OBJECT_66 428
#define OBJECT_65 427
#define OBJECT_64 426
#define OBJECT_63 425
#define OBJECT_62 424
#define OBJECT_61 423
#define OBJECT_60 422
#define OBJECT_59 421
#define OBJECT_58 420
#define OBJECT_57 419
#define OBJECT_56 418
#define OBJECT_55 417
#define OBJECT_54 416
#define OBJECT_53 415
#define OBJECT_52 414
#define OBJECT_51 413
#define OBJECT_50 412
#define OBJECT_49 411
#define OBJECT_48 410
#define OBJECT_47 409
#define OBJECT_46 408
#define OBJECT_45 407
#define OBJECT_44 406
#define OBJECT_43 405
#define OBJECT_42 404
#define OBJECT_41 403
#define OBJECT_40 402
#define OBJECT_39 401
#define OBJECT_38 400
#define OBJECT_37 399
#define OBJECT_36 398
#define OBJECT_35 397
#define OBJECT_34 396
#define OBJECT_33 395
#define OBJECT_32 394
#define OBJECT_31 393
#define OBJECT_30 392
#define OBJECT_29 391
#define OBJECT_28 390
#define OBJECT_27 389
#define OBJECT_26 388
#define OBJECT_25 387
#define OBJECT_24 386
#define OBJECT_23 385
#define OBJECT_22 384
#define OBJECT_21 383
#define OBJECT_20 382
#define OBJECT_19 381
#define OBJECT_18 380
#define OBJECT_17 379
#define OBJECT_16 378
#define OBJECT_15 377
#define OBJECT_14 376
#define OBJECT_13 375
#define OBJECT_12 374
#define OBJECT_11 373
#define OBJECT_10 372
#define OBJECT_9 371
#define OBJECT_8 370
#define OBJECT_7 369
#define OBJECT_6 368
#define OBJECT_5 367
#define OBJECT_4 366
#define OBJECT_3 365
#define OBJECT_2 364
#define OBJECT_1 363
#define OBJECT_0 362
#define FREE_REFERENCE_9 349
#define FREE_REFERENCE_8 350
#define FREE_REFERENCE_7 351
#define FREE_REFERENCE_6 352
#define FREE_REFERENCE_5 353
#define FREE_REFERENCE_4 354
#define FREE_REFERENCE_3 355
#define FREE_REFERENCE_2 356
#define FREE_REFERENCE_1 357
#define FREE_REFERENCE_0 358
#define GLOBAL_EXECUTE_CACHE_130 360
#define FREE_REFERENCES_LABEL_0 348
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
lapgen_so_8daf62256b037591 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_35);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_36);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_37);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_38);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_39);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_41);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_42);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_44);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_45);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 43:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 44:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 46:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 47:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto label_167;

    case 49:
      current_block = (Rpc - LABEL_52);
      goto continuation_48;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto label_168;

    case 51:
      current_block = (Rpc - LABEL_54);
      goto continuation_49;

    case 52:
      current_block = (Rpc - LABEL_57);
      goto label_169;

    case 53:
      current_block = (Rpc - LABEL_56);
      goto continuation_50;

    case 54:
      current_block = (Rpc - LABEL_58);
      goto continuation_51;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto label_170;

    case 56:
      current_block = (Rpc - LABEL_59);
      goto continuation_52;

    case 57:
      current_block = (Rpc - LABEL_61);
      goto continuation_53;

    case 58:
      current_block = (Rpc - LABEL_62);
      goto continuation_54;

    case 59:
      current_block = (Rpc - LABEL_63);
      goto continuation_55;

    case 60:
      current_block = (Rpc - LABEL_64);
      goto continuation_56;

    case 61:
      current_block = (Rpc - LABEL_65);
      goto continuation_57;

    case 62:
      current_block = (Rpc - LABEL_66);
      goto continuation_58;

    case 63:
      current_block = (Rpc - LABEL_67);
      goto continuation_59;

    case 64:
      current_block = (Rpc - LABEL_68);
      goto continuation_60;

    case 65:
      current_block = (Rpc - LABEL_69);
      goto continuation_61;

    case 66:
      current_block = (Rpc - LABEL_70);
      goto continuation_62;

    case 67:
      current_block = (Rpc - LABEL_71);
      goto continuation_63;

    case 68:
      current_block = (Rpc - LABEL_72);
      goto continuation_64;

    case 69:
      current_block = (Rpc - LABEL_73);
      goto continuation_65;

    case 70:
      current_block = (Rpc - LABEL_74);
      goto continuation_66;

    case 71:
      current_block = (Rpc - LABEL_75);
      goto continuation_67;

    case 72:
      current_block = (Rpc - LABEL_76);
      goto continuation_68;

    case 73:
      current_block = (Rpc - LABEL_77);
      goto continuation_69;

    case 74:
      current_block = (Rpc - LABEL_78);
      goto continuation_70;

    case 75:
      current_block = (Rpc - LABEL_79);
      goto continuation_71;

    case 76:
      current_block = (Rpc - LABEL_80);
      goto continuation_72;

    case 77:
      current_block = (Rpc - LABEL_81);
      goto continuation_73;

    case 78:
      current_block = (Rpc - LABEL_82);
      goto continuation_74;

    case 79:
      current_block = (Rpc - LABEL_83);
      goto continuation_75;

    case 80:
      current_block = (Rpc - LABEL_84);
      goto continuation_76;

    case 81:
      current_block = (Rpc - LABEL_85);
      goto continuation_77;

    case 82:
      current_block = (Rpc - LABEL_86);
      goto continuation_78;

    case 83:
      current_block = (Rpc - LABEL_88);
      goto label_171;

    case 84:
      current_block = (Rpc - LABEL_87);
      goto continuation_79;

    case 85:
      current_block = (Rpc - LABEL_90);
      goto label_172;

    case 86:
      current_block = (Rpc - LABEL_89);
      goto continuation_80;

    case 87:
      current_block = (Rpc - LABEL_92);
      goto label_173;

    case 88:
      current_block = (Rpc - LABEL_91);
      goto continuation_81;

    case 89:
      current_block = (Rpc - LABEL_94);
      goto label_174;

    case 90:
      current_block = (Rpc - LABEL_93);
      goto continuation_82;

    case 91:
      current_block = (Rpc - LABEL_96);
      goto label_175;

    case 92:
      current_block = (Rpc - LABEL_95);
      goto continuation_83;

    case 93:
      current_block = (Rpc - LABEL_97);
      goto continuation_84;

    case 94:
      current_block = (Rpc - LABEL_99);
      goto label_176;

    case 95:
      current_block = (Rpc - LABEL_98);
      goto continuation_85;

    case 96:
      current_block = (Rpc - LABEL_101);
      goto label_177;

    case 97:
      current_block = (Rpc - LABEL_100);
      goto continuation_86;

    case 98:
      current_block = (Rpc - LABEL_102);
      goto continuation_87;

    case 99:
      current_block = (Rpc - LABEL_103);
      goto continuation_88;

    case 100:
      current_block = (Rpc - LABEL_104);
      goto continuation_89;

    case 101:
      current_block = (Rpc - LABEL_105);
      goto continuation_90;

    case 102:
      current_block = (Rpc - LABEL_106);
      goto continuation_91;

    case 103:
      current_block = (Rpc - LABEL_107);
      goto continuation_92;

    case 104:
      current_block = (Rpc - LABEL_108);
      goto continuation_98;

    case 105:
      current_block = (Rpc - LABEL_109);
      goto continuation_99;

    case 106:
      current_block = (Rpc - LABEL_110);
      goto continuation_100;

    case 107:
      current_block = (Rpc - LABEL_111);
      goto continuation_101;

    case 108:
      current_block = (Rpc - LABEL_112);
      goto continuation_102;

    case 109:
      current_block = (Rpc - LABEL_113);
      goto continuation_103;

    case 110:
      current_block = (Rpc - LABEL_114);
      goto continuation_104;

    case 111:
      current_block = (Rpc - LABEL_115);
      goto continuation_105;

    case 112:
      current_block = (Rpc - LABEL_116);
      goto continuation_106;

    case 113:
      current_block = (Rpc - LABEL_117);
      goto continuation_107;

    case 114:
      current_block = (Rpc - LABEL_118);
      goto continuation_108;

    case 115:
      current_block = (Rpc - LABEL_119);
      goto continuation_109;

    case 116:
      current_block = (Rpc - LABEL_120);
      goto continuation_110;

    case 117:
      current_block = (Rpc - LABEL_121);
      goto continuation_111;

    case 118:
      current_block = (Rpc - LABEL_122);
      goto continuation_112;

    case 119:
      current_block = (Rpc - LABEL_123);
      goto continuation_113;

    case 120:
      current_block = (Rpc - LABEL_124);
      goto continuation_114;

    case 121:
      current_block = (Rpc - LABEL_125);
      goto continuation_115;

    case 122:
      current_block = (Rpc - LABEL_126);
      goto continuation_116;

    case 123:
      current_block = (Rpc - LABEL_127);
      goto continuation_120;

    case 124:
      current_block = (Rpc - LABEL_128);
      goto continuation_119;

    case 125:
      current_block = (Rpc - LABEL_129);
      goto continuation_117;

    case 126:
      current_block = (Rpc - LABEL_131);
      goto continuation_121;

    case 127:
      current_block = (Rpc - LABEL_132);
      goto continuation_122;

    case 128:
      current_block = (Rpc - LABEL_133);
      goto continuation_123;

    case 129:
      current_block = (Rpc - LABEL_134);
      goto continuation_124;

    case 130:
      current_block = (Rpc - LABEL_135);
      goto continuation_125;

    case 131:
      current_block = (Rpc - LABEL_136);
      goto continuation_126;

    case 132:
      current_block = (Rpc - LABEL_137);
      goto continuation_127;

    case 133:
      current_block = (Rpc - LABEL_138);
      goto continuation_128;

    case 134:
      current_block = (Rpc - LABEL_139);
      goto continuation_129;

    case 135:
      current_block = (Rpc - LABEL_140);
      goto continuation_130;

    case 136:
      current_block = (Rpc - LABEL_141);
      goto continuation_131;

    case 137:
      current_block = (Rpc - LABEL_142);
      goto continuation_132;

    case 138:
      current_block = (Rpc - LABEL_143);
      goto continuation_133;

    case 139:
      current_block = (Rpc - LABEL_144);
      goto continuation_134;

    case 140:
      current_block = (Rpc - LABEL_145);
      goto continuation_135;

    case 141:
      current_block = (Rpc - LABEL_146);
      goto continuation_136;

    case 142:
      current_block = (Rpc - LABEL_147);
      goto continuation_137;

    case 143:
      current_block = (Rpc - LABEL_148);
      goto continuation_138;

    case 144:
      current_block = (Rpc - LABEL_149);
      goto continuation_139;

    case 145:
      current_block = (Rpc - LABEL_150);
      goto continuation_140;

    case 146:
      current_block = (Rpc - LABEL_151);
      goto continuation_141;

    case 147:
      current_block = (Rpc - LABEL_152);
      goto continuation_142;

    case 148:
      current_block = (Rpc - LABEL_153);
      goto continuation_143;

    case 149:
      current_block = (Rpc - LABEL_154);
      goto continuation_144;

    case 150:
      current_block = (Rpc - LABEL_155);
      goto continuation_145;

    case 151:
      current_block = (Rpc - LABEL_156);
      goto continuation_146;

    case 152:
      current_block = (Rpc - LABEL_157);
      goto continuation_147;

    case 153:
      current_block = (Rpc - LABEL_158);
      goto continuation_148;

    case 154:
      current_block = (Rpc - LABEL_159);
      goto continuation_149;

    case 155:
      current_block = (Rpc - LABEL_160);
      goto continuation_150;

    case 156:
      current_block = (Rpc - LABEL_161);
      goto continuation_151;

    case 157:
      current_block = (Rpc - LABEL_162);
      goto continuation_152;

    case 158:
      current_block = (Rpc - LABEL_163);
      goto continuation_153;

    case 159:
      current_block = (Rpc - LABEL_164);
      goto continuation_154;

    case 160:
      current_block = (Rpc - LABEL_165);
      goto continuation_155;

    case 161:
      current_block = (Rpc - LABEL_166);
      goto continuation_156;

    case 162:
      current_block = (Rpc - LABEL_167);
      goto continuation_157;

    case 163:
      current_block = (Rpc - LABEL_168);
      goto continuation_158;

    case 164:
      current_block = (Rpc - LABEL_169);
      goto continuation_159;

    case 165:
      current_block = (Rpc - LABEL_170);
      goto continuation_160;

    case 166:
      current_block = (Rpc - LABEL_171);
      goto continuation_161;

    case 167:
      current_block = (Rpc - LABEL_172);
      goto continuation_162;

    case 168:
      current_block = (Rpc - LABEL_173);
      goto continuation_163;

    case 169:
      current_block = (Rpc - LABEL_174);
      goto continuation_164;

    case 170:
      current_block = (Rpc - LABEL_175);
      goto label_180;

    case 171:
      current_block = (Rpc - LABEL_176);
      goto label_181;

    case 172:
      current_block = (Rpc - LABEL_177);
      goto expression_166;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_166)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_176])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_181)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_180)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
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
	0,
	0,
	0,
	3,
	2,
	2,
	3,
	3,
	1,
	0,
	2,
	2,
	2,
	2,
	2,
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
	2,
	0,
	1,
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
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	2,
	1,
	1,
	1,
	2,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	3,
	1,
	1,
	1,
	0,
	1,
	3,
	2,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 93)
      goto label_179;
    blocks = (current_block [OBJECT_304]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_175])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_179)
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
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_203;
  Wrd8 = Wrd12;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_201;
  Wrd8 = Wrd12;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_199;
  Wrd8 = Wrd12;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_197;
  Wrd8 = Wrd12;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_195;
  Wrd8 = Wrd12;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_193;
  Wrd8 = Wrd12;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_191;
  Wrd8 = Wrd12;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_189;
  Wrd8 = Wrd12;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_187;
  Wrd8 = Wrd12;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_185;
  Wrd8 = Wrd12;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_183;
  Wrd8 = Wrd12;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_167]);
  (Wrd12.Obj) = (current_block [OBJECT_168]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_169]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_170]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_171]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_172]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_130]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_216]), 2);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_257]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_258]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_259]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_260]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_261]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_262]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_263]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_264]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_265]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_266]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_267]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_268]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_269]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_270]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_271]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_272]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_273]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_274]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_275]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_276]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_277]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_278]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_279]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_280]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_281]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_282]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_283]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_284]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_285]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_286]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_287]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_288]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_289]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_290]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_291]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_292]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_293]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_294]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_295]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_296]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_297]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_298]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_299]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_300]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_301]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd5.Obj) = (current_block [OBJECT_302]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_303]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd9.pObj));

DEFLABEL (label_177)
  (Wrd8.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd9.pObj));

DEFLABEL (label_176)
  (Wrd8.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd9.pObj));

DEFLABEL (label_175)
  (Wrd8.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd9.pObj));

DEFLABEL (label_174)
  (Wrd8.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd9.pObj));

DEFLABEL (label_173)
  (Wrd8.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd9.pObj));

DEFLABEL (label_172)
  (Wrd8.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd9.pObj));

DEFLABEL (label_171)
  (Wrd8.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd9.pObj));

DEFLABEL (label_170)
  (Wrd8.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd9.pObj));

DEFLABEL (label_169)
  (Wrd8.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd9.pObj));

DEFLABEL (label_168)
  (Wrd8.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd9.pObj));

DEFLABEL (label_167)
  (Wrd8.Obj) = Rvl;
  goto label_202;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_lapgen_so_8daf62256b037591 [93] =
  {
    { "lapgen_so_code_1", 6, lapgen_so_code_1 },
    { "lapgen_so_code_2", 1, lapgen_so_code_2 },
    { "lapgen_so_code_3", 3, lapgen_so_code_3 },
    { "lapgen_so_code_4", 1, lapgen_so_code_4 },
    { "lapgen_so_code_5", 1, lapgen_so_code_5 },
    { "lapgen_so_code_6", 1, lapgen_so_code_6 },
    { "lapgen_so_code_7", 1, lapgen_so_code_7 },
    { "lapgen_so_code_8", 2, lapgen_so_code_8 },
    { "lapgen_so_code_9", 4, lapgen_so_code_9 },
    { "lapgen_so_code_10", 6, lapgen_so_code_10 },
    { "lapgen_so_code_11", 10, lapgen_so_code_11 },
    { "lapgen_so_code_12", 2, lapgen_so_code_12 },
    { "lapgen_so_code_13", 1, lapgen_so_code_13 },
    { "lapgen_so_code_14", 2, lapgen_so_code_14 },
    { "lapgen_so_code_15", 6, lapgen_so_code_15 },
    { "lapgen_so_code_16", 9, lapgen_so_code_16 },
    { "lapgen_so_code_17", 11, lapgen_so_code_17 },
    { "lapgen_so_code_18", 9, lapgen_so_code_18 },
    { "lapgen_so_code_19", 17, lapgen_so_code_19 },
    { "lapgen_so_code_20", 2, lapgen_so_code_20 },
    { "lapgen_so_code_21", 2, lapgen_so_code_21 },
    { "lapgen_so_code_22", 2, lapgen_so_code_22 },
    { "lapgen_so_code_23", 2, lapgen_so_code_23 },
    { "lapgen_so_code_24", 2, lapgen_so_code_24 },
    { "lapgen_so_code_25", 4, lapgen_so_code_25 },
    { "lapgen_so_code_26", 2, lapgen_so_code_26 },
    { "lapgen_so_code_27", 2, lapgen_so_code_27 },
    { "lapgen_so_code_28", 2, lapgen_so_code_28 },
    { "lapgen_so_code_29", 2, lapgen_so_code_29 },
    { "lapgen_so_code_30", 2, lapgen_so_code_30 },
    { "lapgen_so_code_31", 2, lapgen_so_code_31 },
    { "lapgen_so_code_32", 1, lapgen_so_code_32 },
    { "lapgen_so_code_33", 1, lapgen_so_code_33 },
    { "lapgen_so_code_34", 1, lapgen_so_code_34 },
    { "lapgen_so_code_35", 1, lapgen_so_code_35 },
    { "lapgen_so_code_36", 1, lapgen_so_code_36 },
    { "lapgen_so_code_37", 1, lapgen_so_code_37 },
    { "lapgen_so_code_38", 2, lapgen_so_code_38 },
    { "lapgen_so_code_39", 1, lapgen_so_code_39 },
    { "lapgen_so_code_40", 4, lapgen_so_code_40 },
    { "lapgen_so_code_41", 3, lapgen_so_code_41 },
    { "lapgen_so_code_42", 2, lapgen_so_code_42 },
    { "lapgen_so_code_43", 2, lapgen_so_code_43 },
    { "lapgen_so_code_44", 2, lapgen_so_code_44 },
    { "lapgen_so_code_45", 1, lapgen_so_code_45 },
    { "lapgen_so_code_46", 1, lapgen_so_code_46 },
    { "lapgen_so_code_47", 1, lapgen_so_code_47 },
    { "lapgen_so_code_48", 3, lapgen_so_code_48 },
    { "lapgen_so_code_49", 3, lapgen_so_code_49 },
    { "lapgen_so_code_50", 8, lapgen_so_code_50 },
    { "lapgen_so_code_51", 3, lapgen_so_code_51 },
    { "lapgen_so_code_52", 5, lapgen_so_code_52 },
    { "lapgen_so_code_53", 6, lapgen_so_code_53 },
    { "lapgen_so_code_54", 7, lapgen_so_code_54 },
    { "lapgen_so_code_55", 2, lapgen_so_code_55 },
    { "lapgen_so_code_56", 2, lapgen_so_code_56 },
    { "lapgen_so_code_57", 2, lapgen_so_code_57 },
    { "lapgen_so_code_58", 2, lapgen_so_code_58 },
    { "lapgen_so_code_59", 8, lapgen_so_code_59 },
    { "lapgen_so_code_60", 11, lapgen_so_code_60 },
    { "lapgen_so_code_61", 2, lapgen_so_code_61 },
    { "lapgen_so_code_62", 2, lapgen_so_code_62 },
    { "lapgen_so_code_63", 2, lapgen_so_code_63 },
    { "lapgen_so_code_64", 2, lapgen_so_code_64 },
    { "lapgen_so_code_65", 2, lapgen_so_code_65 },
    { "lapgen_so_code_66", 2, lapgen_so_code_66 },
    { "lapgen_so_code_67", 1, lapgen_so_code_67 },
    { "lapgen_so_code_68", 6, lapgen_so_code_68 },
    { "lapgen_so_code_69", 6, lapgen_so_code_69 },
    { "lapgen_so_code_70", 4, lapgen_so_code_70 },
    { "lapgen_so_code_71", 4, lapgen_so_code_71 },
    { "lapgen_so_code_72", 7, lapgen_so_code_72 },
    { "lapgen_so_code_73", 28, lapgen_so_code_73 },
    { "lapgen_so_code_74", 1, lapgen_so_code_74 },
    { "lapgen_so_code_75", 1, lapgen_so_code_75 },
    { "lapgen_so_code_76", 1, lapgen_so_code_76 },
    { "lapgen_so_code_77", 4, lapgen_so_code_77 },
    { "lapgen_so_code_78", 2, lapgen_so_code_78 },
    { "lapgen_so_code_79", 1, lapgen_so_code_79 },
    { "lapgen_so_code_80", 1, lapgen_so_code_80 },
    { "lapgen_so_code_81", 1, lapgen_so_code_81 },
    { "lapgen_so_code_82", 1, lapgen_so_code_82 },
    { "lapgen_so_code_83", 1, lapgen_so_code_83 },
    { "lapgen_so_code_84", 1, lapgen_so_code_84 },
    { "lapgen_so_code_85", 2, lapgen_so_code_85 },
    { "lapgen_so_code_86", 2, lapgen_so_code_86 },
    { "lapgen_so_code_87", 3, lapgen_so_code_87 },
    { "lapgen_so_code_88", 10, lapgen_so_code_88 },
    { "lapgen_so_code_89", 2, lapgen_so_code_89 },
    { "lapgen_so_code_90", 5, lapgen_so_code_90 },
    { "lapgen_so_code_91", 4, lapgen_so_code_91 },
    { "lapgen_so_code_92", 12, lapgen_so_code_92 },
    { "lapgen_so_code_93", 1, lapgen_so_code_93 }
  };

int
decl_lapgen_so_8daf62256b037591 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lapgen_so_8daf62256b037591);
  return (0);
}

DECLARE_COMPILED_CODE ("lapgen.so", 173, decl_lapgen_so_8daf62256b037591, lapgen_so_8daf62256b037591)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lapgen_so_data_8daf62256b037591 [12273] =
  "\x9e\x05\x96\x01\xf5\x16\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x0c"
  "\x06\x07\x85\xc2\xb9\x02\x0c\x0d\xba\x24\x28\x0d\xbb\x28\x0d\xbc"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x82\x88\x0c\x0d\xbe\x0c\x0d\xbf\x0c\x0d\x1c\x0c\x0d"
  "\x1c\x0c\x0d\x1c\x0c\x0d\x1c\x0c\x0d\x1c\x0c\x0d\x1c\x0c\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0c\x0d"
  "\x1c\x0c\x1b\x0c\x1b\x28\x0d\x1c\x28\xb3\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0d\x1c\x0c\x84"
  "\x0c\x83\x0c\x80\x0c\x82\x0c\x81\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x0c\x0c\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x86\x88\x1b\x1b\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x28\xb6\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28"
  "\x0d\x1c\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c\x0d\x1c\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x08\x1b\x25\x1b\x24\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0d\x1c\x0c\xb7\x0c\x1b\x0c\x1b\x0c\x1b\x0c\x1b\x0c\x1b\x28"
  "\xb3\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0d\x1c\x0c\x85\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x85\x1b\x1b\x28"
  "\x1b\x28\x0d\xbf\x28\x1b\x28\xb2\x28\x1b\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x0d\x1c\x25"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28"
  "\xb6\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c"
  "\x0c\x0d\x1c\x1b\x0d\x1c\x1b\x85\x28\xb7\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x80\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x82\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x84\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x0d\x1c\x25\x1b\x24"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x07\x0d\x25\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x02\x80\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x02\x82"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x07\x0d\x25\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x07\x0d\x25\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x80\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x0d\x1c\x24"
  "\x28\x1b\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x07\x85\xb1\x02\x0d\xb9\x24\x28\x1b\x28"
  "\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x02\x88\x1b\x0c\x1b\xb1\x24\x28\x0d\x28\xb2\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x1c\x80\x0d\x1c\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x80\x81\x1b\x82\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1c\xb1\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c"
  "\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x25\x1b\x1b\x24"
  "\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0d\x1c\x25\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x84\x0c\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x25\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x1b\x28\x0d\x28\x0d\x28\x0d\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x28\xb7\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\xba\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x02\x1b\x02\x0d\x24\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x0d\x08\x0d\x1b\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x17"
  "\xb8\x88\xb0\x1b\x2a\x0d\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02"
  "\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\xc2\x02\x02\x0d\x0d"
  "\x02\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xb2\x1b\x2a\x0d\x1b\x2a\xb7\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x81\x80\x82\x83\x08\x84"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\xb3\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x0d\x0d\x1b\x2a\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\xb1\x0d\x1b\x2a\x0d\xb4\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x0d\x1b\x2a"
  "\x0d\x0d\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xb6\x1b\x2a\xc3\x1b\xb5\x2a"
  "\x28\x0d\x26\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x24\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f"
  "\x6c\x61\x70\x67\x65\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x06\x61\x70\x70\x6c\x79\x1b\x49\x6e\x74\x65\x72\x6e\x61\x6c\x20"
  "\x69\x6e\x63\x6f\x6e\x73\x69\x73\x74\x65\x6e\x63\x79\x20\x69\x6e"
  "\x20\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x04"
  "\x3a\x20\x20\x06\x65\x72\x72\x6f\x72\x02\x06\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03\x0f\x73\x79\x6d\x62\x6f"
  "\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\xb3\x01\x0e\x81\x87\x02"
  "\xb2\x01\x0c\x81\x87\x02\xb1\x01\x0a\x81\x83\x02\xb0\x01\x08\xfd"
  "\x07\xaf\x01\x06\x81\x8d\x02\xae\x01\x04\x81\x8f\x02\x0d\x1f\x02"
  "\x0d\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x0b\x74\x79"
  "\x70\x65\x2d\x3e\x6e\x61\x6d\x65\x09\x64\x6f\x75\x62\x6c\x65\x20"
  "\x2a\x08\x64\x6f\x75\x62\x6c\x65\x2a\x07\x64\x6f\x75\x62\x6c\x65"
  "\x07\x64\x6f\x75\x62\x6c\x65\x09\x0e\x75\x6e\x73\x69\x67\x6e\x65"
  "\x64\x20\x6c\x6f\x6e\x67\x06\x75\x6c\x6f\x6e\x67\x0a\x07\x63\x68"
  "\x61\x72\x20\x2a\x06\x63\x68\x61\x72\x2a\x0b\x05\x6c\x6f\x6e\x67"
  "\x05\x6c\x6f\x6e\x67\x0c\x10\x53\x43\x48\x45\x4d\x45\x5f\x4f\x42"
  "\x4a\x45\x43\x54\x20\x2a\x0f\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62"
  "\x6a\x65\x63\x74\x2a\x0d\x0e\x53\x43\x48\x45\x4d\x45\x5f\x4f\x42"
  "\x4a\x45\x43\x54\x0e\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65"
  "\x63\x74\x0e\x0d\x6d\x61\x63\x68\x69\x6e\x65\x5f\x77\x6f\x72\x64"
  "\x05\x77\x6f\x72\x64\x0f\x05\x14\x63\x6f\x6d\x70\x2d\x69\x6e\x74"
  "\x65\x72\x6e\x61\x6c\x2d\x65\x72\x72\x6f\x72\x10\x02\xb4\x01\x04"
  "\x83\x04\x03\x1b\x11\x02\x0d\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x74"
  "\x79\x70\x65\x0f\x72\x65\x67\x2a\x74\x79\x70\x65\x2d\x3e\x6e\x61"
  "\x6d\x65\x12\x04\x44\x62\x6c\x09\x04\x57\x72\x64\x0f\x03\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x13\x04\x05"
  "\x10\x04\xb7\x01\x08\x81\x85\x02\xb6\x01\x06\x81\x87\x02\xb5\x01"
  "\x04\x84\x06\x07\x17\x14\x02\x19\x55\x6e\x6b\x6e\x6f\x77\x6e\x20"
  "\x6d\x61\x63\x68\x69\x6e\x65\x20\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x16\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x6e\x61\x6d\x65\x15\x04\x52\x76\x6c\x04\x52\x64\x6c\x04"
  "\x52\x72\x62\x04\x52\x68\x70\x04\x52\x73\x70\x05\x10\x02\xb8\x01"
  "\x04\x83\x04\x03\x15\x16\x02\x10\x53\x43\x48\x45\x4d\x45\x5f\x4f"
  "\x42\x4a\x45\x43\x54\x20\x2a\x0e\x53\x43\x48\x45\x4d\x45\x5f\x4f"
  "\x42\x4a\x45\x43\x54\xb9\x01\x04\x83\x04\x03\x17\x02\x0d\x0e\xba"
  "\x01\x04\x83\x04\x03\x18\x02\x08\xbb\x01\x04\x83\x04\x03\x19\x02"
  "\x09\x03\x04\x07\x63\x3a\x63\x61\x73\x74\x1a\x03\xbd\x01\x06\x81"
  "\x87\x02\xbc\x01\x04\x84\x06\x05\x0d\x1b\x02\x0a\x03\x04\x63\x3a"
  "\x26\x03\x04\x63\x3a\x2a\x1c\x03\x04\x1a\x05\xc1\x01\x0a\x81\x89"
  "\x02\xc0\x01\x08\x81\x87\x02\xbf\x01\x06\x81\x85\x02\xbe\x01\x04"
  "\x84\x06\x09\x15\x1a\x02\x0b\x04\x63\x61\x72\x1d\x04\x63\x64\x72"
  "\x1e\x16\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6c\x69\x73\x74\x1f\x02\x04\x05\x61\x73\x73\x71\x20"
  "\x02\xc7\x01\x0e\x81\x89\x02\xc6\x01\x0c\x81\x87\x02\xc5\x01\x0a"
  "\x81\x89\x02\xc4\x01\x08\x81\x85\x02\xc3\x01\x06\x81\x87\x02\xc2"
  "\x01\x04\x84\x06\x0d\x17\x21\x02\x0c\x09\x73\x65\x74\x2d\x63\x64"
  "\x72\x21\x22\x1e\x1f\x02\x1f\x02\x04\x20\x04\x12\x6e\x65\x77\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x61\x6d\x65\x23\x03\xd1"
  "\x01\x16\x81\x89\x02\xd0\x01\x14\x81\x89\x02\xcf\x01\x12\x81\x85"
  "\x02\xce\x01\x10\x81\x83\x02\xcd\x01\x0e\x81\x8b\x02\xcc\x01\x0c"
  "\x81\x87\x02\xcb\x01\x0a\x81\x89\x02\xca\x01\x08\x81\x85\x02\xc9"
  "\x01\x06\x81\x87\x02\xc8\x01\x04\x84\x06\x15\x24\x24\x02\x0d\x1e"
  "\x04\x0e\x66\x69\x6e\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x25"
  "\x04\x13\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x21\x26\x03\xd3\x01\x06\x81\x85\x02\xd2\x01\x04\x84"
  "\x06\x05\x0e\x27\x02\x0e\x0f\x09\xd4\x01\x04\x83\x04\x03\x28\x02"
  "\x0f\x0d\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x0b\x72"
  "\x65\x67\x2d\x73\x65\x6c\x65\x63\x74\x29\x06\x2e\x70\x44\x62\x6c"
  "\x06\x2e\x75\x4c\x6e\x67\x0a\x06\x2e\x70\x43\x68\x72\x0b\x05\x2e"
  "\x4c\x6e\x67\x0c\x06\x2e\x70\x4f\x62\x6a\x0d\x05\x2e\x4f\x62\x6a"
  "\x0e\x04\x05\x10\x03\xd6\x01\x06\x84\x06\xd5\x01\x04\x81\x85\x02"
  "\x05\x1b\x0e\x02\x10\x1e\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d"
  "\x73\x6f\x75\x72\x63\x65\x21\x0d\x15\x55\x6e\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x65\x64\x20\x72\x65\x67\x69\x73\x74\x65\x72\x0f\x09\x04"
  "\x25\x03\x15\x05\x10\x04\x29\x03\x1d\x6d\x61\x63\x68\x69\x6e\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x0c\x04\x09\x72\x68\x73\x2d\x63\x61\x73\x74"
  "\x0b\x07\xdc\x01\x0e\x81\x87\x02\xdb\x01\x0c\x81\x87\x02\xda\x01"
  "\x0a\x81\x89\x02\xd9\x01\x08\x81\x87\x02\xd8\x01\x06\x81\x87\x02"
  "\xd7\x01\x04\x84\x06\x0d\x23\x0a\x02\x11\x2d\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x74\x61\x72\x67\x65\x74\x21\x3a\x20\x49\x6e\x63"
  "\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x1e\x0f\x09\x04\x25\x03\x0e\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x04\x26\x05\x03\x15"
  "\x04\x17\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x2f\x63\x2a\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x3f\x2a\x04\x29\x08\xe5\x01\x14\x81"
  "\x89\x02\xe4\x01\x12\x81\x89\x02\xe3\x01\x10\x81\x89\x02\xe2\x01"
  "\x0e\x81\x87\x02\xe1\x01\x0c\x81\x87\x02\xe0\x01\x0a\x81\x89\x02"
  "\xdf\x01\x08\x81\x87\x02\xde\x01\x06\x81\x87\x02\xdd\x01\x04\x84"
  "\x06\x13\x2a\x2b\x02\x12\x22\x1e\x18\x70\x65\x72\x6d\x61\x6e\x65"
  "\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x73\x74"
  "\x2c\x02\x2c\x02\x04\x20\x04\x12\x03\xf0\x01\x18\x81\x89\x02\xef"
  "\x01\x16\x81\x89\x02\xee\x01\x14\x81\x89\x02\xed\x01\x12\x81\x87"
  "\x02\xec\x01\x10\x81\x87\x02\xeb\x01\x0e\x81\x87\x02\xea\x01\x0c"
  "\x81\x87\x02\xe9\x01\x0a\x81\x89\x02\xe8\x01\x08\x81\x85\x02\xe7"
  "\x01\x06\x81\x87\x02\xe6\x01\x04\x84\x06\x17\x26\x2d\x02\x13\x1d"
  "\x1e\x2c\x02\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x03"
  "\x09\x63\x3a\x67\x72\x6f\x75\x70\x2a\x04\x04\x6d\x61\x70\x03\x04"
  "\x07\x63\x3a\x64\x65\x63\x6c\x06\xf9\x01\x14\x81\x85\x02\xf8\x01"
  "\x12\x81\x83\x02\xf7\x01\x10\x81\x85\x02\xf6\x01\x0e\x83\x04\xf5"
  "\x01\x0c\x81\x85\x02\xf4\x01\x0a\x83\x04\xf3\x01\x08\x81\x81\x02"
  "\xf2\x01\x06\x81\x83\x02\xf1\x01\x04\x82\x02\x13\x25\x2e\x02\x14"
  "\x17\x49\x6e\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x20\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x73\x1a\x55\x6e\x6b\x6e\x6f\x77\x6e\x20"
  "\x52\x54\x4c\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x74\x79\x70"
  "\x65\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6d\x6f\x76\x65\x2d"
  "\x74\x6f\x2d\x74\x61\x72\x67\x65\x74\x21\x2f\x09\x06\x66\x6c\x6f"
  "\x61\x74\x30\x0f\x03\x04\x0f\x66\x69\x6e\x64\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x21\x31\x05\x10\x06\x10\x03\x0c\x03\x15\x04\x11"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x74\x61\x72\x67\x65\x74\x21"
  "\x32\x04\x0d\x04\x04\x63\x3a\x3d\x33\x0a\x8a\x02\x24\x81\x8b\x02"
  "\x89\x02\x22\x81\x87\x02\x88\x02\x20\x81\x89\x02\x87\x02\x1e\x81"
  "\x87\x02\x86\x02\x1c\x81\x8b\x02\x85\x02\x1a\x81\x89\x02\x84\x02"
  "\x18\x81\x87\x02\x83\x02\x16\x81\x89\x02\x82\x02\x14\x81\x87\x02"
  "\x81\x02\x12\x81\x89\x02\x80\x02\x10\x81\x87\x02\xff\x01\x0e\x81"
  "\x87\x02\xfe\x01\x0c\x81\x87\x02\xfd\x01\x0a\x81\x87\x02\xfc\x01"
  "\x08\x81\x87\x02\xfb\x01\x06\x81\x85\x02\xfa\x01\x04\x84\x06\x23"
  "\x41\x34\x02\x15\x13\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45"
  "\x52\x46\x41\x43\x45\x5f\x30\x03\x16\x75\x73\x65\x2d\x69\x6e\x76"
  "\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x21\x35\x04"
  "\x08\x63\x3a\x73\x63\x61\x6c\x6c\x36\x03\x8c\x02\x06\x81\x83\x02"
  "\x8b\x02\x04\x83\x04\x05\x0f\x37\x02\x16\x13\x49\x4e\x56\x4f\x4b"
  "\x45\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45\x5f\x31\x03\x35\x05"
  "\x36\x03\x8e\x02\x06\x81\x85\x02\x8d\x02\x04\x84\x06\x05\x0f\x38"
  "\x02\x17\x13\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46"
  "\x41\x43\x45\x5f\x32\x03\x35\x06\x36\x03\x90\x02\x06\x81\x87\x02"
  "\x8f\x02\x04\x85\x08\x05\x0f\x39\x02\x18\x13\x49\x4e\x56\x4f\x4b"
  "\x45\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45\x5f\x33\x03\x35\x07"
  "\x36\x03\x92\x02\x06\x81\x89\x02\x91\x02\x04\x86\x0a\x05\x0f\x3a"
  "\x02\x19\x13\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46"
  "\x41\x43\x45\x5f\x34\x03\x35\x08\x36\x03\x94\x02\x06\x81\x8b\x02"
  "\x93\x02\x04\x87\x0c\x05\x0f\x3b\x02\x1a\x02\x09\x69\x6e\x66\x69"
  "\x6e\x69\x74\x79\x13\x2a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74"
  "\x65\x72\x66\x61\x63\x65\x2a\x3c\x02\x3c\x02\x04\x04\x6d\x69\x6e"
  "\x02\x98\x02\x0a\x81\x83\x02\x97\x02\x08\x81\x85\x02\x96\x02\x06"
  "\x83\x04\x95\x02\x04\x81\x83\x02\x09\x15\x3c\x02\x1b\x11\x49\x4e"
  "\x56\x4f\x4b\x45\x5f\x50\x52\x49\x4d\x49\x54\x49\x56\x45\x18\x2a"
  "\x75\x73\x65\x64\x2d\x69\x6e\x76\x6f\x6b\x65\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2a\x02\x05\x36\x02\x9a\x02\x06\x81\x85\x02"
  "\x99\x02\x04\x84\x06\x05\x0f\x3d\x02\x1c\x18\x43\x4c\x4f\x53\x55"
  "\x52\x45\x5f\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x5f\x43\x48\x45"
  "\x43\x4b\x19\x03\x35\x04\x36\x03\x9c\x02\x06\x81\x81\x02\x9b\x02"
  "\x04\x82\x02\x05\x10\x3e\x02\x1d\x10\x49\x4e\x54\x45\x52\x52\x55"
  "\x50\x54\x5f\x43\x48\x45\x43\x4b\x03\x35\x05\x36\x03\x9e\x02\x06"
  "\x81\x85\x02\x9d\x02\x04\x84\x06\x05\x0f\x3f\x02\x1e\x16\x44\x4c"
  "\x49\x4e\x4b\x5f\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x5f\x43\x48"
  "\x45\x43\x4b\x1a\x03\x35\x05\x36\x03\xa0\x02\x06\x81\x83\x02\x9f"
  "\x02\x04\x83\x04\x05\x10\x40\x02\x1f\x05\x4a\x55\x4d\x50\x1a\x2a"
  "\x75\x73\x65\x2d\x6a\x75\x6d\x70\x2d\x65\x78\x65\x63\x75\x74\x65"
  "\x2d\x63\x68\x61\x63\x68\x65\x2a\x02\x04\x36\x02\xa2\x02\x06\x81"
  "\x83\x02\xa1\x02\x04\x83\x04\x05\x0f\x36\x02\x20\x0b\x70\x6f\x70"
  "\x5f\x72\x65\x74\x75\x72\x6e\x11\x2a\x75\x73\x65\x2d\x70\x6f\x70"
  "\x2d\x72\x65\x74\x75\x72\x6e\x2a\x02\x03\x07\x63\x3a\x67\x6f\x74"
  "\x6f\x41\x02\xa4\x02\x06\x81\x81\x02\xa3\x02\x04\x82\x02\x05\x0f"
  "\x42\x02\x21\x04\x52\x72\x62\xa5\x02\x04\x82\x02\x03\x43\x02\x22"
  "\x04\x52\x68\x70\xa6\x02\x04\x82\x02\x03\x44\x02\x23\x04\x52\x73"
  "\x70\xa7\x02\x04\x82\x02\x03\x45\x02\x24\x04\x52\x76\x6c\xa8\x02"
  "\x04\x82\x02\x03\x46\x02\x25\x04\x52\x64\x6c\xa9\x02\x04\x82\x02"
  "\x03\x47\x02\x26\x04\x52\x70\x63\xaa\x02\x04\x82\x02\x03\x48\x02"
  "\x27\x02\x0c\x63\x3a\x72\x65\x67\x2d\x62\x6c\x6f\x63\x6b\x49\x04"
  "\x07\x63\x3a\x61\x72\x65\x66\x4a\x03\xac\x02\x06\x81\x83\x02\xab"
  "\x02\x04\x83\x04\x05\x0d\x4b\x02\x28\x0d\x52\x45\x47\x42\x4c\x4f"
  "\x43\x4b\x5f\x45\x4e\x56\x03\x07\x63\x3a\x72\x72\x65\x66\x4c\x02"
  "\xad\x02\x04\x82\x02\x03\x0a\x4d\x02\x29\x02\x09\x63\x3a\x73\x70"
  "\x2d\x72\x65\x67\x4e\x04\x33\x03\x1c\x03\x09\x63\x3a\x70\x72\x65"
  "\x64\x65\x63\x05\xb1\x02\x0a\x81\x87\x02\xb0\x02\x08\x81\x85\x02"
  "\xaf\x02\x06\x81\x83\x02\xae\x02\x04\x83\x04\x09\x15\x33\x02\x2a"
  "\x02\x4e\x03\x1c\x03\x0a\x63\x3a\x70\x6f\x73\x74\x69\x6e\x63\x04"
  "\xb4\x02\x08\x81\x83\x02\xb3\x02\x06\x81\x81\x02\xb2\x02\x04\x82"
  "\x02\x07\x11\x4f\x02\x2b\x02\x4e\x03\x1c\x03\xb6\x02\x06\x81\x81"
  "\x02\xb5\x02\x04\x82\x02\x05\x0d\x1c\x02\x2c\x02\x4e\x04\x4a\x03"
  "\xb8\x02\x06\x81\x83\x02\xb7\x02\x04\x83\x04\x05\x0d\x50\x02\x2d"
  "\x02\x4e\x04\x07\x63\x3a\x61\x70\x74\x72\x51\x03\xba\x02\x06\x81"
  "\x83\x02\xb9\x02\x04\x83\x04\x05\x0d\x52\x02\x2e\x0e\x63\x75\x72"
  "\x72\x65\x6e\x74\x5f\x62\x6c\x6f\x63\x6b\x53\x04\x4a\x02\xbb\x02"
  "\x04\x83\x04\x03\x0a\x4a\x02\x2f\x53\x04\x51\x02\xbc\x02\x04\x83"
  "\x04\x03\x0a\x53\x02\x30\xbd\x02\x04\x82\x02\x03\x51\x02\x31\x1e"
  "\x04\x06\x61\x73\x73\x6f\x63\x02\xc0\x02\x08\x81\x85\x02\xbf\x02"
  "\x06\x81\x87\x02\xbe\x02\x04\x84\x06\x07\x0e\x54\x02\x32\x02\x22"
  "\x1e\xc3\x02\x08\x81\x87\x02\xc2\x02\x06\x81\x87\x02\xc1\x02\x04"
  "\x85\x08\x07\x0d\x55\x02\x33\x09\x73\x65\x74\x2d\x63\x61\x72\x21"
  "\x1d\x10\x2a\x64\x69\x73\x61\x6d\x62\x69\x67\x75\x61\x74\x6f\x72"
  "\x2a\x56\x02\x03\x13\x05\x0c\x61\x64\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x21\x57\x05\x04\xcb\x02\x12\x81\x91\x02\xca\x02\x10\x81\x8f"
  "\x02\xc9\x02\x0e\x81\x8d\x02\xc8\x02\x0c\x81\x89\x02\xc7\x02\x0a"
  "\x81\x89\x02\xc6\x02\x08\x81\x89\x02\xc5\x02\x06\x81\x87\x02\xc4"
  "\x02\x04\x85\x08\x11\x1f\x58\x02\x34\x04\x11\x66\x69\x6e\x64\x2d"
  "\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x59\x05\x11\x61\x64"
  "\x64\x2d\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x21\x5a\x03"
  "\xce\x02\x08\x81\x89\x02\xcd\x02\x06\x81\x87\x02\xcc\x02\x04\x85"
  "\x08\x07\x0f\x5b\x02\x35\x1e\x08\x6f\x62\x6a\x65\x63\x74\x73\x02"
  "\x05\x57\x03\x03\xd3\x02\x0c\x81\x83\x02\xd2\x02\x0a\x81\x85\x02"
  "\xd1\x02\x08\x84\x06\xd0\x02\x06\x81\x87\x02\xcf\x02\x04\x81\x89"
  "\x02\x0b\x1a\x02\x36\x1d\x1c\x6f\x62\x6a\x65\x63\x74\x2d\x6c\x61"
  "\x62\x65\x6c\x2d\x76\x61\x6c\x75\x65\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x1e\x02\x04\x15\x6c\x69\x73\x74\x2d\x73\x65\x61\x72\x63"
  "\x68\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x04\x09\x73\x74\x72"
  "\x69\x6e\x67\x3d\x3f\x04\xd9\x02\x0e\x81\x85\x02\xd8\x02\x0c\x81"
  "\x85\x02\xd7\x02\x0a\x81\x83\x02\xd6\x02\x08\x81\x87\x02\xd5\x02"
  "\x06\x81\x87\x02\xd4\x02\x04\x83\x04\x0d\x1c\x5c\x02\x37\x13\x45"
  "\x4e\x56\x49\x52\x4f\x4e\x4d\x45\x4e\x54\x5f\x4c\x41\x42\x45\x4c"
  "\x5f\x11\x44\x45\x42\x55\x47\x47\x49\x4e\x47\x5f\x4c\x41\x42\x45"
  "\x4c\x5f\x1b\x4e\x55\x4d\x42\x45\x52\x5f\x4f\x46\x5f\x4c\x49\x4e"
  "\x4b\x45\x52\x5f\x53\x45\x43\x54\x49\x4f\x4e\x53\x5f\x17\x46\x52"
  "\x45\x45\x5f\x52\x45\x46\x45\x52\x45\x4e\x43\x45\x53\x5f\x4c\x41"
  "\x42\x45\x4c\x5f\x03\x1a\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6e"
  "\x65\x77\x2d\x6c\x61\x62\x65\x6c\x2d\x73\x79\x6d\x62\x6f\x6c\x5d"
  "\x03\x1a\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x03\xe0\x02\x10\x81"
  "\x87\x02\xdf\x02\x0e\x81\x85\x02\xde\x02\x0c\x81\x83\x02\xdd\x02"
  "\x0a\x81\x83\x02\xdc\x02\x08\x81\x83\x02\xdb\x02\x06\x81\x81\x02"
  "\xda\x02\x04\x82\x02\x0f\x1b\x5e\x02\x38\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x5f\x11\x2a\x73\x70\x65\x63\x69\x61\x6c\x2d"
  "\x6c\x61\x62\x65\x6c\x73\x2a\x60\x02\xe2\x02\x06\x81\x83\x02\xe1"
  "\x02\x04\x82\x02\x05\x0c\x61\x02\x39\x5f\x60\x02\xe4\x02\x06\x81"
  "\x83\x02\xe3\x02\x04\x82\x02\x05\x0c\x62\x02\x3a\x5f\x60\x02\xe6"
  "\x02\x06\x81\x83\x02\xe5\x02\x04\x82\x02\x05\x0c\x63\x02\x3b\x5f"
  "\x60\x02\xe8\x02\x06\x81\x83\x02\xe7\x02\x04\x82\x02\x05\x0c\x64"
  "\x02\x3c\x5f\x60\x02\xf0\x02\x12\x81\x85\x02\xef\x02\x10\x81\x85"
  "\x02\xee\x02\x0e\x81\x85\x02\xed\x02\x0c\x81\x83\x02\xec\x02\x0a"
  "\x81\x83\x02\xeb\x02\x08\x81\x81\x02\xea\x02\x06\x81\x81\x02\xe9"
  "\x02\x04\x82\x02\x11\x1b\x60\x02\x3d\x22\x1e\x04\x20\x03\x5d\x03"
  "\xfb\x02\x18\x81\x8d\x02\xfa\x02\x16\x81\x8d\x02\xf9\x02\x14\x81"
  "\x8d\x02\xf8\x02\x12\x81\x8b\x02\xf7\x02\x10\x81\x8b\x02\xf6\x02"
  "\x0e\x81\x8b\x02\xf5\x02\x0c\x81\x8b\x02\xf4\x02\x0a\x81\x8d\x02"
  "\xf3\x02\x08\x81\x89\x02\xf2\x02\x06\x81\x8b\x02\xf1\x02\x04\x86"
  "\x0a\x17\x22\x5f\x02\x3e\x0f\x45\x58\x45\x43\x55\x54\x45\x5f\x43"
  "\x41\x43\x48\x45\x5f\x0f\x66\x72\x65\x65\x2d\x75\x75\x6f\x2d\x6c"
  "\x69\x6e\x6b\x73\x65\x02\x06\x0f\x75\x75\x6f\x2d\x6c\x69\x6e\x6b"
  "\x2d\x6c\x61\x62\x65\x6c\x66\x02\xfd\x02\x06\x81\x87\x02\xfc\x02"
  "\x04\x84\x06\x05\x0e\x67\x02\x3f\x16\x47\x4c\x4f\x42\x41\x4c\x5f"
  "\x45\x58\x45\x43\x55\x54\x45\x5f\x43\x41\x43\x48\x45\x5f\x11\x67"
  "\x6c\x6f\x62\x61\x6c\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x73\x68"
  "\x02\x06\x66\x02\xff\x02\x06\x81\x87\x02\xfe\x02\x04\x84\x06\x05"
  "\x0e\x69\x02\x40\x08\x4f\x42\x4a\x45\x43\x54\x5f\x6a\x02\x05\x0c"
  "\x66\x69\x6e\x64\x2d\x6f\x72\x2d\x61\x64\x64\x6b\x02\x81\x03\x06"
  "\x81\x85\x02\x80\x03\x04\x83\x04\x05\x0e\x6c\x02\x41\x6a\x02\x05"
  "\x6b\x02\x83\x03\x06\x81\x85\x02\x82\x03\x04\x83\x04\x05\x0e\x6a"
  "\x02\x42\x10\x46\x52\x45\x45\x5f\x52\x45\x46\x45\x52\x45\x4e\x43"
  "\x45\x5f\x10\x66\x72\x65\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x73\x6d\x02\x05\x6b\x02\x85\x03\x06\x81\x85\x02\x84\x03\x04"
  "\x83\x04\x05\x0e\x6e\x02\x43\x11\x46\x52\x45\x45\x5f\x41\x53\x53"
  "\x49\x47\x4e\x4d\x45\x4e\x54\x5f\x11\x66\x72\x65\x65\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x6f\x02\x05\x6b\x02\x87\x03"
  "\x06\x81\x85\x02\x86\x03\x04\x83\x04\x05\x0e\x70\x02\x44\x0c\x76"
  "\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x71\x02\x88\x03\x04\x84"
  "\x06\x03\x72\x02\x45\x1e\x1d\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x66\x69\x72\x73\x74\x73\x03\x0e\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x63\x6f\x6e\x64\x74\x03\x8e\x03\x0e\x81\x89\x02\x8d\x03\x0c"
  "\x81\x89\x02\x8c\x03\x0a\x81\x89\x02\x8b\x03\x08\x81\x87\x02\x8a"
  "\x03\x06\x81\x87\x02\x89\x03\x04\x84\x06\x0d\x18\x75\x02\x46\x0a"
  "\x6c\x61\x62\x65\x6c\x2d\x6e\x75\x6d\x76\x02\x76\x56\x03\x03\x13"
  "\x05\x03\x94\x03\x0e\x81\x87\x02\x93\x03\x0c\x81\x87\x02\x92\x03"
  "\x0a\x81\x85\x02\x91\x03\x08\x81\x85\x02\x90\x03\x06\x81\x83\x02"
  "\x8f\x03\x04\x83\x04\x0d\x1a\x56\x02\x47\x02\x07\x4c\x41\x42\x45"
  "\x4c\x5f\x07\x6c\x61\x62\x65\x6c\x73\x13\x02\x13\x02\x03\x5d\x02"
  "\x98\x03\x0a\x81\x83\x02\x97\x03\x08\x81\x85\x02\x96\x03\x06\x81"
  "\x83\x02\x95\x03\x04\x83\x04\x09\x15\x02\x48\x13\x02\x04\x0b\x66"
  "\x69\x6e\x64\x2d\x6c\x61\x62\x65\x6c\x77\x03\x0e\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6c\x61\x62\x65\x6c\x21\x78\x03\x0d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x74\x68\x69\x72\x64\x79\x03\x0e\x6c\x61\x62\x65\x6c"
  "\x2d\x3e\x6f\x66\x66\x73\x65\x74\x7a\x05\x9c\x03\x0a\x81\x85\x02"
  "\x9b\x03\x08\x81\x83\x02\x9a\x03\x06\x81\x85\x02\x99\x03\x04\x83"
  "\x04\x09\x17\x7b\x02\x49\x71\x05\x54\x41\x47\x5f\x13\x02\x04\x77"
  "\x03\x78\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x66\x74\x68"
  "\x7c\x03\x5d\x03\x14\x6c\x61\x62\x65\x6c\x2d\x3e\x64\x69\x73\x70"
  "\x61\x74\x63\x68\x2d\x74\x61\x67\x7d\x06\xa3\x03\x10\x81\x87\x02"
  "\xa2\x03\x0e\x81\x87\x02\xa1\x03\x0c\x81\x85\x02\xa0\x03\x0a\x81"
  "\x85\x02\x9f\x03\x08\x81\x83\x02\x9e\x03\x06\x81\x85\x02\x9d\x03"
  "\x04\x83\x04\x0f\x22\x7e\x02\x4a\x02\x07\x4c\x41\x42\x45\x4c\x5f"
  "\x13\x02\x13\x02\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x73\x69\x78"
  "\x74\x68\x7f\x03\x5d\x03\x7c\x04\x06\x64\x65\x6c\x71\x21\x04\x77"
  "\x03\x79\x03\x0e\x76\x65\x63\x74\x6f\x72\x2d\x66\x6f\x75\x72\x74"
  "\x68\x80\x01\x08\xbf\x03\x3a\x81\x91\x02\xbe\x03\x38\x81\x91\x02"
  "\xbd\x03\x36\x81\x8f\x02\xbc\x03\x34\x81\x8f\x02\xbb\x03\x32\x81"
  "\x8d\x02\xba\x03\x30\x81\x8f\x02\xb9\x03\x2e\x81\x8d\x02\xb8\x03"
  "\x2c\x81\x93\x02\xb7\x03\x2a\x81\x93\x02\xb6\x03\x28\x81\x91\x02"
  "\xb5\x03\x26\x81\x91\x02\xb4\x03\x24\x81\x8d\x02\xb3\x03\x22\x81"
  "\x8b\x02\xb2\x03\x20\x81\x91\x02\xb1\x03\x1e\x81\x8d\x02\xb0\x03"
  "\x1c\x81\x8d\x02\xaf\x03\x1a\x81\x8b\x02\xae\x03\x18\x81\x89\x02"
  "\xad\x03\x16\x81\x8b\x02\xac\x03\x14\x81\x8d\x02\xab\x03\x12\x81"
  "\x8d\x02\xaa\x03\x10\x85\x08\xa9\x03\x0e\x81\x87\x02\xa8\x03\x0c"
  "\x81\x89\x02\xa7\x03\x0a\x81\x8b\x02\xa6\x03\x08\x81\x8b\x02\xa5"
  "\x03\x06\x81\x8b\x02\xa4\x03\x04\x81\x8b\x02\x39\x51\x81\x01\x02"
  "\x4b\xc0\x03\x04\x83\x04\x03\x82\x01\x02\x4c\x30\x09\xc1\x03\x04"
  "\x84\x06\x03\x83\x01\x02\x4d\x09\xc2\x03\x04\x84\x06\x03\x09\x02"
  "\x4e\x30\x22\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x64\x65\x74"
  "\x65\x72\x6d\x69\x6e\x65\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20"
  "\x74\x79\x70\x65\x0f\x03\x12\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x3f\x03\x1c\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x66"
  "\x6c\x6f\x61\x74\x3f\x03\x1b\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x77\x6f\x72\x64"
  "\x3f\x04\x05\xc6\x03\x0a\x81\x83\x02\xc5\x03\x08\x81\x83\x02\xc4"
  "\x03\x06\x81\x83\x02\xc3\x03\x04\x83\x04\x09\x18\x30\x02\x4f\x0f"
  "\x03\x02\xc8\x03\x06\x81\x83\x02\xc7\x03\x04\x83\x04\x05\x0d\x0f"
  "\x02\x50\x27\x53\x68\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x62\x65"
  "\x20\x75\x73\x69\x6e\x67\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x6f\x72\x13\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x05\x10\x02\xc9"
  "\x03\x04\x83\x04\x03\x0b\x84\x01\x02\x51\x27\x53\x68\x6f\x75\x6c"
  "\x64\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x69\x6e\x67\x20\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x20\x61\x6c\x6c\x6f\x63\x61\x74\x6f"
  "\x72\x1c\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x74\x72\x61\x6e\x73\x66\x65\x72\x85\x01\x06"
  "\x10\x02\xca\x03\x04\x84\x06\x03\x0b\x86\x01\x02\x52\x27\x53\x68"
  "\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x69\x6e"
  "\x67\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x6f\x72\x1d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x3e"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x72\x61\x6e\x73\x66\x65"
  "\x72\x87\x01\x06\x10\x02\xcb\x03\x04\x84\x06\x03\x0b\x88\x01\x02"
  "\x53\x27\x53\x68\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x62\x65\x20"
  "\x75\x73\x69\x6e\x67\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x61"
  "\x6c\x6c\x6f\x63\x61\x74\x6f\x72\x15\x70\x73\x65\x75\x64\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x68\x6f\x6d\x65\x89\x01\x05"
  "\x10\x02\xcc\x03\x04\x83\x04\x03\x0b\x8a\x01\x02\x54\x27\x53\x68"
  "\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x69\x6e"
  "\x67\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x6f\x72\x18\x68\x6f\x6d\x65\x2d\x3e\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x74\x72\x61\x6e\x73\x66\x65\x72\x8b\x01\x06\x10"
  "\x02\xcd\x03\x04\x84\x06\x03\x0b\x8c\x01\x02\x55\x27\x53\x68\x6f"
  "\x75\x6c\x64\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x69\x6e\x67"
  "\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x6f\x72\x18\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x68\x6f"
  "\x6d\x65\x2d\x74\x72\x61\x6e\x73\x66\x65\x72\x8d\x01\x06\x10\x02"
  "\xce\x03\x04\x84\x06\x03\x0b\x8e\x01\x02\x56\x03\x08\x63\x3a\x6c"
  "\x61\x62\x65\x6c\x02\xd0\x03\x06\x81\x83\x02\xcf\x03\x04\x83\x04"
  "\x05\x0c\x8f\x01\x02\x57\x03\x41\x02\xd2\x03\x06\x81\x83\x02\xd1"
  "\x03\x04\x83\x04\x05\x0c\x41\x02\x58\x15\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x02\x05"
  "\x15\x64\x65\x63\x6c\x61\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x6c"
  "\x61\x62\x65\x6c\x21\x90\x01\x03\x19\x6c\x61\x70\x3a\x6d\x61\x6b"
  "\x65\x2d\x6c\x61\x62\x65\x6c\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e"
  "\x74\x91\x01\x03\xd5\x03\x08\x81\x85\x02\xd4\x03\x06\x81\x8b\x02"
  "\xd3\x03\x04\x84\x06\x07\x11\x92\x01\x02\x59\x10\x71\x0f\x11\x2a"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2a\x02"
  "\x04\x0a\x63\x3a\x69\x66\x2d\x67\x6f\x74\x6f\x03\x04\x63\x3a\x21"
  "\x03\xdf\x03\x16\x81\x89\x02\xde\x03\x14\x81\x85\x02\xdd\x03\x12"
  "\x81\x85\x02\xdc\x03\x10\x81\x85\x02\xdb\x03\x0e\x81\x85\x02\xda"
  "\x03\x0c\x81\x83\x02\xd9\x03\x0a\x81\x83\x02\xd8\x03\x08\x81\x83"
  "\x02\xd7\x03\x06\x81\x83\x02\xd6\x03\x04\x83\x04\x15\x23\x71\x02"
  "\x5a\x03\x0f\x62\x72\x61\x6e\x63\x68\x2d\x6f\x6e\x2d\x65\x78\x70"
  "\x72\x93\x01\x02\xe1\x03\x06\x81\x87\x02\xe0\x03\x04\x85\x08\x05"
  "\x0b\x94\x01\x02\x5b\x22\x1e\x04\x20\x02\xe6\x03\x0c\x81\x87\x02"
  "\xe5\x03\x0a\x81\x85\x02\xe4\x03\x08\x81\x89\x02\xe3\x03\x06\x81"
  "\x8b\x02\xe2\x03\x04\x85\x08\x0b\x13\x22\x02\x5c\x11\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x19\x6c\x6f"
  "\x6f\x6b\x75\x70\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x95\x01\x1e\x04\x20\x05\x10\x03\xea\x03"
  "\x0a\x81\x85\x02\xe9\x03\x08\x81\x87\x02\xe8\x03\x06\x81\x89\x02"
  "\xe7\x03\x04\x84\x06\x09\x14\x20\x02\x5d\x12\x64\x65\x66\x69\x6e"
  "\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x0f\x63\x6f\x64"
  "\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x06\x62\x65\x67\x69"
  "\x6e\x1d\x1e\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65"
  "\x6e\x64\x02\xf6\x03\x1a\x81\x87\x02\xf5\x03\x18\x81\x89\x02\xf4"
  "\x03\x16\x81\x85\x02\xf3\x03\x14\x81\x89\x02\xf2\x03\x12\x81\x87"
  "\x02\xf1\x03\x10\x81\x85\x02\xf0\x03\x0e\x81\x85\x02\xef\x03\x0c"
  "\x81\x89\x02\xee\x03\x0a\x81\x89\x02\xed\x03\x08\x81\x87\x02\xec"
  "\x03\x06\x81\x87\x02\xeb\x03\x04\x84\x06\x19\x25\x1e\x02\x5e\x02"
  "\xf7\x03\x04\x83\x04\x03\x1d\x5e\x1d\x04\x14\x70\x72\x65\x2d\x6c"
  "\x61\x70\x67\x65\x6e\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x24\x63"
  "\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6b"
  "\x70\x74\x3e\x21\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6b\x70\x74\x3d\x27\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x32\x3c\x23\x63\x6f"
  "\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x72\x65\x66\x6c"
  "\x65\x63\x74\x2d\x74\x6f\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65"
  "\x3b\x15\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x6d\x6f\x64\x75\x6c\x6f\x3a\x18\x63\x6f\x64\x65\x3a\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x39"
  "\x17\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x71"
  "\x75\x6f\x74\x69\x65\x6e\x74\x38\x1e\x63\x6f\x64\x65\x3a\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x65\x72\x72\x6f\x72\x37\x1b\x63\x6f\x64\x65\x3a\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x61\x70\x70"
  "\x6c\x79\x36\x15\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x64\x65\x66\x69\x6e\x65\x35\x13\x63\x6f\x64\x65\x3a\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73\x65\x74\x21\x34\x17\x63\x6f"
  "\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x75\x6e\x62\x6f"
  "\x75\x6e\x64\x3f\x1a\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x32\x1a"
  "\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73\x61"
  "\x66\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x31\x15\x63\x6f\x64\x65\x3a"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6c\x6f\x6f\x6b\x75\x70\x30"
  "\x15\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x61"
  "\x63\x63\x65\x73\x73\x2f\x14\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x7a\x65\x72\x6f\x3f\x2e\x18\x63\x6f\x64\x65"
  "\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x70\x6f\x73\x69\x74\x69"
  "\x76\x65\x3f\x2d\x11\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x26\x2b\x2c\x18\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x2b\x11"
  "\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x26\x2a"
  "\x2a\x11\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x26\x2d\x29\x11\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x26\x3c\x28\x11\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x31\x2b\x27\x11\x63\x6f\x64\x65\x3a\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x26\x3e\x26\x11\x63\x6f\x64\x65\x3a\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x26\x3d\x25\x11\x63\x6f\x64\x65"
  "\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x26\x2f\x24\x12\x63\x6f"
  "\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x2d\x31\x2b\x23"
  "\x1f\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2d\x74\x72\x61\x70\x22"
  "\x22\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73"
  "\x61\x66\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72"
  "\x61\x70\x21\x1d\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x20\x24\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x61\x70\x70\x6c\x79\x1f\x1e\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d"
  "\x74\x72\x61\x70\x1e\x25\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x69\x63"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1d\x25\x63\x6f\x64\x65"
  "\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x1c\x22\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x1b\x1e\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x64\x6c\x69"
  "\x6e\x6b\x1a\x20\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x19\x13\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x6c\x69\x6e\x6b\x18\x1a\x63\x6f\x64\x65\x3a\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x6c\x65\x78\x70\x72\x2d\x61\x70\x70"
  "\x6c\x79\x17\x14\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x65\x72\x72\x6f\x72\x16\x14\x63\x6f\x64\x65\x3a\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x61\x70\x70\x6c\x79\x15\x24\x63\x6f"
  "\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6c\x65\x78\x70\x72\x2d\x61\x70\x70\x6c"
  "\x79\x14\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x0d\x64"
  "\x65\x66\x69\x6e\x65\x2d\x63\x6f\x64\x65\x73\x1e\x63\x6f\x64\x65"
  "\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x61\x70\x70\x6c\x79\x13\x1e\x04\x95\x01\x20\x04"
  "\x19\x64\x65\x66\x69\x6e\x65\x2d\x61\x72\x69\x74\x68\x6d\x65\x74"
  "\x69\x63\x2d\x6d\x65\x74\x68\x6f\x64\x22\x04\x08\x63\x6f\x6d\x70"
  "\x61\x72\x65\x94\x01\x04\x93\x01\x71\x04\x15\x6c\x61\x70\x3a\x6d"
  "\x61\x6b\x65\x2d\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x92"
  "\x01\x04\x1e\x6c\x61\x70\x3a\x6d\x61\x6b\x65\x2d\x75\x6e\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x62\x72\x61\x6e\x63\x68"
  "\x41\x04\x91\x01\x8f\x01\x04\x8d\x01\x8e\x01\x04\x8b\x01\x8c\x01"
  "\x04\x89\x01\x8a\x01\x04\x87\x01\x88\x01\x04\x85\x01\x86\x01\x04"
  "\x84\x01\x04\x0f\x77\x6f\x72\x64\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3f\x0f\x04\x30\x04\x10\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c"
  "\x65\x2f\x63\x2a\x63\x3f\x09\x04\x2a\x83\x01\x04\x17\x73\x6f\x72"
  "\x74\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x73\x82\x01\x04\x1c\x61\x76\x61\x69\x6c\x61\x62\x6c\x65"
  "\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x73\x90\x01\x81\x01\x10\x7d\x7e\x04\x7a\x7b\x04\x78\x04\x5d"
  "\x56\x04\x77\x75\x04\x0e\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x2d"
  "\x73\x65\x6c\x0b\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x32\x10\x73"
  "\x65\x74\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x31\x21\x72\x04"
  "\x0b\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x31\x09\x73\x79\x6d\x62"
  "\x6f\x6c\x2d\x32\x09\x73\x79\x6d\x62\x6f\x6c\x2d\x31\x08\x6c\x61"
  "\x62\x65\x6c\x2d\x32\x08\x6c\x61\x62\x65\x6c\x2d\x31\x18\x66\x72"
  "\x65\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x3e\x6f"
  "\x66\x66\x73\x65\x74\x70\x04\x17\x66\x72\x65\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x3e\x6f\x66\x66\x73\x65\x74\x6e\x04"
  "\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x6f\x66\x66\x73\x65\x74\x6a"
  "\x04\x10\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x3e\x6c\x61\x62\x65"
  "\x6c\x6c\x04\x16\x67\x6c\x6f\x62\x61\x6c\x2d\x75\x75\x6f\x2d\x6c"
  "\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x69\x04\x14\x66\x72\x65\x65"
  "\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x67"
  "\x04\x66\x5f\x04\x18\x70\x72\x65\x70\x61\x72\x65\x2d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x60\x04\x18\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x2f\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x64\x04\x21\x73\x70\x65\x63\x69\x61\x6c"
  "\x2d\x6c\x61\x62\x65\x6c\x2f\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66"
  "\x2d\x73\x65\x63\x74\x69\x6f\x6e\x73\x63\x04\x1e\x73\x70\x65\x63"
  "\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x2f\x66\x72\x65\x65\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x62\x04\x1a\x73\x70\x65\x63"
  "\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x2f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x61\x04\x14\x6d\x61\x6b\x65\x2d\x73\x70\x65"
  "\x63\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x73\x5e\x04\x76\x13\x68"
  "\x65\x6f\x6d\x13\x6f\x62\x6a\x65\x63\x74\x2d\x6c\x61\x62\x65\x6c"
  "\x2d\x76\x61\x6c\x75\x65\x5c\x04\x0e\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x08\x6b\x5b\x04\x5a\x58\x04\x57\x55\x04"
  "\x59\x54\x04\x17\x74\x61\x62\x6c\x65\x2d\x3e\x6c\x69\x73\x74\x2d"
  "\x6f\x66\x2d\x65\x6e\x74\x72\x69\x65\x73\x0b\x6d\x61\x6b\x65\x2d"
  "\x74\x61\x62\x6c\x65\x51\x04\x0c\x65\x6e\x74\x72\x79\x2d\x6c\x61"
  "\x62\x65\x6c\x0c\x65\x6e\x74\x72\x79\x2d\x76\x61\x6c\x75\x65\x0b"
  "\x6d\x61\x6b\x65\x2d\x65\x6e\x74\x72\x79\x07\x63\x3a\x63\x70\x74"
  "\x72\x53\x04\x07\x63\x3a\x63\x72\x65\x66\x4a\x04\x07\x63\x3a\x73"
  "\x70\x74\x72\x52\x04\x07\x63\x3a\x73\x72\x65\x66\x50\x04\x06\x63"
  "\x3a\x74\x6f\x73\x1c\x04\x06\x63\x3a\x70\x6f\x70\x4f\x04\x07\x63"
  "\x3a\x70\x75\x73\x68\x33\x04\x0a\x63\x3a\x65\x6e\x76\x2d\x72\x65"
  "\x67\x4d\x04\x4c\x4b\x04\x09\x63\x3a\x70\x63\x2d\x72\x65\x67\x48"
  "\x04\x0c\x63\x3a\x64\x6c\x69\x6e\x6b\x2d\x72\x65\x67\x47\x04\x0a"
  "\x63\x3a\x76\x61\x6c\x2d\x72\x65\x67\x46\x04\x4e\x45\x04\x0b\x63"
  "\x3a\x66\x72\x65\x65\x2d\x72\x65\x67\x44\x04\x49\x43\x04\x0d\x63"
  "\x3a\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x42\x04\x07\x63\x3a"
  "\x6a\x75\x6d\x70\x36\x04\x18\x63\x3a\x64\x6c\x69\x6e\x6b\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x40\x04"
  "\x12\x63\x3a\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65"
  "\x63\x6b\x3f\x04\x1a\x63\x3a\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x3e\x04"
  "\x13\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x3d\x04\x35\x3c\x06\x15\x63\x3a\x69\x6e\x76\x6f\x6b"
  "\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x34\x3b\x04\x15"
  "\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61"
  "\x63\x65\x2d\x33\x3a\x04\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d"
  "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x32\x39\x04\x15\x63\x3a"
  "\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65"
  "\x2d\x31\x38\x04\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e"
  "\x74\x65\x72\x66\x61\x63\x65\x2d\x30\x37\x04\x2f\x34\x04\x16\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x2e\x04\x23\x2d\x04\x32\x2b\x04\x0d\x0a\x04\x29"
  "\x0e\x06\x17\x74\x79\x70\x65\x2d\x3e\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x2d\x63\x2d\x74\x79\x70\x65\x28\x04\x31\x27\x04\x26\x24"
  "\x04\x25\x21\x04\x1f\x2c\x09\x6c\x68\x73\x2d\x63\x61\x73\x74\x1a"
  "\x04\x0b\x1b\x04\x1e\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x73"
  "\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3f\x19\x04\x0c\x18\x04\x16\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x17\x04\x15"
  "\x16\x04\x12\x14\x04\x11\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x08\x04\x1f\x73\x63\x2d\x6d"
  "\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x05\x63\x6f\x6e\x73"
  "\x04\x63\x61\x72\x04\x63\x64\x72\x73\x74\x79\x80\x01\x7c\x7f\x0f"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x76\x65\x6e\x74\x68\x0b\xad"
  "\x01\xdc\x02\x80\x80\x04\xac\x01\xda\x02\x81\x81\x02\xab\x01\xd8"
  "\x02\x81\x81\x02\xaa\x01\xd6\x02\x81\x83\x02\xa9\x01\xd4\x02\x81"
  "\x83\x02\xa8\x01\xd2\x02\x81\x83\x02\xa7\x01\xd0\x02\x81\x83\x02"
  "\xa6\x01\xce\x02\x81\x83\x02\xa5\x01\xcc\x02\x81\x83\x02\xa4\x01"
  "\xca\x02\x81\x83\x02\xa3\x01\xc8\x02\x81\x83\x02\xa2\x01\xc6\x02"
  "\x81\x83\x02\xa1\x01\xc4\x02\x81\x83\x02\xa0\x01\xc2\x02\x81\x83"
  "\x02\x9f\x01\xc0\x02\x81\x83\x02\x9e\x01\xbe\x02\x81\x83\x02\x9d"
  "\x01\xbc\x02\x81\x83\x02\x9c\x01\xba\x02\x81\x83\x02\x9b\x01\xb8"
  "\x02\x81\x83\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81"
  "\x83\x02\x98\x01\xb2\x02\x81\x83\x02\x97\x01\xb0\x02\x81\x83\x02"
  "\x96\x01\xae\x02\x81\x83\x02\x95\x01\xac\x02\x81\x83\x02\x94\x01"
  "\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02"
  "\x81\x83\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x83"
  "\x02\x8f\x01\xa0\x02\x81\x83\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d"
  "\x01\x9c\x02\x81\x83\x02\x8c\x01\x9a\x02\x81\x83\x02\x8b\x01\x98"
  "\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x83\x02\x89\x01\x94\x02\x81"
  "\x83\x02\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90\x02\x81\x83\x02"
  "\x86\x01\x8e\x02\x81\x83\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01"
  "\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01\x86\x02"
  "\x81\x83\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02\x81\x83"
  "\x02\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x87\x02\x7d\xfc\x01"
  "\x81\x85\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x83\x02\x7a"
  "\xf6\x01\x81\x83\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x81\x83"
  "\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x83\x02\x75\xec\x01"
  "\x81\x83\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x83\x02\x72"
  "\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x83"
  "\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01"
  "\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x83\x02\x6a"
  "\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x83"
  "\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01"
  "\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02\x62"
  "\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x85\x02\x60\xc2\x01\x81\x83"
  "\x02\x5f\xc0\x01\x81\x85\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01"
  "\x81\x83\x02\x5c\xba\x01\x81\x85\x02\x5b\xb8\x01\x81\x83\x02\x5a"
  "\xb6\x01\x81\x85\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x85"
  "\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x85\x02\x55\xac\x01"
  "\x81\x83\x02\x54\xaa\x01\x81\x85\x02\x53\xa8\x01\x81\x83\x02\x52"
  "\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x83"
  "\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01"
  "\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a"
  "\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83"
  "\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01"
  "\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42"
  "\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83"
  "\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83"
  "\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02"
  "\x39\x74\x81\x83\x02\x38\x72\x81\x85\x02\x37\x70\x81\x83\x02\x36"
  "\x6e\x81\x83\x02\x35\x6c\x81\x85\x02\x34\x6a\x81\x83\x02\x33\x68"
  "\x81\x85\x02\x32\x66\x81\x83\x02\x31\x64\x81\x85\x02\x30\x62\x81"
  "\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83"
  "\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02"
  "\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26"
  "\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48"
  "\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81"
  "\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83"
  "\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\xdb\x02\x9e"
  "\x05";

SCHEME_OBJECT *
lapgen_so_data_8daf62256b037591 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lapgen_so_data_8daf62256b037591 [0]))), (sizeof (prog_lapgen_so_data_8daf62256b037591)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_177]));
}

DECLARE_COMPILED_DATA_NS ("lapgen.so", lapgen_so_data_8daf62256b037591)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lapgen.so", "d29a5855b03766c7")
