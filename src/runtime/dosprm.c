/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto file_directoryP_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_directoryP_5)
DEFLABEL (file_directoryP_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 5
#define DEBUGGING_LABEL_2_2 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto file_symbolic_linkP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_symbolic_linkP_3)
DEFLABEL (file_symbolic_linkP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto file_modes_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modes_5)
DEFLABEL (file_modes_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_7 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto set_file_modesB_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_modesB_5)
DEFLABEL (set_file_modesB_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto file_access_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_access_5)
DEFLABEL (file_access_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto file_readableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_readableP_3)
DEFLABEL (file_readableP_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define ENVIRONMENT_LABEL_7_3 25
#define DEBUGGING_LABEL_7_2 24
#define OBJECT_7_2 23
#define OBJECT_7_1 22
#define OBJECT_7_0 21
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_8 17
#define EXECUTE_CACHE_7_6 19
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto file_writeableP_8;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_writeableP_11)
DEFLABEL (file_writeableP_8)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_12 13
#define LABEL_8_17 15
#define LABEL_8_14 17
#define LABEL_8_18 19
#define LABEL_8_19 21
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_4 41
#define OBJECT_8_3 40
#define OBJECT_8_2 39
#define OBJECT_8_1 38
#define OBJECT_8_0 37
#define EXECUTE_CACHE_8_20 23
#define EXECUTE_CACHE_8_16 25
#define EXECUTE_CACHE_8_15 27
#define EXECUTE_CACHE_8_13 29
#define EXECUTE_CACHE_8_9 31
#define EXECUTE_CACHE_8_8 33
#define EXECUTE_CACHE_8_7 35
#define FREE_REFERENCES_LABEL_8_0 22
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto temporary_file_pathname_14;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_8_19);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_file_pathname_19)
DEFLABEL (temporary_file_pathname_14)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_8_0])))
    goto label_22;

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (label_22)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (loop_20)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_8_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_28;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd12.Lng) > 999L))
    goto label_26;

DEFLABEL (label_27)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_17);

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_25;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_25;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_25)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd32.Obj) = (current_block [OBJECT_8_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_6 9
#define LABEL_9_8 11
#define LABEL_9_10 13
#define LABEL_9_12 15
#define LABEL_9_11 17
#define LABEL_9_13 19
#define LABEL_9_14 21
#define LABEL_9_16 23
#define LABEL_9_17 25
#define LABEL_9_20 27
#define LABEL_9_21 29
#define ENVIRONMENT_LABEL_9_3 51
#define DEBUGGING_LABEL_9_2 50
#define OBJECT_9_6 49
#define OBJECT_9_5 48
#define OBJECT_9_4 47
#define OBJECT_9_3 46
#define OBJECT_9_2 45
#define OBJECT_9_1 44
#define OBJECT_9_0 43
#define EXECUTE_CACHE_9_23 31
#define EXECUTE_CACHE_9_22 33
#define EXECUTE_CACHE_9_19 35
#define EXECUTE_CACHE_9_18 37
#define EXECUTE_CACHE_9_15 39
#define EXECUTE_CACHE_9_9 41
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_9_4);
      goto temporary_directory_pathname_23;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_directory_pathname_26)
DEFLABEL (temporary_directory_pathname_23)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_8;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd10.Obj) = (current_block [OBJECT_9_6]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto lambda_5;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_28)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_9_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = (Rsp [0]);
  goto label_37;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto file_attributes_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_5)
DEFLABEL (file_attributes_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_11_4);
      goto file_attributes_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_type_3)
DEFLABEL (file_attributes_type_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_12_4);
      goto file_attributes_n_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_n_links_3)
DEFLABEL (file_attributes_n_links_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
dosprm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_13_4);
      goto file_attributes_uid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_uid_3)
DEFLABEL (file_attributes_uid_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_14_4);
      goto file_attributes_gid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_gid_3)
DEFLABEL (file_attributes_gid_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      goto file_attributes_access_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_access_time_3)
DEFLABEL (file_attributes_access_time_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      goto file_attributes_modification_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modification_time_3)
DEFLABEL (file_attributes_modification_time_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_17_4);
      goto file_attributes_change_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_change_time_3)
DEFLABEL (file_attributes_change_time_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_18_4);
      goto file_attributes_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_length_3)
DEFLABEL (file_attributes_length_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_19_4);
      goto file_attributes_mode_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_mode_string_3)
DEFLABEL (file_attributes_mode_string_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_20_4);
      goto file_attributes_inode_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_inode_number_3)
DEFLABEL (file_attributes_inode_number_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define OBJECT_21_1 10
#define OBJECT_21_0 9
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_21_4);
      goto file_length_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_length_4)
DEFLABEL (file_length_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 15
#define DEBUGGING_LABEL_22_2 14
#define OBJECT_22_0 13
#define EXECUTE_CACHE_22_8 9
#define EXECUTE_CACHE_22_7 11
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto file_modification_time_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time_5)
DEFLABEL (file_modification_time_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_4 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 19
#define DEBUGGING_LABEL_23_2 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_10 11
#define EXECUTE_CACHE_23_9 13
#define EXECUTE_CACHE_23_6 15
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_23_4);
      goto set_file_timesB_10;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_timesB_13)
DEFLABEL (set_file_timesB_10)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Wrd8 = Wrd6;
  goto label_14;

DEFLABEL (label_15)
  (Wrd8.Obj) = (Rsp [1]);

DEFLABEL (label_14)
DEFLABEL (label_19)
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Wrd11 = Wrd9;
  goto label_16;

DEFLABEL (label_17)
  (Wrd11.Obj) = (Rsp [1]);

DEFLABEL (label_16)
DEFLABEL (label_18)
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 3);

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [2]);
  if (! ((Wrd19.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_20;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_9 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define OBJECT_24_0 21
#define EXECUTE_CACHE_24_12 11
#define EXECUTE_CACHE_24_11 13
#define EXECUTE_CACHE_24_10 15
#define EXECUTE_CACHE_24_8 17
#define EXECUTE_CACHE_24_6 19
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
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
      goto current_home_directory_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_home_directory_7)
DEFLABEL (current_home_directory_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define OBJECT_25_1 10
#define OBJECT_25_0 9
#define EXECUTE_CACHE_25_6 7
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto current_user_name_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_user_name_5)
DEFLABEL (current_user_name_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_25_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_10 5
#define LABEL_26_4 7
#define LABEL_26_6 9
#define LABEL_26_7 11
#define LABEL_26_8 13
#define ENVIRONMENT_LABEL_26_3 26
#define DEBUGGING_LABEL_26_2 25
#define OBJECT_26_1 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_13 15
#define EXECUTE_CACHE_26_12 17
#define EXECUTE_CACHE_26_11 19
#define EXECUTE_CACHE_26_9 21
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_4);
      goto user_home_directory_7;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (user_home_directory_10)
DEFLABEL (user_home_directory_7)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (label_11)
  (Wrd15.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd15.Obj);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_14)
  (Wrd15.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_13;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Wrd15.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto file_time__local_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_decoded_time_4)
DEFLABEL (file_time__local_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto decoded_time__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__file_time_4)
DEFLABEL (decoded_time__file_time_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 9
#define DEBUGGING_LABEL_29_2 8
#define FREE_REFERENCE_29_0 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto file_time__universal_time_0;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__universal_time_4)
DEFLABEL (file_time__universal_time_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 9
#define DEBUGGING_LABEL_30_2 8
#define FREE_REFERENCE_30_0 7
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_30_4);
      goto universal_time__file_time_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__file_time_4)
DEFLABEL (universal_time__file_time_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define ENVIRONMENT_LABEL_31_3 15
#define DEBUGGING_LABEL_31_2 14
#define OBJECT_31_0 13
#define EXECUTE_CACHE_31_8 9
#define EXECUTE_CACHE_31_7 11
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto file_touch_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_touch_5)
DEFLABEL (file_touch_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define ENVIRONMENT_LABEL_32_3 19
#define DEBUGGING_LABEL_32_2 18
#define OBJECT_32_0 17
#define EXECUTE_CACHE_32_10 11
#define EXECUTE_CACHE_32_9 13
#define EXECUTE_CACHE_32_8 15
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_32_4);
      goto make_directory_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_directory_6)
