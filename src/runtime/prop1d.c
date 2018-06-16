/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCE_1_0 16
#define FREE_ASSIGNMENT_1_0 18
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_9)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_8;
  Wrd18 = Wrd22;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd19.pObj));

DEFLABEL (label_4)
  (Wrd18.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_11)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_9;

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
prop1d_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define EXECUTE_CACHE_3_7 9
#define FREE_REFERENCE_3_1 12
#define FREE_REFERENCE_3_0 13
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto gc_1d_tablesB_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_1d_tablesB_5)
DEFLABEL (gc_1d_tablesB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_6 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_0 16
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCE_4_1 14
#define FREE_REFERENCE_4_0 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto make_1d_table_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_1d_table_8)
DEFLABEL (make_1d_table_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_10;
  Wrd20 = Wrd24;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd21.pObj));

DEFLABEL (label_6)
  (Wrd20.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_1 11
#define OBJECT_5_0 10
#define FREE_REFERENCE_5_0 9
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto Z_1d_tableP_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_tableP_7)
DEFLABEL (Z_1d_tableP_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
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
  Rvl = (current_block [OBJECT_5_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto weak_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (weak_cons_3)
DEFLABEL (weak_cons_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 3);

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
#define ENVIRONMENT_LABEL_7_3 19
#define DEBUGGING_LABEL_7_2 18
#define OBJECT_7_3 17
#define OBJECT_7_2 16
#define OBJECT_7_1 15
#define OBJECT_7_0 14
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto weak_assq_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto loop_10;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (weak_assq_19)
DEFLABEL (weak_assq_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_10;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_1])))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_31;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_30)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_29;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_28)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd31.Obj) = (Rsp [5]);
  if (! ((Wrd27.Obj) == (Wrd31.Obj)))
    goto label_24;
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd32.Obj);

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd37.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_10;

DEFLABEL (label_26)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_27;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = (Rsp [2]);
  ((Wrd40.pObj) [1]) = (Wrd41.Obj);
  goto label_25;

DEFLABEL (label_27)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_17)
  goto label_25;

DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define ENVIRONMENT_LABEL_8_3 14
#define DEBUGGING_LABEL_8_2 13
#define EXECUTE_CACHE_8_7 9
#define FREE_REFERENCE_8_0 12
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_8_4);
      goto Z_1d_table_get_4;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_get_8)
DEFLABEL (Z_1d_table_get_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd9.pObj) [1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (Rsp [3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCE_9_0 12
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_9_4);
      goto Z_1d_table_lookup_5;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_lookup_9)
DEFLABEL (Z_1d_table_lookup_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_12)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_14;
  Wrd16 = Wrd20;

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd17.pObj));

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_11 13
#define LABEL_10_10 15
#define ENVIRONMENT_LABEL_10_3 28
#define DEBUGGING_LABEL_10_2 27
#define OBJECT_10_5 26
#define OBJECT_10_4 25
#define OBJECT_10_3 24
#define OBJECT_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_7 17
#define FREE_REFERENCE_10_0 20
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      goto Z_1d_table_putB_9;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_putB_15)
DEFLABEL (Z_1d_table_putB_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_10);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_10_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_18;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd13.pObj) [1]) = (Wrd9.Obj);
  goto label_16;

DEFLABEL (label_18)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_24;
  Wrd17 = Wrd21;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_9 13
#define LABEL_11_10 15
#define ENVIRONMENT_LABEL_11_3 24
#define DEBUGGING_LABEL_11_2 23
#define OBJECT_11_4 22
#define OBJECT_11_3 21
#define OBJECT_11_2 20
#define OBJECT_11_1 19
#define OBJECT_11_0 18
#define FREE_REFERENCE_11_0 17
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      goto Z_1d_table_removeB_15;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto loop_12;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_removeB_23)
DEFLABEL (Z_1d_table_removeB_15)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_27)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto loop_12;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_30;
  Wrd22 = Wrd26;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd23.pObj));

DEFLABEL (label_18)
  (Wrd22.Obj) = Rvl;
  goto label_29;

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_1])))
    goto label_31;
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_39;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_37;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_36)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd30.Obj) = (Rsp [4]);
  if ((Wrd26.Obj) == (Wrd30.Obj))
    goto label_33;
  (Wrd31.Obj) = (Rsp [3]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_35;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [1]) = (Wrd36.Obj);

