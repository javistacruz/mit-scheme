/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:55-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 11
#define DEBUGGING_LABEL_1_2 10
#define OBJECT_1_3 9
#define OBJECT_1_2 8
#define OBJECT_1_1 7
#define OBJECT_1_0 6
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto symbolP_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbolP_5)
DEFLABEL (symbolP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd26.Lng))))
    goto label_12;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng)))
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_8)
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_1_3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto interned_symbolP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interned_symbolP_3)
DEFLABEL (interned_symbolP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 29L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_2_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define OBJECT_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto uninterned_symbolP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uninterned_symbolP_3)
DEFLABEL (uninterned_symbolP_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_3_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_4 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_5 16
#define OBJECT_4_4 15
#define OBJECT_4_3 14
#define OBJECT_4_2 13
#define OBJECT_4_1 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_4_4);
      goto guarantee_symbol_3;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_symbol_7)
DEFLABEL (guarantee_symbol_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_4_0]);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd31.Lng))))
    goto label_16;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_15;

DEFLABEL (label_14)
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_10;
  (Wrd15.Obj) = (current_block [OBJECT_4_4]);
  goto label_9;

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_9)
DEFLABEL (label_13)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_4_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_11;

DEFLABEL (label_16)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
symbol_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_symbol_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_symbol_5)
DEFLABEL (error_not_symbol_2)
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
#define OBJECT_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto guarantee_interned_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_interned_symbol_5)
DEFLABEL (guarantee_interned_symbol_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd11.Obj) = (current_block [OBJECT_6_0]);
  (Wrd14.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd14.Lng))))
    goto label_8;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
symbol_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_interned_symbol_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_interned_symbol_5)
DEFLABEL (error_not_interned_symbol_2)
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
#define OBJECT_8_2 11
#define OBJECT_8_1 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto guarantee_uninterned_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_uninterned_symbol_5)
DEFLABEL (guarantee_uninterned_symbol_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd11.Obj) = (current_block [OBJECT_8_0]);
  (Wrd14.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_8;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_8_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
symbol_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_uninterned_symbol_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_uninterned_symbol_5)
DEFLABEL (error_not_uninterned_symbol_2)
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
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define EXECUTE_CACHE_10_10 9
#define EXECUTE_CACHE_10_9 11
#define EXECUTE_CACHE_10_8 13
#define EXECUTE_CACHE_10_7 15
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_10_4);
      goto string__uninterned_symbol_4;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__uninterned_symbol_7)
DEFLABEL (string__uninterned_symbol_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 30)
    goto label_9;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 18
#define DEBUGGING_LABEL_11_2 17
#define EXECUTE_CACHE_11_10 9
#define EXECUTE_CACHE_11_9 11
#define EXECUTE_CACHE_11_8 13
#define EXECUTE_CACHE_11_7 15
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto utf8_string__uninterned_symbol_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string__uninterned_symbol_5)
DEFLABEL (utf8_string__uninterned_symbol_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_6)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define OBJECT_12_1 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto make_uninterned_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_uninterned_symbol_4)
DEFLABEL (make_uninterned_symbol_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_9 9
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_7 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_13_4);
      goto string__symbol_4;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__symbol_7)
DEFLABEL (string__symbol_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 30)
    goto label_9;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_9 7
#define LABEL_14_7 9
#define LABEL_14_10 11
#define ENVIRONMENT_LABEL_14_3 22
#define DEBUGGING_LABEL_14_2 21
#define OBJECT_14_1 20
#define OBJECT_14_0 19
#define EXECUTE_CACHE_14_11 13
#define EXECUTE_CACHE_14_8 15
#define EXECUTE_CACHE_14_6 17
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto utf8_string__symbol_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string__symbol_8)
DEFLABEL (utf8_string__symbol_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define ENVIRONMENT_LABEL_15_3 16
#define DEBUGGING_LABEL_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_6 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto substring__symbol_2;

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

DEFLABEL (substring__symbol_5)
DEFLABEL (substring__symbol_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 9
#define DEBUGGING_LABEL_16_2 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto string_head__symbol_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_head__symbol_3)
DEFLABEL (string_head__symbol_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto string_tail__symbol_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_tail__symbol_5)
DEFLABEL (string_tail__symbol_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_7;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_6)
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_1 11
#define OBJECT_18_0 10
#define FREE_REFERENCE_18_0 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto symbol_1;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_5)
DEFLABEL (symbol_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_4 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_19_4);
      goto intern_3;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_6)
DEFLABEL (intern_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 30)
    goto label_8;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_4 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 15
#define DEBUGGING_LABEL_20_2 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_20_4);
      goto intern_soft_3;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_soft_6)