DEFLABEL (make_directory_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define ENVIRONMENT_LABEL_33_3 19
#define DEBUGGING_LABEL_33_2 18
#define OBJECT_33_0 17
#define EXECUTE_CACHE_33_10 11
#define EXECUTE_CACHE_33_9 13
#define EXECUTE_CACHE_33_8 15
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_33_4);
      goto delete_directory_3;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_directory_6)
DEFLABEL (delete_directory_3)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
dosprm_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_line_ending_3)
DEFLABEL (file_line_ending_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  Rvl = (current_block [OBJECT_34_0]);
  Rsp = (& (Rsp [1]));
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
dosprm_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto default_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_line_ending_3)
DEFLABEL (default_line_ending_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  Rvl = (current_block [OBJECT_35_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_6 9
#define LABEL_36_9 11
#define ENVIRONMENT_LABEL_36_3 22
#define DEBUGGING_LABEL_36_2 21
#define EXECUTE_CACHE_36_11 13
#define EXECUTE_CACHE_36_10 15
#define EXECUTE_CACHE_36_8 17
#define FREE_REFERENCE_36_0 20
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto initialize_system_primitivesB_4;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_36_6);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_system_primitivesB_8)
DEFLABEL (initialize_system_primitivesB_4)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_1;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_11;
  Wrd7 = Wrd11;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_36_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto dos_fs_drive_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_drive_type_3)
DEFLABEL (dos_fs_drive_type_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd9.Obj) = (current_block [OBJECT_37_0]);
  (Wrd10.Obj) = (current_block [OBJECT_37_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 5
#define DEBUGGING_LABEL_38_2 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto dos_fs_long_filenamesP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_long_filenamesP_3)
DEFLABEL (dos_fs_long_filenamesP_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_8 9
#define LABEL_39_9 11
#define LABEL_39_11 13
#define LABEL_39_12 15
#define TAG_39_13 6
#define LABEL_39_24 17
#define LABEL_39_14 19
#define TAG_39_15 8
#define LABEL_39_16 21
#define TAG_39_17 9
#define LABEL_39_19 23
#define LABEL_39_20 25
#define LABEL_39_22 27
#define LABEL_39_26 29
#define LABEL_39_32 31
#define LABEL_39_28 33
#define LABEL_39_31 35
#define LABEL_39_33 37
#define LABEL_39_35 39
#define LABEL_39_37 41
#define TAG_39_38 19
#define LABEL_39_39 43
#define TAG_39_40 20
#define LABEL_39_43 45
#define LABEL_39_45 47
#define LABEL_39_41 49
#define LABEL_39_46 51
#define LABEL_39_44 53
#define LABEL_39_48 55
#define LABEL_39_50 57
#define LABEL_39_49 59
#define ENVIRONMENT_LABEL_39_3 93
#define DEBUGGING_LABEL_39_2 92
#define OBJECT_39_4 91
#define OBJECT_39_3 90
#define OBJECT_39_2 89
#define OBJECT_39_1 88
#define OBJECT_39_0 87
#define EXECUTE_CACHE_39_47 61
#define EXECUTE_CACHE_39_42 63
#define EXECUTE_CACHE_39_36 65
#define EXECUTE_CACHE_39_34 67
#define EXECUTE_CACHE_39_30 69
#define EXECUTE_CACHE_39_29 71
#define EXECUTE_CACHE_39_27 73
#define EXECUTE_CACHE_39_25 75
#define EXECUTE_CACHE_39_23 77
#define EXECUTE_CACHE_39_21 79
#define EXECUTE_CACHE_39_18 81
#define EXECUTE_CACHE_39_10 83
#define EXECUTE_CACHE_39_7 85
#define FREE_REFERENCES_LABEL_39_0 60
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_39_4);
      goto copy_file_37;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_39_12);
      goto lambda_46;

    case 7:
      current_block = (Rpc - LABEL_39_24);
      goto continuation_30;

    case 8:
      current_block = (Rpc - LABEL_39_14);
      goto lambda_47;

    case 9:
      current_block = (Rpc - LABEL_39_16);
      goto lambda_48;

    case 10:
      current_block = (Rpc - LABEL_39_19);
      goto continuation_34;

    case 11:
      current_block = (Rpc - LABEL_39_20);
      goto continuation_33;

    case 12:
      current_block = (Rpc - LABEL_39_22);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_39_26);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_39_32);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_39_28);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_39_31);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_39_33);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_39_35);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_39_37);
      goto lambda_16;

    case 20:
      current_block = (Rpc - LABEL_39_39);
      goto loop_24;

    case 21:
      current_block = (Rpc - LABEL_39_43);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_39_45);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_39_41);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_39_46);
      goto label_41;

    case 25:
      current_block = (Rpc - LABEL_39_44);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_39_48);
      goto label_43;

    case 27:
      current_block = (Rpc - LABEL_39_50);
      goto label_42;

    case 28:
      current_block = (Rpc - LABEL_39_49);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_file_45)
DEFLABEL (copy_file_37)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_12])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  ((Wrd25.pObj) [2]) = Rvl;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  ((Wrd25.pObj) [4]) = (Wrd11.Obj);
  ((Wrd25.pObj) [5]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_14])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  ((Wrd32.pObj) [2]) = (Wrd11.Obj);
  ((Wrd32.pObj) [3]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_16])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  ((Wrd39.pObj) [2]) = (Wrd11.Obj);
  ((Wrd39.pObj) [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39_20);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_30]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_39_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_29]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39_28);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_34]));

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_39_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_22);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_36]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_35);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_39_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_39_14);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_25]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_39_24);

DEFLABEL (label_52)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_25]));

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_39_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_39_16);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_55;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd19.Lng) == 0))
    goto label_54;

DEFLABEL (label_53)
  Rvl = (current_block [OBJECT_39_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_33]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_33);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_37])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  ((Wrd14.pObj) [4]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_39])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  ((Wrd25.pObj) [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_24;

DEFLABEL (label_55)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_53;

DEFLABEL (lambda_49)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_39_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_42]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_39_41);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_58;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd28.Lng) > 0)
    goto label_57;

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd20.pObj) [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_47]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_39_45);
  goto label_56;

DEFLABEL (label_58)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (loop_50)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_39_39);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_68;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 8192L))
    goto label_60;

DEFLABEL (label_59)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [0]) = (Wrd18.Obj);
  goto lambda_16;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto lambda_16;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_39_44);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_67;
  if (Rvl == (current_block [OBJECT_39_2]))
    goto label_62;