DEFLABEL (label_34)
  (Wrd31.Obj) = (Rsp [2]);
  goto label_32;

DEFLABEL (label_35)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 2);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_37)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 1);

DEFLABEL (label_20)
  (Wrd16.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_9 13
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define OBJECT_12_4 18
#define OBJECT_12_3 17
#define OBJECT_12_2 16
#define OBJECT_12_1 15
#define OBJECT_12_0 14
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto Z_1d_table_cleanB_11;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_cleanB_18)
DEFLABEL (Z_1d_table_cleanB_11)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_21;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_9;

DEFLABEL (label_21)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_19)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_12_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_1])))
    goto label_22;
  Rvl = (current_block [OBJECT_12_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_27)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd28.Obj) = (Rsp [2]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_24)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_26;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [1]) = (Wrd33.Obj);

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [1]);
  goto label_23;

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

DEFLABEL (label_16)
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define ENVIRONMENT_LABEL_13_3 24
#define DEBUGGING_LABEL_13_2 23
#define OBJECT_13_4 22
#define OBJECT_13_3 21
#define OBJECT_13_2 20
#define OBJECT_13_1 19
#define OBJECT_13_0 18
#define FREE_REFERENCE_13_0 17
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd15;
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
      goto Z_1d_table_alist_16;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto loop_14;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_alist_24)
DEFLABEL (Z_1d_table_alist_16)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd15.Obj);
  goto loop_14;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (loop_25)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_13_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_1])))
    goto label_28;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_40;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_37)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd30.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_34;
  Wrd32 = Wrd36;

DEFLABEL (label_33)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (Wrd32.Obj))
    goto label_30;
  Wrd39 = Wrd38;
  goto label_29;

DEFLABEL (label_30)
  (Wrd39.Obj) = (current_block [OBJECT_13_4]);

DEFLABEL (label_29)
DEFLABEL (label_32)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [5]) = (Wrd46.Obj);

DEFLABEL (label_31)
  (Wrd52.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd52.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_14;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd33.pObj));

DEFLABEL (label_21)
  (Wrd32.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_36;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = (Rsp [2]);
  ((Wrd55.pObj) [1]) = (Wrd56.Obj);
  goto label_31;

DEFLABEL (label_36)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_22)
  goto label_31;

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define LABEL_14_11 15
#define LABEL_14_10 17
#define ENVIRONMENT_LABEL_14_3 26
#define DEBUGGING_LABEL_14_2 25
#define OBJECT_14_4 24
#define OBJECT_14_3 23
#define OBJECT_14_2 22
#define OBJECT_14_1 21
#define OBJECT_14_0 20
#define FREE_REFERENCE_14_0 19
#define FREE_REFERENCES_LABEL_14_0 18
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop1d_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd47;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
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
      goto Z_1d_table_for_each_15;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_1d_table_for_each_23)
DEFLABEL (Z_1d_table_for_each_15)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_13;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_24)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_14_1])))
    goto label_27;
  Rvl = (current_block [OBJECT_14_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_39;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_32;
  Wrd37 = Wrd41;

DEFLABEL (label_31)
  (Wrd43.Obj) = (Rsp [2]);
  if ((Wrd43.Obj) == (Wrd37.Obj))
    goto label_29;
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_28;

DEFLABEL (label_29)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_30)
  (Wrd45.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_13;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_11])), (Wrd38.pObj));

DEFLABEL (label_20)
  (Wrd37.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_35;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = (Rsp [2]);
  ((Wrd50.pObj) [1]) = (Wrd51.Obj);

DEFLABEL (label_34)
  (Wrd47.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd47.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_13;

DEFLABEL (label_35)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_37)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_38;

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
prop1d_so_8e7bfe7d332c8be0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	2,
	2,
	2,
	0,
	0,
	1,
	2,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 14)
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

