/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:47-07 by Liar version 4.118. */

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
partab_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_table_initial_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_table_initial_3)
DEFLABEL (parser_table_initial_0)
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
partab_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_table_special_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_table_special_3)
DEFLABEL (parser_table_special_0)
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
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_3 15
#define OBJECT_3_2 14
#define OBJECT_3_1 13
#define OBJECT_3_0 12
#define FREE_REFERENCE_3_0 11
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto parser_tableP_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_tableP_10)
DEFLABEL (parser_tableP_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
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
  Rvl = (current_block [OBJECT_3_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_4 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define ENVIRONMENT_LABEL_4_3 22
#define DEBUGGING_LABEL_4_2 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_10 13
#define EXECUTE_CACHE_4_9 15
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_4_4);
      goto make_parser_table_8;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_parser_table_13)
DEFLABEL (make_parser_table_8)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_6);

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_16;

DEFLABEL (label_15)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_5);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_16)
  if (! ((Wrd26.uLng) == 10))
    goto label_18;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd33.Obj) = (MAKE_OBJECT (26, (Wrd37.uLng)));

DEFLABEL (label_17)
  if ((Wrd33.Obj) == (current_block [OBJECT_4_1]))
    goto label_14;
  goto label_15;

DEFLABEL (label_18)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_11)
  (Wrd33.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  if (! ((Wrd6.uLng) == 10))
    goto label_23;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_22)
  if ((Wrd13.Obj) == (current_block [OBJECT_4_1]))
    goto label_19;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
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
partab_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_parser_table_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_parser_table_4)
DEFLABEL (guarantee_parser_table_1)
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
partab_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_parser_table_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_parser_table_5)
DEFLABEL (error_not_parser_table_2)
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
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_9 9
#define LABEL_7_8 11
#define ENVIRONMENT_LABEL_7_3 21
#define DEBUGGING_LABEL_7_2 20
#define OBJECT_7_2 19
#define OBJECT_7_1 18
#define OBJECT_7_0 17
#define EXECUTE_CACHE_7_10 13
#define EXECUTE_CACHE_7_7 15
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto parser_table_copy_4;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_table_copy_9)
DEFLABEL (parser_table_copy_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_7_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define ENVIRONMENT_LABEL_8_3 14
#define DEBUGGING_LABEL_8_2 13
#define OBJECT_8_1 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto parser_table_entry_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_table_entry_5)
DEFLABEL (parser_table_entry_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_7;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define TAG_9_8 2
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_9_4);
      goto parser_table_set_entryB_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_table_set_entryB_5)
DEFLABEL (parser_table_set_entryB_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_8)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_7;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_7;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  (Wrd15.pObj) = (& ((Wrd23.pObj) [(Wrd12.Lng)]));
  ((Wrd15.pObj) [1]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_14 15
#define LABEL_10_15 17
#define LABEL_10_16 19
#define LABEL_10_17 21
#define LABEL_10_18 23
#define TAG_10_19 10
#define LABEL_10_12 25
#define TAG_10_13 11
#define LABEL_10_7 27
#define TAG_10_8 12
#define ENVIRONMENT_LABEL_10_3 42
#define DEBUGGING_LABEL_10_2 41
#define OBJECT_10_9 40
#define OBJECT_10_8 39
#define OBJECT_10_7 38
#define OBJECT_10_6 37
#define OBJECT_10_5 36
#define OBJECT_10_4 35
#define OBJECT_10_3 34
#define OBJECT_10_2 33
#define OBJECT_10_1 32
#define OBJECT_10_0 31
#define EXECUTE_CACHE_10_20 29
#define FREE_REFERENCES_LABEL_10_0 28
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
partab_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd96;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd150;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd149;
  machine_word Wrd142;
  machine_word Wrd145;
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
      current_block = (Rpc - LABEL_10_4);
      goto decode_key_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_10_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_10_18);
      goto lambda_36;

    case 11:
      current_block = (Rpc - LABEL_10_12);
      goto lambda_35;

    case 12:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_key_33)
DEFLABEL (decode_key_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_56;
  if ((Wrd6.uLng) == 30)
    goto label_49;

DEFLABEL (label_48)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 30)
    goto label_38;

