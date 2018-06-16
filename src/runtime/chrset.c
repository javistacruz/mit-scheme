/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto Z__char_set_low_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_set_low_3)
DEFLABEL (Z__char_set_low_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__char_set_high_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_set_high_3)
DEFLABEL (Z__char_set_high_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__char_set_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_set_table_3)
DEFLABEL (Z__char_set_table_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_3 15
#define OBJECT_4_2 14
#define OBJECT_4_1 13
#define OBJECT_4_0 12
#define FREE_REFERENCE_4_0 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto char_setP_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_setP_10)
DEFLABEL (char_setP_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_4_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto guarantee_char_set_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_char_set_4)
DEFLABEL (guarantee_char_set_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_2 9
#define OBJECT_6_1 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto error_not_char_set_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_char_set_5)
DEFLABEL (error_not_char_set_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_6_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_6_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_8 7
#define EXECUTE_CACHE_7_7 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_char_sets_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_char_sets_4)
DEFLABEL (guarantee_char_sets_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_10 11
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_5 22
#define OBJECT_8_4 21
#define OBJECT_8_3 20
#define OBJECT_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_9 13
#define EXECUTE_CACHE_8_8 15
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto Z__make_char_set_14;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto do_loop_11;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_char_set_18)
DEFLABEL (Z__make_char_set_14)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_11;

DEFLABEL (do_loop_19)
DEFLABEL (do_loop_11)
  INTERRUPT_CHECK (26, LABEL_8_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 256L)
    goto label_21;
  (Wrd9.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_20;

DEFLABEL (label_21)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rsp = (& (Rsp [2]));
  (Wrd14.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_8_4]);
  goto label_23;

DEFLABEL (label_24)
  (Wrd7.Obj) = (current_block [OBJECT_8_2]);

DEFLABEL (label_23)
DEFLABEL (label_27)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_26;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_26;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_26;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_26;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd17.pChr) = (& ((Wrd24.pChr) [(Wrd14.Lng)]));
  ((Wrd17.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd7.uLng));

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_11;

DEFLABEL (label_26)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 3);

DEFLABEL (label_16)
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto Z__make_low_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_low_3)
DEFLABEL (Z__make_low_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 10
#define DEBUGGING_LABEL_10_2 9
#define OBJECT_10_2 8
#define OBJECT_10_1 7
#define OBJECT_10_0 6
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto Z__low_ref_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__low_ref_10)
DEFLABEL (Z__low_ref_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd7.Lng)), 3)));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_15;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_15;
  Wrd19 = Wrd10;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_15;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd16.pChr) = (& ((Wrd21.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd36.Lng) = ((Wrd33.Lng) & 7L);
  (Wrd39.Lng) = 1L;
  (Wrd41.Lng) = (FIXNUM_LSH ((Wrd39.Lng), (Wrd36.Lng)));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd45.Lng) = ((Wrd43.Lng) & (Wrd41.Lng));
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  if ((Wrd42.Obj) == (current_block [OBJECT_10_1]))
    goto label_12;
  Rvl = (current_block [OBJECT_10_2]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 10
#define DEBUGGING_LABEL_11_2 9
#define OBJECT_11_2 8
#define OBJECT_11_1 7
#define OBJECT_11_0 6
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto Z__low_setB_6;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__low_setB_10)
DEFLABEL (Z__low_setB_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd11.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd8.Lng)), 3)));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_14;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_14;
  Wrd20 = Wrd11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_14;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  (Wrd17.pChr) = (& ((Wrd22.pChr) [(Wrd14.Lng)]));
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd17.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.Lng) = ((Wrd34.Lng) & 7L);
  (Wrd40.Lng) = 1L;
  (Wrd42.Lng) = (FIXNUM_LSH ((Wrd40.Lng), (Wrd37.Lng)));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd46.Lng) = ((Wrd44.Lng) | (Wrd42.Lng));
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Wrd52.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd34.Lng)), 3)));
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (Rsp [1]) = (Wrd47.Obj);
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 30)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_12)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_11;
  Wrd66 = Wrd52;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd66.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_11;
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_11;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd58.pChr) = (& ((Wrd68.pChr) [(Wrd55.Lng)]));
  ((Wrd58.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd43.uLng));
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_8 27
#define OBJECT_12_7 26
#define OBJECT_12_6 25
#define OBJECT_12_5 24
#define OBJECT_12_4 23
#define OBJECT_12_3 22
#define OBJECT_12_2 21
#define OBJECT_12_1 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_6 17
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_12_4);
      goto Z_8_bit_char_setP_13;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_8_bit_char_setP_20)
DEFLABEL (Z_8_bit_char_setP_13)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_28)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd26.uLng)));

DEFLABEL (label_26)
  if (! ((Wrd23.Obj) == (current_block [OBJECT_12_3])))
    goto label_22;
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_25;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_25;
  (Wrd35.Obj) = ((Wrd41.pObj) [2]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd35.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd51.Obj);
  goto loop_10;

DEFLABEL (label_25)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (current_block [OBJECT_12_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_17)
  (Wrd35.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_12_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_28;

DEFLABEL (loop_21)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_12_10);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_12_6]))
    goto label_34;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_33;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_33;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_33;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_32)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_12_3])))
    goto label_30;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd35.Lng) + 1L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (Rsp [0]) = (Wrd33.Obj);
  goto loop_10;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 2);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_12_7]);
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_8_bit_char_set_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_8_bit_char_set_4)
DEFLABEL (guarantee_8_bit_char_set_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto error_not_8_bit_char_set_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_8_bit_char_set_5)
DEFLABEL (error_not_8_bit_char_set_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto well_formed_scalar_value_listP_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (well_formed_scalar_value_listP_4)
DEFLABEL (well_formed_scalar_value_listP_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define ENVIRONMENT_LABEL_16_3 18
#define DEBUGGING_LABEL_16_2 17
#define OBJECT_16_2 16
#define OBJECT_16_1 15
#define OBJECT_16_0 14
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_16_4);
      goto well_formed_scalar_value_rangeP_11;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (well_formed_scalar_value_rangeP_19)
DEFLABEL (well_formed_scalar_value_rangeP_11)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd12.Lng) < 1114112L))
    goto label_21;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_16_2]);
  goto label_20;

DEFLABEL (label_24)
  if (! ((Wrd6.uLng) == 1))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_33)
  if (! (INDEX_FIXNUM_P (Wrd17.Obj)))
    goto label_21;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_32;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_31)
  if (! (INDEX_FIXNUM_P (Wrd26.Obj)))
    goto label_21;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_30;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_29)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_28;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_27)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) > (Wrd55.Lng))
    goto label_21;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_26;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_25)
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd65.Lng) > 1114112L)
    goto label_21;
  goto label_23;

DEFLABEL (label_26)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_17)
  (Wrd56.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_16)
  (Wrd44.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_14)
  (Wrd26.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_13)
  (Wrd17.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
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
chrset_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_well_formed_scalar_value_list_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_well_formed_scalar_value_list_4)
DEFLABEL (guarantee_well_formed_scalar_value_list_1)
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
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_2 9
#define OBJECT_18_1 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto error_not_well_formed_scalar_value_list_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_well_formed_scalar_value_list_5)
DEFLABEL (error_not_well_formed_scalar_value_list_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_18_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_18_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto guarantee_well_formed_scalar_value_range_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_well_formed_scalar_value_range_4)
DEFLABEL (guarantee_well_formed_scalar_value_range_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_2 9
#define OBJECT_20_1 8
#define OBJECT_20_0 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto error_not_well_formed_scalar_value_range_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_well_formed_scalar_value_range_5)
DEFLABEL (error_not_well_formed_scalar_value_range_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_20_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_20_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
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
chrset_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_21_4);
      goto Z__make_range_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_range_5)
DEFLABEL (Z__make_range_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_21_0]))
    goto label_7;
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  goto label_6;

DEFLABEL (label_7)
  Rvl = (Wrd8.Obj);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
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
chrset_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__range_start_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__range_start_4)
DEFLABEL (Z__range_start_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_6;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  if ((Wrd6.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_7)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd11.pObj) [0]);
  goto label_5;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      goto Z__range_end_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__range_end_4)
DEFLABEL (Z__range_end_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_6;
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  if ((Wrd6.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_7)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd14.pObj) [1]);
  goto label_5;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_9 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_12 13
#define ENVIRONMENT_LABEL_24_3 28
#define DEBUGGING_LABEL_24_2 27
#define OBJECT_24_3 26
#define OBJECT_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_13 15
#define EXECUTE_CACHE_24_11 17
#define EXECUTE_CACHE_24_10 19
#define EXECUTE_CACHE_24_6 21
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_24_4);
      goto char_set__scalar_values_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set__scalar_values_10)
DEFLABEL (char_set__scalar_values_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_24_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_24_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_8 9
#define LABEL_25_10 11
#define LABEL_25_9 13
#define LABEL_25_12 15
#define ENVIRONMENT_LABEL_25_3 24
#define DEBUGGING_LABEL_25_2 23
#define OBJECT_25_1 22
#define OBJECT_25_0 21
#define EXECUTE_CACHE_25_11 17
#define EXECUTE_CACHE_25_7 19
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__low__scalar_values_15;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto find_start_3;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto loop_12;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__low__scalar_values_18)
DEFLABEL (Z__low__scalar_values_15)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto find_start_3;

DEFLABEL (find_start_19)
DEFLABEL (find_start_3)
  INTERRUPT_CHECK (26, LABEL_25_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 2048L)
    goto label_21;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_12;

DEFLABEL (label_22)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  goto find_start_3;

DEFLABEL (loop_20)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_25_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 2048L)
    goto label_23;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_12;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto find_start_3;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_6 5
#define LABEL_26_7 7
#define LABEL_26_9 9
#define LABEL_26_11 11
#define LABEL_26_4 13
#define LABEL_26_13 15
#define LABEL_26_14 17
#define LABEL_26_16 19
#define LABEL_26_18 21
#define LABEL_26_19 23
#define LABEL_26_17 25
#define LABEL_26_8 27
#define LABEL_26_10 29
#define ENVIRONMENT_LABEL_26_3 45
#define DEBUGGING_LABEL_26_2 44
#define OBJECT_26_6 43
#define OBJECT_26_5 42
#define OBJECT_26_4 41
#define OBJECT_26_3 40
#define OBJECT_26_2 39
#define OBJECT_26_1 38
#define OBJECT_26_0 37
#define EXECUTE_CACHE_26_20 31
#define EXECUTE_CACHE_26_15 33
#define EXECUTE_CACHE_26_12 35
#define FREE_REFERENCES_LABEL_26_0 30
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd56;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_26_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_26_4);
      goto Z__high__scalar_values_22;

    case 6:
      current_block = (Rpc - LABEL_26_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_26_16);
      goto loop_20;

    case 9:
      current_block = (Rpc - LABEL_26_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_26_19);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__high__scalar_values_33)
DEFLABEL (Z__high__scalar_values_22)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd17.Lng) > 0)
    goto label_36;

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto loop_20;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_35;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_44;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_44;
  (Wrd34.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_43)
  (Wrd50.Obj) = (* (Rsp++));
  if (! ((Wrd34.Obj) == (Wrd50.Obj)))
    goto label_35;
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_42;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_41)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_40;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd71.Lng))))
    goto label_40;
  (Wrd65.Obj) = ((Wrd69.pObj) [2]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_39)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (Rsp [6]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_38;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_20;

DEFLABEL (label_38)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.Obj) = (current_block [OBJECT_26_3]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_26_0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_28)
  (Wrd34.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (loop_34)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_26_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_49;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_53;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_53;
  Wrd24 = Wrd17;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_53;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd21.pObj) = (& ((Wrd26.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_52)
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_51;
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_51;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_51;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd40.pObj) = (& ((Wrd47.pObj) [(Wrd37.Lng)]));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) + 2L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_20;

DEFLABEL (label_51)
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto scalar_values__char_set_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scalar_values__char_set_4)
DEFLABEL (scalar_values__char_set_1)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_8 9
#define LABEL_28_10 11
#define LABEL_28_12 13
#define ENVIRONMENT_LABEL_28_3 26
#define DEBUGGING_LABEL_28_2 25
#define EXECUTE_CACHE_28_14 15
#define EXECUTE_CACHE_28_13 17
#define EXECUTE_CACHE_28_11 19
#define EXECUTE_CACHE_28_9 21
#define EXECUTE_CACHE_28_7 23
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__scalar_values__char_set_5;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__scalar_values__char_set_8)
DEFLABEL (Z__scalar_values__char_set_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_28_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define TAG_29_9 3
#define LABEL_29_11 11
#define LABEL_29_13 13
#define LABEL_29_15 15
#define LABEL_29_16 17
#define ENVIRONMENT_LABEL_29_3 32
#define DEBUGGING_LABEL_29_2 31
#define OBJECT_29_1 30
#define OBJECT_29_0 29
#define EXECUTE_CACHE_29_17 19
#define EXECUTE_CACHE_29_14 21
#define EXECUTE_CACHE_29_12 23
#define EXECUTE_CACHE_29_10 25
#define EXECUTE_CACHE_29_6 27
#define FREE_REFERENCES_LABEL_29_0 18
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_29_4);
      goto Z__scalar_values__low_15;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_29_15);
      goto do_loop_9;

    case 7:
      current_block = (Rpc - LABEL_29_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__scalar_values__low_18)
DEFLABEL (Z__scalar_values__low_15)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_29_8);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (* (--Rsp)) = Rvl;
  goto do_loop_9;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_29_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_22;
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_21;

DEFLABEL (label_22)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_16);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_9 9
#define LABEL_30_11 11
#define LABEL_30_10 13
#define LABEL_30_13 15
#define LABEL_30_15 17
#define LABEL_30_14 19
#define LABEL_30_17 21
#define LABEL_30_18 23
#define ENVIRONMENT_LABEL_30_3 39
#define DEBUGGING_LABEL_30_2 38
#define OBJECT_30_4 37
#define OBJECT_30_3 36
#define OBJECT_30_2 35
#define OBJECT_30_1 34
#define OBJECT_30_0 33
#define EXECUTE_CACHE_30_16 25
#define EXECUTE_CACHE_30_12 27
#define EXECUTE_CACHE_30_8 29
#define EXECUTE_CACHE_30_7 31
#define FREE_REFERENCES_LABEL_30_0 24
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto Z__scalar_values__high_20;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto do_loop_17;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_30_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_30_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__scalar_values__high_28)
DEFLABEL (Z__scalar_values__high_20)
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
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = (LEFT_SHIFT ((Wrd8.Lng), 1));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_17;

DEFLABEL (do_loop_29)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_30_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;
  (Wrd7.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
DEFLABEL (label_43)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_42;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (Wrd5.Obj) = Rvl;
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_40;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_40;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_40;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd22.pObj) = (& ((Wrd28.pObj) [(Wrd19.Lng)]));
  ((Wrd22.pObj) [1]) = Rvl;

DEFLABEL (label_39)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_14);
  (Wrd9.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_36;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_36;
  Wrd31 = Wrd8;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_36;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd29.pObj) = (& ((Wrd33.pObj) [(Wrd26.Lng)]));
  ((Wrd29.pObj) [1]) = Rvl;

DEFLABEL (label_35)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) + 2L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (Rsp [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_17;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_25)
  (Wrd10.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_26)
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_24)
  goto label_39;

DEFLABEL (label_42)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define LABEL_31_5 7
#define LABEL_31_9 9
#define LABEL_31_11 11
#define LABEL_31_6 13
#define LABEL_31_10 15
#define LABEL_31_16 17
#define LABEL_31_13 19
#define LABEL_31_15 21
#define LABEL_31_18 23
#define LABEL_31_20 25
#define LABEL_31_21 27
#define LABEL_31_23 29
#define LABEL_31_19 31
#define LABEL_31_24 33
#define LABEL_31_22 35
#define LABEL_31_28 37
#define LABEL_31_27 39
#define LABEL_31_30 41
#define LABEL_31_29 43
#define ENVIRONMENT_LABEL_31_3 66
#define DEBUGGING_LABEL_31_2 65
#define OBJECT_31_3 64
#define OBJECT_31_2 63
#define OBJECT_31_1 62
#define OBJECT_31_0 61
#define EXECUTE_CACHE_31_31 45
#define EXECUTE_CACHE_31_26 47
#define EXECUTE_CACHE_31_25 49
#define EXECUTE_CACHE_31_17 51
#define EXECUTE_CACHE_31_14 53
#define EXECUTE_CACHE_31_12 55
#define EXECUTE_CACHE_31_8 57
#define FREE_REFERENCE_31_0 60
#define FREE_REFERENCES_LABEL_31_0 44
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto Z__canonicalize_scalar_value_list_28;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_31_16);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_31_13);
      goto lambda_2;

    case 9:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_31_18);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_31_20);
      goto loop_25;

    case 12:
      current_block = (Rpc - LABEL_31_21);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_31_23);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_31_19);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_31_24);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_31_22);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_31_28);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_31_27);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_31_30);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_31_29);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__canonicalize_scalar_value_list_38)
