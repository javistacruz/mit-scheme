/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:11-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_11 13
#define ENVIRONMENT_LABEL_1_3 26
#define DEBUGGING_LABEL_1_2 25
#define EXECUTE_CACHE_1_13 15
#define EXECUTE_CACHE_1_12 17
#define EXECUTE_CACHE_1_8 19
#define EXECUTE_CACHE_1_6 21
#define FREE_REFERENCE_1_0 24
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_4);
      goto po_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (po_9)
DEFLABEL (po_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_7 17
#define LABEL_2_14 19
#define LABEL_2_16 21
#define ENVIRONMENT_LABEL_2_3 34
#define DEBUGGING_LABEL_2_2 33
#define OBJECT_2_1 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_15 23
#define EXECUTE_CACHE_2_13 25
#define EXECUTE_CACHE_2_9 27
#define FREE_REFERENCE_2_0 30
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd51;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto debug_find_procedure_13;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_find_procedure_21)
DEFLABEL (debug_find_procedure_13)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_11;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_11;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_35;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd29.Obj) = (Rsp [1]);
  if ((Wrd29.Obj) == Rvl)
    goto label_31;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd51.Obj) = (Rsp [1]);
  if (! ((Wrd51.Obj) == Rvl))
    goto label_28;

DEFLABEL (label_31)
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_30;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  Rvl = ((Wrd45.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_33)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_6 9
#define LABEL_3_7 11
#define LABEL_3_12 13
#define LABEL_3_14 15
#define LABEL_3_16 17
#define LABEL_3_13 19
#define LABEL_3_17 21
#define LABEL_3_18 23
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_19 25
#define EXECUTE_CACHE_3_15 27
#define EXECUTE_CACHE_3_11 29
#define EXECUTE_CACHE_3_10 31
#define EXECUTE_CACHE_3_8 33
#define FREE_REFERENCE_3_0 36
#define FREE_REFERENCES_LABEL_3_0 24
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto debug_find_continuation_14;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto loop_11;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_find_continuation_21)
DEFLABEL (debug_find_continuation_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd7.pObj));

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_3_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd29.Obj) = (Rsp [1]);
  if ((Wrd29.Obj) == Rvl)
    goto label_29;

DEFLABEL (label_28)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_11;

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_19)
  (Wrd19.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_30;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  Rvl = ((Wrd33.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_8 7
#define LABEL_4_10 9
#define LABEL_4_7 11
#define LABEL_4_11 13
#define LABEL_4_15 15
#define LABEL_4_13 17
#define TAG_4_14 7
#define LABEL_4_17 19
#define ENVIRONMENT_LABEL_4_3 36
#define DEBUGGING_LABEL_4_2 35
#define OBJECT_4_0 34
#define EXECUTE_CACHE_4_18 21
#define EXECUTE_CACHE_4_16 23
#define EXECUTE_CACHE_4_12 25
#define EXECUTE_CACHE_4_9 27
#define EXECUTE_CACHE_4_6 29
#define FREE_REFERENCE_4_1 32
#define FREE_REFERENCE_4_0 33
#define FREE_REFERENCES_LABEL_4_0 20
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd6;
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
      goto debug_find_entry_node_8;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto lambda_15;

    case 8:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_find_entry_node_14)
DEFLABEL (debug_find_entry_node_8)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd6.Obj) = (Rsp [0]);
  if (Rvl == (Wrd6.Obj))
    goto label_19;

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd13.pObj));

DEFLABEL (label_11)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_21;
  Wrd21 = Wrd25;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_4_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if (Rvl == (Wrd8.Obj))
    goto label_24;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_9 7
#define LABEL_5_7 9
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_15 15
#define LABEL_5_16 17
#define LABEL_5_18 19
#define LABEL_5_19 21
#define LABEL_5_20 23
#define ENVIRONMENT_LABEL_5_3 47
#define DEBUGGING_LABEL_5_2 46
#define OBJECT_5_4 45
#define OBJECT_5_3 44
#define OBJECT_5_2 43
#define OBJECT_5_1 42
#define OBJECT_5_0 41
#define EXECUTE_CACHE_5_22 25
#define EXECUTE_CACHE_5_21 27
#define EXECUTE_CACHE_5_17 29
#define EXECUTE_CACHE_5_12 31
#define EXECUTE_CACHE_5_11 33
#define EXECUTE_CACHE_5_10 35
#define EXECUTE_CACHE_5_8 37
#define EXECUTE_CACHE_5_6 39
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_5_4);
      goto debug_where_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_where_13)
DEFLABEL (debug_where_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_18);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define TAG_6_9 2
#define LABEL_6_11 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define EXECUTE_CACHE_6_12 11
#define EXECUTE_CACHE_6_10 13
#define EXECUTE_CACHE_6_7 15
#define FREE_REFERENCE_6_0 18
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto write_rtl_instructions_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_6_11);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_rtl_instructions_6)
DEFLABEL (write_rtl_instructions_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_6_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_11])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define LABEL_7_15 13
#define LABEL_7_14 15
#define LABEL_7_17 17
#define ENVIRONMENT_LABEL_7_3 36
#define DEBUGGING_LABEL_7_2 35
#define OBJECT_7_0 34
#define EXECUTE_CACHE_7_18 19
#define EXECUTE_CACHE_7_16 21
#define EXECUTE_CACHE_7_13 23
#define EXECUTE_CACHE_7_12 25
#define EXECUTE_CACHE_7_10 27
#define EXECUTE_CACHE_7_7 29
#define FREE_REFERENCE_7_1 32
#define FREE_REFERENCE_7_0 33
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto dump_rtl_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dump_rtl_10)
DEFLABEL (dump_rtl_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_7_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_17])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define TAG_8_7 2
#define LABEL_8_10 9
#define ENVIRONMENT_LABEL_8_3 20
#define DEBUGGING_LABEL_8_2 19
#define EXECUTE_CACHE_8_11 11
#define EXECUTE_CACHE_8_9 13
#define EXECUTE_CACHE_8_8 15
#define FREE_REFERENCE_8_0 18
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      goto show_rtl_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_rtl_6)
DEFLABEL (show_rtl_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_8_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define TAG_9_7 2
#define LABEL_9_10 9
#define LABEL_9_12 11
#define LABEL_9_14 13
#define ENVIRONMENT_LABEL_9_3 28
#define DEBUGGING_LABEL_9_2 27
#define EXECUTE_CACHE_9_16 15
#define EXECUTE_CACHE_9_15 17
#define EXECUTE_CACHE_9_13 19
#define EXECUTE_CACHE_9_11 21
#define EXECUTE_CACHE_9_9 23
#define EXECUTE_CACHE_9_8 25
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto show_bblock_rtl_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_bblock_rtl_8)
DEFLABEL (show_bblock_rtl_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_9_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define TAG_10_9 2
#define LABEL_10_6 9
#define TAG_10_7 3
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define LABEL_10_14 17
#define LABEL_10_15 19
#define LABEL_10_16 21
#define LABEL_10_17 23
#define LABEL_10_18 25
#define LABEL_10_19 27
#define ENVIRONMENT_LABEL_10_3 44
#define DEBUGGING_LABEL_10_2 43
#define OBJECT_10_2 42
#define OBJECT_10_1 41
#define OBJECT_10_0 40
#define EXECUTE_CACHE_10_10 29
#define FREE_REFERENCE_10_3 32
#define FREE_REFERENCE_10_2 33
#define FREE_REFERENCE_10_1 34
#define FREE_REFERENCE_10_0 35
#define FREE_ASSIGNMENT_10_2 37
#define FREE_ASSIGNMENT_10_1 38
#define FREE_ASSIGNMENT_10_0 39
#define FREE_REFERENCES_LABEL_10_0 28
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      goto write_instructions_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto lambda_36;

    case 3:
      current_block = (Rpc - LABEL_10_6);
      goto swapB_35;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_10_18);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_10_19);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_instructions_34)
