/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:45-07 by Liar version 4.118. */

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
os2prm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_modes_2;

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

DEFLABEL (file_modes_5)
DEFLABEL (file_modes_2)
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
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_7 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto set_file_modesB_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_modesB_5)
DEFLABEL (set_file_modesB_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
os2prm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_length_2;

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

DEFLABEL (file_length_5)
DEFLABEL (file_length_2)
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
os2prm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_modification_time_2;

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

DEFLABEL (file_modification_time_5)
DEFLABEL (file_modification_time_2)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

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
os2prm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_access_time_2;

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

DEFLABEL (file_access_time_5)
DEFLABEL (file_access_time_2)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto set_file_timesB_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_timesB_5)
DEFLABEL (set_file_timesB_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define LABEL_7_11 17
#define LABEL_7_12 19
#define LABEL_7_13 21
#define LABEL_7_14 23
#define LABEL_7_15 25
#define LABEL_7_16 27
#define ENVIRONMENT_LABEL_7_3 37
#define DEBUGGING_LABEL_7_2 36
#define OBJECT_7_4 35
#define OBJECT_7_3 34
#define OBJECT_7_2 33
#define OBJECT_7_1 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_17 29
#define FREE_REFERENCES_LABEL_7_0 28
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_7_4);
      goto file_time__local_decoded_time_22;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_7_15);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_7_16);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_decoded_time_27)
DEFLABEL (file_time__local_decoded_time_22)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_0)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_4)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_5)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_7)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_8)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_9)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [8]) = (Wrd6.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_31;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd19.Lng) + 1980L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_31;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_30)
  (Rsp [10]) = (Wrd12.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_29;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (multiply_with_overflow ((Wrd30.Lng), 2, (& (Wrd28.Lng))))
    goto label_29;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [1]);
  (Rsp [9]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Rsp [7]) = (Wrd34.Obj);
  (Rsp [5]) = (Wrd25.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [9]);
  (Wrd21.Obj) = (current_block [OBJECT_7_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_25)
  (Wrd25.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd7.Obj) = (current_block [OBJECT_7_3]);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (Wrd12.Obj) = Rvl;
  goto label_30;

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
os2prm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_time__global_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_decoded_time_4)
DEFLABEL (file_time__global_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_11 13
#define LABEL_9_12 15
#define LABEL_9_17 17
#define LABEL_9_18 19
#define LABEL_9_14 21
#define LABEL_9_15 23
#define LABEL_9_19 25
#define LABEL_9_20 27
#define LABEL_9_24 29
#define LABEL_9_22 31
#define LABEL_9_25 33
#define ENVIRONMENT_LABEL_9_3 56
#define DEBUGGING_LABEL_9_2 55
#define OBJECT_9_5 54
#define OBJECT_9_4 53
#define OBJECT_9_3 52
#define OBJECT_9_2 51
#define OBJECT_9_1 50
#define OBJECT_9_0 49
#define EXECUTE_CACHE_9_26 35
#define EXECUTE_CACHE_9_23 37
#define EXECUTE_CACHE_9_21 39
#define EXECUTE_CACHE_9_16 41
#define EXECUTE_CACHE_9_13 43
#define EXECUTE_CACHE_9_10 45
#define EXECUTE_CACHE_9_7 47
#define FREE_REFERENCES_LABEL_9_0 34
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto decoded_time__file_time_18;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_9_17);
      goto lambda_1;

    case 8:
      current_block = (Rpc - LABEL_9_18);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_9_25);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__file_time_23)
DEFLABEL (decoded_time__file_time_18)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) < 1980L)
    goto label_26;

DEFLABEL (label_25)
  (Wrd12.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_1;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_16)
  (Rsp [2]) = Rvl;
  goto lambda_1;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_24);
  goto label_25;

DEFLABEL (label_27)
  (Wrd19.Obj) = (current_block [OBJECT_9_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (lambda_24)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_17);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_31;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_31;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_31;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 26)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_29)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_28;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_28;
  Rvl = (LONG_TO_FIXNUM (Wrd25.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto file_time__universal_time_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__universal_time_4)
DEFLABEL (file_time__universal_time_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto universal_time__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__file_time_4)
DEFLABEL (universal_time__file_time_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 15
#define DEBUGGING_LABEL_12_2 14
#define OBJECT_12_0 13
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_7 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto file_attributes_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_5)
DEFLABEL (file_attributes_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
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
os2prm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_type_3)
DEFLABEL (file_attributes_type_0)
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
os2prm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_access_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_access_time_3)
DEFLABEL (file_attributes_access_time_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
os2prm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_modification_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modification_time_3)
DEFLABEL (file_attributes_modification_time_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
os2prm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_change_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_change_time_3)
DEFLABEL (file_attributes_change_time_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
os2prm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_length_3)
DEFLABEL (file_attributes_length_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
os2prm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_mode_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_mode_string_3)
DEFLABEL (file_attributes_mode_string_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
os2prm_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_modes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modes_3)
DEFLABEL (file_attributes_modes_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
os2prm_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_allocated_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_allocated_length_3)
DEFLABEL (file_attributes_allocated_length_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 6
#define DEBUGGING_LABEL_21_2 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_n_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_n_links_3)
DEFLABEL (file_attributes_n_links_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 6
#define DEBUGGING_LABEL_22_2 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto get_environment_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_environment_variable_3)
DEFLABEL (get_environment_variable_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_12 9
#define LABEL_23_10 11
#define LABEL_23_9 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define LABEL_23_16 19
#define LABEL_23_17 21
#define LABEL_23_18 23
#define LABEL_23_25 25
#define LABEL_23_20 27
#define LABEL_23_26 29
#define LABEL_23_27 31
#define ENVIRONMENT_LABEL_23_3 63
#define DEBUGGING_LABEL_23_2 62
#define OBJECT_23_8 61
#define OBJECT_23_7 60
#define OBJECT_23_6 59
#define OBJECT_23_5 58
#define OBJECT_23_4 57
#define OBJECT_23_3 56
#define OBJECT_23_2 55
#define OBJECT_23_1 54
#define OBJECT_23_0 53
#define EXECUTE_CACHE_23_28 33
#define EXECUTE_CACHE_23_24 35
#define EXECUTE_CACHE_23_23 37
#define EXECUTE_CACHE_23_22 39
#define EXECUTE_CACHE_23_21 41
#define EXECUTE_CACHE_23_19 43
#define EXECUTE_CACHE_23_15 45
#define EXECUTE_CACHE_23_11 47
#define EXECUTE_CACHE_23_8 49
#define EXECUTE_CACHE_23_7 51
#define FREE_REFERENCES_LABEL_23_0 32
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_23_4);
      goto temporary_file_pathname_20;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_12);
      goto loop_17;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_23_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_23_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_23_18);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_23_25);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_23_20);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_23_26);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_23_27);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_file_pathname_25)
DEFLABEL (temporary_file_pathname_20)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_23_0])))
    goto label_30;

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 0);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_19]));

DEFLABEL (label_28)
  (Wrd19.Obj) = (current_block [OBJECT_23_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_27;

DEFLABEL (label_30)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_17;

DEFLABEL (loop_26)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_23_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_36;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd12.Lng) > 999L))
    goto label_34;

DEFLABEL (label_35)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_23_8]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23_25);

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_33;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_33;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_33)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (Wrd19.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd32.Obj) = (current_block [OBJECT_23_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_26]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_6 9
#define LABEL_24_8 11
#define LABEL_24_10 13
#define LABEL_24_12 15
#define LABEL_24_11 17
#define LABEL_24_17 19
#define LABEL_24_13 21
#define LABEL_24_14 23
#define LABEL_24_16 25
#define LABEL_24_18 27
#define LABEL_24_19 29
#define LABEL_24_21 31
#define LABEL_24_24 33
#define LABEL_24_26 35
#define LABEL_24_28 37
#define ENVIRONMENT_LABEL_24_3 64
#define DEBUGGING_LABEL_24_2 63
#define OBJECT_24_7 62
#define OBJECT_24_6 61
#define OBJECT_24_5 60
#define OBJECT_24_4 59
#define OBJECT_24_3 58
#define OBJECT_24_2 57
#define OBJECT_24_1 56
#define OBJECT_24_0 55
#define EXECUTE_CACHE_24_29 39
#define EXECUTE_CACHE_24_27 41
#define EXECUTE_CACHE_24_23 43
#define EXECUTE_CACHE_24_22 45
#define EXECUTE_CACHE_24_20 47
#define EXECUTE_CACHE_24_25 49
#define EXECUTE_CACHE_24_15 51
#define EXECUTE_CACHE_24_9 53
#define FREE_REFERENCES_LABEL_24_0 38
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto temporary_directory_pathname_28;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_24_17);
      goto lambda_11;

    case 9:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_24_18);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_24_21);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_24_26);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_24_28);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_directory_pathname_31)
DEFLABEL (temporary_directory_pathname_28)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_8;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_16);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_28);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd10.Obj) = (current_block [OBJECT_24_7]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_29]));

DEFLABEL (lambda_32)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_24_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto lambda_5;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_33)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_24_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_23]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = (Rsp [0]);
  goto label_44;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_34)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_24_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_18);
  (Rsp [0]) = Rvl;
  goto lambda_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_9 7
#define LABEL_25_7 9
#define LABEL_25_11 11
#define ENVIRONMENT_LABEL_25_3 27
#define DEBUGGING_LABEL_25_2 26
#define OBJECT_25_2 25
#define OBJECT_25_1 24
#define OBJECT_25_0 23
#define EXECUTE_CACHE_25_13 13
#define EXECUTE_CACHE_25_12 15
#define EXECUTE_CACHE_25_10 17
#define EXECUTE_CACHE_25_8 19
#define EXECUTE_CACHE_25_6 21
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_25_4);
      goto os2_system_root_directory_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os2_system_root_directory_8)
DEFLABEL (os2_system_root_directory_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25_2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_9);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_9 11
#define LABEL_26_12 13
#define LABEL_26_14 15
#define ENVIRONMENT_LABEL_26_3 31
#define DEBUGGING_LABEL_26_2 30
#define OBJECT_26_2 29
#define OBJECT_26_1 28
#define OBJECT_26_0 27
#define EXECUTE_CACHE_26_15 17
#define EXECUTE_CACHE_26_13 19
#define EXECUTE_CACHE_26_11 21
#define EXECUTE_CACHE_26_10 23
#define EXECUTE_CACHE_26_8 25
#define FREE_REFERENCES_LABEL_26_0 16
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_26_4);
      goto dos_fs_drive_type_9;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_drive_type_12)
