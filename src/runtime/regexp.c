/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:50-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define OBJECT_1_1 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_6 9
#define FREE_ASSIGNMENT_1_0 12
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_5)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_1_1]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
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
regexp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto re_registers_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_registers_vector_3)
DEFLABEL (re_registers_vector_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
regexp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto re_registersP_4;

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

DEFLABEL (re_registersP_10)
DEFLABEL (re_registersP_4)
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

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_4_4);
      goto guarantee_re_registers_2;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_re_registers_5)
DEFLABEL (guarantee_re_registers_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_7)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_6;
  Rvl = ((Wrd15.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_9 11
#define EXECUTE_CACHE_5_6 13
#define FREE_REFERENCE_5_0 16
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_5_4);
      goto re_match_start_index_3;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_match_start_index_7)
DEFLABEL (re_match_start_index_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_5_1]))
    goto label_11;
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd13.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd40.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_9)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_8;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd38.Lng))))
    goto label_8;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd29.pObj) = (& ((Wrd36.pObj) [(Wrd26.Lng)]));
  Rvl = ((Wrd29.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_13;
  Wrd16 = Wrd20;

DEFLABEL (label_12)
  Wrd22 = Wrd16;
  Rsp = (& (Rsp [1]));
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 22
#define DEBUGGING_LABEL_6_2 21
#define OBJECT_6_3 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_9 11
#define EXECUTE_CACHE_6_6 13
#define FREE_REFERENCE_6_0 16
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_6_4);
      goto re_match_end_index_4;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_match_end_index_8)
DEFLABEL (re_match_end_index_4)
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
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) + 10L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  if ((Wrd14.Obj) == (current_block [OBJECT_6_1]))
    goto label_12;
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd18.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Wrd27.Obj) = Rvl;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd28.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd45.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_10)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_9;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) (Wrd39.Lng)) < ((unsigned long) (Wrd43.Lng))))
    goto label_9;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd34.pObj) = (& ((Wrd41.pObj) [(Wrd31.Lng)]));
  Rvl = ((Wrd34.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_14;
  Wrd21 = Wrd25;

DEFLABEL (label_13)
  Wrd27 = Wrd21;
  Rsp = (& (Rsp [1]));
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd22.pObj));

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_2 15
#define OBJECT_7_1 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 9
#define EXECUTE_CACHE_7_6 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_re_register_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_re_register_6)
DEFLABEL (guarantee_re_register_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_1]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_10;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd10.Lng) < 10L))
    goto label_7;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (current_block [OBJECT_7_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define ENVIRONMENT_LABEL_8_3 16
#define DEBUGGING_LABEL_8_2 15
#define EXECUTE_CACHE_8_8 9
#define EXECUTE_CACHE_8_7 11
#define FREE_REFERENCE_8_0 14
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto re_registers_1;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_registers_5)
DEFLABEL (re_registers_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define ENVIRONMENT_LABEL_9_3 26
#define DEBUGGING_LABEL_9_2 25
#define OBJECT_9_5 24
#define OBJECT_9_4 23
#define OBJECT_9_3 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_6 15
#define FREE_REFERENCE_9_0 18
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
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
      goto set_re_registersB_9;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto do_loop_6;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_re_registersB_15)
DEFLABEL (set_re_registersB_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_6;

DEFLABEL (do_loop_16)
DEFLABEL (do_loop_6)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == (current_block [OBJECT_9_2])))
    goto label_17;
  Rvl = (current_block [OBJECT_9_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_23;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_23;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_23;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_22)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_21;
  Wrd29 = Wrd33;

DEFLABEL (label_20)
  Wrd28 = Wrd29;
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_19;
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_19;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_19;
  (Wrd41.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd43.pObj) = (& ((Wrd48.pObj) [(Wrd41.Lng)]));
  ((Wrd43.pObj) [1]) = (Wrd35.Obj);

DEFLABEL (label_18)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Rsp [0]) = (Wrd36.Obj);
  goto do_loop_6;

DEFLABEL (label_19)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 3);

DEFLABEL (label_13)
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_9])), (Wrd30.pObj));

DEFLABEL (label_12)
  (Wrd29.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define TAG_10_8 2
#define LABEL_10_10 9
#define ENVIRONMENT_LABEL_10_3 19
#define DEBUGGING_LABEL_10_2 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_12 11
#define EXECUTE_CACHE_10_11 13
#define EXECUTE_CACHE_10_9 15
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto preserving_re_registers_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (preserving_re_registers_7)
DEFLABEL (preserving_re_registers_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_9 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 21
#define DEBUGGING_LABEL_11_2 20
#define OBJECT_11_0 19
#define EXECUTE_CACHE_11_11 11
#define EXECUTE_CACHE_11_10 13
#define EXECUTE_CACHE_11_8 15
#define EXECUTE_CACHE_11_6 17
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto re_match_extract_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_match_extract_7)
DEFLABEL (re_match_extract_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;

DEFLABEL (label_9)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);

DEFLABEL (label_8)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define LABEL_12_10 9
#define LABEL_12_9 11
#define LABEL_12_15 13
#define LABEL_12_13 15
#define LABEL_12_14 17
#define LABEL_12_18 19
#define LABEL_12_20 21
#define ENVIRONMENT_LABEL_12_3 42
#define DEBUGGING_LABEL_12_2 41
#define OBJECT_12_1 40
#define OBJECT_12_0 39
#define EXECUTE_CACHE_12_21 23
#define EXECUTE_CACHE_12_19 25
#define EXECUTE_CACHE_12_17 27
#define EXECUTE_CACHE_12_16 29
#define EXECUTE_CACHE_12_12 31
#define EXECUTE_CACHE_12_11 33
#define EXECUTE_CACHE_12_8 35
#define FREE_REFERENCE_12_0 38
#define FREE_REFERENCES_LABEL_12_0 22
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_substring_operation_13;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_15);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_12_20);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_substring_operation_17)
DEFLABEL (make_substring_operation_13)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x507, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd29.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_24)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [14]);
  if ((Wrd15.Obj) == (current_block [OBJECT_12_1]))
    goto label_21;
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_23;
  Wrd20 = Wrd24;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_15])), (Wrd21.pObj));

