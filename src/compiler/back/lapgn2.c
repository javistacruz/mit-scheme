/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define FREE_REFERENCE_1_0 11
#define FREE_ASSIGNMENT_1_0 13
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      goto need_registerB_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (need_registerB_9)
DEFLABEL (need_registerB_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd16 = Wrd20;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd36.Obj) = ((Wrd28.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd28.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd36.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd28.pObj), (Wrd29.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_6])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define EXECUTE_CACHE_2_7 13
#define FREE_REFERENCE_2_0 16
#define FREE_ASSIGNMENT_2_0 18
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_2_4);
      goto need_registersB_3;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (need_registersB_9)
DEFLABEL (need_registersB_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define ENVIRONMENT_LABEL_3_3 20
#define DEBUGGING_LABEL_3_2 19
#define EXECUTE_CACHE_3_7 13
#define FREE_REFERENCE_3_0 16
#define FREE_ASSIGNMENT_3_0 18
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto dont_need_registerB_3;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dont_need_registerB_9)
DEFLABEL (dont_need_registerB_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define EXECUTE_CACHE_4_7 13
#define FREE_REFERENCE_4_0 16
#define FREE_ASSIGNMENT_4_0 18
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto dont_need_registersB_3;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dont_need_registersB_9)
DEFLABEL (dont_need_registersB_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCE_5_0 10
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto dead_registerP_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dead_registerP_4)
DEFLABEL (dead_registerP_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_5 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_8 15
#define FREE_REFERENCE_6_1 18
#define FREE_REFERENCE_6_0 19
#define FREE_ASSIGNMENT_6_1 21
#define FREE_ASSIGNMENT_6_0 22
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_6_4);
      goto delete_dead_registersB_1;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_dead_registersB_8)
DEFLABEL (delete_dead_registersB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_16;
  Wrd14 = Wrd18;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_12)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_1]));
  (Wrd19.Obj) = (current_block [OBJECT_6_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_6_1]);
  goto pop_return;

DEFLABEL (label_11)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_10])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_14)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_12;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define ENVIRONMENT_LABEL_7_3 20
#define DEBUGGING_LABEL_7_2 19
#define EXECUTE_CACHE_7_7 13
#define FREE_REFERENCE_7_0 16
#define FREE_ASSIGNMENT_7_0 18
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto prefix_instructionsB_3;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_instructionsB_9)
DEFLABEL (prefix_instructionsB_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_7_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 20
#define DEBUGGING_LABEL_8_2 19
#define EXECUTE_CACHE_8_7 13
#define FREE_REFERENCE_8_0 16
#define FREE_ASSIGNMENT_8_0 18
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
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
      goto suffix_instructionsB_3;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (suffix_instructionsB_9)
DEFLABEL (suffix_instructionsB_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_8_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define EXECUTE_CACHE_9_11 13
#define EXECUTE_CACHE_9_8 15
#define EXECUTE_CACHE_9_6 17
#define FREE_ASSIGNMENT_9_0 20
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
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
      goto store_allocator_valuesB_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (store_allocator_valuesB_7)
DEFLABEL (store_allocator_valuesB_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_9)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_9])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_5)
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_5 3
#define LABEL_10_4 5
#define ENVIRONMENT_LABEL_10_3 10
#define DEBUGGING_LABEL_10_2 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_10_4);
      goto maybe_need_registerB_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_need_registerB_4)
DEFLABEL (maybe_need_registerB_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_8 9
#define EXECUTE_CACHE_11_7 11
#define FREE_REFERENCE_11_0 14
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_11_4);
      goto register_has_aliasP_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_has_aliasP_6)
DEFLABEL (register_has_aliasP_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_11;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_8;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_8)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_11)
  (Wrd20.Obj) = (current_block [OBJECT_11_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto alias_is_uniqueP_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alias_is_uniqueP_4)
DEFLABEL (alias_is_uniqueP_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCE_13_0 10
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto alias_holds_unique_valueP_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alias_holds_unique_valueP_4)
DEFLABEL (alias_holds_unique_valueP_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto is_alias_for_registerP_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (is_alias_for_registerP_4)
DEFLABEL (is_alias_for_registerP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 15
#define DEBUGGING_LABEL_15_2 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCE_15_0 12
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_15_4);
      goto register_saved_into_homeP_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_saved_into_homeP_6)
DEFLABEL (register_saved_into_homeP_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_11;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_11)
  (Wrd20.Obj) = (current_block [OBJECT_15_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_6 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 23
#define DEBUGGING_LABEL_16_2 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_11 13
#define EXECUTE_CACHE_16_10 15
#define EXECUTE_CACHE_16_8 17
#define FREE_REFERENCE_16_0 20
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_16_4);
      goto register_alias_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_alias_8)
DEFLABEL (register_alias_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_16;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_13;

DEFLABEL (label_12)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Rsp [0]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_7])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd28.Obj) = (current_block [OBJECT_16_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 14
#define DEBUGGING_LABEL_17_2 13
#define OBJECT_17_1 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto guarantee_registers_compatible_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_registers_compatible_4)
DEFLABEL (guarantee_registers_compatible_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 14
#define DEBUGGING_LABEL_18_2 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto registers_compatibleP_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (registers_compatibleP_5)
DEFLABEL (registers_compatibleP_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 11
#define DEBUGGING_LABEL_19_2 10
#define OBJECT_19_2 9
#define OBJECT_19_1 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_19_4);
      goto register_types_compatibleP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_types_compatibleP_5)
DEFLABEL (register_types_compatibleP_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_19_0]))
    goto label_7;
  (Wrd7.Obj) = (current_block [OBJECT_19_2]);
  goto label_6;

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_19_1]);

DEFLABEL (label_6)
DEFLABEL (label_11)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_19_0]))
    goto label_9;
  (Wrd10.Obj) = (current_block [OBJECT_19_2]);
  goto label_8;

DEFLABEL (label_9)
  (Wrd10.Obj) = (current_block [OBJECT_19_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_6 11
#define LABEL_20_10 13
#define LABEL_20_13 15
#define LABEL_20_15 17
#define LABEL_20_16 19
#define ENVIRONMENT_LABEL_20_3 38
#define DEBUGGING_LABEL_20_2 37
#define OBJECT_20_0 36
#define EXECUTE_CACHE_20_18 21
#define EXECUTE_CACHE_20_17 23
#define EXECUTE_CACHE_20_14 25
#define EXECUTE_CACHE_20_12 27
#define EXECUTE_CACHE_20_11 29
#define EXECUTE_CACHE_20_9 31
#define FREE_REFERENCE_20_1 34
#define FREE_REFERENCE_20_0 35
#define FREE_REFERENCES_LABEL_20_0 20
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_20_4);
      goto load_alias_registerB_7;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_alias_registerB_13)
