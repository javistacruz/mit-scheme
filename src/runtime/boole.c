/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto not_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (not_3)
DEFLABEL (not_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_2_4);
      goto booleanP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (booleanP_5)
DEFLABEL (booleanP_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_6)
DEFLABEL (label_12)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Wrd8.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (current_block [OBJECT_2_0]);
  if ((Wrd13.Obj) == (Wrd14.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (Wrd14.Obj);

DEFLABEL (label_10)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      goto boolean_P_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_P_3)
DEFLABEL (boolean_P_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (Rsp [1]);

DEFLABEL (label_4)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_3_0]);

DEFLABEL (label_6)
  goto label_4;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define OBJECT_4_2 12
#define OBJECT_4_1 11
#define OBJECT_4_0 10
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto boolean_or_6;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_or_11)
DEFLABEL (boolean_or_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  goto loop_4;

DEFLABEL (loop_12)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_4_2]);
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd13.Obj);
  goto loop_4;

DEFLABEL (label_18)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 14
#define DEBUGGING_LABEL_5_2 13
#define OBJECT_5_2 12
#define OBJECT_5_1 11
#define OBJECT_5_0 10
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd11;
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
      goto boolean_and_6;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_and_11)
DEFLABEL (boolean_and_6)
  INTERRUPT_CHECK (26, LABEL_5_4);
  goto loop_4;

DEFLABEL (loop_12)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;
  Rvl = (current_block [OBJECT_5_2]);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd15.Obj);
  goto loop_4;

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_19)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_7 11
#define LABEL_6_10 13
#define ENVIRONMENT_LABEL_6_3 23
#define DEBUGGING_LABEL_6_2 22
#define OBJECT_6_4 21
#define OBJECT_6_3 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_9 15
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_6_4);
      goto there_existsP_9;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (there_existsP_14)
DEFLABEL (there_existsP_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_1])))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_5);
  goto label_16;

DEFLABEL (label_18)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_6_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_7;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_7 11
#define LABEL_7_10 13
#define ENVIRONMENT_LABEL_7_3 23
#define DEBUGGING_LABEL_7_2 22
#define OBJECT_7_4 21
#define OBJECT_7_3 20
#define OBJECT_7_2 19
#define OBJECT_7_1 18
#define OBJECT_7_0 17
#define EXECUTE_CACHE_7_9 15
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
boole_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_7_4);
      goto for_allP_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_allP_14)
DEFLABEL (for_allP_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_1])))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  goto label_16;

DEFLABEL (label_18)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

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
boole_so_95b0edf57eb489bc (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
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

static const struct liarc_code_S arr_decl_boole_so_95b0edf57eb489bc [7] =
  {
    { "boole_so_code_1", 1, boole_so_code_1 },
    { "boole_so_code_2", 1, boole_so_code_2 },
    { "boole_so_code_3", 1, boole_so_code_3 },
    { "boole_so_code_4", 4, boole_so_code_4 },
    { "boole_so_code_5", 4, boole_so_code_5 },
    { "boole_so_code_6", 6, boole_so_code_6 },
    { "boole_so_code_7", 6, boole_so_code_7 }
  };

int
decl_boole_so_95b0edf57eb489bc (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_boole_so_95b0edf57eb489bc);
  return (0);
}

DECLARE_COMPILED_CODE ("boole.so", 3, decl_boole_so_95b0edf57eb489bc, boole_so_95b0edf57eb489bc)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_boole_so_data_95b0edf57eb489bc [574] =
  "\x21\x0c\xb3\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x07\x22\x29\x21\x9d\x2b\xba\x1d\xb0"
  "\x83\x88\x07\x22\x29\x21\x9d\x2b\xbb\x1d\xb0\x84\x88\x07\xc1\xbc"
  "\xc1\xbd\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0"
  "\x85\x88\x07\xb4\xb5\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbf\x1d\xb0\x86\x88\x07\xb4\x0d\x1c\x08\xb5\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x0d\xbc\x07\x08\xb5\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9e\xbd\x88\xb5"
  "\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb3\x2a\xb2\x2a\x07\x06\xb1\x2a"
  "\x17\xb4\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x62\x6f\x6f\x6c\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x04\x04\x83\x04\x03\x02\x05\x04\x83\x04\x03\x02\x06\x04\x84"
  "\x06\x03\x02\x04\x63\x64\x72\x04\x63\x61\x72\x0a\x0a\x81\x83\x02"
  "\x09\x08\x81\x83\x02\x08\x06\x81\x83\x02\x07\x04\xff\x03\x09\x0f"
  "\x02\x0e\x0a\x81\x83\x02\x0d\x08\x81\x83\x02\x0c\x06\x81\x83\x02"
  "\x0b\x04\xff\x03\x09\x0f\x02\x0e\x74\x68\x65\x72\x65\x2d\x65\x78"
  "\x69\x73\x74\x73\x3f\x09\x04\x0f\x65\x72\x72\x6f\x72\x3a\x6e\x6f"
  "\x74\x2d\x6c\x69\x73\x74\x0a\x02\x14\x0e\x81\x87\x02\x13\x0c\x81"
  "\x87\x02\x12\x0a\x81\x89\x02\x11\x08\x81\x87\x02\x10\x06\x81\x87"
  "\x02\x0f\x04\x84\x06\x0d\x18\x0b\x02\x08\x09\x66\x6f\x72\x2d\x61"
  "\x6c\x6c\x3f\x04\x0a\x02\x1a\x0e\x81\x87\x02\x19\x0c\x81\x87\x02"
  "\x18\x0a\x81\x89\x02\x17\x08\x81\x87\x02\x16\x06\x81\x87\x02\x15"
  "\x04\x84\x06\x0d\x18\x0a\x0a\x04\x0b\x04\x04\x04\x04\x04\x04\x0a"
  "\x09\x0c\x62\x6f\x6f\x6c\x65\x61\x6e\x2f\x61\x6e\x64\x0b\x62\x6f"
  "\x6f\x6c\x65\x61\x6e\x2f\x6f\x72\x0a\x62\x6f\x6f\x6c\x65\x61\x6e"
  "\x3d\x3f\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x05\x74\x72\x75\x65"
  "\x06\x66\x61\x6c\x73\x65\x04\x6e\x6f\x74\x0a\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
boole_so_data_95b0edf57eb489bc (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_boole_so_data_95b0edf57eb489bc [0]))), (sizeof (prog_boole_so_data_95b0edf57eb489bc)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("boole.so", boole_so_data_95b0edf57eb489bc)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("boole.so", "6152d4c4b5db497c")