DEFLABEL (label_15)
  (Wrd20.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [7]);
  if ((Wrd30.Obj) == (current_block [OBJECT_12_1]))
    goto label_27;
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_3 11
#define OBJECT_13_2 10
#define OBJECT_13_1 9
#define OBJECT_13_0 8
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto make_string_operation_6;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_string_operation_10)
DEFLABEL (make_string_operation_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x305, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  if ((Wrd11.Obj) == (current_block [OBJECT_13_1]))
    goto label_13;
  Wrd13 = Wrd11;
  goto label_12;

DEFLABEL (label_13)
  (Wrd13.Obj) = (current_block [OBJECT_13_2]);

DEFLABEL (label_12)
DEFLABEL (label_19)
  (Rsp [5]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  if ((Wrd14.Obj) == (current_block [OBJECT_13_1]))
    goto label_15;
  Wrd16 = Wrd14;
  goto label_14;

DEFLABEL (label_15)
  (Wrd16.Obj) = (current_block [OBJECT_13_2]);

DEFLABEL (label_14)
DEFLABEL (label_18)
  (Rsp [6]) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_16)
  (Rsp [4]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_17)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_11 15
#define LABEL_14_12 17
#define LABEL_14_13 19
#define LABEL_14_14 21
#define ENVIRONMENT_LABEL_14_3 37
#define DEBUGGING_LABEL_14_2 36
#define OBJECT_14_7 35
#define OBJECT_14_6 34
#define OBJECT_14_5 33
#define OBJECT_14_4 32
#define OBJECT_14_3 31
#define OBJECT_14_2 30
#define OBJECT_14_1 29
#define OBJECT_14_0 28
#define EXECUTE_CACHE_14_7 23
#define FREE_REFERENCE_14_1 26
#define FREE_REFERENCE_14_0 27
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd50;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_14_4);
      goto regexp_group_14;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto loop_10;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_14_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_14_14);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regexp_group_22)
DEFLABEL (regexp_group_14)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == (current_block [OBJECT_14_0])))
    goto label_24;
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_10;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_23)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_14_11);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  if ((Wrd5.Obj) == (Wrd14.Obj))
    goto label_34;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_32)
  goto loop_10;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Wrd50.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = Rvl;

DEFLABEL (label_31)
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_30;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_29)
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 1);