DEFLABEL (load_alias_registerB_7)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_16;

DEFLABEL (label_15)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_20;
  Wrd15 = Wrd19;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_18;
  Wrd22 = Wrd26;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_8])), (Wrd23.pObj));

DEFLABEL (label_10)
  (Wrd22.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd16.pObj));

DEFLABEL (label_9)
  (Wrd15.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd34.Obj) = (current_block [OBJECT_20_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto reference_alias_registerB_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_alias_registerB_4)
DEFLABEL (reference_alias_registerB_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define LABEL_22_8 13
#define LABEL_22_12 15
#define LABEL_22_15 17
#define LABEL_22_17 19
#define LABEL_22_18 21
#define ENVIRONMENT_LABEL_22_3 42
#define DEBUGGING_LABEL_22_2 41
#define OBJECT_22_0 40
#define EXECUTE_CACHE_22_20 23
#define EXECUTE_CACHE_22_19 25
#define EXECUTE_CACHE_22_16 27
#define EXECUTE_CACHE_22_14 29
#define EXECUTE_CACHE_22_13 31
#define EXECUTE_CACHE_22_11 33
#define EXECUTE_CACHE_22_6 35
#define FREE_REFERENCE_22_1 38
#define FREE_REFERENCE_22_0 39
#define FREE_REFERENCES_LABEL_22_0 22
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_22_4);
      goto allocate_alias_registerB_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_alias_registerB_14)
DEFLABEL (allocate_alias_registerB_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_17;

DEFLABEL (label_16)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_21;
  Wrd15 = Wrd19;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_19;
  Wrd22 = Wrd26;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd23.pObj));

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_9])), (Wrd16.pObj));

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd34.Obj) = (current_block [OBJECT_22_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto reference_target_aliasB_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_target_aliasB_4)
DEFLABEL (reference_target_aliasB_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_7 7
#define LABEL_24_5 9
#define ENVIRONMENT_LABEL_24_3 19
#define DEBUGGING_LABEL_24_2 18
#define EXECUTE_CACHE_24_9 11
#define EXECUTE_CACHE_24_8 13
#define FREE_REFERENCE_24_1 16
#define FREE_REFERENCE_24_0 17
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
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
      goto allocate_temporary_registerB_1;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_temporary_registerB_6)
DEFLABEL (allocate_temporary_registerB_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_9;

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
lapgn2_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto reference_temporary_registerB_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_temporary_registerB_4)
DEFLABEL (reference_temporary_registerB_1)
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
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define ENVIRONMENT_LABEL_26_3 20
#define DEBUGGING_LABEL_26_2 19
#define EXECUTE_CACHE_26_9 11
#define EXECUTE_CACHE_26_7 13
#define FREE_REFERENCE_26_0 16
#define FREE_ASSIGNMENT_26_0 18
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_26_4);
      goto add_pseudo_register_aliasB_1;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_pseudo_register_aliasB_6)
DEFLABEL (add_pseudo_register_aliasB_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_11;
  Wrd11 = Wrd15;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_10 9
#define LABEL_27_7 11
#define LABEL_27_12 13
#define LABEL_27_9 15
#define LABEL_27_14 17
#define ENVIRONMENT_LABEL_27_3 33
#define DEBUGGING_LABEL_27_2 32
#define OBJECT_27_0 31
#define EXECUTE_CACHE_27_15 19
#define EXECUTE_CACHE_27_13 21
#define EXECUTE_CACHE_27_11 23
#define EXECUTE_CACHE_27_8 25
#define FREE_REFERENCE_27_0 28
#define FREE_ASSIGNMENT_27_0 30
#define FREE_REFERENCES_LABEL_27_0 18
#define NUMBER_OF_LINKER_SECTIONS_27_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_27_4);
      goto delete_registerB_3;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_27_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_27_14);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_registerB_11)
DEFLABEL (delete_registerB_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_16;

DEFLABEL (label_15)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_14;
  Wrd12 = Wrd16;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_21;
  Wrd24 = Wrd28;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (label_19)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_9)
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_10])), (Wrd25.pObj));

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd31.Obj) = (current_block [OBJECT_27_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (lambda_12)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (label_25)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_12])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_8)
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_9 9
#define LABEL_28_6 11
#define LABEL_28_10 13
#define LABEL_28_12 15
#define LABEL_28_13 17
#define LABEL_28_15 19
#define ENVIRONMENT_LABEL_28_3 36
#define DEBUGGING_LABEL_28_2 35
#define OBJECT_28_1 34
#define OBJECT_28_0 33
#define EXECUTE_CACHE_28_16 21
#define EXECUTE_CACHE_28_14 23
#define EXECUTE_CACHE_28_11 25
#define EXECUTE_CACHE_28_8 27
#define FREE_REFERENCE_28_0 30
#define FREE_ASSIGNMENT_28_0 32
#define FREE_REFERENCES_LABEL_28_0 20
#define NUMBER_OF_LINKER_SECTIONS_28_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_28_4);
      goto save_registerB_7;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_28_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_28_13);
      goto lambda_1;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_registerB_14)
DEFLABEL (save_registerB_7)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_18;

DEFLABEL (label_17)
  goto lambda_2;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_21;
  Wrd15 = Wrd19;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto lambda_2;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd16.pObj));

DEFLABEL (label_9)
  (Wrd15.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd22.Obj) = (current_block [OBJECT_28_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (lambda_15)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_28_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;
  Wrd10 = Wrd14;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_12])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_16)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_28_13);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (label_28)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_15])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_12)
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_11 11
#define LABEL_29_12 13
#define ENVIRONMENT_LABEL_29_3 26
#define DEBUGGING_LABEL_29_2 25
#define OBJECT_29_0 24
#define EXECUTE_CACHE_29_10 15
#define EXECUTE_CACHE_29_8 17
#define EXECUTE_CACHE_29_6 19
#define FREE_ASSIGNMENT_29_1 22
#define FREE_ASSIGNMENT_29_0 23
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_29_4);
      goto clear_mapB_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_29_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_mapB_9)
DEFLABEL (clear_mapB_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd19.Obj) = (current_block [OBJECT_29_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_12])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define EXECUTE_CACHE_30_6 7
#define FREE_REFERENCE_30_0 10
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto clear_map_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_map_4)
DEFLABEL (clear_map_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_8 11
#define TAG_31_9 4
#define LABEL_31_12 13
#define LABEL_31_11 15
#define LABEL_31_14 17
#define LABEL_31_15 19
#define LABEL_31_17 21
#define LABEL_31_16 23
#define ENVIRONMENT_LABEL_31_3 39
#define DEBUGGING_LABEL_31_2 38
#define OBJECT_31_2 37
#define OBJECT_31_1 36
#define OBJECT_31_0 35
#define EXECUTE_CACHE_31_18 25
#define EXECUTE_CACHE_31_13 27
#define EXECUTE_CACHE_31_10 29
#define FREE_REFERENCE_31_0 32
#define FREE_ASSIGNMENT_31_0 34
#define FREE_REFERENCES_LABEL_31_0 24
#define NUMBER_OF_LINKER_SECTIONS_31_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_31_4);
      goto clear_registersB_13;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto lambda_24;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_31_17);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_registersB_22)
