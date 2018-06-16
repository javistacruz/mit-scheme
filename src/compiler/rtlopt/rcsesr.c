/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 5
#define DEBUGGING_LABEL_1_2 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto memory__stack_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (memory__stack_offset_3)
DEFLABEL (memory__stack_offset_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_6 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define ENVIRONMENT_LABEL_2_3 27
#define DEBUGGING_LABEL_2_2 26
#define OBJECT_2_4 25
#define OBJECT_2_3 24
#define OBJECT_2_2 23
#define OBJECT_2_1 22
#define OBJECT_2_0 21
#define EXECUTE_CACHE_2_9 19
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_2_4);
      goto stack_pushP_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pushP_17)
DEFLABEL (stack_pushP_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_34)
  if ((Wrd5.Obj) == (current_block [OBJECT_2_1]))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_33;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_32)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_31;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd7.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_28)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_26)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_25;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd33.uLng) == 26)
    goto label_20;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_20)
  if ((Wrd24.Obj) == (current_block [OBJECT_2_3]))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_2_4]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_15)
  (Wrd24.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_14)
  (Wrd17.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_11)
  (Wrd20.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_6 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define ENVIRONMENT_LABEL_3_3 27
#define DEBUGGING_LABEL_3_2 26
#define OBJECT_3_4 25
#define OBJECT_3_3 24
#define OBJECT_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_9 19
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_3_4);
      goto stack_popP_8;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_popP_17)
DEFLABEL (stack_popP_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_34)
  if ((Wrd5.Obj) == (current_block [OBJECT_3_1]))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_33;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_32)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_31;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd7.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_28)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_26)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_25;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd33.uLng) == 26)
    goto label_20;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_20)
  if ((Wrd24.Obj) == (current_block [OBJECT_3_3]))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_3_4]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_15)
  (Wrd24.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_14)
  (Wrd17.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_11)
  (Wrd20.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto stack_referenceP_4;

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

DEFLABEL (stack_referenceP_10)
DEFLABEL (stack_referenceP_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_4_1]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_15;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_14)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_13;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_13)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_6 13
#define LABEL_5_10 15
#define LABEL_5_13 17
#define LABEL_5_15 19
#define LABEL_5_16 21
#define ENVIRONMENT_LABEL_5_3 38
#define DEBUGGING_LABEL_5_2 37
#define OBJECT_5_2 36
#define OBJECT_5_1 35
#define OBJECT_5_0 34
#define EXECUTE_CACHE_5_14 23
#define EXECUTE_CACHE_5_12 25
#define EXECUTE_CACHE_5_7 27
#define FREE_REFERENCE_5_1 30
#define FREE_REFERENCE_5_0 31
#define FREE_ASSIGNMENT_5_0 33
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto stack_reference_quantity_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_reference_quantity_18)
DEFLABEL (stack_reference_quantity_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_31;
  Wrd6 = Wrd10;

DEFLABEL (label_30)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_29;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_29;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd21.Lng) = ((Wrd22.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_29;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_27;
  Wrd27 = Wrd31;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_23;
  Wrd7 = Wrd11;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd21.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_16])), (Wrd21.pObj), (Wrd18.Obj));

DEFLABEL (label_16)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_15])), (Wrd8.pObj));

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd28.pObj));

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_9 5
#define LABEL_6_10 7
#define LABEL_6_11 9
#define LABEL_6_5 11
#define LABEL_6_6 13
#define LABEL_6_12 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_7 21
#define ENVIRONMENT_LABEL_6_3 37
#define DEBUGGING_LABEL_6_2 36
#define OBJECT_6_3 35
#define OBJECT_6_2 34
#define OBJECT_6_1 33
#define OBJECT_6_0 32
#define EXECUTE_CACHE_6_15 23
#define EXECUTE_CACHE_6_8 25
#define FREE_REFERENCE_6_1 28
#define FREE_REFERENCE_6_0 29
#define FREE_ASSIGNMENT_6_0 31
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_6_4);
      goto set_stack_reference_quantityB_9;

    case 1:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_6_10);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_6_11);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stack_reference_quantityB_17)
