/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:48-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define OBJECT_1_0 18
#define EXECUTE_CACHE_1_8 11
#define FREE_REFERENCE_1_1 14
#define FREE_REFERENCE_1_0 15
#define FREE_ASSIGNMENT_1_0 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_7)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Wrd15.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_10)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_9;
  Wrd28 = Wrd32;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd29.pObj));

DEFLABEL (label_5)
  (Wrd28.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_12)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_6])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_4)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCE_2_0 14
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto initialize_unparserB_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_unparserB_5)
DEFLABEL (initialize_unparserB_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto canonicalize_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_4)
DEFLABEL (canonicalize_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;
  Wrd10 = Wrd14;

DEFLABEL (label_7)
  Rvl = (Wrd10.Obj);
  goto label_5;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd11.pObj));

DEFLABEL (label_2)
  (Wrd10.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 9
#define DEBUGGING_LABEL_4_2 8
#define FREE_REFERENCE_4_0 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto uncanonicalize_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncanonicalize_5)
DEFLABEL (uncanonicalize_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_7;
  Rvl = (Wrd12.Obj);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_3 13
#define OBJECT_5_2 12
#define OBJECT_5_1 11
#define OBJECT_5_0 10
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto gc_populationB_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_populationB_14)
DEFLABEL (gc_populationB_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_17;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_8;

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_1])))
    goto label_18;
  Rvl = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.Obj) = ((Wrd8.pObj) [1]);
  (Rsp [1]) = (Wrd19.Obj);
  goto loop_8;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define EXECUTE_CACHE_6_10 13
#define EXECUTE_CACHE_6_7 15
#define FREE_REFERENCE_6_1 18
#define FREE_REFERENCE_6_0 19
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto gc_all_populationsB_1;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_all_populationsB_7)
DEFLABEL (gc_all_populationsB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_6 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_0 16
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCE_7_1 14
#define FREE_REFERENCE_7_0 15
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_population_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_population_8)
DEFLABEL (make_population_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_10;
  Wrd20 = Wrd24;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd21.pObj));

DEFLABEL (label_6)
  (Wrd20.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_1 11
#define OBJECT_8_0 10
#define FREE_REFERENCE_8_0 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_8_4);
      goto populationP_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (populationP_7)
DEFLABEL (populationP_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_11)
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd24.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_8_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_5 9
#define ENVIRONMENT_LABEL_9_3 18
#define DEBUGGING_LABEL_9_2 17
#define OBJECT_9_4 16
#define OBJECT_9_3 15
#define OBJECT_9_2 14
#define OBJECT_9_1 13
#define OBJECT_9_0 12
#define FREE_REFERENCE_9_0 11
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_9_4);
      goto add_to_populationB_unsafe_3;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_populationB_unsafe_8)
DEFLABEL (add_to_populationB_unsafe_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_15;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_10)
  (Wrd20.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_9;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd8.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_9_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 2);

DEFLABEL (label_11)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_13;
  Wrd21 = Wrd25;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd22.pObj));

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_8 15
#define ENVIRONMENT_LABEL_10_3 26
#define DEBUGGING_LABEL_10_2 25
#define OBJECT_10_6 24
#define OBJECT_10_5 23
#define OBJECT_10_4 22
#define OBJECT_10_3 21
#define OBJECT_10_2 20
#define OBJECT_10_1 19
#define OBJECT_10_0 18
#define FREE_REFERENCE_10_0 17
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      goto add_to_populationB_14;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_populationB_20)
DEFLABEL (add_to_populationB_14)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_24)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_11;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_27;
  Wrd18 = Wrd22;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd19.pObj));

DEFLABEL (label_17)
  (Wrd18.Obj) = Rvl;
  goto label_26;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_10_7);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_10_1]))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [4]);
  if ((Wrd15.Obj) == (Wrd12.Obj))
    goto label_29;
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_10_5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_33;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [1]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_10_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 2);

DEFLABEL (label_33)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_3 17
#define OBJECT_11_2 16
#define OBJECT_11_1 15
#define OBJECT_11_0 14
#define FREE_REFERENCE_11_0 13
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      goto remove_from_populationB_12;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_from_populationB_17)
DEFLABEL (remove_from_populationB_12)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_21)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_9;

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_24;
  Wrd18 = Wrd22;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd19.pObj));

