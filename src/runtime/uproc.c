/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define ENVIRONMENT_LABEL_1_3 29
#define DEBUGGING_LABEL_1_2 28
#define OBJECT_1_8 27
#define OBJECT_1_7 26
#define OBJECT_1_6 25
#define OBJECT_1_5 24
#define OBJECT_1_4 23
#define OBJECT_1_3 22
#define OBJECT_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd25;
  machine_word Wrd66;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd75;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd70;
  machine_word Wrd67;
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
      goto procedureP_10;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedureP_16)
DEFLABEL (procedureP_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd67.Obj) = (current_block [OBJECT_1_0]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd70.Lng))))
    goto label_35;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_34;

DEFLABEL (label_33)
  (Wrd14.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd24.Lng)))
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_17)
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_19;
  (Wrd16.Obj) = (current_block [OBJECT_1_4]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_1_3]);

DEFLABEL (label_18)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_31)
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = (Wrd25.Obj);

DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd55.Obj) = (current_block [OBJECT_1_5]);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd58.Lng))))
    goto label_30;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_29;

DEFLABEL (label_28)
  (Wrd43.Obj) = (current_block [OBJECT_1_6]);
  (Wrd46.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd46.Lng))))
    goto label_27;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd34.Obj) == (Wrd36.Obj)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_1_8]))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_1_3]);

DEFLABEL (label_22)
DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_25;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_1_3]);
  goto label_20;

DEFLABEL (label_30)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_34)
  (Wrd66.Obj) = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd66.Obj);
  goto label_31;

DEFLABEL (label_35)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto guarantee_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_procedure_4)
DEFLABEL (guarantee_procedure_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_2 9
#define OBJECT_3_1 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto error_not_procedure_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_procedure_5)
DEFLABEL (error_not_procedure_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_3_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto guarantee_compound_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_compound_procedure_4)
DEFLABEL (guarantee_compound_procedure_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_2 9
#define OBJECT_5_1 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto error_not_compound_procedure_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_compound_procedure_5)
DEFLABEL (error_not_compound_procedure_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_5_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_5_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
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
uproc_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_primitive_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_primitive_procedure_4)
DEFLABEL (guarantee_primitive_procedure_1)
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
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 11
#define DEBUGGING_LABEL_7_2 10
#define OBJECT_7_2 9
#define OBJECT_7_1 8
#define OBJECT_7_0 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto error_not_primitive_procedure_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_primitive_procedure_5)
DEFLABEL (error_not_primitive_procedure_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_7_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto guarantee_compiled_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_compiled_procedure_4)
DEFLABEL (guarantee_compiled_procedure_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_2 9
#define OBJECT_9_1 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto error_not_compiled_procedure_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_compiled_procedure_5)
DEFLABEL (error_not_compiled_procedure_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_9_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_9 7
#define LABEL_10_5 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_12 15
#define ENVIRONMENT_LABEL_10_3 35
#define DEBUGGING_LABEL_10_2 34
#define OBJECT_10_10 33
#define OBJECT_10_9 32
#define OBJECT_10_8 31
#define OBJECT_10_7 30
#define OBJECT_10_6 29
#define OBJECT_10_5 28
#define OBJECT_10_4 27
#define OBJECT_10_3 26
#define OBJECT_10_2 25
#define OBJECT_10_1 24
#define OBJECT_10_0 23
#define EXECUTE_CACHE_10_13 17
#define EXECUTE_CACHE_10_8 19
#define EXECUTE_CACHE_10_6 21
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd63;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd75;
  machine_word Wrd6;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd81;
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
      current_block = (Rpc - LABEL_10_4);
      goto procedure_lambda_11;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_lambda_17)
DEFLABEL (procedure_lambda_11)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd67.Obj) = (current_block [OBJECT_10_1]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd70.Lng))))
    goto label_33;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_32;

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_10_3]);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd58.Lng))))
    goto label_30;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_29;

DEFLABEL (label_28)
  (Wrd17.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng)))
    goto label_18;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_20;
  (Wrd19.Obj) = (current_block [OBJECT_10_6]);
  goto label_19;

DEFLABEL (label_20)
  (Wrd19.Obj) = (current_block [OBJECT_10_5]);

DEFLABEL (label_19)
DEFLABEL (label_27)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  Rvl = ((Wrd52.pObj) [0]);

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd40.Obj) = (current_block [OBJECT_10_7]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd43.Lng))))
    goto label_26;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_25;

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_10_8]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_10_9]);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (label_25)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_10]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd80.Obj) = ((Wrd81.pObj) [0]);
  if (! ((Wrd80.Obj) == (current_block [OBJECT_10_0])))
    goto label_24;
  (Wrd83.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd83.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_26)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto label_22;

DEFLABEL (label_30)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_33)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define LABEL_11_9 7
#define LABEL_11_5 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define ENVIRONMENT_LABEL_11_3 37
#define DEBUGGING_LABEL_11_2 36
#define OBJECT_11_10 35
#define OBJECT_11_9 34
#define OBJECT_11_8 33
#define OBJECT_11_7 32
#define OBJECT_11_6 31
#define OBJECT_11_5 30
#define OBJECT_11_4 29
#define OBJECT_11_3 28
#define OBJECT_11_2 27
#define OBJECT_11_1 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_14 17
#define EXECUTE_CACHE_11_13 19
#define EXECUTE_CACHE_11_8 21
#define EXECUTE_CACHE_11_6 23
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd63;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd77;
  machine_word Wrd6;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd83;
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
      current_block = (Rpc - LABEL_11_4);
      goto procedure_environment_12;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_environment_18)
DEFLABEL (procedure_environment_12)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd69.Obj) = (current_block [OBJECT_11_1]);
  (Wrd72.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd72.Lng))))
    goto label_33;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd69.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_20;

DEFLABEL (label_19)
  (Wrd65.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd65.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd66.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_11_9]);
  (Rsp [1]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_11_3]);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd58.Lng))))
    goto label_32;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_31;

DEFLABEL (label_30)
  (Wrd17.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng)))
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_21)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_23;
  (Wrd19.Obj) = (current_block [OBJECT_11_6]);
  goto label_22;

DEFLABEL (label_23)
  (Wrd19.Obj) = (current_block [OBJECT_11_5]);

DEFLABEL (label_22)
DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  Rvl = ((Wrd52.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd40.Obj) = (current_block [OBJECT_11_7]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd43.Lng))))
    goto label_28;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_11_8]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_11_9]);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (label_27)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_10]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd82.Obj) = ((Wrd83.pObj) [0]);
  if (! ((Wrd82.Obj) == (current_block [OBJECT_11_0])))
    goto label_26;
  (Wrd85.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd85.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_28)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto label_24;

DEFLABEL (label_32)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_33)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_7 5
#define LABEL_12_10 7
#define LABEL_12_5 9
#define LABEL_12_11 11
#define LABEL_12_12 13
#define LABEL_12_13 15
#define LABEL_12_8 17
#define LABEL_12_16 19
#define ENVIRONMENT_LABEL_12_3 43
#define DEBUGGING_LABEL_12_2 42
#define OBJECT_12_10 41
#define OBJECT_12_9 40
#define OBJECT_12_8 39
#define OBJECT_12_7 38
#define OBJECT_12_6 37
#define OBJECT_12_5 36
#define OBJECT_12_4 35
#define OBJECT_12_3 34
#define OBJECT_12_2 33
#define OBJECT_12_1 32
#define OBJECT_12_0 31
#define EXECUTE_CACHE_12_17 21
#define EXECUTE_CACHE_12_15 23
#define EXECUTE_CACHE_12_14 25
#define EXECUTE_CACHE_12_9 27
#define EXECUTE_CACHE_12_6 29
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd66;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd80;
  machine_word Wrd6;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd86;
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
      goto procedure_components_18;

    case 1:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_components_24)
DEFLABEL (procedure_components_18)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd72.Obj) = (current_block [OBJECT_12_1]);
  (Wrd75.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd75.Lng))))
    goto label_39;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd68.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd68.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd69.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_12_8]);
  (Rsp [1]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_12_3]);
  (Wrd61.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd61.Lng))))
    goto label_38;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd58.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_37;

DEFLABEL (label_36)
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng)))
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_27)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_29;
  (Wrd19.Obj) = (current_block [OBJECT_12_6]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd19.Obj) = (current_block [OBJECT_12_5]);

DEFLABEL (label_28)
DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [0]);
  (Rsp [1]) = (Wrd50.Obj);
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (Wrd56.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd56.Obj);
  (Rsp [2]) = (Wrd53.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_31)
  (Wrd40.Obj) = (current_block [OBJECT_12_7]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd43.Lng))))
    goto label_34;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd33.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_12_8]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_12_9]);
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_33)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_10]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd85.Obj) = ((Wrd86.pObj) [0]);
  if (! ((Wrd85.Obj) == (current_block [OBJECT_12_0])))
    goto label_32;
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_34)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto label_30;

DEFLABEL (label_38)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_39)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_25;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_5 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_11 15
#define ENVIRONMENT_LABEL_13_3 32
#define DEBUGGING_LABEL_13_2 31
#define OBJECT_13_9 30
#define OBJECT_13_8 29
#define OBJECT_13_7 28
#define OBJECT_13_6 27
#define OBJECT_13_5 26
#define OBJECT_13_4 25
#define OBJECT_13_3 24
#define OBJECT_13_2 23
#define OBJECT_13_1 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_12 17
#define EXECUTE_CACHE_13_6 19
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd83;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd62;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd75;
  machine_word Wrd6;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd80;
  machine_word Wrd81;
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
      goto discriminate_procedure_10;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discriminate_procedure_16)
