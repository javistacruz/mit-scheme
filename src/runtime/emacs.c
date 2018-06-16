/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 17
#define DEBUGGING_LABEL_1_2 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_8 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto emacs_prompt_for_command_expression_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_prompt_for_command_expression_5)
DEFLABEL (emacs_prompt_for_command_expression_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define ENVIRONMENT_LABEL_2_3 23
#define DEBUGGING_LABEL_2_2 22
#define OBJECT_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_11 11
#define EXECUTE_CACHE_2_10 13
#define EXECUTE_CACHE_2_8 15
#define EXECUTE_CACHE_2_6 17
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto emacs_prompt_for_command_char_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_prompt_for_command_char_6)
DEFLABEL (emacs_prompt_for_command_char_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_9 7
#define LABEL_3_10 9
#define LABEL_3_5 11
#define LABEL_3_8 13
#define LABEL_3_14 15
#define LABEL_3_6 17
#define LABEL_3_15 19
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_6 39
#define OBJECT_3_5 38
#define OBJECT_3_4 37
#define OBJECT_3_3 36
#define OBJECT_3_2 35
#define OBJECT_3_1 34
#define OBJECT_3_0 33
#define EXECUTE_CACHE_3_16 21
#define EXECUTE_CACHE_3_13 23
#define EXECUTE_CACHE_3_17 25
#define EXECUTE_CACHE_3_12 27
#define EXECUTE_CACHE_3_11 29
#define FREE_REFERENCE_3_0 32
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_3_4);
      goto transmit_modeline_string_10;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transmit_modeline_string_17)
DEFLABEL (transmit_modeline_string_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd5.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_3_4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_20)
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_29)
  if (! ((Wrd15.Obj) == (current_block [OBJECT_3_1])))
    goto label_19;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_28;
  Wrd28 = Wrd32;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_26;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_21)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd28.Obj) = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_18;

DEFLABEL (label_26)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd29.pObj));

DEFLABEL (label_13)
  (Wrd28.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
emacs_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_4_4);
      goto emacs_prompt_for_expression_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_prompt_for_expression_4)
DEFLABEL (emacs_prompt_for_expression_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_12 9
#define LABEL_5_6 11
#define LABEL_5_9 13
#define LABEL_5_11 15
#define ENVIRONMENT_LABEL_5_3 34
#define DEBUGGING_LABEL_5_2 33
#define OBJECT_5_5 32
#define OBJECT_5_4 31
#define OBJECT_5_3 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_15 17
#define EXECUTE_CACHE_5_14 19
#define EXECUTE_CACHE_5_13 21
#define EXECUTE_CACHE_5_10 23
#define EXECUTE_CACHE_5_8 25
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto emacs_prompt_for_confirmation_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_12);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_prompt_for_confirmation_13)
DEFLABEL (emacs_prompt_for_confirmation_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_15;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_14)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd27.Lng) = ((Wrd24.Lng) - 11L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_20)
  (Wrd5.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == (current_block [OBJECT_5_4]))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_5_5]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_10 11
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_6 15
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_4);
      goto read_char_internal_8;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_char_internal_11)
DEFLABEL (read_char_internal_8)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  goto loop_6;

DEFLABEL (loop_12)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_6_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_6_1])))
    goto label_13;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto emacs_debugger_failure_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_debugger_failure_4)
DEFLABEL (emacs_debugger_failure_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto emacs_debugger_message_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_debugger_message_3)
DEFLABEL (emacs_debugger_message_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_9 13
#define EXECUTE_CACHE_9_6 15
#define FREE_REFERENCE_9_0 18
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto emacs_debugger_presentation_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_debugger_presentation_7)
DEFLABEL (emacs_debugger_presentation_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_8)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd5.Obj) = (current_block [OBJECT_9_1]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_6 9
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define OBJECT_10_1 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_8 11
#define FREE_REFERENCE_10_0 14
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto emacs_clean_input_flush_typeahead_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_clean_input_flush_typeahead_10)
DEFLABEL (emacs_clean_input_flush_typeahead_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  goto loop_4;

DEFLABEL (loop_11)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_6);
  if (Rvl == (current_block [OBJECT_10_0]))
    goto label_12;
  goto loop_4;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto emacs__g_interrupt_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs__g_interrupt_4)
DEFLABEL (emacs__g_interrupt_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_11 7
#define LABEL_12_12 9
#define LABEL_12_7 11
#define LABEL_12_8 13
#define TAG_12_9 5
#define LABEL_12_15 15
#define ENVIRONMENT_LABEL_12_3 37
#define DEBUGGING_LABEL_12_2 36
#define OBJECT_12_4 35
#define OBJECT_12_3 34
#define OBJECT_12_2 33
#define OBJECT_12_1 32
#define OBJECT_12_0 31
#define EXECUTE_CACHE_12_18 17
#define EXECUTE_CACHE_12_17 19
#define EXECUTE_CACHE_12_16 21
#define EXECUTE_CACHE_12_14 23
#define EXECUTE_CACHE_12_13 25
#define EXECUTE_CACHE_12_10 27
#define EXECUTE_CACHE_12_6 29
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_12_4);
      goto emacs_write_result_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_12_8);
      goto lambda_10;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_write_result_9)
DEFLABEL (emacs_write_result_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_1]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_12_4]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (label_12)
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_8])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [5]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_12_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_10 11
#define LABEL_13_12 13
#define ENVIRONMENT_LABEL_13_3 29
#define DEBUGGING_LABEL_13_2 28
#define OBJECT_13_1 27
#define OBJECT_13_0 26
#define EXECUTE_CACHE_13_13 15
#define EXECUTE_CACHE_13_11 17
#define EXECUTE_CACHE_13_9 19
#define EXECUTE_CACHE_13_6 21
#define FREE_REFERENCE_13_1 24
#define FREE_REFERENCE_13_0 25
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_13_4);
      goto emacs_error_decision_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_error_decision_10)
DEFLABEL (emacs_error_decision_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_16;
  Wrd7 = Wrd11;

DEFLABEL (label_15)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd7.Obj))
    goto label_11;
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_12])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd8.pObj));

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_14_4);
      goto emacs_set_default_directory_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_set_default_directory_4)