DEFLABEL (dos_fs_drive_type_9)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_26_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_8 9
#define ENVIRONMENT_LABEL_27_3 19
#define DEBUGGING_LABEL_27_2 18
#define OBJECT_27_2 17
#define OBJECT_27_1 16
#define OBJECT_27_0 15
#define EXECUTE_CACHE_27_9 11
#define EXECUTE_CACHE_27_7 13
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_27_4);
      goto dos_fs_long_filenamesP_3;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_long_filenamesP_7)
DEFLABEL (dos_fs_long_filenamesP_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_12;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (Wrd13.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_27_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_10 9
#define LABEL_28_11 11
#define LABEL_28_12 13
#define LABEL_28_13 15
#define LABEL_28_14 17
#define LABEL_28_7 19
#define LABEL_28_16 21
#define ENVIRONMENT_LABEL_28_3 42
#define DEBUGGING_LABEL_28_2 41
#define OBJECT_28_11 40
#define OBJECT_28_10 39
#define OBJECT_28_9 38
#define OBJECT_28_8 37
#define OBJECT_28_7 36
#define OBJECT_28_6 35
#define OBJECT_28_5 34
#define OBJECT_28_4 33
#define OBJECT_28_3 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_15 23
#define EXECUTE_CACHE_28_9 25
#define EXECUTE_CACHE_28_6 27
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto file_line_ending_16;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_28_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_line_ending_24)
DEFLABEL (file_line_ending_16)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 1))
    goto label_43;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_42)
  (Wrd18.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_28_11]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_41;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (current_block [OBJECT_28_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_39;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_38)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_28_9]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 30))
    goto label_37;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));

DEFLABEL (label_36)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd55.Lng) + 1L);
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  Wrd57 = Wrd56;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if ((Wrd57.Lng) < (Wrd58.Lng))
    goto label_30;

DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_28_7]);
  goto label_25;

DEFLABEL (label_30)
  Wrd60 = Wrd53;
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 30))
    goto label_35;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_35;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [1]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) (Wrd57.Lng)) < ((unsigned long) (Wrd76.Lng))))
    goto label_35;
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd69.pChr) = (& ((Wrd74.pChr) [(Wrd66.Lng)]));
  (Wrd70.uLng) = ((unsigned long) (((unsigned char *) (Wrd69.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd64.Obj) = (MAKE_OBJECT (2, (Wrd70.uLng)));

DEFLABEL (label_34)
  if ((Wrd64.Obj) == (current_block [OBJECT_28_4]))
    goto label_32;
  (Wrd85.Obj) = (current_block [OBJECT_28_6]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd85.Obj) = (current_block [OBJECT_28_5]);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  if ((Wrd85.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_26;

DEFLABEL (label_35)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_22)
  (Wrd64.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_21)
  (Wrd42.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_8]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 6
#define DEBUGGING_LABEL_29_2 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto default_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_line_ending_3)
DEFLABEL (default_line_ending_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  Rvl = (current_block [OBJECT_29_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_10 13
#define EXECUTE_CACHE_30_7 15
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto copy_file_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_file_7)
DEFLABEL (copy_file_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 5
#define DEBUGGING_LABEL_31_2 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto os_suffix_mime_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_suffix_mime_type_3)
DEFLABEL (os_suffix_mime_type_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_10 11
#define LABEL_32_17 13
#define LABEL_32_15 15
#define LABEL_32_16 17
#define LABEL_32_21 19
#define LABEL_32_22 21
#define LABEL_32_18 23
#define LABEL_32_13 25
#define LABEL_32_14 27
#define LABEL_32_23 29
#define LABEL_32_24 31
#define TAG_32_25 14
#define LABEL_32_26 33
#define TAG_32_27 15
#define LABEL_32_28 35
#define TAG_32_29 16
#define LABEL_32_31 37
#define LABEL_32_37 39
#define LABEL_32_34 41
#define LABEL_32_33 43
#define LABEL_32_38 45
#define LABEL_32_35 47
#define LABEL_32_41 49
#define LABEL_32_39 51
#define LABEL_32_42 53
#define LABEL_32_43 55
#define LABEL_32_44 57
#define LABEL_32_52 59
#define LABEL_32_53 61
#define LABEL_32_54 63
#define LABEL_32_46 65
#define LABEL_32_55 67
#define LABEL_32_48 69
#define LABEL_32_62 71
#define LABEL_32_49 73
#define LABEL_32_59 75
#define LABEL_32_60 77
#define LABEL_32_64 79
#define LABEL_32_66 81
#define ENVIRONMENT_LABEL_32_3 148
#define DEBUGGING_LABEL_32_2 147
#define OBJECT_32_15 146
#define OBJECT_32_14 145
#define OBJECT_32_13 144
#define OBJECT_32_12 143
#define OBJECT_32_11 142
#define OBJECT_32_10 141
#define OBJECT_32_9 140
#define OBJECT_32_8 139
#define OBJECT_32_7 138
#define OBJECT_32_6 137
#define OBJECT_32_5 136
#define OBJECT_32_4 135
#define OBJECT_32_3 134
#define OBJECT_32_2 133
#define OBJECT_32_1 132
#define OBJECT_32_0 131
#define EXECUTE_CACHE_32_69 83
#define EXECUTE_CACHE_32_68 85
#define EXECUTE_CACHE_32_67 87
#define EXECUTE_CACHE_32_65 89
#define EXECUTE_CACHE_32_63 91
#define EXECUTE_CACHE_32_61 93
#define EXECUTE_CACHE_32_58 95
#define EXECUTE_CACHE_32_57 97
#define EXECUTE_CACHE_32_56 99
#define EXECUTE_CACHE_32_51 101
#define EXECUTE_CACHE_32_50 103
#define EXECUTE_CACHE_32_47 105
#define EXECUTE_CACHE_32_45 107
#define EXECUTE_CACHE_32_40 109
#define EXECUTE_CACHE_32_36 111
#define EXECUTE_CACHE_32_32 113
#define EXECUTE_CACHE_32_30 115
#define EXECUTE_CACHE_32_20 117
#define EXECUTE_CACHE_32_19 119
#define EXECUTE_CACHE_32_12 121
#define EXECUTE_CACHE_32_11 123
#define EXECUTE_CACHE_32_9 125
#define EXECUTE_CACHE_32_6 127
#define FREE_REFERENCE_32_0 130
#define FREE_REFERENCES_LABEL_32_0 82
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_32_4);
      goto init_file_specifier__pathname_64;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_17);
      goto label_66;

    case 6:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_37;

    case 7:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_35;

    case 8:
      current_block = (Rpc - LABEL_32_21);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_32_22);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_32_18);
      goto lambda_33;

    case 11:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_32_23);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_32_24);
      goto lambda_75;

    case 15:
      current_block = (Rpc - LABEL_32_26);
      goto lambda_76;

    case 16:
      current_block = (Rpc - LABEL_32_28);
      goto lambda_77;

    case 17:
      current_block = (Rpc - LABEL_32_31);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_32_37);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_32_34);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_32_33);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_32_38);
      goto loop_50;

    case 22:
      current_block = (Rpc - LABEL_32_35);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_32_41);
      goto loop_61;

    case 24:
      current_block = (Rpc - LABEL_32_39);
      goto continuation_40;

    case 25:
      current_block = (Rpc - LABEL_32_42);
      goto continuation_56;

    case 26:
      current_block = (Rpc - LABEL_32_43);
      goto continuation_55;

    case 27:
      current_block = (Rpc - LABEL_32_44);
      goto continuation_54;

    case 28:
      current_block = (Rpc - LABEL_32_52);
      goto continuation_44;

    case 29:
      current_block = (Rpc - LABEL_32_53);
      goto label_71;

    case 30:
      current_block = (Rpc - LABEL_32_54);
      goto continuation_47;

    case 31:
      current_block = (Rpc - LABEL_32_46);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_32_55);
      goto label_69;

    case 33:
      current_block = (Rpc - LABEL_32_48);
      goto continuation_58;

    case 34:
      current_block = (Rpc - LABEL_32_62);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_32_49);
      goto continuation_57;

    case 36:
      current_block = (Rpc - LABEL_32_59);
      goto continuation_16;

    case 37:
      current_block = (Rpc - LABEL_32_60);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_32_64);
      goto continuation_20;

    case 39:
      current_block = (Rpc - LABEL_32_66);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_specifier__pathname_73)
DEFLABEL (init_file_specifier__pathname_64)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_32_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_24])));
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
  (* (Rhp++)) = (dispatch_base + TAG_32_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_26])));
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
  (* (Rhp++)) = (dispatch_base + TAG_32_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_28])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (label_80)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_81;
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

DEFLABEL (label_81)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_87;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_86)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_85;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_84)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_83;
  Wrd18 = Wrd22;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_22])), (Wrd19.pObj));

DEFLABEL (label_68)
  (Wrd18.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 1);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (lambda_74)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_32_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_32_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_32_6]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_32_24);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_31);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_32_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_32_26);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_50;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_34);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd23.uLng) == 1)
    goto label_88;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_88)
  (Wrd21.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_91)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_89;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto loop_61;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_90)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_91;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_33);
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_32_28);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;
  Rvl = (current_block [OBJECT_32_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_36]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_32_35);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  ((Wrd8.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_32_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_78)
DEFLABEL (loop_50)
  INTERRUPT_CHECK (26, LABEL_32_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_40]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_32_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_47]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_32_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_58]));

DEFLABEL (label_94)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_54]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_32_15]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_57]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_32_54);

DEFLABEL (label_95)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_50;

DEFLABEL (label_97)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_52]))));
  (* (--Rsp)) = (Wrd21.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_101;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_100)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_32_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_99;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_98)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd48.uLng) == 30)
    goto label_95;
  goto label_96;

DEFLABEL (label_99)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_53]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_71)
  (Wrd39.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_55]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (loop_79)
DEFLABEL (loop_61)
  INTERRUPT_CHECK (26, LABEL_32_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_44]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_45]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_32_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_51]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_32_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_50]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_32_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_32_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_63]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_32_48);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_102;
  (Wrd19.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_59]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_60]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_61]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32_60);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_66]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_67]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32_66);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_69]));

DEFLABEL (label_102)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_104;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_104;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_61;