DEFLABEL (discriminate_procedure_10)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd67.Obj) = (current_block [OBJECT_13_1]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd70.Lng))))
    goto label_32;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_31;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_13_3]);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd57.Lng))))
    goto label_29;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_28;

DEFLABEL (label_27)
  (Wrd17.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng)))
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_17)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_19;
  (Wrd19.Obj) = (current_block [OBJECT_13_6]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd19.Obj) = (current_block [OBJECT_13_5]);

DEFLABEL (label_18)
DEFLABEL (label_26)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd50.Obj);

DEFLABEL (label_20)
  (Wrd83.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd83.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  (Wrd40.Obj) = (current_block [OBJECT_13_7]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd43.Lng))))
    goto label_25;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_24;

DEFLABEL (label_23)
  (Wrd33.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_13_8]);
  (Rsp [4]) = (Wrd34.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_24)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_9]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd80.Obj) = ((Wrd81.pObj) [0]);
  if ((Wrd80.Obj) == (current_block [OBJECT_13_0]))
    goto label_20;
  goto label_23;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto label_21;

DEFLABEL (label_29)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_31)
  (Wrd64.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd64.Obj);
  goto label_20;

DEFLABEL (label_32)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd17;
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
      goto skip_entities_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_entities_9)
DEFLABEL (skip_entities_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd20.Lng))))
    goto label_15;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd10.Obj) = ((Wrd11.pObj) [1]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd10.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define LABEL_15_10 13
#define LABEL_15_11 15
#define LABEL_15_12 17
#define LABEL_15_14 19
#define LABEL_15_16 21
#define TAG_15_17 9
#define LABEL_15_19 23
#define LABEL_15_6 25
#define LABEL_15_20 27
#define LABEL_15_24 29
#define LABEL_15_23 31
#define ENVIRONMENT_LABEL_15_3 60
#define DEBUGGING_LABEL_15_2 59
#define OBJECT_15_13 58
#define OBJECT_15_12 57
#define OBJECT_15_11 56
#define OBJECT_15_10 55
#define OBJECT_15_9 54
#define OBJECT_15_8 53
#define OBJECT_15_7 52
#define OBJECT_15_6 51
#define OBJECT_15_5 50
#define OBJECT_15_4 49
#define OBJECT_15_3 48
#define OBJECT_15_2 47
#define OBJECT_15_1 46
#define OBJECT_15_0 45
#define EXECUTE_CACHE_15_25 33
#define EXECUTE_CACHE_15_22 35
#define EXECUTE_CACHE_15_21 37
#define EXECUTE_CACHE_15_18 39
#define EXECUTE_CACHE_15_15 41
#define EXECUTE_CACHE_15_13 43
#define FREE_REFERENCES_LABEL_15_0 32
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd115;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd90;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd114;
  machine_word Wrd109;
  machine_word Wrd110;
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
      goto procedure_arity_45;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto loop_43;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto label_49;

    case 6:
      current_block = (Rpc - LABEL_15_11);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_15_12);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto lambda_54;

    case 10:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_37;

    case 11:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_15_20);
      goto continuation_29;

    case 13:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_34;

    case 14:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_52)
DEFLABEL (procedure_arity_45)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_43;

DEFLABEL (loop_53)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_15_8);
  (Wrd96.Obj) = (current_block [OBJECT_15_1]);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd99.Lng))))
    goto label_76;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd96.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_58;

DEFLABEL (label_57)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_12]), 1);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd6.Lng) < 0))
    goto label_55;
  (Wrd30.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd8.Lng) > (Wrd6.Lng))
    goto label_56;
  (Wrd16.Lng) = ((Wrd6.Lng) - (Wrd8.Lng));
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd24.Obj) = (current_block [OBJECT_15_13]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_58)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd82.Obj) = (current_block [OBJECT_15_3]);
  (Wrd85.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd85.Lng))))
    goto label_75;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd82.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_74;

DEFLABEL (label_73)
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng)))
    goto label_59;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_59)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_61;
  (Wrd19.Obj) = (current_block [OBJECT_15_6]);
  goto label_60;

DEFLABEL (label_61)
  (Wrd19.Obj) = (current_block [OBJECT_15_5]);

DEFLABEL (label_60)
DEFLABEL (label_72)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_16])));
  Rhp += 2;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  Wrd75 = Wrd72;
  (Wrd76.Obj) = (Rsp [2]);
  ((Wrd75.pObj) [2]) = (Wrd76.Obj);
  (Wrd74.Obj) = (Rsp [1]);
  ((Wrd75.pObj) [3]) = (Wrd74.Obj);
  (Rsp [2]) = (Wrd71.Obj);
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [0]);
  (Rsp [1]) = (Wrd77.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (label_63)
  (Wrd60.Obj) = (current_block [OBJECT_15_7]);
  (Wrd63.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd63.Lng))))
    goto label_71;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd46.Obj) = (current_block [OBJECT_15_8]);
  (Wrd49.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd49.Lng))))
    goto label_67;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd34.Obj) == (Wrd36.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd37.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_15_9]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_15_10]);
  (Rsp [2]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (label_65)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd10.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_43;

DEFLABEL (label_66)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_43;

DEFLABEL (label_67)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_69)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_70)
  (Wrd115.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 1);

DEFLABEL (label_71)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_74)
  Rsp = (& (Rsp [2]));
  goto label_62;

DEFLABEL (label_75)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_74;

DEFLABEL (label_76)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd110.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd109.Obj) = ((Wrd110.pObj) [0]);
  if (! ((Wrd109.Obj) == (current_block [OBJECT_15_0])))
    goto label_68;
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd114.Obj);
  goto label_70;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_62;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  Wrd18 = Wrd9;
  (Wrd19.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd22.Lng) < 0)
    goto label_79;
  if (! ((Wrd19.Lng) < 0))
    goto label_77;
  (Wrd36.Obj) = (current_block [OBJECT_15_13]);
  (Rsp [3]) = (Wrd36.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_77)
  (Wrd30.Lng) = ((Wrd22.Lng) - (Wrd18.Lng));
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd25.Obj);

DEFLABEL (label_78)
  (Wrd43.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_79)
  if ((Wrd19.Lng) < 0)
    goto label_81;
  Wrd40 = Wrd20;
  goto label_80;

DEFLABEL (label_81)
  (Wrd40.Obj) = (current_block [OBJECT_15_0]);

DEFLABEL (label_80)
DEFLABEL (label_82)
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  goto label_78;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_15_16);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_15_20);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd6.Lng) - (Wrd10.Lng));
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_15_24);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_83)
  if (! ((Wrd11.Lng) < 0))
    goto label_84;
  (Wrd26.Obj) = (current_block [OBJECT_15_13]);
  (Rsp [7]) = (Wrd26.Obj);
  (Wrd27.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [8]) = (Wrd27.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_84)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_15_23);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd8.Lng) + (Wrd9.Lng));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define LABEL_16_12 15
#define LABEL_16_13 17
#define ENVIRONMENT_LABEL_16_3 28
#define DEBUGGING_LABEL_16_2 27
#define OBJECT_16_3 26
#define OBJECT_16_2 25
#define OBJECT_16_1 24
#define OBJECT_16_0 23
#define EXECUTE_CACHE_16_8 19
#define EXECUTE_CACHE_16_6 21
#define FREE_REFERENCES_LABEL_16_0 18
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd63;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      goto procedure_arity_validP_10;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_validP_18)
DEFLABEL (procedure_arity_validP_10)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_35)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_34;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_34;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! ((Wrd67.Lng) > (Wrd69.Lng)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_33;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_23)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  (Wrd27.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_21)
DEFLABEL (label_32)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Wrd28.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_31;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_30)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_29;
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_29;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd55.Lng) > (Wrd56.Lng))
    goto label_27;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_16_3]);
  goto label_26;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
  goto label_24;

DEFLABEL (label_29)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_27;

DEFLABEL (label_31)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_14)
  (Wrd32.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thunkP_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thunkP_4)
DEFLABEL (thunkP_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_0 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto guarantee_thunk_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_thunk_4)
DEFLABEL (guarantee_thunk_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 11
#define DEBUGGING_LABEL_19_2 10
#define OBJECT_19_2 9
#define OBJECT_19_1 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto error_not_thunk_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_thunk_5)
DEFLABEL (error_not_thunk_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_19_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_19_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_of_arityP_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_of_arityP_4)
DEFLABEL (procedure_of_arityP_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 17
#define DEBUGGING_LABEL_21_2 16
#define OBJECT_21_0 15
#define EXECUTE_CACHE_21_9 9
#define EXECUTE_CACHE_21_8 11
#define EXECUTE_CACHE_21_6 13
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto guarantee_procedure_of_arity_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_procedure_of_arity_5)
DEFLABEL (guarantee_procedure_of_arity_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_7 5
#define LABEL_22_8 7
#define LABEL_22_5 9
#define LABEL_22_10 11
#define ENVIRONMENT_LABEL_22_3 22
#define DEBUGGING_LABEL_22_2 21
#define OBJECT_22_1 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_11 13
#define EXECUTE_CACHE_22_9 15
#define EXECUTE_CACHE_22_6 17
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_22_4);
      goto make_procedure_arity_9;

    case 1:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_procedure_arity_12)
DEFLABEL (make_procedure_arity_9)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_22_1]))
    goto label_18;
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! ((Wrd22.Lng) < (Wrd24.Lng)))
    goto label_17;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_7);