DEFLABEL (emacs_set_default_directory_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_6 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto emacs_read_start_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_read_start_6)
DEFLABEL (emacs_read_start_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_15_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define ENVIRONMENT_LABEL_16_3 16
#define DEBUGGING_LABEL_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 9
#define EXECUTE_CACHE_16_7 11
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto emacs_read_finish_3;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_read_finish_6)
DEFLABEL (emacs_read_finish_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_2 17
#define OBJECT_17_1 16
#define OBJECT_17_0 15
#define EXECUTE_CACHE_17_9 9
#define EXECUTE_CACHE_17_8 11
#define EXECUTE_CACHE_17_6 13
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto emacs_gc_start_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_gc_start_5)
DEFLABEL (emacs_gc_start_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_2]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_2 13
#define OBJECT_18_1 12
#define OBJECT_18_0 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_18_4);
      goto emacs_gc_finish_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_gc_finish_4)
DEFLABEL (emacs_gc_finish_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18_2]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_9 9
#define LABEL_19_11 11
#define TAG_19_12 4
#define ENVIRONMENT_LABEL_19_3 27
#define DEBUGGING_LABEL_19_2 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_14 13
#define EXECUTE_CACHE_19_13 15
#define EXECUTE_CACHE_19_10 17
#define EXECUTE_CACHE_19_8 19
#define EXECUTE_CACHE_19_6 21
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_19_4);
      goto transmit_signal_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transmit_signal_8)
DEFLABEL (transmit_signal_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_2]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_8 9
#define LABEL_20_9 11
#define LABEL_20_10 13
#define LABEL_20_11 15
#define LABEL_20_12 17
#define LABEL_20_14 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_18 25
#define TAG_20_19 11
#define ENVIRONMENT_LABEL_20_3 46
#define DEBUGGING_LABEL_20_2 45
#define OBJECT_20_7 44
#define OBJECT_20_6 43
#define OBJECT_20_5 42
#define OBJECT_20_4 41
#define OBJECT_20_3 40
#define OBJECT_20_2 39
#define OBJECT_20_1 38
#define OBJECT_20_0 37
#define EXECUTE_CACHE_20_21 27
#define EXECUTE_CACHE_20_20 29
#define EXECUTE_CACHE_20_17 31
#define EXECUTE_CACHE_20_13 33
#define EXECUTE_CACHE_20_7 35
#define FREE_REFERENCES_LABEL_20_0 26
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_20_4);
      goto transmit_signal_with_argument_14;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_20_18);
      goto lambda_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transmit_signal_with_argument_23)
DEFLABEL (transmit_signal_with_argument_14)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_34;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd44.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd44.uLng) == 30))
    goto label_32;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_32;
  (Wrd35.Obj) = (current_block [OBJECT_20_3]);
  ((Wrd40.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd35.Obj)));

DEFLABEL (label_31)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_30;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_30;
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 2))
    goto label_30;
  ((Wrd22.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (CHAR_TO_ASCII (Wrd17.Obj)));

DEFLABEL (label_29)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_28;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_28;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_27)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_26;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_26;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_26;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd22.pChr) = (& ((Wrd28.pChr) [(Wrd19.Lng)]));
  (Wrd23.Obj) = (current_block [OBJECT_20_3]);
  ((Wrd22.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd23.Obj)));

DEFLABEL (label_25)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_18])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_20]));

DEFLABEL (label_26)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_20_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_21)
  goto label_25;

DEFLABEL (label_28)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_20_6]);
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_32)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_20_4]);
  (Wrd47.Obj) = (current_block [OBJECT_20_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_19)
  goto label_31;

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_20_1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_20_18);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_21]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_1 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_8 11
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_21_4);
      goto cwb_10;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cwb_13)