DEFLABEL (label_37)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_9]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_38)
  if (! ((Wrd10.uLng) == 30))
    goto label_47;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_46)
  if (! ((Wrd13.Obj) == (current_block [OBJECT_10_6])))
    goto label_37;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_45;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd35.Lng))))
    goto label_45;
  (Wrd29.uLng) = ((unsigned long) (((unsigned char *) (Wrd33.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd25.Obj) = (MAKE_OBJECT (2, (Wrd29.uLng)));

DEFLABEL (label_44)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_10_8])))
    goto label_37;
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 30))
    goto label_43;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_43;
  (Wrd48.uLng) = ((unsigned long) (((unsigned char *) (Wrd52.pChr)) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd44.Obj) = (MAKE_OBJECT (26, (Wrd48.uLng)));

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd44.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_41;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd70.Lng))))
    goto label_41;
  (Wrd62.Obj) = ((Wrd68.pObj) [3]);

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_18])));
  Rhp += 2;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  Wrd83 = Wrd80;
  (Wrd84.Obj) = (Rsp [1]);
  ((Wrd83.pObj) [2]) = (Wrd84.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  ((Wrd83.pObj) [3]) = (Wrd82.Obj);
  Rvl = (Wrd79.Obj);

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (current_block [OBJECT_10_6]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_26)
  (Wrd62.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_10_1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_25)
  (Wrd44.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_10_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_24)
  (Wrd25.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_23)
  (Wrd13.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  if (! ((Wrd6.uLng) == 30))
    goto label_55;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [1]);
  (Wrd86.Obj) = (MAKE_OBJECT (26, (Wrd90.uLng)));

DEFLABEL (label_54)
  if (! ((Wrd86.Obj) == (current_block [OBJECT_10_1])))
    goto label_48;
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 30))
    goto label_53;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [1]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd108.Lng))))
    goto label_53;
  (Wrd102.uLng) = ((unsigned long) (((unsigned char *) (Wrd106.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd98.Obj) = (MAKE_OBJECT (26, (Wrd102.uLng)));

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd98.Obj);
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_51;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd124.Lng))))
    goto label_51;
  (Wrd116.Obj) = ((Wrd122.pObj) [2]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd116.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd134.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_12])));
  Rhp += 2;
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd134.pObj)));
  Wrd137 = Wrd134;
  (Wrd138.Obj) = (Rsp [1]);
  ((Wrd137.pObj) [2]) = (Wrd138.Obj);
  (Wrd136.Obj) = (Rsp [0]);
  ((Wrd137.pObj) [3]) = (Wrd136.Obj);
  Rvl = (Wrd133.Obj);
  goto label_39;

DEFLABEL (label_51)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (current_block [OBJECT_10_1]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_29)
  (Wrd116.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (current_block [OBJECT_10_4]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_28)
  (Wrd98.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_27)
  (Wrd86.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  if (! ((Wrd6.uLng) == 2))
    goto label_60;
  (Wrd145.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd142.Obj) = (MAKE_OBJECT (26, (Wrd145.uLng)));

DEFLABEL (label_59)
  (Rsp [2]) = (Wrd142.Obj);
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd160.uLng) == 62))
    goto label_58;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [0]);
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd158.Lng))))
    goto label_58;
  (Wrd150.Obj) = ((Wrd156.pObj) [2]);

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd150.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd168.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 2;
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd168.pObj)));
  Wrd171 = Wrd168;
  (Wrd172.Obj) = (Rsp [1]);
  ((Wrd171.pObj) [2]) = (Wrd172.Obj);
  (Wrd170.Obj) = (Rsp [0]);
  ((Wrd171.pObj) [3]) = (Wrd170.Obj);
  Rvl = (Wrd167.Obj);
  goto label_39;

DEFLABEL (label_58)
  (Wrd161.Obj) = (Rsp [0]);
  (Wrd162.Obj) = (current_block [OBJECT_10_1]);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_31)
  (Wrd150.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_30)
  (Wrd142.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_10_18);

DEFLABEL (lambda_11)
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
  CLOSURE_HEADER (LABEL_10_12);

DEFLABEL (lambda_15)
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

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_19)
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
#define ENVIRONMENT_LABEL_3 51
#define DEBUGGING_LABEL_2 50
#define PURIFICATION_ROOT 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_12 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
partab_so_e3f9d306cdfde058 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_parser_table_17;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_13)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_20)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_19)
  {
    static const short sections [] =
      {
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 10)
      goto label_18;
    blocks = (current_block [OBJECT_11]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_18)
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
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_24;
  Wrd11 = Wrd15;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
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

DEFLABEL (continuation_8)
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

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_22;
  Wrd11 = Wrd15;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (Z__make_parser_table_17)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_parser_table_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_partab_so_e3f9d306cdfde058 [10] =
  {
    { "partab_so_code_1", 1, partab_so_code_1 },
    { "partab_so_code_2", 1, partab_so_code_2 },
    { "partab_so_code_3", 4, partab_so_code_3 },
    { "partab_so_code_4", 5, partab_so_code_4 },
    { "partab_so_code_5", 2, partab_so_code_5 },
    { "partab_so_code_6", 1, partab_so_code_6 },
    { "partab_so_code_7", 5, partab_so_code_7 },
    { "partab_so_code_8", 3, partab_so_code_8 },
    { "partab_so_code_9", 3, partab_so_code_9 },
    { "partab_so_code_10", 13, partab_so_code_10 }
  };

int
decl_partab_so_e3f9d306cdfde058 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_partab_so_e3f9d306cdfde058);
  return (0);
}