DEFLABEL (label_20)
  (Wrd32.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd30.Obj) = (current_block [OBJECT_14_6]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  goto label_31;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_13 9
#define LABEL_15_12 11
#define LABEL_15_16 13
#define LABEL_15_17 15
#define LABEL_15_9 17
#define LABEL_15_19 19
#define LABEL_15_8 21
#define LABEL_15_10 23
#define LABEL_15_11 25
#define LABEL_15_21 27
#define LABEL_15_22 29
#define LABEL_15_23 31
#define LABEL_15_26 33
#define LABEL_15_27 35
#define LABEL_15_28 37
#define LABEL_15_30 39
#define LABEL_15_33 41
#define LABEL_15_36 43
#define LABEL_15_39 45
#define LABEL_15_24 47
#define LABEL_15_44 49
#define LABEL_15_29 51
#define LABEL_15_45 53
#define LABEL_15_31 55
#define LABEL_15_40 57
#define TAG_15_41 27
#define LABEL_15_42 59
#define TAG_15_43 28
#define LABEL_15_49 61
#define LABEL_15_50 63
#define LABEL_15_51 65
#define LABEL_15_52 67
#define LABEL_15_53 69
#define LABEL_15_54 71
#define LABEL_15_55 73
#define LABEL_15_56 75
#define LABEL_15_57 77
#define LABEL_15_58 79
#define LABEL_15_59 81
#define LABEL_15_60 83
#define LABEL_15_61 85
#define LABEL_15_62 87
#define LABEL_15_63 89
#define LABEL_15_46 91
#define LABEL_15_47 93
#define LABEL_15_37 95
#define TAG_15_38 46
#define LABEL_15_34 97
#define TAG_15_35 47
#define ENVIRONMENT_LABEL_15_3 133
#define DEBUGGING_LABEL_15_2 132
#define OBJECT_15_16 131
#define OBJECT_15_15 130
#define OBJECT_15_14 129
#define OBJECT_15_13 128
#define OBJECT_15_12 127
#define OBJECT_15_11 126
#define OBJECT_15_10 125
#define OBJECT_15_9 124
#define OBJECT_15_8 123
#define OBJECT_15_7 122
#define OBJECT_15_6 121
#define OBJECT_15_5 120
#define OBJECT_15_4 119
#define OBJECT_15_3 118
#define OBJECT_15_2 117
#define OBJECT_15_1 116
#define OBJECT_15_0 115
#define EXECUTE_CACHE_15_48 99
#define EXECUTE_CACHE_15_32 101
#define EXECUTE_CACHE_15_25 103
#define EXECUTE_CACHE_15_20 105
#define EXECUTE_CACHE_15_18 107
#define EXECUTE_CACHE_15_15 109
#define EXECUTE_CACHE_15_14 111
#define EXECUTE_CACHE_15_6 113
#define FREE_REFERENCES_LABEL_15_0 98
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regexp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd133;
  machine_word Wrd128;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd119;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd102;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd148;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd89;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd176;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd160;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      goto char_set__regexp_93;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_95;

    case 3:
      current_block = (Rpc - LABEL_15_13);
      goto label_96;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_89;

    case 6:
      current_block = (Rpc - LABEL_15_17);
      goto label_102;

    case 7:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_15_19);
      goto label_97;

    case 9:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_15_21);
      goto outer_54;

    case 13:
      current_block = (Rpc - LABEL_15_22);
      goto label_98;

    case 14:
      current_block = (Rpc - LABEL_15_23);
      goto label_99;

    case 15:
      current_block = (Rpc - LABEL_15_26);
      goto loop_18;

    case 16:
      current_block = (Rpc - LABEL_15_27);
      goto label_100;

    case 17:
      current_block = (Rpc - LABEL_15_28);
      goto label_101;

    case 18:
      current_block = (Rpc - LABEL_15_30);
      goto pull_86;

    case 19:
      current_block = (Rpc - LABEL_15_33);
      goto continuation_71;

    case 20:
      current_block = (Rpc - LABEL_15_36);
      goto continuation_65;

    case 21:
      current_block = (Rpc - LABEL_15_39);
      goto label_117;

    case 22:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_57;

    case 23:
      current_block = (Rpc - LABEL_15_44);
      goto specialP_83;

    case 24:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_15_45);
      goto label_103;

    case 26:
      current_block = (Rpc - LABEL_15_31);
      goto continuation_84;

    case 27:
      current_block = (Rpc - LABEL_15_40);
      goto lambda_125;

    case 28:
      current_block = (Rpc - LABEL_15_42);
      goto lambda_126;

    case 29:
      current_block = (Rpc - LABEL_15_49);
      goto loop_76;

    case 30:
      current_block = (Rpc - LABEL_15_50);
      goto label_104;

    case 31:
      current_block = (Rpc - LABEL_15_51);
      goto label_105;

    case 32:
      current_block = (Rpc - LABEL_15_52);
      goto label_106;

    case 33:
      current_block = (Rpc - LABEL_15_53);
      goto label_107;

    case 34:
      current_block = (Rpc - LABEL_15_54);
      goto label_108;

    case 35:
      current_block = (Rpc - LABEL_15_55);
      goto loop_38;

    case 36:
      current_block = (Rpc - LABEL_15_56);
      goto label_109;

    case 37:
      current_block = (Rpc - LABEL_15_57);
      goto label_112;

    case 38:
      current_block = (Rpc - LABEL_15_58);
      goto label_116;

    case 39:
      current_block = (Rpc - LABEL_15_59);
      goto label_115;

    case 40:
      current_block = (Rpc - LABEL_15_60);
      goto label_113;

    case 41:
      current_block = (Rpc - LABEL_15_61);
      goto label_114;

    case 42:
      current_block = (Rpc - LABEL_15_62);
      goto label_111;

    case 43:
      current_block = (Rpc - LABEL_15_63);
      goto label_110;

    case 44:
      current_block = (Rpc - LABEL_15_46);
      goto continuation_22;

    case 45:
      current_block = (Rpc - LABEL_15_47);
      goto continuation_85;

    case 46:
      current_block = (Rpc - LABEL_15_37);
      goto lambda_124;

    case 47:
      current_block = (Rpc - LABEL_15_34);
      goto lambda_123;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_set__regexp_119)
DEFLABEL (char_set__regexp_93)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_130;
  Rvl = (current_block [OBJECT_15_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_130)
  if (! ((Wrd7.uLng) == 1))
    goto label_135;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_134)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_131;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_15_1]);
  (Rsp [1]) = (Wrd46.Obj);
  goto outer_54;

DEFLABEL (label_131)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_133;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_132)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_133)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_95)
  (Wrd10.Obj) = Rvl;
  goto label_134;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto pull_86;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto pull_86;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 1)
    goto label_138;

DEFLABEL (label_137)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_136)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_18;

DEFLABEL (label_138)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd9.uLng) == 1))
    goto label_142;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_141)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_15_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_140;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_139)
  (Wrd38.Obj) = (current_block [OBJECT_15_4]);
  (Wrd39.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (label_140)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd5.Obj) = Rvl;
  goto label_136;