DEFLABEL (label_104)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_64]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_65]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_32_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_68]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_32_37);
  (Wrd27.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_90;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
os2prm_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto initialize_system_primitivesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_system_primitivesB_3)
DEFLABEL (initialize_system_primitivesB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  Rvl = (current_block [OBJECT_33_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_10 7
#define LABEL_34_6 9
#define LABEL_34_7 11
#define LABEL_34_11 13
#define ENVIRONMENT_LABEL_34_3 26
#define DEBUGGING_LABEL_34_2 25
#define OBJECT_34_1 24
#define OBJECT_34_0 23
#define EXECUTE_CACHE_34_13 15
#define EXECUTE_CACHE_34_12 17
#define EXECUTE_CACHE_34_9 19
#define EXECUTE_CACHE_34_8 21
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto os_make_subprocess_5;

    case 2:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_make_subprocess_8)
DEFLABEL (os_make_subprocess_5)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);

DEFLABEL (label_11)
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 7);

DEFLABEL (label_10)
  (Wrd16.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define LABEL_35_13 11
#define LABEL_35_14 13
#define LABEL_35_16 15
#define LABEL_35_8 17
#define LABEL_35_9 19
#define LABEL_35_18 21
#define LABEL_35_10 23
#define LABEL_35_20 25
#define LABEL_35_21 27
#define LABEL_35_22 29
#define LABEL_35_23 31
#define LABEL_35_24 33
#define LABEL_35_12 35
#define LABEL_35_15 37
#define LABEL_35_25 39
#define LABEL_35_26 41
#define LABEL_35_27 43
#define LABEL_35_28 45
#define LABEL_35_29 47
#define LABEL_35_30 49
#define ENVIRONMENT_LABEL_35_3 70
#define DEBUGGING_LABEL_35_2 69
#define OBJECT_35_9 68
#define OBJECT_35_8 67
#define OBJECT_35_7 66
#define OBJECT_35_6 65
#define OBJECT_35_5 64
#define OBJECT_35_4 63
#define OBJECT_35_3 62
#define OBJECT_35_2 61
#define OBJECT_35_1 60
#define OBJECT_35_0 59
#define EXECUTE_CACHE_35_19 51
#define EXECUTE_CACHE_35_17 53
#define EXECUTE_CACHE_35_11 55
#define FREE_REFERENCE_35_0 58
#define FREE_REFERENCES_LABEL_35_0 50
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd17;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd53;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_35_4);
      goto os2_rewrite_subprocess_arguments_39;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_35_13);
      goto label_43;

    case 5:
      current_block = (Rpc - LABEL_35_14);
      goto label_44;

    case 6:
      current_block = (Rpc - LABEL_35_16);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_35_18);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_35_10);
      goto lambda_8;

    case 11:
      current_block = (Rpc - LABEL_35_20);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_35_21);
      goto continuation_24;

    case 13:
      current_block = (Rpc - LABEL_35_22);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_35_23);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_35_24);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_35_25);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_35_26);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_35_27);
      goto loop_34;

    case 21:
      current_block = (Rpc - LABEL_35_28);
      goto label_50;

    case 22:
      current_block = (Rpc - LABEL_35_29);
      goto label_51;

    case 23:
      current_block = (Rpc - LABEL_35_30);
      goto label_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os2_rewrite_subprocess_arguments_57)
DEFLABEL (os2_rewrite_subprocess_arguments_39)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;
  (Wrd10.Obj) = (current_block [OBJECT_35_2]);
  (Wrd11.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_35_2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);

DEFLABEL (label_73)
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_71;
  Wrd6 = Wrd10;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_6]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_69;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_68)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 30))
    goto label_67;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_66)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_35_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd36.Obj) = (Rsp [8]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_65;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_63;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_63;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) (Wrd28.Lng)) < ((unsigned long) (Wrd32.Lng))))
    goto label_63;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd22.pChr) = (& ((Wrd30.pChr) [(Wrd19.Lng)]));
  (Wrd23.Obj) = (current_block [OBJECT_35_9]);
  ((Wrd22.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd23.Obj)));

DEFLABEL (label_62)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [1]) = (Wrd14.Obj);
  goto loop_34;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_35_9]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_25]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_49)
  goto label_62;

DEFLABEL (label_65)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_43)
  (Wrd8.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_18])), (Wrd7.pObj));

DEFLABEL (label_46)
  (Wrd6.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_74)
  if (! ((Wrd6.uLng) == 1))
    goto label_79;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_78)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_77;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_76;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_75)
  (Wrd50.Obj) = (current_block [OBJECT_35_2]);
  (Wrd51.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  goto label_73;

DEFLABEL (label_76)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_42)
  (Wrd38.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd12.Obj) = (Rsp [0]);
  goto label_72;

DEFLABEL (label_79)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_41)
  (Wrd28.Obj) = Rvl;
  goto label_78;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_35_12);

DEFLABEL (label_80)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_58)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_35_10);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_82;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_81)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 1);

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (loop_59)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_35_27);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_97;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_96)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_95;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_94)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_35_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_93;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_35_21);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_91;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_90)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_85;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd19.Lng) + (Wrd21.Lng));
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_35_9]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd42.uLng) == 30)
    goto label_84;

DEFLABEL (label_83)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_84)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_83;
  Wrd36 = Wrd22;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_83;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd30.pChr) = (& ((Wrd38.pChr) [(Wrd27.Lng)]));
  ((Wrd30.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd24.Obj)));
  Rsp = (& (Rsp [4]));
  goto label_80;

DEFLABEL (label_85)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd48.Lng) = ((Wrd45.Lng) + (Wrd47.Lng));
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 30))
    goto label_89;
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_89;
  Wrd75 = Wrd48;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [1]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) (Wrd75.Lng)) < ((unsigned long) (Wrd79.Lng))))
    goto label_89;
  (Wrd68.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd71.pChr) = (& ((Wrd77.pChr) [(Wrd68.Lng)]));
  (Wrd72.Obj) = (current_block [OBJECT_35_7]);
  ((Wrd71.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd72.Obj)));

DEFLABEL (label_88)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_87;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_86)
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd65.Lng) = ((Wrd60.Lng) + (Wrd62.Lng));
  (Wrd66.Lng) = ((Wrd65.Lng) + 1L);
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));
  (Rsp [2]) = (Wrd64.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_34;

DEFLABEL (label_87)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_54)
  (Wrd49.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd84.Obj) = (current_block [OBJECT_35_7]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_23]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_55)
  goto label_88;

DEFLABEL (label_91)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_53)
  (Wrd7.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_30]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_96;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_10 11
#define LABEL_36_8 13
#define LABEL_36_12 15
#define LABEL_36_13 17
#define LABEL_36_14 19
#define LABEL_36_15 21
#define LABEL_36_17 23
#define LABEL_36_16 25
#define LABEL_36_19 27
#define LABEL_36_20 29
#define ENVIRONMENT_LABEL_36_3 47
#define DEBUGGING_LABEL_36_2 46
#define OBJECT_36_6 45
#define OBJECT_36_5 44
#define OBJECT_36_4 43
#define OBJECT_36_3 42
#define OBJECT_36_2 41
#define OBJECT_36_1 40
#define OBJECT_36_0 39
#define EXECUTE_CACHE_36_18 31
#define EXECUTE_CACHE_36_11 33
#define EXECUTE_CACHE_36_9 35
#define FREE_REFERENCE_36_0 38
#define FREE_REFERENCES_LABEL_36_0 30
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
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
      goto os2_rewrite_subprocess_environment_21;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_36_8);
      goto lambda_1;

    case 6:
      current_block = (Rpc - LABEL_36_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_36_13);
      goto loop_18;

    case 8:
      current_block = (Rpc - LABEL_36_14);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_36_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_36_17);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_36_19);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_36_20);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os2_rewrite_subprocess_environment_31)
DEFLABEL (os2_rewrite_subprocess_environment_21)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_35;
  Wrd6 = Wrd10;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_18;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_10])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_32)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_36_8);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_37;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_36)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (loop_33)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_36_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  if (! ((Wrd6.uLng) == 1))
    goto label_48;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_47)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_46;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_45)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_44;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + (Wrd9.Lng));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 30))
    goto label_42;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_42;
  Wrd37 = Wrd10;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_42;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd33.pChr) = (& ((Wrd39.pChr) [(Wrd30.Lng)]));
  (Wrd34.Obj) = (current_block [OBJECT_36_4]);
  ((Wrd33.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd34.Obj)));

DEFLABEL (label_41)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_40;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd27.Lng) = ((Wrd22.Lng) + (Wrd24.Lng));
  (Wrd28.Lng) = ((Wrd27.Lng) + 1L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (Rsp [2]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_40)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_36_4]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_29)
  goto label_41;

DEFLABEL (label_44)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_25)
  (Wrd10.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_5 3
#define LABEL_37_4 5
#define LABEL_37_10 7
#define LABEL_37_11 9
#define LABEL_37_12 11
#define LABEL_37_13 13
#define LABEL_37_14 15
#define LABEL_37_15 17
#define LABEL_37_16 19
#define LABEL_37_18 21
#define LABEL_37_20 23
#define TAG_37_36 10
#define LABEL_37_21 25
#define LABEL_37_23 27
#define LABEL_37_6 29
#define LABEL_37_24 31
#define LABEL_37_8 33
#define LABEL_37_25 35
#define LABEL_37_27 37
#define TAG_37_28 17
#define LABEL_37_29 39
#define TAG_37_30 18
#define LABEL_37_31 41
#define LABEL_37_33 43
#define LABEL_37_35 45
#define LABEL_37_37 47
#define LABEL_37_39 49
#define LABEL_37_43 51
#define LABEL_37_45 53
#define LABEL_37_41 55
#define LABEL_37_44 57
#define LABEL_37_17 59
#define LABEL_37_47 61
#define LABEL_37_48 63
#define ENVIRONMENT_LABEL_37_3 94
#define DEBUGGING_LABEL_37_2 93
#define OBJECT_37_3 92
#define OBJECT_37_2 91
#define OBJECT_37_1 90
#define OBJECT_37_0 89
#define EXECUTE_CACHE_37_46 65
#define EXECUTE_CACHE_37_42 67
#define EXECUTE_CACHE_37_40 69
#define EXECUTE_CACHE_37_34 71
#define EXECUTE_CACHE_37_32 73
#define EXECUTE_CACHE_37_26 75
#define EXECUTE_CACHE_37_22 77
#define EXECUTE_CACHE_37_38 79
#define EXECUTE_CACHE_37_19 81
#define EXECUTE_CACHE_37_9 83
#define EXECUTE_CACHE_37_7 85
#define FREE_REFERENCE_37_0 88
#define FREE_REFERENCES_LABEL_37_0 64
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_37_4);
      goto os_find_program_51;

    case 2:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_28;

    case 3:
      current_block = (Rpc - LABEL_37_11);
      goto label_59;

    case 4:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_37;

    case 5:
      current_block = (Rpc - LABEL_37_13);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_37_14);
      goto continuation_38;

    case 7:
      current_block = (Rpc - LABEL_37_15);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_37_16);
      goto loop_31;

    case 9:
      current_block = (Rpc - LABEL_37_18);
      goto label_56;

    case 10:
      current_block = (Rpc - LABEL_37_20);
      goto loop_42;

    case 11:
      current_block = (Rpc - LABEL_37_21);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_37_23);
      goto continuation_49;

    case 13:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_37_24);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_37_25);
      goto continuation_48;

    case 17:
      current_block = (Rpc - LABEL_37_27);
      goto lambda_18;

    case 18:
      current_block = (Rpc - LABEL_37_29);
      goto lambda_21;

    case 19:
      current_block = (Rpc - LABEL_37_31);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_37_33);
      goto continuation_5;

    case 21:
      current_block = (Rpc - LABEL_37_35);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_37_37);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_37_39);
      goto continuation_15;

    case 24:
      current_block = (Rpc - LABEL_37_43);
      goto loop_13;

    case 25:
      current_block = (Rpc - LABEL_37_45);
      goto label_55;

    case 26:
      current_block = (Rpc - LABEL_37_41);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_37_44);
      goto continuation_9;

    case 28:
      current_block = (Rpc - LABEL_37_17);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_37_47);
      goto continuation_10;

    case 30:
      current_block = (Rpc - LABEL_37_48);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_find_program_62)