DEFLABEL (clear_registersB_13)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_25;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_11;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd8.pObj));

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_31_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_8])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_31_8);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_37;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_36)
  if ((Wrd5.Obj) == (current_block [OBJECT_31_0]))
    goto label_32;
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_31;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_30)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto loop_11;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_31_16);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (label_31)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_15])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_20)
  goto label_33;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_10 9
#define LABEL_32_12 11
#define LABEL_32_11 13
#define LABEL_32_15 15
#define LABEL_32_16 17
#define LABEL_32_17 19
#define LABEL_32_18 21
#define LABEL_32_13 23
#define ENVIRONMENT_LABEL_32_3 44
#define DEBUGGING_LABEL_32_2 43
#define OBJECT_32_0 42
#define EXECUTE_CACHE_32_21 25
#define EXECUTE_CACHE_32_20 27
#define EXECUTE_CACHE_32_19 29
#define EXECUTE_CACHE_32_14 31
#define EXECUTE_CACHE_32_9 33
#define EXECUTE_CACHE_32_8 35
#define EXECUTE_CACHE_32_7 37
#define FREE_REFERENCE_32_1 40
#define FREE_REFERENCE_32_0 41
#define FREE_REFERENCES_LABEL_32_0 24
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_32_4);
      goto standard_register_reference_12;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_32_10);
      goto lambda_7;

    case 4:
      current_block = (Rpc - LABEL_32_12);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_32_17);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_32_18);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_register_reference_18)
DEFLABEL (standard_register_reference_12)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_25;

DEFLABEL (label_24)
  (Wrd11.Obj) = (Rsp [1]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  goto lambda_7;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_22)
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rsp = (& (Rsp [1]));
  goto lambda_7;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (label_25)
  (Wrd18.Obj) = (Rsp [2]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (label_27)
  (Wrd26.Obj) = (current_block [OBJECT_32_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (lambda_19)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_32_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (lambda_20)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_32_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_29)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_36;
  Wrd21 = Wrd25;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_34;
  Wrd28 = Wrd32;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_29;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_18])), (Wrd29.pObj));

DEFLABEL (label_16)
  (Wrd28.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_17])), (Wrd22.pObj));

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_9 9
#define LABEL_33_8 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define LABEL_33_16 17
#define LABEL_33_17 19
#define LABEL_33_18 21
#define LABEL_33_22 23
#define ENVIRONMENT_LABEL_33_3 47
#define DEBUGGING_LABEL_33_2 46
#define OBJECT_33_2 45
#define OBJECT_33_1 44
#define OBJECT_33_0 43
#define EXECUTE_CACHE_33_23 25
#define EXECUTE_CACHE_33_21 27
#define EXECUTE_CACHE_33_20 29
#define EXECUTE_CACHE_33_19 31
#define EXECUTE_CACHE_33_15 33
#define EXECUTE_CACHE_33_14 35
#define EXECUTE_CACHE_33_13 37
#define EXECUTE_CACHE_33_10 39
#define EXECUTE_CACHE_33_7 41
#define FREE_REFERENCES_LABEL_33_0 24
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_33_4);
      goto load_machine_registerB_11;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_33_22);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_machine_registerB_15)
DEFLABEL (load_machine_registerB_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (label_16)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_22);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (label_17)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (label_19)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_20)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (label_21)
  (Wrd12.Obj) = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_20;

DEFLABEL (label_22)
  (Wrd25.Obj) = (current_block [OBJECT_33_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_10 7
#define LABEL_34_11 9
#define TAG_34_12 3
#define LABEL_34_13 11
#define TAG_34_14 4
#define LABEL_34_17 13
#define LABEL_34_18 15
#define LABEL_34_21 17
#define LABEL_34_6 19
#define LABEL_34_7 21
#define LABEL_34_8 23
#define LABEL_34_20 25
#define LABEL_34_22 27
#define LABEL_34_24 29
#define LABEL_34_28 31
#define LABEL_34_31 33
#define LABEL_34_32 35
#define ENVIRONMENT_LABEL_34_3 60
#define DEBUGGING_LABEL_34_2 59
#define OBJECT_34_1 58
#define OBJECT_34_0 57
#define EXECUTE_CACHE_34_30 37
#define EXECUTE_CACHE_34_29 39
#define EXECUTE_CACHE_34_27 41
#define EXECUTE_CACHE_34_26 43
#define EXECUTE_CACHE_34_25 45
#define EXECUTE_CACHE_34_23 47
#define EXECUTE_CACHE_34_19 49
#define EXECUTE_CACHE_34_16 51
#define EXECUTE_CACHE_34_15 53
#define EXECUTE_CACHE_34_9 55
#define FREE_REFERENCES_LABEL_34_0 36
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto move_to_alias_registerB_18;

    case 2:
      current_block = (Rpc - LABEL_34_10);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_34_11);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_34_13);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_34_18);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_34_21);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_34_22);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_34_24);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_34_28);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_34_31);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_34_32);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_to_alias_registerB_23)
DEFLABEL (move_to_alias_registerB_18)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_28;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_27;

DEFLABEL (label_26)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_11])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  ((Wrd19.pObj) [4]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_13])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  ((Wrd24.pObj) [2]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (label_27)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_34_6);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd33.Obj) = (current_block [OBJECT_34_1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_34_11);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_34_31);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_34_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_31;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd12.Lng) < 5L)
    goto label_30;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_22);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_30]));

DEFLABEL (label_31)
  (Wrd35.Obj) = (current_block [OBJECT_34_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_7 7
#define LABEL_35_9 9
#define LABEL_35_11 11
#define LABEL_35_13 13
#define LABEL_35_14 15
#define LABEL_35_15 17
#define ENVIRONMENT_LABEL_35_3 33
#define DEBUGGING_LABEL_35_2 32
#define OBJECT_35_0 31
#define EXECUTE_CACHE_35_18 19
#define EXECUTE_CACHE_35_17 21
#define EXECUTE_CACHE_35_16 23
#define EXECUTE_CACHE_35_12 25
#define EXECUTE_CACHE_35_10 27
#define EXECUTE_CACHE_35_8 29
#define FREE_REFERENCES_LABEL_35_0 18
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_35_4);
      goto move_to_temporary_registerB_8;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_to_temporary_registerB_11)