DEFLABEL (label_15)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_1])))
    goto label_25;
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (label_27)
  (Wrd15.Obj) = (Rsp [4]);
  if ((Wrd15.Obj) == (Wrd12.Obj))
    goto label_26;
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_10 13
#define LABEL_12_9 15
#define ENVIRONMENT_LABEL_12_3 22
#define DEBUGGING_LABEL_12_2 21
#define OBJECT_12_2 20
#define OBJECT_12_1 19
#define OBJECT_12_0 18
#define FREE_REFERENCE_12_0 17
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto map_over_population_15;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_over_population_20)
DEFLABEL (map_over_population_15)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_13;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  DLINK_INTERRUPT_CHECK (25, LABEL_12_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_12_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_24;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_13;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd23.Obj) = ((Wrd16.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_29;
  Wrd15 = Wrd23;

DEFLABEL (label_28)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);
  if ((Wrd25.Obj) == (Wrd15.Obj))
    goto label_26;
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_27)
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_10])), (Wrd16.pObj));

DEFLABEL (label_18)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  (Rsp [1]) = (Wrd7.Obj);
  goto loop_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_9 9
#define LABEL_13_7 11
#define LABEL_13_8 13
#define ENVIRONMENT_LABEL_13_3 21
#define DEBUGGING_LABEL_13_2 20
#define OBJECT_13_3 19
#define OBJECT_13_2 18
#define OBJECT_13_1 17
#define OBJECT_13_0 16
#define FREE_REFERENCE_13_0 15
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto map_over_populationB_14;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_over_populationB_19)
DEFLABEL (map_over_populationB_14)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_12;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_13_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_1])))
    goto label_23;
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_29;
  Wrd22 = Wrd26;

DEFLABEL (label_28)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_26;
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_25;

DEFLABEL (label_26)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_27)
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd23.pObj));

DEFLABEL (label_17)
  (Wrd22.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_9 9
#define LABEL_14_7 11
#define LABEL_14_8 13
#define ENVIRONMENT_LABEL_14_3 21
#define DEBUGGING_LABEL_14_2 20
#define OBJECT_14_3 19
#define OBJECT_14_2 18
#define OBJECT_14_1 17
#define OBJECT_14_0 16
#define FREE_REFERENCE_14_0 15
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto for_all_inhabitantsP_14;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_all_inhabitantsP_19)
DEFLABEL (for_all_inhabitantsP_14)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_12;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_14_1])))
    goto label_23;
  Rvl = (current_block [OBJECT_14_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_30;
  Wrd22 = Wrd26;

DEFLABEL (label_29)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_26;
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_25;

DEFLABEL (label_26)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_28)
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_12;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_9])), (Wrd23.pObj));

DEFLABEL (label_17)
  (Wrd22.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_9 9
#define LABEL_15_7 11
#define LABEL_15_8 13
#define ENVIRONMENT_LABEL_15_3 20
#define DEBUGGING_LABEL_15_2 19
#define OBJECT_15_2 18
#define OBJECT_15_1 17
#define OBJECT_15_0 16
#define FREE_REFERENCE_15_0 15
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
poplat_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_15_4);
      goto exists_an_inhabitantP_15;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exists_an_inhabitantP_20)
DEFLABEL (exists_an_inhabitantP_15)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_13;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_15_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_1])))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_31;
  Wrd22 = Wrd26;

DEFLABEL (label_30)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_27;
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_9])), (Wrd23.pObj));