DEFLABEL (os_find_program_51)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_37_0])))
    goto label_71;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_70)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_27])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_29])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_37_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_18;

DEFLABEL (label_68)
  (Wrd9.Obj) = (Rsp [5]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_20])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_42;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_38]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_37_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_31;

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_70;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;

DEFLABEL (label_78)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;

DEFLABEL (label_72)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_77;
  Wrd10 = Wrd14;

DEFLABEL (label_76)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_37_0])))
    goto label_75;

DEFLABEL (label_74)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_26]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_37_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_32]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_37_23);
  goto label_72;

DEFLABEL (label_75)
  (Wrd17.Obj) = (Rsp [4]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_24])), (Wrd11.pObj));

DEFLABEL (label_53)
  (Wrd10.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_65)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_37_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_34]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_33);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_13;

DEFLABEL (label_80)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_40]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_39);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_42]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_37_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_26]));

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_66)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_37_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37_35);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_18;

DEFLABEL (loop_64)
DEFLABEL (loop_42)
  INTERRUPT_CHECK (26, LABEL_37_20);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_84;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_83)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_78;

DEFLABEL (label_84)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  if (! ((Wrd27.uLng) == 1))
    goto label_93;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_37_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_90;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_89)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [2]);
  (* (--Rsp)) = (Wrd93.Obj);
  goto lambda_21;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_37_14);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_88)
  (Wrd65.Obj) = (Rsp [0]);
  if ((Wrd65.Obj) == ((SCHEME_OBJECT) 0))
    goto label_85;
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_78;

DEFLABEL (label_85)
  (Wrd69.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd69.Obj);
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_87;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_86)
  (Rsp [2]) = (Wrd70.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_42;

DEFLABEL (label_87)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_57)
  (Wrd70.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_90)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_88;

DEFLABEL (label_93)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (loop_67)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_37_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_94;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_99;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_98)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_46]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_37_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_42]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_26]));

DEFLABEL (label_95)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_97;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_96)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_97)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_48]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_60)
  (Wrd9.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (loop_63)
DEFLABEL (loop_31)
  INTERRUPT_CHECK (26, LABEL_37_16);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 1)
    goto label_100;
  Rsp = (& (Rsp [6]));
  goto label_83;

DEFLABEL (label_100)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  if (! ((Wrd46.uLng) == 1))
    goto label_105;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_104)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_19]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_37_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_21;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  Rsp = (& (Rsp [7]));
  goto label_79;

DEFLABEL (label_101)
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_103;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_102)
  (Rsp [1]) = (Wrd100.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_31;

DEFLABEL (label_103)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_59)
  (Wrd100.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_104;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_5 7
#define ENVIRONMENT_LABEL_38_3 18
#define DEBUGGING_LABEL_38_2 17
#define OBJECT_38_1 16
#define OBJECT_38_0 15
#define EXECUTE_CACHE_38_9 9
#define EXECUTE_CACHE_38_8 11
#define EXECUTE_CACHE_38_6 13
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto os_exec_path_4;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_exec_path_7)
DEFLABEL (os_exec_path_4)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_7);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_8 11
#define LABEL_39_11 13
#define LABEL_39_13 15
#define LABEL_39_14 17
#define LABEL_39_12 19
#define LABEL_39_10 21
#define LABEL_39_16 23
#define LABEL_39_15 25
#define LABEL_39_17 27
#define ENVIRONMENT_LABEL_39_3 40
#define DEBUGGING_LABEL_39_2 39
#define OBJECT_39_3 38
#define OBJECT_39_2 37
#define OBJECT_39_1 36
#define OBJECT_39_0 35
#define EXECUTE_CACHE_39_19 29
#define EXECUTE_CACHE_39_18 31
#define EXECUTE_CACHE_39_9 33
#define FREE_REFERENCES_LABEL_39_0 28
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_39_4);
      goto os_parse_path_string_16;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_39_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_39_14);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_39_16);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_39_17);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_parse_path_string_24)
DEFLABEL (os_parse_path_string_16)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_13;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  DLINK_INTERRUPT_CHECK (25, LABEL_39_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_39;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_39;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd38.Lng) < (Wrd42.Lng))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_39_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_30)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.Obj) = ((Wrd74.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  goto lambda_2;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_31)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_38;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_38;
  if (Rvl == (Wrd11.Obj))
    goto label_35;

DEFLABEL (label_34)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_33;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_33;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_32)
  Rdl = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_2;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_33)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_37;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd63.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd61.Lng)))
    goto label_37;
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_36)
  (Wrd65.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd65.pObj) <= Rdl) ? (Wrd65.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_13;

DEFLABEL (label_37)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_20)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_39)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_19)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (lambda_26)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_39_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_17);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 15
#define DEBUGGING_LABEL_40_2 14
#define OBJECT_40_2 13
#define OBJECT_40_1 12
#define OBJECT_40_0 11
#define EXECUTE_CACHE_40_6 9
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_40_4);
      goto os_shell_file_name_4;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_shell_file_name_7)
DEFLABEL (os_shell_file_name_4)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_40_2]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_41_4);
      goto os_form_shell_command_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_form_shell_command_4)
DEFLABEL (os_form_shell_command_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_41_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_41_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 6
#define DEBUGGING_LABEL_42_2 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2prm_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto os_executable_pathname_types_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_executable_pathname_types_3)
DEFLABEL (os_executable_pathname_types_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  Rvl = (current_block [OBJECT_42_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_12 15
#define LABEL_11 17
#define LABEL_14 19
#define LABEL_13 21
#define LABEL_15 23
#define LABEL_17 25
#define LABEL_16 27
#define LABEL_19 29
#define LABEL_18 31
#define LABEL_20 33
#define LABEL_22 35
#define LABEL_21 37
#define LABEL_24 39
#define LABEL_23 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_30 51
#define TAG_31 24
#define LABEL_32 53
#define TAG_33 25
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_36 59
#define LABEL_37 61
#define TAG_38 29
#define LABEL_39 63
#define LABEL_41 65
#define LABEL_42 67
#define LABEL_44 69
#define LABEL_45 71
#define TAG_46 34
#define LABEL_47 73
#define LABEL_49 75
#define TAG_50 36
#define LABEL_51 77
#define LABEL_53 79
#define LABEL_52 81
#define LABEL_54 83
#define LABEL_55 85
#define LABEL_56 87
#define LABEL_63 89
#define LABEL_59 91
#define LABEL_67 93
#define LABEL_70 95
#define LABEL_72 97
#define LABEL_60 99
#define LABEL_73 101
#define LABEL_65 103
#define LABEL_64 105
#define LABEL_78 107
#define LABEL_79 109
#define LABEL_75 111
#define LABEL_76 113
#define LABEL_77 115
#define LABEL_74 117
#define LABEL_71 119
#define LABEL_68 121
#define LABEL_81 123
#define LABEL_82 125
#define LABEL_83 127
#define ENVIRONMENT_LABEL_3 199
#define DEBUGGING_LABEL_2 198
#define PURIFICATION_ROOT 197
#define OBJECT_36 196
#define OBJECT_35 195
#define OBJECT_34 194
#define OBJECT_33 193
#define OBJECT_32 192
#define OBJECT_31 191
#define OBJECT_30 190
#define OBJECT_29 189
#define OBJECT_28 188
#define OBJECT_27 187
#define OBJECT_26 186
#define OBJECT_25 185
#define OBJECT_24 184
#define OBJECT_23 183
#define OBJECT_22 182
#define OBJECT_21 181
#define OBJECT_20 180
#define OBJECT_19 179
#define OBJECT_18 178
#define OBJECT_17 177
#define OBJECT_16 176
#define OBJECT_15 175
#define OBJECT_14 174
#define OBJECT_13 173
#define OBJECT_12 172
#define OBJECT_11 171
#define OBJECT_10 170
#define OBJECT_9 169
#define OBJECT_8 168
#define OBJECT_7 167
#define OBJECT_6 166
#define OBJECT_5 165
#define OBJECT_4 164
#define OBJECT_3 163
#define OBJECT_2 162
#define OBJECT_1 161
#define OBJECT_0 160
#define EXECUTE_CACHE_69 129
#define EXECUTE_CACHE_66 131
#define EXECUTE_CACHE_62 133
#define EXECUTE_CACHE_61 135
#define EXECUTE_CACHE_80 137
#define EXECUTE_CACHE_58 139
#define EXECUTE_CACHE_57 141
#define EXECUTE_CACHE_48 143
#define EXECUTE_CACHE_43 145
#define EXECUTE_CACHE_40 147
#define FREE_REFERENCE_4 150
#define FREE_REFERENCE_3 151
#define FREE_REFERENCE_2 152
#define FREE_REFERENCE_1 153
#define FREE_REFERENCE_0 154
#define GLOBAL_EXECUTE_CACHE_27 156
#define GLOBAL_EXECUTE_CACHE_5 158
#define FREE_REFERENCES_LABEL_0 128
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
os2prm_so_5243ac72586e1050 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd24;
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
      goto label_74;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_75;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto label_76;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto label_77;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_78;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto label_79;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_80;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_81;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto lambda_83;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto lambda_84;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto lambda_18;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto lambda_19;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_34;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto lambda_85;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto continuation_20;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto continuation_17;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto continuation_49;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto lambda_88;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto continuation_26;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto lambda_89;

    case 37:
      current_block = (Rpc - LABEL_51);
      goto continuation_35;

    case 38:
      current_block = (Rpc - LABEL_53);
      goto continuation_27;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto continuation_28;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto continuation_50;

    case 41:
      current_block = (Rpc - LABEL_55);
      goto continuation_36;

    case 42:
      current_block = (Rpc - LABEL_56);
      goto continuation_29;

    case 43:
      current_block = (Rpc - LABEL_63);
      goto continuation_53;

    case 44:
      current_block = (Rpc - LABEL_59);
      goto continuation_51;

    case 45:
      current_block = (Rpc - LABEL_67);
      goto continuation_39;

    case 46:
      current_block = (Rpc - LABEL_70);
      goto continuation_40;

    case 47:
      current_block = (Rpc - LABEL_72);
      goto continuation_38;

    case 48:
      current_block = (Rpc - LABEL_60);
      goto continuation_37;

    case 49:
      current_block = (Rpc - LABEL_73);
      goto continuation_59;

    case 50:
      current_block = (Rpc - LABEL_65);
      goto continuation_55;

    case 51:
      current_block = (Rpc - LABEL_64);
      goto continuation_56;

    case 52:
      current_block = (Rpc - LABEL_78);
      goto continuation_61;

    case 53:
      current_block = (Rpc - LABEL_79);
      goto continuation_60;

    case 54:
      current_block = (Rpc - LABEL_75);
      goto continuation_64;

    case 55:
      current_block = (Rpc - LABEL_76);
      goto continuation_63;

    case 56:
      current_block = (Rpc - LABEL_77);
      goto continuation_62;

    case 57:
      current_block = (Rpc - LABEL_74);
      goto continuation_57;

    case 58:
      current_block = (Rpc - LABEL_71);
      goto continuation_43;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto continuation_41;

    case 60:
      current_block = (Rpc - LABEL_81);
      goto label_91;

    case 61:
      current_block = (Rpc - LABEL_82);
      goto label_92;

    case 62:
      current_block = (Rpc - LABEL_83);
      goto expression_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_73)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_82])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_92)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_91)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	0,
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
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 42)
      goto label_90;
    blocks = (current_block [OBJECT_36]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_81])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_90)
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
    goto label_108;
  Wrd8 = Wrd12;