DEFLABEL (outer_120)
DEFLABEL (outer_54)
  INTERRUPT_CHECK (26, LABEL_15_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_143;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (label_143)
  if (! ((Wrd6.uLng) == 1))
    goto label_149;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_148)
  (Wrd17.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_147;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_146)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto specialP_83;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_15_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_144;
  goto loop_76;

DEFLABEL (label_144)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_40])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Wrd14 = Wrd8;

DEFLABEL (label_145)
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_42])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_147)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (loop_121)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_15_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_153;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_10]), 1);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15_29);
  (Rsp [0]) = Rvl;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 30))
    goto label_152;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_152;
  (Wrd13.Obj) = (current_block [OBJECT_15_14]);
  ((Wrd18.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd13.Obj)));

DEFLABEL (label_151)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_46]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_38;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15_46);

DEFLABEL (label_150)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_152)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_15_15]);
  (Wrd25.Obj) = (current_block [OBJECT_15_14]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_45]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_103)
  goto label_151;

DEFLABEL (label_153)
  if (! ((Wrd6.uLng) == 1))
    goto label_160;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_159)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_155;
  (Wrd23.Obj) = (current_block [OBJECT_15_9]);
  goto label_154;

DEFLABEL (label_155)
  (Wrd23.Obj) = (current_block [OBJECT_15_8]);

DEFLABEL (label_154)
DEFLABEL (label_158)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd28.Lng) = ((Wrd26.Lng) + (Wrd27.Lng));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_157;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_156)
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_18;

DEFLABEL (label_157)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_101)
  (Wrd29.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_160)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_100)
  (Wrd13.Obj) = Rvl;
  goto label_159;

DEFLABEL (pull_122)
DEFLABEL (pull_86)
  INTERRUPT_CHECK (26, LABEL_15_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_32]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_15_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_161;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_161)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_48]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_15_47);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (specialP_127)
DEFLABEL (specialP_83)
  INTERRUPT_CHECK (26, LABEL_15_44);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_15_4]))
    goto label_163;
  if ((Wrd5.Obj) == (current_block [OBJECT_15_6]))
    goto label_163;
  if ((Wrd5.Obj) == (current_block [OBJECT_15_7]))
    goto label_163;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_162;

DEFLABEL (label_163)
  Rvl = (current_block [OBJECT_15_13]);

DEFLABEL (label_162)
DEFLABEL (label_164)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_125)
  CLOSURE_HEADER (LABEL_15_40);

DEFLABEL (lambda_78)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_50;

DEFLABEL (lambda_126)
  CLOSURE_HEADER (LABEL_15_42);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_166;
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto label_165;

DEFLABEL (label_166)
  Wrd9 = Wrd8;

DEFLABEL (label_165)
DEFLABEL (label_167)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto outer_54;

DEFLABEL (loop_128)
DEFLABEL (loop_76)
  INTERRUPT_CHECK (26, LABEL_15_49);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_172;

DEFLABEL (label_171)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto specialP_83;

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_15_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_170;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_33]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd34.uLng) == 2))
    goto label_169;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd38.uLng)));

DEFLABEL (label_168)
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd44.Lng) = ((Wrd43.Lng) - 1L);
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_12]), 1);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_15_33);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd56.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_34])));
  Rhp += 2;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd56.pObj)));
  Wrd59 = Wrd56;
  ((Wrd59.pObj) [2]) = Rvl;
  (Wrd58.Obj) = (Rsp [0]);
  ((Wrd59.pObj) [3]) = (Wrd58.Obj);
  Wrd14 = Wrd55;
  goto label_145;

DEFLABEL (label_169)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_39]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 1);

DEFLABEL (label_117)
  (Wrd35.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_170)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_37])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  Wrd51 = Wrd48;
  (Wrd52.Obj) = (Rsp [1]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  Wrd14 = Wrd47;
  goto label_145;

DEFLABEL (label_172)
  if (! ((Wrd6.uLng) == 1))
    goto label_182;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_181)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd20.uLng) == 2))
    goto label_180;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd22.uLng)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_179)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 2))
    goto label_178;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd30.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));

DEFLABEL (label_177)
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd40.Lng) = ((Wrd39.Lng) + 1L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (Wrd41.Obj) = (* (Rsp++));
  if (! ((Wrd38.Obj) == (Wrd41.Obj)))
    goto label_171;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_176;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_175)
  (Rsp [1]) = (Wrd42.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_174;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_173)
  (Rsp [0]) = (Wrd51.Obj);
  goto loop_76;

DEFLABEL (label_174)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_54]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_108)
  (Wrd51.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_53]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_107)
  (Wrd42.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_52]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 1);

DEFLABEL (label_106)
  (Wrd30.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_51]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 1);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_50]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_104)
  (Wrd11.Obj) = Rvl;
  goto label_181;

DEFLABEL (loop_129)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_15_55);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_185;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_7]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd29.uLng) == 30)
    goto label_184;