DEFLABEL (cwb_10)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) - (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_8;

DEFLABEL (loop_14)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 4);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_16)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd8.Lng) < (Wrd10.Lng))
    goto label_17;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd18.Lng) = ((Wrd15.Lng) + (Wrd8.Lng));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd24.Lng) = ((Wrd10.Lng) - (Wrd8.Lng));
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (Rsp [2]) = (Wrd19.Obj);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
emacs_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto emacs_typeout_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_typeout_4)
DEFLABEL (emacs_typeout_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_22_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_1 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCE_23_0 12
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto emacs_eval_1;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_eval_5)
DEFLABEL (emacs_eval_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_8 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define LABEL_24_14 19
#define LABEL_24_15 21
#define LABEL_24_16 23
#define LABEL_24_17 25
#define LABEL_24_18 27
#define LABEL_24_19 29
#define LABEL_24_20 31
#define LABEL_24_21 33
#define LABEL_24_22 35
#define LABEL_24_23 37
#define LABEL_24_9 39
#define LABEL_24_25 41
#define LABEL_24_27 43
#define LABEL_24_26 45
#define LABEL_24_29 47
#define LABEL_24_32 49
#define LABEL_24_31 51
#define LABEL_24_33 53
#define LABEL_24_34 55
#define LABEL_24_35 57
#define ENVIRONMENT_LABEL_24_3 108
#define DEBUGGING_LABEL_24_2 107
#define OBJECT_24_16 106
#define OBJECT_24_15 105
#define OBJECT_24_14 104
#define OBJECT_24_13 103
#define OBJECT_24_12 102
#define OBJECT_24_11 101
#define OBJECT_24_10 100
#define OBJECT_24_9 99
#define OBJECT_24_8 98
#define OBJECT_24_7 97
#define OBJECT_24_6 96
#define OBJECT_24_5 95
#define OBJECT_24_4 94
#define OBJECT_24_3 93
#define OBJECT_24_2 92
#define OBJECT_24_1 91
#define OBJECT_24_0 90
#define EXECUTE_CACHE_24_36 59
#define EXECUTE_CACHE_24_30 61
#define EXECUTE_CACHE_24_28 63
#define EXECUTE_CACHE_24_24 65
#define EXECUTE_CACHE_24_7 67
#define FREE_REFERENCE_24_16 70
#define FREE_REFERENCE_24_15 71
#define FREE_REFERENCE_24_14 72
#define FREE_REFERENCE_24_13 73
#define FREE_REFERENCE_24_12 74
#define FREE_REFERENCE_24_11 75
#define FREE_REFERENCE_24_10 76
#define FREE_REFERENCE_24_9 77
#define FREE_REFERENCE_24_8 78
#define FREE_REFERENCE_24_7 79
#define FREE_REFERENCE_24_6 80
#define FREE_REFERENCE_24_5 81
#define FREE_REFERENCE_24_4 82
#define FREE_REFERENCE_24_3 83
#define FREE_REFERENCE_24_2 84
#define FREE_REFERENCE_24_1 85
#define FREE_REFERENCE_24_0 86
#define FREE_ASSIGNMENT_24_1 88
#define FREE_ASSIGNMENT_24_0 89
#define FREE_REFERENCES_LABEL_24_0 58
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd270;
  machine_word Wrd266;
  machine_word Wrd268;
  machine_word Wrd269;
  machine_word Wrd262;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd256;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd254;
  machine_word Wrd253;
  machine_word Wrd251;
  machine_word Wrd247;
  machine_word Wrd249;
  machine_word Wrd250;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd246;
  machine_word Wrd237;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd228;
  machine_word Wrd230;
  machine_word Wrd231;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd227;
  machine_word Wrd218;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd213;
  machine_word Wrd209;
  machine_word Wrd211;
  machine_word Wrd212;
  machine_word Wrd205;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd199;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd180;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd175;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd156;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd123;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_24_4);
      goto initialize_packageB_48;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_50;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto label_53;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto label_55;

    case 8:
      current_block = (Rpc - LABEL_24_14);
      goto label_56;

    case 9:
      current_block = (Rpc - LABEL_24_15);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_24_16);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_24_17);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_24_18);
      goto label_60;

    case 13:
      current_block = (Rpc - LABEL_24_19);
      goto label_61;

    case 14:
      current_block = (Rpc - LABEL_24_20);
      goto label_62;

    case 15:
      current_block = (Rpc - LABEL_24_21);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_24_22);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_24_23);
      goto label_65;

    case 18:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_40;

    case 19:
      current_block = (Rpc - LABEL_24_25);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_24_27);
      goto label_67;

    case 21:
      current_block = (Rpc - LABEL_24_26);
      goto lambda_47;

    case 22:
      current_block = (Rpc - LABEL_24_29);
      goto continuation_41;

    case 23:
      current_block = (Rpc - LABEL_24_32);
      goto label_68;

    case 24:
      current_block = (Rpc - LABEL_24_31);
      goto continuation_42;

    case 25:
      current_block = (Rpc - LABEL_24_33);
      goto label_69;

    case 26:
      current_block = (Rpc - LABEL_24_34);
      goto label_70;

    case 27:
      current_block = (Rpc - LABEL_24_35);
      goto label_71;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_73)
DEFLABEL (initialize_packageB_48)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_112;
  Wrd8 = Wrd12;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_108)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_107;
  Wrd21 = Wrd25;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_105;
  Wrd28 = Wrd32;

DEFLABEL (label_104)
  (Wrd37.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_103;
  Wrd47 = Wrd51;

DEFLABEL (label_102)
  (Wrd56.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_24_2]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_4]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_101;
  Wrd66 = Wrd70;

DEFLABEL (label_100)
  (Wrd75.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_24_3]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (Wrd80.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_5]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_99;
  Wrd85 = Wrd89;

DEFLABEL (label_98)
  (Wrd94.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd98.Obj) = (current_block [OBJECT_24_4]);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (Wrd99.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_6]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_97;
  Wrd104 = Wrd108;

DEFLABEL (label_96)
  (Wrd113.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_24_5]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd118.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_7]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_95;
  Wrd123 = Wrd127;

DEFLABEL (label_94)
  (Wrd132.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_24_6]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd137.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_8]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_93;
  Wrd142 = Wrd146;

DEFLABEL (label_92)
  (Wrd151.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd142.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_24_7]);
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd154.pObj) = (& (Rhp [-2]));
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd154.pObj)));
  (Wrd156.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd156.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_9]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_91;
  Wrd161 = Wrd165;

DEFLABEL (label_90)
  (Wrd170.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_24_8]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd167.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd175.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_10]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_89;
  Wrd180 = Wrd184;

DEFLABEL (label_88)
  (Wrd189.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_24_9]);
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd186.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Wrd194.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd190.Obj);
  (* (Rhp++)) = (Wrd194.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_11]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_87;
  Wrd199 = Wrd203;

DEFLABEL (label_86)
  (Wrd208.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd205.Obj);
  (Wrd211.pObj) = (& (Rhp [-2]));
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd211.pObj)));
  (Wrd213.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd213.Obj);
  (Wrd215.pObj) = (& (Rhp [-2]));
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd215.pObj)));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_12]));
  (Wrd222.Obj) = ((Wrd219.pObj) [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 50)
    goto label_85;
  Wrd218 = Wrd222;

DEFLABEL (label_84)
  (Wrd227.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd226.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd226.pObj)));
  (Wrd231.Obj) = (current_block [OBJECT_24_11]);
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd224.Obj);
  (Wrd230.pObj) = (& (Rhp [-2]));
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd230.pObj)));
  (Wrd232.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd232.Obj);
  (Wrd234.pObj) = (& (Rhp [-2]));
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd234.pObj)));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_13]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_83;
  Wrd237 = Wrd241;