DEFLABEL (move_to_temporary_registerB_8)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  ((Wrd12.pObj) [3]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_13)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_35_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_8 7
#define ENVIRONMENT_LABEL_36_3 14
#define DEBUGGING_LABEL_36_2 13
#define EXECUTE_CACHE_36_9 9
#define EXECUTE_CACHE_36_7 11
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_36_4);
      goto reuse_pseudo_register_aliasB_2;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reuse_pseudo_register_aliasB_5)
DEFLABEL (reuse_pseudo_register_aliasB_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_8 9
#define LABEL_37_10 11
#define ENVIRONMENT_LABEL_37_3 21
#define DEBUGGING_LABEL_37_2 20
#define OBJECT_37_0 19
#define EXECUTE_CACHE_37_11 13
#define EXECUTE_CACHE_37_9 15
#define EXECUTE_CACHE_37_7 17
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_37_4);
      goto reuse_pseudo_register_alias_5;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reuse_pseudo_register_alias_9)
DEFLABEL (reuse_pseudo_register_alias_5)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 5L))
    goto label_11;

DEFLABEL (label_10)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_14)
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_15)
  (Wrd18.Obj) = (current_block [OBJECT_37_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_5 3
#define LABEL_38_4 5
#define LABEL_38_8 7
#define LABEL_38_9 9
#define TAG_38_10 3
#define LABEL_38_11 11
#define TAG_38_12 4
#define LABEL_38_15 13
#define LABEL_38_18 15
#define LABEL_38_17 17
#define LABEL_38_6 19
#define LABEL_38_19 21
#define LABEL_38_21 23
#define LABEL_38_23 25
#define LABEL_38_24 27
#define LABEL_38_26 29
#define LABEL_38_28 31
#define ENVIRONMENT_LABEL_38_3 54
#define DEBUGGING_LABEL_38_2 53
#define OBJECT_38_1 52
#define OBJECT_38_0 51
#define EXECUTE_CACHE_38_29 33
#define EXECUTE_CACHE_38_27 35
#define EXECUTE_CACHE_38_25 37
#define EXECUTE_CACHE_38_22 39
#define EXECUTE_CACHE_38_20 41
#define EXECUTE_CACHE_38_16 43
#define EXECUTE_CACHE_38_14 45
#define EXECUTE_CACHE_38_13 47
#define EXECUTE_CACHE_38_7 49
#define FREE_REFERENCES_LABEL_38_0 32
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_38_4);
      goto with_register_copy_aliasB_17;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto lambda_24;

    case 5:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_38_18);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_38_19);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_38_21);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_38_23);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_38_24);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_38_26);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_38_28);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_register_copy_aliasB_22)
DEFLABEL (with_register_copy_aliasB_17)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_26;

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_9])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_11])));
  Rhp += 4;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd27 = Wrd20;
  (Wrd28.Obj) = (Rsp [4]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  ((Wrd27.pObj) [3]) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [4]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [5]) = (Wrd22.Obj);
  (Rsp [4]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (label_26)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_38_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_27)
  (Wrd38.Obj) = (current_block [OBJECT_38_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_38_9);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_30;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd12.Lng) < 5L)
    goto label_29;

DEFLABEL (label_28)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_26);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_27]));

DEFLABEL (label_30)
  (Wrd35.Obj) = (current_block [OBJECT_38_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_38_11);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38_23);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_28);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define TAG_39_8 2
#define LABEL_39_10 9
#define LABEL_39_12 11
#define LABEL_39_14 13
#define LABEL_39_16 15
#define ENVIRONMENT_LABEL_39_3 29
#define DEBUGGING_LABEL_39_2 28
#define OBJECT_39_0 27
#define EXECUTE_CACHE_39_17 17
#define EXECUTE_CACHE_39_15 19
#define EXECUTE_CACHE_39_13 21
#define EXECUTE_CACHE_39_11 23
#define EXECUTE_CACHE_39_9 25
#define FREE_REFERENCES_LABEL_39_0 16
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_39_4);
      goto with_temporary_register_copyB_6;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_39_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_temporary_register_copyB_9)
DEFLABEL (with_temporary_register_copyB_6)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_7])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [4]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_39_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_16);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define TAG_40_7 2
#define LABEL_40_8 9
#define LABEL_40_10 11
#define TAG_40_11 4
#define LABEL_40_12 13
#define LABEL_40_14 15
#define LABEL_40_16 17
#define ENVIRONMENT_LABEL_40_3 31
#define DEBUGGING_LABEL_40_2 30
#define OBJECT_40_0 29
#define EXECUTE_CACHE_40_18 19
#define EXECUTE_CACHE_40_17 21
#define EXECUTE_CACHE_40_15 23
#define EXECUTE_CACHE_40_13 25
#define EXECUTE_CACHE_40_9 27
#define FREE_REFERENCES_LABEL_40_0 18
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_40_4);
      goto register_copy_if_available_7;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_copy_if_available_11)
DEFLABEL (register_copy_if_available_7)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_17;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_16;

DEFLABEL (label_15)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd23.Obj) = (current_block [OBJECT_40_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_40_6);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_40_8);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_40_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_8 9
#define TAG_41_9 3
#define LABEL_41_10 11
#define LABEL_41_12 13
#define ENVIRONMENT_LABEL_41_3 24
#define DEBUGGING_LABEL_41_2 23
#define EXECUTE_CACHE_41_14 15
#define EXECUTE_CACHE_41_13 17
#define EXECUTE_CACHE_41_11 19
#define EXECUTE_CACHE_41_7 21
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn2_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_41_4);
      goto temporary_copy_if_available_5;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_41_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_copy_if_available_8)
DEFLABEL (temporary_copy_if_available_5)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_41_6);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_41_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

INVOKE_INTERFACE_TARGET_0
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
lapgn2_so_ac5e3191a78617f3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	3,
	2,
	2,
	3,
	3,
	3,
	1,
	2,
	1,
	2,
	1,
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
	2,
	3,
	3,
	3,
	2,
	3,
	3,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 41)
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