DEFLABEL (label_183)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_184)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_183;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_183;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd17.pChr) = (& ((Wrd25.pChr) [(Wrd14.Lng)]));
  ((Wrd17.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd11.Obj)));
  Rsp = (& (Rsp [4]));
  goto label_150;

DEFLABEL (label_185)
  if (! ((Wrd8.uLng) == 1))
    goto label_203;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_202)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_191;
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 30))
    goto label_190;
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_190;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd71.Lng))))
    goto label_190;
  if (! ((Wrd40.uLng) == 2))
    goto label_190;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  (Wrd59.pChr) = (& ((Wrd69.pChr) [(Wrd56.Lng)]));
  ((Wrd59.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd39.Obj)));

DEFLABEL (label_189)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) + 1L);
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));

DEFLABEL (label_188)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd42.Obj);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_187;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_186)
  (Rsp [0]) = (Wrd46.Obj);
  goto loop_38;

DEFLABEL (label_187)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_63]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_110)
  (Wrd46.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_190)
  (Wrd74.Obj) = (Rsp [4]);
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_62]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_111)
  goto label_189;

DEFLABEL (label_191)
  if (! ((Wrd40.uLng) == 1))
    goto label_201;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [0]);

DEFLABEL (label_200)
  (Wrd169.Obj) = (Rsp [4]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 30))
    goto label_199;
  (Wrd161.Obj) = (Rsp [2]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 26))
    goto label_199;
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [1]);
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  if (! (((unsigned long) (Wrd164.Lng)) < ((unsigned long) (Wrd168.Lng))))
    goto label_199;
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd160.uLng) == 2))
    goto label_199;
  (Wrd155.uLng) = (OBJECT_DATUM (Wrd161.Obj));
  (Wrd158.pChr) = (& ((Wrd166.pChr) [(Wrd155.Lng)]));
  ((Wrd158.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd80.Obj)));

DEFLABEL (label_198)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd92.Lng) = ((Wrd91.Lng) + 1L);
  (Wrd89.Obj) = (LONG_TO_FIXNUM (Wrd92.Lng));
  (Wrd146.Obj) = (Rsp [4]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 30))
    goto label_197;
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd140.uLng) == 26))
    goto label_197;
  Wrd141 = Wrd92;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [1]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  if (! (((unsigned long) (Wrd141.Lng)) < ((unsigned long) (Wrd145.Lng))))
    goto label_197;
  (Wrd134.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd137.pChr) = (& ((Wrd143.pChr) [(Wrd134.Lng)]));
  (Wrd138.Obj) = (current_block [OBJECT_15_6]);
  ((Wrd137.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd138.Obj)));

DEFLABEL (label_196)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_195;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);

DEFLABEL (label_194)
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd107.Lng) = ((Wrd104.Lng) + 2L);
  (Wrd102.Obj) = (LONG_TO_FIXNUM (Wrd107.Lng));
  (Wrd126.Obj) = (Rsp [4]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 30))
    goto label_193;
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd120.uLng) == 26))
    goto label_193;
  Wrd121 = Wrd107;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [1]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) (Wrd121.Lng)) < ((unsigned long) (Wrd125.Lng))))
    goto label_193;
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd119.uLng) == 2))
    goto label_193;
  (Wrd114.uLng) = (OBJECT_DATUM (Wrd102.Obj));
  (Wrd117.pChr) = (& ((Wrd123.pChr) [(Wrd114.Lng)]));
  ((Wrd117.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd93.Obj)));

DEFLABEL (label_192)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd113.Lng) = ((Wrd110.Lng) + 3L);
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));
  goto label_188;

DEFLABEL (label_193)
  (Wrd128.Obj) = (Rsp [4]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_61]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_114)
  goto label_192;

DEFLABEL (label_195)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_60]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_113)
  (Wrd93.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd150.Obj) = (current_block [OBJECT_15_6]);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_59]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_115)
  goto label_196;

DEFLABEL (label_199)
  (Wrd171.Obj) = (Rsp [4]);
  (Wrd172.Obj) = (Rsp [2]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_58]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_16]), 3);

DEFLABEL (label_116)
  goto label_198;

DEFLABEL (label_201)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_57]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_112)
  (Wrd80.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_56]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (lambda_124)
  CLOSURE_HEADER (LABEL_15_37);