DEFLABEL (label_82)
  (Wrd246.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd250.Obj) = (current_block [OBJECT_24_12]);
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd243.Obj);
  (Wrd249.pObj) = (& (Rhp [-2]));
  (Wrd247.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd249.pObj)));
  (Wrd251.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd247.Obj);
  (* (Rhp++)) = (Wrd251.Obj);
  (Wrd253.pObj) = (& (Rhp [-2]));
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd253.pObj)));
  (* (--Rsp)) = (Wrd254.Obj);
  (Wrd257.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_14]));
  (Wrd260.Obj) = ((Wrd257.pObj) [0]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if ((Wrd261.uLng) == 50)
    goto label_81;
  Wrd256 = Wrd260;

DEFLABEL (label_80)
  (Wrd265.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_24_13]);
  (* (Rhp++)) = (Wrd269.Obj);
  (* (Rhp++)) = (Wrd262.Obj);
  (Wrd268.pObj) = (& (Rhp [-2]));
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd268.pObj)));
  (Wrd270.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd270.Obj);
  (Wrd272.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd272.pObj)));
  (* (--Rsp)) = (Wrd273.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_24]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_77)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_15]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_76;
  Wrd20 = Wrd24;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_28]));

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_27])), (Wrd21.pObj));

DEFLABEL (label_67)
  (Wrd20.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_79)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_66)
  goto label_77;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_23])), (Wrd257.pObj));

DEFLABEL (label_65)
  (Wrd256.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_22])), (Wrd238.pObj));

DEFLABEL (label_64)
  (Wrd237.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_21])), (Wrd219.pObj));

DEFLABEL (label_63)
  (Wrd218.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_20])), (Wrd200.pObj));

DEFLABEL (label_62)
  (Wrd199.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_19])), (Wrd181.pObj));

DEFLABEL (label_61)
  (Wrd180.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_18])), (Wrd162.pObj));

DEFLABEL (label_60)
  (Wrd161.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_17])), (Wrd143.pObj));

DEFLABEL (label_59)
  (Wrd142.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_16])), (Wrd124.pObj));

DEFLABEL (label_58)
  (Wrd123.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_15])), (Wrd105.pObj));

DEFLABEL (label_57)
  (Wrd104.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_14])), (Wrd86.pObj));

DEFLABEL (label_56)
  (Wrd85.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_13])), (Wrd67.pObj));

DEFLABEL (label_55)
  (Wrd66.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_12])), (Wrd48.pObj));

DEFLABEL (label_54)
  (Wrd47.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_11])), (Wrd29.pObj));

DEFLABEL (label_53)
  (Wrd28.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_10])), (Wrd22.pObj));

DEFLABEL (label_52)
  (Wrd21.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_110)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_51)
  goto label_108;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_111;

DEFLABEL (lambda_74)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_24_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_30]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_24_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_125;
  Wrd8 = Wrd12;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_24_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_123;
  Wrd6 = Wrd10;

DEFLABEL (label_122)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_121;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_16]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_120;
  Wrd14 = Wrd18;

DEFLABEL (label_119)
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == (Wrd14.Obj))
    goto label_114;
  (Wrd21.Obj) = (current_block [OBJECT_24_15]);
  goto label_113;

DEFLABEL (label_114)
  (Wrd21.Obj) = (current_block [OBJECT_24_14]);

DEFLABEL (label_113)
DEFLABEL (label_118)
  Rsp = (& (Rsp [1]));
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_115;
  Rvl = (current_block [OBJECT_24_16]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_117;
  Wrd26 = Wrd30;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_36]));

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_35])), (Wrd27.pObj));

DEFLABEL (label_71)
  (Wrd26.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_34])), (Wrd15.pObj));

DEFLABEL (label_70)
  (Wrd14.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_121)
  Rsp = (& (Rsp [1]));
  goto label_115;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_33])), (Wrd7.pObj));

DEFLABEL (label_69)
  (Wrd6.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_32])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_124;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define LABEL_25_9 13
#define LABEL_25_10 15
#define LABEL_25_11 17
#define LABEL_25_12 19
#define LABEL_25_13 21
#define LABEL_25_14 23
#define LABEL_25_15 25
#define LABEL_25_16 27
#define ENVIRONMENT_LABEL_25_3 41
#define DEBUGGING_LABEL_25_2 40
#define OBJECT_25_1 39
#define OBJECT_25_0 38
#define FREE_REFERENCE_25_4 29
#define FREE_REFERENCE_25_3 30
#define FREE_REFERENCE_25_2 31
#define FREE_REFERENCE_25_1 32
#define FREE_REFERENCE_25_0 33
#define FREE_ASSIGNMENT_25_2 35
#define FREE_ASSIGNMENT_25_1 36
#define FREE_ASSIGNMENT_25_0 37
#define FREE_REFERENCES_LABEL_25_0 28
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd67;
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
      goto select_console_port_type_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_25_10);
      goto label_3;

    case 7:
      current_block = (Rpc - LABEL_25_11);
      goto label_4;

    case 8:
      current_block = (Rpc - LABEL_25_12);
      goto label_5;

    case 9:
      current_block = (Rpc - LABEL_25_13);
      goto label_6;

    case 10:
      current_block = (Rpc - LABEL_25_14);
      goto label_7;

    case 11:
      current_block = (Rpc - LABEL_25_15);
      goto label_8;

    case 12:
      current_block = (Rpc - LABEL_25_16);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_console_port_type_15)
DEFLABEL (select_console_port_type_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd6.Obj) = (current_block [OBJECT_25_1]);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd13.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_27;
  Wrd25 = Wrd29;

DEFLABEL (label_26)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_1]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd31.pObj) [0]) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_3]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_22;
  Wrd43 = Wrd47;

DEFLABEL (label_21)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_2]));
  (Wrd57.Obj) = ((Wrd49.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd49.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_18)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_4]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_17;
  Wrd61 = Wrd65;

DEFLABEL (label_16)
  Rvl = (Wrd61.Obj);
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_16])), (Wrd62.pObj));

DEFLABEL (label_9)
  (Wrd61.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  if ((Wrd57.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_15])), (Wrd49.pObj), (Wrd43.Obj));

DEFLABEL (label_8)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_14])), (Wrd44.pObj));

DEFLABEL (label_7)
  (Wrd43.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_13])), (Wrd31.pObj), (Wrd25.Obj));

DEFLABEL (label_6)
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_12])), (Wrd26.pObj));

DEFLABEL (label_5)
  (Wrd25.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  if ((Wrd21.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_11])), (Wrd13.pObj), (Wrd7.Obj));