DEFLABEL (set_stack_reference_quantityB_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_31;
  Wrd6 = Wrd10;

DEFLABEL (label_30)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_29;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_29;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_29;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_27;
  Wrd27 = Wrd31;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd15.uLng) == 1)
    goto label_18;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_18)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd12.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_25;
  Wrd17 = Wrd21;

DEFLABEL (label_24)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);
  goto label_20;

DEFLABEL (label_23)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_11])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_15)
  goto label_20;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_10])), (Wrd18.pObj));

DEFLABEL (label_14)
  (Wrd17.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_14])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_5);
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define LABEL_7_11 17
#define ENVIRONMENT_LABEL_7_3 32
#define DEBUGGING_LABEL_7_2 31
#define OBJECT_7_2 30
#define OBJECT_7_1 29
#define OBJECT_7_0 28
#define EXECUTE_CACHE_7_13 19
#define EXECUTE_CACHE_7_12 21
#define FREE_REFERENCE_7_1 24
#define FREE_REFERENCE_7_0 25
#define FREE_ASSIGNMENT_7_0 27
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto stack_pointer_adjustB_5;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pointer_adjustB_14)
DEFLABEL (stack_pointer_adjustB_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_29;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (! ((Wrd71.Lng) > 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd69.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_28)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_27;
  Wrd18 = Wrd22;

DEFLABEL (label_26)
  Wrd17 = Wrd18;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_25;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_25;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd34.Lng) + (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_25;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_24)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd45.Obj) = ((Wrd37.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd37.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_21)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_20;
  Wrd50 = Wrd54;

DEFLABEL (label_19)
  Wrd49 = Wrd50;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_18;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd62.Lng))))
    goto label_18;
  (Wrd56.Obj) = ((Wrd60.pObj) [2]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (label_18)
  (Wrd65.Obj) = (current_block [OBJECT_7_0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_12)
  (Wrd56.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd51.pObj));

DEFLABEL (label_11)
  (Wrd50.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  if ((Wrd45.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_9])), (Wrd37.pObj), (Wrd29.Obj));

DEFLABEL (label_10)
  goto label_21;

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 16
#define DEBUGGING_LABEL_8_2 15
#define OBJECT_8_1 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_7 9
#define FREE_REFERENCE_8_0 12
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto stack_pointer_invalidateB_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pointer_invalidateB_6)
DEFLABEL (stack_pointer_invalidateB_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd13.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_8_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define OBJECT_9_0 12
#define FREE_REFERENCE_9_0 9
#define FREE_ASSIGNMENT_9_0 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_9_4);
      goto stack_invalidateB_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_invalidateB_7)
DEFLABEL (stack_invalidateB_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd18.Obj) = (current_block [OBJECT_9_0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_10 19
#define LABEL_10_14 21
#define ENVIRONMENT_LABEL_10_3 31
#define DEBUGGING_LABEL_10_2 30
#define EXECUTE_CACHE_10_13 23
#define FREE_REFERENCE_10_1 26
#define FREE_REFERENCE_10_0 27
#define FREE_ASSIGNMENT_10_0 29
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto stack_region_invalidateB_9;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_10_14);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_region_invalidateB_19)
DEFLABEL (stack_region_invalidateB_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_7;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_37;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd68.Lng) < (Wrd70.Lng))
    goto label_30;

DEFLABEL (label_29)
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  Wrd16 = Wrd20;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd36.Obj) = ((Wrd28.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd28.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  if ((Wrd36.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_9])), (Wrd28.pObj), (Wrd29.Obj));

DEFLABEL (label_14)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_8])), (Wrd17.pObj));

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_36;
  Wrd48 = Wrd52;