static const struct liarc_code_S arr_decl_prop1d_so_8e7bfe7d332c8be0 [14] =
  {
    { "prop1d_so_code_1", 4, prop1d_so_code_1 },
    { "prop1d_so_code_2", 3, prop1d_so_code_2 },
    { "prop1d_so_code_3", 3, prop1d_so_code_3 },
    { "prop1d_so_code_4", 4, prop1d_so_code_4 },
    { "prop1d_so_code_5", 3, prop1d_so_code_5 },
    { "prop1d_so_code_6", 1, prop1d_so_code_6 },
    { "prop1d_so_code_7", 6, prop1d_so_code_7 },
    { "prop1d_so_code_8", 3, prop1d_so_code_8 },
    { "prop1d_so_code_9", 3, prop1d_so_code_9 },
    { "prop1d_so_code_10", 7, prop1d_so_code_10 },
    { "prop1d_so_code_11", 7, prop1d_so_code_11 },
    { "prop1d_so_code_12", 6, prop1d_so_code_12 },
    { "prop1d_so_code_13", 7, prop1d_so_code_13 },
    { "prop1d_so_code_14", 8, prop1d_so_code_14 }
  };

int
decl_prop1d_so_8e7bfe7d332c8be0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_prop1d_so_8e7bfe7d332c8be0);
  return (0);
}