DEFLABEL (Z__canonicalize_scalar_value_list_28)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_49;
  Wrd11 = Wrd15;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_41;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  if (! ((Wrd7.uLng) == 1))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_46)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_45;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31_2]);
  (Rsp [3]) = (Wrd5.Obj);
  goto loop_25;

DEFLABEL (label_43)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_39)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_31_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_19);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < (Wrd9.Lng))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_31_3]);

DEFLABEL (label_50)
DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_40)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_31_20);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_31_24);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_26]));

DEFLABEL (label_53)
  if (! ((Wrd6.uLng) == 1))
    goto label_60;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_59)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_58;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_31_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_56;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_31_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_54;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_31]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31_30);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_25;

DEFLABEL (label_54)
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_31_29);
  (Wrd9.Obj) = (Rsp [6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_25;

DEFLABEL (label_56)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_12 15
#define ENVIRONMENT_LABEL_32_3 23
#define DEBUGGING_LABEL_32_2 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_11 17
#define EXECUTE_CACHE_32_6 19
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__range_P_8;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__range_P_11)
DEFLABEL (Z__range_P_8)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd7.Lng) < (Wrd8.Lng)))
    goto label_12;
  Rvl = (current_block [OBJECT_32_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < (Wrd9.Lng))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_32_0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_9 9
#define TAG_33_10 3
#define LABEL_33_7 11
#define LABEL_33_13 13
#define LABEL_33_11 15
#define LABEL_33_14 17
#define LABEL_33_17 19
#define TAG_33_18 8
#define LABEL_33_15 21
#define LABEL_33_16 23
#define LABEL_33_19 25
#define LABEL_33_20 27
#define LABEL_33_22 29
#define TAG_33_23 13
#define ENVIRONMENT_LABEL_33_3 42
#define DEBUGGING_LABEL_33_2 41
#define OBJECT_33_3 40
#define OBJECT_33_2 39
#define OBJECT_33_1 38
#define OBJECT_33_0 37
#define EXECUTE_CACHE_33_21 31
#define EXECUTE_CACHE_33_12 33
#define EXECUTE_CACHE_33_8 35
#define FREE_REFERENCES_LABEL_33_0 30
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto Z__split_ranges_25;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto loop_23;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto lambda_33;

    case 4:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto lambda_34;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_33_20);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_33_22);
      goto lambda_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__split_ranges_31)
DEFLABEL (Z__split_ranges_25)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_23;

DEFLABEL (loop_32)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_33_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_43)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd6.Lng) > 2048L))
    goto label_40;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) < 2048L)
    goto label_37;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_17])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_39;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_38)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_22])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_33_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_33_17);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_33_22);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define ENVIRONMENT_LABEL_34_3 21
#define DEBUGGING_LABEL_34_2 20
#define OBJECT_34_0 19
#define EXECUTE_CACHE_34_11 11
#define EXECUTE_CACHE_34_10 13
#define EXECUTE_CACHE_34_8 15
#define EXECUTE_CACHE_34_6 17
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto char_set_memberP_3;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_memberP_6)
DEFLABEL (char_set_memberP_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_9 9
#define EXECUTE_CACHE_35_8 11
#define EXECUTE_CACHE_35_6 13
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto scalar_value_in_char_setP_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scalar_value_in_char_setP_5)
DEFLABEL (scalar_value_in_char_setP_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_8 9
#define LABEL_36_9 11
#define LABEL_36_10 13
#define LABEL_36_11 15
#define ENVIRONMENT_LABEL_36_3 27
#define DEBUGGING_LABEL_36_2 26
#define OBJECT_36_6 25
#define OBJECT_36_5 24
#define OBJECT_36_4 23
#define OBJECT_36_3 22
#define OBJECT_36_2 21
#define OBJECT_36_1 20
#define OBJECT_36_0 19
#define EXECUTE_CACHE_36_6 17
#define FREE_REFERENCES_LABEL_36_0 16
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd85;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_36_4);
      goto Z__scalar_value_in_char_setP_19;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto loop_15;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__scalar_value_in_char_setP_27)
DEFLABEL (Z__scalar_value_in_char_setP_19)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 2048L)
    goto label_33;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_32;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_32;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_31)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_30;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_29)
  (Wrd36.Obj) = (current_block [OBJECT_36_4]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto loop_15;

DEFLABEL (label_30)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_36_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_35;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_35;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd54.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (label_35)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_36_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_23)
  (Wrd38.Obj) = Rvl;
  goto label_34;

DEFLABEL (loop_28)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_36_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd18.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd21.Lng) = (((Wrd18.Lng) < 0) ? (RIGHT_SHIFT (((Wrd18.Lng) + 3), 2)) : (RIGHT_SHIFT ((Wrd18.Lng), 2)));
  (Wrd25.Lng) = (LEFT_SHIFT ((Wrd21.Lng), 1));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_43;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_43;
  Wrd36 = Wrd25;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_43;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd32.pObj) = (& ((Wrd38.pObj) [(Wrd29.Lng)]));
  (Wrd27.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_42)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if ((Wrd49.Lng) < (Wrd50.Lng))
    goto label_41;
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd54.Lng) = ((Wrd53.Lng) + 1L);
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_40;
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_40;
  Wrd61 = Wrd54;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) (Wrd61.Lng)) < ((unsigned long) (Wrd65.Lng))))
    goto label_40;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd59.pObj) = (& ((Wrd63.pObj) [(Wrd56.Lng)]));
  (Wrd55.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_39)
  (Wrd73.Obj) = (Rsp [4]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! ((Wrd74.Lng) < (Wrd75.Lng)))
    goto label_37;
  Rvl = (current_block [OBJECT_36_6]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd81.Lng) = ((Wrd78.Lng) + 2L);
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (Rsp [1]) = (Wrd76.Obj);

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_40)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 2);

DEFLABEL (label_25)
  (Wrd55.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd85.Obj);
  goto label_38;

DEFLABEL (label_43)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 2);

DEFLABEL (label_24)
  (Wrd27.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define TAG_37_8 2
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_9 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_37_4);
      goto char_set_predicate_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_predicate_5)
DEFLABEL (char_set_predicate_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_37_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_9 9
#define TAG_38_10 3
#define ENVIRONMENT_LABEL_38_3 21
#define DEBUGGING_LABEL_38_2 20
#define OBJECT_38_0 19
#define EXECUTE_CACHE_38_12 11
#define EXECUTE_CACHE_38_11 13
#define EXECUTE_CACHE_38_8 15
#define EXECUTE_CACHE_38_6 17
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_38_4);
      goto char_set_P_3;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_P_6)
DEFLABEL (char_set_P_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_38_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_6 5
#define LABEL_39_7 7
#define LABEL_39_5 9
#define LABEL_39_9 11
#define LABEL_39_10 13
#define ENVIRONMENT_LABEL_39_3 23
#define DEBUGGING_LABEL_39_2 22
#define OBJECT_39_2 21
#define OBJECT_39_1 20
#define OBJECT_39_0 19
#define EXECUTE_CACHE_39_11 15
#define EXECUTE_CACHE_39_8 17
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto Z___P_5;

    case 1:
      current_block = (Rpc - LABEL_39_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___P_12)
DEFLABEL (Z___P_5)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_15;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_15;
  (Wrd23.Obj) = ((Wrd29.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (label_15)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_39_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_10)
  (Wrd23.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_39_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_39_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_39_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define ENVIRONMENT_LABEL_40_3 14
#define DEBUGGING_LABEL_40_2 13
#define OBJECT_40_2 12
#define OBJECT_40_1 11
#define OBJECT_40_0 10
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_40_4);
      goto Z___P_low_8;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___P_low_13)
DEFLABEL (Z___P_low_8)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_40_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 256L)
    goto label_16;
  Rvl = (current_block [OBJECT_40_2]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_21;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_21;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_21;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd16.pChr) = (& ((Wrd24.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_20)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 30))
    goto label_19;
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_19;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_19;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd40.pChr) = (& ((Wrd47.pChr) [(Wrd37.Lng)]));
  (Wrd41.uLng) = ((unsigned long) (((unsigned char *) (Wrd40.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd41.uLng)));

DEFLABEL (label_18)
  (Wrd57.Obj) = (* (Rsp++));
  if (! ((Wrd34.Obj) == (Wrd57.Obj)))
    goto label_17;
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = ((Wrd62.Lng) + 1L);
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));
  (Rsp [0]) = (Wrd60.Obj);
  goto loop_6;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_19)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_11)
  (Wrd34.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define LABEL_41_9 13
#define ENVIRONMENT_LABEL_41_3 19
#define DEBUGGING_LABEL_41_2 18
#define OBJECT_41_3 17
#define OBJECT_41_2 16
#define OBJECT_41_1 15
#define OBJECT_41_0 14
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_41_4);
      goto Z___P_high_12;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_41_9);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___P_high_19)
DEFLABEL (Z___P_high_12)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_23;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_22)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == (Wrd16.Obj))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd30.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto loop_9;

DEFLABEL (label_23)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_41_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_27;
  Rvl = (current_block [OBJECT_41_3]);

DEFLABEL (label_26)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_32;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_32;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_31)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_30;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_30;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_30;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd37.pObj) = (& ((Wrd43.pObj) [(Wrd34.Lng)]));
  (Wrd32.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_29)
  (Wrd53.Obj) = (* (Rsp++));
  if (! ((Wrd32.Obj) == (Wrd53.Obj)))
    goto label_28;
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd58.Lng) + 1L);
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (Rsp [0]) = (Wrd56.Obj);
  goto loop_9;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_30)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (label_17)
  (Wrd32.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_7 7
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto char_set_invert_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_invert_4)
DEFLABEL (char_set_invert_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_6 5
#define LABEL_43_5 7
#define LABEL_43_9 9
#define LABEL_43_8 11
#define ENVIRONMENT_LABEL_43_3 23
#define DEBUGGING_LABEL_43_2 22
#define OBJECT_43_2 21
#define OBJECT_43_1 20
#define OBJECT_43_0 19
#define EXECUTE_CACHE_43_11 13
#define EXECUTE_CACHE_43_10 15
#define EXECUTE_CACHE_43_7 17
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto Z__invert_4;

    case 1:
      current_block = (Rpc - LABEL_43_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__invert_9)
DEFLABEL (Z__invert_4)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_43_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_43_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define ENVIRONMENT_LABEL_44_3 20
#define DEBUGGING_LABEL_44_2 19
#define OBJECT_44_3 18
#define OBJECT_44_2 17
#define OBJECT_44_1 16
#define OBJECT_44_0 15
#define EXECUTE_CACHE_44_6 13
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_44_4);
      goto Z__low_invert_12;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto do_loop_9;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__low_invert_17)
DEFLABEL (Z__low_invert_12)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_9;

DEFLABEL (do_loop_18)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_44_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_44_1])))
    goto label_19;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_23;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_23;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_23;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_22)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd34.Lng) = (~ (Wrd31.Lng));
  (Wrd37.Lng) = ((Wrd34.Lng) & 255L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 30))
    goto label_21;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_21;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [1]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) (Wrd51.Lng)) < ((unsigned long) (Wrd55.Lng))))
    goto label_21;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_21;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd46.pChr) = (& ((Wrd53.pChr) [(Wrd43.Lng)]));
  ((Wrd46.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd33.uLng));

DEFLABEL (label_20)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) + 1L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [0]) = (Wrd38.Obj);
  goto do_loop_9;

DEFLABEL (label_21)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 3);

DEFLABEL (label_15)
  goto label_20;

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_8 11
#define TAG_45_9 4
#define LABEL_45_11 13
#define LABEL_45_10 15
#define LABEL_45_12 17
#define TAG_45_13 7
#define LABEL_45_16 19
#define TAG_45_17 8
#define LABEL_45_14 21
#define TAG_45_15 9
#define LABEL_45_18 23
#define LABEL_45_20 25
#define LABEL_45_21 27
#define LABEL_45_23 29
#define ENVIRONMENT_LABEL_45_3 44
#define DEBUGGING_LABEL_45_2 43
#define OBJECT_45_7 42
#define OBJECT_45_6 41
#define OBJECT_45_5 40
#define OBJECT_45_4 39
#define OBJECT_45_3 38
#define OBJECT_45_2 37
#define OBJECT_45_1 36
#define OBJECT_45_0 35
#define EXECUTE_CACHE_45_22 31
#define EXECUTE_CACHE_45_19 33
#define FREE_REFERENCES_LABEL_45_0 30
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_45_4);
      goto Z__high_invert_33;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto lambda_42;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto lambda_29;

    case 6:
      current_block = (Rpc - LABEL_45_10);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_45_12);
      goto lambda_43;

    case 8:
      current_block = (Rpc - LABEL_45_16);
      goto lambda_45;

    case 9:
      current_block = (Rpc - LABEL_45_14);
      goto lambda_44;

    case 10:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_45_20);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_45_23);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__high_invert_41)
DEFLABEL (Z__high_invert_33)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_63;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd17.Lng) > 0)
    goto label_48;
  (Wrd24.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd25.Obj) = (current_block [OBJECT_45_5]);
  (Wrd26.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd20.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd30.Lng) = ((Wrd17.Lng) - 1L);
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_61;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_61;
  Wrd37 = Wrd30;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_61;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd35.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd31.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_60)
  if ((Wrd31.Obj) == (current_block [OBJECT_45_2]))
    goto label_50;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_49;

DEFLABEL (label_50)
  (Wrd51.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_49)
DEFLABEL (label_59)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_58;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd60.Lng))))
    goto label_58;
  (Wrd52.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_57)
  if ((Wrd52.Obj) == (current_block [OBJECT_45_5]))
    goto label_52;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_52)
  (Wrd70.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_51)
DEFLABEL (label_56)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd73.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_8])));
  Rhp += 4;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd73.pObj)));
  Wrd80 = Wrd73;
  (Wrd81.Obj) = (Rsp [3]);
  ((Wrd80.pObj) [2]) = (Wrd81.Obj);
  (Wrd79.Obj) = (Rsp [2]);
  ((Wrd80.pObj) [3]) = (Wrd79.Obj);
  (Wrd77.Obj) = (Rsp [1]);
  ((Wrd80.pObj) [4]) = (Wrd77.Obj);
  (Wrd75.Obj) = (Rsp [0]);
  ((Wrd80.pObj) [5]) = (Wrd75.Obj);
  (Rsp [3]) = (Wrd72.Obj);
  if ((Wrd75.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  goto label_53;

DEFLABEL (label_54)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));

DEFLABEL (label_53)
DEFLABEL (label_55)
  (Rsp [2]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.Obj) = (current_block [OBJECT_45_4]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_37)
  (Wrd52.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_36)
  (Wrd31.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_45_8);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) - (Wrd11.Lng));
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd16.Lng) = ((Wrd14.Lng) + (Wrd12.Lng));
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_12])));
  Rhp += 5;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd33 = Wrd20;
  (Wrd36.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd33.pObj) [2]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd33.pObj) [3]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd7.pObj) [5]);
  ((Wrd33.pObj) [4]) = (Wrd28.Obj);
  ((Wrd33.pObj) [5]) = (Wrd13.Obj);
  ((Wrd33.pObj) [6]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd43.Lng) = ((Wrd16.Lng) - 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Lng) = ((Wrd9.Lng) - 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_16])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd44.Obj);
  ((Wrd56.pObj) [3]) = (Wrd50.Obj);
  Wrd58 = Wrd52;
  goto label_64;

DEFLABEL (label_65)
  (Wrd62.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_14])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd72 = Wrd69;
  ((Wrd72.pObj) [2]) = (Wrd63.Obj);
  ((Wrd72.pObj) [3]) = (Wrd8.Obj);
  Wrd58 = Wrd68;

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd58.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_46)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_45_11);
  (Wrd5.Obj) = (current_block [OBJECT_45_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_45_4]);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_25;

DEFLABEL (lambda_47)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_45_10);
  (Wrd5.Obj) = (current_block [OBJECT_45_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_45_6]);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_25;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_45_12);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd13.pObj) [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_67)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) - 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_69;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_69;
  Wrd21 = Wrd14;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_69;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd18.pObj) = (& ((Wrd23.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = (current_block [OBJECT_45_2]);
  ((Wrd18.pObj) [1]) = (Wrd19.Obj);
  goto label_67;

DEFLABEL (label_69)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_45_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_7]), 3);

DEFLABEL (label_39)
  goto label_67;

DEFLABEL (label_71)
  (Wrd33.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd33.uLng) == 10))
    goto label_72;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd31.Lng))))
    goto label_72;
  (Wrd25.Obj) = (current_block [OBJECT_45_5]);
  ((Wrd29.pObj) [1]) = (Wrd25.Obj);
  goto label_70;