DEFLABEL (label_18)
  (Wrd22.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
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
poplat_so_d0b5eb0c1b870e47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	2,
	2,
	0,
	1,
	1,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
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

static const struct liarc_code_S arr_decl_poplat_so_d0b5eb0c1b870e47 [15] =
  {
    { "poplat_so_code_1", 4, poplat_so_code_1 },
    { "poplat_so_code_2", 3, poplat_so_code_2 },
    { "poplat_so_code_3", 2, poplat_so_code_3 },
    { "poplat_so_code_4", 2, poplat_so_code_4 },
    { "poplat_so_code_5", 4, poplat_so_code_5 },
    { "poplat_so_code_6", 5, poplat_so_code_6 },
    { "poplat_so_code_7", 4, poplat_so_code_7 },
    { "poplat_so_code_8", 3, poplat_so_code_8 },
    { "poplat_so_code_9", 4, poplat_so_code_9 },
    { "poplat_so_code_10", 7, poplat_so_code_10 },
    { "poplat_so_code_11", 5, poplat_so_code_11 },
    { "poplat_so_code_12", 7, poplat_so_code_12 },
    { "poplat_so_code_13", 6, poplat_so_code_13 },
    { "poplat_so_code_14", 6, poplat_so_code_14 },
    { "poplat_so_code_15", 6, poplat_so_code_15 }
  };

int
decl_poplat_so_d0b5eb0c1b870e47 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_poplat_so_d0b5eb0c1b870e47);
  return (0);
}