DEFLABEL (label_17)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_22_1]))
    goto label_14;
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [1]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define ENVIRONMENT_LABEL_23_3 18
#define DEBUGGING_LABEL_23_2 17
#define OBJECT_23_2 16
#define OBJECT_23_1 15
#define OBJECT_23_0 14
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd60;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto procedure_arityP_10;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arityP_18)
DEFLABEL (procedure_arityP_10)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_22;
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_21;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if (! ((Wrd7.uLng) == 1))
    goto label_32;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_31)
  if (! (INDEX_FIXNUM_P (Wrd10.Obj)))
    goto label_20;
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_29)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_28;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_27)
  if (! (INDEX_FIXNUM_P (Wrd25.Obj)))
    goto label_20;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_26;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_25)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_24;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_23)
  (Wrd52.Obj) = (* (Rsp++));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if ((Wrd53.Lng) < (Wrd54.Lng))
    goto label_20;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_23_2]);
  goto label_19;

DEFLABEL (label_24)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_15)
  (Wrd43.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_13)
  (Wrd25.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto guarantee_procedure_arity_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_procedure_arity_4)
DEFLABEL (guarantee_procedure_arity_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 11
#define DEBUGGING_LABEL_25_2 10
#define OBJECT_25_2 9
#define OBJECT_25_1 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto error_not_procedure_arity_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_procedure_arity_5)
DEFLABEL (error_not_procedure_arity_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_25_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_25_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define ENVIRONMENT_LABEL_26_3 21
#define DEBUGGING_LABEL_26_2 20
#define OBJECT_26_2 19
#define OBJECT_26_1 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_10 15
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd64;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto procedure_arity_min_10;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_min_18)
DEFLABEL (procedure_arity_min_10)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_34;
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_2]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (label_20)
  if (! ((Wrd7.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_32)
  if (! (INDEX_FIXNUM_P (Wrd10.Obj)))
    goto label_19;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_31;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_29;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_28)
  if (! (INDEX_FIXNUM_P (Wrd29.Obj)))
    goto label_19;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_27;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_26)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_24)
  (Wrd56.Obj) = (* (Rsp++));
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd57.Lng) < (Wrd58.Lng))
    goto label_19;

DEFLABEL (label_23)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_21)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd25.pObj) [0]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_15)
  (Wrd47.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rvl = (Wrd5.Obj);
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define LABEL_27_8 11
#define LABEL_27_9 13
#define ENVIRONMENT_LABEL_27_3 21
#define DEBUGGING_LABEL_27_2 20
#define OBJECT_27_2 19
#define OBJECT_27_1 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_10 15
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd64;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_27_4);
      goto procedure_arity_max_10;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_27_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_max_18)
DEFLABEL (procedure_arity_max_10)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_34;
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27_2]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (label_20)
  if (! ((Wrd7.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_32)
  if (! (INDEX_FIXNUM_P (Wrd10.Obj)))
    goto label_19;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_31;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_29;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_28)
  if (! (INDEX_FIXNUM_P (Wrd29.Obj)))
    goto label_19;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_27;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_26)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_24)
  (Wrd56.Obj) = (* (Rsp++));
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd57.Lng) < (Wrd58.Lng))
    goto label_19;

DEFLABEL (label_23)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_21)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd25.pObj) [1]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_15)
  (Wrd47.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rvl = (Wrd5.Obj);
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 6
#define DEBUGGING_LABEL_28_2 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto simple_arityP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_arityP_3)
DEFLABEL (simple_arityP_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd6.Obj))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_28_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define LABEL_29_8 11
#define LABEL_29_9 13
#define ENVIRONMENT_LABEL_29_3 18
#define DEBUGGING_LABEL_29_2 17
#define OBJECT_29_2 16
#define OBJECT_29_1 15
#define OBJECT_29_0 14
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd59;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd55;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_29_4);
      goto general_arityP_9;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_29_9);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (general_arityP_17)
DEFLABEL (general_arityP_9)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  if (! ((Wrd6.uLng) == 1))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_30)
  if (! (INDEX_FIXNUM_P (Wrd9.Obj)))
    goto label_19;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_28)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_27;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_26)
  if (! (INDEX_FIXNUM_P (Wrd24.Obj)))
    goto label_19;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_25;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_24)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_23;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_22)
  (Wrd51.Obj) = (* (Rsp++));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if ((Wrd52.Lng) < (Wrd53.Lng))
    goto label_19;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_29_2]);
  goto label_18;

DEFLABEL (label_23)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_14)
  (Wrd42.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_12)
  (Wrd24.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_28;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 8
#define DEBUGGING_LABEL_30_2 7
#define OBJECT_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_30_4);
      goto Z__primitive_procedureP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__primitive_procedureP_3)
DEFLABEL (Z__primitive_procedureP_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 24L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_30_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 11
#define DEBUGGING_LABEL_31_2 10
#define OBJECT_31_0 9
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto Z__primitive_procedure_name_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__primitive_procedure_name_4)
DEFLABEL (Z__primitive_procedure_name_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 14
#define DEBUGGING_LABEL_32_2 13
#define OBJECT_32_1 12
#define OBJECT_32_0 11
#define EXECUTE_CACHE_32_7 9
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__primitive_procedure_implementedP_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__primitive_procedure_implementedP_5)
DEFLABEL (Z__primitive_procedure_implementedP_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 13
#define DEBUGGING_LABEL_33_2 12
#define OBJECT_33_2 11
#define OBJECT_33_1 10
#define OBJECT_33_0 9
#define EXECUTE_CACHE_33_6 7
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto primitive_procedureP_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_procedureP_4)
DEFLABEL (primitive_procedureP_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [1]) = Rvl;
  (Wrd13.Obj) = (current_block [OBJECT_33_0]);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 24L) < ((unsigned long) (Wrd16.Lng)))
    goto label_5;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_5)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_33_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_5 7
#define LABEL_34_7 9
#define LABEL_34_9 11
#define LABEL_34_11 13
#define ENVIRONMENT_LABEL_34_3 31
#define DEBUGGING_LABEL_34_2 30
#define OBJECT_34_8 29
#define OBJECT_34_7 28
#define OBJECT_34_6 27
#define OBJECT_34_5 26
#define OBJECT_34_4 25
#define OBJECT_34_3 24
#define OBJECT_34_2 23
#define OBJECT_34_1 22
#define OBJECT_34_0 21
#define EXECUTE_CACHE_34_10 15
#define EXECUTE_CACHE_34_12 17
#define EXECUTE_CACHE_34_8 19
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_34_4);
      goto make_primitive_procedure_10;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_primitive_procedure_14)
DEFLABEL (make_primitive_procedure_10)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_34_0]))
    goto label_16;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_15;

DEFLABEL (label_16)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd28.Obj) = (current_block [OBJECT_34_2]);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd31.Lng))))
    goto label_20;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (current_block [OBJECT_34_4]))
    goto label_17;
  (Wrd11.Obj) = (Rsp [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_34_6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_8]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_6);
  goto label_17;

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_34_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_20)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define OBJECT_35_1 14
#define OBJECT_35_0 13
#define EXECUTE_CACHE_35_8 9
#define EXECUTE_CACHE_35_7 11
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto primitive_procedure_name_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_procedure_name_5)
DEFLABEL (primitive_procedure_name_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define ENVIRONMENT_LABEL_36_3 19
#define DEBUGGING_LABEL_36_2 18
#define OBJECT_36_2 17
#define OBJECT_36_1 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_9 11
#define EXECUTE_CACHE_36_8 13
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_36_4);
      goto implemented_primitive_procedureP_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implemented_primitive_procedureP_6)
DEFLABEL (implemented_primitive_procedureP_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 14
#define DEBUGGING_LABEL_37_2 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto Z__primitive_procedure_arg_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__primitive_procedure_arg_6)
DEFLABEL (Z__primitive_procedure_arg_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 11
#define DEBUGGING_LABEL_38_2 10
#define OBJECT_38_3 9
#define OBJECT_38_2 8
#define OBJECT_38_1 7
#define OBJECT_38_0 6
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd23;
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
      goto Z__compound_procedureP_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compound_procedureP_5)
DEFLABEL (Z__compound_procedureP_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd23.Obj) = (current_block [OBJECT_38_0]);
  (Wrd26.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd26.Lng))))
    goto label_12;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_38_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng)))
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_8)
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_38_3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 5
#define DEBUGGING_LABEL_39_2 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_39_4);
      goto Z__compound_procedure_lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compound_procedure_lambda_3)
DEFLABEL (Z__compound_procedure_lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 5
#define DEBUGGING_LABEL_40_2 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_40_4);
      goto Z__compound_procedure_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compound_procedure_environment_3)
DEFLABEL (Z__compound_procedure_environment_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define ENVIRONMENT_LABEL_41_3 16
#define DEBUGGING_LABEL_41_2 15
#define OBJECT_41_3 14
#define OBJECT_41_2 13
#define OBJECT_41_1 12
#define OBJECT_41_0 11
#define EXECUTE_CACHE_41_6 9
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_41_4);
      goto compound_procedureP_3;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compound_procedureP_7)
DEFLABEL (compound_procedureP_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Rsp [0]) = Rvl;
  (Wrd24.Obj) = (current_block [OBJECT_41_0]);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd27.Lng))))
    goto label_14;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.Obj) == (Wrd9.Obj)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_41_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd10.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 9L) < ((unsigned long) (Wrd21.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_10)
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_41_3]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define ENVIRONMENT_LABEL_42_3 14
#define DEBUGGING_LABEL_42_2 13
#define OBJECT_42_4 12
#define OBJECT_42_3 11
#define OBJECT_42_2 10
#define OBJECT_42_1 9
#define OBJECT_42_0 8
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_42_4);
      goto Z__compiled_procedureP_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compiled_procedureP_7)