DEFLABEL (write_instructions_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_38;
  Wrd13 = Wrd17;

DEFLABEL (label_37)
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_6])));
  Rhp += 3;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  Wrd37 = Wrd39;
  (Wrd38.Obj) = (Rsp [3]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [3]) = (Wrd35.Obj);
  ((Wrd37.pObj) [4]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_8])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd40.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd14.pObj));

DEFLABEL (label_23)
  (Wrd13.Obj) = Rvl;
  goto label_37;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_10_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_35)
  CLOSURE_HEADER (LABEL_10_6);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  Wrd5 = Wrd9;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_60)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_57)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  Wrd57 = Wrd61;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_51)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_48)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  Wrd109 = Wrd113;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_42)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_19])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_32)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_18])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_31)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_17])), (Wrd110.pObj));

DEFLABEL (label_30)
  (Wrd109.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_16])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_15])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_14])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_11])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define TAG_11_9 2
#define LABEL_11_6 9
#define TAG_11_7 3
#define LABEL_11_11 11
#define LABEL_11_12 13
#define LABEL_11_13 15
#define LABEL_11_14 17
#define LABEL_11_15 19
#define LABEL_11_16 21
#define LABEL_11_17 23
#define LABEL_11_18 25
#define LABEL_11_19 27
#define LABEL_11_20 29
#define LABEL_11_21 31
#define LABEL_11_22 33
#define ENVIRONMENT_LABEL_11_3 52
#define DEBUGGING_LABEL_11_2 51
#define OBJECT_11_2 50
#define OBJECT_11_1 49
#define OBJECT_11_0 48
#define EXECUTE_CACHE_11_10 35
#define FREE_REFERENCE_11_4 38
#define FREE_REFERENCE_11_3 39
#define FREE_REFERENCE_11_2 40
#define FREE_REFERENCE_11_1 41
#define FREE_REFERENCE_11_0 42
#define FREE_ASSIGNMENT_11_3 44
#define FREE_ASSIGNMENT_11_2 45
#define FREE_ASSIGNMENT_11_1 46
#define FREE_ASSIGNMENT_11_0 47
#define FREE_REFERENCES_LABEL_11_0 34
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto pp_instructions_27;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_45;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto swapB_44;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_11_16);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_11_19);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_11_20);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_11_21);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_11_22);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pp_instructions_43)
DEFLABEL (pp_instructions_27)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_47;
  Wrd17 = Wrd21;

DEFLABEL (label_46)
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_6])));
  Rhp += 4;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  (Wrd45.Obj) = (Rsp [4]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [3]) = (Wrd42.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [4]) = (Wrd39.Obj);
  ((Wrd44.pObj) [5]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_8])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [5]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Rsp [5]) = (Wrd47.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [3]) = (Wrd47.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd18.pObj));

DEFLABEL (label_29)
  (Wrd17.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_11_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_44)
  CLOSURE_HEADER (LABEL_11_6);

DEFLABEL (swapB_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  Wrd5 = Wrd9;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_78)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_75)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  Wrd57 = Wrd61;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_69)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [4]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_66)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  Wrd109 = Wrd113;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_60)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [3]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_57)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_4]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  Wrd161 = Wrd165;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_51)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [2]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_22])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_41)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_21])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_40)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_20])), (Wrd162.pObj));

DEFLABEL (label_39)
  (Wrd161.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_19])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_38)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_18])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_37)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_17])), (Wrd110.pObj));