DEFLABEL (intern_soft_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 30)
    goto label_8;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_10 9
#define TAG_21_11 3
#define LABEL_21_13 11
#define LABEL_21_14 13
#define LABEL_21_16 15
#define LABEL_21_18 17
#define LABEL_21_19 19
#define ENVIRONMENT_LABEL_21_3 39
#define DEBUGGING_LABEL_21_2 38
#define OBJECT_21_0 37
#define EXECUTE_CACHE_21_21 21
#define EXECUTE_CACHE_21_20 23
#define EXECUTE_CACHE_21_17 25
#define EXECUTE_CACHE_21_15 27
#define EXECUTE_CACHE_21_12 29
#define EXECUTE_CACHE_21_9 31
#define EXECUTE_CACHE_21_8 33
#define EXECUTE_CACHE_21_6 35
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto utf8_string_downcase_11;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_21_13);
      goto loop_7;

    case 5:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_21_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string_downcase_14)
DEFLABEL (utf8_string_downcase_11)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_21_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_21_10);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_7;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_21_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_18);
  Rsp = (& (Rsp [1]));
  goto loop_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define ENVIRONMENT_LABEL_22_3 15
#define DEBUGGING_LABEL_22_2 14
#define OBJECT_22_3 13
#define OBJECT_22_2 12
#define OBJECT_22_1 11
#define OBJECT_22_0 10
#define FREE_REFERENCES_LABEL_22_0 10
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_22_4);
      goto ascii_stringP_9;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ascii_stringP_14)
DEFLABEL (ascii_stringP_9)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_22_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_19;
  Rvl = (current_block [OBJECT_22_3]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_22;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_22;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pChr) = (& ((Wrd24.pChr) [(Wrd14.Lng)]));
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd17.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_21)
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! ((Wrd34.Lng) < 128L))
    goto label_20;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Rsp [0]) = (Wrd39.Obj);
  goto loop_6;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_22)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 11
#define DEBUGGING_LABEL_23_2 10
#define OBJECT_23_0 9
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto symbol_name_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_name_4)
DEFLABEL (symbol_name_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 12
#define DEBUGGING_LABEL_24_2 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto symbol_hash_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_hash_4)
DEFLABEL (symbol_hash_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_7 7
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto symbol_hash_mod_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_hash_mod_4)
DEFLABEL (symbol_hash_mod_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define LABEL_26_10 15
#define LABEL_26_11 17
#define ENVIRONMENT_LABEL_26_3 23
#define DEBUGGING_LABEL_26_2 22
#define OBJECT_26_3 21
#define OBJECT_26_2 20
#define OBJECT_26_1 19
#define OBJECT_26_0 18
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_26_4);
      goto Z__symbol_P_19;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto loop_14;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_26_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_26_11);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__symbol_P_28)
DEFLABEL (Z__symbol_P_19)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_36;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_35)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_34;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_33)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd34.Lng) < (Wrd36.Lng))
    goto label_31;
  (* (--Rsp)) = (Wrd35.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_30)