DEFLABEL (Z__compiled_procedureP_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd15.Obj) = (current_block [OBJECT_42_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_42_3]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_42_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_8 9
#define ENVIRONMENT_LABEL_43_3 19
#define DEBUGGING_LABEL_43_2 18
#define OBJECT_43_4 17
#define OBJECT_43_3 16
#define OBJECT_43_2 15
#define OBJECT_43_1 14
#define OBJECT_43_0 13
#define EXECUTE_CACHE_43_6 11
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_43_4);
      goto compiled_procedureP_5;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedureP_9)
DEFLABEL (compiled_procedureP_5)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [0]) = Rvl;
  (Wrd16.Obj) = (current_block [OBJECT_43_0]);
  (Wrd19.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd19.Lng))))
    goto label_15;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_43_3]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_43_4]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_11 13
#define LABEL_44_13 15
#define LABEL_44_6 17
#define LABEL_44_14 19
#define ENVIRONMENT_LABEL_44_3 34
#define DEBUGGING_LABEL_44_2 33
#define OBJECT_44_7 32
#define OBJECT_44_6 31
#define OBJECT_44_5 30
#define OBJECT_44_4 29
#define OBJECT_44_3 28
#define OBJECT_44_2 27
#define OBJECT_44_1 26
#define OBJECT_44_0 25
#define EXECUTE_CACHE_44_12 21
#define EXECUTE_CACHE_44_10 23
#define FREE_REFERENCES_LABEL_44_0 20
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd71;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd60;
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
      current_block = (Rpc - LABEL_44_4);
      goto compiled_procedure_frame_size_18;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto loop_16;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_44_14);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedure_frame_size_24)
DEFLABEL (compiled_procedure_frame_size_18)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_16;

DEFLABEL (loop_25)
DEFLABEL (loop_16)
  DLINK_INTERRUPT_CHECK (25, LABEL_44_7);
  (Wrd46.Obj) = (current_block [OBJECT_44_1]);
  (Wrd49.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd49.Lng))))
    goto label_35;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd26.Obj) = (current_block [OBJECT_44_3]);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd29.Lng))))
    goto label_31;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd13.Obj) = (current_block [OBJECT_44_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_44_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);
  (Rsp [0]) = (Wrd12.Obj);
  goto loop_16;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_16;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_44_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_29;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_20)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_33)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_34)
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 1);

DEFLABEL (label_35)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_21)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd64.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);
  if (! ((Wrd63.Obj) == (current_block [OBJECT_44_0])))
    goto label_32;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_34;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_42;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd35.Lng) < 0)
    goto label_39;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_37)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_36;
  Rvl = (LONG_TO_FIXNUM (Wrd20.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd24.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 26)
    goto label_41;

DEFLABEL (label_40)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_41)
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = (-1 - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_40;
  Rvl = (LONG_TO_FIXNUM (Wrd28.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_4 5
#define LABEL_45_7 7
#define LABEL_45_6 9
#define ENVIRONMENT_LABEL_45_3 19
#define DEBUGGING_LABEL_45_2 18
#define OBJECT_45_4 17
#define OBJECT_45_3 16
#define OBJECT_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 11
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_45_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_45_4);
      goto Z__compiled_closureP_5;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compiled_closureP_9)
DEFLABEL (Z__compiled_closureP_5)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd15.Obj) = (current_block [OBJECT_45_2]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);
  if (! ((Wrd26.Obj) == (current_block [OBJECT_45_0])))
    goto label_10;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 12
#define DEBUGGING_LABEL_46_2 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto compiled_closureP_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_closureP_5)
DEFLABEL (compiled_closureP_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_9 7
#define LABEL_47_7 9
#define ENVIRONMENT_LABEL_47_3 22
#define DEBUGGING_LABEL_47_2 21
#define OBJECT_47_1 20
#define OBJECT_47_0 19
#define EXECUTE_CACHE_47_11 11
#define EXECUTE_CACHE_47_10 13
#define EXECUTE_CACHE_47_8 15
#define EXECUTE_CACHE_47_6 17
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_47_4);
      goto compiled_closure__entry_5;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_closure__entry_8)
DEFLABEL (compiled_closure__entry_5)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_9);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_7 11
#define ENVIRONMENT_LABEL_48_3 19
#define DEBUGGING_LABEL_48_2 18
#define OBJECT_48_2 17
#define OBJECT_48_1 16
#define OBJECT_48_0 15
#define EXECUTE_CACHE_48_9 13
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_48_4);
      goto compiled_closure_ref_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_closure_ref_9)
DEFLABEL (compiled_closure_ref_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_14;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_14;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_14;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_13)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Wrd6.Obj) = Rvl;

DEFLABEL (label_11)
  (Wrd5.Obj) = (* (Rsp++));
  if (! (INDEX_FIXNUM_P (Wrd5.Obj)))
    goto label_10;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_12)
  (Wrd6.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_11;

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_18;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd41.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_18;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_17)
  if (! (INDEX_FIXNUM_P (Wrd34.Obj)))
    goto label_16;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.pObj) = (& ((Wrd45.pObj) [(Wrd43.Lng)]));
  Rvl = ((Wrd46.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_18)
  (Wrd29.Obj) = (current_block [OBJECT_48_0]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd34.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_5 3
#define LABEL_49_6 5
#define LABEL_49_4 7
#define LABEL_49_7 9
#define LABEL_49_8 11
#define LABEL_49_9 13
#define ENVIRONMENT_LABEL_49_3 19
#define DEBUGGING_LABEL_49_2 18
#define OBJECT_49_3 17
#define OBJECT_49_2 16
#define OBJECT_49_1 15
#define OBJECT_49_0 14
#define FREE_REFERENCES_LABEL_49_0 14
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
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
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_49_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_49_4);
      goto compiled_closure_setB_4;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_49_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_closure_setB_11)
DEFLABEL (compiled_closure_setB_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_15;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_15;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_15;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd52.Obj) = (* (Rsp++));
  if (! (INDEX_FIXNUM_P (Wrd52.Obj)))
    goto label_13;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd56.pObj) = (& ((Wrd55.pObj) [(Wrd54.Lng)]));
  (Wrd57.Obj) = (Rsp [3]);
  ((Wrd56.pObj) [0]) = (Wrd57.Obj);

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_49_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 3);

DEFLABEL (label_9)
  goto label_12;

DEFLABEL (label_15)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_19;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd38.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_19;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));

DEFLABEL (label_18)
  if (! (INDEX_FIXNUM_P (Wrd31.Obj)))
    goto label_17;
  (Wrd41.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.pObj) = (& ((Wrd43.pObj) [(Wrd41.Lng)]));
  (Wrd45.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [0]) = (Wrd45.Obj);
  goto label_12;

DEFLABEL (label_17)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 3);

DEFLABEL (label_8)
  goto label_12;

DEFLABEL (label_19)
  (Wrd26.Obj) = (current_block [OBJECT_49_1]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd31.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 7
#define DEBUGGING_LABEL_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_50_4);
      goto make_entity_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_entity_3)
DEFLABEL (make_entity_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 8
#define DEBUGGING_LABEL_51_2 7
#define OBJECT_51_2 6
#define OBJECT_51_1 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_51_4);
      goto Z__entityP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__entityP_3)
DEFLABEL (Z__entityP_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_51_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 15
#define DEBUGGING_LABEL_52_2 14
#define OBJECT_52_2 13
#define OBJECT_52_1 12
#define OBJECT_52_0 11
#define EXECUTE_CACHE_52_7 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_52_4);
      goto entityP_3;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entityP_7)
DEFLABEL (entityP_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd20.Lng))))
    goto label_13;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_52_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 5
#define DEBUGGING_LABEL_53_2 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_53_4);
      goto entity_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entity_procedure_3)
DEFLABEL (entity_procedure_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 5
#define DEBUGGING_LABEL_54_2 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_54_4);
      goto entity_extra_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entity_extra_3)
DEFLABEL (entity_extra_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_7 5
#define LABEL_55_5 7
#define ENVIRONMENT_LABEL_55_3 16
#define DEBUGGING_LABEL_55_2 15
#define OBJECT_55_1 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_8 9
#define EXECUTE_CACHE_55_6 11
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_55_4);
      goto set_entity_procedureB_2;

    case 1:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_entity_procedureB_5)
DEFLABEL (set_entity_procedureB_2)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 2);

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 6
#define DEBUGGING_LABEL_56_2 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto set_entity_extraB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_entity_extraB_3)
DEFLABEL (set_entity_extraB_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_6 5
#define LABEL_57_5 7
#define LABEL_57_7 9
#define ENVIRONMENT_LABEL_57_3 17
#define DEBUGGING_LABEL_57_2 16
#define OBJECT_57_3 15
#define OBJECT_57_2 14
#define OBJECT_57_1 13
#define OBJECT_57_0 12
#define FREE_REFERENCE_57_0 11
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_57_4);
      goto make_apply_hook_4;

    case 1:
      current_block = (Rpc - LABEL_57_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_apply_hook_8)
DEFLABEL (make_apply_hook_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_11;
  Wrd11 = Wrd15;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 3);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_57_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd9.pObj) [1]);
  (Rsp [0]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 12
#define DEBUGGING_LABEL_58_2 11
#define OBJECT_58_1 10
#define OBJECT_58_0 9
#define EXECUTE_CACHE_58_6 7
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_58_4);
      goto apply_hookP_2;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_hookP_6)