DECLARE_COMPILED_CODE ("partab.so", 13, decl_partab_so_e3f9d306cdfde058, partab_so_e3f9d306cdfde058)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_partab_so_data_e3f9d306cdfde058 [1319] =
  "\x37\x15\xc0\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81\x22"
  "\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e\x2b"
  "\xbb\x1d\xb0\x83\x88\x07\xb1\x80\xc1\x0e\xbc\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x0c\x0d\xbe\x02"
  "\xc1\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb1"
  "\x81\x28\x0d\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1d\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0f\xc2\x82\xc2\x80\xc1\xb1\x81\xc1\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb9\x88"
  "\xb1\xb4\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb5\x2a\x9f\x1b\x1b\x1b\x0d\x1b\x0d\xb6\x1b\x9f\xb7\x0d\x0d\x99"
  "\xb3\x2a\xb2\x2a\x99\xc3\x0d\x1c\x0c\x0d\x0d\x08\x89\x08\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70"
  "\x61\x72\x74\x61\x62\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0e\x04\x83\x04\x03"
  "\x02\x0f\x04\x83\x04\x03\x02\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x02\x13\x0a"
  "\x81\x85\x02\x12\x08\x81\x83\x02\x11\x06\x81\x83\x02\x10\x04\x83"
  "\x04\x09\x12\x02\x10\x64\x69\x73\x70\x61\x74\x63\x68\x20\x76\x65"
  "\x63\x74\x6f\x72\x12\x6d\x61\x6b\x65\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x74\x61\x62\x6c\x65\x81\x02\x0e\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x04\x13\x25\x6d\x61\x6b\x65\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x09\x03\x18\x0c\x81\x85\x02\x17\x0a\x81\x85"
  "\x02\x16\x08\x84\x06\x15\x06\x81\x85\x02\x14\x04\x81\x85\x02\x0b"
  "\x17\x0a\x02\x02\x03\x0e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62"
  "\x6c\x65\x3f\x0b\x04\x17\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x0c\x03\x1a\x06"
  "\x81\x85\x02\x19\x04\x84\x04\x05\x0e\x0d\x02\x08\x0d\x70\x61\x72"
  "\x73\x65\x72\x20\x74\x61\x62\x6c\x65\x05\x09\x02\x1b\x04\x84\x04"
  "\x03\x0c\x0e\x02\x08\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f"
  "\x70\x79\x04\x03\x20\x0c\x81\x85\x02\x1f\x0a\x81\x87\x02\x1e\x08"
  "\x81\x83\x02\x1d\x06\x81\x85\x02\x1c\x04\x83\x04\x0b\x16\x0f\x02"
  "\x09\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x13\x70\x61\x72"
  "\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x65\x6e\x74\x72\x79\x10"
  "\x05\x0b\x64\x65\x63\x6f\x64\x65\x2d\x6b\x65\x79\x11\x02\x23\x08"
  "\x84\x06\x22\x06\x81\x85\x02\x21\x04\x84\x06\x07\x0f\x12\x02\x0a"
  "\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x18\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x73\x65\x74\x2d\x65"
  "\x6e\x74\x72\x79\x21\x13\x05\x11\x02\x26\x08\x81\x87\x02\x25\x06"
  "\x81\x87\x02\x24\x04\x85\x08\x07\x10\x14\x02\x0b\x11\x70\x61\x72"
  "\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x20\x6b\x65\x79\x01\x24\x0b"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x38\x62\x2d\x72\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74"
  "\x65\x67\x65\x72\x05\x09\x02\x33\x1c\x81\x85\x02\x32\x1a\x81\x85"
  "\x02\x31\x18\x81\x85\x02\x30\x16\x81\x87\x02\x2f\x14\x81\x87\x02"
  "\x2e\x12\x81\x87\x02\x2d\x10\x81\x87\x02\x2c\x0e\x81\x87\x02\x2b"
  "\x0c\x81\x87\x02\x2a\x0a\x81\x87\x02\x29\x08\x81\x87\x02\x28\x06"
  "\x81\x87\x02\x27\x04\x85\x08\x1b\x2b\x09\x0b\x09\x04\x14\x04\x12"
  "\x04\x0f\x04\x0e\x04\x0d\x04\x0a\x08\x04\x11\x13\x10\x12\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x63\x6f\x70\x79\x0c"
  "\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x74\x61\x62\x6c\x65\x0b\x15\x70\x61\x72\x73\x65\x72\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x73\x70\x65\x63\x69\x61\x6c\x15\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x69\x6e\x69\x74\x69"
  "\x61\x6c\x04\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x11\x72\x74\x64\x3a\x70\x61\x72\x73\x65\x72"
  "\x2d\x74\x61\x62\x6c\x65\x14\x0d\x70\x61\x72\x73\x65\x72\x2d\x74"
  "\x61\x62\x6c\x65\x08\x69\x6e\x69\x74\x69\x61\x6c\x08\x73\x70\x65"
  "\x63\x69\x61\x6c\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x04\x14\x02\x0d\x1c\x80\x80\x04\x0c\x1a\x81\x81\x02\x0b\x18"
  "\x81\x81\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81"
  "\x87\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02"
  "\x01\x04\x81\x83\x02\x1b\x34";

SCHEME_OBJECT *
partab_so_data_e3f9d306cdfde058 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_partab_so_data_e3f9d306cdfde058 [0]))), (sizeof (prog_partab_so_data_e3f9d306cdfde058)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("partab.so", partab_so_data_e3f9d306cdfde058)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("partab.so", "8a89eeb3ce0ce786")