static const struct liarc_code_S arr_decl_lapgn2_so_ac5e3191a78617f3 [41] =
  {
    { "lapgn2_so_code_1", 4, lapgn2_so_code_1 },
    { "lapgn2_so_code_2", 5, lapgn2_so_code_2 },
    { "lapgn2_so_code_3", 5, lapgn2_so_code_3 },
    { "lapgn2_so_code_4", 5, lapgn2_so_code_4 },
    { "lapgn2_so_code_5", 2, lapgn2_so_code_5 },
    { "lapgn2_so_code_6", 6, lapgn2_so_code_6 },
    { "lapgn2_so_code_7", 5, lapgn2_so_code_7 },
    { "lapgn2_so_code_8", 5, lapgn2_so_code_8 },
    { "lapgn2_so_code_9", 5, lapgn2_so_code_9 },
    { "lapgn2_so_code_10", 2, lapgn2_so_code_10 },
    { "lapgn2_so_code_11", 3, lapgn2_so_code_11 },
    { "lapgn2_so_code_12", 2, lapgn2_so_code_12 },
    { "lapgn2_so_code_13", 2, lapgn2_so_code_13 },
    { "lapgn2_so_code_14", 2, lapgn2_so_code_14 },
    { "lapgn2_so_code_15", 3, lapgn2_so_code_15 },
    { "lapgn2_so_code_16", 5, lapgn2_so_code_16 },
    { "lapgn2_so_code_17", 2, lapgn2_so_code_17 },
    { "lapgn2_so_code_18", 3, lapgn2_so_code_18 },
    { "lapgn2_so_code_19", 1, lapgn2_so_code_19 },
    { "lapgn2_so_code_20", 9, lapgn2_so_code_20 },
    { "lapgn2_so_code_21", 2, lapgn2_so_code_21 },
    { "lapgn2_so_code_22", 10, lapgn2_so_code_22 },
    { "lapgn2_so_code_23", 2, lapgn2_so_code_23 },
    { "lapgn2_so_code_24", 4, lapgn2_so_code_24 },
    { "lapgn2_so_code_25", 2, lapgn2_so_code_25 },
    { "lapgn2_so_code_26", 4, lapgn2_so_code_26 },
    { "lapgn2_so_code_27", 8, lapgn2_so_code_27 },
    { "lapgn2_so_code_28", 9, lapgn2_so_code_28 },
    { "lapgn2_so_code_29", 6, lapgn2_so_code_29 },
    { "lapgn2_so_code_30", 2, lapgn2_so_code_30 },
    { "lapgn2_so_code_31", 11, lapgn2_so_code_31 },
    { "lapgn2_so_code_32", 11, lapgn2_so_code_32 },
    { "lapgn2_so_code_33", 11, lapgn2_so_code_33 },
    { "lapgn2_so_code_34", 17, lapgn2_so_code_34 },
    { "lapgn2_so_code_35", 8, lapgn2_so_code_35 },
    { "lapgn2_so_code_36", 3, lapgn2_so_code_36 },
    { "lapgn2_so_code_37", 5, lapgn2_so_code_37 },
    { "lapgn2_so_code_38", 15, lapgn2_so_code_38 },
    { "lapgn2_so_code_39", 7, lapgn2_so_code_39 },
    { "lapgn2_so_code_40", 8, lapgn2_so_code_40 },
    { "lapgn2_so_code_41", 6, lapgn2_so_code_41 }
  };

int
decl_lapgn2_so_ac5e3191a78617f3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lapgn2_so_ac5e3191a78617f3);
  return (0);
}