DEFLABEL (apply_hookP_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (current_block [OBJECT_58_0]);
  (Wrd17.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd17.Lng))))
    goto label_9;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 8
#define DEBUGGING_LABEL_59_2 7
#define EXECUTE_CACHE_59_5 5
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_59_4);
      goto Z__entity_is_apply_hookP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__entity_is_apply_hookP_4)
DEFLABEL (Z__entity_is_apply_hookP_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define ENVIRONMENT_LABEL_60_3 14
#define DEBUGGING_LABEL_60_2 13
#define OBJECT_60_2 12
#define OBJECT_60_1 11
#define OBJECT_60_0 10
#define FREE_REFERENCE_60_0 9
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd24;
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
      goto Z__entity_extra_apply_hookP_2;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__entity_extra_apply_hookP_7)
DEFLABEL (Z__entity_extra_apply_hookP_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd24.Obj) = (current_block [OBJECT_60_0]);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 36L) < ((unsigned long) (Wrd27.Lng))))
    goto label_13;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_12;
  Wrd12 = Wrd16;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);
  if (! ((Wrd18.Obj) == (Wrd12.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_60_2]);
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_13)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 5
#define DEBUGGING_LABEL_61_2 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_61_4);
      goto apply_hook_procedure_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_hook_procedure_4)
DEFLABEL (apply_hook_procedure_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd9.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 5
#define DEBUGGING_LABEL_62_2 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_62_4);
      goto apply_hook_extra_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_hook_extra_4)
DEFLABEL (apply_hook_extra_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_7 5
#define LABEL_63_5 7
#define ENVIRONMENT_LABEL_63_3 16
#define DEBUGGING_LABEL_63_2 15
#define OBJECT_63_1 14
#define OBJECT_63_0 13
#define EXECUTE_CACHE_63_8 9
#define EXECUTE_CACHE_63_6 11
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_63_4);
      goto set_apply_hook_procedureB_3;

    case 1:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_apply_hook_procedureB_6)
DEFLABEL (set_apply_hook_procedureB_3)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);
  (Rsp [0]) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 2);

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_7);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 6
#define DEBUGGING_LABEL_64_2 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_64_4);
      goto set_apply_hook_extraB_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_apply_hook_extraB_4)
DEFLABEL (set_apply_hook_extraB_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define ENVIRONMENT_LABEL_65_3 17
#define DEBUGGING_LABEL_65_2 16
#define OBJECT_65_2 15
#define OBJECT_65_1 14
#define OBJECT_65_0 13
#define EXECUTE_CACHE_65_8 9
#define EXECUTE_CACHE_65_7 11
#define FREE_REFERENCES_LABEL_65_0 8
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_65_4);
      goto make_arity_dispatched_procedure_3;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_arity_dispatched_procedure_6)
DEFLABEL (make_arity_dispatched_procedure_3)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define LABEL_66_9 11
#define ENVIRONMENT_LABEL_66_3 23
#define DEBUGGING_LABEL_66_2 22
#define OBJECT_66_6 21
#define OBJECT_66_5 20
#define OBJECT_66_4 19
#define OBJECT_66_3 18
#define OBJECT_66_2 17
#define OBJECT_66_1 16
#define OBJECT_66_0 15
#define EXECUTE_CACHE_66_8 13
#define FREE_REFERENCES_LABEL_66_0 12
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_66_4);
      goto arity_dispatched_procedureP_9;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (arity_dispatched_procedureP_15)
DEFLABEL (arity_dispatched_procedureP_9)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd32.Obj) = (current_block [OBJECT_66_0]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd35.Lng))))
    goto label_25;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd14.uLng) == 10))
    goto label_16;
  if (! ((Wrd14.uLng) == 10))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_23)
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! ((Wrd27.Lng) > 0))
    goto label_16;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_66_3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_66_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd14.Lng))))
    goto label_22;
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_21)
  (Wrd21.Obj) = (* (Rsp++));
  if ((Wrd8.Obj) == (Wrd21.Obj))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_66_6]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd17.Obj) = (current_block [OBJECT_66_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 2);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 1);

DEFLABEL (label_11)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define LABEL_67_9 11
#define LABEL_67_11 13
#define LABEL_67_12 15
#define LABEL_67_13 17
#define LABEL_67_14 19
#define LABEL_67_15 21
#define ENVIRONMENT_LABEL_67_3 34
#define DEBUGGING_LABEL_67_2 33
#define OBJECT_67_5 32
#define OBJECT_67_4 31
#define OBJECT_67_3 30
#define OBJECT_67_2 29
#define OBJECT_67_1 28
#define OBJECT_67_0 27
#define EXECUTE_CACHE_67_10 23
#define EXECUTE_CACHE_67_8 25
#define FREE_REFERENCES_LABEL_67_0 22
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uproc_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_67_4);
      goto procedure_chains_to_23;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto loop_21;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_67_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_67_11);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_67_12);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_67_13);
      goto per_arity_15;

    case 8:
      current_block = (Rpc - LABEL_67_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_67_15);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_chains_to_30)
DEFLABEL (procedure_chains_to_23)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_21;

DEFLABEL (loop_31)
DEFLABEL (loop_21)
  DLINK_INTERRUPT_CHECK (25, LABEL_67_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_41;
  (Wrd22.Obj) = (current_block [OBJECT_67_1]);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd25.Lng))))
    goto label_40;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd10.Obj) == (Wrd12.Obj)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);
  (Rsp [0]) = (Wrd12.Obj);
  goto loop_21;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_67_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  (Rsp [0]) = (Wrd28.Obj);
  goto loop_21;

DEFLABEL (label_34)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  (Wrd27.Obj) = (current_block [OBJECT_67_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto per_arity_15;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 1);

DEFLABEL (label_26)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_40)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_25)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_67_0]);
  goto label_39;

DEFLABEL (per_arity_32)
DEFLABEL (per_arity_15)
  DLINK_INTERRUPT_CHECK (25, LABEL_67_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_49;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_49;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd67.Lng) < (Wrd69.Lng))
    goto label_44;

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_44)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_48;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_48;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd38.Lng))))
    goto label_48;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd29.pObj) = (& ((Wrd36.pObj) [(Wrd26.Lng)]));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_47)
  (Wrd50.Obj) = (Rsp [0]);
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [7]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd55.pObj)));
  (Rsp [1]) = (Wrd57.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  (Wrd59.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd59.Obj));

DEFLABEL (label_46)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd65.Lng) = ((Wrd64.Lng) + 1L);
  (Wrd62.Obj) = (LONG_TO_FIXNUM (Wrd65.Lng));
  (Rsp [0]) = (Wrd62.Obj);
  goto per_arity_15;

DEFLABEL (label_48)
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_5]), 2);

DEFLABEL (label_28)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  (Wrd9.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd9.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_67_12);
  (Wrd70.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd70.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rvl = (current_block [OBJECT_67_0]);
  goto label_42;

INVOKE_INTERFACE_TARGET_0
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
uproc_so_20831aab9d1d6d10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
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
	0,
	1,
	1,
	1,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 67)
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

static const struct liarc_code_S arr_decl_uproc_so_20831aab9d1d6d10 [67] =
  {
    { "uproc_so_code_1", 7, uproc_so_code_1 },
    { "uproc_so_code_2", 2, uproc_so_code_2 },
    { "uproc_so_code_3", 1, uproc_so_code_3 },
    { "uproc_so_code_4", 2, uproc_so_code_4 },
    { "uproc_so_code_5", 1, uproc_so_code_5 },
    { "uproc_so_code_6", 2, uproc_so_code_6 },
    { "uproc_so_code_7", 1, uproc_so_code_7 },
    { "uproc_so_code_8", 2, uproc_so_code_8 },
    { "uproc_so_code_9", 1, uproc_so_code_9 },
    { "uproc_so_code_10", 7, uproc_so_code_10 },
    { "uproc_so_code_11", 7, uproc_so_code_11 },
    { "uproc_so_code_12", 9, uproc_so_code_12 },
    { "uproc_so_code_13", 7, uproc_so_code_13 },
    { "uproc_so_code_14", 3, uproc_so_code_14 },
    { "uproc_so_code_15", 15, uproc_so_code_15 },
    { "uproc_so_code_16", 8, uproc_so_code_16 },
    { "uproc_so_code_17", 2, uproc_so_code_17 },
    { "uproc_so_code_18", 2, uproc_so_code_18 },
    { "uproc_so_code_19", 1, uproc_so_code_19 },
    { "uproc_so_code_20", 2, uproc_so_code_20 },
    { "uproc_so_code_21", 3, uproc_so_code_21 },
    { "uproc_so_code_22", 5, uproc_so_code_22 },
    { "uproc_so_code_23", 6, uproc_so_code_23 },
    { "uproc_so_code_24", 2, uproc_so_code_24 },
    { "uproc_so_code_25", 1, uproc_so_code_25 },
    { "uproc_so_code_26", 6, uproc_so_code_26 },
    { "uproc_so_code_27", 6, uproc_so_code_27 },
    { "uproc_so_code_28", 1, uproc_so_code_28 },
    { "uproc_so_code_29", 6, uproc_so_code_29 },
    { "uproc_so_code_30", 1, uproc_so_code_30 },
    { "uproc_so_code_31", 2, uproc_so_code_31 },
    { "uproc_so_code_32", 3, uproc_so_code_32 },
    { "uproc_so_code_33", 2, uproc_so_code_33 },
    { "uproc_so_code_34", 6, uproc_so_code_34 },
    { "uproc_so_code_35", 3, uproc_so_code_35 },
    { "uproc_so_code_36", 4, uproc_so_code_36 },
    { "uproc_so_code_37", 3, uproc_so_code_37 },
    { "uproc_so_code_38", 2, uproc_so_code_38 },
    { "uproc_so_code_39", 1, uproc_so_code_39 },
    { "uproc_so_code_40", 1, uproc_so_code_40 },
    { "uproc_so_code_41", 3, uproc_so_code_41 },
    { "uproc_so_code_42", 3, uproc_so_code_42 },
    { "uproc_so_code_43", 4, uproc_so_code_43 },
    { "uproc_so_code_44", 9, uproc_so_code_44 },
    { "uproc_so_code_45", 4, uproc_so_code_45 },
    { "uproc_so_code_46", 2, uproc_so_code_46 },
    { "uproc_so_code_47", 4, uproc_so_code_47 },
    { "uproc_so_code_48", 5, uproc_so_code_48 },
    { "uproc_so_code_49", 6, uproc_so_code_49 },
    { "uproc_so_code_50", 1, uproc_so_code_50 },
    { "uproc_so_code_51", 1, uproc_so_code_51 },
    { "uproc_so_code_52", 3, uproc_so_code_52 },
    { "uproc_so_code_53", 1, uproc_so_code_53 },
    { "uproc_so_code_54", 1, uproc_so_code_54 },
    { "uproc_so_code_55", 3, uproc_so_code_55 },
    { "uproc_so_code_56", 1, uproc_so_code_56 },
    { "uproc_so_code_57", 4, uproc_so_code_57 },
    { "uproc_so_code_58", 2, uproc_so_code_58 },
    { "uproc_so_code_59", 1, uproc_so_code_59 },
    { "uproc_so_code_60", 3, uproc_so_code_60 },
    { "uproc_so_code_61", 1, uproc_so_code_61 },
    { "uproc_so_code_62", 1, uproc_so_code_62 },
    { "uproc_so_code_63", 3, uproc_so_code_63 },
    { "uproc_so_code_64", 1, uproc_so_code_64 },
    { "uproc_so_code_65", 3, uproc_so_code_65 },
    { "uproc_so_code_66", 5, uproc_so_code_66 },
    { "uproc_so_code_67", 10, uproc_so_code_67 }
  };