DEFLABEL (label_72)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_45_4]);
  (Wrd36.Obj) = (current_block [OBJECT_45_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_7]), 3);

DEFLABEL (label_38)
  goto label_70;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_45_16);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_15;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_45_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_8 9
#define ENVIRONMENT_LABEL_46_3 20
#define DEBUGGING_LABEL_46_2 19
#define OBJECT_46_0 18
#define EXECUTE_CACHE_46_9 11
#define EXECUTE_CACHE_46_6 13
#define FREE_REFERENCE_46_1 16
#define FREE_REFERENCE_46_0 17
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_46_4);
      goto char_set_union_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_union_6)
DEFLABEL (char_set_union_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_6 5
#define LABEL_47_5 7
#define ENVIRONMENT_LABEL_47_3 14
#define DEBUGGING_LABEL_47_2 13
#define EXECUTE_CACHE_47_7 9
#define FREE_REFERENCE_47_0 12
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_47_4);
      goto Z__union_2;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__union_6)
DEFLABEL (Z__union_2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_9;
  Wrd7 = Wrd11;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_6])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_47_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd5.Obj);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (Rsp [1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define ENVIRONMENT_LABEL_48_3 20
#define DEBUGGING_LABEL_48_2 19
#define OBJECT_48_0 18
#define EXECUTE_CACHE_48_9 11
#define EXECUTE_CACHE_48_6 13
#define FREE_REFERENCE_48_1 16
#define FREE_REFERENCE_48_0 17
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_48_4);
      goto char_set_intersection_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_intersection_6)
DEFLABEL (char_set_intersection_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_6 5
#define LABEL_49_5 7
#define ENVIRONMENT_LABEL_49_3 14
#define DEBUGGING_LABEL_49_2 13
#define EXECUTE_CACHE_49_7 9
#define FREE_REFERENCE_49_0 12
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_49_4);
      goto Z__intersection_1;

    case 1:
      current_block = (Rpc - LABEL_49_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__intersection_5)
DEFLABEL (Z__intersection_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_6])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_49_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Rsp [1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_9 9
#define ENVIRONMENT_LABEL_50_3 21
#define DEBUGGING_LABEL_50_2 20
#define OBJECT_50_0 19
#define EXECUTE_CACHE_50_10 11
#define EXECUTE_CACHE_50_8 13
#define EXECUTE_CACHE_50_6 15
#define FREE_REFERENCE_50_0 18
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_50_4);
      goto char_set_difference_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_difference_6)
DEFLABEL (char_set_difference_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_9])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define ENVIRONMENT_LABEL_51_3 15
#define DEBUGGING_LABEL_51_2 14
#define OBJECT_51_0 13
#define EXECUTE_CACHE_51_7 9
#define FREE_REFERENCE_51_0 12
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_51_4);
      goto Z__difference_1;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__difference_5)
DEFLABEL (Z__difference_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_51_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_51_0]);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_7 7
#define LABEL_52_5 9
#define LABEL_52_10 11
#define LABEL_52_11 13
#define LABEL_52_9 15
#define ENVIRONMENT_LABEL_52_3 27
#define DEBUGGING_LABEL_52_2 26
#define OBJECT_52_2 25
#define OBJECT_52_1 24
#define OBJECT_52_0 23
#define EXECUTE_CACHE_52_13 17
#define EXECUTE_CACHE_52_12 19
#define EXECUTE_CACHE_52_8 21
#define FREE_REFERENCES_LABEL_52_0 16
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_52_4);
      goto Z__binary_6;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_52_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__binary_13)
DEFLABEL (Z__binary_6)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_13]));

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.Obj) = (current_block [OBJECT_52_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_52_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_52_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_52_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_8 13
#define LABEL_53_11 15
#define ENVIRONMENT_LABEL_53_3 24
#define DEBUGGING_LABEL_53_2 23
#define OBJECT_53_3 22
#define OBJECT_53_2 21
#define OBJECT_53_1 20
#define OBJECT_53_0 19
#define EXECUTE_CACHE_53_6 17
#define FREE_REFERENCES_LABEL_53_0 16
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd5;
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
      goto Z__low_binary_12;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto do_loop_9;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_53_11);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__low_binary_18)
DEFLABEL (Z__low_binary_12)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_9;

DEFLABEL (do_loop_19)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_53_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_53_1])))
    goto label_20;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_26;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_26;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_26;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pChr) = (& ((Wrd23.pChr) [(Wrd12.Lng)]));
  (Wrd16.uLng) = ((unsigned long) (((unsigned char *) (Wrd15.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_25)
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 30))
    goto label_24;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_24;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd44.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_24;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd38.pChr) = (& ((Wrd46.pChr) [(Wrd35.Lng)]));
  (Wrd39.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd40.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_23)
  (Wrd56.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_8);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_22;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_22;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_22;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_22;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pChr) = (& ((Wrd21.pChr) [(Wrd11.Lng)]));
  ((Wrd14.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) ((unsigned long) Rvl));

DEFLABEL (label_21)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_9;

DEFLABEL (label_22)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 3);

DEFLABEL (label_16)
  goto label_21;

DEFLABEL (label_24)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_13 11
#define TAG_54_14 4
#define LABEL_54_15 13
#define LABEL_54_16 15
#define LABEL_54_11 17
#define TAG_54_12 7
#define LABEL_54_9 19
#define TAG_54_10 8
#define LABEL_54_27 21
#define LABEL_54_28 23
#define LABEL_54_30 25
#define LABEL_54_31 27
#define LABEL_54_33 29
#define LABEL_54_34 31
#define LABEL_54_17 33
#define TAG_54_18 15
#define LABEL_54_23 35
#define TAG_54_24 16
#define LABEL_54_21 37
#define TAG_54_22 17
#define LABEL_54_19 39
#define TAG_54_20 18
#define LABEL_54_25 41
#define LABEL_54_37 43
#define LABEL_54_32 45
#define LABEL_54_35 47
#define LABEL_54_36 49
#define LABEL_54_38 51
#define LABEL_54_39 53
#define LABEL_54_40 55
#define ENVIRONMENT_LABEL_54_3 70
#define DEBUGGING_LABEL_54_2 69
#define OBJECT_54_5 68
#define OBJECT_54_4 67
#define OBJECT_54_3 66
#define OBJECT_54_2 65
#define OBJECT_54_1 64
#define OBJECT_54_0 63
#define EXECUTE_CACHE_54_29 57
#define EXECUTE_CACHE_54_26 59
#define EXECUTE_CACHE_54_8 61
#define FREE_REFERENCES_LABEL_54_0 56
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd80;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd138;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd139;
  machine_word Wrd108;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd151;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd163;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd175;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd187;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_54_4);
      goto Z__high_binary_64;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_66;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_67;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_54_13);
      goto loop_52;

    case 5:
      current_block = (Rpc - LABEL_54_15);
      goto label_68;

    case 6:
      current_block = (Rpc - LABEL_54_16);
      goto label_69;

    case 7:
      current_block = (Rpc - LABEL_54_11);
      goto accum_55;

    case 8:
      current_block = (Rpc - LABEL_54_9);
      goto finish_61;

    case 9:
      current_block = (Rpc - LABEL_54_27);
      goto label_70;

    case 10:
      current_block = (Rpc - LABEL_54_28);
      goto label_71;

    case 11:
      current_block = (Rpc - LABEL_54_30);
      goto loop2_50;

    case 12:
      current_block = (Rpc - LABEL_54_31);
      goto label_72;

    case 13:
      current_block = (Rpc - LABEL_54_33);
      goto loop1_39;

    case 14:
      current_block = (Rpc - LABEL_54_34);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_54_17);
      goto lambda_80;

    case 16:
      current_block = (Rpc - LABEL_54_23);
      goto lambda_83;

    case 17:
      current_block = (Rpc - LABEL_54_21);
      goto lambda_82;

    case 18:
      current_block = (Rpc - LABEL_54_19);
      goto lambda_81;

    case 19:
      current_block = (Rpc - LABEL_54_25);
      goto continuation_53;

    case 20:
      current_block = (Rpc - LABEL_54_37);
      goto label_74;

    case 21:
      current_block = (Rpc - LABEL_54_32);
      goto continuation_45;

    case 22:
      current_block = (Rpc - LABEL_54_35);
      goto continuation_34;

    case 23:
      current_block = (Rpc - LABEL_54_36);
      goto continuation_8;

    case 24:
      current_block = (Rpc - LABEL_54_38);
      goto continuation_47;

    case 25:
      current_block = (Rpc - LABEL_54_39);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_54_40);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__high_binary_76)
DEFLABEL (Z__high_binary_64)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_89;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_88)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_87;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_86)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_9])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_11])));
  Rhp += 1;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_13])));
  Rhp += 7;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  Wrd32 = Wrd40;
  (Wrd33.Obj) = (Rsp [8]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  ((Wrd32.pObj) [3]) = (Wrd30.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  ((Wrd32.pObj) [4]) = (Wrd27.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [5]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd32.pObj) [6]) = (Wrd21.Obj);
  ((Wrd32.pObj) [7]) = (Wrd45.Obj);
  ((Wrd32.pObj) [8]) = (Wrd43.Obj);
  ((Wrd42.pObj) [2]) = Rvl;
  ((Wrd44.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_1]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = (Wrd6.Obj);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  (Rsp [8]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_52;

DEFLABEL (label_87)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (loop_79)
DEFLABEL (loop_52)
  INTERRUPT_CHECK (26, LABEL_54_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [6]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_90;
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop2_50;

DEFLABEL (label_90)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd19.Obj) = ((Wrd8.pObj) [5]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd16.Lng) < (Wrd20.Lng))
    goto label_91;
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop1_39;

DEFLABEL (label_91)
  (Wrd45.Obj) = ((Wrd8.pObj) [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_110;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_110;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_110;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd31.pObj) = (& ((Wrd40.pObj) [(Wrd26.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_109)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_108;
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_108;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd71.Lng))))
    goto label_108;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd60.pObj) = (& ((Wrd69.pObj) [(Wrd55.Lng)]));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_107)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_17])));
  Rhp += 5;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd96 = Wrd85;
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [4]);
  ((Wrd96.pObj) [2]) = (Wrd99.Obj);
  (Wrd95.Obj) = ((Wrd98.pObj) [8]);
  ((Wrd96.pObj) [3]) = (Wrd95.Obj);
  ((Wrd96.pObj) [4]) = (Wrd97.Obj);
  (Wrd89.Obj) = (Rsp [8]);
  ((Wrd96.pObj) [5]) = (Wrd89.Obj);
  (Wrd87.Obj) = (Rsp [7]);
  ((Wrd96.pObj) [6]) = (Wrd87.Obj);
  (Rsp [8]) = (Wrd84.Obj);
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if ((Wrd101.Lng) < (Wrd103.Lng))
    goto label_103;
  if ((Wrd103.Lng) < (Wrd101.Lng))
    goto label_99;
  (Wrd108.Obj) = (Rsp [6]);
  if ((Wrd108.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_92;

DEFLABEL (label_93)
  (Wrd139.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_92)
DEFLABEL (label_98)
  (Wrd111.Obj) = (Rsp [6]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  (Wrd113.Lng) = ((Wrd112.Lng) + 1L);
  (Wrd114.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [6]);
  if ((Wrd115.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_94;

DEFLABEL (label_95)
  (Wrd138.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd138.Obj);

DEFLABEL (label_94)
DEFLABEL (label_97)
  (Wrd118.Obj) = (Rsp [6]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd120.Lng) = ((Wrd119.Lng) + 1L);
  (Wrd121.Obj) = (LONG_TO_FIXNUM (Wrd120.Lng));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd125.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_23])));
  Rhp += 5;
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd125.pObj)));
  Wrd134 = Wrd125;
  (Wrd135.Obj) = (Rsp [4]);
  ((Wrd134.pObj) [2]) = (Wrd135.Obj);
  (Wrd133.Obj) = (Rsp [3]);
  ((Wrd134.pObj) [3]) = (Wrd133.Obj);
  (Wrd131.Obj) = (Rsp [2]);
  ((Wrd134.pObj) [4]) = (Wrd131.Obj);
  ((Wrd134.pObj) [5]) = (Wrd121.Obj);
  ((Wrd134.pObj) [6]) = (Wrd122.Obj);
  Wrd136 = Wrd124;

DEFLABEL (label_96)
  Rsp = (& (Rsp [5]));
  (Rsp [7]) = (Wrd136.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd140.Obj) = (Rsp [6]);
  if ((Wrd140.Obj) == ((SCHEME_OBJECT) 0))
    goto label_101;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_100;

DEFLABEL (label_101)
  (Wrd163.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_100)
DEFLABEL (label_102)
  (Wrd143.Obj) = (Rsp [6]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  (Wrd145.Lng) = ((Wrd144.Lng) + 1L);
  (Wrd146.Obj) = (LONG_TO_FIXNUM (Wrd145.Lng));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd147.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd148.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd148.Obj);
  (Wrd149.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd149.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd152.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_21])));
  Rhp += 5;
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd152.pObj)));
  Wrd161 = Wrd152;
  (Wrd162.Obj) = (Rsp [4]);
  ((Wrd161.pObj) [2]) = (Wrd162.Obj);
  ((Wrd161.pObj) [3]) = (Wrd146.Obj);
  ((Wrd161.pObj) [4]) = (Wrd147.Obj);
  ((Wrd161.pObj) [5]) = (Wrd148.Obj);
  ((Wrd161.pObj) [6]) = (Wrd149.Obj);
  Wrd136 = Wrd151;
  goto label_96;

DEFLABEL (label_103)
  (Wrd164.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd165.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd166.Obj) = (Rsp [6]);
  if ((Wrd166.Obj) == ((SCHEME_OBJECT) 0))
    goto label_105;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_104;

DEFLABEL (label_105)
  (Wrd187.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd187.Obj);

DEFLABEL (label_104)
DEFLABEL (label_106)
  (Wrd169.Obj) = (Rsp [6]);
  (Wrd170.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  (Wrd171.Lng) = ((Wrd170.Lng) + 1L);
  (Wrd172.Obj) = (LONG_TO_FIXNUM (Wrd171.Lng));
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd173.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd176.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_19])));
  Rhp += 5;
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd176.pObj)));
  Wrd185 = Wrd176;
  (Wrd186.Obj) = (Rsp [4]);
  ((Wrd185.pObj) [2]) = (Wrd186.Obj);
  (Wrd184.Obj) = (Rsp [3]);
  ((Wrd185.pObj) [3]) = (Wrd184.Obj);
  (Wrd182.Obj) = (Rsp [2]);
  ((Wrd185.pObj) [4]) = (Wrd182.Obj);
  ((Wrd185.pObj) [5]) = (Wrd172.Obj);
  ((Wrd185.pObj) [6]) = (Wrd173.Obj);
  Wrd136 = Wrd175;
  goto label_96;

DEFLABEL (label_108)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [3]);
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [2]);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (accum_78)
DEFLABEL (accum_55)
  INTERRUPT_CHECK (26, LABEL_54_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_26]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_54_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  Rvl = (Rsp [4]);

DEFLABEL (label_111)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_114;
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_114;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_114;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd20.pObj) = (& ((Wrd29.pObj) [(Wrd15.Lng)]));
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [1]) = (Wrd21.Obj);

DEFLABEL (label_113)
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_111;

DEFLABEL (label_114)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [2]);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 3);

DEFLABEL (label_74)
  goto label_113;

DEFLABEL (finish_77)
DEFLABEL (finish_61)
  INTERRUPT_CHECK (26, LABEL_54_9);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_121;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) - 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_120;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_120;
  Wrd19 = Wrd10;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_120;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd17.pObj) = (& ((Wrd23.pObj) [(Wrd12.Lng)]));
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_119)
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd38.Obj) = (current_block [OBJECT_54_4]);
  if ((Wrd37.Lng) < 1114112L)
    goto label_116;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) - 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_115)
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [2]);
  (Rsp [1]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (label_116)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_118;
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_118;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) (Wrd62.Lng)) < ((unsigned long) (Wrd68.Lng))))
    goto label_118;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd57.pObj) = (& ((Wrd66.pObj) [(Wrd52.Lng)]));
  ((Wrd57.pObj) [1]) = (Wrd38.Obj);

DEFLABEL (label_117)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  goto label_115;

DEFLABEL (label_118)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [2]);
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.Obj) = (current_block [OBJECT_54_4]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 3);

DEFLABEL (label_71)
  goto label_117;

DEFLABEL (label_120)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_27]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_121)
  (Wrd40.Obj) = (Rsp [2]);
  goto label_115;