DECLARE_COMPILED_CODE ("lapgn2.so", 3, decl_lapgn2_so_ac5e3191a78617f3, lapgn2_so_ac5e3191a78617f3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lapgn2_so_data_ac5e3191a78617f3 [5151] =
  "\x61\x4d\xe1\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x25\xb1"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82"
  "\x88\xb1\x25\xb1\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\xb1\x25\xb1\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d"
  "\xb0\x84\x88\xb1\x25\xb1\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x85\x88\x0d\xbe\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x86\x88\x1d\x08"
  "\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x25\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x25\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x25\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x85\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x1b\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x07\x0d\x28\x0d\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x85\xb1\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x85\xb1\x1b\x24\x28\x0d\x1c\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x24\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x25\x1b\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x1b\x25\x1b\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x85\x1b\x25\x1b\x24\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b"
  "\xb1\x25\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\xc1\x08\x1b\x25\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\xb1\x1b\x24"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x08\x85\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x07\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x85\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x85\x07\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1e\xb7\x2a\x1e\xb5\x2a"
  "\xb4\x2a\xb3\x2a\xb2\x2a\x1e\x1e\x17\x0d\x0d\x0d\x0d\x1b\x1b\x0d"
  "\x0d\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\xb6\x1b\x1b\x0d\x1b\xb1\x1b\x17\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62"
  "\x61\x63\x6b\x2f\x6c\x61\x70\x67\x6e\x32\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x13\x2a\x6e\x65\x65\x64\x65\x64\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x73\x2a\x02\x02\x07\x0a\x81\x85\x02\x06\x08"
  "\x81\x83\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x09\x10\x02\x02"
  "\x02\x04\x0e\x65\x71\x76\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e"
  "\x02\x0c\x0c\x81\x85\x02\x0b\x0a\x81\x83\x02\x0a\x08\x81\x83\x02"
  "\x09\x06\x81\x85\x02\x08\x04\x83\x04\x0b\x15\x02\x02\x02\x04\x06"
  "\x64\x65\x6c\x76\x21\x02\x11\x0c\x81\x85\x02\x10\x0a\x81\x83\x02"
  "\x0f\x08\x81\x83\x02\x0e\x06\x81\x85\x02\x0d\x04\x83\x04\x0b\x15"
  "\x02\x02\x02\x04\x13\x65\x71\x76\x2d\x73\x65\x74\x2d\x64\x69\x66"
  "\x66\x65\x72\x65\x6e\x63\x65\x02\x16\x0c\x81\x85\x02\x15\x0a\x81"
  "\x83\x02\x14\x08\x81\x83\x02\x13\x06\x81\x87\x02\x12\x04\x83\x04"
  "\x0b\x15\x02\x11\x2a\x64\x65\x61\x64\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x73\x2a\x02\x04\x05\x6d\x65\x6d\x76\x02\x18\x06\x81\x85"
  "\x02\x17\x04\x83\x04\x05\x0d\x02\x02\x0f\x2a\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x6d\x61\x70\x2a\x09\x16\x2a\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x2d\x74\x6f\x2d\x64\x65\x6c\x65\x74\x65\x2a\x0a"
  "\x03\x0a\x09\x03\x04\x18\x64\x65\x6c\x65\x74\x65\x2d\x70\x73\x65"
  "\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x02\x1e\x0e"
  "\x81\x81\x02\x1d\x0c\x81\x81\x02\x1c\x0a\x81\x81\x02\x1b\x08\x81"
  "\x85\x02\x1a\x06\x81\x83\x02\x19\x04\x82\x02\x0d\x1b\x0b\x02\x08"
  "\x16\x2a\x70\x72\x65\x66\x69\x78\x2d\x69\x6e\x73\x74\x72\x75\x63"
  "\x74\x69\x6f\x6e\x73\x2a\x0c\x02\x0c\x02\x04\x07\x61\x70\x70\x65"
  "\x6e\x64\x0d\x02\x23\x0c\x81\x85\x02\x22\x0a\x81\x83\x02\x21\x08"
  "\x81\x83\x02\x20\x06\x81\x87\x02\x1f\x04\x83\x04\x0b\x15\x0e\x02"
  "\x09\x16\x2a\x73\x75\x66\x66\x69\x78\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x73\x2a\x0f\x02\x0f\x02\x04\x0d\x02\x28\x0c"
  "\x81\x85\x02\x27\x0a\x81\x83\x02\x26\x08\x81\x83\x02\x25\x06\x81"
  "\x85\x02\x24\x04\x83\x04\x0b\x15\x10\x02\x0a\x09\x02\x04\x16\x62"
  "\x69\x6e\x64\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x6f\x72\x2d\x76\x61"
  "\x6c\x75\x65\x73\x03\x0f\x6e\x65\x65\x64\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x21\x11\x03\x15\x70\x72\x65\x66\x69\x78\x2d\x69\x6e"
  "\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x21\x12\x04\x2d\x0c\x81"
  "\x87\x02\x2c\x0a\x81\x87\x02\x2b\x08\x81\x87\x02\x2a\x06\x85\x08"
  "\x29\x04\x83\x04\x0b\x17\x13\x02\x0b\x03\x11\x02\x2f\x06\x83\x04"
  "\x2e\x04\x81\x83\x02\x05\x0b\x14\x02\x0c\x09\x02\x05\x16\x70\x73"
  "\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c"
  "\x69\x61\x73\x15\x04\x0f\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74"
  "\x79\x70\x65\x3f\x16\x03\x32\x08\x81\x85\x02\x31\x06\x81\x85\x02"
  "\x30\x04\x84\x06\x07\x12\x17\x02\x0d\x09\x02\x04\x1c\x6d\x61\x63"
  "\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x73"
  "\x2d\x75\x6e\x69\x71\x75\x65\x3f\x02\x34\x06\x81\x83\x02\x33\x04"
  "\x83\x04\x05\x0d\x18\x02\x0e\x09\x02\x04\x25\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x68\x6f\x6c\x64"
  "\x73\x2d\x75\x6e\x69\x71\x75\x65\x2d\x76\x61\x6c\x75\x65\x3f\x02"
  "\x36\x06\x81\x83\x02\x35\x04\x83\x04\x05\x0d\x19\x02\x0f\x09\x02"
  "\x05\x1a\x69\x73\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73\x3f\x02\x38\x06\x81\x85"
  "\x02\x37\x04\x84\x06\x05\x0d\x1a\x02\x10\x09\x02\x04\x21\x70\x73"
  "\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x73\x61"
  "\x76\x65\x64\x2d\x69\x6e\x74\x6f\x2d\x68\x6f\x6d\x65\x3f\x02\x3b"
  "\x08\x81\x83\x02\x3a\x06\x81\x83\x02\x39\x04\x83\x04\x07\x10\x1b"
  "\x02\x11\x09\x02\x05\x15\x04\x16\x03\x15\x6d\x61\x79\x62\x65\x2d"
  "\x6e\x65\x65\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x15\x04"
  "\x40\x0c\x81\x85\x02\x3f\x0a\x81\x85\x02\x3e\x08\x81\x8b\x02\x3d"
  "\x06\x81\x85\x02\x3c\x04\x84\x06\x0b\x18\x1c\x02\x12\x02\x1d\x49"
  "\x6e\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x20\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x20\x74\x79\x70\x65\x73\x3a\x04\x16\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x73\x2d\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c"
  "\x65\x3f\x1d\x05\x06\x65\x72\x72\x6f\x72\x03\x42\x06\x81\x85\x02"
  "\x41\x04\x84\x06\x05\x0f\x1e\x02\x13\x03\x0e\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x74\x79\x70\x65\x1f\x04\x1b\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x74\x79\x70\x65\x73\x2d\x63\x6f\x6d\x70\x61\x74"
  "\x69\x62\x6c\x65\x3f\x20\x03\x45\x08\x81\x85\x02\x44\x06\x81\x85"
  "\x02\x43\x04\x84\x06\x07\x0f\x21\x02\x14\x06\x66\x6c\x6f\x61\x74"
  "\x04\x0a\x62\x6f\x6f\x6c\x65\x61\x6e\x3d\x3f\x02\x46\x04\x84\x06"
  "\x03\x0c\x22\x02\x15\x09\x03\x06\x14\x6c\x6f\x61\x64\x2d\x61\x6c"
  "\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x04\x16\x03\x18"
  "\x73\x74\x6f\x72\x65\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x6f\x72\x2d"
  "\x76\x61\x6c\x75\x65\x73\x21\x23\x03\x1d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x21\x24\x04\x1c\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x3e\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x72\x61\x6e"
  "\x73\x66\x65\x72\x25\x03\x12\x07\x4f\x14\x81\x89\x02\x4e\x12\x81"
  "\x87\x02\x4d\x10\x81\x85\x02\x4c\x0e\x81\x85\x02\x4b\x0c\x81\x85"
  "\x02\x4a\x0a\x81\x8d\x02\x49\x08\x81\x89\x02\x48\x06\x81\x85\x02"
  "\x47\x04\x84\x06\x13\x27\x26\x02\x16\x04\x15\x6c\x6f\x61\x64\x2d"
  "\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x27"
  "\x03\x13\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x28\x03\x51\x06\x81\x85\x02\x50\x04\x84\x06\x05"
  "\x0d\x29\x02\x17\x09\x03\x03\x11\x64\x65\x6c\x65\x74\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x21\x2a\x06\x18\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x65\x2d\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x04\x16\x03\x23\x03\x24\x04\x25\x03\x15\x73\x75\x66\x66"
  "\x69\x78\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x21"
  "\x2b\x08\x5b\x16\x81\x89\x02\x5a\x14\x81\x87\x02\x59\x12\x81\x85"
  "\x02\x58\x10\x81\x85\x02\x57\x0e\x81\x85\x02\x56\x0c\x81\x8d\x02"
  "\x55\x0a\x81\x89\x02\x54\x08\x81\x85\x02\x53\x06\x81\x85\x02\x52"
  "\x04\x84\x06\x15\x2b\x2c\x02\x18\x04\x19\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x2d\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x21\x2d\x03\x28\x03\x5d\x06\x81\x85\x02\x5c\x04\x84\x06\x05"
  "\x0d\x2e\x02\x19\x09\x03\x05\x1c\x61\x6c\x6c\x6f\x63\x61\x74\x65"
  "\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x03\x23\x03\x61\x0a\x81\x83\x02\x60\x08\x81\x89\x02"
  "\x5f\x06\x81\x85\x02\x5e\x04\x83\x04\x09\x14\x2f\x02\x1a\x03\x24"
  "\x03\x28\x03\x63\x06\x81\x83\x02\x62\x04\x83\x04\x05\x0d\x30\x02"
  "\x1b\x09\x02\x09\x02\x06\x1a\x61\x64\x64\x2d\x70\x73\x65\x75\x64"
  "\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73"
  "\x03\x11\x03\x67\x0a\x81\x85\x02\x66\x08\x81\x85\x02\x65\x06\x81"
  "\x8d\x02\x64\x04\x84\x06\x09\x15\x31\x02\x1c\x09\x02\x09\x02\x05"
  "\x17\x64\x65\x6c\x65\x74\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x04\x18\x64\x65\x6c\x65\x74\x65\x2d"
  "\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x32\x03\x15\x64\x6f\x6e\x74\x2d\x6e\x65\x65\x64\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x73\x21\x33\x03\x14\x64\x6f\x6e\x74\x2d\x6e"
  "\x65\x65\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x34\x05\x6f"
  "\x12\x81\x83\x02\x6e\x10\x81\x83\x02\x6d\x0e\x81\x85\x02\x6c\x0c"
  "\x84\x06\x6b\x0a\x81\x87\x02\x6a\x08\x81\x85\x02\x69\x06\x81\x83"
  "\x02\x68\x04\x83\x04\x11\x22\x35\x02\x1d\x02\x09\x02\x09\x02\x04"
  "\x1a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x03\x0f\x64\x65\x61\x64"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x36\x05\x15\x73\x61\x76"
  "\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x03\x12\x05\x78\x14\x81\x85\x02\x77\x12\x84\x06\x76\x10\x81"
  "\x85\x02\x75\x0e\x81\x83\x02\x74\x0c\x81\x83\x02\x73\x0a\x81\x83"
  "\x02\x72\x08\x81\x87\x02\x71\x06\x81\x83\x02\x70\x04\x83\x04\x13"
  "\x25\x37\x02\x1e\x09\x03\x02\x17\x64\x65\x6c\x65\x74\x65\x2d\x64"
  "\x65\x61\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x21\x38\x02"
  "\x0a\x63\x6c\x65\x61\x72\x2d\x6d\x61\x70\x39\x02\x13\x65\x6d\x70"
  "\x74\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x04"
  "\x7e\x0e\x81\x83\x02\x7d\x0c\x81\x83\x02\x7c\x0a\x81\x83\x02\x7b"
  "\x08\x81\x81\x02\x7a\x06\x81\x81\x02\x79\x04\x82\x02\x0d\x1b\x3a"
  "\x02\x1f\x09\x02\x03\x17\x63\x6c\x65\x61\x72\x2d\x6d\x61\x70\x2d"
  "\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x02\x80\x01\x06"
  "\x81\x81\x02\x7f\x04\x82\x02\x05\x0d\x3b\x02\x20\x04\x63\x64\x72"
  "\x04\x63\x61\x72\x09\x02\x09\x02\x05\x16\x73\x61\x76\x65\x2d\x6d"
  "\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x04"
  "\x32\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x04\x8b\x01\x18\x81\x89"
  "\x02\x8a\x01\x16\x81\x8b\x02\x89\x01\x14\x81\x89\x02\x88\x01\x12"
  "\x81\x89\x02\x87\x01\x10\x81\x87\x02\x86\x01\x0e\x81\x89\x02\x85"
  "\x01\x0c\x81\x87\x02\x84\x01\x0a\x81\x87\x02\x83\x01\x08\x81\x85"
  "\x02\x82\x01\x06\x81\x83\x02\x81\x01\x04\xff\x03\x17\x28\x32\x02"
  "\x21\x09\x03\x04\x0f\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c"
  "\x69\x61\x73\x3c\x04\x1a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x3d"
  "\x03\x28\x03\x1a\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x73\x61\x76"
  "\x65\x64\x2d\x69\x6e\x74\x6f\x2d\x68\x6f\x6d\x65\x3f\x3e\x05\x22"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x77\x69\x74\x68\x6f\x75\x74\x2d\x75\x6e\x6c\x6f\x61\x64"
  "\x3f\x03\x15\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x68\x6f\x6d\x65\x03\x36\x08\x96\x01\x18\x81\x87\x02"
  "\x95\x01\x16\x81\x8d\x02\x94\x01\x14\x81\x89\x02\x93\x01\x12\x81"
  "\x87\x02\x92\x01\x10\x81\x87\x02\x91\x01\x0e\x81\x87\x02\x90\x01"
  "\x0c\x81\x87\x02\x8f\x01\x0a\x81\x87\x02\x8e\x01\x08\x81\x87\x02"
  "\x8d\x01\x06\x81\x87\x02\x8c\x01\x04\x85\x08\x17\x2d\x3f\x02\x22"
  "\x04\x17\x69\x73\x2d\x61\x6c\x69\x61\x73\x2d\x66\x6f\x72\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x3f\x40\x04\x05\x65\x71\x76\x3f\x03"
  "\x1b\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x63\x6c\x61\x73\x73\x3d\x77\x6f\x72\x64\x3f\x03\x11\x63\x6c\x65"
  "\x61\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x21\x41\x04\x25"
  "\x03\x1f\x05\x1c\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x1f"
  "\x04\x0d\x04\x1d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x3e\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x72\x61\x6e\x73\x66\x65\x72"
  "\x0d\x0a\xa1\x01\x18\x81\x87\x02\xa0\x01\x16\x81\x89\x02\x9f\x01"
  "\x14\x81\x87\x02\x9e\x01\x12\x81\x87\x02\x9d\x01\x10\x81\x87\x02"
  "\x9c\x01\x0e\x81\x85\x02\x9b\x01\x0c\x81\x85\x02\x9a\x01\x0a\x81"
  "\x87\x02\x99\x01\x08\x81\x85\x02\x98\x01\x06\x81\x85\x02\x97\x01"
  "\x04\x84\x06\x17\x30\x42\x02\x23\x05\x1f\x06\x1d\x72\x65\x75\x73"
  "\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x61\x6c\x69\x61\x73\x21\x43\x04\x16\x02\x38\x04\x1b\x61"
  "\x64\x64\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x61\x6c\x69\x61\x73\x21\x44\x04\x25\x03\x12\x04\x0d"
  "\x04\x2d\x03\x2b\x0b\xb2\x01\x24\x81\x89\x02\xb1\x01\x22\x81\x87"
  "\x02\xb0\x01\x20\x81\x85\x02\xaf\x01\x1e\x81\x87\x02\xae\x01\x1c"
  "\x81\x85\x02\xad\x01\x1a\x81\x85\x02\xac\x01\x18\x81\x8d\x02\xab"
  "\x01\x16\x81\x89\x02\xaa\x01\x14\x81\x87\x02\xa9\x01\x12\x81\x85"
  "\x02\xa8\x01\x10\x81\x85\x02\xa7\x01\x0e\x81\x83\x02\xa6\x01\x0c"
  "\x81\x85\x02\xa5\x01\x0a\x81\x83\x02\xa4\x01\x08\x81\x87\x02\xa3"
  "\x01\x06\x85\x08\xa2\x01\x04\x81\x87\x02\x23\x3d\x45\x02\x24\x06"
  "\x43\x03\x24\x03\x11\x05\x1f\x03\x12\x04\x0d\x07\xba\x01\x12\x81"
  "\x8b\x02\xb9\x01\x10\x81\x87\x02\xb8\x01\x0e\x81\x85\x02\xb7\x01"
  "\x0c\x81\x83\x02\xb6\x01\x0a\x81\x83\x02\xb5\x01\x08\x83\x04\xb4"
  "\x01\x06\x81\x83\x02\xb3\x01\x04\x84\x06\x11\x22\x0d\x02\x25\x06"
  "\x1c\x72\x65\x75\x73\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73\x46\x03\x2a\x03"
  "\xbd\x01\x08\x81\x85\x02\xbc\x01\x06\x81\x85\x02\xbb\x01\x04\x86"
  "\x0a\x07\x0f\x47\x02\x26\x04\x3c\x03\x36\x03\x11\x61\x6c\x69\x61"
  "\x73\x2d\x69\x73\x2d\x75\x6e\x69\x71\x75\x65\x3f\x48\x04\xc2\x01"
  "\x0c\x81\x8b\x02\xc1\x01\x0a\x81\x8b\x02\xc0\x01\x08\x81\x89\x02"
  "\xbf\x01\x06\x81\x89\x02\xbe\x01\x04\x86\x0a\x0b\x16\x49\x02\x27"
  "\x05\x1f\x06\x43\x04\x16\x02\x38\x04\x44\x04\x25\x03\x28\x03\x2b"
  "\x04\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x72\x67"
  "\x65\x74\x2d\x61\x6c\x69\x61\x73\x21\x25\x0a\xd1\x01\x20\x81\x87"
  "\x02\xd0\x01\x1e\x81\x85\x02\xcf\x01\x1c\x81\x8d\x02\xce\x01\x1a"
  "\x81\x85\x02\xcd\x01\x18\x81\x87\x02\xcc\x01\x16\x81\x85\x02\xcb"
  "\x01\x14\x81\x8b\x02\xca\x01\x12\x81\x83\x02\xc9\x01\x10\x81\x85"
  "\x02\xc8\x01\x0e\x81\x85\x02\xc7\x01\x0c\x81\x83\x02\xc6\x01\x0a"
  "\x81\x85\x02\xc5\x01\x08\x81\x8b\x02\xc4\x01\x06\x87\x0c\xc3\x01"
  "\x04\x81\x8b\x02\x1f\x37\x16\x02\x28\x06\x43\x03\x11\x05\x1f\x03"
  "\x28\x03\x1e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x65\x6d"
  "\x70\x6f\x72\x61\x72\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21"
  "\x4a\x06\xd8\x01\x10\x81\x87\x02\xd7\x01\x0e\x81\x85\x02\xd6\x01"
  "\x0c\x81\x83\x02\xd5\x01\x0a\x81\x85\x02\xd4\x01\x08\x81\x83\x02"
  "\xd3\x01\x06\x81\x85\x02\xd2\x01\x04\x86\x0a\x0f\x1e\x4b\x02\x29"
  "\x06\x46\x03\x2a\x02\x38\x04\x44\x03\x28\x06\xe0\x01\x12\x81\x83"
  "\x02\xdf\x01\x10\x81\x83\x02\xde\x01\x0e\x81\x83\x02\xdd\x01\x0c"
  "\x81\x83\x02\xdc\x01\x0a\x82\x02\xdb\x01\x08\x81\x85\x02\xda\x01"
  "\x06\x81\x87\x02\xd9\x01\x04\x85\x08\x11\x20\x4c\x02\x2a\x06\x46"
  "\x03\x2a\x03\x11\x03\x28\x05\xe6\x01\x0e\x81\x83\x02\xe5\x01\x0c"
  "\x81\x83\x02\xe4\x01\x0a\x81\x83\x02\xe3\x01\x08\x82\x02\xe2\x01"
  "\x06\x83\x04\xe1\x01\x04\x84\x06\x0d\x19\x28\x2a\x28\x04\x4c\x04"
  "\x4b\x04\x16\x06\x49\x04\x47\x04\x0d\x04\x45\x06\x42\x04\x3f\x04"
  "\x32\x04\x3b\x04\x3a\x04\x37\x04\x35\x04\x31\x04\x30\x04\x2f\x04"
  "\x2e\x04\x2c\x04\x29\x04\x26\x04\x22\x04\x21\x04\x1e\x04\x1c\x04"
  "\x1b\x04\x1a\x04\x19\x04\x18\x04\x17\x04\x14\x06\x13\x04\x10\x04"
  "\x0e\x04\x0b\x04\x04\x04\x04\x04\x04\x30\x1c\x74\x65\x6d\x70\x6f"
  "\x72\x61\x72\x79\x2d\x63\x6f\x70\x79\x2d\x69\x66\x2d\x61\x76\x61"
  "\x69\x6c\x61\x62\x6c\x65\x1b\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x63\x6f\x70\x79\x2d\x69\x66\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c"
  "\x65\x1e\x77\x69\x74\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x6f\x70\x79\x21\x1a"
  "\x77\x69\x74\x68\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x6f"
  "\x70\x79\x2d\x61\x6c\x69\x61\x73\x21\x46\x43\x1c\x6d\x6f\x76\x65"
  "\x2d\x74\x6f\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x21\x18\x6d\x6f\x76\x65\x2d\x74\x6f\x2d"
  "\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x17"
  "\x6c\x6f\x61\x64\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x21\x1f\x41\x39\x0b\x63\x6c\x65\x61\x72\x2d"
  "\x6d\x61\x70\x21\x0f\x73\x61\x76\x65\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x21\x2a\x44\x4a\x24\x25\x2d\x3d\x27\x20\x1d\x1f\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x73\x2d\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x3c\x3e\x40\x1a"
  "\x61\x6c\x69\x61\x73\x2d\x68\x6f\x6c\x64\x73\x2d\x75\x6e\x69\x71"
  "\x75\x65\x2d\x76\x61\x6c\x75\x65\x3f\x48\x14\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x68\x61\x73\x2d\x61\x6c\x69\x61\x73\x3f\x15\x23"
  "\x2b\x12\x0f\x0c\x38\x0a\x36\x33\x34\x10\x6e\x65\x65\x64\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x73\x21\x11\x09\x30\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
lapgn2_so_data_ac5e3191a78617f3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lapgn2_so_data_ac5e3191a78617f3 [0]))), (sizeof (prog_lapgn2_so_data_ac5e3191a78617f3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("lapgn2.so", lapgn2_so_data_ac5e3191a78617f3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lapgn2.so", "cb3f35c156265f3b")