DEFLABEL (label_36)
  (Wrd109.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_16])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_35)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_15])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_34)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_14])), (Wrd58.pObj));

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_32)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_31)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_11])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_81;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_8 7
#define LABEL_12_5 9
#define LABEL_12_9 11
#define ENVIRONMENT_LABEL_12_3 22
#define DEBUGGING_LABEL_12_2 21
#define OBJECT_12_1 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_11 13
#define EXECUTE_CACHE_12_10 15
#define EXECUTE_CACHE_12_7 17
#define FREE_REFERENCES_LABEL_12_0 12
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto show_rtl_instruction_4;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_rtl_instruction_8)
DEFLABEL (show_rtl_instruction_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_9 7
#define LABEL_13_7 9
#define TAG_13_8 3
#define LABEL_13_13 11
#define LABEL_13_14 13
#define LABEL_13_15 15
#define LABEL_13_16 17
#define LABEL_13_17 19
#define LABEL_13_18 21
#define LABEL_13_11 23
#define LABEL_13_19 25
#define LABEL_13_22 27
#define LABEL_13_21 29
#define LABEL_13_24 31
#define LABEL_13_25 33
#define LABEL_13_30 35
#define LABEL_13_27 37
#define LABEL_13_28 39
#define LABEL_13_34 41
#define LABEL_13_29 43
#define LABEL_13_32 45
#define LABEL_13_33 47
#define LABEL_13_37 49
#define LABEL_13_40 51
#define LABEL_13_38 53
#define LABEL_13_39 55
#define LABEL_13_42 57
#define LABEL_13_45 59
#define LABEL_13_46 61
#define LABEL_13_47 63
#define LABEL_13_48 65
#define ENVIRONMENT_LABEL_13_3 107
#define DEBUGGING_LABEL_13_2 106
#define OBJECT_13_5 105
#define OBJECT_13_4 104
#define OBJECT_13_3 103
#define OBJECT_13_2 102
#define OBJECT_13_1 101
#define OBJECT_13_0 100
#define EXECUTE_CACHE_13_49 67
#define EXECUTE_CACHE_13_44 69
#define EXECUTE_CACHE_13_43 71
#define EXECUTE_CACHE_13_41 73
#define EXECUTE_CACHE_13_36 75
#define EXECUTE_CACHE_13_35 77
#define EXECUTE_CACHE_13_31 79
#define EXECUTE_CACHE_13_26 81
#define EXECUTE_CACHE_13_23 83
#define EXECUTE_CACHE_13_20 85
#define EXECUTE_CACHE_13_12 87
#define EXECUTE_CACHE_13_10 89
#define EXECUTE_CACHE_13_6 91
#define FREE_REFERENCE_13_2 94
#define FREE_REFERENCE_13_1 95
#define FREE_REFERENCE_13_0 96
#define FREE_ASSIGNMENT_13_1 98
#define FREE_ASSIGNMENT_13_0 99
#define FREE_REFERENCES_LABEL_13_0 66
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto show_fg_34;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto swapB_48;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_13_14);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_13_16);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_13_18);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_13_22);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_13_24);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_13_25);
      goto lambda_13;

    case 16:
      current_block = (Rpc - LABEL_13_30);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_13_27);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_13_28);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_13_34);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_13_29);
      goto continuation_4;

    case 21:
      current_block = (Rpc - LABEL_13_32);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_13_33);
      goto lambda_12;

    case 23:
      current_block = (Rpc - LABEL_13_37);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_13_40);
      goto label_45;

    case 25:
      current_block = (Rpc - LABEL_13_38);
      goto continuation_6;

    case 26:
      current_block = (Rpc - LABEL_13_39);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_13_42);
      goto continuation_7;

    case 28:
      current_block = (Rpc - LABEL_13_45);
      goto continuation_8;

    case 29:
      current_block = (Rpc - LABEL_13_46);
      goto continuation_9;

    case 30:
      current_block = (Rpc - LABEL_13_47);
      goto continuation_10;

    case 31:
      current_block = (Rpc - LABEL_13_48);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_fg_47)
DEFLABEL (show_fg_34)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  Wrd13 = Wrd19;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  ((Wrd13.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (lambda_49)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_13_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_13_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_41]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_44]));

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_40])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_22])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (swapB_48)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (swapB_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  Wrd5 = Wrd9;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_68)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_65)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  Wrd57 = Wrd61;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_59)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_58)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_41)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_40)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_13_16])), (Wrd58.pObj));

DEFLABEL (label_39)
  (Wrd57.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_38)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_37)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_13_13])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_71;

DEFLABEL (lambda_50)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_13_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_77;
  Wrd11 = Wrd15;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_36]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_28);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_33]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_75;
  Wrd7 = Wrd11;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_35]));

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_34])), (Wrd8.pObj));

DEFLABEL (label_44)
  (Wrd7.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_30])), (Wrd12.pObj));

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_51)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_13_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_43]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_49]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_48);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_36]));

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define TAG_14_8 1
#define LABEL_14_5 7
#define TAG_14_6 2
#define LABEL_14_13 9
#define LABEL_14_14 11
#define LABEL_14_15 13
#define LABEL_14_10 15
#define TAG_14_11 6
#define LABEL_14_19 17
#define LABEL_14_16 19
#define LABEL_14_17 21
#define ENVIRONMENT_LABEL_14_3 41
#define DEBUGGING_LABEL_14_2 40
#define OBJECT_14_0 39
#define EXECUTE_CACHE_14_22 23
#define EXECUTE_CACHE_14_21 25
#define EXECUTE_CACHE_14_20 27
#define EXECUTE_CACHE_14_18 29
#define EXECUTE_CACHE_14_12 31
#define EXECUTE_CACHE_14_9 33
#define FREE_REFERENCE_14_0 36
#define FREE_ASSIGNMENT_14_0 38
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_14_4);
      goto show_fg_node_14;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto swapB_21;

    case 3:
      current_block = (Rpc - LABEL_14_13);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_14_14);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_14_15);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_14_10);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_14_19);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_fg_node_20)
DEFLABEL (show_fg_node_14)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (swapB_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  Wrd5 = Wrd9;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_14_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_18)
  goto label_24;

DEFLABEL (label_29)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_14_13])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_14_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (label_33)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 9
#define DEBUGGING_LABEL_15_2 8
#define OBJECT_15_0 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto fg_print_entry_node_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_entry_node_3)
DEFLABEL (fg_print_entry_node_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_4;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

DEFLABEL (label_4)
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto fg_print_object_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_object_4)
DEFLABEL (fg_print_object_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_8 9
#define LABEL_17_12 11
#define LABEL_17_14 13
#define LABEL_17_10 15
#define LABEL_17_17 17
#define LABEL_17_20 19
#define LABEL_17_18 21
#define LABEL_17_23 23
#define LABEL_17_15 25
#define LABEL_17_24 27
#define LABEL_17_21 29
#define ENVIRONMENT_LABEL_17_3 49
#define DEBUGGING_LABEL_17_2 48
#define EXECUTE_CACHE_17_22 31
#define EXECUTE_CACHE_17_19 33
#define EXECUTE_CACHE_17_16 35
#define EXECUTE_CACHE_17_13 37
#define EXECUTE_CACHE_17_11 39
#define EXECUTE_CACHE_17_9 41
#define EXECUTE_CACHE_17_6 43
#define FREE_REFERENCE_17_1 46
#define FREE_REFERENCE_17_0 47
#define FREE_REFERENCES_LABEL_17_0 30
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_17_4);
      goto fg_print_blocks_9;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_17_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_17_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_17_20);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_17_23);
      goto label_13;

    case 11:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_17_24);
      goto label_14;

    case 13:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_blocks_16)