DEFLABEL (label_4)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd75.Obj) = ((Wrd67.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd67.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_1]));
  (Wrd80.Obj) = (current_block [OBJECT_25_1]);
  (Wrd87.Obj) = ((Wrd79.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd79.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_2]));
  (Wrd92.Obj) = (current_block [OBJECT_25_1]);
  (Wrd99.Obj) = ((Wrd91.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd91.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_35;
  Wrd103 = Wrd107;

DEFLABEL (label_34)
  Rvl = (Wrd103.Obj);
  goto pop_return;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd104.pObj));

DEFLABEL (label_13)
  (Wrd103.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if ((Wrd99.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_8])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_12)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd87.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_7])), (Wrd79.pObj), (Wrd80.Obj));

DEFLABEL (label_11)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd75.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_6])), (Wrd67.pObj), (Wrd6.Obj));

DEFLABEL (label_10)
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCE_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
emacs_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto deferred_operation_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deferred_operation_4)
DEFLABEL (deferred_operation_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
emacs_so_da94b3ca611e7560 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	3,
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
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
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
    if (counter > 26)
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

static const struct liarc_code_S arr_decl_emacs_so_da94b3ca611e7560 [26] =
  {
    { "emacs_so_code_1", 3, emacs_so_code_1 },
    { "emacs_so_code_2", 4, emacs_so_code_2 },
    { "emacs_so_code_3", 9, emacs_so_code_3 },
    { "emacs_so_code_4", 2, emacs_so_code_4 },
    { "emacs_so_code_5", 7, emacs_so_code_5 },
    { "emacs_so_code_6", 5, emacs_so_code_6 },
    { "emacs_so_code_7", 2, emacs_so_code_7 },
    { "emacs_so_code_8", 1, emacs_so_code_8 },
    { "emacs_so_code_9", 5, emacs_so_code_9 },
    { "emacs_so_code_10", 4, emacs_so_code_10 },
    { "emacs_so_code_11", 2, emacs_so_code_11 },
    { "emacs_so_code_12", 7, emacs_so_code_12 },
    { "emacs_so_code_13", 6, emacs_so_code_13 },
    { "emacs_so_code_14", 2, emacs_so_code_14 },
    { "emacs_so_code_15", 3, emacs_so_code_15 },
    { "emacs_so_code_16", 3, emacs_so_code_16 },
    { "emacs_so_code_17", 3, emacs_so_code_17 },
    { "emacs_so_code_18", 2, emacs_so_code_18 },
    { "emacs_so_code_19", 5, emacs_so_code_19 },
    { "emacs_so_code_20", 12, emacs_so_code_20 },
    { "emacs_so_code_21", 4, emacs_so_code_21 },
    { "emacs_so_code_22", 2, emacs_so_code_22 },
    { "emacs_so_code_23", 3, emacs_so_code_23 },
    { "emacs_so_code_24", 28, emacs_so_code_24 },
    { "emacs_so_code_25", 13, emacs_so_code_25 },
    { "emacs_so_code_26", 2, emacs_so_code_26 }
  };

int
decl_emacs_so_da94b3ca611e7560 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_emacs_so_da94b3ca611e7560);
  return (0);
}