DEFLABEL (loop2_84)
DEFLABEL (loop2_50)
  INTERRUPT_CHECK (26, LABEL_54_30);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_122;
  (Wrd11.Obj) = ((Wrd8.pObj) [7]);
  (Rsp [8]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [9]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [10]) = (Wrd15.Obj);
  Rsp = (& (Rsp [8]));
  goto finish_61;

DEFLABEL (label_122)
  (Wrd17.Obj) = (Rsp [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_124;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_123;

DEFLABEL (label_124)
  (Wrd57.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_123)
DEFLABEL (label_127)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_126;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_126;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_126;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd26.pObj) = (& ((Wrd35.pObj) [(Wrd21.Lng)]));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_125)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_32]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [9]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_54_32);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_38]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto accum_55;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_54_38);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto loop2_50;

DEFLABEL (label_126)
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [2]);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_31]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (loop1_85)
DEFLABEL (loop1_39)
  INTERRUPT_CHECK (26, LABEL_54_33);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [6]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_128;
  (Wrd11.Obj) = ((Wrd8.pObj) [7]);
  (Rsp [8]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [9]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [10]) = (Wrd15.Obj);
  Rsp = (& (Rsp [8]));
  goto finish_61;

DEFLABEL (label_128)
  (Wrd17.Obj) = (Rsp [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_130;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_129;

DEFLABEL (label_130)
  (Wrd57.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_129)
DEFLABEL (label_133)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_132;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_132;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_132;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd26.pObj) = (& ((Wrd35.pObj) [(Wrd21.Lng)]));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_131)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_35]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [9]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_54_35);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_39]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto accum_55;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_54_39);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto loop1_39;

DEFLABEL (label_132)
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [3]);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_34]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_54_17);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_54_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto accum_55;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_54_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.pObj) = (& (Rsp [14]));
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [7]));
    SCHEME_OBJECT * MFUp2 = (Wrd13.pObj);
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  goto loop_52;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_54_23);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd18.Obj);
  goto lambda_11;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_54_21);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd18.Obj);
  goto lambda_11;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_54_19);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd18.Obj);
  goto lambda_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define ENVIRONMENT_LABEL_55_3 16
#define DEBUGGING_LABEL_55_2 15
#define OBJECT_55_1 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_6 9
#define FREE_ASSIGNMENT_55_0 12
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_55_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_5 7
#define LABEL_56_8 9
#define ENVIRONMENT_LABEL_56_3 19
#define DEBUGGING_LABEL_56_2 18
#define OBJECT_56_0 17
#define EXECUTE_CACHE_56_7 11
#define FREE_REFERENCE_56_0 14
#define FREE_ASSIGNMENT_56_0 16
#define FREE_REFERENCES_LABEL_56_0 10
#define NUMBER_OF_LINKER_SECTIONS_56_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_56_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_56_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_6 5
#define LABEL_57_5 7
#define LABEL_57_8 9
#define ENVIRONMENT_LABEL_57_3 19
#define DEBUGGING_LABEL_57_2 18
#define OBJECT_57_0 17
#define EXECUTE_CACHE_57_7 11
#define FREE_REFERENCE_57_0 14
#define FREE_ASSIGNMENT_57_0 16
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_57_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_57_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_57_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_57_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_57_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_7 7
#define ENVIRONMENT_LABEL_58_3 16
#define DEBUGGING_LABEL_58_2 15
#define OBJECT_58_1 14
#define OBJECT_58_0 13
#define EXECUTE_CACHE_58_6 9
#define FREE_ASSIGNMENT_58_0 12
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_58_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_58_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_6 5
#define LABEL_59_5 7
#define LABEL_59_8 9
#define ENVIRONMENT_LABEL_59_3 19
#define DEBUGGING_LABEL_59_2 18
#define OBJECT_59_0 17
#define EXECUTE_CACHE_59_7 11
#define FREE_REFERENCE_59_0 14
#define FREE_ASSIGNMENT_59_0 16
#define FREE_REFERENCES_LABEL_59_0 10
#define NUMBER_OF_LINKER_SECTIONS_59_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_59_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_59_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_6 5
#define LABEL_60_5 7
#define LABEL_60_8 9
#define ENVIRONMENT_LABEL_60_3 19
#define DEBUGGING_LABEL_60_2 18
#define OBJECT_60_0 17
#define EXECUTE_CACHE_60_7 11
#define FREE_REFERENCE_60_0 14
#define FREE_ASSIGNMENT_60_0 16
#define FREE_REFERENCES_LABEL_60_0 10
#define NUMBER_OF_LINKER_SECTIONS_60_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_60_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_60_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_60_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_60_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define ENVIRONMENT_LABEL_61_3 16
#define DEBUGGING_LABEL_61_2 15
#define OBJECT_61_1 14
#define OBJECT_61_0 13
#define EXECUTE_CACHE_61_6 9
#define FREE_ASSIGNMENT_61_0 12
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_61_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_6 5
#define LABEL_62_5 7
#define LABEL_62_8 9
#define ENVIRONMENT_LABEL_62_3 19
#define DEBUGGING_LABEL_62_2 18
#define OBJECT_62_0 17
#define EXECUTE_CACHE_62_7 11
#define FREE_REFERENCE_62_0 14
#define FREE_ASSIGNMENT_62_0 16
#define FREE_REFERENCES_LABEL_62_0 10
#define NUMBER_OF_LINKER_SECTIONS_62_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_62_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_62_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_6 5
#define LABEL_63_5 7
#define LABEL_63_8 9
#define ENVIRONMENT_LABEL_63_3 19
#define DEBUGGING_LABEL_63_2 18
#define OBJECT_63_0 17
#define EXECUTE_CACHE_63_7 11
#define FREE_REFERENCE_63_0 14
#define FREE_ASSIGNMENT_63_0 16
#define FREE_REFERENCES_LABEL_63_0 10
#define NUMBER_OF_LINKER_SECTIONS_63_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_63_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_63_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_63_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_63_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define ENVIRONMENT_LABEL_64_3 16
#define DEBUGGING_LABEL_64_2 15
#define OBJECT_64_1 14
#define OBJECT_64_0 13
#define EXECUTE_CACHE_64_6 9
#define FREE_ASSIGNMENT_64_0 12
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_64_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_64_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_6 5
#define LABEL_65_5 7
#define LABEL_65_8 9
#define ENVIRONMENT_LABEL_65_3 19
#define DEBUGGING_LABEL_65_2 18
#define OBJECT_65_0 17
#define EXECUTE_CACHE_65_7 11
#define FREE_REFERENCE_65_0 14
#define FREE_ASSIGNMENT_65_0 16
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_65_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_65_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_65_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_65_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_65_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_6 5
#define LABEL_66_5 7
#define LABEL_66_8 9
#define ENVIRONMENT_LABEL_66_3 19
#define DEBUGGING_LABEL_66_2 18
#define OBJECT_66_0 17
#define EXECUTE_CACHE_66_7 11
#define FREE_REFERENCE_66_0 14
#define FREE_ASSIGNMENT_66_0 16
#define FREE_REFERENCES_LABEL_66_0 10
#define NUMBER_OF_LINKER_SECTIONS_66_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_66_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_66_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_66_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define ENVIRONMENT_LABEL_67_3 21
#define DEBUGGING_LABEL_67_2 20
#define OBJECT_67_6 19
#define OBJECT_67_5 18
#define OBJECT_67_4 17
#define OBJECT_67_3 16
#define OBJECT_67_2 15
#define OBJECT_67_1 14
#define OBJECT_67_0 13
#define EXECUTE_CACHE_67_6 9
#define FREE_ASSIGNMENT_67_0 12
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_67_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_67_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_67_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_67_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_67_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_67_6]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_67_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_6 5
#define LABEL_68_5 7
#define LABEL_68_8 9
#define ENVIRONMENT_LABEL_68_3 19
#define DEBUGGING_LABEL_68_2 18
#define OBJECT_68_0 17
#define EXECUTE_CACHE_68_7 11
#define FREE_REFERENCE_68_0 14
#define FREE_ASSIGNMENT_68_0 16
#define FREE_REFERENCES_LABEL_68_0 10
#define NUMBER_OF_LINKER_SECTIONS_68_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_68_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_68_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_68_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_68_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_68_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_68_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_6 5
#define LABEL_69_5 7
#define LABEL_69_8 9
#define ENVIRONMENT_LABEL_69_3 19
#define DEBUGGING_LABEL_69_2 18
#define OBJECT_69_0 17
#define EXECUTE_CACHE_69_7 11
#define FREE_REFERENCE_69_0 14
#define FREE_ASSIGNMENT_69_0 16
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_69_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_69_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_69_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_69_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_69_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_69_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_6 5
#define LABEL_70_7 7
#define LABEL_70_5 9
#define LABEL_70_9 11
#define ENVIRONMENT_LABEL_70_3 22
#define DEBUGGING_LABEL_70_2 21
#define OBJECT_70_0 20
#define EXECUTE_CACHE_70_8 13
#define FREE_REFERENCE_70_1 16
#define FREE_REFERENCE_70_0 17
#define FREE_ASSIGNMENT_70_0 19
#define FREE_REFERENCES_LABEL_70_0 12
#define NUMBER_OF_LINKER_SECTIONS_70_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_70_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_70_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_12;
  Wrd14 = Wrd18;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_70_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_70_0]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_70_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_5 7
#define LABEL_71_8 9
#define ENVIRONMENT_LABEL_71_3 19
#define DEBUGGING_LABEL_71_2 18
#define OBJECT_71_0 17
#define EXECUTE_CACHE_71_7 11
#define FREE_REFERENCE_71_0 14
#define FREE_ASSIGNMENT_71_0 16
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_71_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_71_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_71_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_71_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_71_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_6 5
#define LABEL_72_5 7
#define LABEL_72_8 9
#define ENVIRONMENT_LABEL_72_3 19
#define DEBUGGING_LABEL_72_2 18
#define OBJECT_72_0 17
#define EXECUTE_CACHE_72_7 11
#define FREE_REFERENCE_72_0 14
#define FREE_ASSIGNMENT_72_0 16
#define FREE_REFERENCES_LABEL_72_0 10
#define NUMBER_OF_LINKER_SECTIONS_72_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_72_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_72_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_72_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_72_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_72_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_7 7
#define LABEL_73_5 9
#define LABEL_73_9 11
#define ENVIRONMENT_LABEL_73_3 22
#define DEBUGGING_LABEL_73_2 21
#define OBJECT_73_0 20
#define EXECUTE_CACHE_73_8 13
#define FREE_REFERENCE_73_1 16
#define FREE_REFERENCE_73_0 17
#define FREE_ASSIGNMENT_73_0 19
#define FREE_REFERENCES_LABEL_73_0 12
#define NUMBER_OF_LINKER_SECTIONS_73_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_73_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_73_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_12;
  Wrd14 = Wrd18;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_73_0]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_6 5
#define LABEL_74_5 7
#define LABEL_74_8 9
#define ENVIRONMENT_LABEL_74_3 19
#define DEBUGGING_LABEL_74_2 18
#define OBJECT_74_0 17
#define EXECUTE_CACHE_74_7 11
#define FREE_REFERENCE_74_0 14
#define FREE_ASSIGNMENT_74_0 16
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_74_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_74_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_74_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_74_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_74_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_6 5
#define LABEL_75_5 7
#define LABEL_75_8 9
#define ENVIRONMENT_LABEL_75_3 19
#define DEBUGGING_LABEL_75_2 18
#define OBJECT_75_0 17
#define EXECUTE_CACHE_75_7 11
#define FREE_REFERENCE_75_0 14
#define FREE_ASSIGNMENT_75_0 16
#define FREE_REFERENCES_LABEL_75_0 10
#define NUMBER_OF_LINKER_SECTIONS_75_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_75_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_75_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_75_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_75_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_75_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_75_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_8 7
#define LABEL_76_6 9
#define LABEL_76_9 11
#define ENVIRONMENT_LABEL_76_3 24
#define DEBUGGING_LABEL_76_2 23
#define OBJECT_76_1 22
#define OBJECT_76_0 21
#define EXECUTE_CACHE_76_10 13
#define EXECUTE_CACHE_76_7 15
#define FREE_REFERENCE_76_0 18
#define FREE_ASSIGNMENT_76_0 20
#define FREE_REFERENCES_LABEL_76_0 12
#define NUMBER_OF_LINKER_SECTIONS_76_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_76_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_76_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_76_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_76_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_76_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_76_1]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_76_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_9])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_6 5
#define LABEL_77_5 7
#define LABEL_77_8 9
#define ENVIRONMENT_LABEL_77_3 19
#define DEBUGGING_LABEL_77_2 18
#define OBJECT_77_0 17
#define EXECUTE_CACHE_77_7 11
#define FREE_REFERENCE_77_0 14
#define FREE_ASSIGNMENT_77_0 16
#define FREE_REFERENCES_LABEL_77_0 10
#define NUMBER_OF_LINKER_SECTIONS_77_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_77_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_77_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_77_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_77_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_77_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_77_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_6 5
#define LABEL_78_5 7
#define LABEL_78_8 9
#define ENVIRONMENT_LABEL_78_3 19
#define DEBUGGING_LABEL_78_2 18
#define OBJECT_78_0 17
#define EXECUTE_CACHE_78_7 11
#define FREE_REFERENCE_78_0 14
#define FREE_ASSIGNMENT_78_0 16
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_78_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_78_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_78_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_78_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_78_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_7 7
#define ENVIRONMENT_LABEL_79_3 16
#define DEBUGGING_LABEL_79_2 15
#define OBJECT_79_1 14
#define OBJECT_79_0 13
#define EXECUTE_CACHE_79_6 9
#define FREE_ASSIGNMENT_79_0 12
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_79_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_79_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_79_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_79_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define ENVIRONMENT_LABEL_80_3 16
#define DEBUGGING_LABEL_80_2 15
#define OBJECT_80_1 14
#define OBJECT_80_0 13
#define EXECUTE_CACHE_80_6 9
#define FREE_ASSIGNMENT_80_0 12
#define FREE_REFERENCES_LABEL_80_0 8
#define NUMBER_OF_LINKER_SECTIONS_80_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_80_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_80_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_7 7
#define ENVIRONMENT_LABEL_81_3 16
#define DEBUGGING_LABEL_81_2 15
#define OBJECT_81_1 14
#define OBJECT_81_0 13
#define EXECUTE_CACHE_81_6 9
#define FREE_ASSIGNMENT_81_0 12
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_81_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_81_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_81_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_81_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_6 5
#define LABEL_82_5 7
#define LABEL_82_8 9
#define ENVIRONMENT_LABEL_82_3 19
#define DEBUGGING_LABEL_82_2 18
#define OBJECT_82_0 17
#define EXECUTE_CACHE_82_7 11
#define FREE_REFERENCE_82_0 14
#define FREE_ASSIGNMENT_82_0 16
#define FREE_REFERENCES_LABEL_82_0 10
#define NUMBER_OF_LINKER_SECTIONS_82_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_82_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_82_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_82_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_82_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_82_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_82_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_7 7
#define ENVIRONMENT_LABEL_83_3 17
#define DEBUGGING_LABEL_83_2 16
#define OBJECT_83_2 15
#define OBJECT_83_1 14
#define OBJECT_83_0 13
#define EXECUTE_CACHE_83_6 9
#define FREE_ASSIGNMENT_83_0 12
#define FREE_REFERENCES_LABEL_83_0 8
#define NUMBER_OF_LINKER_SECTIONS_83_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_83_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_83_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_83_2]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_83_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_6 5
#define LABEL_84_5 7
#define LABEL_84_8 9
#define ENVIRONMENT_LABEL_84_3 19
#define DEBUGGING_LABEL_84_2 18
#define OBJECT_84_0 17
#define EXECUTE_CACHE_84_7 11
#define FREE_REFERENCE_84_0 14
#define FREE_ASSIGNMENT_84_0 16
#define FREE_REFERENCES_LABEL_84_0 10
#define NUMBER_OF_LINKER_SECTIONS_84_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_84_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_84_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_84_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_84_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_84_0]);
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_84_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define LABEL_85_9 9
#define ENVIRONMENT_LABEL_85_3 20
#define DEBUGGING_LABEL_85_2 19
#define EXECUTE_CACHE_85_10 11
#define EXECUTE_CACHE_85_8 13
#define EXECUTE_CACHE_85_7 15
#define FREE_REFERENCE_85_0 18
#define FREE_REFERENCES_LABEL_85_0 10
#define NUMBER_OF_LINKER_SECTIONS_85_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_85_4);
      goto string__char_set_2;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_85_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__char_set_6)
DEFLABEL (string__char_set_2)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_9])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_9 9
#define ENVIRONMENT_LABEL_86_3 20
#define DEBUGGING_LABEL_86_2 19
#define EXECUTE_CACHE_86_10 11
#define EXECUTE_CACHE_86_8 13
#define EXECUTE_CACHE_86_7 15
#define FREE_REFERENCE_86_0 18
#define FREE_REFERENCES_LABEL_86_0 10
#define NUMBER_OF_LINKER_SECTIONS_86_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_86_4);
      goto char_set__string_2;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_86_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set__string_6)