DEFLABEL (fg_print_blocks_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_20])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_23])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_14);
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_24])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_12])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_4 5
#define LABEL_18_6 7
#define LABEL_18_9 9
#define LABEL_18_11 11
#define LABEL_18_13 13
#define LABEL_18_17 15
#define LABEL_18_21 17
#define LABEL_18_25 19
#define LABEL_18_29 21
#define LABEL_18_33 23
#define LABEL_18_37 25
#define LABEL_18_41 27
#define LABEL_18_42 29
#define LABEL_18_43 31
#define LABEL_18_38 33
#define LABEL_18_39 35
#define LABEL_18_34 37
#define LABEL_18_35 39
#define LABEL_18_30 41
#define LABEL_18_31 43
#define LABEL_18_26 45
#define LABEL_18_27 47
#define LABEL_18_22 49
#define LABEL_18_23 51
#define LABEL_18_18 53
#define LABEL_18_55 55
#define LABEL_18_19 57
#define LABEL_18_14 59
#define LABEL_18_15 61
#define LABEL_18_59 63
#define LABEL_18_47 65
#define LABEL_18_48 67
#define LABEL_18_51 69
#define LABEL_18_52 71
#define LABEL_18_53 73
#define LABEL_18_54 75
#define LABEL_18_56 77
#define LABEL_18_58 79
#define LABEL_18_61 81
#define ENVIRONMENT_LABEL_18_3 136
#define DEBUGGING_LABEL_18_2 135
#define OBJECT_18_1 134
#define OBJECT_18_0 133
#define EXECUTE_CACHE_18_62 83
#define EXECUTE_CACHE_18_60 85
#define EXECUTE_CACHE_18_57 87
#define EXECUTE_CACHE_18_50 89
#define EXECUTE_CACHE_18_49 91
#define EXECUTE_CACHE_18_46 93
#define EXECUTE_CACHE_18_45 95
#define EXECUTE_CACHE_18_44 97
#define EXECUTE_CACHE_18_40 99
#define EXECUTE_CACHE_18_36 101
#define EXECUTE_CACHE_18_32 103
#define EXECUTE_CACHE_18_28 105
#define EXECUTE_CACHE_18_24 107
#define EXECUTE_CACHE_18_20 109
#define EXECUTE_CACHE_18_16 111
#define EXECUTE_CACHE_18_12 113
#define EXECUTE_CACHE_18_10 115
#define EXECUTE_CACHE_18_8 117
#define EXECUTE_CACHE_18_7 119
#define FREE_REFERENCE_18_10 122
#define FREE_REFERENCE_18_9 123
#define FREE_REFERENCE_18_8 124
#define FREE_REFERENCE_18_7 125
#define FREE_REFERENCE_18_6 126
#define FREE_REFERENCE_18_5 127
#define FREE_REFERENCE_18_4 128
#define FREE_REFERENCE_18_3 129
#define FREE_REFERENCE_18_2 130
#define FREE_REFERENCE_18_1 131
#define FREE_REFERENCE_18_0 132
#define FREE_REFERENCES_LABEL_18_0 82
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_18_4);
      goto fg_print_node_38;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_18_13);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_18_17);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_18_21);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_18_25);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_18_29);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_18_33);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_18_37);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_18_41);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_18_42);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_18_43);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_18_38);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_18_39);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_18_34);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_18_35);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_18_30);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_18_31);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_18_26);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_18_27);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_18_22);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_18_23);
      goto continuation_28;

    case 25:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_32;

    case 26:
      current_block = (Rpc - LABEL_18_55);
      goto label_49;

    case 27:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_35;

    case 29:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_34;

    case 30:
      current_block = (Rpc - LABEL_18_59);
      goto label_50;

    case 31:
      current_block = (Rpc - LABEL_18_47);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_18_48);
      goto continuation_16;

    case 33:
      current_block = (Rpc - LABEL_18_51);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_18_52);
      goto continuation_24;

    case 35:
      current_block = (Rpc - LABEL_18_53);
      goto continuation_27;

    case 36:
      current_block = (Rpc - LABEL_18_54);
      goto continuation_30;

    case 37:
      current_block = (Rpc - LABEL_18_56);
      goto continuation_33;

    case 38:
      current_block = (Rpc - LABEL_18_58);
      goto continuation_36;

    case 39:
      current_block = (Rpc - LABEL_18_61);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_node_52)
DEFLABEL (fg_print_node_38)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_54;

DEFLABEL (label_53)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_53;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_85;
  Wrd6 = Wrd10;

DEFLABEL (label_84)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_57;
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd131.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd131.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_18_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_10]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;
  Wrd5 = Wrd9;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_60]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_18_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_18_58);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_59])), (Wrd6.pObj));

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_83;
  Wrd14 = Wrd18;

DEFLABEL (label_82)
  (Wrd20.Obj) = (Rsp [0]);
  if (! ((Wrd20.Obj) == (Wrd14.Obj)))
    goto label_60;
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd124.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_18_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_9]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_59;
  Wrd6 = Wrd10;

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_56]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_57]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_18_56);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_60]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_55])), (Wrd7.pObj));

DEFLABEL (label_49)
  (Wrd6.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_81;
  Wrd22 = Wrd26;

DEFLABEL (label_80)
  (Wrd28.Obj) = (Rsp [0]);
  if (! ((Wrd28.Obj) == (Wrd22.Obj)))
    goto label_61;
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd117.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_24]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_18_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_18_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_18_54);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_61)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_79;
  Wrd30 = Wrd34;

DEFLABEL (label_78)
  (Wrd36.Obj) = (Rsp [0]);
  if (! ((Wrd36.Obj) == (Wrd30.Obj)))
    goto label_62;
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_26]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_27]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd110.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_28]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_18_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_18_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_18_53);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_62)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_4]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_77;
  Wrd38 = Wrd42;

DEFLABEL (label_76)
  (Wrd44.Obj) = (Rsp [0]);
  if (! ((Wrd44.Obj) == (Wrd38.Obj)))
    goto label_63;
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_30]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_31]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd103.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_18_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_18_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_18_52);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_63)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_5]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_75;
  Wrd46 = Wrd50;

DEFLABEL (label_74)
  (Wrd52.Obj) = (Rsp [0]);
  if (! ((Wrd52.Obj) == (Wrd46.Obj)))
    goto label_64;
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_34]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_35]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_18_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_18_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_18_51);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_64)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_6]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_73;
  Wrd54 = Wrd58;

DEFLABEL (label_72)
  (Wrd60.Obj) = (Rsp [0]);
  if (! ((Wrd60.Obj) == (Wrd54.Obj)))
    goto label_65;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_38]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_39]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_40]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_18_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_49]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_18_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_62]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18_61);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_65)
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_7]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_71;
  Wrd62 = Wrd66;

DEFLABEL (label_70)
  (Wrd68.Obj) = (Rsp [0]);
  if (! ((Wrd68.Obj) == (Wrd62.Obj)))
    goto label_67;

DEFLABEL (label_66)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_43]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_44]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18_43);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_46]));

DEFLABEL (label_67)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_8]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_69;
  Wrd70 = Wrd74;

DEFLABEL (label_68)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_66;
  (Rsp [1]) = (Wrd76.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [0]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_45]));

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_42])), (Wrd71.pObj));

DEFLABEL (label_48)
  (Wrd70.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_41])), (Wrd63.pObj));

DEFLABEL (label_47)
  (Wrd62.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_37])), (Wrd55.pObj));

DEFLABEL (label_46)
  (Wrd54.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_33])), (Wrd47.pObj));