int
decl_uproc_so_20831aab9d1d6d10 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_uproc_so_20831aab9d1d6d10);
  return (0);
}

DECLARE_COMPILED_CODE ("uproc.so", 3, decl_uproc_so_20831aab9d1d6d10, uproc_so_20831aab9d1d6d10)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_uproc_so_data_20831aab9d1d6d10 [6301] =
  "\x68\x6c\xc5\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\xc1\xb9\x02"
  "\x02\x06\x07\x02\xc2\xba\x02\x28\x0d\xbb\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82"
  "\x88\x1d\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbf\x1d\xb0\x83\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x06\x1d\x0c\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x0d\x1c\x0c\x1c\x02\x06\x07\x02\x02\xb2\x02\x80\x28"
  "\xb3\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x0d\x1c"
  "\x1b\x02\x06\x07\x02\x02\xb2\x02\x80\x28\xb3\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x0d\x1c\x02\x06"
  "\x07\x02\x02\xb2\x02\x80\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x02\x06\x07"
  "\x02\x02\xb2\x02\x80\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x02\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\xb1\x0d\x1c\x0c\x02\x02\x06\x07"
  "\x02\x02\xb2\x02\x80\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x1c\xc1\x1c\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28"
  "\xb5\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x07\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x07"
  "\x02\x28\xb3\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x0c\x0c\x07\xb2\x02\x1b\x1d\x28\x1b\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\xb2\x02\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x02\xb2\x02"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x80\xb1\xb2\x02\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x80\xb1\xb2\x02\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\xb1\x0c\x0d"
  "\x1c\x02\xb2\x02\x80\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\xb2\x02\xc1\x1c\x80\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x1c\x28\xb3\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x82\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\xc3\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb2\x07\x02\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\xc2\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1b\xc3\x02\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x02\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xc2"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x1c\x02\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xc2\x1c\x80\x1b\xc1\x1c\xb2\x02\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x1b\xb2\x02\x07\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xba\x88\xb2\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xc1\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb1\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb7\x2a\xb4\x2a\x17\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x0d\x1b\x0d\x1b\x1b\x1b\xb3\x0d"
  "\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x0d\xb6\x1b\xb5\x17\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x75\x70\x72\x6f\x63\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74"
  "\x72\x79\x2d\x6b\x69\x6e\x64\x29\x19\x0a\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x10\x03\x0e\x73\x6b\x69\x70\x2d\x65"
  "\x6e\x74\x69\x74\x69\x65\x73\x02\x0a\x10\x81\x85\x02\x09\x0e\x81"
  "\x85\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x83"
  "\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x0f\x1e\x02\x02\x03\x0b"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x14\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03"
  "\x0c\x06\x81\x85\x02\x0b\x04\x84\x04\x05\x0e\x02\x08\x0a\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77"
  "\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x09\x02\x0d\x04\x84\x04\x03\x0c\x0a\x02\x02\x03\x14\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x0b\x04\x1d\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x0c\x03\x0f\x06\x81\x85\x02\x0e\x04\x84\x04\x05\x0e\x0d\x02"
  "\x08\x13\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x20\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x05\x09\x02\x10\x04\x84\x04\x03\x0c\x0e\x02\x02"
  "\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x0f\x04\x1e\x65\x72\x72\x6f\x72\x3a\x6e"
  "\x6f\x74\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x10\x03\x12\x06\x81\x85\x02\x11\x04\x84"
  "\x04\x05\x0e\x11\x02\x08\x08\x14\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x05\x09\x02\x13\x04"
  "\x84\x04\x03\x0c\x12\x02\x09\x02\x03\x14\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x13\x04\x1d"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x14\x03\x15\x06"
  "\x81\x85\x02\x14\x04\x84\x04\x05\x0e\x15\x02\x0a\x08\x13\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x05\x09\x02\x16\x04\x84\x04\x03\x0c\x16\x02\x0b\x11\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61\x17\x0a\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x18\x29\x0a\x10\x19\x03\x03\x1a"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2f\x6c\x61\x6d\x62\x64\x61\x19\x05\x09\x04\x1d\x10\x81"
  "\x85\x02\x1c\x0e\x81\x83\x02\x1b\x0c\x81\x85\x02\x1a\x0a\x81\x83"
  "\x02\x19\x08\x81\x85\x02\x18\x06\x81\x85\x02\x17\x04\x83\x04\x0f"
  "\x24\x1a\x02\x0c\x16\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1b\x18\x29\x0a\x10\x19"
  "\x03\x03\x1f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x1c\x05\x09\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d"
  "\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x1d\x05"
  "\x24\x10\x81\x85\x02\x23\x0e\x81\x83\x02\x22\x0c\x81\x85\x02\x21"
  "\x0a\x81\x83\x02\x20\x08\x81\x85\x02\x1f\x06\x81\x85\x02\x1e\x04"
  "\x83\x04\x0f\x26\x1e\x02\x0d\x18\x15\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x1f\x29\x0a"
  "\x10\x19\x03\x03\x19\x05\x09\x04\x1d\x03\x1c\x06\x2d\x14\x81\x87"
  "\x02\x2c\x12\x81\x87\x02\x2b\x10\x81\x87\x02\x2a\x0e\x81\x83\x02"
  "\x29\x0c\x81\x87\x02\x28\x0a\x81\x85\x02\x27\x08\x81\x87\x02\x26"
  "\x06\x81\x87\x02\x25\x04\x84\x06\x13\x2c\x1c\x02\x0e\x18\x29\x0a"
  "\x10\x19\x03\x05\x09\x03\x34\x10\x81\x8d\x02\x33\x0e\x81\x83\x02"
  "\x32\x0c\x81\x8d\x02\x31\x0a\x81\x8b\x02\x30\x08\x81\x8d\x02\x2f"
  "\x06\x81\x8d\x02\x2e\x04\x87\x0c\x0f\x21\x19\x02\x0f\x11\x03\x1a"
  "\x25\x65\x6e\x74\x69\x74\x79\x2d\x65\x78\x74\x72\x61\x2f\x61\x70"
  "\x70\x6c\x79\x2d\x68\x6f\x6f\x6b\x3f\x18\x03\x03\x37\x08\x81\x83"
  "\x02\x36\x06\x81\x83\x02\x35\x04\x83\x04\x07\x11\x20\x02\x10\x1a"
  "\x49\x6c\x6c\x65\x67\x61\x6c\x20\x61\x72\x69\x74\x79\x20\x66\x6f"
  "\x72\x20\x65\x6e\x74\x69\x74\x79\x3a\x1a\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72"
  "\x69\x74\x79\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72"
  "\x69\x74\x79\x21\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x11\x29"
  "\x0a\x10\x19\x05\x09\x03\x18\x04\x12\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x07\x6c\x65\x6e\x67"
  "\x74\x68\x04\x06\x65\x72\x72\x6f\x72\x22\x04\x08\x66\x69\x78\x3a"
  "\x6d\x61\x78\x07\x46\x20\x81\x93\x02\x45\x1e\x81\x93\x02\x44\x1c"
  "\x81\x91\x02\x43\x1a\x81\x87\x02\x42\x18\x81\x87\x02\x41\x16\x81"
  "\x91\x02\x40\x14\x81\x87\x02\x3f\x12\x81\x87\x02\x3e\x10\x81\x87"
  "\x02\x3d\x0e\x81\x83\x02\x3c\x0c\x81\x87\x02\x3b\x0a\x81\x87\x02"
  "\x3a\x08\x81\x87\x02\x39\x06\x81\x87\x02\x38\x04\x83\x04\x1f\x3d"
  "\x23\x02\x11\x04\x63\x64\x72\x24\x04\x63\x61\x72\x25\x17\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x76\x61"
  "\x6c\x69\x64\x3f\x26\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x27\x03\x21"
  "\x03\x4e\x12\x81\x89\x02\x4d\x10\x81\x89\x02\x4c\x0e\x81\x87\x02"
  "\x4b\x0c\x81\x87\x02\x4a\x0a\x81\x87\x02\x49\x08\x81\x85\x02\x48"
  "\x06\x81\x85\x02\x47\x04\x84\x06\x11\x1d\x28\x02\x12\x03\x04\x26"
  "\x03\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x05\x0e\x29\x02\x13\x02"
  "\x03\x07\x74\x68\x75\x6e\x6b\x3f\x2a\x04\x10\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x74\x68\x75\x6e\x6b\x2b\x03\x52\x06\x81\x85"
  "\x02\x51\x04\x84\x04\x05\x0e\x2c\x02\x14\x08\x06\x74\x68\x75\x6e"
  "\x6b\x05\x09\x02\x53\x04\x84\x04\x03\x0c\x2d\x02\x15\x03\x04\x26"
  "\x03\x55\x06\x81\x85\x02\x54\x04\x84\x06\x05\x0d\x2e\x02\x16\x02"
  "\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x04\x26\x04\x1d\x04\x58\x08\x81\x87\x02"
  "\x57\x06\x81\x87\x02\x56\x04\x85\x08\x07\x12\x30\x02\x17\x08\x15"
  "\x6d\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x31\x04\x27\x04\x1d\x04\x05\x65\x71\x76\x3f\x04"
  "\x5d\x0c\x81\x89\x02\x5c\x0a\x81\x87\x02\x5b\x08\x81\x87\x02\x5a"
  "\x06\x81\x87\x02\x59\x04\x85\x04\x0b\x17\x27\x02\x18\x24\x25\x63"
  "\x0e\x81\x85\x02\x62\x0c\x81\x83\x02\x61\x0a\x81\x83\x02\x60\x08"
  "\x81\x83\x02\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x0d\x13\x32\x02"
  "\x19\x02\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72"
  "\x69\x74\x79\x3f\x33\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79"
  "\x34\x03\x65\x06\x81\x85\x02\x64\x04\x84\x04\x05\x0e\x35\x02\x1a"
  "\x08\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x61\x72\x69\x74"
  "\x79\x05\x09\x02\x66\x04\x84\x04\x03\x0c\x36\x02\x1b\x14\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x69"
  "\x6e\x37\x24\x25\x04\x34\x02\x6c\x0e\x81\x85\x02\x6b\x0c\x81\x83"
  "\x02\x6a\x0a\x81\x83\x02\x69\x08\x81\x83\x02\x68\x06\x81\x83\x02"
  "\x67\x04\x83\x04\x0d\x16\x38\x02\x1c\x14\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x61\x78\x39\x24\x25"
  "\x04\x34\x02\x72\x0e\x81\x85\x02\x71\x0c\x81\x83\x02\x70\x0a\x81"
  "\x83\x02\x6f\x08\x81\x83\x02\x6e\x06\x81\x83\x02\x6d\x04\x83\x04"
  "\x0d\x16\x3a\x02\x1d\x73\x04\x83\x04\x03\x3b\x02\x1e\x24\x25\x79"
  "\x0e\x81\x85\x02\x78\x0c\x81\x83\x02\x77\x0a\x81\x83\x02\x76\x08"
  "\x81\x83\x02\x75\x06\x81\x83\x02\x74\x04\x83\x04\x0d\x13\x25\x02"
  "\x1f\x19\x7a\x04\x83\x04\x03\x24\x02\x20\x13\x67\x65\x74\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6e\x61\x6d\x65\x3c\x03\x07"
  "\x69\x6e\x74\x65\x72\x6e\x3d\x02\x7c\x06\x81\x83\x02\x7b\x04\x83"
  "\x04\x05\x0c\x3e\x02\x21\x16\x67\x65\x74\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x3c\x03\x3d"
  "\x02\x7f\x08\x81\x85\x02\x7e\x06\x81\x83\x02\x7d\x04\x83\x04\x07"
  "\x0f\x40\x02\x22\x19\x03\x02\x81\x01\x06\x81\x85\x02\x80\x01\x04"
  "\x83\x04\x05\x0e\x41\x02\x23\x2d\x4d\x41\x4b\x45\x2d\x50\x52\x49"
  "\x4d\x49\x54\x49\x56\x45\x2d\x50\x52\x4f\x43\x45\x44\x55\x52\x45"
  "\x3a\x20\x69\x6e\x63\x6f\x6e\x73\x69\x73\x74\x65\x6e\x74\x20\x61"
  "\x72\x69\x74\x79\x06\x20\x6e\x65\x77\x3a\x06\x20\x6f\x6c\x64\x3a"
  "\x27\x4d\x41\x4b\x45\x2d\x50\x52\x49\x4d\x49\x54\x49\x56\x45\x2d"
  "\x50\x52\x4f\x43\x45\x44\x55\x52\x45\x3a\x20\x75\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6e\x61\x6d\x65\x19\x3f\x08\x04\x22\x08\x22\x03\x15"
  "\x65\x72\x72\x6f\x72\x2d\x69\x72\x72\x69\x74\x61\x6e\x74\x2f\x6e"
  "\x6f\x69\x73\x65\x04\x87\x01\x0e\x81\x91\x02\x86\x01\x0c\x81\x8d"
  "\x02\x85\x01\x0a\x81\x89\x02\x84\x01\x08\x81\x87\x02\x83\x01\x06"
  "\x81\x89\x02\x82\x01\x04\x84\x04\x0d\x20\x22\x02\x24\x3c\x19\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6e\x61\x6d\x65\x42\x04\x19\x25\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x67\x43\x03\x3d\x03\x8a\x01\x08\x81\x85\x02\x89\x01\x06\x81"
  "\x83\x02\x88\x01\x04\x83\x04\x07\x11\x44\x02\x25\x3c\x3f\x21\x69"
  "\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x3f"
  "\x04\x43\x03\x3d\x03\x8e\x01\x0a\x81\x87\x02\x8d\x01\x08\x81\x85"
  "\x02\x8c\x01\x06\x81\x83\x02\x8b\x01\x04\x83\x04\x09\x14\x3d\x02"
  "\x26\x03\x04\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3c\x03\x91\x01\x08\x81\x87\x02\x90\x01\x06\x81\x85\x02\x8f"
  "\x01\x04\x84\x06\x07\x0f\x45\x02\x27\x0a\x10\x93\x01\x06\x81\x83"
  "\x02\x92\x01\x04\x83\x04\x05\x0c\x46\x02\x28\x94\x01\x04\x83\x04"
  "\x03\x47\x02\x29\x95\x01\x04\x83\x04\x03\x48\x02\x2a\x0a\x10\x03"
  "\x02\x98\x01\x08\x81\x83\x02\x97\x01\x06\x81\x83\x02\x96\x01\x04"
  "\x83\x04\x07\x11\x49\x02\x2b\x29\x9b\x01\x08\x81\x83\x02\x9a\x01"
  "\x06\x81\x83\x02\x99\x01\x04\x83\x04\x07\x0f\x4a\x02\x2c\x29\x03"
  "\x02\x9f\x01\x0a\x81\x83\x02\x9e\x01\x08\x81\x83\x02\x9d\x01\x06"
  "\x81\x83\x02\x9c\x01\x04\x83\x04\x09\x14\x4b\x02\x2d\x13\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x1e\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x66\x72\x61\x6d\x65\x2d\x73\x69\x7a\x65\x4c\x11"
  "\x29\x05\x09\x03\x18\x03\xa8\x01\x14\x81\x83\x02\xa7\x01\x12\xfd"
  "\xff\x03\xa6\x01\x10\xfd\xff\x03\xa5\x01\x0e\xfd\xff\x03\xa4\x01"
  "\x0c\xfd\xff\x03\xa3\x01\x0a\xfd\xff\x03\xa2\x01\x08\xff\xff\x03"
  "\xa1\x01\x06\xfd\xff\x03\xa0\x01\x04\x83\x04\x13\x23\x4d\x02\x2e"
  "\x29\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b\x4e\x03"
  "\x26\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x6d\x61\x6e\x69\x66\x65\x73\x74\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x3f\x02\xac\x01\x0a\x81\x83\x02\xab\x01\x08"
  "\x81\x83\x02\xaa\x01\x06\x83\x04\xa9\x01\x04\x81\x83\x02\x09\x14"
  "\x4f\x02\x2f\x03\x03\x13\x25\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x3f\x50\x03\xae\x01\x06\x81\x83\x02"
  "\xad\x01\x04\x83\x04\x05\x0d\x51\x02\x30\x11\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x20\x63\x6c\x6f\x73\x75\x72\x65\x18\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x3e\x65\x6e"
  "\x74\x72\x79\x52\x03\x03\x50\x05\x09\x03\x19\x25\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x3e\x65\x6e"
  "\x74\x72\x79\x09\x05\xb2\x01\x0a\x81\x85\x02\xb1\x01\x08\x81\x85"
  "\x02\xb0\x01\x06\x81\x83\x02\xaf\x01\x04\x83\x04\x09\x17\x53\x02"
  "\x31\x4e\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x72\x65\x66\x03\x12\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x54\x02\xb7\x01\x0c\x81"
  "\x89\x02\xb6\x01\x0a\x81\x8b\x02\xb5\x01\x08\x81\x87\x02\xb4\x01"
  "\x06\x81\x87\x02\xb3\x01\x04\x85\x08\x0b\x14\x55\x02\x32\x4e\x02"
  "\x16\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x73\x65\x74\x21\xbd\x01\x0e\x81\x89\x02\xbc\x01\x0c\x81"
  "\x89\x02\xbb\x01\x0a\x81\x89\x02\xba\x01\x08\x86\x0a\xb9\x01\x06"
  "\x81\x89\x02\xb8\x01\x04\x81\x8b\x02\x0d\x14\x4e\x02\x33\x11\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x56"
  "\x11\xbe\x01\x04\x84\x06\x03\x57\x02\x34\x11\xbf\x01\x04\x83\x04"
  "\x03\x58\x02\x35\x11\x03\x18\x02\xc2\x01\x08\x81\x83\x02\xc1\x01"
  "\x06\x81\x83\x02\xc0\x01\x04\x83\x04\x07\x10\x59\x02\x36\xc3\x01"
  "\x04\x83\x04\x03\x5a\x02\x37\xc4\x01\x04\x83\x04\x03\x5b\x02\x38"
  "\x16\x73\x65\x74\x2d\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x21\x5c\x15\x73\x79\x73\x74\x65\x6d\x2d\x70"
  "\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x61\x72\x21\x04\x14\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x68\x61\x69\x6e\x73\x2d\x74"
  "\x6f\x5d\x04\x1d\x03\xc7\x01\x08\x81\x85\x02\xc6\x01\x06\x81\x85"
  "\x02\xc5\x01\x04\x84\x06\x07\x11\x5e\x02\x39\x15\x73\x79\x73\x74"
  "\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\xc8\x01\x04\x84\x06\x03\x5f\x02\x3a\x06\x61\x70\x70\x6c\x79\x56"
  "\x0b\x68\x75\x6e\x6b\x33\x2d\x63\x6f\x6e\x73\x11\x0f\x61\x70\x70"
  "\x6c\x79\x2d\x68\x6f\x6f\x6b\x2d\x74\x61\x67\x60\x02\xcc\x01\x0a"
  "\xfe\x05\xcb\x01\x08\x81\x87\x02\xca\x01\x06\x81\x8d\x02\xc9\x01"
  "\x04\x84\x06\x09\x12\x61\x02\x3b\x11\x03\x18\x02\xce\x01\x06\x81"
  "\x83\x02\xcd\x01\x04\x83\x04\x05\x0d\x62\x02\x3c\x03\x18\x02\xcf"
  "\x01\x04\x83\x04\x03\x63\x02\x3d\x25\x60\x02\xd2\x01\x08\x81\x83"
  "\x02\xd1\x01\x06\x81\x83\x02\xd0\x01\x04\x83\x04\x07\x0f\x64\x02"
  "\x3e\xd3\x01\x04\x83\x04\x03\x65\x02\x3f\xd4\x01\x04\x83\x04\x03"
  "\x66\x02\x40\x1a\x73\x65\x74\x2d\x61\x70\x70\x6c\x79\x2d\x68\x6f"
  "\x6f\x6b\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x67\x17\x73"
  "\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d"
  "\x63\x78\x72\x31\x21\x04\x5d\x04\x1d\x03\xd7\x01\x08\x81\x85\x02"
  "\xd6\x01\x06\x81\x85\x02\xd5\x01\x04\x84\x06\x07\x11\x1d\x02\x41"
  "\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65"
  "\x74\x2d\x63\x78\x72\x32\x21\xd8\x01\x04\x84\x06\x03\x68\x02\x42"
  "\x56\x15\x61\x72\x69\x74\x79\x2d\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x65\x72\x2d\x74\x61\x67\x56\x11\x03\x13\x66\x69\x78\x65\x64\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x73\x2d\x69\x74\x65\x6d\x69\x03\x0d\x6c"
  "\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x03\xdb\x01\x08\x81"
  "\x89\x02\xda\x01\x06\x81\x87\x02\xd9\x01\x04\xfe\x05\x07\x12\x6a"
  "\x02\x43\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x6b\x56\x0e"
  "\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x56\x11\x03"
  "\x69\x02\xe0\x01\x0c\x81\x85\x02\xdf\x01\x0a\x81\x83\x02\xde\x01"
  "\x08\x81\x83\x02\xdd\x01\x06\x81\x83\x02\xdc\x01\x04\x83\x04\x0b"
  "\x18\x69\x02\x44\x6b\x56\x11\x03\x18\x03\x1c\x61\x72\x69\x74\x79"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x6b\x03\xea\x01\x16\xfd\xff\x03\xe9\x01"
  "\x14\xfd\xff\x03\xe8\x01\x12\xff\xff\x03\xe7\x01\x10\xfd\xff\x03"
  "\xe6\x01\x0e\xfd\xff\x03\xe5\x01\x0c\xfd\xff\x03\xe4\x01\x0a\xfd"
  "\xff\x03\xe3\x01\x08\xfd\xff\x03\xe2\x01\x06\xff\xff\x03\xe1\x01"
  "\x04\x84\x06\x15\x23\x56\x44\x56\x04\x69\x04\x6a\x04\x68\x04\x1d"
  "\x04\x66\x04\x65\x04\x0f\x61\x70\x70\x6c\x79\x2d\x68\x6f\x6f\x6b"
  "\x2d\x74\x61\x67\x64\x04\x63\x04\x62\x04\x61\x04\x5f\x04\x5e\x04"
  "\x5b\x04\x5a\x04\x59\x04\x58\x04\x57\x04\x4e\x08\x55\x04\x53\x04"
  "\x51\x04\x18\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x3e\x65\x6e\x74\x72\x79\x4f\x06\x4d\x04\x4b\x04"
  "\x4a\x04\x49\x04\x48\x04\x47\x04\x46\x04\x45\x04\x3d\x04\x44\x04"
  "\x22\x04\x41\x04\x40\x04\x3e\x04\x24\x04\x25\x04\x3b\x04\x3a\x04"
  "\x38\x04\x36\x04\x35\x04\x32\x04\x27\x04\x30\x04\x2e\x04\x2d\x04"
  "\x2c\x04\x29\x04\x28\x04\x23\x04\x20\x04\x19\x04\x1c\x04\x1e\x04"
  "\x1a\x04\x16\x04\x15\x04\x12\x04\x11\x04\x0e\x04\x0d\x04\x0a\x04"
  "\x04\x04\x47\x5d\x6b\x20\x6d\x61\x6b\x65\x2d\x61\x72\x69\x74\x79"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x16\x73\x65\x74\x2d\x61\x70\x70\x6c\x79\x2d"
  "\x68\x6f\x6f\x6b\x2d\x65\x78\x74\x72\x61\x21\x67\x11\x61\x70\x70"
  "\x6c\x79\x2d\x68\x6f\x6f\x6b\x2d\x65\x78\x74\x72\x61\x15\x61\x70"
  "\x70\x6c\x79\x2d\x68\x6f\x6f\x6b\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x60\x18\x17\x25\x65\x6e\x74\x69\x74\x79\x2d\x69\x73\x2d"
  "\x61\x70\x70\x6c\x79\x2d\x68\x6f\x6f\x6b\x3f\x0c\x61\x70\x70\x6c"
  "\x79\x2d\x68\x6f\x6f\x6b\x3f\x10\x6d\x61\x6b\x65\x2d\x61\x70\x70"
  "\x6c\x79\x2d\x68\x6f\x6f\x6b\x12\x73\x65\x74\x2d\x65\x6e\x74\x69"
  "\x74\x79\x2d\x65\x78\x74\x72\x61\x21\x5c\x0d\x65\x6e\x74\x69\x74"
  "\x79\x2d\x65\x78\x74\x72\x61\x11\x65\x6e\x74\x69\x74\x79\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x08\x65\x6e\x74\x69\x74\x79\x3f"
  "\x09\x25\x65\x6e\x74\x69\x74\x79\x3f\x0c\x6d\x61\x6b\x65\x2d\x65"
  "\x6e\x74\x69\x74\x79\x16\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2f\x73\x65\x74\x21\x15\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2f\x72\x65\x66"
  "\x52\x54\x09\x50\x4c\x13\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x65\x6e\x74\x72\x79\x2d\x6b\x69\x6e\x64\x15\x25\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x0b"
  "\x20\x25\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x1b\x25\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61\x15\x25\x63\x6f\x6d"
  "\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x43\x3f\x42\x19\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0f\x22\x25\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x3f\x1a"
  "\x25\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x16\x25\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x0f"
  "\x67\x65\x6e\x65\x72\x61\x6c\x2d\x61\x72\x69\x74\x79\x3f\x0e\x73"
  "\x69\x6d\x70\x6c\x65\x2d\x61\x72\x69\x74\x79\x3f\x39\x37\x34\x1a"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x33\x31\x1d\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6f\x66\x2d\x61\x72\x69\x74\x79\x14\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6f\x66\x2d\x61\x72\x69\x74\x79\x3f\x2b\x10\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x74\x68\x75\x6e\x6b\x2a\x26\x21"
  "\x17\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x1f\x1b\x17\x14\x1d\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x10\x3c\x0c\x1d\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x47\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80"
  "\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
uproc_so_data_20831aab9d1d6d10 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_uproc_so_data_20831aab9d1d6d10 [0]))), (sizeof (prog_uproc_so_data_20831aab9d1d6d10)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("uproc.so", uproc_so_data_20831aab9d1d6d10)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("uproc.so", "87555b6c5a37ff7d")