DEFLABEL (label_35)
  Wrd47 = Wrd48;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_34;
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_34;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd62.Lng) = ((Wrd63.Lng) + (Wrd65.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_34;
  (Wrd66.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_32;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_32;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_7;

DEFLABEL (label_32)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd49.pObj));

DEFLABEL (label_15)
  (Wrd48.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_7 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_9 15
#define LABEL_11_14 17
#define LABEL_11_15 19
#define LABEL_11_10 21
#define ENVIRONMENT_LABEL_11_3 37
#define DEBUGGING_LABEL_11_2 36
#define OBJECT_11_1 35
#define OBJECT_11_0 34
#define EXECUTE_CACHE_11_16 23
#define EXECUTE_CACHE_11_11 25
#define EXECUTE_CACHE_11_6 27
#define FREE_REFERENCE_11_1 30
#define FREE_REFERENCE_11_0 31
#define FREE_ASSIGNMENT_11_0 33
#define FREE_REFERENCES_LABEL_11_0 22
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcsesr_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto stack_reference_invalidateB_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_reference_invalidateB_15)
DEFLABEL (stack_reference_invalidateB_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_23;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_23;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_23;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_13])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_11)
  goto label_16;

DEFLABEL (label_21)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_12])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_14])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_8])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_9 7
#define LABEL_6 9
#define LABEL_12 11
#define LABEL_13 13
#define LABEL_14 15
#define LABEL_7 17
#define LABEL_11 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define ENVIRONMENT_LABEL_3 46
#define DEBUGGING_LABEL_2 45
#define PURIFICATION_ROOT 44
#define OBJECT_5 43
#define OBJECT_4 42
#define OBJECT_3 41
#define OBJECT_2 40
#define OBJECT_1 39
#define OBJECT_0 38
#define EXECUTE_CACHE_15 27
#define EXECUTE_CACHE_10 29
#define FREE_REFERENCE_2 32
#define FREE_REFERENCE_1 33
#define FREE_REFERENCE_0 34
#define GLOBAL_EXECUTE_CACHE_5 36
#define FREE_REFERENCES_LABEL_0 26
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rcsesr_so_23cfa064ea5fd92b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_13);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto expression_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_5)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_17])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_14)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_13)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	2,
	2,
	3,
	3,
	3,
	1,
	1,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
      goto label_12;
    blocks = (current_block [OBJECT_5]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_16])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_12)
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
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_24;
  Wrd11 = Wrd15;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_22;
  Wrd17 = Wrd21;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;
  Wrd10 = Wrd14;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_18;
  Wrd16 = Wrd20;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_16;
  Wrd22 = Wrd26;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd23.pObj));

DEFLABEL (label_10)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd17.pObj));

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd11.pObj));

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rcsesr_so_23cfa064ea5fd92b [11] =
  {
    { "rcsesr_so_code_1", 1, rcsesr_so_code_1 },
    { "rcsesr_so_code_2", 8, rcsesr_so_code_2 },
    { "rcsesr_so_code_3", 8, rcsesr_so_code_3 },
    { "rcsesr_so_code_4", 4, rcsesr_so_code_4 },
    { "rcsesr_so_code_5", 10, rcsesr_so_code_5 },
    { "rcsesr_so_code_6", 10, rcsesr_so_code_6 },
    { "rcsesr_so_code_7", 8, rcsesr_so_code_7 },
    { "rcsesr_so_code_8", 3, rcsesr_so_code_8 },
    { "rcsesr_so_code_9", 3, rcsesr_so_code_9 },
    { "rcsesr_so_code_10", 10, rcsesr_so_code_10 },
    { "rcsesr_so_code_11", 10, rcsesr_so_code_11 }
  };

int
decl_rcsesr_so_23cfa064ea5fd92b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcsesr_so_23cfa064ea5fd92b);
  return (0);
}