DEFLABEL (label_61)
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_62)
  (Wrd10.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_49]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_66;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) - 8192L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_66;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_65)
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto loop_24;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39_49);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_64)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) + 8192L);
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_63;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (current_block [OBJECT_39_2]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_50]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_42)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd39.Obj) = (current_block [OBJECT_39_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_48]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_43)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_68)
  (Wrd22.Obj) = (current_block [OBJECT_39_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_43]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_8 9
#define LABEL_40_10 11
#define LABEL_40_12 13
#define TAG_40_13 5
#define LABEL_40_14 15
#define TAG_40_15 6
#define LABEL_40_16 17
#define TAG_40_17 7
#define LABEL_40_19 19
#define LABEL_40_25 21
#define LABEL_40_22 23
#define LABEL_40_21 25
#define LABEL_40_26 27
#define LABEL_40_23 29
#define LABEL_40_29 31
#define LABEL_40_27 33
#define LABEL_40_30 35
#define LABEL_40_31 37
#define LABEL_40_32 39
#define LABEL_40_40 41
#define LABEL_40_41 43
#define LABEL_40_42 45
#define LABEL_40_34 47
#define LABEL_40_43 49
#define LABEL_40_36 51
#define LABEL_40_50 53
#define LABEL_40_37 55
#define LABEL_40_47 57
#define LABEL_40_48 59
#define LABEL_40_52 61
#define LABEL_40_54 63
#define ENVIRONMENT_LABEL_40_3 119
#define DEBUGGING_LABEL_40_2 118
#define OBJECT_40_12 117
#define OBJECT_40_11 116
#define OBJECT_40_10 115
#define OBJECT_40_9 114
#define OBJECT_40_8 113
#define OBJECT_40_7 112
#define OBJECT_40_6 111
#define OBJECT_40_5 110
#define OBJECT_40_4 109
#define OBJECT_40_3 108
#define OBJECT_40_2 107
#define OBJECT_40_1 106
#define OBJECT_40_0 105
#define EXECUTE_CACHE_40_57 65
#define EXECUTE_CACHE_40_56 67
#define EXECUTE_CACHE_40_55 69
#define EXECUTE_CACHE_40_53 71
#define EXECUTE_CACHE_40_51 73
#define EXECUTE_CACHE_40_49 75
#define EXECUTE_CACHE_40_46 77
#define EXECUTE_CACHE_40_45 79
#define EXECUTE_CACHE_40_44 81
#define EXECUTE_CACHE_40_39 83
#define EXECUTE_CACHE_40_38 85
#define EXECUTE_CACHE_40_35 87
#define EXECUTE_CACHE_40_33 89
#define EXECUTE_CACHE_40_28 91
#define EXECUTE_CACHE_40_24 93
#define EXECUTE_CACHE_40_20 95
#define EXECUTE_CACHE_40_18 97
#define EXECUTE_CACHE_40_11 99
#define EXECUTE_CACHE_40_9 101
#define EXECUTE_CACHE_40_6 103
#define FREE_REFERENCES_LABEL_40_0 64
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_40_4);
      goto init_file_specifier__pathname_52;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto lambda_59;

    case 6:
      current_block = (Rpc - LABEL_40_14);
      goto lambda_60;

    case 7:
      current_block = (Rpc - LABEL_40_16);
      goto lambda_61;

    case 8:
      current_block = (Rpc - LABEL_40_19);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_40_25);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_40_22);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_40_21);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_40_26);
      goto loop_38;

    case 13:
      current_block = (Rpc - LABEL_40_23);
      goto continuation_22;

    case 14:
      current_block = (Rpc - LABEL_40_29);
      goto loop_49;

    case 15:
      current_block = (Rpc - LABEL_40_27);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_40_30);
      goto continuation_44;

    case 17:
      current_block = (Rpc - LABEL_40_31);
      goto continuation_43;

    case 18:
      current_block = (Rpc - LABEL_40_32);
      goto continuation_42;

    case 19:
      current_block = (Rpc - LABEL_40_40);
      goto continuation_32;

    case 20:
      current_block = (Rpc - LABEL_40_41);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_40_42);
      goto continuation_35;

    case 22:
      current_block = (Rpc - LABEL_40_34);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_40_43);
      goto label_54;

    case 24:
      current_block = (Rpc - LABEL_40_36);
      goto continuation_46;

    case 25:
      current_block = (Rpc - LABEL_40_50);
      goto label_55;

    case 26:
      current_block = (Rpc - LABEL_40_37);
      goto continuation_45;

    case 27:
      current_block = (Rpc - LABEL_40_47);
      goto continuation_13;

    case 28:
      current_block = (Rpc - LABEL_40_48);
      goto continuation_12;

    case 29:
      current_block = (Rpc - LABEL_40_52);
      goto continuation_17;

    case 30:
      current_block = (Rpc - LABEL_40_54);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_specifier__pathname_58)
DEFLABEL (init_file_specifier__pathname_52)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_12])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  ((Wrd14.pObj) [2]) = Rvl;
  ((Wrd14.pObj) [3]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_14])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_16])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_18]));

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_40_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_40_14);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_40_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_38;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd23.uLng) == 1)
    goto label_64;
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 1);

DEFLABEL (label_64)
  (Wrd21.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_67)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_40_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto loop_49;

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_66)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_67;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_21);
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_40_16);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_24]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_40_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  ((Wrd8.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_62)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_40_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_28]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_40_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_35]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_40_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_46]));

DEFLABEL (label_70)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_73;

DEFLABEL (label_72)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_42]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_40_12]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_45]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_40_42);

DEFLABEL (label_71)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_38;

DEFLABEL (label_73)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_40]))));
  (* (--Rsp)) = (Wrd21.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_77;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_44]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_40_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_75;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_74)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd48.uLng) == 30)
    goto label_71;
  goto label_72;

DEFLABEL (label_75)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_41]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 1);

DEFLABEL (label_56)
  (Wrd39.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_43]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_11]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (loop_63)
DEFLABEL (loop_49)
  INTERRUPT_CHECK (26, LABEL_40_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_40_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_33]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_40_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_39]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_40_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_38]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_40_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_40_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_51]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_40_36);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_78;
  (Wrd19.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_48]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_49]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_40_48);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_54]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_55]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_40_54);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_57]));

DEFLABEL (label_78)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_80;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_80;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_79)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_49;