DEFLABEL (label_45)
  (Wrd46.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_29])), (Wrd39.pObj));

DEFLABEL (label_44)
  (Wrd38.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_25])), (Wrd31.pObj));

DEFLABEL (label_43)
  (Wrd30.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_21])), (Wrd23.pObj));

DEFLABEL (label_42)
  (Wrd22.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_17])), (Wrd15.pObj));

DEFLABEL (label_41)
  (Wrd14.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_13])), (Wrd7.pObj));

DEFLABEL (label_40)
  (Wrd6.Obj) = Rvl;
  goto label_84;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_8 7
#define LABEL_19_9 9
#define LABEL_19_10 11
#define LABEL_19_11 13
#define LABEL_19_13 15
#define LABEL_19_14 17
#define LABEL_19_6 19
#define ENVIRONMENT_LABEL_19_3 36
#define DEBUGGING_LABEL_19_2 35
#define OBJECT_19_0 34
#define EXECUTE_CACHE_19_16 21
#define EXECUTE_CACHE_19_15 23
#define EXECUTE_CACHE_19_12 25
#define EXECUTE_CACHE_19_7 27
#define FREE_REFERENCE_19_1 30
#define FREE_REFERENCE_19_0 31
#define FREE_ASSIGNMENT_19_0 33
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto fg_print_rvalue_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_19_14);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_rvalue_13)
DEFLABEL (fg_print_rvalue_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_25;
  Wrd19 = Wrd23;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_23;
  Wrd29 = Wrd33;

DEFLABEL (label_22)
  (Wrd38.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd39.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_19)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_18;
  Wrd51 = Wrd55;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_11])), (Wrd52.pObj));

DEFLABEL (label_11)
  (Wrd51.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_10])), (Wrd39.pObj), (Wrd35.Obj));

DEFLABEL (label_10)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_9])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_14])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_9 7
#define LABEL_20_7 9
#define LABEL_20_12 11
#define LABEL_20_10 13
#define LABEL_20_15 15
#define LABEL_20_17 17
#define ENVIRONMENT_LABEL_20_3 37
#define DEBUGGING_LABEL_20_2 36
#define OBJECT_20_0 35
#define EXECUTE_CACHE_20_19 19
#define EXECUTE_CACHE_20_18 21
#define EXECUTE_CACHE_20_16 23
#define EXECUTE_CACHE_20_14 25
#define EXECUTE_CACHE_20_13 27
#define EXECUTE_CACHE_20_11 29
#define EXECUTE_CACHE_20_8 31
#define EXECUTE_CACHE_20_6 33
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_20_4);
      goto fg_print_subproblem_8;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fg_print_subproblem_11)
DEFLABEL (fg_print_subproblem_8)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_9);

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_20_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_19]));

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
debug_so_9a29c25f5a503bd8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	2,
	2,
	1,
	1,
	3,
	3,
	1,
	3,
	3,
	1,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 20)
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

static const struct liarc_code_S arr_decl_debug_so_9a29c25f5a503bd8 [20] =
  {
    { "debug_so_code_1", 6, debug_so_code_1 },
    { "debug_so_code_2", 10, debug_so_code_2 },
    { "debug_so_code_3", 11, debug_so_code_3 },
    { "debug_so_code_4", 9, debug_so_code_4 },
    { "debug_so_code_5", 11, debug_so_code_5 },
    { "debug_so_code_6", 4, debug_so_code_6 },
    { "debug_so_code_7", 8, debug_so_code_7 },
    { "debug_so_code_8", 4, debug_so_code_8 },
    { "debug_so_code_9", 6, debug_so_code_9 },
    { "debug_so_code_10", 13, debug_so_code_10 },
    { "debug_so_code_11", 16, debug_so_code_11 },
    { "debug_so_code_12", 5, debug_so_code_12 },
    { "debug_so_code_13", 32, debug_so_code_13 },
    { "debug_so_code_14", 10, debug_so_code_14 },
    { "debug_so_code_15", 1, debug_so_code_15 },
    { "debug_so_code_16", 2, debug_so_code_16 },
    { "debug_so_code_17", 14, debug_so_code_17 },
    { "debug_so_code_18", 40, debug_so_code_18 },
    { "debug_so_code_19", 9, debug_so_code_19 },
    { "debug_so_code_20", 8, debug_so_code_20 }
  };

int
decl_debug_so_9a29c25f5a503bd8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_debug_so_9a29c25f5a503bd8);
  return (0);
}