DECLARE_COMPILED_CODE ("poplat.so", 3, decl_poplat_so_d0b5eb0c1b870e47, poplat_so_d0b5eb0c1b870e47)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_poplat_so_data_d0b5eb0c1b870e47 [1564] =
  "\x27\x1a\xb3\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d\xb9\x25"
  "\x0d\xba\x0d\xbb\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x0d\xbd\xb2\x24\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x0d"
  "\xbf\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb7\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\x07\x08"
  "\xc1\x1c\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\xb1\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb2"
  "\xb1\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\xb2\x24\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1d\xc3\x1c\x02\x1b\xb7"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x1b\x1b\x02\x08\x1b\xb7\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x08\x1b\xb7\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\xb7\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x07\x08\x1b\xb7\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x08"
  "\x1b\xb7\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\xb7\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\xb5\x08\x88\xb7"
  "\x08\x88\xb6\x2a\xb4\x2a\x17\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\x0d"
  "\xb1\xb3\x1b\x0d\x0d\x0d\xb2\xb7\x0d\x0d\x17\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x70\x6f\x70\x6c\x61\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x1a\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x2d\x6f\x66"
  "\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x73\x02\x0f\x70\x6f"
  "\x70\x75\x6c\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x14\x67\x63\x2d"
  "\x61\x6c\x6c\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x73\x21"
  "\x03\x03\x19\x61\x64\x64\x2d\x73\x65\x63\x6f\x6e\x64\x61\x72\x79"
  "\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x02\x07\x0a\x81\x81"
  "\x02\x06\x08\x81\x81\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x09"
  "\x15\x02\x0b\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x02\x04\x19"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x21\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2f\x73\x65\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x70\x61"
  "\x69\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x03\x0a\x08\x81\x83\x02"
  "\x09\x06\x81\x81\x02\x08\x04\x82\x02\x07\x12\x02\x0c\x62\x6f\x67"
  "\x75\x73\x2d\x66\x61\x6c\x73\x65\x02\x0c\x06\x81\x83\x02\x0b\x04"
  "\x83\x04\x05\x0a\x09\x02\x02\x0e\x06\x81\x83\x02\x0d\x04\x83\x04"
  "\x05\x0a\x0a\x02\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72"
  "\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x0b\x04\x63\x64\x72\x0c\x12"
  "\x0a\x81\x85\x02\x11\x08\x81\x85\x02\x10\x06\x81\x85\x02\x0f\x04"
  "\x83\x04\x09\x10\x0d\x02\x0f\x67\x63\x2d\x70\x6f\x70\x75\x6c\x61"
  "\x74\x69\x6f\x6e\x21\x0e\x03\x03\x0e\x04\x15\x6d\x61\x70\x2d\x6f"
  "\x76\x65\x72\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21\x0f"
  "\x03\x17\x0c\x81\x83\x02\x16\x0a\x81\x81\x02\x15\x08\x81\x81\x02"
  "\x14\x06\x81\x83\x02\x13\x04\x82\x02\x0b\x16\x10\x02\x08\x03\x04"
  "\x13\x61\x64\x64\x2d\x74\x6f\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69"
  "\x6f\x6e\x21\x11\x02\x1b\x0a\x81\x83\x02\x1a\x08\x81\x87\x02\x19"
  "\x06\x81\x81\x02\x18\x04\x82\x02\x09\x13\x12\x02\x09\x04\x63\x61"
  "\x72\x02\x1e\x08\x81\x85\x02\x1d\x06\x81\x83\x02\x1c\x04\x83\x04"
  "\x07\x0e\x13\x02\x0a\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x14\x02"
  "\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e"
  "\x73\x15\x38\x0c\x02\x22\x0a\x81\x85\x02\x21\x08\x81\x89\x02\x20"
  "\x06\x81\x87\x02\x1f\x04\x84\x06\x09\x13\x16\x02\x0b\x14\x02\x0b"
  "\x15\x38\x0c\x02\x29\x10\x81\x8b\x02\x28\x0e\x81\x8f\x02\x27\x0c"
  "\x81\x8d\x02\x26\x0a\x81\x8b\x02\x25\x08\x81\x87\x02\x24\x06\x81"
  "\x85\x02\x23\x04\x84\x06\x0f\x1b\x15\x02\x0c\x0b\x02\x0c\x02\x2e"
  "\x0c\x81\x8f\x02\x2d\x0a\x81\x8b\x02\x2c\x08\x81\x87\x02\x2b\x06"
  "\x81\x85\x02\x2a\x04\x84\x06\x0b\x14\x14\x02\x0d\x0b\x0c\x02\x35"
  "\x10\xfd\xff\x03\x34\x0e\xfd\xff\x03\x33\x0c\xfd\xff\x03\x32\x0a"
  "\xfd\xff\x03\x31\x08\xff\xff\x03\x30\x06\x81\x87\x02\x2f\x04\x84"
  "\x06\x0f\x17\x17\x02\x0e\x0b\x0c\x02\x3b\x0e\x81\x89\x02\x3a\x0c"
  "\x81\x89\x02\x39\x0a\x81\x8b\x02\x38\x08\x81\x89\x02\x37\x06\x81"
  "\x85\x02\x36\x04\x84\x06\x0d\x16\x18\x02\x0f\x0b\x0c\x02\x41\x0e"
  "\x81\x89\x02\x40\x0c\x81\x89\x02\x3f\x0a\x81\x8b\x02\x3e\x08\x81"
  "\x89\x02\x3d\x06\x81\x85\x02\x3c\x04\x84\x06\x0d\x16\x19\x02\x10"
  "\x0b\x0c\x02\x47\x0e\x81\x89\x02\x46\x0c\x81\x89\x02\x45\x0a\x81"
  "\x8b\x02\x44\x08\x81\x89\x02\x43\x06\x81\x85\x02\x42\x04\x84\x06"
  "\x0d\x15\x0c\x10\x0b\x0b\x0c\x04\x19\x04\x18\x04\x17\x04\x14\x04"
  "\x15\x04\x16\x04\x13\x04\x12\x04\x10\x04\x0d\x04\x0a\x04\x09\x04"
  "\x38\x04\x04\x14\x16\x65\x78\x69\x73\x74\x73\x2d\x61\x6e\x2d\x69"
  "\x6e\x68\x61\x62\x69\x74\x61\x6e\x74\x3f\x15\x66\x6f\x72\x2d\x61"
  "\x6c\x6c\x2d\x69\x6e\x68\x61\x62\x69\x74\x61\x6e\x74\x73\x3f\x0f"
  "\x14\x6d\x61\x70\x2d\x6f\x76\x65\x72\x2d\x70\x6f\x70\x75\x6c\x61"
  "\x74\x69\x6f\x6e\x18\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d"
  "\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21\x11\x1a\x61\x64"
  "\x64\x2d\x74\x6f\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21"
  "\x2f\x75\x6e\x73\x61\x66\x65\x0c\x70\x6f\x70\x75\x6c\x61\x74\x69"
  "\x6f\x6e\x3f\x10\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74"
  "\x69\x6f\x6e\x0e\x0f\x75\x6e\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x0d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65"
  "\x0f\x77\x65\x61\x6b\x2d\x63\x6f\x6e\x73\x2d\x74\x79\x70\x65\x15"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x21\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x21\x14\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
poplat_so_data_d0b5eb0c1b870e47 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_poplat_so_data_d0b5eb0c1b870e47 [0]))), (sizeof (prog_poplat_so_data_d0b5eb0c1b870e47)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("poplat.so", poplat_so_data_d0b5eb0c1b870e47)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("poplat.so", "9e8a7e66036aa29b")