DEFLABEL (char_set__string_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_9])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_7 7
#define LABEL_87_8 9
#define LABEL_87_9 11
#define LABEL_87_11 13
#define LABEL_87_12 15
#define ENVIRONMENT_LABEL_87_3 28
#define DEBUGGING_LABEL_87_2 27
#define OBJECT_87_5 26
#define OBJECT_87_4 25
#define OBJECT_87_3 24
#define OBJECT_87_2 23
#define OBJECT_87_1 22
#define OBJECT_87_0 21
#define EXECUTE_CACHE_87_10 17
#define EXECUTE_CACHE_87_6 19
#define FREE_REFERENCES_LABEL_87_0 16
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_87_4);
      goto char_set_members_12;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_87_8);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_87_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_87_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_87_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_members_16)
DEFLABEL (char_set_members_12)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_87_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_9;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_87_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_2]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_87_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 256L)
    goto label_20;
  Rvl = (current_block [OBJECT_87_4]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_87_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd25.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_9;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd19.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd21.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_87_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_5]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_87_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_9 7
#define LABEL_88_6 9
#define LABEL_88_8 11
#define ENVIRONMENT_LABEL_88_3 25
#define DEBUGGING_LABEL_88_2 24
#define OBJECT_88_0 23
#define EXECUTE_CACHE_88_12 13
#define EXECUTE_CACHE_88_11 15
#define EXECUTE_CACHE_88_10 17
#define EXECUTE_CACHE_88_7 19
#define FREE_REFERENCE_88_0 22
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_88_4);
      goto char_set_3;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_88_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_88_6);
      goto lambda_0;

    case 4:
      current_block = (Rpc - LABEL_88_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set_7)
DEFLABEL (char_set_3)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;
  Wrd9 = Wrd13;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_9])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_88_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_88_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_6 5
#define LABEL_89_5 7
#define LABEL_89_9 9
#define LABEL_89_8 11
#define ENVIRONMENT_LABEL_89_3 25
#define DEBUGGING_LABEL_89_2 24
#define OBJECT_89_1 23
#define OBJECT_89_0 22
#define EXECUTE_CACHE_89_11 13
#define EXECUTE_CACHE_89_10 15
#define EXECUTE_CACHE_89_7 17
#define FREE_REFERENCE_89_1 20
#define FREE_REFERENCE_89_0 21
#define FREE_REFERENCES_LABEL_89_0 12
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_89_4);
      goto chars__char_set_2;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_89_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (chars__char_set_7)
DEFLABEL (chars__char_set_2)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_89_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_9])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_6])), (Wrd11.pObj));

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_5 3
#define LABEL_90_6 5
#define LABEL_90_7 7
#define LABEL_90_8 9
#define LABEL_90_4 11
#define ENVIRONMENT_LABEL_90_3 23
#define DEBUGGING_LABEL_90_2 22
#define OBJECT_90_2 21
#define OBJECT_90_1 20
#define OBJECT_90_0 19
#define EXECUTE_CACHE_90_11 13
#define EXECUTE_CACHE_90_10 15
#define EXECUTE_CACHE_90_9 17
#define FREE_REFERENCES_LABEL_90_0 12
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_90_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_90_6);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_90_4);
      goto ascii_range__char_set_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ascii_range__char_set_13)
DEFLABEL (ascii_range__char_set_10)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_18;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_90_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_8);

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd12.Obj))
    goto label_17;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_90_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_7);

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! ((Wrd20.Lng) > (Wrd22.Lng)))
    goto label_16;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_90_5);

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd24.Lng) > 256L)
    goto label_15;

DEFLABEL (label_14)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd35.Obj) = (current_block [OBJECT_90_1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (label_15)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_90_6);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 5
#define DEBUGGING_LABEL_91_2 4
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto alphabet__char_set_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alphabet__char_set_3)
DEFLABEL (alphabet__char_set_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 5
#define DEBUGGING_LABEL_92_2 4
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_92_4);
      goto char_set__alphabet_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set__alphabet_3)
DEFLABEL (char_set__alphabet_0)
  INTERRUPT_CHECK (26, LABEL_92_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 8
#define DEBUGGING_LABEL_93_2 7
#define EXECUTE_CACHE_93_5 5
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto char_in_alphabetP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_in_alphabetP_3)
DEFLABEL (char_in_alphabetP_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_8 7
#define LABEL_94_9 9
#define LABEL_94_6 11
#define ENVIRONMENT_LABEL_94_3 20
#define DEBUGGING_LABEL_94_2 19
#define OBJECT_94_1 18
#define OBJECT_94_0 17
#define EXECUTE_CACHE_94_10 13
#define EXECUTE_CACHE_94_7 15
#define FREE_REFERENCES_LABEL_94_0 12
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_94_4);
      goto alphabet__scalar_values_6;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_94_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_94_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alphabet__scalar_values_11)
DEFLABEL (alphabet__scalar_values_6)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_94_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) - 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_16;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_15)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  goto label_13;

DEFLABEL (label_16)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 1);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_11 9
#define LABEL_95_8 11
#define LABEL_95_12 13
#define LABEL_95_13 15
#define LABEL_95_14 17
#define LABEL_95_15 19
#define ENVIRONMENT_LABEL_95_3 33
#define DEBUGGING_LABEL_95_2 32
#define OBJECT_95_2 31
#define OBJECT_95_1 30
#define OBJECT_95_0 29
#define EXECUTE_CACHE_95_16 21
#define EXECUTE_CACHE_95_10 23
#define EXECUTE_CACHE_95_9 25
#define EXECUTE_CACHE_95_6 27
#define FREE_REFERENCES_LABEL_95_0 20
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrset_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_95_4);
      goto scalar_values__alphabet_10;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_95_11);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_95_8);
      goto lambda_8;

    case 5:
      current_block = (Rpc - LABEL_95_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_95_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_95_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_95_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scalar_values__alphabet_17)
DEFLABEL (scalar_values__alphabet_10)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_95_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_29)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd21.Lng) < 1114112L)
    goto label_26;
  (Wrd24.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_25;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_11);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_23)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_22;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_21)
  (Wrd56.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  goto label_19;

DEFLABEL (label_22)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_14]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 1);

DEFLABEL (label_15)
  (Wrd47.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_28;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_27)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_23;

DEFLABEL (label_28)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_14)
  (Wrd34.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_25 33
#define LABEL_27 35
#define LABEL_28 37
#define LABEL_29 39
#define LABEL_30 41
#define LABEL_31 43
#define LABEL_32 45
#define LABEL_33 47
#define LABEL_34 49
#define LABEL_35 51
#define LABEL_36 53
#define LABEL_37 55
#define LABEL_38 57
#define LABEL_39 59
#define LABEL_40 61
#define LABEL_41 63
#define LABEL_42 65
#define LABEL_43 67
#define LABEL_44 69
#define LABEL_45 71
#define LABEL_46 73
#define LABEL_47 75
#define LABEL_48 77
#define LABEL_49 79
#define LABEL_50 81
#define LABEL_51 83
#define LABEL_52 85
#define LABEL_53 87
#define LABEL_54 89
#define LABEL_55 91
#define LABEL_56 93
#define LABEL_57 95
#define LABEL_58 97
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
#define ENVIRONMENT_LABEL_3 252
#define DEBUGGING_LABEL_2 251
#define PURIFICATION_ROOT 250
#define OBJECT_77 249
#define OBJECT_76 248
#define OBJECT_75 247
#define OBJECT_74 246
#define OBJECT_73 245
#define OBJECT_72 244
#define OBJECT_71 243
#define OBJECT_70 242
#define OBJECT_69 241
#define OBJECT_68 240
#define OBJECT_67 239
#define OBJECT_66 238
#define OBJECT_65 237
#define OBJECT_64 236
#define OBJECT_63 235
#define OBJECT_62 234
#define OBJECT_61 233
#define OBJECT_60 232
#define OBJECT_59 231
#define OBJECT_58 230
#define OBJECT_57 229
#define OBJECT_56 228
#define OBJECT_55 227
#define OBJECT_54 226
#define OBJECT_53 225
#define OBJECT_52 224
#define OBJECT_51 223
#define OBJECT_50 222
#define OBJECT_49 221
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
#define EXECUTE_CACHE_26 157
#define EXECUTE_CACHE_24 159
#define EXECUTE_CACHE_22 161
#define FREE_REFERENCE_0 164
#define GLOBAL_EXECUTE_CACHE_12 166
#define GLOBAL_EXECUTE_CACHE_10 168
#define GLOBAL_EXECUTE_CACHE_6 170
#define FREE_REFERENCES_LABEL_0 156
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
chrset_so_486c704babc04d1b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_79;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_80;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z___make_char_set_82;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_27);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_28);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_32);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_33);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_34);
      goto continuation_26;

    case 24:
      current_block = (Rpc - LABEL_35);
      goto continuation_27;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_30;

    case 28:
      current_block = (Rpc - LABEL_39);
      goto continuation_31;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto continuation_32;

    case 30:
      current_block = (Rpc - LABEL_41);
      goto continuation_33;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto continuation_35;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto continuation_36;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto continuation_37;

    case 35:
      current_block = (Rpc - LABEL_46);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_47);
      goto continuation_39;

    case 37:
      current_block = (Rpc - LABEL_48);
      goto continuation_40;

    case 38:
      current_block = (Rpc - LABEL_49);
      goto continuation_41;

    case 39:
      current_block = (Rpc - LABEL_50);
      goto continuation_42;

    case 40:
      current_block = (Rpc - LABEL_51);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_52);
      goto continuation_44;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_54);
      goto continuation_46;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto continuation_47;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_48;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto continuation_49;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto continuation_50;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto continuation_51;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto continuation_52;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_53;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_54;

    case 52:
      current_block = (Rpc - LABEL_63);
      goto continuation_55;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto continuation_56;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto continuation_57;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto continuation_58;

    case 56:
      current_block = (Rpc - LABEL_67);
      goto continuation_59;

    case 57:
      current_block = (Rpc - LABEL_68);
      goto continuation_60;

    case 58:
      current_block = (Rpc - LABEL_69);
      goto continuation_61;

    case 59:
      current_block = (Rpc - LABEL_70);
      goto continuation_62;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_63;

    case 61:
      current_block = (Rpc - LABEL_72);
      goto continuation_64;

    case 62:
      current_block = (Rpc - LABEL_73);
      goto continuation_65;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto continuation_66;

    case 64:
      current_block = (Rpc - LABEL_75);
      goto continuation_67;

    case 65:
      current_block = (Rpc - LABEL_76);
      goto continuation_68;

    case 66:
      current_block = (Rpc - LABEL_77);
      goto continuation_69;

    case 67:
      current_block = (Rpc - LABEL_78);
      goto continuation_70;

    case 68:
      current_block = (Rpc - LABEL_79);
      goto continuation_71;

    case 69:
      current_block = (Rpc - LABEL_80);
      goto continuation_72;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_73;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_74;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto continuation_75;

    case 73:
      current_block = (Rpc - LABEL_84);
      goto continuation_76;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto label_84;

    case 75:
      current_block = (Rpc - LABEL_86);
      goto label_85;

    case 76:
      current_block = (Rpc - LABEL_87);
      goto expression_78;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_78)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_86])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_85)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_84)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	0,
	0,
	1,
	2,
	2,
	1,
	2,
	2,
	3,
	2,
	3,
	2,
	2,
	2,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	2,
	3,
	3,
	2,
	3,
	3,
	2,
	3,
	3,
	2,
	3,
	3,
	2,
	1,
	1,
	1,
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
	2,
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
	2,
	1,
	1,
	1,
	0,
	0,
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
    if (counter > 95)
      goto label_83;
    blocks = (current_block [OBJECT_77]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_85])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_83)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_87;
  Wrd11 = Wrd15;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd5.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_76]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_80)
  (Wrd11.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_79)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (Z___make_char_set_82)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z___make_char_set_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_chrset_so_486c704babc04d1b [95] =
  {
    { "chrset_so_code_1", 1, chrset_so_code_1 },
    { "chrset_so_code_2", 1, chrset_so_code_2 },
    { "chrset_so_code_3", 1, chrset_so_code_3 },
    { "chrset_so_code_4", 4, chrset_so_code_4 },
    { "chrset_so_code_5", 2, chrset_so_code_5 },
    { "chrset_so_code_6", 1, chrset_so_code_6 },
    { "chrset_so_code_7", 2, chrset_so_code_7 },
    { "chrset_so_code_8", 5, chrset_so_code_8 },
    { "chrset_so_code_9", 1, chrset_so_code_9 },
    { "chrset_so_code_10", 2, chrset_so_code_10 },
    { "chrset_so_code_11", 2, chrset_so_code_11 },
    { "chrset_so_code_12", 7, chrset_so_code_12 },
    { "chrset_so_code_13", 2, chrset_so_code_13 },
    { "chrset_so_code_14", 1, chrset_so_code_14 },
    { "chrset_so_code_15", 2, chrset_so_code_15 },
    { "chrset_so_code_16", 6, chrset_so_code_16 },
    { "chrset_so_code_17", 2, chrset_so_code_17 },
    { "chrset_so_code_18", 1, chrset_so_code_18 },
    { "chrset_so_code_19", 2, chrset_so_code_19 },
    { "chrset_so_code_20", 1, chrset_so_code_20 },
    { "chrset_so_code_21", 1, chrset_so_code_21 },
    { "chrset_so_code_22", 1, chrset_so_code_22 },
    { "chrset_so_code_23", 1, chrset_so_code_23 },
    { "chrset_so_code_24", 6, chrset_so_code_24 },
    { "chrset_so_code_25", 7, chrset_so_code_25 },
    { "chrset_so_code_26", 14, chrset_so_code_26 },
    { "chrset_so_code_27", 2, chrset_so_code_27 },
    { "chrset_so_code_28", 6, chrset_so_code_28 },
    { "chrset_so_code_29", 8, chrset_so_code_29 },
    { "chrset_so_code_30", 11, chrset_so_code_30 },
    { "chrset_so_code_31", 21, chrset_so_code_31 },
    { "chrset_so_code_32", 7, chrset_so_code_32 },
    { "chrset_so_code_33", 14, chrset_so_code_33 },
    { "chrset_so_code_34", 4, chrset_so_code_34 },
    { "chrset_so_code_35", 3, chrset_so_code_35 },
    { "chrset_so_code_36", 7, chrset_so_code_36 },
    { "chrset_so_code_37", 3, chrset_so_code_37 },
    { "chrset_so_code_38", 4, chrset_so_code_38 },
    { "chrset_so_code_39", 6, chrset_so_code_39 },
    { "chrset_so_code_40", 4, chrset_so_code_40 },
    { "chrset_so_code_41", 6, chrset_so_code_41 },
    { "chrset_so_code_42", 2, chrset_so_code_42 },
    { "chrset_so_code_43", 5, chrset_so_code_43 },
    { "chrset_so_code_44", 5, chrset_so_code_44 },
    { "chrset_so_code_45", 14, chrset_so_code_45 },
    { "chrset_so_code_46", 4, chrset_so_code_46 },
    { "chrset_so_code_47", 3, chrset_so_code_47 },
    { "chrset_so_code_48", 4, chrset_so_code_48 },
    { "chrset_so_code_49", 3, chrset_so_code_49 },
    { "chrset_so_code_50", 4, chrset_so_code_50 },
    { "chrset_so_code_51", 3, chrset_so_code_51 },
    { "chrset_so_code_52", 7, chrset_so_code_52 },
    { "chrset_so_code_53", 7, chrset_so_code_53 },
    { "chrset_so_code_54", 27, chrset_so_code_54 },
    { "chrset_so_code_55", 3, chrset_so_code_55 },
    { "chrset_so_code_56", 4, chrset_so_code_56 },
    { "chrset_so_code_57", 4, chrset_so_code_57 },
    { "chrset_so_code_58", 3, chrset_so_code_58 },
    { "chrset_so_code_59", 4, chrset_so_code_59 },
    { "chrset_so_code_60", 4, chrset_so_code_60 },
    { "chrset_so_code_61", 3, chrset_so_code_61 },
    { "chrset_so_code_62", 4, chrset_so_code_62 },
    { "chrset_so_code_63", 4, chrset_so_code_63 },
    { "chrset_so_code_64", 3, chrset_so_code_64 },
    { "chrset_so_code_65", 4, chrset_so_code_65 },
    { "chrset_so_code_66", 4, chrset_so_code_66 },
    { "chrset_so_code_67", 3, chrset_so_code_67 },
    { "chrset_so_code_68", 4, chrset_so_code_68 },
    { "chrset_so_code_69", 4, chrset_so_code_69 },
    { "chrset_so_code_70", 5, chrset_so_code_70 },
    { "chrset_so_code_71", 4, chrset_so_code_71 },
    { "chrset_so_code_72", 4, chrset_so_code_72 },
    { "chrset_so_code_73", 5, chrset_so_code_73 },
    { "chrset_so_code_74", 4, chrset_so_code_74 },
    { "chrset_so_code_75", 4, chrset_so_code_75 },
    { "chrset_so_code_76", 5, chrset_so_code_76 },
    { "chrset_so_code_77", 4, chrset_so_code_77 },
    { "chrset_so_code_78", 4, chrset_so_code_78 },
    { "chrset_so_code_79", 3, chrset_so_code_79 },
    { "chrset_so_code_80", 3, chrset_so_code_80 },
    { "chrset_so_code_81", 3, chrset_so_code_81 },
    { "chrset_so_code_82", 4, chrset_so_code_82 },
    { "chrset_so_code_83", 3, chrset_so_code_83 },
    { "chrset_so_code_84", 4, chrset_so_code_84 },
    { "chrset_so_code_85", 4, chrset_so_code_85 },
    { "chrset_so_code_86", 4, chrset_so_code_86 },
    { "chrset_so_code_87", 7, chrset_so_code_87 },
    { "chrset_so_code_88", 5, chrset_so_code_88 },
    { "chrset_so_code_89", 5, chrset_so_code_89 },
    { "chrset_so_code_90", 5, chrset_so_code_90 },
    { "chrset_so_code_91", 1, chrset_so_code_91 },
    { "chrset_so_code_92", 1, chrset_so_code_92 },
    { "chrset_so_code_93", 1, chrset_so_code_93 },
    { "chrset_so_code_94", 5, chrset_so_code_94 },
    { "chrset_so_code_95", 9, chrset_so_code_95 }
  };