DEFLABEL (label_80)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_40_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [2]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_53]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_40_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_56]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_40_25);
  (Wrd27.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 11
#define DEBUGGING_LABEL_41_2 10
#define OBJECT_41_1 9
#define OBJECT_41_0 8
#define FREE_ASSIGNMENT_41_0 7
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosprm_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto cache_console_channel_descriptorB_0;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cache_console_channel_descriptorB_4)
DEFLABEL (cache_console_channel_descriptorB_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_41_0]));
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_41_1]);
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_41_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_10 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_13 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_19 29
#define LABEL_21 31
#define LABEL_20 33
#define LABEL_23 35
#define LABEL_22 37
#define LABEL_25 39
#define LABEL_24 41
#define LABEL_27 43
#define LABEL_26 45
#define LABEL_29 47
#define LABEL_28 49
#define LABEL_30 51
#define LABEL_31 53
#define LABEL_34 55
#define LABEL_41 57
#define LABEL_35 59
#define TAG_36 28
#define LABEL_32 61
#define TAG_33 29
#define LABEL_37 63
#define LABEL_47 65
#define LABEL_38 67
#define LABEL_50 69
#define LABEL_39 71
#define TAG_40 34
#define LABEL_53 73
#define LABEL_42 75
#define LABEL_56 77
#define LABEL_57 79
#define LABEL_58 81
#define LABEL_44 83
#define LABEL_46 85
#define LABEL_61 87
#define LABEL_48 89
#define LABEL_65 91
#define LABEL_49 93
#define LABEL_67 95
#define LABEL_51 97
#define LABEL_52 99
#define LABEL_55 101
#define LABEL_60 103
#define LABEL_69 105
#define LABEL_62 107
#define LABEL_63 109
#define TAG_64 53
#define LABEL_68 111
#define LABEL_76 113
#define LABEL_77 115
#define LABEL_70 117
#define TAG_71 57
#define LABEL_72 119
#define TAG_73 58
#define LABEL_79 121
#define LABEL_80 123
#define LABEL_75 125
#define LABEL_82 127
#define LABEL_78 129
#define LABEL_81 131
#define LABEL_84 133
#define LABEL_83 135
#define LABEL_85 137
#define LABEL_86 139
#define LABEL_87 141
#define ENVIRONMENT_LABEL_3 223
#define DEBUGGING_LABEL_2 222
#define PURIFICATION_ROOT 221
#define OBJECT_48 220
#define OBJECT_47 219
#define OBJECT_46 218
#define OBJECT_45 217
#define OBJECT_44 216
#define OBJECT_43 215
#define OBJECT_42 214
#define OBJECT_41 213
#define OBJECT_40 212
#define OBJECT_39 211
#define OBJECT_38 210
#define OBJECT_37 209
#define OBJECT_36 208
#define OBJECT_35 207
#define OBJECT_34 206
#define OBJECT_33 205
#define OBJECT_32 204
#define OBJECT_31 203
#define OBJECT_30 202
#define OBJECT_29 201
#define OBJECT_28 200
#define OBJECT_27 199
#define OBJECT_26 198
#define OBJECT_25 197
#define OBJECT_24 196
#define OBJECT_23 195
#define OBJECT_22 194
#define OBJECT_21 193
#define OBJECT_20 192
#define OBJECT_19 191
#define OBJECT_18 190
#define OBJECT_17 189
#define OBJECT_16 188
#define OBJECT_15 187
#define OBJECT_14 186
#define OBJECT_13 185
#define OBJECT_12 184
#define OBJECT_11 183
#define OBJECT_10 182
#define OBJECT_9 181
#define OBJECT_8 180
#define OBJECT_7 179
#define OBJECT_6 178
#define OBJECT_5 177
#define OBJECT_4 176
#define OBJECT_3 175
#define OBJECT_2 174
#define OBJECT_1 173
#define OBJECT_0 172
#define EXECUTE_CACHE_74 143
#define EXECUTE_CACHE_66 145
#define EXECUTE_CACHE_59 147
#define EXECUTE_CACHE_54 149
#define EXECUTE_CACHE_45 151
#define EXECUTE_CACHE_43 153
#define FREE_REFERENCE_10 156
#define FREE_REFERENCE_9 157
#define FREE_REFERENCE_8 158
#define FREE_REFERENCE_7 159
#define FREE_REFERENCE_6 160
#define FREE_REFERENCE_5 161
#define FREE_REFERENCE_4 162
#define FREE_REFERENCE_3 163
#define FREE_REFERENCE_2 164
#define FREE_REFERENCE_1 165
#define FREE_REFERENCE_0 166
#define GLOBAL_EXECUTE_CACHE_18 168
#define GLOBAL_EXECUTE_CACHE_5 170
#define FREE_REFERENCES_LABEL_0 142
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
dosprm_so_1d91afcff2cfcbb1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_75;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_76;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_77;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_78;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto label_79;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto label_80;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto label_81;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto label_82;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto label_83;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_41);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto lambda_93;

    case 29:
      current_block = (Rpc - LABEL_32);
      goto default_variableB_65;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto continuation_67;

    case 31:
      current_block = (Rpc - LABEL_47);
      goto label_84;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_50);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto lambda_94;

    case 35:
      current_block = (Rpc - LABEL_53);
      goto env_error_58;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_20;

    case 37:
      current_block = (Rpc - LABEL_56);
      goto continuation_61;

    case 38:
      current_block = (Rpc - LABEL_57);
      goto continuation_62;

    case 39:
      current_block = (Rpc - LABEL_58);
      goto continuation_60;

    case 40:
      current_block = (Rpc - LABEL_44);
      goto continuation_59;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_68;

    case 42:
      current_block = (Rpc - LABEL_61);
      goto label_85;

    case 43:
      current_block = (Rpc - LABEL_48);
      goto continuation_41;

    case 44:
      current_block = (Rpc - LABEL_65);
      goto continuation_39;

    case 45:
      current_block = (Rpc - LABEL_49);
      goto lambda_40;

    case 46:
      current_block = (Rpc - LABEL_67);
      goto continuation_30;

    case 47:
      current_block = (Rpc - LABEL_51);
      goto continuation_29;

    case 48:
      current_block = (Rpc - LABEL_52);
      goto continuation_28;

    case 49:
      current_block = (Rpc - LABEL_55);
      goto continuation_21;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto continuation_69;

    case 51:
      current_block = (Rpc - LABEL_69);
      goto label_86;

    case 52:
      current_block = (Rpc - LABEL_62);
      goto continuation_46;

    case 53:
      current_block = (Rpc - LABEL_63);
      goto lambda_96;

    case 54:
      current_block = (Rpc - LABEL_68);
      goto continuation_70;

    case 55:
      current_block = (Rpc - LABEL_76);
      goto label_87;

    case 56:
      current_block = (Rpc - LABEL_77);
      goto continuation_48;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto lambda_98;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto lambda_99;

    case 59:
      current_block = (Rpc - LABEL_79);
      goto label_88;

    case 60:
      current_block = (Rpc - LABEL_80);
      goto label_89;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto continuation_71;

    case 62:
      current_block = (Rpc - LABEL_82);
      goto label_90;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto continuation_49;

    case 64:
      current_block = (Rpc - LABEL_81);
      goto continuation_72;

    case 65:
      current_block = (Rpc - LABEL_84);
      goto continuation_50;

    case 66:
      current_block = (Rpc - LABEL_83);
      goto continuation_51;

    case 67:
      current_block = (Rpc - LABEL_85);
      goto label_101;

    case 68:
      current_block = (Rpc - LABEL_86);
      goto label_102;

    case 69:
      current_block = (Rpc - LABEL_87);
      goto expression_74;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_74)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_86])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_102)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_101)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	0,
	0,
	2,
	0,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
	1,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 41)
      goto label_100;
    blocks = (current_block [OBJECT_48]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_85])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_100)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_120;
  Wrd8 = Wrd12;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_118;
  Wrd8 = Wrd12;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_116;
  Wrd8 = Wrd12;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_114;
  Wrd8 = Wrd12;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (MAKE_OBJECT (0, 10));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-11]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_112;
  Wrd8 = Wrd12;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_110;
  Wrd8 = Wrd12;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_108;
  Wrd8 = Wrd12;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_106;
  Wrd8 = Wrd12;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_104;
  Wrd8 = Wrd12;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  ((Wrd28.pObj) [2]) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd9.pObj));

DEFLABEL (label_82)
  (Wrd8.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd9.pObj));

DEFLABEL (label_79)
  (Wrd8.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_119;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_130;
  Wrd8 = Wrd12;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_128;
  Wrd8 = Wrd12;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_126;
  Wrd8 = Wrd12;

DEFLABEL (label_125)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_124;
  Wrd8 = Wrd12;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_122;
  Wrd8 = Wrd12;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_47]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd9.pObj));

DEFLABEL (label_90)
  (Wrd8.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd9.pObj));

DEFLABEL (label_87)
  (Wrd8.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd9.pObj));

DEFLABEL (label_86)
  (Wrd8.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd9.pObj));

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd9.pObj));

DEFLABEL (label_84)
  (Wrd8.Obj) = Rvl;
  goto label_129;

DEFLABEL (lambda_93)
  CLOSURE_HEADER (LABEL_35);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_133;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_58;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_41);

DEFLABEL (label_133)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_131)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_132;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_132)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40]), 1);

DEFLABEL (default_variableB_92)
DEFLABEL (default_variableB_65)
  INTERRUPT_CHECK (26, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;

DEFLABEL (label_134)
  Rvl = (current_block [OBJECT_36]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_58);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_134;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_56);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_136)
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  ((Wrd33.pObj) [0]) = (Wrd27.Obj);
  goto label_134;