DEFLABEL (label_107)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_106;
  Wrd8 = Wrd12;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_104;
  Wrd8 = Wrd12;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_102;
  Wrd8 = Wrd12;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_100;
  Wrd8 = Wrd12;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_98;
  Wrd8 = Wrd12;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_96;
  Wrd8 = Wrd12;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_94;
  Wrd8 = Wrd12;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd24.Obj) = (MAKE_OBJECT (0, 8));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-9]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd27.pObj) = (& (Rhp [-1]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  ((Wrd33.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  ((Wrd37.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  Wrd41 = Wrd27;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  ((Wrd41.pObj) [0]) = (Wrd43.Obj);
  Wrd45 = Wrd21;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  ((Wrd45.pObj) [0]) = (Wrd47.Obj);
  ((Wrd15.pObj) [0]) = (Wrd36.Obj);
  ((Wrd9.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 2;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  Wrd62 = Wrd59;
  (Wrd63.Obj) = (Rsp [3]);
  ((Wrd62.pObj) [2]) = (Wrd63.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_33]);
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 3);

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_79)
  (Wrd8.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_107;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_30);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_84)
  CLOSURE_HEADER (LABEL_32);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_41);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_86)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_34);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_109;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (label_110)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_87)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_35);
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_56);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (label_112)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_114)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd10.Obj) = (current_block [OBJECT_34]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd5.Obj) = Rvl;
  goto label_114;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_45);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_60);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_123;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [5]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd55.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_68);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_116)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_122)
  (Wrd30.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_117;
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [5]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_71);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_117)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_121)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_119;
  Rvl = (Wrd24.Obj);
  goto label_118;

DEFLABEL (label_119)
  Rvl = (Rsp [2]);

DEFLABEL (label_118)
DEFLABEL (label_120)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_123)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_121;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (lambda_89)
  CLOSURE_HEADER (LABEL_49);

DEFLABEL (lambda_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_63);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  (Wrd32.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_124;

DEFLABEL (label_125)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_124)
DEFLABEL (label_134)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_126;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd49.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_74);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_127)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_133)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_128;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_128)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_132;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd23.Obj) = Rvl;

DEFLABEL (label_131)
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_129;
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_129)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_75);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_130;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_130)
  (Wrd10.Obj) = (current_block [OBJECT_35]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80]));

DEFLABEL (label_132)
  (Wrd23.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_131;

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd5.Obj) = Rvl;
  goto label_133;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_os2prm_so_5243ac72586e1050 [42] =
  {
    { "os2prm_so_code_1", 3, os2prm_so_code_1 },
    { "os2prm_so_code_2", 3, os2prm_so_code_2 },
    { "os2prm_so_code_3", 3, os2prm_so_code_3 },
    { "os2prm_so_code_4", 3, os2prm_so_code_4 },
    { "os2prm_so_code_5", 3, os2prm_so_code_5 },
    { "os2prm_so_code_6", 3, os2prm_so_code_6 },
    { "os2prm_so_code_7", 13, os2prm_so_code_7 },
    { "os2prm_so_code_8", 2, os2prm_so_code_8 },
    { "os2prm_so_code_9", 16, os2prm_so_code_9 },
    { "os2prm_so_code_10", 2, os2prm_so_code_10 },
    { "os2prm_so_code_11", 2, os2prm_so_code_11 },
    { "os2prm_so_code_12", 3, os2prm_so_code_12 },
    { "os2prm_so_code_13", 1, os2prm_so_code_13 },
    { "os2prm_so_code_14", 1, os2prm_so_code_14 },
    { "os2prm_so_code_15", 1, os2prm_so_code_15 },
    { "os2prm_so_code_16", 1, os2prm_so_code_16 },
    { "os2prm_so_code_17", 1, os2prm_so_code_17 },
    { "os2prm_so_code_18", 1, os2prm_so_code_18 },
    { "os2prm_so_code_19", 1, os2prm_so_code_19 },
    { "os2prm_so_code_20", 1, os2prm_so_code_20 },
    { "os2prm_so_code_21", 1, os2prm_so_code_21 },
    { "os2prm_so_code_22", 1, os2prm_so_code_22 },
    { "os2prm_so_code_23", 15, os2prm_so_code_23 },
    { "os2prm_so_code_24", 18, os2prm_so_code_24 },
    { "os2prm_so_code_25", 5, os2prm_so_code_25 },
    { "os2prm_so_code_26", 7, os2prm_so_code_26 },
    { "os2prm_so_code_27", 4, os2prm_so_code_27 },
    { "os2prm_so_code_28", 10, os2prm_so_code_28 },
    { "os2prm_so_code_29", 1, os2prm_so_code_29 },
    { "os2prm_so_code_30", 5, os2prm_so_code_30 },
    { "os2prm_so_code_31", 1, os2prm_so_code_31 },
    { "os2prm_so_code_32", 40, os2prm_so_code_32 },
    { "os2prm_so_code_33", 1, os2prm_so_code_33 },
    { "os2prm_so_code_34", 6, os2prm_so_code_34 },
    { "os2prm_so_code_35", 24, os2prm_so_code_35 },
    { "os2prm_so_code_36", 14, os2prm_so_code_36 },
    { "os2prm_so_code_37", 31, os2prm_so_code_37 },
    { "os2prm_so_code_38", 3, os2prm_so_code_38 },
    { "os2prm_so_code_39", 13, os2prm_so_code_39 },
    { "os2prm_so_code_40", 3, os2prm_so_code_40 },
    { "os2prm_so_code_41", 1, os2prm_so_code_41 },
    { "os2prm_so_code_42", 1, os2prm_so_code_42 }
  };

int
decl_os2prm_so_5243ac72586e1050 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_os2prm_so_5243ac72586e1050);
  return (0);
}