DEFLABEL (label_32)
  (Wrd38.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto loop_14;

DEFLABEL (label_34)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_29)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_50;
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_49;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_49;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_49;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pChr) = (& ((Wrd20.pChr) [(Wrd9.Lng)]));
  (Wrd13.uLng) = ((unsigned long) (((unsigned char *) (Wrd12.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_48)
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 30))
    goto label_47;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_47;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_47;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd36.pChr) = (& ((Wrd43.pChr) [(Wrd33.Lng)]));
  (Wrd37.uLng) = ((unsigned long) (((unsigned char *) (Wrd36.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd30.Obj) = (MAKE_OBJECT (26, (Wrd37.uLng)));

DEFLABEL (label_46)
  (Wrd53.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd53.Obj)))
    goto label_37;
  (Wrd107.Obj) = (Rsp [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd109.Lng) = ((Wrd108.Lng) + 1L);
  (Wrd106.Obj) = (LONG_TO_FIXNUM (Wrd109.Lng));
  (Rsp [0]) = (Wrd106.Obj);
  goto loop_14;

DEFLABEL (label_37)
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_45;
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_45;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_45;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd59.pChr) = (& ((Wrd67.pChr) [(Wrd56.Lng)]));
  (Wrd60.uLng) = ((unsigned long) (((unsigned char *) (Wrd59.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd61.Obj) = (MAKE_OBJECT (26, (Wrd60.uLng)));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_44)
  (Wrd93.Obj) = (Rsp [5]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 30))
    goto label_43;
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_43;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [1]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) (Wrd88.Lng)) < ((unsigned long) (Wrd92.Lng))))
    goto label_43;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd85.Obj));
  (Wrd83.pChr) = (& ((Wrd90.pChr) [(Wrd80.Lng)]));
  (Wrd84.uLng) = ((unsigned long) (((unsigned char *) (Wrd83.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd77.Obj) = (MAKE_OBJECT (26, (Wrd84.uLng)));

DEFLABEL (label_42)
  (Wrd100.Obj) = (* (Rsp++));
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if ((Wrd102.Lng) < (Wrd103.Lng))
    goto label_39;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_38;

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_26_3]);

DEFLABEL (label_38)
DEFLABEL (label_41)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd95.Obj) = (Rsp [5]);
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_26)
  (Wrd77.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd72.Obj) = (Rsp [5]);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd111.Obj) = (Rsp [2]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if ((Wrd112.Lng) < (Wrd114.Lng))
    goto label_39;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 15
#define DEBUGGING_LABEL_27_2 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_8 9
#define EXECUTE_CACHE_27_6 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto symbol_P_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_P_5)
DEFLABEL (symbol_P_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 15
#define DEBUGGING_LABEL_28_2 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_8 9
#define EXECUTE_CACHE_28_6 11
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto symbol_P_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_P_5)
DEFLABEL (symbol_P_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define EXECUTE_CACHE_29_7 7
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto symbol__utf8_string_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol__utf8_string_4)
DEFLABEL (symbol__utf8_string_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto symbol__wide_string_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol__wide_string_4)
DEFLABEL (symbol__wide_string_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define ENVIRONMENT_LABEL_31_3 18
#define DEBUGGING_LABEL_31_2 17
#define EXECUTE_CACHE_31_10 11
#define EXECUTE_CACHE_31_9 13
#define EXECUTE_CACHE_31_7 15
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
symbol_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_31_4);
      goto symbol__string_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol__string_7)
DEFLABEL (symbol__string_4)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

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
symbol_so_8cb7f3eb8855f4cf (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	0,
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
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 31)
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

static const struct liarc_code_S arr_decl_symbol_so_8cb7f3eb8855f4cf [31] =
  {
    { "symbol_so_code_1", 2, symbol_so_code_1 },
    { "symbol_so_code_2", 1, symbol_so_code_2 },
    { "symbol_so_code_3", 1, symbol_so_code_3 },
    { "symbol_so_code_4", 3, symbol_so_code_4 },
    { "symbol_so_code_5", 1, symbol_so_code_5 },
    { "symbol_so_code_6", 2, symbol_so_code_6 },
    { "symbol_so_code_7", 1, symbol_so_code_7 },
    { "symbol_so_code_8", 2, symbol_so_code_8 },
    { "symbol_so_code_9", 1, symbol_so_code_9 },
    { "symbol_so_code_10", 3, symbol_so_code_10 },
    { "symbol_so_code_11", 3, symbol_so_code_11 },
    { "symbol_so_code_12", 2, symbol_so_code_12 },
    { "symbol_so_code_13", 3, symbol_so_code_13 },
    { "symbol_so_code_14", 5, symbol_so_code_14 },
    { "symbol_so_code_15", 3, symbol_so_code_15 },
    { "symbol_so_code_16", 1, symbol_so_code_16 },
    { "symbol_so_code_17", 2, symbol_so_code_17 },
    { "symbol_so_code_18", 3, symbol_so_code_18 },
    { "symbol_so_code_19", 3, symbol_so_code_19 },
    { "symbol_so_code_20", 3, symbol_so_code_20 },
    { "symbol_so_code_21", 9, symbol_so_code_21 },
    { "symbol_so_code_22", 4, symbol_so_code_22 },
    { "symbol_so_code_23", 2, symbol_so_code_23 },
    { "symbol_so_code_24", 2, symbol_so_code_24 },
    { "symbol_so_code_25", 2, symbol_so_code_25 },
    { "symbol_so_code_26", 8, symbol_so_code_26 },
    { "symbol_so_code_27", 3, symbol_so_code_27 },
    { "symbol_so_code_28", 3, symbol_so_code_28 },
    { "symbol_so_code_29", 2, symbol_so_code_29 },
    { "symbol_so_code_30", 2, symbol_so_code_30 },
    { "symbol_so_code_31", 4, symbol_so_code_31 }
  };