DECLARE_COMPILED_CODE ("emacs.so", 3, decl_emacs_so_da94b3ca611e7560, emacs_so_da94b3ca611e7560)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_emacs_so_data_da94b3ca611e7560 [3992] =
  "\x87\x01\x3a\xac\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0f\x28\x0d"
  "\xb9\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbc\x1d\xb0\x82\x88\x0f\x0f\x0c\x28\xb1\x28\x0d\xbd\x28\xb2"
  "\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x83\x88\x0c\x0c\x0f\x0c\xc1\x0d\xc1\x0d\x1c\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x0f\x28\xb5\x28\xb3\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\xbb\x1d\xb0\x85\x88\x07\x0f\x0f\xc1\x1c\x0c\x0c\x28\x0d"
  "\x28\xb6\x28\x0d\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0f"
  "\x0f\x0f\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x24\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0f\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x1b\x24\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0f\x0c\x0c\x0f\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb5\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0f\x1b\x0d"
  "\x1c\x24\x28\x0d\x28\xb2\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x28\x0d\x28\xb5\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x0f\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0d\x1c\x28\x1b\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x0c\x80\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x0c\x80\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x80"
  "\x0f\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x81\xc3\x80\x0f\xc1\x83\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc4\x1d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0f\x1b\x24\x28\xb5"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x06\x07\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x08"
  "\x0d\x1c\x0d\x1c\x25\x1b\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x06\xc0\x0d\x0d\x0d\x25\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c"
  "\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb3\x2a\x0c\x0c\x08\x89\x0c\x0c\x08\x89\x08\x89\x1b\x2a"
  "\xb7\x2a\xb4\x2a\x17\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\xb5\xb2\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb6\x1b\x1b"
  "\x1b\xb1\x1b\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x65\x6d\x61\x63"
  "\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x01\x53\x05\x19\x74"
  "\x72\x61\x6e\x73\x6d\x69\x74\x2d\x6d\x6f\x64\x65\x6c\x69\x6e\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x04\x10\x74\x72\x61\x6e\x73\x6d\x69"
  "\x74\x2d\x73\x69\x67\x6e\x61\x6c\x04\x05\x72\x65\x61\x64\x04\x06"
  "\x08\x81\x89\x02\x05\x06\x81\x89\x02\x04\x04\x86\x0a\x07\x12\x02"
  "\x01\x70\x01\x45\x01\x05\x05\x1e\x74\x72\x61\x6e\x73\x6d\x69\x74"
  "\x2d\x73\x69\x67\x6e\x61\x6c\x2d\x77\x69\x74\x68\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x04\x03\x13\x72\x65\x61\x64\x2d\x63\x68\x61"
  "\x72\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x05\x0a\x0a\x81\x87\x02"
  "\x09\x08\x81\x87\x02\x08\x06\x81\x87\x02\x07\x04\x85\x08\x09\x18"
  "\x02\x02\x20\x0c\x5b\x45\x76\x61\x6c\x75\x61\x74\x6f\x72\x5d\x01"
  "\x71\x0d\x5b\x45\x76\x61\x6c\x75\x61\x74\x6f\x72\x5d\x20\x04\x63"
  "\x64\x72\x09\x73\x74\x61\x6e\x64\x61\x72\x64\x04\x63\x61\x72\x12"
  "\x63\x6d\x64\x6c\x2d\x70\x72\x6f\x6d\x70\x74\x2d\x61\x6c\x69\x73"
  "\x74\x09\x02\x04\x06\x61\x73\x73\x6f\x63\x04\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x0a\x05\x0a\x05\x03\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x0b\x06\x13"
  "\x14\x81\x8d\x02\x12\x12\x81\x89\x02\x11\x10\x81\x83\x02\x10\x0e"
  "\x81\x8b\x02\x0f\x0c\x81\x87\x02\x0e\x0a\x81\x8f\x02\x0d\x08\x81"
  "\x8d\x02\x0c\x06\x81\x8b\x02\x0b\x04\x85\x08\x13\x2a\x0c\x02\x01"
  "\x6a\x05\x04\x03\x15\x06\x81\x87\x02\x14\x04\x85\x08\x05\x0e\x02"
  "\x01\x7a\x01\x6f\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x0d\x03\x3f\x20\x0c\x20\x28\x79\x20\x6f\x72\x20\x6e\x29"
  "\x3f\x20\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d\x73\x75\x66\x66\x69"
  "\x78\x3f\x03\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64"
  "\x05\x04\x0a\x06\x1c\x10\x81\x83\x02\x1b\x0e\x81\x85\x02\x1a\x0c"
  "\x81\x87\x02\x19\x0a\x81\x85\x02\x18\x08\x81\x81\x02\x17\x06\x81"
  "\x85\x02\x16\x04\x84\x06\x0f\x23\x0e\x02\x01\x67\x01\x0b\x01\x74"
  "\x04\x03\x15\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65"
  "\x61\x64\x2d\x63\x68\x61\x72\x0f\x03\x21\x0c\x81\x85\x02\x20\x0a"
  "\x81\x83\x02\x1f\x08\x81\x83\x02\x1e\x06\x81\x83\x02\x1d\x04\x83"
  "\x04\x0b\x16\x10\x02\x08\x03\x05\x62\x65\x65\x70\x11\x04\x0e\x65"
  "\x6d\x61\x63\x73\x2d\x74\x79\x70\x65\x6f\x75\x74\x12\x03\x23\x06"
  "\x81\x85\x02\x22\x04\x84\x06\x05\x0d\x13\x02\x09\x04\x12\x02\x24"
  "\x04\x84\x06\x03\x14\x02\x0a\x38\x28\x73\x65\x74\x2d\x77\x69\x6e"
  "\x64\x6f\x77\x2d\x73\x74\x61\x72\x74\x20\x28\x73\x65\x6c\x65\x63"
  "\x74\x65\x64\x2d\x77\x69\x6e\x64\x6f\x77\x29\x20\x78\x73\x63\x68"
  "\x65\x6d\x65\x2d\x74\x65\x6d\x70\x2d\x31\x20\x6e\x69\x6c\x29\x1e"
  "\x28\x73\x65\x74\x71\x20\x78\x73\x63\x68\x65\x6d\x65\x2d\x74\x65"
  "\x6d\x70\x2d\x31\x20\x28\x70\x6f\x69\x6e\x74\x29\x29\x20\x65\x6d"
  "\x61\x63\x73\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x6f\x70\x2d\x6a\x75\x73\x74\x69\x66\x79\x3f\x15\x02\x03"
  "\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x0b\x65\x6d\x61\x63\x73\x2d"
  "\x65\x76\x61\x6c\x16\x03\x29\x0c\x81\x85\x02\x28\x0a\x81\x85\x02"
  "\x27\x08\x81\x85\x02\x26\x06\x81\x85\x02\x25\x04\x84\x06\x0b\x17"
  "\x17\x02\x0b\x01\x01\x11\x74\x68\x65\x2d\x63\x6f\x6e\x73\x6f\x6c"
  "\x65\x2d\x70\x6f\x72\x74\x18\x02\x03\x0f\x02\x2d\x0a\x81\x83\x02"
  "\x2c\x08\x81\x85\x02\x2b\x06\x81\x83\x02\x2a\x04\x83\x04\x09\x13"
  "\x0f\x02\x0c\x01\x68\x18\x02\x04\x02\x2f\x06\x81\x83\x02\x2e\x04"
  "\x82\x02\x05\x0e\x19\x02\x0d\x17\x3a\x20\x25\x73\x22\x20\x78\x73"
  "\x63\x68\x65\x6d\x65\x2d\x70\x72\x6f\x6d\x70\x74\x29\x29\x01\x51"
  "\x39\x28\x78\x73\x63\x68\x65\x6d\x65\x2d\x77\x72\x69\x74\x65\x2d"
  "\x6d\x65\x73\x73\x61\x67\x65\x2d\x31\x20\x78\x73\x63\x68\x65\x6d"
  "\x65\x2d\x70\x72\x6f\x6d\x70\x74\x20\x28\x66\x6f\x72\x6d\x61\x74"
  "\x20\x22\x3b\x56\x61\x6c\x75\x65\x20\x01\x01\x77\x03\x11\x75\x6e"
  "\x64\x65\x66\x69\x6e\x65\x64\x2d\x76\x61\x6c\x75\x65\x3f\x03\x18"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x03\x10\x77\x72\x69\x74\x65\x2d\x74"
  "\x6f\x2d\x73\x74\x72\x69\x6e\x67\x1a\x05\x03\x0b\x05\x06\x77\x72"
  "\x69\x74\x65\x06\x16\x08\x36\x10\x81\x8b\x02\x35\x0e\x81\x85\x02"
  "\x34\x0c\x81\x8b\x02\x33\x0a\x81\x8d\x02\x32\x08\x81\x8b\x02\x31"
  "\x06\x81\x8b\x02\x30\x04\x87\x0c\x0f\x26\x0b\x02\x0e\x02\x01\x7b"
  "\x18\x19\x70\x61\x72\x61\x6e\x6f\x69\x64\x2d\x65\x72\x72\x6f\x72"
  "\x2d\x64\x65\x63\x69\x73\x69\x6f\x6e\x3f\x1b\x03\x03\x0a\x63\x6d"
  "\x64\x6c\x2f\x70\x6f\x72\x74\x04\x03\x11\x02\x1e\x63\x6d\x64\x6c"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x61\x62\x6f\x72\x74"
  "\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x05\x3c\x0e\x81\x83\x02\x3b"
  "\x0c\x81\x83\x02\x3a\x0a\x81\x83\x02\x39\x08\x81\x83\x02\x38\x06"
  "\x81\x85\x02\x37\x04\x84\x06\x0d\x1e\x11\x02\x0f\x01\x78\x03\x0d"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x05\x03\x3e\x06"
  "\x81\x87\x02\x3d\x04\x84\x06\x05\x0e\x1c\x02\x10\x02\x0b\x72\x65"
  "\x61\x64\x2d\x73\x74\x61\x72\x74\x1d\x01\x74\x04\x03\x13\x64\x65"
  "\x66\x65\x72\x72\x65\x64\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x1e\x03\x41\x08\x81\x83\x02\x40\x06\x81\x83\x02\x3f\x04\x83\x04"
  "\x07\x12\x1f\x02\x11\x01\x67\x0c\x72\x65\x61\x64\x2d\x66\x69\x6e"
  "\x69\x73\x68\x20\x03\x1e\x04\x03\x44\x08\x81\x83\x02\x43\x06\x81"
  "\x85\x02\x42\x04\x83\x04\x07\x11\x21\x02\x12\x03\x1b\x62\x03\x19"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x66\x6c\x75\x73"
  "\x68\x2d\x6f\x75\x74\x70\x75\x74\x22\x03\x14\x70\x6f\x72\x74\x2f"
  "\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x23\x06"
  "\x04\x63\x77\x62\x24\x04\x47\x08\x81\x87\x02\x46\x06\x81\x83\x02"
  "\x45\x04\x83\x04\x07\x14\x25\x02\x13\x03\x1b\x65\x03\x23\x06\x24"
  "\x03\x49\x06\x81\x87\x02\x48\x04\x83\x04\x05\x10\x26\x02\x14\x01"
  "\x1c\x04\x07\x73\x74\x72\x69\x6e\x67\x03\x23\x03\x22\x03\x1e\x77"
  "\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c\x79\x2d\x6e"
  "\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x27\x06\x24\x06"
  "\x4e\x0c\x81\x83\x02\x4d\x0a\x81\x89\x02\x4c\x08\x81\x87\x02\x4b"
  "\x06\x81\x85\x02\x4a\x04\x84\x06\x0b\x1c\x28\x02\x15\x0c\x73\x74"
  "\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x01\x1c\x10\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0d\x03\x23\x07\x10"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x03"
  "\x22\x03\x27\x06\x24\x06\x5a\x1a\x81\x83\x02\x59\x18\x81\x8f\x02"
  "\x58\x16\x81\x8f\x02\x57\x14\x81\x8f\x02\x56\x12\x81\x8f\x02\x55"
  "\x10\x81\x8f\x02\x54\x0e\x81\x8f\x02\x53\x0c\x81\x8d\x02\x52\x0a"
  "\x81\x8b\x02\x51\x08\x81\x89\x02\x50\x06\x81\x87\x02\x4f\x04\x85"
  "\x08\x19\x2f\x27\x02\x16\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77"
  "\x72\x69\x74\x65\x02\x03\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x02\x5e\x0a\x81\x95\x02\x5d"
  "\x08\x81\x8d\x02\x5c\x06\x81\x8d\x02\x5b\x04\x86\x0a\x09\x11\x23"
  "\x02\x17\x02\x29\x0f\x28\x6d\x65\x73\x73\x61\x67\x65\x20\x22\x25"
  "\x73\x22\x20\x03\x1a\x06\x16\x03\x60\x06\x81\x89\x02\x5f\x04\x84"
  "\x06\x05\x0f\x22\x02\x18\x06\x61\x70\x70\x6c\x79\x01\x46\x0a\x02"
  "\x05\x02\x63\x08\x81\x87\x02\x62\x06\x81\x8b\x02\x61\x04\xfe\x05"
  "\x07\x11\x1a\x02\x19\x02\x16\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x18\x70\x72\x6f"
  "\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d"
  "\x63\x68\x61\x72\x1e\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x18\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f"
  "\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e\x11\x64\x65\x62\x75\x67"
  "\x67\x65\x72\x2d\x66\x61\x69\x6c\x75\x72\x65\x11\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x16\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69"
  "\x6f\x6e\x0d\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74\x16"
  "\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x1d\x20\x09\x67\x63\x2d\x73\x74\x61\x72\x74"
  "\x0a\x67\x63\x2d\x66\x69\x6e\x69\x73\x68\x1a\x76\x61\x6e\x69\x6c"
  "\x6c\x61\x2d\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x70\x6f\x72\x74\x2d"
  "\x74\x79\x70\x65\x20\x18\x65\x6d\x61\x63\x73\x2d\x63\x6f\x6e\x73"
  "\x6f\x6c\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x1d\x03\x18"
  "\x20\x10\x65\x6d\x61\x63\x73\x2f\x67\x63\x2d\x66\x69\x6e\x69\x73"
  "\x68\x18\x0f\x65\x6d\x61\x63\x73\x2f\x67\x63\x2d\x73\x74\x61\x72"
  "\x74\x0d\x12\x65\x6d\x61\x63\x73\x2f\x72\x65\x61\x64\x2d\x66\x69"
  "\x6e\x69\x73\x68\x0a\x11\x65\x6d\x61\x63\x73\x2f\x72\x65\x61\x64"
  "\x2d\x73\x74\x61\x72\x74\x29\x1c\x65\x6d\x61\x63\x73\x2f\x73\x65"
  "\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2a\x13\x65\x6d\x61\x63\x73\x2f\x77\x72\x69\x74\x65"
  "\x2d\x72\x65\x73\x75\x6c\x74\x2b\x1c\x65\x6d\x61\x63\x73\x2f\x64"
  "\x65\x62\x75\x67\x67\x65\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61"
  "\x74\x69\x6f\x6e\x2c\x17\x65\x6d\x61\x63\x73\x2f\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x2d\x17\x65\x6d"
  "\x61\x63\x73\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x66\x61\x69"
  "\x6c\x75\x72\x65\x2e\x1e\x65\x6d\x61\x63\x73\x2f\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6e\x66\x69\x72\x6d\x61\x74"
  "\x69\x6f\x6e\x2f\x24\x65\x6d\x61\x63\x73\x2f\x70\x72\x6f\x6d\x70"
  "\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x30\x1e\x65\x6d\x61\x63\x73\x2f"
  "\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x2d\x63\x68\x61\x72\x31\x1c\x65\x6d\x61\x63\x73\x2f\x70"
  "\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x32\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65"
  "\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x1d\x12\x03\x0a\x70\x6f\x72"
  "\x74\x2f\x74\x79\x70\x65\x04\x0f\x6d\x61\x6b\x65\x2d\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e"
  "\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x02\x19\x73\x65\x6c"
  "\x65\x63\x74\x2d\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x70\x6f\x72\x74"
  "\x2d\x74\x79\x70\x65\x33\x04\x0f\x73\x65\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x74\x79\x70\x65\x21\x06\x7f\x3a\x81\x83\x02\x7e\x38\x81\x85"
  "\x02\x7d\x36\x81\x85\x02\x7c\x34\x81\x83\x02\x7b\x32\x81\x85\x02"
  "\x7a\x30\x81\x81\x02\x79\x2e\x82\x02\x78\x2c\x81\x83\x02\x77\x2a"
  "\x81\x81\x02\x76\x28\x81\x81\x02\x75\x26\x81\x87\x02\x74\x24\x81"
  "\x87\x02\x73\x22\x81\x87\x02\x72\x20\x81\x87\x02\x71\x1e\x81\x87"
  "\x02\x70\x1c\x81\x87\x02\x6f\x1a\x81\x87\x02\x6e\x18\x81\x87\x02"
  "\x6d\x16\x81\x87\x02\x6c\x14\x81\x87\x02\x6b\x12\x81\x87\x02\x6a"
  "\x10\x81\x87\x02\x69\x0e\x81\x85\x02\x68\x0c\x81\x83\x02\x67\x0a"
  "\x81\x81\x02\x66\x08\x81\x81\x02\x65\x06\x81\x83\x02\x64\x04\x82"
  "\x02\x39\x6d\x34\x02\x1a\x0d\x75\x6e\x64\x65\x72\x2d\x65\x6d\x61"
  "\x63\x73\x3f\x21\x68\x6f\x6f\x6b\x2f\x63\x6c\x65\x61\x6e\x2d\x69"
  "\x6e\x70\x75\x74\x2f\x66\x6c\x75\x73\x68\x2d\x74\x79\x70\x65\x61"
  "\x68\x65\x61\x64\x12\x68\x6f\x6f\x6b\x2f\x5e\x67\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x14\x68\x6f\x6f\x6b\x2f\x65\x72\x72\x6f"
  "\x72\x2d\x64\x65\x63\x69\x73\x69\x6f\x6e\x04\x20\x22\x65\x6d\x61"
  "\x63\x73\x2f\x63\x6c\x65\x61\x6e\x2d\x69\x6e\x70\x75\x74\x2f\x66"
  "\x6c\x75\x73\x68\x2d\x74\x79\x70\x65\x61\x68\x65\x61\x64\x35\x13"
  "\x65\x6d\x61\x63\x73\x2f\x5e\x67\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x36\x15\x65\x6d\x61\x63\x73\x2f\x65\x72\x72\x6f\x72\x2d"
  "\x64\x65\x63\x69\x73\x69\x6f\x6e\x37\x1d\x06\x8c\x01\x1c\x81\x81"
  "\x02\x8b\x01\x1a\x81\x81\x02\x8a\x01\x18\x81\x81\x02\x89\x01\x16"
  "\x81\x81\x02\x88\x01\x14\x81\x81\x02\x87\x01\x12\x81\x81\x02\x86"
  "\x01\x10\x81\x81\x02\x85\x01\x0e\x81\x81\x02\x84\x01\x0c\x81\x81"
  "\x02\x83\x01\x0a\x81\x81\x02\x82\x01\x08\x81\x81\x02\x81\x01\x06"
  "\x81\x81\x02\x80\x01\x04\x82\x02\x1b\x2a\x38\x02\x1b\x20\x02\x04"
  "\x14\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x02\x8e\x01\x06\x81\x83\x02\x8d\x01\x04\x83\x04"
  "\x05\x0d\x1b\x39\x39\x04\x38\x04\x34\x04\x1a\x04\x22\x04\x23\x04"
  "\x27\x04\x28\x04\x26\x04\x25\x04\x21\x04\x1f\x04\x1c\x04\x11\x04"
  "\x0b\x04\x19\x04\x0f\x04\x17\x04\x14\x04\x13\x04\x10\x04\x0e\x04"
  "\x04\x08\x64\x65\x62\x75\x67\x3e\x20\x08\x5b\x44\x65\x62\x75\x67"
  "\x5d\x08\x77\x68\x65\x72\x65\x3e\x20\x08\x5b\x57\x68\x65\x72\x65"
  "\x5d\x0c\x04\x04\x04\x20\x1e\x33\x14\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x1d\x20\x16\x12"
  "\x24\x18\x0d\x0a\x29\x2a\x1b\x37\x2b\x36\x35\x15\x2c\x2d\x2e\x2f"
  "\x32\x09\x31\x30\x20\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81"
  "\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
emacs_so_data_da94b3ca611e7560 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_emacs_so_data_da94b3ca611e7560 [0]))), (sizeof (prog_emacs_so_data_da94b3ca611e7560)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("emacs.so", emacs_so_data_da94b3ca611e7560)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("emacs.so", "5f930cab8b7b1955")