DEFLABEL (label_137)
  (Wrd22.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_136;

DEFLABEL (lambda_94)
  CLOSURE_HEADER (LABEL_39);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_142;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_58;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_50);

DEFLABEL (label_142)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_138;
  INVOKE_PRIMITIVE ((current_block [OBJECT_39]), 2);

DEFLABEL (label_138)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd14.pObj) [1]) = (Wrd11.Obj);

DEFLABEL (label_140)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_139)
  Rvl = (current_block [OBJECT_36]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_141)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  ((Wrd30.pObj) [0]) = (Wrd24.Obj);
  goto label_140;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_51);
  goto label_139;

DEFLABEL (env_error_95)
DEFLABEL (env_error_58)
  INTERRUPT_CHECK (26, LABEL_53);
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (lambda_97)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_49);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_144;

DEFLABEL (label_143)
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (label_144)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_58;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_65);
  goto label_143;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_63);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74]));

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_70);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_148;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_58;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_77);

DEFLABEL (label_148)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_147;
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd19.uLng) == 1)
    goto label_145;
  INVOKE_PRIMITIVE ((current_block [OBJECT_39]), 2);

DEFLABEL (label_145)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd16.pObj) [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_146)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto default_variableB_65;

DEFLABEL (label_147)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  ((Wrd31.pObj) [0]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  goto label_146;

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_83);
  goto label_146;

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_72);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_152;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_151)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_150;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_149)
  (Rsp [2]) = (Wrd17.Obj);
  goto default_variableB_65;

DEFLABEL (label_150)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40]), 1);

DEFLABEL (label_89)
  (Wrd17.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44]), 1);

DEFLABEL (label_88)
  (Wrd8.Obj) = Rvl;
  goto label_151;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_dosprm_so_1d91afcff2cfcbb1 [41] =
  {
    { "dosprm_so_code_1", 3, dosprm_so_code_1 },
    { "dosprm_so_code_2", 1, dosprm_so_code_2 },
    { "dosprm_so_code_3", 3, dosprm_so_code_3 },
    { "dosprm_so_code_4", 3, dosprm_so_code_4 },
    { "dosprm_so_code_5", 3, dosprm_so_code_5 },
    { "dosprm_so_code_6", 1, dosprm_so_code_6 },
    { "dosprm_so_code_7", 6, dosprm_so_code_7 },
    { "dosprm_so_code_8", 10, dosprm_so_code_8 },
    { "dosprm_so_code_9", 14, dosprm_so_code_9 },
    { "dosprm_so_code_10", 3, dosprm_so_code_10 },
    { "dosprm_so_code_11", 1, dosprm_so_code_11 },
    { "dosprm_so_code_12", 1, dosprm_so_code_12 },
    { "dosprm_so_code_13", 1, dosprm_so_code_13 },
    { "dosprm_so_code_14", 1, dosprm_so_code_14 },
    { "dosprm_so_code_15", 1, dosprm_so_code_15 },
    { "dosprm_so_code_16", 1, dosprm_so_code_16 },
    { "dosprm_so_code_17", 1, dosprm_so_code_17 },
    { "dosprm_so_code_18", 1, dosprm_so_code_18 },
    { "dosprm_so_code_19", 1, dosprm_so_code_19 },
    { "dosprm_so_code_20", 1, dosprm_so_code_20 },
    { "dosprm_so_code_21", 2, dosprm_so_code_21 },
    { "dosprm_so_code_22", 3, dosprm_so_code_22 },
    { "dosprm_so_code_23", 4, dosprm_so_code_23 },
    { "dosprm_so_code_24", 4, dosprm_so_code_24 },
    { "dosprm_so_code_25", 2, dosprm_so_code_25 },
    { "dosprm_so_code_26", 6, dosprm_so_code_26 },
    { "dosprm_so_code_27", 2, dosprm_so_code_27 },
    { "dosprm_so_code_28", 2, dosprm_so_code_28 },
    { "dosprm_so_code_29", 2, dosprm_so_code_29 },
    { "dosprm_so_code_30", 2, dosprm_so_code_30 },
    { "dosprm_so_code_31", 3, dosprm_so_code_31 },
    { "dosprm_so_code_32", 4, dosprm_so_code_32 },
    { "dosprm_so_code_33", 4, dosprm_so_code_33 },
    { "dosprm_so_code_34", 1, dosprm_so_code_34 },
    { "dosprm_so_code_35", 1, dosprm_so_code_35 },
    { "dosprm_so_code_36", 5, dosprm_so_code_36 },
    { "dosprm_so_code_37", 1, dosprm_so_code_37 },
    { "dosprm_so_code_38", 1, dosprm_so_code_38 },
    { "dosprm_so_code_39", 29, dosprm_so_code_39 },
    { "dosprm_so_code_40", 31, dosprm_so_code_40 },
    { "dosprm_so_code_41", 2, dosprm_so_code_41 }
  };

int
decl_dosprm_so_1d91afcff2cfcbb1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dosprm_so_1d91afcff2cfcbb1);
  return (0);
}