int
decl_symbol_so_8cb7f3eb8855f4cf (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_symbol_so_8cb7f3eb8855f4cf);
  return (0);
}

DECLARE_COMPILED_CODE ("symbol.so", 3, decl_symbol_so_8cb7f3eb8855f4cf, symbol_so_8cb7f3eb8855f4cf)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_symbol_so_data_8cb7f3eb8855f4cf [2694] =
  "\x3f\x2d\xeb\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x85\xc2\xb9"
  "\x02\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\xb1\x07\x02"
  "\x22\x29\x21\x9f\x2b\xbb\x1d\xb0\x83\x88\xb1\x07\x85\x22\x29\x21"
  "\x9f\x2b\xbc\x1d\xb0\x84\x88\x1d\x06\x07\x85\xb1\x02\x28\x0d\xbd"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88\x06"
  "\x1d\x0c\x28\x0d\xbf\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x1d\xb1\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1d\x0c\x28\xb7\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\xb1\x85\x28\x0d\xb9\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb7\x23\x22\x29\x21\x17"
  "\x2b\xbf\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x85\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xc1\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xc2\x0d\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xc2\x1c\x80\x1b"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\xb8\x88\xb0\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb4\x2a\xb3\x2a"
  "\xb2\x2a\x17\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\xb1\x0d\x1b\x0d\xb5\x1b\x0d"
  "\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x6d\x62\x6f\x6c"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x1e\x05\x06\x81\x83\x02\x04\x04\x83"
  "\x04\x05\x0c\x02\x1e\x06\x04\x83\x04\x03\x02\x07\x04\x83\x04\x03"
  "\x02\x02\x1e\x04\x11\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x02\x0a\x08\x81\x83\x02\x09\x06\x84\x04\x08"
  "\x04\x81\x85\x02\x07\x13\x02\x08\x07\x73\x79\x6d\x62\x6f\x6c\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x0b\x04\x84\x04\x03"
  "\x0c\x09\x02\x02\x1e\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x0a\x02\x0d\x06\x81\x85\x02\x0c\x04\x84\x04\x05\x0e\x0b\x02\x08"
  "\x08\x10\x69\x6e\x74\x65\x72\x6e\x65\x64\x20\x73\x79\x6d\x62\x6f"
  "\x6c\x05\x02\x0e\x04\x84\x04\x03\x0c\x0c\x02\x09\x02\x04\x1c\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x6e\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x02\x10\x06\x81\x85\x02"
  "\x0f\x04\x84\x04\x05\x0e\x0d\x02\x0a\x08\x12\x75\x6e\x69\x6e\x74"
  "\x65\x72\x6e\x65\x64\x20\x73\x79\x6d\x62\x6f\x6c\x05\x02\x11\x04"
  "\x84\x04\x03\x0c\x02\x0b\x03\x12\x61\x73\x63\x69\x69\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x63\x6f\x70\x79\x0e\x03\x19\x77\x69\x64\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74\x66\x38\x2d\x73\x74"
  "\x72\x69\x6e\x67\x0f\x03\x14\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75"
  "\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x10\x03\x17\x6d\x61\x6b"
  "\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d"
  "\x62\x6f\x6c\x11\x05\x14\x08\x81\x83\x02\x13\x06\x81\x85\x02\x12"
  "\x04\x83\x04\x07\x13\x12\x02\x0c\x03\x0d\x75\x74\x66\x38\x2d\x73"
  "\x74\x72\x69\x6e\x67\x3f\x13\x03\x11\x03\x0f\x03\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x63\x6f\x70\x79\x14\x05\x17\x08\x81\x85\x02\x16"
  "\x06\x81\x83\x02\x15\x04\x83\x04\x07\x13\x15\x02\x0d\x11\x73\x79"
  "\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x02\x25"
  "\x6d\x61\x6b\x65\x2d\x75\x6e\x6d\x61\x70\x70\x65\x64\x2d\x75\x6e"
  "\x62\x6f\x75\x6e\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x74\x72\x61\x70\x02\x19\x06\x81\x87\x02\x18\x04\x83\x04\x05\x0d"
  "\x16\x02\x0e\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62"
  "\x6f\x6c\x17\x03\x0e\x03\x0f\x03\x10\x04\x1c\x08\x81\x83\x02\x1b"
  "\x06\x81\x85\x02\x1a\x04\x83\x04\x07\x12\x18\x02\x0f\x17\x0c\x66"
  "\x69\x6e\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x19\x03\x13\x03\x0f\x03"
  "\x14\x04\x21\x0c\x81\x85\x02\x20\x0a\x81\x83\x02\x1f\x08\x81\x83"
  "\x02\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x0b\x17\x13\x02\x10\x17"
  "\x12\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62"
  "\x6f\x6c\x1a\x06\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x05\x10\x03\x24\x08\x81\x87\x02"
  "\x23\x06\x81\x87\x02\x22\x04\x85\x08\x07\x11\x10\x02\x11\x05\x1a"
  "\x02\x25\x04\x84\x06\x03\x0a\x1b\x02\x12\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6c\x65\x6e\x67\x74\x68\x1c\x05\x1a\x02\x27\x06\x81\x87"
  "\x02\x26\x04\x84\x06\x05\x0c\x1d\x02\x13\x17\x06\x61\x70\x70\x6c"
  "\x79\x0c\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x02\x2a\x08"
  "\x81\x83\x02\x29\x06\x81\x87\x02\x28\x04\xff\x03\x07\x0e\x1e\x02"
  "\x14\x17\x03\x15\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x64\x6f\x77\x6e\x63\x61\x73\x65\x17\x03\x0f\x03\x2d\x08\x81\x83"
  "\x02\x2c\x06\x83\x04\x2b\x04\x81\x85\x02\x07\x10\x1f\x02\x15\x19"
  "\x03\x17\x03\x0f\x03\x30\x08\x81\x83\x02\x2f\x06\x83\x04\x2e\x04"
  "\x81\x85\x02\x07\x10\x19\x02\x16\x02\x03\x0e\x61\x73\x63\x69\x69"
  "\x2d\x73\x74\x72\x69\x6e\x67\x3f\x0f\x04\x1c\x63\x61\x6c\x6c\x2d"
  "\x77\x69\x74\x68\x2d\x75\x74\x66\x38\x2d\x69\x6e\x70\x75\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x03\x10\x73\x74\x72\x69\x6e\x67\x2d\x64"
  "\x6f\x77\x6e\x63\x61\x73\x65\x03\x1d\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x75\x74\x66\x38\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x0a\x72\x65\x61\x64\x2d\x63\x68\x61\x72"
  "\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x03\x0e\x63"
  "\x68\x61\x72\x2d\x64\x6f\x77\x6e\x63\x61\x73\x65\x04\x0b\x77\x72"
  "\x69\x74\x65\x2d\x63\x68\x61\x72\x09\x39\x14\x81\x8b\x02\x38\x12"
  "\x81\x87\x02\x37\x10\x81\x87\x02\x36\x0e\x81\x85\x02\x35\x0c\x81"
  "\x85\x02\x34\x0a\x81\x85\x02\x33\x08\x83\x04\x32\x06\x81\x83\x02"
  "\x31\x04\x83\x04\x13\x28\x20\x02\x17\x0e\x76\x65\x63\x74\x6f\x72"
  "\x2d\x38\x62\x2d\x72\x65\x66\x21\x1c\x3d\x0a\x81\x87\x02\x3c\x08"
  "\x81\x87\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x09\x10\x22\x02"
  "\x18\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x23\x04\x11"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x24\x02\x3f\x06\x81\x83\x02\x3e\x04\x83\x04\x05\x0c\x25\x02\x19"
  "\x03\x23\x03\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x61\x73\x68\x03"
  "\x41\x06\x81\x83\x02\x40\x04\x83\x04\x05\x0d\x26\x02\x1a\x03\x23"
  "\x04\x10\x73\x74\x72\x69\x6e\x67\x2d\x68\x61\x73\x68\x2d\x6d\x6f"
  "\x64\x03\x43\x06\x81\x85\x02\x42\x04\x84\x06\x05\x0d\x27\x02\x1b"
  "\x21\x1c\x4b\x12\x81\x8f\x02\x4a\x10\x81\x8d\x02\x49\x0e\x81\x8f"
  "\x02\x48\x0c\x81\x8d\x02\x47\x0a\x81\x8d\x02\x46\x08\x81\x87\x02"
  "\x45\x06\x81\x85\x02\x44\x04\x84\x06\x11\x18\x21\x02\x1c\x09\x73"
  "\x79\x6d\x62\x6f\x6c\x3c\x3f\x1c\x04\x24\x04\x0a\x25\x73\x79\x6d"
  "\x62\x6f\x6c\x3c\x3f\x28\x03\x4e\x08\x81\x85\x02\x4d\x06\x81\x85"
  "\x02\x4c\x04\x84\x06\x07\x10\x29\x02\x1d\x09\x73\x79\x6d\x62\x6f"
  "\x6c\x3e\x3f\x2a\x04\x24\x04\x28\x03\x51\x08\x81\x85\x02\x50\x06"
  "\x81\x85\x02\x4f\x04\x84\x06\x07\x10\x2b\x02\x1e\x03\x23\x03\x14"
  "\x03\x53\x06\x81\x83\x02\x52\x04\x83\x04\x05\x0d\x14\x02\x1f\x03"
  "\x23\x03\x19\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e"
  "\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x55\x06\x81\x83"
  "\x02\x54\x04\x83\x04\x05\x0d\x2c\x02\x20\x03\x23\x03\x0e\x03\x14"
  "\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x74\x72"
  "\x69\x6e\x67\x04\x59\x0a\x81\x85\x02\x58\x08\x81\x85\x02\x57\x06"
  "\x81\x83\x02\x56\x04\x83\x04\x09\x13\x0e\x20\x0e\x04\x2c\x04\x14"
  "\x04\x2b\x04\x29\x04\x21\x04\x27\x04\x26\x04\x25\x04\x22\x04\x20"
  "\x04\x19\x06\x1f\x06\x1e\x04\x1d\x04\x1b\x04\x10\x04\x13\x04\x18"
  "\x04\x16\x04\x15\x04\x12\x04\x04\x0d\x04\x0c\x04\x0b\x04\x09\x04"
  "\x06\x04\x04\x04\x20\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74"
  "\x72\x69\x6e\x67\x14\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x77\x69\x64"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x14\x73\x79\x6d\x62\x6f\x6c\x2d"
  "\x3e\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2a\x1c\x28\x10"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x68\x61\x73\x68\x2d\x6d\x6f\x64\x0c"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x68\x61\x73\x68\x23\x0f\x17\x0c\x69"
  "\x6e\x74\x65\x72\x6e\x2d\x73\x6f\x66\x74\x07\x69\x6e\x74\x65\x72"
  "\x6e\x07\x73\x79\x6d\x62\x6f\x6c\x14\x73\x74\x72\x69\x6e\x67\x2d"
  "\x74\x61\x69\x6c\x2d\x3e\x73\x79\x6d\x62\x6f\x6c\x14\x73\x74\x72"
  "\x69\x6e\x67\x2d\x68\x65\x61\x64\x2d\x3e\x73\x79\x6d\x62\x6f\x6c"
  "\x1a\x14\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73"
  "\x79\x6d\x62\x6f\x6c\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79"
  "\x6d\x62\x6f\x6c\x11\x1f\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x1a\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69"
  "\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x1c\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x0a\x1a\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x24\x13\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65"
  "\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x3f\x11\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x3f\x08\x73\x79\x6d\x62\x6f"
  "\x6c\x3f\x20\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
symbol_so_data_8cb7f3eb8855f4cf (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_symbol_so_data_8cb7f3eb8855f4cf [0]))), (sizeof (prog_symbol_so_data_8cb7f3eb8855f4cf)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("symbol.so", symbol_so_data_8cb7f3eb8855f4cf)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("symbol.so", "24b5729d17374d72")