DEFLABEL (lambda_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_50;

DEFLABEL (lambda_123)
  CLOSURE_HEADER (LABEL_15_34);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_30 41
#define LABEL_28 43
#define LABEL_34 45
#define LABEL_29 47
#define LABEL_32 49
#define LABEL_37 51
#define LABEL_33 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_38 59
#define LABEL_39 61
#define LABEL_40 63
#define ENVIRONMENT_LABEL_3 110
#define DEBUGGING_LABEL_2 109
#define PURIFICATION_ROOT 108
#define OBJECT_26 107
#define OBJECT_25 106
#define OBJECT_24 105
#define OBJECT_23 104
#define OBJECT_22 103
#define OBJECT_21 102
#define OBJECT_20 101
#define OBJECT_19 100
#define OBJECT_18 99
#define OBJECT_17 98
#define OBJECT_16 97
#define OBJECT_15 96
#define OBJECT_14 95
#define OBJECT_13 94
#define OBJECT_12 93
#define OBJECT_11 92
#define OBJECT_10 91
#define OBJECT_9 90
#define OBJECT_8 89
#define OBJECT_7 88
#define OBJECT_6 87
#define OBJECT_5 86
#define OBJECT_4 85
#define OBJECT_3 84
#define OBJECT_2 83
#define OBJECT_1 82
#define OBJECT_0 81
#define EXECUTE_CACHE_31 65
#define EXECUTE_CACHE_22 67
#define FREE_REFERENCE_3 70
#define FREE_REFERENCE_2 71
#define FREE_REFERENCE_1 72
#define FREE_REFERENCE_0 73
#define GLOBAL_EXECUTE_CACHE_12 75
#define GLOBAL_EXECUTE_CACHE_8 77
#define GLOBAL_EXECUTE_CACHE_5 79
#define FREE_REFERENCES_LABEL_0 64
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
regexp_so_408212a4cc05d86f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_re_registers_34;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto label_30;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_34);
      goto label_31;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_32;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_24;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto label_36;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto label_37;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto expression_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_27)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_39])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_37)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_36)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	0,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	1,
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
      goto label_35;
    blocks = (current_block [OBJECT_26]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_35)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_45;
  Wrd11 = Wrd15;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_43;
  Wrd11 = Wrd15;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_41;
  Wrd11 = Wrd15;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (make_re_registers_34)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_re_registers_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_regexp_so_408212a4cc05d86f [15] =
  {
    { "regexp_so_code_1", 3, regexp_so_code_1 },
    { "regexp_so_code_2", 1, regexp_so_code_2 },
    { "regexp_so_code_3", 4, regexp_so_code_3 },
    { "regexp_so_code_4", 3, regexp_so_code_4 },
    { "regexp_so_code_5", 4, regexp_so_code_5 },
    { "regexp_so_code_6", 4, regexp_so_code_6 },
    { "regexp_so_code_7", 3, regexp_so_code_7 },
    { "regexp_so_code_8", 3, regexp_so_code_8 },
    { "regexp_so_code_9", 6, regexp_so_code_9 },
    { "regexp_so_code_10", 4, regexp_so_code_10 },
    { "regexp_so_code_11", 4, regexp_so_code_11 },
    { "regexp_so_code_12", 10, regexp_so_code_12 },
    { "regexp_so_code_13", 3, regexp_so_code_13 },
    { "regexp_so_code_14", 10, regexp_so_code_14 },
    { "regexp_so_code_15", 48, regexp_so_code_15 }
  };

int
decl_regexp_so_408212a4cc05d86f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_regexp_so_408212a4cc05d86f);
  return (0);
}