DECLARE_COMPILED_CODE ("dosprm.so", 70, decl_dosprm_so_1d91afcff2cfcbb1, dosprm_so_1d91afcff2cfcbb1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dosprm_so_data_1d91afcff2cfcbb1 [5998] =
  "\xe0\x01\x42\xe3\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x82\x88\x22\x29\x21\x9c\x2b\xbc\x1d\xb0\x83\x88\xc1\x28\xb1"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84"
  "\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x85\x88\xc2\xbf\x28\xb1\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x84\x28\x0d\x1c\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xb7\x82\x28\xb1\x28\xb2"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbf\x1d\xb0\x02\x88\x0c\x02\x0c\x80\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\xb1\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x28\x0d\x1c\x28\xb1\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x28\x0d\x1c\x28\xb1\x28"
  "\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x28\x0d\x1c\x28\xb1\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x28\xb1\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28"
  "\xb1\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\xc1\x02\xc1\x1d\x28\xb1\x28\xb2\x28\x0d\xba\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x1c\x0c\x85\x0f\x0c\x81"
  "\xc1\x1c\x1d\x08\x0c\x0c\x0d\x1c\x28\x0d\x28\x0d\x28\xb1\x28\xb2"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x87\x0d\xba\x25\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x17\xb8\x88\xb0\xb1\x2a\x1e\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x1b\xb2\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x0d\x1b"
  "\x0d\x0d\x1c\x0d\x1b\xc2\x1b\x0d\x1d\xc1\x0c\x0d\x1c\x0d\x0d\x1c"
  "\x1b\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x0d\x1c\x9e\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\xc3\x1b\x08\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x9d\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x9d\x0d\x0d\x0d\x0d"
  "\x1c\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0c\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x02\x02\x02\x86\x85\x84\x83\x82\x81\x80"
  "\x17\x02\x0d\x0d\x1b\x1b\x0d\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d"
  "\x1b\x0d\x99\xb7\x2a\x1b\x2a\x99\xc3\x0d\x1b\x1b\x1b\x0d\x1b\x9c"
  "\x1b\x2a\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a\x9c\x28\x0d\x28\x0d\x26"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x64\x6f\x73\x70\x72\x6d\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x10\x66\x69\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x3f\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x73\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69"
  "\x6e\x67\x03\x49\x08\x81\x85\x02\x48\x06\x81\x83\x02\x47\x04\x83"
  "\x04\x07\x10\x02\x4a\x04\x83\x04\x03\x02\x0b\x66\x69\x6c\x65\x2d"
  "\x6d\x6f\x64\x65\x73\x03\x03\x03\x4d\x08\x81\x85\x02\x4c\x06\x81"
  "\x83\x02\x4b\x04\x83\x04\x07\x10\x02\x10\x73\x65\x74\x2d\x66\x69"
  "\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x21\x03\x03\x03\x50\x08\x81\x87"
  "\x02\x4f\x06\x81\x85\x02\x4e\x04\x84\x06\x07\x10\x02\x0c\x66\x69"
  "\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x03\x03\x03\x53\x08\x81\x87"
  "\x02\x52\x06\x81\x85\x02\x51\x04\x84\x06\x07\x10\x09\x02\x04\x0c"
  "\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x0a\x02\x54\x04\x83"
  "\x04\x03\x0a\x0b\x02\x08\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73"
  "\x74\x73\x3f\x03\x03\x03\x15\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x04\x5a\x0e\x81\x87"
  "\x02\x59\x0c\x81\x87\x02\x58\x0a\x81\x85\x02\x57\x08\x81\x83\x02"
  "\x56\x06\x81\x83\x02\x55\x04\x83\x04\x0d\x1a\x02\x09\x26\x43\x61"
  "\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x75\x6e\x69\x71\x75\x65\x20"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x3a\xe8\x07\x09\x5f\x73\x63\x6d\x5f\x74\x6d\x70\x08\x02"
  "\x1d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x0c\x03\x16"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x0d\x04\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x0e\x03\x18\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c"
  "\x65\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d"
  "\x74\x79\x70\x65\x04\x06\x65\x72\x72\x6f\x72\x0f\x08\x64\x16\x81"
  "\x87\x02\x63\x14\x81\x87\x02\x62\x12\x81\x87\x02\x61\x10\x81\x87"
  "\x02\x60\x0e\x81\x87\x02\x5f\x0c\x81\x85\x02\x5e\x0a\x81\x85\x02"
  "\x5d\x08\x81\x85\x02\x5c\x06\x81\x83\x02\x5b\x04\x83\x02\x15\x2c"
  "\x10\x02\x0a\x20\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2e\x02\x2f\x02\x2e\x04\x63\x3a\x2f\x05\x2f\x74\x6d\x70"
  "\x04\x54\x4d\x50\x05\x54\x45\x4d\x50\x03\x19\x67\x65\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x11\x03\x03\x10\x66\x69\x6c\x65\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x3f\x12\x03\x0d\x03\x10\x66\x69\x6c\x65\x2d"
  "\x77\x72\x69\x74\x65\x61\x62\x6c\x65\x3f\x13\x03\x0f\x07\x72\x1e"
  "\x81\x83\x02\x71\x1c\x81\x83\x02\x70\x1a\x81\x83\x02\x6f\x18\x81"
  "\x83\x02\x6e\x16\x81\x85\x02\x6d\x14\x81\x83\x02\x6c\x12\x81\x83"
  "\x02\x6b\x10\x81\x83\x02\x6a\x0e\x81\x83\x02\x69\x0c\x81\x83\x02"
  "\x68\x0a\x81\x83\x02\x67\x08\x81\x83\x02\x66\x06\x81\x81\x02\x65"
  "\x04\x82\x02\x1d\x34\x14\x02\x0b\x10\x66\x69\x6c\x65\x2d\x61\x74"
  "\x74\x72\x69\x62\x75\x74\x65\x73\x03\x03\x03\x75\x08\x81\x85\x02"
  "\x74\x06\x81\x83\x02\x73\x04\x83\x04\x07\x10\x15\x02\x0c\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x16\x76\x04\x83\x04\x03\x17"
  "\x02\x0d\x16\x77\x04\x83\x04\x03\x18\x02\x0e\x16\x78\x04\x83\x04"
  "\x03\x19\x02\x0f\x16\x79\x04\x83\x04\x03\x1a\x02\x10\x16\x7a\x04"
  "\x83\x04\x03\x1b\x02\x11\x16\x7b\x04\x83\x04\x03\x1c\x02\x12\x16"
  "\x7c\x04\x83\x04\x03\x1d\x02\x13\x16\x08\x7d\x04\x83\x04\x03\x1e"
  "\x02\x14\x16\x09\x7e\x04\x83\x04\x03\x1f\x02\x15\x16\x0a\x7f\x04"
  "\x83\x04\x03\x20\x02\x16\x16\x08\x03\x10\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x16\x02\x81\x01\x06\x81\x83"
  "\x02\x80\x01\x04\x83\x04\x05\x0d\x21\x02\x17\x0e\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x03\x03\x03\x84\x01\x08\x81"
  "\x85\x02\x83\x01\x06\x81\x83\x02\x82\x01\x04\x83\x04\x07\x10\x22"
  "\x02\x18\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65"
  "\x73\x21\x03\x1e\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x2d\x64\x69\x72\x65\x63"
  "\x74\x23\x03\x03\x04\x88\x01\x0a\x81\x8b\x02\x87\x01\x08\x81\x89"
  "\x02\x86\x01\x06\x85\x08\x85\x01\x04\x81\x87\x02\x09\x14\x24\x02"
  "\x19\x05\x48\x4f\x4d\x45\x03\x11\x02\x12\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x75\x73\x65\x72\x2d\x6e\x61\x6d\x65\x25\x03\x03\x0d\x03"
  "\x14\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x26\x06\x8c\x01\x0a\x81\x83\x02\x8b\x01\x08\x81"
  "\x83\x02\x8a\x01\x06\x81\x81\x02\x89\x01\x04\x82\x02\x09\x18\x27"
  "\x02\x1a\x07\x6e\x6f\x75\x73\x65\x72\x05\x55\x53\x45\x52\x03\x11"
  "\x02\x8e\x01\x06\x81\x81\x02\x8d\x01\x04\x82\x02\x05\x0d\x28\x02"
  "\x1b\x08\x55\x53\x45\x52\x44\x49\x52\x02\x5c\x03\x03\x11\x03\x0d"
  "\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x6e"
  "\x61\x6d\x65\x05\x94\x01\x0e\x81\x89\x02\x93\x01\x0c\x81\x87\x02"
  "\x92\x01\x0a\x81\x83\x02\x91\x01\x08\x83\x04\x90\x01\x06\x81\x83"
  "\x02\x8f\x01\x04\x81\x85\x02\x0d\x1b\x0d\x02\x1c\x03\x1a\x66\x69"
  "\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73"
  "\x61\x6c\x2d\x74\x69\x6d\x65\x29\x03\x23\x75\x6e\x69\x76\x65\x72"
  "\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x03\x96\x01\x06"
  "\x81\x83\x02\x95\x01\x04\x83\x04\x05\x0d\x2a\x02\x1d\x03\x1d\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69"
  "\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x03\x1a\x75\x6e\x69"
  "\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c"
  "\x65\x2d\x74\x69\x6d\x65\x2b\x03\x98\x01\x06\x81\x83\x02\x97\x01"
  "\x04\x83\x04\x05\x0d\x2c\x02\x1e\x06\x65\x70\x6f\x63\x68\x2d\x02"
  "\x9a\x01\x06\x81\x85\x02\x99\x01\x04\x83\x04\x05\x0a\x2e\x02\x1f"
  "\x2d\x02\x9c\x01\x06\x81\x85\x02\x9b\x01\x04\x83\x04\x05\x0a\x2d"
  "\x02\x20\x0b\x66\x69\x6c\x65\x2d\x74\x6f\x75\x63\x68\x03\x03\x03"
  "\x9f\x01\x08\x81\x85\x02\x9e\x01\x06\x81\x83\x02\x9d\x01\x04\x83"
  "\x04\x07\x10\x2f\x02\x21\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x6d\x61\x6b\x65\x03\x03\x03\x1b\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66"
  "\x69\x6c\x65\x30\x04\xa3\x01\x0a\x81\x87\x02\xa2\x01\x08\x81\x85"
  "\x02\xa1\x01\x06\x81\x83\x02\xa0\x01\x04\x83\x04\x09\x14\x31\x02"
  "\x22\x11\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x64\x65\x6c\x65"
  "\x74\x65\x03\x03\x03\x30\x04\xa7\x01\x0a\x81\x87\x02\xa6\x01\x08"
  "\x81\x85\x02\xa5\x01\x06\x81\x83\x02\xa4\x01\x04\x83\x04\x09\x14"
  "\x30\x02\x23\x05\x63\x72\x6c\x66\x32\xa8\x01\x04\x83\x04\x03\x33"
  "\x02\x24\x32\xa9\x01\x04\x82\x02\x03\x32\x02\x25\x14\x65\x76\x65"
  "\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x02\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63"
  "\x65\x69\x76\x65\x72\x21\x02\x1d\x72\x65\x73\x65\x74\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x73\x21\x34\x02\x22\x63\x61\x63\x68\x65\x2d\x63\x6f\x6e"
  "\x73\x6f\x6c\x65\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64\x65\x73"
  "\x63\x72\x69\x70\x74\x6f\x72\x21\x35\x04\xae\x01\x0c\x81\x81\x02"
  "\xad\x01\x0a\x82\x02\xac\x01\x08\x81\x83\x02\xab\x01\x06\x81\x81"
  "\x02\xaa\x01\x04\x82\x02\x0b\x17\x36\x02\x26\x01\x04\x46\x41\x54"
  "\xaf\x01\x04\x83\x04\x03\x37\x02\x27\xb0\x01\x04\x83\x04\x03\x38"
  "\x02\x28\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x81\x40\x11\x66\x69\x6c\x65\x2d\x72\x65\x6d\x6f\x76\x65"
  "\x2d\x6c\x69\x6e\x6b\x02\x03\x03\x05\x0d\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x77\x69\x6e\x64\x03\x17\x66\x69\x6c\x65\x2d\x6d\x6f\x64"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x39\x03"
  "\x18\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x0e\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x63\x6c\x6f\x73\x65\x03\x14\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x2d\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68\x3a\x03\x0b\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x3b\x05\x10\x73\x65\x74\x2d"
  "\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x73\x21\x3c\x04\x10\x73\x65"
  "\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x21\x3d\x03\x19"
  "\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x06\x13\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x72\x65\x61\x64\x2d\x62\x6c\x6f\x63\x6b\x06\x14\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x2d\x77\x72\x69\x74\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x0e\xcd\x01\x3c\xfd\xff\x03\xcc\x01\x3a\xfd\xff\x03\xcb\x01"
  "\x38\xfd\xff\x03\xca\x01\x36\x81\x85\x02\xc9\x01\x34\x81\x87\x02"
  "\xc8\x01\x32\x81\x85\x02\xc7\x01\x30\x81\x87\x02\xc6\x01\x2e\x81"
  "\x85\x02\xc5\x01\x2c\x81\x85\x02\xc4\x01\x2a\x81\x85\x02\xc3\x01"
  "\x28\x81\x83\x02\xc2\x01\x26\x81\x85\x02\xc1\x01\x24\x81\x83\x02"
  "\xc0\x01\x22\x81\x85\x02\xbf\x01\x20\x81\x85\x02\xbe\x01\x1e\x81"
  "\x83\x02\xbd\x01\x1c\x81\x83\x02\xbc\x01\x1a\x81\x87\x02\xbb\x01"
  "\x18\x81\x85\x02\xba\x01\x16\x81\x83\x02\xb9\x01\x14\x81\x83\x02"
  "\xb8\x01\x12\x81\x83\x02\xb7\x01\x10\x81\x83\x02\xb6\x01\x0e\x81"
  "\x85\x02\xb5\x01\x0c\x81\x87\x02\xb4\x01\x0a\x81\x85\x02\xb3\x01"
  "\x08\x81\x87\x02\xb2\x01\x06\x81\x85\x02\xb1\x01\x04\x84\x06\x3b"
  "\x5e\x3e\x02\x29\x1e\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x69"
  "\x6e\x69\x74\x2d\x66\x69\x6c\x65\x20\x6d\x61\x70\x20\x69\x74\x65"
  "\x6d\x3a\x04\x63\x61\x72\x3f\x04\x69\x6e\x69\x01\x31\x05\x2e\x64"
  "\x61\x74\x04\x63\x64\x72\x40\x02\x0e\x6d\x69\x74\x73\x63\x68\x65"
  "\x6d\x2e\x69\x6e\x69\x2f\x0c\x66\x69\x6c\x65\x6d\x61\x70\x2e\x64"
  "\x61\x74\x1e\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65"
  "\x63\x69\x66\x69\x65\x72\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x41\x04\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x69"
  "\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65\x72"
  "\x02\x16\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x04\x05\x03\x0e\x6f\x70\x65\x6e\x2d"
  "\x69\x2f\x6f\x2d\x66\x69\x6c\x65\x03\x0b\x63\x6c\x6f\x73\x65\x2d"
  "\x70\x6f\x72\x74\x03\x05\x72\x65\x61\x64\x03\x0e\x03\x0c\x65\x6f"
  "\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x05\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x05\x10\x73\x74\x72\x69\x6e\x67"
  "\x2d\x70\x61\x64\x2d\x6c\x65\x66\x74\x03\x15\x69\x6e\x69\x74\x2d"
  "\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3f\x04"
  "\x0f\x04\x06\x61\x73\x73\x6f\x63\x0e\x03\x14\x70\x6f\x72\x74\x2f"
  "\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x0d"
  "\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x04\x06\x77\x72"
  "\x69\x74\x65\x03\x3a\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x1a"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x73\x65\x74"
  "\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x15\xec\x01\x40\x81\x85\x02"
  "\xeb\x01\x3e\x81\x85\x02\xea\x01\x3c\x81\x87\x02\xe9\x01\x3a\x81"
  "\x85\x02\xe8\x01\x38\x81\x8d\x02\xe7\x01\x36\x81\x8b\x02\xe6\x01"
  "\x34\x81\x8b\x02\xe5\x01\x32\x81\x8f\x02\xe4\x01\x30\x81\x8d\x02"
  "\xe3\x01\x2e\x81\x8d\x02\xe2\x01\x2c\x81\x8d\x02\xe1\x01\x2a\x81"
  "\x8d\x02\xe0\x01\x28\x81\x93\x02\xdf\x01\x26\x81\x8d\x02\xde\x01"
  "\x24\x81\x89\x02\xdd\x01\x22\x81\x8b\x02\xdc\x01\x20\x81\x89\x02"
  "\xdb\x01\x1e\x81\x83\x02\xda\x01\x1c\x81\x8b\x02\xd9\x01\x1a\x81"
  "\x83\x02\xd8\x01\x18\x81\x85\x02\xd7\x01\x16\x81\x85\x02\xd6\x01"
  "\x14\x81\x83\x02\xd5\x01\x12\x81\x83\x02\xd4\x01\x10\x81\x83\x02"
  "\xd3\x01\x0e\x81\x83\x02\xd2\x01\x0c\x81\x85\x02\xd1\x01\x0a\x81"
  "\x85\x02\xd0\x01\x08\x81\x83\x02\xcf\x01\x06\x81\x83\x02\xce\x01"
  "\x04\x83\x04\x3f\x78\x3a\x02\x2a\x02\x1b\x63\x6f\x6e\x73\x6f\x6c"
  "\x65\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x6f\x72\x02\xee\x01\x06\x81\x81\x02\xed\x01\x04\x82\x02"
  "\x05\x0c\x2a\x04\x3a\x04\x3e\x04\x38\x04\x37\x04\x36\x04\x32\x04"
  "\x33\x04\x30\x04\x31\x04\x2f\x04\x0d\x35\x41\x0a\x63\x6f\x70\x79"
  "\x2d\x66\x69\x6c\x65\x17\x64\x6f\x73\x2f\x66\x73\x2d\x6c\x6f\x6e"
  "\x67\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x3f\x12\x64\x6f\x73"
  "\x2f\x66\x73\x2d\x64\x72\x69\x76\x65\x2d\x74\x79\x70\x65\x1e\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79\x73\x74\x65\x6d"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x21\x14\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67"
  "\x11\x66\x69\x6c\x65\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e"
  "\x67\x11\x64\x65\x6c\x65\x74\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x0f\x6d\x61\x6b\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x0b\x66\x69\x6c\x65\x2d\x74\x6f\x75\x63\x68\x0d\x1b\x64\x6f"
  "\x73\x2f\x63\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x16\x64\x6f\x73\x2f\x63\x75"
  "\x72\x72\x65\x6e\x74\x2d\x75\x73\x65\x72\x2d\x6e\x61\x6d\x65\x22"
  "\x73\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x21\x41\x18\x64\x6f\x73\x2f\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x40\x09\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x34\x11\x65\x6e\x63\x6f\x64\x65\x2d\x66\x69\x6c"
  "\x65\x2d\x74\x69\x6d\x65\x02\x19\x67\x65\x74\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x1b\x56\x61\x72\x69\x61\x62\x6c\x65\x20\x6d\x75\x73\x74\x20\x62"
  "\x65\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x3a\x1d\x64\x65\x6c\x65"
  "\x74\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x21\x40\x11\x64\x65\x63\x6f\x64\x65"
  "\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x1a\x73\x65\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x21\x3f\x2b\x29\x18\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x3e"
  "\x1e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61"
  "\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x3a\x26"
  "\x25\x17\x63\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x38\x2d\x04\x2e\x04\x2c\x04\x2a"
  "\x04\x0d\x08\x28\x04\x27\x04\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x34\x40\x41\x3f\x11"
  "\x3c\x24\x06\x11\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d"
  "\x74\x69\x6d\x65\x1a\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73"
  "\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x18\x66"
  "\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x20\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x41\x23\x14\x72\x74\x64\x3a\x66\x69\x6c"
  "\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x39\x0c\x66\x69"
  "\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68\x1d\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x69\x6e\x6f\x64\x65\x2d"
  "\x6e\x75\x6d\x62\x65\x72\x1c\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x17\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74"
  "\x65\x73\x2f\x6c\x65\x6e\x67\x74\x68\x1c\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x63\x68\x61\x6e\x67\x65"
  "\x2d\x74\x69\x6d\x65\x22\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x69\x6d\x65\x1c\x66\x69\x6c\x65\x2d\x61\x74\x74"
  "\x72\x69\x62\x75\x74\x65\x73\x2f\x61\x63\x63\x65\x73\x73\x2d\x74"
  "\x69\x6d\x65\x14\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75"
  "\x74\x65\x73\x2f\x67\x69\x64\x14\x66\x69\x6c\x65\x2d\x61\x74\x74"
  "\x72\x69\x62\x75\x74\x65\x73\x2f\x75\x69\x64\x18\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6e\x2d\x6c\x69"
  "\x6e\x6b\x73\x15\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75"
  "\x74\x65\x73\x2f\x74\x79\x70\x65\x0d\x22\x04\x21\x04\x20\x04\x1f"
  "\x04\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04\x18\x04\x17"
  "\x04\x0d\x07\x76\x65\x63\x74\x6f\x72\x10\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x0d\x69\x6e\x6f\x64\x65\x2d"
  "\x6e\x75\x6d\x62\x65\x72\x0c\x6d\x6f\x64\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x07\x6c\x65\x6e\x67\x74\x68\x0c\x63\x68\x61\x6e\x67\x65"
  "\x2d\x74\x69\x6d\x65\x12\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x69\x6d\x65\x0c\x61\x63\x63\x65\x73\x73\x2d\x74"
  "\x69\x6d\x65\x04\x67\x69\x64\x04\x75\x69\x64\x08\x6e\x2d\x6c\x69"
  "\x6e\x6b\x73\x05\x74\x79\x70\x65\x0b\x0a\x09\x08\x0b\x0b\x19\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x69"
  "\x6e\x64\x69\x72\x65\x63\x74\x17\x66\x69\x6c\x65\x2d\x61\x74\x74"
  "\x72\x69\x62\x75\x74\x65\x73\x2d\x64\x69\x72\x65\x63\x74\x16\x0c"
  "\x18\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x15\x04\x14\x04\x10\x04\x0f\x66"
  "\x69\x6c\x65\x2d\x77\x72\x69\x74\x61\x62\x6c\x65\x3f\x13\x0f\x66"
  "\x69\x6c\x65\x2d\x72\x65\x61\x64\x61\x62\x6c\x65\x3f\x04\x0b\x04"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x10\x64\x6f\x73\x2f\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73"
  "\x73\x0a\x3d\x3b\x14\x66\x69\x6c\x65\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x12\x09\x04\x04\x04\x04\x04\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74"
  "\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x03\x0a\x13\x16"
  "\x39\x23\x41\x3a\x3e\x26\x25\x38\x0c\x03\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x75\x70\x63\x61\x73\x65\x04\x0e\x05\x0f\x03\x0b\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x3f\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x07\x46\x8e\x01\x80\x80\x04\x45\x8c\x01\x81\x81"
  "\x02\x44\x8a\x01\x81\x81\x02\x43\x88\x01\x81\x89\x02\x42\x86\x01"
  "\x81\x8b\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x87\x02\x3f"
  "\x80\x01\x81\x85\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x87\x02\x3c"
  "\x7a\x81\x87\x02\x3b\x78\x81\x85\x02\x3a\x76\x81\x87\x02\x39\x74"
  "\x81\x87\x02\x38\x72\x81\x85\x02\x37\x70\x81\x83\x02\x36\x6e\x81"
  "\x83\x02\x35\x6c\x81\x87\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83"
  "\x02\x32\x66\x81\x87\x02\x31\x64\x81\x89\x02\x30\x62\x81\x87\x02"
  "\x2f\x60\x81\x83\x02\x2e\x5e\x83\x04\x2d\x5c\x81\x83\x02\x2c\x5a"
  "\x81\x87\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81"
  "\x87\x02\x28\x52\x81\x87\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x89"
  "\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x85\x02\x23\x48\x81\x87\x02"
  "\x22\x46\x81\x87\x02\x21\x44\x81\x87\x02\x20\x42\x81\x85\x02\x1f"
  "\x40\x81\x83\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x85\x02\x1c\x3a"
  "\x81\x85\x02\x1b\x38\x81\x87\x02\x1a\x36\x81\x83\x02\x19\x34\x81"
  "\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83"
  "\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02"
  "\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f"
  "\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c\x1a"
  "\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81"
  "\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83"
  "\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02"
  "\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x8d\x01\xe0\x01";

SCHEME_OBJECT *
dosprm_so_data_1d91afcff2cfcbb1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dosprm_so_data_1d91afcff2cfcbb1 [0]))), (sizeof (prog_dosprm_so_data_1d91afcff2cfcbb1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_87]));
}

DECLARE_COMPILED_DATA_NS ("dosprm.so", dosprm_so_data_1d91afcff2cfcbb1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dosprm.so", "c44b09013e4a1d47")