DECLARE_COMPILED_CODE ("rcsesr.so", 12, decl_rcsesr_so_23cfa064ea5fd92b, rcsesr_so_23cfa064ea5fd92b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcsesr_so_data_23cfa064ea5fd92b [1699] =
  "\x33\x12\xb5\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x22\x29\x21\x9c"
  "\x2b\xb9\x1d\xb0\x82\x88\x07\x87\xc1\xba\x0d\xc1\xbb\x28\x0d\xbc"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x07\x81\xb2\x0d\xb3\x28\xb4"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\xb2\x0d\xb3\x28\xb4\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x85\x88\xb2"
  "\x02\x86\x0d\xbb\x25\x0d\xba\xb3\x24\x28\x0d\xbf\x28\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\xc2"
  "\x02\x86\xb3\x25\xb3\xb2\x24\x28\xb7\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xc2\x1c\x81\xb2\x25\xb2\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\xb3\x25\xb3\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x25\xb3\xb2\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x86"
  "\xb3\x25\xb3\xb2\x24\x28\x0d\x28\xb7\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbf\x17\xb8\x88\xb0\xc3\x1b\x1b\x0d\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\xb3\xb2\x17\xb7\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\xb6\x2a\xb5\x2a\xb1\x2a\x1e"
  "\x1e\x17\x28\x0d\x26\x0d\x0d\x0d\x24\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x63\x73\x65\x73\x72"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x04\x83\x04\x03\x02"
  "\x04\x63\x64\x72\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65"
  "\x6e\x74\x04\x63\x61\x72\x03\x1b\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x3f\x02\x15\x12\x81\x85\x02\x14\x10\x81\x85\x02\x13\x0e\x81"
  "\x85\x02\x12\x0c\x81\x83\x02\x11\x0a\x81\x85\x02\x10\x08\x81\x85"
  "\x02\x0f\x06\x81\x83\x02\x0e\x04\x83\x04\x11\x1c\x02\x0f\x70\x6f"
  "\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x03\x02\x1d\x12"
  "\x81\x85\x02\x1c\x10\x81\x85\x02\x1b\x0e\x81\x85\x02\x1a\x0c\x81"
  "\x83\x02\x19\x0a\x81\x85\x02\x18\x08\x81\x85\x02\x17\x06\x81\x83"
  "\x02\x16\x04\x83\x04\x11\x1c\x02\x07\x6f\x66\x66\x73\x65\x74\x03"
  "\x02\x21\x0a\x81\x83\x02\x20\x08\x81\x83\x02\x1f\x06\x81\x83\x02"
  "\x1e\x04\x83\x04\x09\x12\x02\x0d\x1d\x2a\x73\x74\x61\x63\x6b\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x71\x75\x61\x6e\x74\x69"
  "\x74\x69\x65\x73\x2a\x02\x0f\x2a\x73\x74\x61\x63\x6b\x2d\x6f\x66"
  "\x66\x73\x65\x74\x2a\x03\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d"
  "\x63\x61\x72\x2d\x63\x64\x72\x04\x05\x61\x73\x73\x3d\x09\x03\x0d"
  "\x6e\x65\x77\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x04\x2b\x16\x81"
  "\x85\x02\x2a\x14\x81\x85\x02\x29\x12\x81\x85\x02\x28\x10\x81\x83"
  "\x02\x27\x0e\x81\x87\x02\x26\x0c\x81\x85\x02\x25\x0a\x81\x83\x02"
  "\x24\x08\x81\x85\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04\x15\x27"
  "\x0a\x02\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x0d\x02\x03\x04"
  "\x04\x09\x03\x35\x16\x81\x8b\x02\x34\x14\x81\x85\x02\x33\x12\x81"
  "\x87\x02\x32\x10\x81\x89\x02\x31\x0e\x81\x87\x02\x30\x0c\x81\x85"
  "\x02\x2f\x0a\x81\x85\x02\x2e\x08\x81\x85\x02\x2d\x06\x81\x83\x02"
  "\x2c\x04\x84\x06\x15\x26\x0b\x02\x08\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x0c\x02\x17\x2a\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x0d\x03\x03"
  "\x20\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21"
  "\x0e\x04\x19\x73\x74\x61\x63\x6b\x2d\x72\x65\x67\x69\x6f\x6e\x2d"
  "\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x0f\x03\x3d\x12\x81"
  "\x83\x02\x3c\x10\x81\x83\x02\x3b\x0e\x81\x83\x02\x3a\x0c\x81\x83"
  "\x02\x39\x0a\x81\x83\x02\x38\x08\x81\x83\x02\x37\x06\x83\x04\x36"
  "\x04\x81\x83\x02\x11\x21\x10\x02\x09\x0c\x0d\x02\x03\x0e\x02\x40"
  "\x08\x81\x81\x02\x3f\x06\x81\x81\x02\x3e\x04\x82\x02\x07\x11\x0e"
  "\x02\x0a\x02\x02\x43\x08\x81\x83\x02\x42\x06\x81\x81\x02\x41\x04"
  "\x82\x02\x07\x0f\x0d\x02\x0b\x02\x03\x04\x0a\x64\x65\x6c\x2d\x61"
  "\x73\x73\x3d\x21\x0c\x02\x4d\x16\x81\x89\x02\x4c\x14\x81\x89\x02"
  "\x4b\x12\x81\x8d\x02\x4a\x10\x81\x8d\x02\x49\x0e\x81\x85\x02\x48"
  "\x0c\x81\x83\x02\x47\x0a\x81\x89\x02\x46\x08\x81\x89\x02\x45\x06"
  "\x81\x85\x02\x44\x04\x84\x06\x15\x20\x11\x02\x0c\x0d\x02\x03\x03"
  "\x17\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61"
  "\x6c\x69\x64\x61\x74\x65\x21\x04\x04\x0c\x04\x57\x16\x81\x8b\x02"
  "\x56\x14\x81\x87\x02\x55\x12\x81\x89\x02\x54\x10\x81\x87\x02\x53"
  "\x0e\x81\x85\x02\x52\x0c\x81\x83\x02\x51\x0a\x81\x83\x02\x50\x08"
  "\x81\x85\x02\x4f\x06\x81\x83\x02\x4e\x04\x83\x04\x15\x26\x0c\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x09\x0c\x1c\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x0f\x12"
  "\x73\x74\x61\x63\x6b\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65"
  "\x21\x1a\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d"
  "\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x16\x73\x74\x61\x63"
  "\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x61\x64\x6a\x75\x73\x74"
  "\x21\x1e\x73\x65\x74\x2d\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x21\x19"
  "\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x71\x75\x61\x6e\x74\x69\x74\x79\x11\x73\x74\x61\x63\x6b\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x0b\x73\x74\x61\x63\x6b\x2d"
  "\x70\x6f\x70\x3f\x0c\x73\x74\x61\x63\x6b\x2d\x70\x75\x73\x68\x3f"
  "\x15\x6d\x65\x6d\x6f\x72\x79\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x6f"
  "\x66\x66\x73\x65\x74\x0e\x04\x11\x04\x0d\x04\x0e\x04\x10\x06\x0b"
  "\x04\x0a\x04\x04\x04\x04\x04\x0e\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x04\x63\x61\x72\x02\x3d"
  "\x0e\x6c\x69\x73\x74\x2d\x64\x65\x6c\x65\x74\x6f\x72\x21\x04\x04"
  "\x16\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x05\x1d\x64\x65\x6c\x65\x74\x65\x2d\x61"
  "\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x03\x0c\x1a\x80\x80\x04\x0b\x18\x81\x81\x02\x0a"
  "\x16\x81\x81\x02\x09\x14\x81\x87\x02\x08\x12\x81\x85\x02\x07\x10"
  "\x81\x8d\x02\x06\x0e\x81\x8b\x02\x05\x0c\x81\x89\x02\x04\x0a\x81"
  "\x83\x02\x03\x08\x81\x89\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83"
  "\x02\x19\x2f";

SCHEME_OBJECT *
rcsesr_so_data_23cfa064ea5fd92b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcsesr_so_data_23cfa064ea5fd92b [0]))), (sizeof (prog_rcsesr_so_data_23cfa064ea5fd92b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_18]));
}

DECLARE_COMPILED_DATA_NS ("rcsesr.so", rcsesr_so_data_23cfa064ea5fd92b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcsesr.so", "4b571e055ffc56de")