int
decl_chrset_so_486c704babc04d1b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_chrset_so_486c704babc04d1b);
  return (0);
}

DECLARE_COMPILED_CODE ("chrset.so", 77, decl_chrset_so_486c704babc04d1b, chrset_so_486c704babc04d1b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_chrset_so_data_486c704babc04d1b [10033] =
  "\xfd\x01\xba\x01\xa5\x17\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x81\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21"
  "\x9e\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d"
  "\xb0\x84\x88\x07\xb1\x80\xc1\x0e\xbd\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88\x1d\x28\x0d\xbf\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x06\x1d"
  "\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc3\x1c\x81\x07\x80\xc1\x02\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x80\xc2\x1c\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x07\x02\x02\x81\x80\xc1\x1c\xb1\x82\x28\xb7\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x1c\xc1\x1c\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x82\xb1\x81\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x08"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x1b\x81"
  "\x1b\xc2\x1c\x80\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\xc3\x1c\x1b\x07\x80\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x08\x1b\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x1b\x1b\x08\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x82\xb1\x81\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb1\x81\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x82\xb1\x81\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x02\x80\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x02\x80"
  "\x07\x02\x1b\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c"
  "\x24\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x02\x80\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x07\x1b\x80"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x88\x02\x02\x88\x02\x02\x88"
  "\x08\x8a\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x88\x02\x02\x88\x02"
  "\x02\x88\x08\x8a\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x88\x08\x88"
  "\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c"
  "\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x88\x02\x02\x88\x08\x89\x0d"
  "\x1c\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0f\x0f\x0f\x0f\x0f\x0f\x0d\x1c\x25\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x25\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c"
  "\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0f\x0d\x1c\x25\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c"
  "\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0f\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x80\x02\x88\x08\x88\x0d\x1c\x25\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x80\x02\x88\x02\x08\x89\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0f\x0f\x0d\x1c\x25\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x08\x80\xb1\x81\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x0d\x1b\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x17\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x17\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x80\x17\xb5\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\xb7\x17\x1b\x2a\x1b\x2a\x1b\x2a\x02\x02\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x17\x1b\x0d\x0d\x0d\x9a\xb4\x2a\xb3"
  "\x2a\xb2\x2a\x9a\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x08\x8a\x08\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x63\x68\x72\x73\x65\x74\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72"
  "\x65\x66\x4e\x04\x83\x04\x03\x02\x4f\x04\x83\x04\x03\x02\x50\x04"
  "\x83\x04\x03\x02\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x02\x54\x0a\x81\x85\x02"
  "\x53\x08\x81\x83\x02\x52\x06\x81\x83\x02\x51\x04\x83\x04\x09\x12"
  "\x02\x02\x03\x0a\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x04\x13\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x09\x03\x56\x06\x81\x85\x02\x55\x04\x84\x04\x05\x0e\x0a\x02"
  "\x08\x0e\x63\x68\x61\x72\x61\x63\x74\x65\x72\x20\x73\x65\x74\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0b\x02\x57\x04\x84\x04"
  "\x03\x0c\x0c\x02\x08\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x0d"
  "\x04\x13\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x0e\x03\x59\x06\x81\x85\x02\x58\x04\x84\x04\x05"
  "\x0d\x0f\x02\x09\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x73"
  "\x65\x74\x21\x10\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x81\x02\x04\x09\x25\x6c\x6f\x77\x2d\x72\x65\x66"
  "\x11\x05\x10\x25\x25\x6d\x61\x6b\x65\x2d\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x12\x03\x5e\x0c\x81\x8d\x02\x5d\x0a\x81\x8d\x02\x5c\x08"
  "\x81\x8b\x02\x5b\x06\x81\x87\x02\x5a\x04\x84\x06\x0b\x19\x13\x02"
  "\x0a\x81\x02\x04\x0f\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x38\x62\x02\x5f\x04\x83\x02\x03\x0a\x14\x02\x0b\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x15\x61\x06\x81\x85"
  "\x02\x60\x04\x84\x06\x05\x0b\x16\x02\x0c\x10\x02\x15\x63\x06\x81"
  "\x87\x02\x62\x04\x84\x06\x05\x0b\x17\x02\x0d\x15\x81\x02\x21\x0e"
  "\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x18\x03\x02"
  "\x6a\x10\x81\x85\x02\x69\x0e\x81\x85\x02\x68\x0c\x81\x83\x02\x67"
  "\x0a\x81\x83\x02\x66\x08\x81\x83\x02\x65\x06\x81\x83\x02\x64\x04"
  "\x83\x04\x0f\x1e\x19\x02\x0e\x02\x03\x10\x38\x2d\x62\x69\x74\x2d"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x1a\x04\x19\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x38\x2d\x62\x69\x74\x2d\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x1b\x03\x6c\x06\x81\x85\x02\x6b\x04\x84\x04\x05"
  "\x0e\x1c\x02\x0f\x08\x12\x61\x6e\x20\x38\x2d\x62\x69\x74\x20\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x05\x0b\x02\x6d\x04\x84\x04\x03\x0c"
  "\x1d\x02\x10\x20\x77\x65\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d"
  "\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d\x72\x61\x6e"
  "\x67\x65\x3f\x1e\x02\x04\x0e\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74"
  "\x79\x70\x65\x3f\x02\x6f\x06\x81\x85\x02\x6e\x04\x83\x04\x05\x0d"
  "\x1f\x02\x11\x04\x63\x64\x72\x20\x04\x63\x61\x72\x21\x75\x0e\x81"
  "\x83\x02\x74\x0c\x81\x85\x02\x73\x0a\x81\x83\x02\x72\x08\x81\x83"
  "\x02\x71\x06\x81\x83\x02\x70\x04\x83\x04\x0d\x13\x22\x02\x12\x02"
  "\x03\x1f\x77\x65\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x63"
  "\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d\x6c\x69\x73\x74\x3f"
  "\x23\x04\x28\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x77\x65\x6c"
  "\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x63\x61\x6c\x61\x72\x2d"
  "\x76\x61\x6c\x75\x65\x2d\x6c\x69\x73\x74\x24\x03\x77\x06\x81\x85"
  "\x02\x76\x04\x84\x04\x05\x0e\x25\x02\x13\x08\x1c\x61\x20\x55\x6e"
  "\x69\x63\x6f\x64\x65\x20\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c"
  "\x75\x65\x20\x6c\x69\x73\x74\x05\x0b\x02\x78\x04\x84\x04\x03\x0c"
  "\x26\x02\x14\x02\x03\x1e\x04\x29\x65\x72\x72\x6f\x72\x3a\x6e\x6f"
  "\x74\x2d\x77\x65\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x63"
  "\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d\x72\x61\x6e\x67\x65"
  "\x27\x03\x7a\x06\x81\x85\x02\x79\x04\x84\x04\x05\x0e\x28\x02\x15"
  "\x08\x1d\x61\x20\x55\x6e\x69\x63\x6f\x64\x65\x20\x73\x63\x61\x6c"
  "\x61\x72\x2d\x76\x61\x6c\x75\x65\x20\x72\x61\x6e\x67\x65\x05\x0b"
  "\x02\x7b\x04\x84\x04\x03\x0c\x29\x02\x16\x7c\x04\x84\x06\x03\x2a"
  "\x02\x17\x21\x7d\x04\x83\x04\x03\x2b\x02\x18\x20\x7e\x04\x83\x04"
  "\x03\x2c\x02\x19\x18\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x3e\x73"
  "\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x73\x2d\x04\x0e\x03"
  "\x14\x25\x6c\x6f\x77\x2d\x3e\x73\x63\x61\x6c\x61\x72\x2d\x76\x61"
  "\x6c\x75\x65\x73\x2e\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x2f"
  "\x04\x15\x25\x68\x69\x67\x68\x2d\x3e\x73\x63\x61\x6c\x61\x72\x2d"
  "\x76\x61\x6c\x75\x65\x73\x30\x05\x84\x01\x0e\x81\x87\x02\x83\x01"
  "\x0c\x81\x85\x02\x82\x01\x0a\x81\x83\x02\x81\x01\x08\x81\x87\x02"
  "\x80\x01\x06\x81\x83\x02\x7f\x04\x83\x04\x0d\x1d\x31\x02\x1a\x04"
  "\x11\x04\x0c\x25\x6d\x61\x6b\x65\x2d\x72\x61\x6e\x67\x65\x32\x03"
  "\x8b\x01\x10\x81\x89\x02\x8a\x01\x0e\x81\x89\x02\x89\x01\x0c\x81"
  "\x89\x02\x88\x01\x0a\x81\x89\x02\x87\x01\x08\x81\x87\x02\x86\x01"
  "\x06\x81\x87\x02\x85\x01\x04\x83\x04\x0f\x19\x33\x02\x1b\x18\x21"
  "\x20\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x34\x03\x0d\x25"
  "\x72\x61\x6e\x67\x65\x2d\x73\x74\x61\x72\x74\x35\x03\x0b\x25\x72"
  "\x61\x6e\x67\x65\x2d\x65\x6e\x64\x36\x04\x32\x04\x99\x01\x1e\x81"
  "\x8d\x02\x98\x01\x1c\x81\x89\x02\x97\x01\x1a\x81\x8b\x02\x96\x01"
  "\x18\x81\x8f\x02\x95\x01\x16\x81\x8d\x02\x94\x01\x14\x81\x8b\x02"
  "\x93\x01\x12\x81\x89\x02\x92\x01\x10\x81\x85\x02\x91\x01\x0e\x84"
  "\x06\x90\x01\x0c\x81\x8f\x02\x8f\x01\x0a\x81\x8b\x02\x8e\x01\x08"
  "\x81\x87\x02\x8d\x01\x06\x81\x89\x02\x8c\x01\x04\x81\x87\x02\x1d"
  "\x2e\x37\x02\x1c\x18\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75"
  "\x65\x73\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x38\x04\x28\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x77\x65\x6c\x6c\x2d\x66\x6f"
  "\x72\x6d\x65\x64\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x6c\x69\x73\x74\x39\x03\x19\x25\x73\x63\x61\x6c\x61\x72"
  "\x2d\x76\x61\x6c\x75\x65\x73\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x3a\x03\x9b\x01\x06\x81\x83\x02\x9a\x01\x04\x83\x04\x05\x0e"
  "\x3b\x02\x1d\x03\x20\x25\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69"
  "\x7a\x65\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x6c\x69\x73\x74\x3c\x03\x0e\x25\x73\x70\x6c\x69\x74\x2d\x72\x61"
  "\x6e\x67\x65\x73\x3d\x03\x14\x25\x73\x63\x61\x6c\x61\x72\x2d\x76"
  "\x61\x6c\x75\x65\x73\x2d\x3e\x6c\x6f\x77\x3e\x03\x15\x25\x73\x63"
  "\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x73\x2d\x3e\x68\x69\x67"
  "\x68\x3f\x04\x0f\x25\x6d\x61\x6b\x65\x2d\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x40\x06\xa1\x01\x0e\x81\x85\x02\xa0\x01\x0c\x81\x85\x02"
  "\x9f\x01\x0a\x84\x06\x9e\x01\x08\x81\x85\x02\x9d\x01\x06\x81\x83"
  "\x02\x9c\x01\x04\x83\x04\x0d\x1b\x41\x02\x1e\x03\x0a\x25\x6d\x61"
  "\x6b\x65\x2d\x6c\x6f\x77\x42\x04\x0d\x03\x36\x03\x35\x04\x0a\x25"
  "\x6c\x6f\x77\x2d\x73\x65\x74\x21\x43\x06\xa9\x01\x12\x81\x8b\x02"
  "\xa8\x01\x10\x81\x89\x02\xa7\x01\x0e\x81\x87\x02\xa6\x01\x0c\x81"
  "\x85\x02\xa5\x01\x0a\x81\x85\x02\xa4\x01\x08\x81\x85\x02\xa3\x01"
  "\x06\x81\x83\x02\xa2\x01\x04\x83\x04\x11\x21\x44\x02\x1f\x20\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x45\x21\x03\x07\x6c"
  "\x65\x6e\x67\x74\x68\x03\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74"
  "\x6f\x72\x46\x03\x35\x03\x36\x05\xb4\x01\x18\x81\x8b\x02\xb3\x01"
  "\x16\x81\x8b\x02\xb2\x01\x14\x81\x8b\x02\xb1\x01\x12\x81\x8d\x02"
  "\xb0\x01\x10\x81\x8b\x02\xaf\x01\x0e\x81\x8b\x02\xae\x01\x0c\x81"
  "\x8d\x02\xad\x01\x0a\x81\x89\x02\xac\x01\x08\x81\x85\x02\xab\x01"
  "\x06\x81\x83\x02\xaa\x01\x04\x83\x04\x17\x28\x47\x02\x20\x21\x20"
  "\x09\x25\x72\x61\x6e\x67\x65\x3c\x3f\x48\x02\x04\x05\x73\x6f\x72"
  "\x74\x03\x36\x04\x08\x66\x69\x6c\x74\x65\x72\x21\x03\x35\x04\x32"
  "\x03\x2f\x04\x08\x66\x69\x78\x3a\x6d\x61\x78\x08\xc9\x01\x2c\x81"
  "\x8f\x02\xc8\x01\x2a\x81\x8f\x02\xc7\x01\x28\x81\x8d\x02\xc6\x01"
  "\x26\x81\x8f\x02\xc5\x01\x24\x81\x8b\x02\xc4\x01\x22\x81\x89\x02"
  "\xc3\x01\x20\x81\x85\x02\xc2\x01\x1e\x81\x8d\x02\xc1\x01\x1c\x81"
  "\x89\x02\xc0\x01\x1a\x81\x89\x02\xbf\x01\x18\x81\x83\x02\xbe\x01"
  "\x16\x81\x87\x02\xbd\x01\x14\x83\x04\xbc\x01\x12\x81\x89\x02\xbb"
  "\x01\x10\x81\x85\x02\xba\x01\x0e\x81\x85\x02\xb9\x01\x0c\x81\x87"
  "\x02\xb8\x01\x0a\x81\x83\x02\xb7\x01\x08\x81\x83\x02\xb6\x01\x06"
  "\x81\x87\x02\xb5\x01\x04\x83\x04\x2b\x43\x2f\x02\x21\x03\x35\x03"
  "\x36\x03\xd0\x01\x10\x81\x87\x02\xcf\x01\x0e\x81\x85\x02\xce\x01"
  "\x0c\x81\x87\x02\xcd\x01\x0a\x81\x85\x02\xcc\x01\x08\x81\x87\x02"
  "\xcb\x01\x06\x81\x85\x02\xca\x01\x04\x84\x06\x0f\x18\x49\x02\x22"
  "\x81\x10\x20\x21\x03\x36\x03\x35\x04\x32\x04\xde\x01\x1e\x81\x85"
  "\x02\xdd\x01\x1c\x81\x8d\x02\xdc\x01\x1a\x81\x89\x02\xdb\x01\x18"
  "\x81\x8b\x02\xda\x01\x16\x81\x89\x02\xd9\x01\x14\x81\x85\x02\xd8"
  "\x01\x12\x81\x87\x02\xd7\x01\x10\x81\x87\x02\xd6\x01\x0e\x81\x87"
  "\x02\xd5\x01\x0c\x81\x87\x02\xd4\x01\x0a\x81\x85\x02\xd3\x01\x08"
  "\x81\x85\x02\xd2\x01\x06\x81\x85\x02\xd1\x01\x04\x83\x04\x1d\x2b"
  "\x4a\x02\x23\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d"
  "\x62\x65\x72\x3f\x4b\x04\x0e\x04\x0f\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x63\x68\x61\x72\x4c\x03\x0a\x63\x68\x61\x72\x2d\x63"
  "\x6f\x64\x65\x04\x1b\x25\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c"
  "\x75\x65\x2d\x69\x6e\x2d\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x4d"
  "\x05\xe2\x01\x0a\x81\x87\x02\xe1\x01\x08\x81\x85\x02\xe0\x01\x06"
  "\x81\x85\x02\xdf\x01\x04\x84\x06\x09\x16\x4e\x02\x24\x1a\x73\x63"
  "\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d\x69\x6e\x2d\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3f\x4f\x04\x1f\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x75\x6e\x69\x63\x6f\x64\x65\x2d\x73\x63\x61\x6c"
  "\x61\x72\x2d\x76\x61\x6c\x75\x65\x04\x0e\x04\x4d\x04\xe5\x01\x08"
  "\x81\x85\x02\xe4\x01\x06\x81\x85\x02\xe3\x01\x04\x84\x06\x07\x12"
  "\x50\x02\x25\x34\x18\x04\x11\x02\xec\x01\x10\x81\x8d\x02\xeb\x01"
  "\x0e\x81\x8d\x02\xea\x01\x0c\x81\x8b\x02\xe9\x01\x0a\x81\x87\x02"
  "\xe8\x01\x08\x81\x85\x02\xe7\x01\x06\x81\x87\x02\xe6\x01\x04\x84"
  "\x06\x0f\x1c\x51\x02\x26\x13\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x52\x04\x0e\x04\x4b\x03\xef"
  "\x01\x08\x81\x85\x02\xee\x01\x06\x81\x83\x02\xed\x01\x04\x83\x04"
  "\x07\x10\x53\x02\x27\x0b\x63\x68\x61\x72\x2d\x73\x65\x74\x3d\x3f"
  "\x54\x04\x0e\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x73\x55\x04\x06\x65\x76\x65\x72\x79"
  "\x04\x04\x25\x3d\x3f\x56\x05\xf3\x01\x0a\x81\x85\x02\xf2\x01\x08"
  "\x81\x85\x02\xf1\x01\x06\x81\x85\x02\xf0\x01\x04\xfe\x05\x09\x16"
  "\x57\x02\x28\x04\x08\x25\x3d\x3f\x2d\x6c\x6f\x77\x58\x04\x09\x25"
  "\x3d\x3f\x2d\x68\x69\x67\x68\x59\x03\xf9\x01\x0e\x81\x85\x02\xf8"
  "\x01\x0c\x81\x85\x02\xf7\x01\x0a\x81\x85\x02\xf6\x01\x08\x81\x89"
  "\x02\xf5\x01\x06\x81\x87\x02\xf4\x01\x04\x84\x06\x0d\x18\x5a\x02"
  "\x29\x15\xfd\x01\x0a\x81\x89\x02\xfc\x01\x08\x81\x87\x02\xfb\x01"
  "\x06\x81\x87\x02\xfa\x01\x04\x84\x06\x09\x0f\x5b\x02\x2a\x34\x18"
  "\x83\x02\x0e\x81\x8b\x02\x82\x02\x0c\x81\x89\x02\x81\x02\x0a\x81"
  "\x89\x02\x80\x02\x08\x81\x87\x02\xff\x01\x06\x81\x85\x02\xfe\x01"
  "\x04\x84\x06\x0d\x14\x5c\x02\x2b\x10\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x69\x6e\x76\x65\x72\x74\x5d\x04\x0e\x03\x08\x25\x69\x6e"
  "\x76\x65\x72\x74\x5e\x03\x85\x02\x06\x81\x83\x02\x84\x02\x04\x83"
  "\x04\x05\x0e\x5f\x02\x2c\x03\x0c\x25\x6c\x6f\x77\x2d\x69\x6e\x76"
  "\x65\x72\x74\x60\x03\x0d\x25\x68\x69\x67\x68\x2d\x69\x6e\x76\x65"
  "\x72\x74\x61\x04\x40\x04\x8a\x02\x0c\x81\x85\x02\x89\x02\x0a\x81"
  "\x87\x02\x88\x02\x08\x81\x83\x02\x87\x02\x06\x81\x85\x02\x86\x02"
  "\x04\x83\x04\x0b\x18\x62\x02\x2d\x10\x15\x81\x02\x02\x42\x02\x8f"
  "\x02\x0c\x81\x87\x02\x8e\x02\x0a\x81\x87\x02\x8d\x02\x08\x81\x87"
  "\x02\x8c\x02\x06\x81\x83\x02\x8b\x02\x04\x83\x04\x0b\x15\x63\x02"
  "\x2e\x45\x81\x10\x81\x80\x44\x34\x18\x03\x46\x07\x15\x73\x75\x62"
  "\x76\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x76\x65\x2d\x6c\x65\x66\x74"
  "\x21\x03\x9d\x02\x1e\x81\x89\x02\x9c\x02\x1c\x81\x89\x02\x9b\x02"
  "\x1a\x81\x89\x02\x9a\x02\x18\x81\x87\x02\x99\x02\x16\x81\x85\x02"
  "\x98\x02\x14\x81\x85\x02\x97\x02\x12\x81\x87\x02\x96\x02\x10\x83"
  "\x04\x95\x02\x0e\x83\x04\x94\x02\x0c\x81\x87\x02\x93\x02\x0a\x81"
  "\x87\x02\x92\x02\x08\x81\x85\x02\x91\x02\x06\x81\x83\x02\x90\x02"
  "\x04\x83\x04\x1d\x2d\x64\x02\x2f\x0f\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x75\x6e\x69\x6f\x6e\x65\x0f\x25\x6e\x75\x6c\x6c\x2d\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x66\x07\x25\x75\x6e\x69\x6f\x6e\x67"
  "\x03\x04\x55\x05\x07\x72\x65\x64\x75\x63\x65\x68\x03\xa1\x02\x0a"
  "\x81\x85\x02\xa0\x02\x08\x81\x83\x02\x9f\x02\x06\x81\x83\x02\x9e"
  "\x02\x04\xff\x03\x09\x15\x69\x02\x30\x07\x66\x69\x78\x3a\x6f\x72"
  "\x02\x06\x08\x25\x62\x69\x6e\x61\x72\x79\x6a\x02\xa4\x02\x08\x84"
  "\x06\xa3\x02\x06\x81\x87\x02\xa2\x02\x04\x84\x06\x07\x0f\x6b\x02"
  "\x31\x16\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x69\x6e\x74\x65\x72"
  "\x73\x65\x63\x74\x69\x6f\x6e\x6c\x66\x0e\x25\x69\x6e\x74\x65\x72"
  "\x73\x65\x63\x74\x69\x6f\x6e\x6d\x03\x04\x55\x05\x68\x03\xa8\x02"
  "\x0a\x81\x85\x02\xa7\x02\x08\x81\x83\x02\xa6\x02\x06\x81\x83\x02"
  "\xa5\x02\x04\xff\x03\x09\x15\x68\x02\x32\x08\x66\x69\x78\x3a\x61"
  "\x6e\x64\x02\x06\x6a\x02\xab\x02\x08\x84\x06\xaa\x02\x06\x81\x87"
  "\x02\xa9\x02\x04\x84\x06\x07\x0f\x6e\x02\x33\x14\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x6f"
  "\x0c\x25\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x70\x02\x04\x0e"
  "\x04\x55\x05\x0a\x66\x6f\x6c\x64\x2d\x6c\x65\x66\x74\x04\xaf\x02"
  "\x0a\x81\x85\x02\xae\x02\x08\x81\x85\x02\xad\x02\x06\x81\x85\x02"
  "\xac\x02\x04\xfe\x05\x09\x16\x71\x02\x34\x09\x66\x69\x78\x3a\x61"
  "\x6e\x64\x63\x02\x06\x6a\x02\xb2\x02\x08\x84\x06\xb1\x02\x06\x81"
  "\x87\x02\xb0\x02\x04\x84\x06\x07\x10\x72\x02\x35\x05\x0d\x25\x68"
  "\x69\x67\x68\x2d\x62\x69\x6e\x61\x72\x79\x73\x05\x0c\x25\x6c\x6f"
  "\x77\x2d\x62\x69\x6e\x61\x72\x79\x74\x04\x40\x04\xb9\x02\x10\x81"
  "\x8b\x02\xb8\x02\x0e\x81\x8f\x02\xb7\x02\x0c\x81\x8d\x02\xb6\x02"
  "\x0a\x81\x89\x02\xb5\x02\x08\x81\x8d\x02\xb4\x02\x06\x81\x8b\x02"
  "\xb3\x02\x04\x86\x0a\x0f\x1c\x75\x02\x36\x10\x15\x81\x02\x02\x42"
  "\x02\xc0\x02\x10\x81\x8b\x02\xbf\x02\x0e\x81\x8b\x02\xbe\x02\x0c"
  "\x81\x8f\x02\xbd\x02\x0a\x81\x8d\x02\xbc\x02\x08\x81\x8b\x02\xbb"
  "\x02\x06\x81\x87\x02\xba\x02\x04\x85\x08\x0f\x19\x15\x02\x37\x45"
  "\x81\x80\x44\x34\x18\x03\x46\x04\x0a\x62\x6f\x6f\x6c\x65\x61\x6e"
  "\x3d\x3f\x04\x0d\x76\x65\x63\x74\x6f\x72\x2d\x68\x65\x61\x64\x21"
  "\x04\xdb\x02\x38\x81\x8f\x02\xda\x02\x36\x81\x9d\x02\xd9\x02\x34"
  "\x81\x9d\x02\xd8\x02\x32\x81\x8d\x02\xd7\x02\x30\x81\x9b\x02\xd6"
  "\x02\x2e\x81\x9b\x02\xd5\x02\x2c\x81\x8b\x02\xd4\x02\x2a\x81\x8b"
  "\x02\xd3\x02\x28\x81\x85\x02\xd2\x02\x26\x81\x85\x02\xd1\x02\x24"
  "\x81\x85\x02\xd0\x02\x22\x81\x8d\x02\xcf\x02\x20\x81\x99\x02\xce"
  "\x02\x1e\x81\x97\x02\xcd\x02\x1c\x81\x99\x02\xcc\x02\x1a\x81\x97"
  "\x02\xcb\x02\x18\x81\x87\x02\xca\x02\x16\x81\x87\x02\xc9\x02\x14"
  "\x81\x87\x02\xc8\x02\x12\x81\x8b\x02\xc7\x02\x10\x81\x91\x02\xc6"
  "\x02\x0e\x81\x8f\x02\xc5\x02\x0c\x81\x8f\x02\xc4\x02\x0a\x81\x8b"
  "\x02\xc3\x02\x08\x81\x89\x02\xc2\x02\x06\x81\x87\x02\xc1\x02\x04"
  "\x85\x08\x37\x47\x46\x02\x38\x02\x42\x5c\xc1\x01\xd8\x01\xd9\x01"
  "\xdf\x01\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x75\x70\x70\x65"
  "\x72\x2d\x63\x61\x73\x65\x45\x02\x03\x38\x02\xde\x02\x08\x81\x81"
  "\x02\xdd\x02\x06\x81\x81\x02\xdc\x02\x04\x82\x02\x07\x11\x34\x02"
  "\x39\x02\x18\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d"
  "\x75\x70\x70\x65\x72\x2d\x63\x61\x73\x65\x18\x02\x45\x02\x03\x5d"
  "\x02\xe2\x02\x0a\x81\x81\x02\xe1\x02\x08\x81\x81\x02\xe0\x02\x06"
  "\x81\x83\x02\xdf\x02\x04\x82\x02\x09\x14\x10\x02\x3a\x02\x11\x63"
  "\x68\x61\x72\x2d\x75\x70\x70\x65\x72\x2d\x63\x61\x73\x65\x3f\x76"
  "\x02\x45\x02\x03\x52\x02\xe6\x02\x0a\x81\x81\x02\xe5\x02\x08\x81"
  "\x81\x02\xe4\x02\x06\x81\x83\x02\xe3\x02\x04\x82\x02\x09\x14\x77"
  "\x02\x3b\x02\x62\x7c\xe1\x01\xf8\x01\xf9\x01\x80\x02\x14\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3a\x6c\x6f\x77\x65\x72\x2d\x63\x61\x73"
  "\x65\x78\x02\x03\x38\x02\xe9\x02\x08\x81\x81\x02\xe8\x02\x06\x81"
  "\x81\x02\xe7\x02\x04\x82\x02\x07\x11\x79\x02\x3c\x02\x18\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d\x6c\x6f\x77\x65\x72"
  "\x2d\x63\x61\x73\x65\x7a\x02\x78\x02\x03\x5d\x02\xed\x02\x0a\x81"
  "\x81\x02\xec\x02\x08\x81\x81\x02\xeb\x02\x06\x81\x83\x02\xea\x02"
  "\x04\x82\x02\x09\x14\x7b\x02\x3d\x02\x11\x63\x68\x61\x72\x2d\x6c"
  "\x6f\x77\x65\x72\x2d\x63\x61\x73\x65\x3f\x7c\x02\x78\x02\x03\x52"
  "\x02\xf1\x02\x0a\x81\x81\x02\xf0\x02\x08\x81\x81\x02\xef\x02\x06"
  "\x81\x83\x02\xee\x02\x04\x82\x02\x09\x14\x7d\x02\x3e\x02\x31\x3b"
  "\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x75\x6d\x65\x72\x69"
  "\x63\x7e\x02\x03\x38\x02\xf4\x02\x08\x81\x81\x02\xf3\x02\x06\x81"
  "\x81\x02\xf2\x02\x04\x82\x02\x07\x11\x7f\x02\x3f\x02\x15\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d\x6e\x75\x6d\x65\x72"
  "\x69\x63\x80\x01\x02\x7e\x02\x03\x5d\x02\xf8\x02\x0a\x81\x81\x02"
  "\xf7\x02\x08\x81\x81\x02\xf6\x02\x06\x81\x83\x02\xf5\x02\x04\x82"
  "\x02\x09\x14\x81\x01\x02\x40\x02\x0e\x63\x68\x61\x72\x2d\x6e\x75"
  "\x6d\x65\x72\x69\x63\x3f\x82\x01\x02\x7e\x02\x03\x52\x02\xfc\x02"
  "\x0a\x81\x81\x02\xfb\x02\x08\x81\x81\x02\xfa\x02\x06\x81\x83\x02"
  "\xf9\x02\x04\x82\x02\x09\x14\x83\x01\x02\x41\x02\x21\x80\x01\xa1"
  "\x01\x81\x02\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x67\x72\x61"
  "\x70\x68\x69\x63\x84\x01\x02\x03\x38\x02\xff\x02\x08\x81\x81\x02"
  "\xfe\x02\x06\x81\x81\x02\xfd\x02\x04\x82\x02\x07\x11\x85\x01\x02"
  "\x42\x02\x15\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d"
  "\x67\x72\x61\x70\x68\x69\x63\x86\x01\x02\x84\x01\x02\x03\x5d\x02"
  "\x83\x03\x0a\x81\x81\x02\x82\x03\x08\x81\x81\x02\x81\x03\x06\x81"
  "\x83\x02\x80\x03\x04\x82\x02\x09\x14\x87\x01\x02\x43\x02\x0e\x63"
  "\x68\x61\x72\x2d\x67\x72\x61\x70\x68\x69\x63\x3f\x88\x01\x02\x84"
  "\x01\x02\x03\x52\x02\x87\x03\x0a\x81\x81\x02\x86\x03\x08\x81\x81"
  "\x02\x85\x03\x06\x81\x83\x02\x84\x03\x04\x82\x02\x09\x14\x89\x01"
  "\x02\x44\x02\x01\x0a\x01\x0b\x01\x0d\x01\x0e\x01\x21\x01\xa1\x01"
  "\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x77\x68\x69\x74\x65\x73"
  "\x70\x61\x63\x65\x8a\x01\x02\x09\x09\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x8b\x01\x02\x8a\x03\x08\x81\x81\x02\x89\x03\x06\x81\x81\x02"
  "\x88\x03\x04\x82\x02\x07\x16\x8c\x01\x02\x45\x02\x18\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d\x77\x68\x69\x74\x65\x73"
  "\x70\x61\x63\x65\x8d\x01\x02\x8a\x01\x02\x03\x5d\x02\x8e\x03\x0a"
  "\x81\x81\x02\x8d\x03\x08\x81\x81\x02\x8c\x03\x06\x81\x83\x02\x8b"
  "\x03\x04\x82\x02\x09\x14\x8e\x01\x02\x46\x02\x11\x63\x68\x61\x72"
  "\x2d\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\x3f\x8f\x01\x02\x8a"
  "\x01\x02\x03\x52\x02\x92\x03\x0a\x81\x81\x02\x91\x03\x08\x81\x81"
  "\x02\x90\x03\x06\x81\x83\x02\x8f\x03\x04\x82\x02\x09\x14\x90\x01"
  "\x02\x47\x02\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x61\x6c\x70"
  "\x68\x61\x62\x65\x74\x69\x63\x91\x01\x02\x78\x45\x03\x04\x65\x02"
  "\x97\x03\x0c\x81\x81\x02\x96\x03\x0a\x81\x81\x02\x95\x03\x08\x81"
  "\x85\x02\x94\x03\x06\x81\x83\x02\x93\x03\x04\x82\x02\x0b\x17\x92"
  "\x01\x02\x48\x02\x18\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f"
  "\x74\x2d\x61\x6c\x70\x68\x61\x62\x65\x74\x69\x63\x93\x01\x02\x91"
  "\x01\x02\x03\x5d\x02\x9b\x03\x0a\x81\x81\x02\x9a\x03\x08\x81\x81"
  "\x02\x99\x03\x06\x81\x83\x02\x98\x03\x04\x82\x02\x09\x14\x94\x01"
  "\x02\x49\x02\x11\x63\x68\x61\x72\x2d\x61\x6c\x70\x68\x61\x62\x65"
  "\x74\x69\x63\x3f\x95\x01\x02\x91\x01\x02\x03\x52\x02\x9f\x03\x0a"
  "\x81\x81\x02\x9e\x03\x08\x81\x81\x02\x9d\x03\x06\x81\x83\x02\x9c"
  "\x03\x04\x82\x02\x09\x14\x96\x01\x02\x4a\x02\x16\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x3a\x61\x6c\x70\x68\x61\x6e\x75\x6d\x65\x72\x69"
  "\x63\x97\x01\x02\x7e\x91\x01\x03\x04\x65\x02\xa4\x03\x0c\x81\x81"
  "\x02\xa3\x03\x0a\x81\x81\x02\xa2\x03\x08\x81\x85\x02\xa1\x03\x06"
  "\x81\x83\x02\xa0\x03\x04\x82\x02\x0b\x17\x98\x01\x02\x4b\x02\x1a"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d\x61\x6c\x70"
  "\x68\x61\x6e\x75\x6d\x65\x72\x69\x63\x99\x01\x02\x97\x01\x02\x03"
  "\x5d\x02\xa8\x03\x0a\x81\x81\x02\xa7\x03\x08\x81\x81\x02\xa6\x03"
  "\x06\x81\x83\x02\xa5\x03\x04\x82\x02\x09\x14\x9a\x01\x02\x4c\x02"
  "\x13\x63\x68\x61\x72\x2d\x61\x6c\x70\x68\x61\x6e\x75\x6d\x65\x72"
  "\x69\x63\x3f\x9b\x01\x02\x97\x01\x02\x03\x52\x02\xac\x03\x0a\x81"
  "\x81\x02\xab\x03\x08\x81\x81\x02\xaa\x03\x06\x81\x83\x02\xa9\x03"
  "\x04\x82\x02\x09\x14\x9c\x01\x02\x4d\x02\x01\x0b\x12\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x3a\x73\x74\x61\x6e\x64\x61\x72\x64\x9d\x01"
  "\x02\x84\x01\x02\x03\x8b\x01\x04\x65\x03\xb1\x03\x0c\x81\x85\x02"
  "\xb0\x03\x0a\x81\x83\x02\xaf\x03\x08\x81\x81\x02\xae\x03\x06\x81"
  "\x81\x02\xad\x03\x04\x82\x02\x0b\x19\x9e\x01\x02\x4e\x02\x16\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74\x2d\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x9f\x01\x02\x9d\x01\x02\x03\x5d\x02\xb5\x03\x0a"
  "\x81\x81\x02\xb4\x03\x08\x81\x81\x02\xb3\x03\x06\x81\x83\x02\xb2"
  "\x03\x04\x82\x02\x09\x14\xa0\x01\x02\x4f\x02\x0f\x63\x68\x61\x72"
  "\x2d\x73\x74\x61\x6e\x64\x61\x72\x64\x3f\xa1\x01\x02\x9d\x01\x02"
  "\x03\x52\x02\xb9\x03\x0a\x81\x81\x02\xb8\x03\x08\x81\x81\x02\xb7"
  "\x03\x06\x81\x83\x02\xb6\x03\x04\x82\x02\x09\x14\xa2\x01\x02\x50"
  "\x02\x01\x0b\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x65\x77"
  "\x6c\x69\x6e\x65\xa3\x01\x02\x03\x8b\x01\x02\xbc\x03\x08\x81\x81"
  "\x02\xbb\x03\x06\x81\x81\x02\xba\x03\x04\x82\x02\x07\x11\xa4\x01"
  "\x02\x51\x02\x81\x01\x0f\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x61"
  "\x73\x63\x69\x69\xa5\x01\x02\x03\x38\x02\xbf\x03\x08\x81\x81\x02"
  "\xbe\x03\x06\x81\x81\x02\xbd\x03\x04\x82\x02\x07\x11\xa6\x01\x02"
  "\x52\x02\x21\x80\x01\x0e\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x63"
  "\x74\x6c\x73\xa7\x01\x02\x03\x38\x02\xc2\x03\x08\x81\x81\x02\xc1"
  "\x03\x06\x81\x81\x02\xc0\x03\x04\x82\x02\x07\x11\xa8\x01\x02\x53"
  "\x02\x0a\x63\x68\x61\x72\x2d\x63\x74\x6c\x3f\xa9\x01\x02\xa7\x01"
  "\x02\x03\x52\x02\xc6\x03\x0a\x81\x81\x02\xc5\x03\x08\x81\x81\x02"
  "\xc4\x03\x06\x81\x83\x02\xc3\x03\x04\x82\x02\x09\x14\xaa\x01\x02"
  "\x54\x02\x01\x21\x01\x0a\x0d\x63\x68\x61\x72\x2d\x73\x65\x74\x3a"
  "\x77\x73\x70\xab\x01\x02\x04\x8b\x01\x02\xc9\x03\x08\x81\x81\x02"
  "\xc8\x03\x06\x81\x81\x02\xc7\x03\x04\x82\x02\x07\x12\xac\x01\x02"
  "\x55\x02\x0a\x63\x68\x61\x72\x2d\x77\x73\x70\x3f\xad\x01\x02\xab"
  "\x01\x02\x03\x52\x02\xcd\x03\x0a\x81\x81\x02\xcc\x03\x08\x81\x81"
  "\x02\xcb\x03\x06\x81\x83\x02\xca\x03\x04\x82\x02\x09\x14\xae\x01"
  "\x02\x56\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72"
  "\xaf\x01\x02\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6c\x69\x73"
  "\x74\x03\x38\x04\x04\x6d\x61\x70\xb0\x01\x04\xd1\x03\x0a\x81\x87"
  "\x02\xd0\x03\x08\x81\x85\x02\xcf\x03\x06\x81\x83\x02\xce\x03\x04"
  "\x83\x04\x09\x15\xb1\x01\x02\x57\x0e\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x3e\x63\x68\x61\x72\x02\x03\x11\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\xb2\x01\x03\x0d\x6c\x69\x73"
  "\x74\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\xb0\x01\x04\xd5\x03\x0a"
  "\x81\x87\x02\xd4\x03\x08\x81\x85\x02\xd3\x03\x06\x81\x83\x02\xd2"
  "\x03\x04\x83\x04\x09\x15\xb3\x01\x02\x58\x0e\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x3e\x63\x68\x61\x72\xb2\x01\x04\x0e\x04\x11\x03\xdc"
  "\x03\x10\xfd\xff\x03\xdb\x03\x0e\xfd\xff\x03\xda\x03\x0c\xfd\xff"
  "\x03\xd9\x03\x0a\xff\xff\x03\xd8\x03\x08\x81\x83\x02\xd7\x03\x06"
  "\x81\x83\x02\xd6\x03\x04\x83\x04\x0f\x1d\x02\x59\x8b\x01\xaf\x01"
  "\x02\x04\x0d\x04\xb0\x01\x04\x4c\x03\x3a\x05\xe1\x03\x0c\x81\x83"
  "\x02\xe0\x03\x0a\x83\x04\xdf\x03\x08\x81\x87\x02\xde\x03\x06\x81"
  "\x83\x02\xdd\x03\x04\xff\x03\x0b\x1a\x4c\x02\x5a\x0a\x63\x68\x61"
  "\x72\x61\x63\x74\x65\x72\x10\x63\x68\x61\x72\x73\x2d\x3e\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x0d\x06\x63\x68\x61\x72\x3f\xaf\x01\x03"
  "\x06\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74"
  "\x2d\x6f\x66\x2d\x74\x79\x70\x65\x04\xb0\x01\x03\x3a\x04\xe6\x03"
  "\x0c\x81\x83\x02\xe5\x03\x0a\x81\x87\x02\xe4\x03\x08\x81\x83\x02"
  "\xe3\x03\x06\x81\x89\x02\xe2\x03\x04\x83\x04\x0b\x1a\xaf\x01\x02"
  "\x5b\x0d\x69\x6e\x64\x65\x78\x20\x66\x69\x78\x6e\x75\x6d\x16\x61"
  "\x73\x63\x69\x69\x2d\x72\x61\x6e\x67\x65\x2d\x3e\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\xb4\x01\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\xb5\x01\x03\x3a\x05\x0b\x04\xeb\x03\x0c\x84\x06\xea\x03\x0a\x81"
  "\x85\x02\xe9\x03\x08\x81\x85\x02\xe8\x03\x06\x81\x85\x02\xe7\x03"
  "\x04\x81\x85\x02\x0b\x18\x0b\x02\x5c\xec\x03\x04\x83\x04\x03\xb6"
  "\x01\x02\x5d\xed\x03\x04\x83\x04\x03\xb7\x01\x02\x5e\x04\x4b\x02"
  "\xee\x03\x04\x84\x06\x03\xb8\x01\x02\x5f\x21\x20\x03\x2d\x04\xb0"
  "\x01\x03\xf3\x03\x0c\x81\x85\x02\xf2\x03\x0a\x81\x85\x02\xf1\x03"
  "\x08\x81\x83\x02\xf0\x03\x06\x83\x04\xef\x03\x04\x83\x04\x0b\x15"
  "\xb9\x01\x02\x60\x21\x20\x18\x73\x63\x61\x6c\x61\x72\x2d\x76\x61"
  "\x6c\x75\x65\x73\x2d\x3e\x61\x6c\x70\x68\x61\x62\x65\x74\x21\x04"
  "\x39\x04\xb0\x01\x03\x3a\x04\xb5\x01\x05\xfc\x03\x14\x81\x87\x02"
  "\xfb\x03\x12\x81\x85\x02\xfa\x03\x10\x81\x85\x02\xf9\x03\x0e\x81"
  "\x85\x02\xf8\x03\x0c\x83\x04\xf7\x03\x0a\x81\x83\x02\xf6\x03\x08"
  "\x81\x83\x02\xf5\x03\x06\x81\x83\x02\xf4\x03\x04\x83\x04\x13\x22"
  "\xb5\x01\x60\xb0\x01\xb0\x01\xb5\x01\x04\xb9\x01\x04\xb8\x01\x04"
  "\xb7\x01\x04\xb6\x01\x04\x0b\x0c\xaf\x01\x04\x4c\x04\x04\xb3\x01"
  "\x04\xb1\x01\x04\x0c\x21\x18\x61\x6c\x70\x68\x61\x62\x65\x74\x2d"
  "\x3e\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x73\x12\x63"
  "\x68\x61\x72\x2d\x69\x6e\x2d\x61\x6c\x70\x68\x61\x62\x65\x74\x3f"
  "\x13\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x3e\x61\x6c\x70\x68\x61"
  "\x62\x65\x74\x13\x61\x6c\x70\x68\x61\x62\x65\x74\x2d\x3e\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\xb4\x01\x0d\x8b\x01\xb2\x01\x11\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x2d\x3e\x73\x74\x72\x69\x6e\x67\x11\x73"
  "\x74\x72\x69\x6e\x67\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x0c"
  "\xae\x01\x04\xad\x01\xac\x01\x04\xab\x01\xaa\x01\x04\xa9\x01\xa8"
  "\x01\x04\xa7\x01\xa6\x01\x04\xa5\x01\xa4\x01\x04\xa3\x01\xa2\x01"
  "\x04\xa1\x01\xa0\x01\x04\x9f\x01\x9e\x01\x04\x9d\x01\x9c\x01\x04"
  "\x9b\x01\x9a\x01\x04\x99\x01\x98\x01\x04\x97\x01\x96\x01\x04\x95"
  "\x01\x94\x01\x04\x93\x01\x92\x01\x04\x91\x01\x90\x01\x04\x8f\x01"
  "\x8e\x01\x04\x8d\x01\x8c\x01\x04\x8a\x01\x89\x01\x04\x88\x01\x87"
  "\x01\x04\x86\x01\x85\x01\x04\x84\x01\x83\x01\x04\x82\x01\x81\x01"
  "\x04\x80\x01\x7f\x04\x7e\x7d\x04\x7c\x7b\x04\x7a\x79\x04\x78\x77"
  "\x04\x76\x10\x04\x18\x34\x04\x66\x45\x73\x74\x6a\x70\x6f\x6d\x6c"
  "\x67\x65\x61\x60\x5e\x5d\x59\x58\x56\x54\x52\x4d\x4f\x4b\x3d\x48"
  "\x3c\x3f\x3e\x3a\x38\x30\x2e\x2d\x36\x35\x32\x27\x29\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x77\x65\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x72\x61\x6e\x67\x65\x24\x39\x1e\x23\x1b\x19\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x38\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x1a\x2d\x46\x04\x15\x04\x75\x04\x72\x04\x71\x04\x6e"
  "\x04\x68\x04\x6b\x04\x69\x04\x64\x04\x63\x04\x62\x04\x5f\x04\x5c"
  "\x04\x5b\x04\x5a\x04\x57\x04\x53\x04\x51\x04\x50\x04\x4e\x04\x4a"
  "\x04\x49\x04\x2f\x04\x47\x04\x44\x04\x41\x04\x3b\x04\x37\x0e\x33"
  "\x04\x31\x04\x2c\x04\x2b\x04\x2a\x04\x29\x04\x28\x04\x26\x04\x25"
  "\x04\x22\x04\x1f\x04\x1d\x04\x1c\x04\x19\x04\x2d\x01\x43\x11\x42"
  "\x0b\x25\x6c\x6f\x77\x2d\x6c\x69\x6d\x69\x74\x0c\x25\x6c\x6f\x77"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x40\x55\x09\x0e\x0b\x17\x04\x16\x04"
  "\x14\x04\x81\x10\x81\x02\x13\x04\x0f\x04\x0c\x04\x0a\x04\x04\x0b"
  "\x12\x10\x25\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x74\x61\x62\x6c"
  "\x65\x0f\x25\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x68\x69\x67\x68"
  "\x0e\x25\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6c\x6f\x77\x04\x04"
  "\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x0b\x3c\x63\x68\x61\x72\x2d\x73\x65\x74\x3e\xb9\x01\x09"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x04\x6c\x6f\x77\x05\x68\x69\x67"
  "\x68\x06\x74\x61\x62\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x04\xb9\x01\x02\x03\x42\x04\x40\x03\x0f\x61\x64"
  "\x64\x2d\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x21\x04\x4d\x9c\x01"
  "\x80\x80\x04\x4c\x9a\x01\x81\x81\x02\x4b\x98\x01\x81\x81\x02\x4a"
  "\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83"
  "\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01"
  "\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42"
  "\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83"
  "\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83"
  "\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02"
  "\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83\x02\x36"
  "\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68"
  "\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81"
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
  "\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x89\x02\x0d\x1c\x81\x85"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x89\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x9b\x01\xfd"
  "\x01";

SCHEME_OBJECT *
chrset_so_data_486c704babc04d1b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_chrset_so_data_486c704babc04d1b [0]))), (sizeof (prog_chrset_so_data_486c704babc04d1b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_87]));
}

DECLARE_COMPILED_DATA_NS ("chrset.so", chrset_so_data_486c704babc04d1b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("chrset.so", "24d94b311cbf353b")