DECLARE_COMPILED_CODE ("debug.so", 3, decl_debug_so_9a29c25f5a503bd8, debug_so_9a29c25f5a503bd8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_debug_so_data_9a29c25f5a503bd8 [4771] =
  "\x9d\x01\x23\xa7\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x24\x28"
  "\x0d\xb9\x28\x0d\xba\x28\x0d\x28\x0d\xbb\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\xc1"
  "\xbd\xc1\xbe\x0d\xbf\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb5\xb6\x0c\xb7\x24"
  "\x28\x0d\xbd\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1d\x0d\x1c\xb7\x24\x28"
  "\xb1\x28\x0d\xbf\x28\xb2\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\xc1\x02\x0c\xc1\x0c\x28\x0d\x28\x0d\x28"
  "\x0d\x28\xb2\x28\x0d\xba\x28\x0d\x1c\x28\x0d\x1c\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x86\x88\x0d\x1c\x24"
  "\x28\x0d\x1c\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1b\x24\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x28\x0d\x1c\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28"
  "\xb1\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x07\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1b\x1b\x1b\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x02\x07\x1b\x0d\x1c\x1b\x1b\x25\x0d\x1b\x1b\x1b\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x08\x8e\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x0c\x1d\x0c\x08\x0d\xbe\x0d\x1c\x25\xb6\x1b\x1b\x24\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\xb7\x28\x0d"
  "\x28\x0d\xbf\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\xb6\x25\xb6\x24\x28\x1b\x28\x1b\x28\xb1"
  "\x28\x1b\x28\xb7\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\xb9\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\xb3\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\xb2\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\xb3\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\x1d\x1b\x25\xb6\x1b\x24\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xba\x17\xb8\x88\xb0\xb2\x2a\x1b\x2a"
  "\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x17\x1b\x1b\x1b\x1b\x1b\xb7\x0d\x0d"
  "\x1b\xb6\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb1\x17"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x58\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x64\x65\x62\x75\x67"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x70\x70\x02\x03\x10"
  "\x2d\x3e\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x03"
  "\x0b\x77\x72\x69\x74\x65\x2d\x6c\x69\x6e\x65\x03\x1a\x74\x61\x67"
  "\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x69\x6f\x6e\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x05\x09\x0e\x81\x89\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02"
  "\x06\x08\x81\x83\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x0d\x1b"
  "\x02\x04\x63\x64\x72\x04\x63\x61\x72\x0d\x2a\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x73\x2a\x02\x03\x18\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f"
  "\x09\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x62"
  "\x65\x6c\x0a\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e"
  "\x61\x6d\x65\x04\x13\x16\x81\x85\x02\x12\x14\x81\x87\x02\x11\x12"
  "\x81\x85\x02\x10\x10\x81\x87\x02\x0f\x0e\x81\x85\x02\x0e\x0c\x81"
  "\x85\x02\x0d\x0a\x81\x87\x02\x0c\x08\x81\x85\x02\x0b\x06\x81\x83"
  "\x02\x0a\x04\x83\x04\x15\x23\x0b\x02\x0e\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x02\x03\x0f\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x07\x69\x6e\x74\x65\x72\x6e"
  "\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03"
  "\x09\x03\x0a\x06\x1e\x18\x81\x87\x02\x1d\x16\x81\x85\x02\x1c\x14"
  "\x81\x85\x02\x1b\x12\x81\x85\x02\x1a\x10\x81\x87\x02\x19\x0e\x81"
  "\x85\x02\x18\x0c\x81\x87\x02\x17\x0a\x81\x85\x02\x16\x08\x81\x83"
  "\x02\x15\x06\x81\x83\x02\x14\x04\x83\x04\x17\x2a\x0a\x02\x02\x12"
  "\x2a\x72\x6f\x6f\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2a\x0c\x03\x03\x03\x16\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x03\x04\x03\x15\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x6e"
  "\x6f\x64\x65\x0d\x06\x27\x14\x81\x85\x02\x26\x12\x81\x85\x02\x25"
  "\x10\x81\x85\x02\x24\x0e\x81\x85\x02\x23\x0c\x81\x83\x02\x22\x0a"
  "\x81\x83\x02\x21\x08\x81\x85\x02\x20\x06\x81\x83\x02\x1f\x04\x83"
  "\x04\x13\x25\x0e\x02\x1e\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x6f\x66\x66"
  "\x73\x65\x74\x11\x09\x4f\x66\x66\x73\x65\x74\x3a\x20\x1d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b\x15\x64\x65\x62\x75\x67"
  "\x2f\x77\x68\x65\x72\x65\x20\x2d\x2d\x20\x77\x68\x61\x74\x3f\x03"
  "\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62"
  "\x6c\x6f\x63\x6b\x3f\x03\x17\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x03\x23\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x03\x04\x06\x65\x72\x72\x6f\x72\x03\x0d\x77\x72\x69\x74\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x0f\x02\x08\x6e\x65\x77\x6c\x69\x6e"
  "\x65\x10\x04\x09\x32\x18\x81\x89\x02\x31\x16\x81\x85\x02\x30\x14"
  "\x81\x83\x02\x2f\x12\x81\x83\x02\x2e\x10\x81\x87\x02\x2d\x0e\x81"
  "\x85\x02\x2c\x0c\x81\x83\x02\x2b\x0a\x81\x83\x02\x2a\x08\x81\x83"
  "\x02\x29\x06\x81\x83\x02\x28\x04\x83\x04\x17\x30\x02\x15\x73\x68"
  "\x6f\x77\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69"
  "\x6f\x6e\x11\x02\x03\x13\x77\x72\x69\x74\x65\x2d\x69\x6e\x73\x74"
  "\x72\x75\x63\x74\x69\x6f\x6e\x73\x12\x04\x14\x77\x69\x74\x68\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x70\x6f\x72\x74\x04\x04"
  "\x36\x0a\x81\x83\x02\x35\x08\x81\x83\x02\x34\x06\x81\x83\x02\x33"
  "\x04\x84\x06\x09\x15\x13\x02\x08\x04\x72\x74\x6c\x0d\x2a\x72\x74"
  "\x6c\x2d\x67\x72\x61\x70\x68\x73\x2a\x11\x03\x03\x12\x03\x0b\x2d"
  "\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x14\x77\x69\x74\x68\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x66\x69\x6c\x65\x04\x12"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70"
  "\x65\x03\x0e\x6c\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d\x72\x74\x6c"
  "\x04\x07\x3e\x12\x81\x83\x02\x3d\x10\x81\x81\x02\x3c\x0e\x81\x83"
  "\x02\x3b\x0c\x82\x02\x3a\x0a\x81\x87\x02\x39\x08\x81\x83\x02\x38"
  "\x06\x81\x83\x02\x37\x04\x83\x04\x11\x25\x14\x02\x09\x11\x02\x03"
  "\x10\x70\x70\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73"
  "\x15\x02\x10\x04\x04\x42\x0a\x81\x83\x02\x41\x08\x81\x83\x02\x40"
  "\x06\x81\x83\x02\x3f\x04\x83\x04\x09\x15\x16\x02\x0a\x03\x15\x02"
  "\x10\x03\x04\x14\x62\x62\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d"
  "\x66\x6f\x72\x77\x61\x72\x64\x03\x0a\x72\x69\x6e\x73\x74\x2d\x72"
  "\x74\x6c\x03\x11\x07\x48\x0e\x81\x83\x02\x47\x0c\x83\x04\x46\x0a"
  "\x81\x83\x02\x45\x08\x81\x83\x02\x44\x06\x81\x83\x02\x43\x04\x83"
  "\x04\x0d\x1d\x17\x02\x0b\x02\x11\x13\x2a\x73\x68\x6f\x77\x2d\x69"
  "\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2a\x18\x11\x2a\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x72\x61\x64\x69\x78\x2a\x19\x26\x2a"
  "\x75\x6e\x70\x61\x72\x73\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79\x2d\x6e\x61"
  "\x6d\x65\x3f\x2a\x1a\x04\x06\x77\x72\x69\x74\x65\x18\x19\x1a\x05"
  "\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d"
  "\x62\x69\x6e\x64\x1b\x02\x55\x1c\x81\x83\x02\x54\x1a\x81\x85\x02"
  "\x53\x18\x81\x83\x02\x52\x16\x81\x83\x02\x51\x14\x81\x85\x02\x50"
  "\x12\x81\x83\x02\x4f\x10\x81\x83\x02\x4e\x0e\x81\x85\x02\x4d\x0c"
  "\x81\x83\x02\x4c\x0a\x81\x83\x02\x4b\x08\x81\x83\x02\x4a\x06\x81"
  "\x87\x02\x49\x04\x83\x04\x1b\x2d\x1c\x02\x0c\x02\x11\x18\x18\x2a"
  "\x70\x70\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x62\x79"
  "\x2d\x6e\x61\x6d\x65\x2a\x1d\x19\x1a\x05\x0d\x70\x72\x65\x74\x74"
  "\x79\x2d\x70\x72\x69\x6e\x74\x18\x1d\x19\x1a\x06\x05\x1b\x02\x65"
  "\x22\x81\x83\x02\x64\x20\x81\x85\x02\x63\x1e\x81\x83\x02\x62\x1c"
  "\x81\x83\x02\x61\x1a\x81\x85\x02\x60\x18\x81\x83\x02\x5f\x16\x81"
  "\x83\x02\x5e\x14\x81\x85\x02\x5d\x12\x81\x83\x02\x5c\x10\x81\x83"
  "\x02\x5b\x0e\x81\x85\x02\x5a\x0c\x81\x83\x02\x59\x0a\x81\x83\x02"
  "\x58\x08\x81\x83\x02\x57\x06\x81\x89\x02\x56\x04\x83\x04\x21\x35"
  "\x1d\x02\x0d\x06\x6c\x61\x62\x65\x6c\x13\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x14\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x68\x65\x61\x64\x65\x72"
  "\x14\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x16\x6f\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x11\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x0f\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x04\x05\x6d\x65\x6d\x71"
  "\x1a\x03\x18\x02\x10\x04\x6a\x0c\x81\x83\x02\x69\x0a\x81\x83\x02"
  "\x68\x08\x81\x83\x02\x67\x06\x81\x87\x02\x66\x04\x83\x04\x0b\x17"
  "\x19\x02\x0e\x23\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x20\x43"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x20\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x1d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x20\x42\x6c\x6f\x63\x6b\x73\x20\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x02\x21\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x20"
  "\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x71\x75\x65\x75\x65\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73"
  "\x2d\x6c\x6f\x63\x61\x74\x65\x64\x1e\x03\x1e\x0c\x04\x02\x0b\x6d"
  "\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x05\x1b\x03\x0f\x02\x10\x03"
  "\x10\x66\x67\x2f\x70\x72\x69\x6e\x74\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x0f\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65"
  "\x2d\x6d\x61\x72\x6b\x73\x0c\x03\x04\x12\x71\x75\x65\x75\x65\x2d"
  "\x6d\x61\x70\x21\x2f\x75\x6e\x73\x61\x66\x65\x03\x14\x66\x67\x2f"
  "\x70\x72\x69\x6e\x74\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65"
  "\x03\x11\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x62\x6c\x6f"
  "\x63\x6b\x03\x09\x03\x10\x66\x67\x2f\x70\x72\x69\x6e\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x73\x09\x03\x0d\x0e\x8a\x01\x42\x81\x83\x02\x89"
  "\x01\x40\x81\x83\x02\x88\x01\x3e\x81\x83\x02\x87\x01\x3c\x81\x83"
  "\x02\x86\x01\x3a\x81\x83\x02\x85\x01\x38\x81\x81\x02\x84\x01\x36"
  "\x81\x83\x02\x83\x01\x34\x81\x83\x02\x82\x01\x32\x81\x81\x02\x81"
  "\x01\x30\x83\x04\x80\x01\x2e\x81\x81\x02\x7f\x2c\x81\x83\x02\x7e"
  "\x2a\x81\x83\x02\x7d\x28\x81\x81\x02\x7c\x26\x81\x81\x02\x7b\x24"
  "\x81\x85\x02\x7a\x22\x82\x02\x79\x20\x81\x81\x02\x78\x1e\x81\x81"
  "\x02\x77\x1c\x81\x83\x02\x76\x1a\x81\x81\x02\x75\x18\x81\x81\x02"
  "\x74\x16\x81\x83\x02\x73\x14\x81\x85\x02\x72\x12\x81\x83\x02\x71"
  "\x10\x81\x83\x02\x70\x0e\x81\x85\x02\x6f\x0c\x81\x83\x02\x6e\x0a"
  "\x81\x83\x02\x6d\x08\x82\x02\x6c\x06\x81\x83\x02\x6b\x04\x82\x02"
  "\x41\x6c\x1f\x02\x0f\x02\x02\x02\x05\x1b\x03\x0c\x03\x03\x0d\x03"
  "\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x07\x94\x01\x16"
  "\x81\x85\x02\x93\x01\x14\x81\x83\x02\x92\x01\x12\x81\x83\x02\x91"
  "\x01\x10\x81\x83\x02\x90\x01\x0e\x81\x83\x02\x8f\x01\x0c\x81\x85"
  "\x02\x8e\x01\x0a\x81\x83\x02\x8d\x01\x08\x81\x83\x02\x8c\x01\x06"
  "\x81\x83\x02\x8b\x01\x04\x83\x04\x15\x2a\x1b\x02\x10\x02\x03\x0e"
  "\x66\x67\x2f\x70\x72\x69\x6e\x74\x2d\x6e\x6f\x64\x65\x0d\x02\x95"
  "\x01\x04\x83\x04\x03\x0a\x0c\x02\x11\x03\x03\x70\x6f\x02\x10\x03"
  "\x97\x01\x06\x81\x83\x02\x96\x01\x04\x83\x04\x05\x0d\x10\x02\x12"
  "\x0f\x09\x03\x03\x0f\x03\x16\x62\x6c\x6f\x63\x6b\x2d\x62\x6f\x75"
  "\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x03\x0d\x62\x6c"
  "\x6f\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x04\x03\x15\x62\x6c\x6f"
  "\x63\x6b\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x73\x03\x0f\x62\x6c\x6f\x63\x6b\x2d\x63\x68\x69\x6c\x64\x72\x65"
  "\x6e\x03\x18\x62\x6c\x6f\x63\x6b\x2d\x64\x69\x73\x6f\x77\x6e\x65"
  "\x64\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x08\xa5\x01\x1e\x81\x85"
  "\x02\xa4\x01\x1c\x81\x87\x02\xa3\x01\x1a\x81\x85\x02\xa2\x01\x18"
  "\x81\x87\x02\xa1\x01\x16\x81\x85\x02\xa0\x01\x14\x81\x83\x02\x9f"
  "\x01\x12\x81\x83\x02\x9e\x01\x10\x81\x83\x02\x9d\x01\x0e\x81\x83"
  "\x02\x9c\x01\x0c\x81\x87\x02\x9b\x01\x0a\x81\x85\x02\x9a\x01\x08"
  "\x81\x83\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x83\x04\x1d\x32"
  "\x20\x02\x13\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65"
  "\x20\x74\x79\x70\x65\x3a\x02\x0d\x70\x61\x72\x61\x6c\x6c\x65\x6c"
  "\x2d\x74\x61\x67\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x61\x67\x13\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x74\x61\x67\x08\x70\x6f\x70\x2d\x74\x61\x67\x0f"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x61\x67\x0f\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74\x61\x67\x0e\x74\x72"
  "\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61\x67\x14\x73\x74\x61\x63"
  "\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x2d\x74\x61\x67\x0c"
  "\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x10\x66\x67\x2f\x70"
  "\x72\x69\x6e\x74\x2d\x72\x76\x61\x6c\x75\x65\x21\x14\x66\x67\x2f"
  "\x70\x72\x69\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x22\x0c\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x03\x0d"
  "\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03\x0f\x03\x12"
  "\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x74\x61"
  "\x67\x03\x15\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x73\x03\x15\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x03\x17\x76"
  "\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x03\x11\x70\x6f\x70\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x03\x12\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2d\x72\x76\x61\x6c\x75\x65\x03\x12\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x2d\x72\x76\x61\x6c\x75\x65\x03\x11\x74"
  "\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x72\x76\x61\x6c\x75\x65\x03"
  "\x0b\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x04\x03\x0d\x03\x11"
  "\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74"
  "\x03\x21\x03\x15\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x73\x04\x03\x12\x70\x6e\x6f\x64\x65"
  "\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x14\xcd\x01\x52"
  "\x81\x85\x02\xcc\x01\x50\x81\x85\x02\xcb\x01\x4e\x81\x85\x02\xca"
  "\x01\x4c\x81\x85\x02\xc9\x01\x4a\x81\x85\x02\xc8\x01\x48\x81\x85"
  "\x02\xc7\x01\x46\x81\x85\x02\xc6\x01\x44\x81\x87\x02\xc5\x01\x42"
  "\x81\x85\x02\xc4\x01\x40\x81\x89\x02\xc3\x01\x3e\x81\x87\x02\xc2"
  "\x01\x3c\x81\x85\x02\xc1\x01\x3a\x81\x87\x02\xc0\x01\x38\x81\x85"
  "\x02\xbf\x01\x36\x81\x85\x02\xbe\x01\x34\x81\x87\x02\xbd\x01\x32"
  "\x81\x85\x02\xbc\x01\x30\x81\x87\x02\xbb\x01\x2e\x81\x85\x02\xba"
  "\x01\x2c\x81\x87\x02\xb9\x01\x2a\x81\x85\x02\xb8\x01\x28\x81\x87"
  "\x02\xb7\x01\x26\x81\x85\x02\xb6\x01\x24\x81\x87\x02\xb5\x01\x22"
  "\x81\x85\x02\xb4\x01\x20\x81\x85\x02\xb3\x01\x1e\x81\x85\x02\xb2"
  "\x01\x1c\x81\x85\x02\xb1\x01\x1a\x81\x85\x02\xb0\x01\x18\x81\x85"
  "\x02\xaf\x01\x16\x81\x85\x02\xae\x01\x14\x81\x85\x02\xad\x01\x12"
  "\x81\x85\x02\xac\x01\x10\x81\x85\x02\xab\x01\x0e\x81\x85\x02\xaa"
  "\x01\x0c\x81\x83\x02\xa9\x01\x0a\x81\x83\x02\xa8\x01\x08\x81\x83"
  "\x02\xa7\x01\x06\x83\x04\xa6\x01\x04\x81\x83\x02\x51\x89\x01\x02"
  "\x14\x02\x1e\x02\x1e\x03\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b"
  "\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x04\x10\x65\x6e\x71\x75"
  "\x65\x75\x65\x21\x2f\x75\x6e\x73\x61\x66\x65\x04\x1a\x03\x12\x72"
  "\x76\x61\x6c\x75\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x05\xd6\x01\x14\x81\x83\x02\xd5\x01\x12\x81\x85\x02\xd4\x01\x10"
  "\x81\x83\x02\xd3\x01\x0e\x81\x83\x02\xd2\x01\x0c\x81\x83\x02\xd1"
  "\x01\x0a\x81\x83\x02\xd0\x01\x08\x81\x83\x02\xcf\x01\x06\x81\x83"
  "\x02\xce\x01\x04\x83\x04\x13\x25\x1a\x02\x15\x02\x03\x0f\x03\x16"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x63\x61\x6e\x6f\x6e"
  "\x69\x63\x61\x6c\x3f\x03\x12\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x2d\x70\x72\x65\x66\x69\x78\x03\x18\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x03\x21\x03\x0a\x63\x66\x67\x2d\x6e\x75\x6c\x6c\x3f\x03\x0f"
  "\x63\x66\x67\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x03\x0d"
  "\x09\xde\x01\x12\x81\x83\x02\xdd\x01\x10\x81\x83\x02\xdc\x01\x0e"
  "\x81\x83\x02\xdb\x01\x0c\x81\x85\x02\xda\x01\x0a\x81\x83\x02\xd9"
  "\x01\x08\x81\x83\x02\xd8\x01\x06\x81\x83\x02\xd7\x01\x04\x83\x04"
  "\x11\x26\x15\x04\x1a\x04\x06\x20\x04\x10\x04\x0c\x04\x1b\x04\x1f"
  "\x04\x19\x04\x1d\x04\x1c\x04\x17\x04\x16\x04\x14\x04\x13\x04\x04"
  "\x0e\x04\x0a\x04\x0b\x04\x04\x18\x22\x21\x0d\x09\x0f\x0d\x73\x68"
  "\x6f\x77\x2d\x66\x67\x2d\x6e\x6f\x64\x65\x08\x73\x68\x6f\x77\x2d"
  "\x66\x67\x1e\x11\x18\x15\x12\x10\x73\x68\x6f\x77\x2d\x62\x62\x6c"
  "\x6f\x63\x6b\x2d\x72\x74\x6c\x09\x73\x68\x6f\x77\x2d\x72\x74\x6c"
  "\x09\x64\x75\x6d\x70\x2d\x72\x74\x6c\x17\x77\x72\x69\x74\x65\x2d"
  "\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73"
  "\x0c\x64\x65\x62\x75\x67\x2f\x77\x68\x65\x72\x65\x16\x64\x65\x62"
  "\x75\x67\x2f\x66\x69\x6e\x64\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f"
  "\x64\x65\x18\x64\x65\x62\x75\x67\x2f\x66\x69\x6e\x64\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x15\x64\x65\x62\x75\x67"
  "\x2f\x66\x69\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x18"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
debug_so_data_9a29c25f5a503bd8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_debug_so_data_9a29c25f5a503bd8 [0]))), (sizeof (prog_debug_so_data_9a29c25f5a503bd8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("debug.so", debug_so_data_9a29c25f5a503bd8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("debug.so", "a03f0392fb680b75")