DECLARE_COMPILED_CODE ("regexp.so", 31, decl_regexp_so_408212a4cc05d86f, regexp_so_408212a4cc05d86f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_regexp_so_data_408212a4cc05d86f [2985] =
  "\x97\x01\x1d\xab\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x02\x0d"
  "\xb9\x25\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\xc2\xbc\x81\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x83"
  "\x88\x07\xb4\x80\xc1\x0e\xbe\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbf\x1d\xb0\x84\x88\xb4\x81\x0c\x28\x0d\xbc\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\xc2\x1c\x1d\x0d\x1c\xb1\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x1b"
  "\x1d\x0d\x1c\xb1\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x02\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1b\x07\x02\x80\x0d\x1c\xb1\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x0d\x24\x28\xb2"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\xc1\x06\x1d\x80\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x0c\xc1\x1c"
  "\x0c\xc2\x0c\x0c\x08\x0d\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x80\x0f\x07\xc1\xc1\xc1\x81\x83"
  "\x0f\x0f\x82\x0f\x0c\x1b\x08\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x0d\x1b\x2a\x1b\x2a\x99\x0d\x0d\x99\x0d\x0d\x0d\x1c\x0d\x1c"
  "\x1b\x2a\x0d\x1c\xc7\x0d\x1c\xc7\xc7\xb6\x0d\xbe\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\xb4\x17\xb2\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x17\x1b\x0d\xb5\x2a\xc3"
  "\x0d\x1c\x0c\x0d\x08\x88\x08\x0d\xb1\x99\xb3\x2a\x1e\x99\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x28\xb6\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72\x65\x67\x65\x78"
  "\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x15\x0a\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x73\x02\x04\x0c\x6d\x61\x6b\x65\x2d\x76"
  "\x65\x63\x74\x6f\x72\x02\x22\x08\x81\x81\x02\x21\x06\x81\x81\x02"
  "\x20\x04\x82\x02\x07\x11\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x72\x65\x66\x23\x04\x83\x04\x03\x02\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x02"
  "\x27\x0a\x81\x85\x02\x26\x08\x81\x83\x02\x25\x06\x81\x83\x02\x24"
  "\x04\x83\x04\x09\x12\x02\x1d\x72\x65\x67\x75\x6c\x61\x72\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x73\x03\x0e\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x73\x3f\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x09\x03\x2a"
  "\x08\x81\x85\x02\x29\x06\x81\x85\x02\x28\x04\x84\x06\x07\x12\x0a"
  "\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0b\x08\x15\x72"
  "\x65\x2d\x6d\x61\x74\x63\x68\x2d\x73\x74\x61\x72\x74\x2d\x69\x6e"
  "\x64\x65\x78\x0c\x02\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x0d\x04\x17\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x73\x0e\x03\x2e\x0a\x81\x89\x02\x2d\x08\x81\x85"
  "\x02\x2c\x06\x81\x87\x02\x2b\x04\x84\x04\x09\x16\x0f\x02\x0c\x0b"
  "\x08\x13\x72\x65\x2d\x6d\x61\x74\x63\x68\x2d\x65\x6e\x64\x2d\x69"
  "\x6e\x64\x65\x78\x10\x02\x04\x0d\x04\x0e\x03\x32\x0a\x81\x89\x02"
  "\x31\x08\x81\x85\x02\x30\x06\x81\x87\x02\x2f\x04\x84\x04\x09\x17"
  "\x11\x02\x08\x02\x1c\x72\x65\x67\x75\x6c\x61\x72\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x20\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x0b\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x05\x09\x03"
  "\x35\x08\x81\x85\x02\x34\x06\x81\x85\x02\x33\x04\x84\x06\x07\x12"
  "\x09\x02\x09\x02\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70"
  "\x79\x03\x12\x6d\x61\x6b\x65\x2d\x72\x65\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x12\x03\x38\x08\x81\x81\x02\x37\x06\x81\x83\x02"
  "\x36\x04\x82\x02\x07\x11\x13\x02\x0a\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x0b\x15\x12\x73\x65\x74\x2d\x72\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x73\x21\x0b\x02\x04\x0e\x02\x3e\x0e"
  "\x81\x85\x02\x3d\x0c\x81\x87\x02\x3c\x0a\x81\x85\x02\x3b\x08\x81"
  "\x85\x02\x3a\x06\x81\x83\x02\x39\x04\x83\x04\x0d\x1b\x14\x02\x0b"
  "\x02\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x02"
  "\x0d\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x15\x03\x0b"
  "\x04\x42\x0a\x81\x83\x02\x41\x08\x81\x83\x02\x40\x06\x81\x83\x02"
  "\x3f\x04\x83\x04\x09\x14\x16\x02\x0c\x11\x72\x65\x2d\x6d\x61\x74"
  "\x63\x68\x2d\x65\x78\x74\x72\x61\x63\x74\x17\x04\x10\x04\x0c\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x05\x0a\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x05\x46\x0a\x81\x89\x02\x45\x08\x81\x8b\x02\x44"
  "\x06\x81\x87\x02\x43\x04\x85\x08\x09\x16\x18\x02\x0d\x08\x15\x1b"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x63\x68\x61\x72\x2d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x02\x04\x03\x11\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78\x70\x3f\x04\x13"
  "\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70\x61\x74\x74\x65"
  "\x72\x6e\x03\x1a\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x65\x6e\x74\x72\x69\x65\x73\x03\x12\x03"
  "\x22\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78\x70"
  "\x2f\x74\x72\x61\x6e\x73\x6c\x61\x74\x69\x6f\x6e\x2d\x74\x61\x62"
  "\x6c\x65\x03\x1c\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67"
  "\x65\x78\x70\x2f\x62\x79\x74\x65\x2d\x73\x74\x72\x65\x61\x6d\x08"
  "\x50\x16\x81\xa1\x02\x4f\x14\x81\x9f\x02\x4e\x12\x81\x9d\x02\x4d"
  "\x10\x81\x93\x02\x4c\x0e\x81\x9f\x02\x4b\x0c\x81\x91\x02\x4a\x0a"
  "\x81\x93\x02\x49\x08\x81\x8f\x02\x48\x06\x81\x8f\x02\x47\x04\x83"
  "\x04\x15\x2b\x02\x0e\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x08\x53\x08\x81\x8f\x02\x52\x06\x81\x8b\x02\x51\x04"
  "\x83\x04\x07\x0e\x19\x02\x0f\x04\x63\x61\x72\x1a\x03\x5c\x29\x04"
  "\x63\x64\x72\x1b\x03\x5c\x7c\x06\x61\x70\x70\x6c\x79\x03\x5c\x28"
  "\x05\x5c\x28\x5c\x29\x13\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x03\x04\x18\x6c\x69\x73\x74\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65"
  "\x02\x5d\x16\x81\x85\x02\x5c\x14\x81\x85\x02\x5b\x12\x81\x83\x02"
  "\x5a\x10\x81\x83\x02\x59\x0e\x81\x83\x02\x58\x0c\x81\x85\x02\x57"
  "\x0a\x81\x83\x02\x56\x08\x81\x83\x02\x55\x06\x81\x85\x02\x54\x04"
  "\xff\x03\x15\x26\x1c\x02\x10\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73"
  "\x65\x74\x21\x01\x5c\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x63"
  "\x68\x61\x72\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65"
  "\x72\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74"
  "\x65\x01\x5e\x01\x2e\x01\x5f\x01\x1a\x1b\x03\x11\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\x03\x07\x73\x74"
  "\x72\x69\x6e\x67\x03\x10\x72\x65\x2d\x71\x75\x6f\x74\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x04\x05"
  "\x65\x71\x76\x3f\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x04\x05"
  "\x6d\x65\x6d\x76\x04\x06\x64\x65\x6c\x76\x21\x09\x8d\x01\x62\x81"
  "\x85\x02\x8c\x01\x60\x81\x85\x02\x8b\x01\x5e\x81\x85\x02\x8a\x01"
  "\x5c\x81\x85\x02\x89\x01\x5a\x81\x85\x02\x88\x01\x58\x81\x87\x02"
  "\x87\x01\x56\x81\x87\x02\x86\x01\x54\x81\x87\x02\x85\x01\x52\x81"
  "\x87\x02\x84\x01\x50\x81\x87\x02\x83\x01\x4e\x81\x87\x02\x82\x01"
  "\x4c\x81\x85\x02\x81\x01\x4a\x81\x85\x02\x80\x01\x48\x81\x8b\x02"
  "\x7f\x46\x81\x8b\x02\x7e\x44\x81\x8d\x02\x7d\x42\x81\x8b\x02\x7c"
  "\x40\x81\x8b\x02\x7b\x3e\x81\x8b\x02\x7a\x3c\x81\x87\x02\x79\x3a"
  "\x81\x85\x02\x78\x38\x81\x85\x02\x77\x36\x81\x85\x02\x76\x34\x81"
  "\x85\x02\x75\x32\x81\x83\x02\x74\x30\x81\x8b\x02\x73\x2e\x81\x8d"
  "\x02\x72\x2c\x81\x8b\x02\x71\x2a\x81\x8b\x02\x70\x28\x81\x85\x02"
  "\x6f\x26\x81\x87\x02\x6e\x24\x81\x87\x02\x6d\x22\x81\x87\x02\x6c"
  "\x20\x81\x89\x02\x6b\x1e\x81\x85\x02\x6a\x1c\x81\x85\x02\x69\x1a"
  "\x81\x89\x02\x68\x18\x81\x87\x02\x67\x16\x81\x83\x02\x66\x14\x81"
  "\x87\x02\x65\x12\x81\x85\x02\x64\x10\x81\x83\x02\x63\x0e\x81\x83"
  "\x02\x62\x0c\x81\x83\x02\x61\x0a\x81\x85\x02\x60\x08\x81\x83\x02"
  "\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x61\x86\x01\x1b\x10\x1a\x1a"
  "\x1a\x72\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x61\x72\x63"
  "\x68\x2d\x62\x61\x63\x6b\x77\x61\x72\x64\x1b\x04\x1c\x04\x11\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x2d\x3e\x72\x65\x67\x65\x78\x70\x0d"
  "\x72\x65\x67\x65\x78\x70\x2d\x67\x72\x6f\x75\x70\x19\x72\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x61\x72\x63\x68\x2d\x66\x6f"
  "\x72\x77\x61\x72\x64\x10\x72\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x61\x74\x63\x68\x1d\x72\x65\x2d\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x2d\x73\x65\x61\x72\x63\x68\x2d\x62\x61\x63\x6b\x77\x61"
  "\x72\x64\x1c\x16\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x1b\x19\x04\x1c\x72\x65\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x61\x72\x63\x68"
  "\x2d\x66\x6f\x72\x77\x61\x72\x64\x1a\x1d\x72\x65\x2d\x73\x65\x61"
  "\x72\x63\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x62\x61"
  "\x63\x6b\x77\x61\x72\x64\x13\x72\x65\x2d\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6d\x61\x74\x63\x68\x19\x1c\x72\x65\x2d\x73\x65"
  "\x61\x72\x63\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66"
  "\x6f\x72\x77\x61\x72\x64\x13\x72\x65\x2d\x6d\x61\x74\x63\x68\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x19\x6d\x61\x6b\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x17\x18\x70\x72\x65\x73\x65\x72\x76\x69\x6e\x67\x2d\x72"
  "\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x0b\x15\x0d\x10\x0c"
  "\x0e\x0b\x04\x18\x04\x16\x04\x14\x04\x13\x04\x09\x04\x11\x04\x0f"
  "\x04\x0a\x04\x04\x0b\x12\x14\x72\x65\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x73\x2d\x76\x65\x63\x74\x6f\x72\x04\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x3c\x72\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x3e\x18\x0d\x72\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x07\x76\x65\x63\x74\x6f\x72"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x21\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x67\x04\x18\x19\x1a\x1c\x05\x03\x03\x1b\x03\x1f\x40\x80\x80"
  "\x04\x1e\x3e\x81\x81\x02\x1d\x3c\x81\x81\x02\x1c\x3a\x81\x85\x02"
  "\x1b\x38\x81\x83\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x87\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x87\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x83\x02\x12\x26\x81"
  "\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83"
  "\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02"
  "\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08"
  "\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\x3f\x6f";

SCHEME_OBJECT *
regexp_so_data_408212a4cc05d86f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_regexp_so_data_408212a4cc05d86f [0]))), (sizeof (prog_regexp_so_data_408212a4cc05d86f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_40]));
}

DECLARE_COMPILED_DATA_NS ("regexp.so", regexp_so_data_408212a4cc05d86f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("regexp.so", "d46d3e717156bcb1")