DECLARE_COMPILED_CODE ("os2prm.so", 63, decl_os2prm_so_5243ac72586e1050, os2prm_so_5243ac72586e1050)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_os2prm_so_data_5243ac72586e1050 [7526] =
  "\xc8\x01\x43\x91\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x82\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x83\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\xc1\x28\xb1\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88\xc1"
  "\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x86\x88\xc3\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x02\x02\x02\x02\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x02\x02\x02\x82\x02\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x81\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x02\x0c\xc0\x1c\x86\x0f\x0c\x80\x1d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\xb1\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x28\x0d\x1c\x28\xb1\x28\xb1\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x08\x88\x0c\x0c\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x0f\x28\xb1\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x1c\x07"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x0c\x0f\xc1\x1c\x0d\x1c\x06\x07\x0f"
  "\xc2\xc1\x1c\x0c\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x85\x0f\x0c\x81\x1d\x0c\x0c\x0c"
  "\x08\xc2\x1b\x1b\x0c\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28"
  "\xb1\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc7\x0c\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\xc3\x1c"
  "\x0f\xc1\x1c\x80\x1b\x08\x0c\x1b\x1b\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x0f\x1b\x1b\x1b\x80\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x1d\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\xb1"
  "\x28\xb1\x28\x0d\x28\xb2\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x08\x80\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c"
  "\x0c\x08\x8c\x22\x29\x21\x9d\x2b\x1c\x17\x1c\x88\x1b\x0c\x0c\x0d"
  "\x1c\x0d\xba\x0c\x0c\x0c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x1b\x1b\x0d\x1b"
  "\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x1b\x17\xc3\x0d\x1c\x0d\x1b"
  "\xb2\x1b\x0d\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x17\x1e\x1e\x1e\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x0d\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9f\x02\x86\x85\x84\x83"
  "\x82\x81\x80\x9f\x02\x0d\x0d\x0d\x1c\x0d\x1b\x9a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9a\x0d\x0d\x1b\x0d\x1b\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9b\x0d\x0d\x0d\x1c\xb7\x2a\x0d\xc3\x0d\x0d\x1c\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\xb6\x2a\xb5\x2a\x02\x02\x84\x82\x81"
  "\xb4\x2a\xb3\x2a\x17\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x6f\x73\x32\x70\x72\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x10\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65"
  "\x73\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x73\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67"
  "\x03\x42\x08\x81\x85\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04\x07"
  "\x10\x02\x15\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x21\x03\x03\x03\x45\x08\x81\x87\x02\x44"
  "\x06\x81\x85\x02\x43\x04\x84\x06\x07\x10\x02\x0c\x66\x69\x6c\x65"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x03\x03\x03\x48\x08\x81\x85\x02\x47"
  "\x06\x81\x83\x02\x46\x04\x83\x04\x07\x10\x02\x0e\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x03\x03\x03\x4b\x08\x81\x85"
  "\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04\x07\x10\x02\x11\x66\x69"
  "\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x03\x03"
  "\x03\x4e\x08\x81\x85\x02\x4d\x06\x81\x83\x02\x4c\x04\x83\x04\x07"
  "\x10\x02\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65"
  "\x73\x21\x03\x03\x03\x51\x08\x81\x89\x02\x50\x06\x81\x87\x02\x4f"
  "\x04\x85\x08\x07\x10\x09\x02\x08\xbd\x0f\x11\x41\x21\x08\x12\x6d"
  "\x61\x6b\x65\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65"
  "\x02\x5e\x1c\x81\x97\x02\x5d\x1a\x81\x97\x02\x5c\x18\x81\x95\x02"
  "\x5b\x16\x81\x93\x02\x5a\x14\x81\x91\x02\x59\x12\x81\x8f\x02\x58"
  "\x10\x81\x8d\x02\x57\x0e\x81\x8b\x02\x56\x0c\x81\x89\x02\x55\x0a"
  "\x81\x87\x02\x54\x08\x81\x85\x02\x53\x06\x81\x83\x02\x52\x04\x83"
  "\x04\x1b\x26\x0a\x02\x09\x03\x1a\x66\x69\x6c\x65\x2d\x74\x69\x6d"
  "\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x0b\x03\x24\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69"
  "\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x03\x60\x06\x81\x83\x02\x5f\x04\x83"
  "\x04\x05\x0d\x0c\x02\x0a\x26\x43\x61\x6e\x27\x74\x20\x65\x6e\x63"
  "\x6f\x64\x65\x20\x79\x65\x61\x72\x73\x20\x65\x61\x72\x6c\x69\x65"
  "\x72\x20\x74\x68\x61\x6e\x20\x31\x39\x38\x30\x3a\xbd\x0f\x11\x41"
  "\x21\x03\x14\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f"
  "\x6d\x69\x6e\x75\x74\x65\x03\x14\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x2f\x73\x65\x63\x6f\x6e\x64\x03\x12\x64\x65\x63"
  "\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x68\x6f\x75\x72\x03\x11"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x79"
  "\x03\x13\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x6d"
  "\x6f\x6e\x74\x68\x03\x12\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2f\x79\x65\x61\x72\x04\x06\x65\x72\x72\x6f\x72\x0d\x08"
  "\x70\x22\x81\x9f\x02\x6f\x20\x81\x9d\x02\x6e\x1e\x81\x9f\x02\x6d"
  "\x1c\x81\x99\x02\x6c\x1a\x81\x97\x02\x6b\x18\x81\x93\x02\x6a\x16"
  "\x81\x91\x02\x69\x14\x81\x87\x02\x68\x12\x81\x87\x02\x67\x10\x81"
  "\x8d\x02\x66\x0e\x81\x8b\x02\x65\x0c\x81\x8b\x02\x64\x0a\x81\x87"
  "\x02\x63\x08\x81\x87\x02\x62\x06\x81\x85\x02\x61\x04\x83\x04\x21"
  "\x39\x0e\x02\x0b\x03\x1e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d"
  "\x3e\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74"
  "\x69\x6d\x65\x0f\x03\x1d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69"
  "\x6d\x65\x03\x72\x06\x81\x83\x02\x71\x04\x83\x04\x05\x0d\x10\x02"
  "\x0c\x03\x23\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64"
  "\x2d\x74\x69\x6d\x65\x03\x18\x64\x65\x63\x6f\x64\x65\x64\x2d\x74"
  "\x69\x6d\x65\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x11\x03"
  "\x74\x06\x81\x83\x02\x73\x04\x83\x04\x05\x0d\x12\x02\x0d\x0a\x66"
  "\x69\x6c\x65\x2d\x69\x6e\x66\x6f\x03\x03\x03\x77\x08\x81\x85\x02"
  "\x76\x06\x81\x83\x02\x75\x04\x83\x04\x07\x10\x13\x02\x0e\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x14\x78\x04\x83\x04\x03\x15"
  "\x02\x0f\x14\x79\x04\x83\x04\x03\x16\x02\x10\x14\x7a\x04\x83\x04"
  "\x03\x17\x02\x11\x14\x7b\x04\x83\x04\x03\x18\x02\x12\x14\x7c\x04"
  "\x83\x04\x03\x19\x02\x13\x14\x7d\x04\x83\x04\x03\x1a\x02\x14\x14"
  "\x7e\x04\x83\x04\x03\x1b\x02\x15\x14\x08\x7f\x04\x83\x04\x03\x14"
  "\x02\x16\x80\x01\x04\x83\x04\x03\x1c\x02\x17\x19\x67\x65\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x81\x01\x04\x83\x04\x03\x1d\x02\x18\x26\x43\x61"
  "\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x75\x6e\x69\x71\x75\x65\x20"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x3a\xe8\x07\x04\x73\x63\x68\x0c\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x70\x69\x64\x1e\x01\x31\x09\x5f\x73\x63\x6d\x5f\x74\x6d"
  "\x70\x08\x02\x1d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x1f\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x20\x03\x17\x64\x6f\x73\x2f\x66"
  "\x73\x2d\x6c\x6f\x6e\x67\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73"
  "\x3f\x21\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69"
  "\x6e\x67\x22\x04\x03\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x04\x12\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65"
  "\x23\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x24\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65"
  "\x66\x74\x25\x04\x0d\x0b\x90\x01\x20\x81\x87\x02\x8f\x01\x1e\x81"
  "\x87\x02\x8e\x01\x1c\x81\x87\x02\x8d\x01\x1a\x81\x87\x02\x8c\x01"
  "\x18\x81\x8d\x02\x8b\x01\x16\x81\x8b\x02\x8a\x01\x14\x81\x85\x02"
  "\x89\x01\x12\x81\x87\x02\x88\x01\x10\x81\x85\x02\x87\x01\x0e\x81"
  "\x83\x02\x86\x01\x0c\x81\x85\x02\x85\x01\x0a\x81\x85\x02\x84\x01"
  "\x08\x81\x85\x02\x83\x01\x06\x81\x83\x02\x82\x01\x04\x83\x02\x1f"
  "\x40\x26\x02\x19\x20\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2e\x02\x2e\x01\x05\x5c\x74\x6d\x70\x06\x5c\x74\x65"
  "\x6d\x70\x04\x54\x4d\x50\x05\x54\x45\x4d\x50\x07\x54\x4d\x50\x44"
  "\x49\x52\x03\x19\x67\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x27\x03\x04\x02"
  "\x1a\x6f\x73\x32\x2f\x73\x79\x73\x74\x65\x6d\x2d\x72\x6f\x6f\x74"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x28\x03\x10\x66\x69\x6c"
  "\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x29\x03\x20\x03"
  "\x10\x66\x69\x6c\x65\x2d\x77\x72\x69\x74\x65\x61\x62\x6c\x65\x3f"
  "\x03\x0d\x09\xa2\x01\x26\x81\x83\x02\xa1\x01\x24\x81\x83\x02\xa0"
  "\x01\x22\x81\x83\x02\x9f\x01\x20\x81\x83\x02\x9e\x01\x1e\x81\x85"
  "\x02\x9d\x01\x1c\x81\x83\x02\x9c\x01\x1a\x81\x83\x02\x9b\x01\x18"
  "\x81\x85\x02\x9a\x01\x16\x81\x83\x02\x99\x01\x14\x81\x83\x02\x98"
  "\x01\x12\x81\x83\x02\x97\x01\x10\x81\x83\x02\x96\x01\x0e\x81\x83"
  "\x02\x95\x01\x0c\x81\x83\x02\x94\x01\x0a\x81\x83\x02\x93\x01\x08"
  "\x81\x83\x02\x92\x01\x06\x81\x81\x02\x91\x01\x04\x82\x02\x25\x41"
  "\x2a\x02\x1a\x09\x61\x62\x73\x6f\x6c\x75\x74\x65\x25\x55\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x4f\x53\x2f\x32"
  "\x20\x73\x79\x73\x74\x65\x6d\x2e\x69\x6e\x69\x20\x66\x69\x6c\x65"
  "\x3a\x0b\x53\x59\x53\x54\x45\x4d\x5f\x49\x4e\x49\x03\x27\x03\x0d"
  "\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x2b\x04\x0d\x03"
  "\x13\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x04\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65"
  "\x77\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x06\xa7\x01\x0c\x81"
  "\x83\x02\xa6\x01\x0a\x81\x83\x02\xa5\x01\x08\x81\x83\x02\xa4\x01"
  "\x06\x81\x81\x02\xa3\x01\x04\x82\x02\x0b\x1c\x2c\x02\x1b\x01\x0b"
  "\x64\x72\x69\x76\x65\x2d\x74\x79\x70\x65\x01\x3b\x03\x04\x16\x73"
  "\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d"
  "\x63\x68\x61\x72\x2d\x03\x10\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x64\x65\x76\x69\x63\x65\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74"
  "\x61\x69\x6c\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64"
  "\x06\xae\x01\x10\x81\x87\x02\xad\x01\x0e\x81\x85\x02\xac\x01\x0c"
  "\x81\x83\x02\xab\x01\x0a\x81\x87\x02\xaa\x01\x08\x81\x85\x02\xa9"
  "\x01\x06\x81\x83\x02\xa8\x01\x04\x83\x04\x0f\x20\x2e\x02\x1c\x04"
  "\x66\x61\x74\x04\x63\x61\x72\x2f\x03\x12\x64\x6f\x73\x2f\x66\x73"
  "\x2d\x64\x72\x69\x76\x65\x2d\x74\x79\x70\x65\x30\x04\x0c\x73\x74"
  "\x72\x69\x6e\x67\x2d\x63\x69\x3d\x3f\x03\xb2\x01\x0a\x81\x85\x02"
  "\xb1\x01\x08\x81\x85\x02\xb0\x01\x06\x81\x83\x02\xaf\x01\x04\x83"
  "\x04\x09\x14\x31\x02\x1d\x03\x6c\x66\x04\x4e\x46\x53\x01\x3b\x04"
  "\x63\x64\x72\x32\x05\x63\x72\x6c\x66\x33\x01\x30\x0b\x73\x74\x72"
  "\x69\x6e\x67\x2d\x72\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x34\x05\x65\x78\x74\x32\x2f\x03\x30\x04\x09"
  "\x73\x74\x72\x69\x6e\x67\x3d\x3f\x35\x04\x2d\x04\xbc\x01\x16\x81"
  "\x85\x02\xbb\x01\x14\x81\x83\x02\xba\x01\x12\x81\x83\x02\xb9\x01"
  "\x10\x81\x83\x02\xb8\x01\x0e\x81\x87\x02\xb7\x01\x0c\x81\x87\x02"
  "\xb6\x01\x0a\x81\x85\x02\xb5\x01\x08\x81\x85\x02\xb4\x01\x06\x81"
  "\x83\x02\xb3\x01\x04\x83\x04\x15\x2b\x2d\x02\x1e\x33\xbd\x01\x04"
  "\x82\x02\x03\x33\x02\x1f\x0e\x6f\x73\x32\x2d\x63\x6f\x70\x79\x2d"
  "\x66\x69\x6c\x65\x03\x03\x03\xc2\x01\x0c\x81\x87\x02\xc1\x01\x0a"
  "\x81\x85\x02\xc0\x01\x08\x81\x87\x02\xbf\x01\x06\x81\x85\x02\xbe"
  "\x01\x04\x84\x06\x0b\x14\x36\x02\x20\xc3\x01\x04\x83\x04\x03\x37"
  "\x02\x21\x1e\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x69\x6e\x69"
  "\x74\x2d\x66\x69\x6c\x65\x20\x6d\x61\x70\x20\x69\x74\x65\x6d\x3a"
  "\x04\x69\x6e\x69\x01\x31\x05\x2e\x64\x61\x74\x02\x0e\x6d\x69\x74"
  "\x73\x63\x68\x65\x6d\x2e\x69\x6e\x69\x2f\x0c\x66\x69\x6c\x65\x6d"
  "\x61\x70\x2e\x64\x61\x74\x02\x2f\x06\x61\x70\x70\x6c\x79\x2f\x32"
  "\x0d\x2e\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x1e\x69\x6e"
  "\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65"
  "\x72\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x38\x24\x02\x04\x1e"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x69\x74\x2d\x66"
  "\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69\x65\x72\x02\x16\x75"
  "\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x03\x21\x04\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d"
  "\x6d\x61\x70\x03\x1b\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65\x39"
  "\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x03\x0e"
  "\x6f\x70\x65\x6e\x2d\x69\x2f\x6f\x2d\x66\x69\x6c\x65\x03\x0b\x63"
  "\x6c\x6f\x73\x65\x2d\x70\x6f\x72\x74\x03\x05\x72\x65\x61\x64\x03"
  "\x22\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x05\x24"
  "\x05\x25\x03\x15\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70"
  "\x65\x63\x69\x66\x69\x65\x72\x3f\x04\x0d\x04\x06\x61\x73\x73\x6f"
  "\x63\x03\x14\x70\x6f\x72\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x03\x2b\x04\x06\x77\x72\x69\x74\x65\x03"
  "\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x1a\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x73\x65\x74\x2d"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\x18\xeb\x01\x52\x81\x85\x02\xea"
  "\x01\x50\x81\x85\x02\xe9\x01\x4e\x81\x87\x02\xe8\x01\x4c\x81\x85"
  "\x02\xe7\x01\x4a\x81\x8d\x02\xe6\x01\x48\x81\x8b\x02\xe5\x01\x46"
  "\x81\x8b\x02\xe4\x01\x44\x81\x8f\x02\xe3\x01\x42\x81\x8d\x02\xe2"
  "\x01\x40\x81\x8d\x02\xe1\x01\x3e\x81\x8d\x02\xe0\x01\x3c\x81\x8d"
  "\x02\xdf\x01\x3a\x81\x93\x02\xde\x01\x38\x81\x8d\x02\xdd\x01\x36"
  "\x81\x89\x02\xdc\x01\x34\x81\x8b\x02\xdb\x01\x32\x81\x89\x02\xda"
  "\x01\x30\x81\x83\x02\xd9\x01\x2e\x81\x8b\x02\xd8\x01\x2c\x81\x83"
  "\x02\xd7\x01\x2a\x81\x85\x02\xd6\x01\x28\x81\x85\x02\xd5\x01\x26"
  "\x81\x83\x02\xd4\x01\x24\x81\x83\x02\xd3\x01\x22\x81\x83\x02\xd2"
  "\x01\x20\x81\x83\x02\xd1\x01\x1e\x81\x85\x02\xd0\x01\x1c\x81\x87"
  "\x02\xcf\x01\x1a\x81\x85\x02\xce\x01\x18\x83\x04\xcd\x01\x16\x81"
  "\x8b\x02\xcc\x01\x14\x81\x8b\x02\xcb\x01\x12\x81\x89\x02\xca\x01"
  "\x10\x81\x87\x02\xc9\x01\x0e\x81\x8b\x02\xc8\x01\x0c\x81\x85\x02"
  "\xc7\x01\x0a\x81\x85\x02\xc6\x01\x08\x81\x83\x02\xc5\x01\x06\x81"
  "\x83\x02\xc4\x01\x04\x83\x04\x51\x95\x01\x25\x02\x22\x02\xec\x01"
  "\x04\x82\x02\x03\x24\x02\x23\x14\x6f\x73\x32\x2d\x6d\x61\x6b\x65"
  "\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x35\x43\x61\x6e\x27"
  "\x74\x20\x6d\x61\x6e\x69\x70\x75\x6c\x61\x74\x65\x20\x63\x6f\x6e"
  "\x74\x72\x6f\x6c\x6c\x69\x6e\x67\x20\x74\x65\x72\x6d\x69\x6e\x61"
  "\x6c\x20\x6f\x66\x20\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x3a"
  "\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x04\x0d"
  "\x03\x21\x6f\x73\x32\x2f\x72\x65\x77\x72\x69\x74\x65\x2d\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x73\x22\x03\x23\x6f\x73\x32\x2f\x72\x65\x77\x72\x69\x74\x65"
  "\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x05\xf2\x01\x0e\x81\x95\x02\xf1"
  "\x01\x0c\x81\x93\x02\xf0\x01\x0a\x81\x91\x02\xef\x01\x08\x81\x93"
  "\x02\xee\x01\x06\x8a\x12\xed\x01\x04\x81\x91\x02\x0d\x1b\x3b\x02"
  "\x24\x01\x01\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x3c"
  "\x01\x21\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x3d\x34\x01\x2f\x32\x02\x2b\x3e\x02\x04\x04\x6d\x61\x70"
  "\x3f\x07\x10\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76"
  "\x65\x21\x40\x05\x07\x72\x65\x64\x75\x63\x65\x41\x04\x8a\x02\x32"
  "\x81\x91\x02\x89\x02\x30\x81\x85\x02\x88\x02\x2e\x81\x85\x02\x87"
  "\x02\x2c\x81\x85\x02\x86\x02\x2a\x81\x83\x02\x85\x02\x28\x81\x83"
  "\x02\x84\x02\x26\x81\x83\x02\x83\x02\x24\x81\x85\x02\x82\x02\x22"
  "\x81\x87\x02\x81\x02\x20\x81\x87\x02\x80\x02\x1e\x81\x87\x02\xff"
  "\x01\x1c\x81\x87\x02\xfe\x01\x1a\x81\x83\x02\xfd\x01\x18\x83\x04"
  "\xfc\x01\x16\x81\x8b\x02\xfb\x01\x14\x81\x87\x02\xfa\x01\x12\x81"
  "\x85\x02\xf9\x01\x10\x81\x8d\x02\xf8\x01\x0e\x81\x87\x02\xf7\x01"
  "\x0c\x81\x87\x02\xf6\x01\x0a\x81\x83\x02\xf5\x01\x08\x81\x83\x02"
  "\xf4\x01\x06\x81\x83\x02\xf3\x01\x04\x83\x04\x31\x47\x42\x02\x25"
  "\x32\x3c\x01\x01\x2f\x34\x3d\x3e\x02\x04\x3f\x05\x41\x07\x40\x04"
  "\x98\x02\x1e\x81\x8b\x02\x97\x02\x1c\x81\x8b\x02\x96\x02\x1a\x81"
  "\x8b\x02\x95\x02\x18\x81\x95\x02\x94\x02\x16\x81\x89\x02\x93\x02"
  "\x14\x81\x89\x02\x92\x02\x12\x81\x89\x02\x91\x02\x10\x81\x83\x02"
  "\x90\x02\x0e\x83\x04\x8f\x02\x0c\x81\x8b\x02\x8e\x02\x0a\x81\x87"
  "\x02\x8d\x02\x08\x81\x85\x02\x8c\x02\x06\x81\x83\x02\x8b\x02\x04"
  "\x83\x04\x1d\x30\x41\x02\x26\x14\x43\x61\x6e\x27\x74\x20\x66\x69"
  "\x6e\x64\x20\x70\x72\x6f\x67\x72\x61\x6d\x3a\x2f\x32\x08\x0d\x02"
  "\x02\x0d\x6f\x73\x2f\x65\x78\x65\x63\x2d\x70\x61\x74\x68\x40\x02"
  "\x1d\x6f\x73\x2f\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x73\x3f\x04\x03"
  "\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x62\x73\x6f\x6c"
  "\x75\x74\x65\x3f\x03\x04\x0d\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x04\x07\x6d\x65\x6d\x62\x65\x72\x03\x2b"
  "\x04\x23\x0c\xb7\x02\x40\x81\x89\x02\xb6\x02\x3e\x81\x89\x02\xb5"
  "\x02\x3c\x81\x8d\x02\xb4\x02\x3a\x81\x87\x02\xb3\x02\x38\x81\x87"
  "\x02\xb2\x02\x36\x81\x89\x02\xb1\x02\x34\x81\x87\x02\xb0\x02\x32"
  "\x81\x87\x02\xaf\x02\x30\x81\x87\x02\xae\x02\x2e\x81\x85\x02\xad"
  "\x02\x2c\x81\x85\x02\xac\x02\x2a\x81\x87\x02\xab\x02\x28\x81\x85"
  "\x02\xaa\x02\x26\x81\x85\x02\xa9\x02\x24\x81\x8d\x02\xa8\x02\x22"
  "\x81\x83\x02\xa7\x02\x20\x81\x8b\x02\xa6\x02\x1e\x81\x89\x02\xa5"
  "\x02\x1c\x81\x8b\x02\xa4\x02\x1a\x81\x89\x02\xa3\x02\x18\x81\x85"
  "\x02\xa2\x02\x16\x81\x91\x02\xa1\x02\x14\x81\x8b\x02\xa0\x02\x12"
  "\x81\x87\x02\x9f\x02\x10\x81\x85\x02\x9e\x02\x0e\x81\x87\x02\x9d"
  "\x02\x0c\x81\x87\x02\x9c\x02\x0a\x81\x8d\x02\x9b\x02\x08\x81\x8b"
  "\x02\x9a\x02\x06\x86\x06\x99\x02\x04\x81\x8b\x02\x3f\x5f\x3e\x02"
  "\x27\x26\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x50\x41\x54"
  "\x48\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2e\x05\x50\x41\x54\x48\x03\x27\x03\x0d"
  "\x03\x15\x6f\x73\x2f\x70\x61\x72\x73\x65\x2d\x70\x61\x74\x68\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3d\x04\xba\x02\x08\x81\x81\x02\xb9\x02"
  "\x06\x81\x83\x02\xb8\x02\x04\x82\x02\x07\x13\x3c\x02\x28\x01\x3c"
  "\x34\x06\x19\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e"
  "\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x05\x0a\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x03\x20\x04\xc7\x02\x1c\x81\x87\x02\xc6"
  "\x02\x1a\xfd\xff\x03\xc5\x02\x18\x81\x87\x02\xc4\x02\x16\xfd\xff"
  "\x03\xc3\x02\x14\xfd\xff\x03\xc2\x02\x12\xfd\xff\x03\xc1\x02\x10"
  "\xfd\xff\x03\xc0\x02\x0e\xfd\xff\x03\xbf\x02\x0c\xfd\xff\x03\xbe"
  "\x02\x0a\xfd\xff\x03\xbd\x02\x08\xff\xff\x03\xbc\x02\x06\x81\x83"
  "\x02\xbb\x02\x04\x83\x04\x1b\x29\x34\x02\x29\x08\x63\x6d\x64\x2e"
  "\x65\x78\x65\x08\x43\x4f\x4d\x53\x50\x45\x43\x06\x53\x48\x45\x4c"
  "\x4c\x03\x27\x02\xca\x02\x08\x81\x83\x02\xc9\x02\x06\x81\x81\x02"
  "\xc8\x02\x04\x82\x02\x07\x10\x32\x02\x2a\x03\x2f\x63\xcb\x02\x04"
  "\x83\x04\x03\x2f\x02\x2b\x04\x65\x78\x65\x04\x63\x6f\x6d\x04\x62"
  "\x61\x74\x04\x63\x6d\x64\x04\x62\x74\x6d\xcc\x02\x04\x82\x02\x03"
  "\x2b\x2b\x23\x23\x22\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20"
  "\x75\x73\x65\x72\x27\x73\x20\x68\x6f\x6d\x65\x20\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x3a\x27\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x63\x75\x72\x72\x65"
  "\x6e\x74\x20\x75\x73\x65\x72\x20\x6e\x61\x6d\x65\x2e\x14\x75\x73"
  "\x65\x72\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x23\x17\x63\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x05\x55\x53\x45\x52\x05\x48"
  "\x4f\x4d\x45\x08\x55\x53\x45\x52\x44\x49\x52\x2b\x04\x2f\x04\x32"
  "\x04\x34\x04\x3c\x04\x3e\x06\x41\x04\x42\x04\x3b\x06\x24\x04\x25"
  "\x04\x37\x04\x36\x04\x33\x04\x2d\x04\x31\x04\x2e\x04\x12\x3f\x16"
  "\x6f\x73\x2f\x66\x6f\x72\x6d\x2d\x73\x68\x65\x6c\x6c\x2d\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x13\x6f\x73\x2f\x73\x68\x65\x6c\x6c\x2d\x66"
  "\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x3d\x40\x10\x6f\x73\x2f\x66\x69"
  "\x6e\x64\x2d\x70\x72\x6f\x67\x72\x61\x6d\x3a\x22\x13\x6f\x73\x2f"
  "\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x1e"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79\x73\x74\x65"
  "\x6d\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x21\x38\x14\x6f"
  "\x73\x2f\x73\x75\x66\x66\x69\x78\x2d\x6d\x69\x6d\x65\x2d\x74\x79"
  "\x70\x65\x0a\x63\x6f\x70\x79\x2d\x66\x69\x6c\x65\x14\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67"
  "\x11\x66\x69\x6c\x65\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e"
  "\x67\x21\x30\x12\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x12\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x75\x73\x65\x72\x2d\x6e\x61\x6d\x65\x42\x14\x72\x74\x64\x3a\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x23\x42"
  "\x10\x6f\x73\x32\x2f\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x69\x64"
  "\x28\x1f\x18\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c"
  "\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x27\x18\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6e\x2d\x6c\x69"
  "\x6e\x6b\x73\x21\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75"
  "\x74\x65\x73\x2f\x61\x6c\x6c\x6f\x63\x61\x74\x65\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x16\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2f\x6d\x6f\x64\x65\x73\x1c\x66\x69\x6c\x65\x2d"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x17\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x6c\x65\x6e\x67\x74\x68\x1c\x66\x69"
  "\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x63\x68"
  "\x61\x6e\x67\x65\x2d\x74\x69\x6d\x65\x22\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x1c\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x61\x63\x63\x65"
  "\x73\x73\x2d\x74\x69\x6d\x65\x15\x66\x69\x6c\x65\x2d\x61\x74\x74"
  "\x72\x69\x62\x75\x74\x65\x73\x2f\x74\x79\x70\x65\x12\x1e\x2c\x04"
  "\x2a\x04\x26\x04\x1d\x04\x1c\x04\x14\x04\x1b\x04\x1a\x04\x19\x04"
  "\x18\x04\x17\x04\x16\x04\x15\x04\x12\x07\x76\x65\x63\x74\x6f\x72"
  "\x10\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73"
  "\x11\x61\x6c\x6c\x6f\x63\x61\x74\x65\x64\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x06\x6d\x6f\x64\x65\x73\x0c\x6d\x6f\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x07\x6c\x65\x6e\x67\x74\x68\x0c\x63\x68\x61\x6e\x67"
  "\x65\x2d\x74\x69\x6d\x65\x12\x6d\x6f\x64\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x0c\x61\x63\x63\x65\x73\x73\x2d"
  "\x74\x69\x6d\x65\x05\x74\x79\x70\x65\x08\x09\x19\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x69\x6e\x64\x69"
  "\x72\x65\x63\x74\x17\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2d\x64\x69\x72\x65\x63\x74\x10\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x42\x1a\x75\x6e\x69"
  "\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c"
  "\x65\x2d\x74\x69\x6d\x65\x0b\x13\x04\x12\x04\x10\x04\x11\x65\x6e"
  "\x63\x6f\x64\x65\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x11\x64"
  "\x65\x63\x6f\x64\x65\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x11"
  "\x1f\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x0f"
  "\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x73\x21"
  "\x0e\x04\x0c\x04\x0a\x04\x09\x04\x1a\x66\x69\x6c\x65\x2d\x61\x63"
  "\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65"
  "\x63\x74\x18\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74"
  "\x69\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x11\x66\x69\x6c\x65\x2d"
  "\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x41\x04\x20\x66\x69"
  "\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1e\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x69\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x17\x66\x69\x6c"
  "\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x69\x6d\x65\x40\x0c\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x17\x6f\x73\x32\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x61"
  "\x72\x63\x68\x69\x76\x65\x64\x18\x6f\x73\x32\x2d\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x65\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x15"
  "\x6f\x73\x32\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x73\x79"
  "\x73\x74\x65\x6d\x15\x6f\x73\x32\x2d\x66\x69\x6c\x65\x2d\x6d\x6f"
  "\x64\x65\x2f\x68\x69\x64\x64\x65\x6e\x18\x6f\x73\x32\x2d\x66\x69"
  "\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x72\x65\x61\x64\x2d\x6f\x6e\x6c"
  "\x79\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73"
  "\x21\x0b\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x0a\x04\x04\x21"
  "\x11\x04\x04\x0a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69"
  "\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70"
  "\x65\x03\x40\x41\x0f\x11\x42\x06\x03\x27\x03\x29\x03\x20\x03\x39"
  "\x03\x0d\x04\x0d\x02\x28\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x6e\x61\x6d\x65\x04\x35\x04\x0b\x3f\x80\x01\x80\x80\x04\x3e"
  "\x7e\x81\x81\x02\x3d\x7c\x81\x81\x02\x3c\x7a\x81\x85\x02\x3b\x78"
  "\x81\x85\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x8b\x02\x38\x72\x81"
  "\x89\x02\x37\x70\x81\x87\x02\x36\x6e\x81\x8d\x02\x35\x6c\x81\x8b"
  "\x02\x34\x6a\x81\x89\x02\x33\x68\x81\x8b\x02\x32\x66\x81\x89\x02"
  "\x31\x64\x81\x87\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x89\x02\x2e"
  "\x5e\x81\x8b\x02\x2d\x5c\x81\x87\x02\x2c\x5a\x81\x89\x02\x2b\x58"
  "\x81\x83\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x85\x02\x28\x52\x81"
  "\x85\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x85"
  "\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x89\x02"
  "\x21\x44\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x85\x02\x1e"
  "\x3e\x81\x83\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x82\x02\x1b\x38\x83"
  "\x04\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81"
  "\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02"
  "\x07\x10\x81\x85\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x7f\xc8\x01";

SCHEME_OBJECT *
os2prm_so_data_5243ac72586e1050 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_os2prm_so_data_5243ac72586e1050 [0]))), (sizeof (prog_os2prm_so_data_5243ac72586e1050)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_83]));
}

DECLARE_COMPILED_DATA_NS ("os2prm.so", os2prm_so_data_5243ac72586e1050)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("os2prm.so", "10935ccfeaaf719f")