DECLARE_COMPILED_CODE ("prop1d.so", 3, decl_prop1d_so_8e7bfe7d332c8be0, prop1d_so_8e7bfe7d332c8be0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_prop1d_so_data_8e7bfe7d332c8be0 [1504] =
  "\x2b\x18\x99\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x25\x0d"
  "\xba\x24\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbb\x1d\xb0\x82\x88\x0d\x0d\xbc\x24\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x0d\xbe"
  "\xb1\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x84\x88\x08\xb4\xb1\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x07\xc1\x1c\xb4\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc3\x1c\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x08\xc1\x1c"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xc2\x1b"
  "\x02\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1d"
  "\x08\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1d\x08\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1b\x1b\x08\x1b\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1d\x08\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x0c\x0c\x1b\x2a\x1b\x2a\xb7\x2a\x1e\xb5\x2a\xb3\x2a\x17\x0d"
  "\x0d\xb6\x0d\x0d\x0d\x0d\x1b\x0d\x1b\xb4\x0d\x0d\xb2\xb1\x0d\x0d"
  "\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70\x72\x6f\x70\x31\x64\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x18\x70\x6f\x70\x75\x6c\x61\x74"
  "\x69\x6f\x6e\x2d\x6f\x66\x2d\x31\x64\x2d\x74\x61\x62\x6c\x65\x73"
  "\x02\x0e\x67\x63\x2d\x31\x64\x2d\x74\x61\x62\x6c\x65\x73\x21\x02"
  "\x02\x10\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f"
  "\x6e\x03\x19\x61\x64\x64\x2d\x73\x65\x63\x6f\x6e\x64\x61\x72\x79"
  "\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x03\x07\x0a\x81\x81"
  "\x02\x06\x08\x81\x81\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x09"
  "\x15\x02\x09\x31\x64\x2d\x74\x61\x62\x6c\x65\x0d\x31\x64\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x74\x61\x67\x02\x04\x19\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x04\x21\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x73\x65"
  "\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x70\x61\x69\x72\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x21\x03\x0a\x08\x81\x83\x02\x09\x06\x81\x81\x02"
  "\x08\x04\x82\x02\x07\x12\x02\x10\x31\x64\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x63\x6c\x65\x61\x6e\x21\x03\x04\x15\x6d\x61\x70\x2d\x6f\x76"
  "\x65\x72\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21\x02\x0d"
  "\x08\x81\x83\x02\x0c\x06\x81\x81\x02\x0b\x04\x82\x02\x07\x10\x02"
  "\x03\x04\x1a\x61\x64\x64\x2d\x74\x6f\x2d\x70\x6f\x70\x75\x6c\x61"
  "\x74\x69\x6f\x6e\x21\x2f\x75\x6e\x73\x61\x66\x65\x02\x11\x0a\x81"
  "\x83\x02\x10\x08\x81\x87\x02\x0f\x06\x81\x81\x02\x0e\x04\x82\x02"
  "\x09\x13\x09\x02\x04\x63\x61\x72\x0a\x02\x14\x08\x81\x85\x02\x13"
  "\x06\x81\x83\x02\x12\x04\x83\x04\x07\x0e\x0b\x02\x11\x73\x79\x73"
  "\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x0c\x38\x15"
  "\x04\x84\x06\x03\x0d\x02\x08\x09\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\x0e\x0a\x04\x63\x64\x72\x0f\x1b\x0e\x81\x8f\x02\x1a\x0c\x81\x8b"
  "\x02\x19\x0a\x81\x89\x02\x18\x08\x81\x89\x02\x17\x06\x81\x85\x02"
  "\x16\x04\x84\x06\x0d\x14\x10\x02\x09\x0a\x66\x61\x6c\x73\x65\x2d"
  "\x6b\x65\x79\x11\x02\x04\x0a\x77\x65\x61\x6b\x2d\x61\x73\x73\x71"
  "\x12\x02\x1e\x08\x81\x87\x02\x1d\x06\x81\x8d\x02\x1c\x04\x85\x08"
  "\x07\x0f\x13\x02\x0a\x11\x02\x04\x12\x02\x21\x08\x81\x89\x02\x20"
  "\x06\x81\x8f\x02\x1f\x04\x86\x0a\x07\x0f\x14\x02\x0b\x02\x0e\x15"
  "\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x0c\x38\x0f\x11\x02\x04\x12\x02\x28\x10\x81\x8b"
  "\x02\x27\x0e\x81\x8b\x02\x26\x0c\x81\x8d\x02\x25\x0a\x81\x8b\x02"
  "\x24\x08\x81\x89\x02\x23\x06\x81\x89\x02\x22\x04\x85\x08\x0f\x1d"
  "\x0c\x02\x0c\x0e\x0a\x02\x0f\x11\x02\x2f\x10\x81\x8f\x02\x2e\x0e"
  "\x81\x8d\x02\x2d\x0c\x81\x8b\x02\x2c\x0a\x81\x8b\x02\x2b\x08\x81"
  "\x87\x02\x2a\x06\x81\x87\x02\x29\x04\x84\x06\x0f\x19\x15\x02\x0d"
  "\x0e\x0a\x02\x0f\x35\x0e\x81\x87\x02\x34\x0c\x81\x87\x02\x33\x0a"
  "\x81\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x85\x02\x30\x04\x83"
  "\x04\x0d\x15\x16\x02\x0e\x0e\x0a\x0f\x11\x02\x3c\x10\x81\x8d\x02"
  "\x3b\x0e\x81\x8d\x02\x3a\x0c\x81\x89\x02\x39\x0a\x81\x87\x02\x38"
  "\x08\x81\x87\x02\x37\x06\x81\x83\x02\x36\x04\x83\x04\x0f\x19\x17"
  "\x02\x0f\x0e\x0a\x02\x0f\x11\x02\x44\x12\x81\x8f\x02\x43\x10\x81"
  "\x93\x02\x42\x0e\x81\x8f\x02\x41\x0c\x81\x8b\x02\x40\x0a\x81\x89"
  "\x02\x3f\x08\x81\x89\x02\x3e\x06\x81\x85\x02\x3d\x04\x84\x06\x11"
  "\x1b\x0f\x0f\x0e\x0e\x0f\x04\x17\x04\x16\x04\x15\x04\x0c\x04\x14"
  "\x04\x13\x04\x10\x04\x0d\x04\x0a\x66\x61\x6c\x73\x65\x20\x6b\x65"
  "\x79\x09\x31\x44\x20\x74\x61\x62\x6c\x65\x0b\x04\x09\x04\x04\x04"
  "\x04\x12\x12\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x0f\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x61\x6c"
  "\x69\x73\x74\x11\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x72\x65\x6d"
  "\x6f\x76\x65\x21\x0e\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75"
  "\x74\x21\x10\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x6c\x6f\x6f\x6b"
  "\x75\x70\x0d\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x12"
  "\x0a\x77\x65\x61\x6b\x2d\x63\x6f\x6e\x73\x11\x0a\x31\x64\x2d\x74"
  "\x61\x62\x6c\x65\x3f\x0e\x6d\x61\x6b\x65\x2d\x31\x64\x2d\x74\x61"
  "\x62\x6c\x65\x15\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x21\x14\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x12\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
prop1d_so_data_8e7bfe7d332c8be0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_prop1d_so_data_8e7bfe7d332c8be0 [0]))), (sizeof (prog_prop1d_so_data_8e7bfe7d332c8be0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("prop1d.so", prop1d_so_data_8e7bfe7d332c8be0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("prop1d.so", "8a6550fcb35ffe74")
