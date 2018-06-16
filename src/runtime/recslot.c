/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:50-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_9 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_11 13
#define EXECUTE_CACHE_1_10 15
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto Z__record_accessor_generator_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_accessor_generator_9)
DEFLABEL (Z__record_accessor_generator_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (20, (current_block [OBJECT_1_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_9 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_11 13
#define EXECUTE_CACHE_2_10 15
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__record_modifier_generator_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_modifier_generator_9)
DEFLABEL (Z__record_modifier_generator_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (20, (current_block [OBJECT_2_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_9 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define ENVIRONMENT_LABEL_3_3 20
#define DEBUGGING_LABEL_3_2 19
#define OBJECT_3_1 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_11 13
#define EXECUTE_CACHE_3_10 15
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__record_initpred_generator_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_initpred_generator_9)
DEFLABEL (Z__record_initpred_generator_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (20, (current_block [OBJECT_3_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_5 9
#define LABEL_4_10 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_13 17
#define LABEL_4_9 19
#define LABEL_4_14 21
#define LABEL_4_15 23
#define LABEL_4_16 25
#define LABEL_4_17 27
#define LABEL_4_18 29
#define LABEL_4_19 31
#define LABEL_4_21 33
#define LABEL_4_20 35
#define ENVIRONMENT_LABEL_4_3 46
#define DEBUGGING_LABEL_4_2 45
#define OBJECT_4_5 44
#define OBJECT_4_4 43
#define OBJECT_4_3 42
#define OBJECT_4_2 41
#define OBJECT_4_1 40
#define OBJECT_4_0 39
#define EXECUTE_CACHE_4_8 37
#define FREE_REFERENCES_LABEL_4_0 36
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_29;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto loop_25;

    case 14:
      current_block = (Rpc - LABEL_4_19);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_4_21);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_61)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_60;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_57)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_56;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_55)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_54;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_53)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_50;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_49)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_48;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_47)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_46;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.pObj) = (& (Rsp [1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto loop_25;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_39)
  (Wrd22.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_38)
  (Wrd15.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_37)
  (Wrd6.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_35)
  (Wrd25.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_34)
  (Wrd18.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_33)
  (Wrd9.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_31)
  (Wrd9.Obj) = Rvl;
  goto label_61;

DEFLABEL (loop_44)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_4_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_67;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_67;
  if (! ((Wrd5.Obj) == (Wrd9.Obj)))
    goto label_64;

DEFLABEL (label_63)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd48.Obj) = ((Wrd40.pObj) [2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_66;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_66;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_65)
  goto loop_25;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_63;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_20 5
#define TAG_5_21 1
#define LABEL_5_22 7
#define LABEL_5_19 9
#define LABEL_5_24 11
#define LABEL_5_18 13
#define LABEL_5_25 15
#define LABEL_5_17 17
#define LABEL_5_26 19
#define LABEL_5_16 21
#define LABEL_5_27 23
#define LABEL_5_15 25
#define LABEL_5_28 27
#define LABEL_5_14 29
#define LABEL_5_29 31
#define LABEL_5_13 33
#define LABEL_5_30 35
#define LABEL_5_12 37
#define LABEL_5_31 39
#define LABEL_5_11 41
#define LABEL_5_32 43
#define LABEL_5_10 45
#define LABEL_5_33 47
#define LABEL_5_9 49
#define LABEL_5_34 51
#define LABEL_5_8 53
#define LABEL_5_35 55
#define LABEL_5_7 57
#define LABEL_5_36 59
#define LABEL_5_6 61
#define LABEL_5_37 63
#define LABEL_5_5 65
#define LABEL_5_38 67
#define ENVIRONMENT_LABEL_5_3 90
#define DEBUGGING_LABEL_5_2 89
#define OBJECT_5_15 88
#define OBJECT_5_14 87
#define OBJECT_5_13 86
#define OBJECT_5_12 85
#define OBJECT_5_11 84
#define OBJECT_5_10 83
#define OBJECT_5_9 82
#define OBJECT_5_8 81
#define OBJECT_5_7 80
#define OBJECT_5_6 79
#define OBJECT_5_5 78
#define OBJECT_5_4 77
#define OBJECT_5_3 76
#define OBJECT_5_2 75
#define OBJECT_5_1 74
#define OBJECT_5_0 73
#define EXECUTE_CACHE_5_23 69
#define FREE_REFERENCE_5_0 72
#define FREE_REFERENCES_LABEL_5_0 68
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd39;
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
      goto Z__record_accessor_80;

    case 1:
      current_block = (Rpc - LABEL_5_20);
      goto lambda_100;

    case 2:
      current_block = (Rpc - LABEL_5_22);
      goto label_82;

    case 3:
      current_block = (Rpc - LABEL_5_19);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_5_24);
      goto label_83;

    case 5:
      current_block = (Rpc - LABEL_5_18);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_5_25);
      goto label_84;

    case 7:
      current_block = (Rpc - LABEL_5_17);
      goto lambda_29;

    case 8:
      current_block = (Rpc - LABEL_5_26);
      goto label_85;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto lambda_33;

    case 10:
      current_block = (Rpc - LABEL_5_27);
      goto label_86;

    case 11:
      current_block = (Rpc - LABEL_5_15);
      goto lambda_37;

    case 12:
      current_block = (Rpc - LABEL_5_28);
      goto label_87;

    case 13:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_41;

    case 14:
      current_block = (Rpc - LABEL_5_29);
      goto label_88;

    case 15:
      current_block = (Rpc - LABEL_5_13);
      goto lambda_45;

    case 16:
      current_block = (Rpc - LABEL_5_30);
      goto label_89;

    case 17:
      current_block = (Rpc - LABEL_5_12);
      goto lambda_49;

    case 18:
      current_block = (Rpc - LABEL_5_31);
      goto label_90;

    case 19:
      current_block = (Rpc - LABEL_5_11);
      goto lambda_53;

    case 20:
      current_block = (Rpc - LABEL_5_32);
      goto label_91;

    case 21:
      current_block = (Rpc - LABEL_5_10);
      goto lambda_57;

    case 22:
      current_block = (Rpc - LABEL_5_33);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_61;

    case 24:
      current_block = (Rpc - LABEL_5_34);
      goto label_93;

    case 25:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_65;

    case 26:
      current_block = (Rpc - LABEL_5_35);
      goto label_94;

    case 27:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_69;

    case 28:
      current_block = (Rpc - LABEL_5_36);
      goto label_95;

    case 29:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_73;

    case 30:
      current_block = (Rpc - LABEL_5_37);
      goto label_96;

    case 31:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_77;

    case 32:
      current_block = (Rpc - LABEL_5_38);
      goto label_97;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_accessor_99)
DEFLABEL (Z__record_accessor_80)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_0]))
    goto label_132;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_1]))
    goto label_131;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_2]))
    goto label_130;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_3]))
    goto label_129;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_4]))
    goto label_128;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_5]))
    goto label_127;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_6]))
    goto label_126;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_7]))
    goto label_125;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_8]))
    goto label_124;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_9]))
    goto label_123;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_10]))
    goto label_122;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_11]))
    goto label_121;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_12]))
    goto label_120;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_13]))
    goto label_119;
  if ((Wrd5.Obj) == (current_block [OBJECT_5_14]))
    goto label_117;
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_20])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  ((Wrd39.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd38.Obj);
  goto label_116;

DEFLABEL (label_117)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));

DEFLABEL (label_116)
DEFLABEL (label_118)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_119)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  goto label_118;

DEFLABEL (label_120)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  goto label_118;

DEFLABEL (label_121)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  goto label_118;

DEFLABEL (label_122)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  goto label_118;

DEFLABEL (label_123)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  goto label_118;

DEFLABEL (label_124)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  goto label_118;

DEFLABEL (label_125)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  goto label_118;

DEFLABEL (label_126)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  goto label_118;

DEFLABEL (label_127)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  goto label_118;

DEFLABEL (label_128)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  goto label_118;

DEFLABEL (label_129)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  goto label_118;

DEFLABEL (label_130)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  goto label_118;

DEFLABEL (label_131)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  goto label_118;

DEFLABEL (label_132)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  goto label_118;

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_5_20);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_137;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_137;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_137;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd11.pObj) = (& ((Wrd22.pObj) [(Wrd8.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_136)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd34.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Obj) = (* (Rsp++));
  if (! ((Wrd34.Obj) == (Wrd37.Obj)))
    goto label_133;
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [2]);
  (Wrd62.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd62.Obj);
  (Rsp [1]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_133)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd58.uLng) == 62)
    goto label_135;

DEFLABEL (label_134)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_135)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_134;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd52.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_134;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd47.pObj) = (& ((Wrd54.pObj) [(Wrd44.Lng)]));
  Rvl = ((Wrd47.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_137)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (lambda_101)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_5_19);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_142;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_142;
  (Wrd7.Obj) = ((Wrd11.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_141)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_138;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_14]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_138)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_14]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_140;

DEFLABEL (label_139)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_140)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd36.Lng))))
    goto label_139;
  Rvl = ((Wrd34.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_14]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (lambda_102)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_5_18);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_147;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_147;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_146)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_143;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_13]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_143)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_13]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_145;

DEFLABEL (label_144)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_145)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd36.Lng))))
    goto label_144;
  Rvl = ((Wrd34.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_147)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_13]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (lambda_103)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_5_17);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_152;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_152;
  (Wrd7.Obj) = ((Wrd11.pObj) [14]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_151)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_148;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_12]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_148)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_12]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_150;

DEFLABEL (label_149)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_150)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd36.Lng))))
    goto label_149;
  Rvl = ((Wrd34.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_152)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_12]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (lambda_104)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_5_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_157;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_157;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_156)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_153;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_11]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_153)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_11]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_155;

DEFLABEL (label_154)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_155)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd36.Lng))))
    goto label_154;
  Rvl = ((Wrd34.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_157)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_11]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (lambda_105)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_5_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_162;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_162;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_161)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_158;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_10]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_158)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_10]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_160;

DEFLABEL (label_159)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_160)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd36.Lng))))
    goto label_159;
  Rvl = ((Wrd34.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_162)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (lambda_106)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_5_14);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_167;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_167;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_166)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_163;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_9]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_163)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_9]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_165;

DEFLABEL (label_164)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_165)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd36.Lng))))
    goto label_164;
  Rvl = ((Wrd34.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_167)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_166;

DEFLABEL (lambda_107)
DEFLABEL (lambda_45)
  INTERRUPT_CHECK (26, LABEL_5_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_172;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_172;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_171)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_168;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_8]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_168)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_8]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_170;

DEFLABEL (label_169)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_170)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd36.Lng))))
    goto label_169;
  Rvl = ((Wrd34.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_172)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (lambda_108)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_5_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_177;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_177;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_176)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_173;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_7]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_173)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_7]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_175;

DEFLABEL (label_174)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_175)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd36.Lng))))
    goto label_174;
  Rvl = ((Wrd34.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_177)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (lambda_109)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_5_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_182;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_182;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_181)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_178;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_6]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_178)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_6]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_180;

DEFLABEL (label_179)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_180)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd36.Lng))))
    goto label_179;
  Rvl = ((Wrd34.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_182)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (lambda_110)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_5_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_187;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_187;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_186)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_183;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_5]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_183)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_5]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_185;

DEFLABEL (label_184)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_185)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd36.Lng))))
    goto label_184;
  Rvl = ((Wrd34.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_186;

DEFLABEL (lambda_111)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_5_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_192;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_192;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_191)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_188;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_188)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_190;

DEFLABEL (label_189)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_190)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_189;
  Rvl = ((Wrd34.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_192)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (lambda_112)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_5_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_197;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_197;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_196)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_193;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_193)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_195;

DEFLABEL (label_194)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_195)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd36.Lng))))
    goto label_194;
  Rvl = ((Wrd34.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_197)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (lambda_113)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_202;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_202;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_201)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_198;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_198)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_200;

DEFLABEL (label_199)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_200)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_199;
  Rvl = ((Wrd34.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_202)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (lambda_114)
DEFLABEL (lambda_73)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_207;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_207;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_206)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_203;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_203)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_205;

DEFLABEL (label_204)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_205)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_204;
  Rvl = ((Wrd34.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_206;

DEFLABEL (lambda_115)
DEFLABEL (lambda_77)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_212;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_212;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_211)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd24.Obj)))
    goto label_208;
  (Wrd39.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_208)
  (Wrd25.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_210;

DEFLABEL (label_209)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_210)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_209;
  Rvl = ((Wrd34.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_212)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_15]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_211;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_20 5
#define TAG_6_21 1
#define LABEL_6_19 7
#define LABEL_6_18 9
#define LABEL_6_17 11
#define LABEL_6_16 13
#define LABEL_6_15 15
#define LABEL_6_14 17
#define LABEL_6_13 19
#define LABEL_6_12 21
#define LABEL_6_11 23
#define LABEL_6_10 25
#define LABEL_6_9 27
#define LABEL_6_8 29
#define LABEL_6_7 31
#define LABEL_6_6 33
#define LABEL_6_5 35
#define ENVIRONMENT_LABEL_6_3 54
#define DEBUGGING_LABEL_6_2 53
#define OBJECT_6_16 52
#define OBJECT_6_15 51
#define OBJECT_6_14 50
#define OBJECT_6_13 49
#define OBJECT_6_12 48
#define OBJECT_6_11 47
#define OBJECT_6_10 46
#define OBJECT_6_9 45
#define OBJECT_6_8 44
#define OBJECT_6_7 43
#define OBJECT_6_6 42
#define OBJECT_6_5 41
#define OBJECT_6_4 40
#define OBJECT_6_3 39
#define OBJECT_6_2 38
#define OBJECT_6_1 37
#define OBJECT_6_0 36
#define FREE_REFERENCES_LABEL_6_0 36
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd38;
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
      goto Z__record_modifier_32;

    case 1:
      current_block = (Rpc - LABEL_6_20);
      goto lambda_36;

    case 2:
      current_block = (Rpc - LABEL_6_19);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_6_18);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_6_17);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto lambda_21;

    case 8:
      current_block = (Rpc - LABEL_6_13);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_23;

    case 10:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_24;

    case 11:
      current_block = (Rpc - LABEL_6_10);
      goto lambda_25;

    case 12:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_26;

    case 13:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_27;

    case 14:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_28;

    case 15:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_29;

    case 16:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_modifier_35)
DEFLABEL (Z__record_modifier_32)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_6_0]))
    goto label_68;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_1]))
    goto label_67;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_2]))
    goto label_66;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_3]))
    goto label_65;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_4]))
    goto label_64;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_5]))
    goto label_63;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_6]))
    goto label_62;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_7]))
    goto label_61;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_8]))
    goto label_60;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_9]))
    goto label_59;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_10]))
    goto label_58;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_11]))
    goto label_57;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_12]))
    goto label_56;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_13]))
    goto label_55;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_14]))
    goto label_53;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_20])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  ((Wrd38.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd37.Obj);
  goto label_52;

DEFLABEL (label_53)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));

DEFLABEL (label_52)
DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  goto label_54;

DEFLABEL (label_56)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  goto label_54;

DEFLABEL (label_57)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  goto label_54;

DEFLABEL (label_58)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  goto label_54;

DEFLABEL (label_59)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  goto label_54;

DEFLABEL (label_60)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  goto label_54;

DEFLABEL (label_61)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  goto label_54;

DEFLABEL (label_62)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  goto label_54;

DEFLABEL (label_63)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  goto label_54;

DEFLABEL (label_64)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  goto label_54;

DEFLABEL (label_65)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  goto label_54;

DEFLABEL (label_66)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  goto label_54;

DEFLABEL (label_67)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  goto label_54;

DEFLABEL (label_68)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  goto label_54;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_6_20);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_70)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_69;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_69;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd22.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [1]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_37)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_6_19);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_14]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_72)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_71;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [16]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_38)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_6_18);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_13]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_74;

DEFLABEL (label_73)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_74)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_73;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [15]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_39)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_6_17);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_12]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_76;

DEFLABEL (label_75)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_76)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_75;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [14]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_40)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_6_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_11]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_78;

DEFLABEL (label_77)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_78)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd17.Lng))))
    goto label_77;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [13]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_41)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_6_15);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_10]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_80;

DEFLABEL (label_79)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_80)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_79;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_42)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_6_14);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_9]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_82;

DEFLABEL (label_81)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_82)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_81;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_43)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_6_13);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_8]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_84;

DEFLABEL (label_83)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_84)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_83;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_44)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_6_12);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_86)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_85;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_45)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_6]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_88;

DEFLABEL (label_87)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_88)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_87;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_46)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_6_10);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_5]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_90;

DEFLABEL (label_89)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_90)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_89;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_47)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_6_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_92;

DEFLABEL (label_91)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_92)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_91;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_48)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_6_8);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_94;

DEFLABEL (label_93)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_94)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_93;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_49)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_6_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_96;

DEFLABEL (label_95)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_96)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_95;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_50)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_98;

DEFLABEL (label_97)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_98)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_97;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_51)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_100;

DEFLABEL (label_99)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_16]), 3);

DEFLABEL (label_100)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_99;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_20 5
#define TAG_7_21 1
#define LABEL_7_22 7
#define LABEL_7_19 9
#define LABEL_7_23 11
#define LABEL_7_18 13
#define LABEL_7_24 15
#define LABEL_7_17 17
#define LABEL_7_25 19
#define LABEL_7_16 21
#define LABEL_7_26 23
#define LABEL_7_15 25
#define LABEL_7_27 27
#define LABEL_7_14 29
#define LABEL_7_28 31
#define LABEL_7_13 33
#define LABEL_7_29 35
#define LABEL_7_12 37
#define LABEL_7_30 39
#define LABEL_7_11 41
#define LABEL_7_31 43
#define LABEL_7_10 45
#define LABEL_7_32 47
#define LABEL_7_9 49
#define LABEL_7_33 51
#define LABEL_7_8 53
#define LABEL_7_34 55
#define LABEL_7_7 57
#define LABEL_7_35 59
#define LABEL_7_6 61
#define LABEL_7_36 63
#define LABEL_7_5 65
#define LABEL_7_37 67
#define ENVIRONMENT_LABEL_7_3 88
#define DEBUGGING_LABEL_7_2 87
#define OBJECT_7_16 86
#define OBJECT_7_15 85
#define OBJECT_7_14 84
#define OBJECT_7_13 83
#define OBJECT_7_12 82
#define OBJECT_7_11 81
#define OBJECT_7_10 80
#define OBJECT_7_9 79
#define OBJECT_7_8 78
#define OBJECT_7_7 77
#define OBJECT_7_6 76
#define OBJECT_7_5 75
#define OBJECT_7_4 74
#define OBJECT_7_3 73
#define OBJECT_7_2 72
#define OBJECT_7_1 71
#define OBJECT_7_0 70
#define FREE_REFERENCE_7_0 69
#define FREE_REFERENCES_LABEL_7_0 68
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd39;
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
      goto Z__record_initpred_80;

    case 1:
      current_block = (Rpc - LABEL_7_20);
      goto lambda_100;

    case 2:
      current_block = (Rpc - LABEL_7_22);
      goto label_82;

    case 3:
      current_block = (Rpc - LABEL_7_19);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_7_23);
      goto label_83;

    case 5:
      current_block = (Rpc - LABEL_7_18);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_7_24);
      goto label_84;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto lambda_29;

    case 8:
      current_block = (Rpc - LABEL_7_25);
      goto label_85;

    case 9:
      current_block = (Rpc - LABEL_7_16);
      goto lambda_33;

    case 10:
      current_block = (Rpc - LABEL_7_26);
      goto label_86;

    case 11:
      current_block = (Rpc - LABEL_7_15);
      goto lambda_37;

    case 12:
      current_block = (Rpc - LABEL_7_27);
      goto label_87;

    case 13:
      current_block = (Rpc - LABEL_7_14);
      goto lambda_41;

    case 14:
      current_block = (Rpc - LABEL_7_28);
      goto label_88;

    case 15:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_45;

    case 16:
      current_block = (Rpc - LABEL_7_29);
      goto label_89;

    case 17:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_49;

    case 18:
      current_block = (Rpc - LABEL_7_30);
      goto label_90;

    case 19:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_53;

    case 20:
      current_block = (Rpc - LABEL_7_31);
      goto label_91;

    case 21:
      current_block = (Rpc - LABEL_7_10);
      goto lambda_57;

    case 22:
      current_block = (Rpc - LABEL_7_32);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_61;

    case 24:
      current_block = (Rpc - LABEL_7_33);
      goto label_93;

    case 25:
      current_block = (Rpc - LABEL_7_8);
      goto lambda_65;

    case 26:
      current_block = (Rpc - LABEL_7_34);
      goto label_94;

    case 27:
      current_block = (Rpc - LABEL_7_7);
      goto lambda_69;

    case 28:
      current_block = (Rpc - LABEL_7_35);
      goto label_95;

    case 29:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_73;

    case 30:
      current_block = (Rpc - LABEL_7_36);
      goto label_96;

    case 31:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_77;

    case 32:
      current_block = (Rpc - LABEL_7_37);
      goto label_97;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_initpred_99)
DEFLABEL (Z__record_initpred_80)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_7_0]))
    goto label_132;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_1]))
    goto label_131;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_2]))
    goto label_130;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_3]))
    goto label_129;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_4]))
    goto label_128;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_5]))
    goto label_127;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_6]))
    goto label_126;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_7]))
    goto label_125;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_8]))
    goto label_124;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_9]))
    goto label_123;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_10]))
    goto label_122;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_11]))
    goto label_121;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_12]))
    goto label_120;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_13]))
    goto label_119;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_14]))
    goto label_117;
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_20])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  ((Wrd39.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd38.Obj);
  goto label_116;

DEFLABEL (label_117)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));

DEFLABEL (label_116)
DEFLABEL (label_118)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_119)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  goto label_118;

DEFLABEL (label_120)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  goto label_118;

DEFLABEL (label_121)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  goto label_118;

DEFLABEL (label_122)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  goto label_118;

DEFLABEL (label_123)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  goto label_118;

DEFLABEL (label_124)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  goto label_118;

DEFLABEL (label_125)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  goto label_118;

DEFLABEL (label_126)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  goto label_118;

DEFLABEL (label_127)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  goto label_118;

DEFLABEL (label_128)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  goto label_118;

DEFLABEL (label_129)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  goto label_118;

DEFLABEL (label_130)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  goto label_118;

DEFLABEL (label_131)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  goto label_118;

DEFLABEL (label_132)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  goto label_118;

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_7_20);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_137;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_137;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_137;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd11.pObj) = (& ((Wrd22.pObj) [(Wrd8.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_136)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd34.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd37.Obj))
    goto label_134;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_133;

DEFLABEL (label_134)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_133)
DEFLABEL (label_135)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_137)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (lambda_101)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_7_19);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_142;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_142;
  (Wrd7.Obj) = ((Wrd11.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_141)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_139;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_138;

DEFLABEL (label_139)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_138)
DEFLABEL (label_140)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_14]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (lambda_102)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_7_18);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_147;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_147;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_146)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_144;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_143;

DEFLABEL (label_144)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_143)
DEFLABEL (label_145)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_147)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_13]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (lambda_103)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_7_17);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_152;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_152;
  (Wrd7.Obj) = ((Wrd11.pObj) [14]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_151)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_149;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_148;

DEFLABEL (label_149)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_148)
DEFLABEL (label_150)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_152)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_12]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (lambda_104)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_7_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_157;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_157;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_156)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_154;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_153;

DEFLABEL (label_154)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_153)
DEFLABEL (label_155)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_157)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_11]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (lambda_105)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_7_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_162;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_162;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_161)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_159;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_158;

DEFLABEL (label_159)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_158)
DEFLABEL (label_160)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_162)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (lambda_106)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_7_14);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_167;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_167;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_166)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_164;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_163;

DEFLABEL (label_164)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_163)
DEFLABEL (label_165)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_167)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_166;

DEFLABEL (lambda_107)
DEFLABEL (lambda_45)
  INTERRUPT_CHECK (26, LABEL_7_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_172;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_172;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_171)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_169;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_168;

DEFLABEL (label_169)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_168)
DEFLABEL (label_170)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_172)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (lambda_108)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_7_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_177;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_177;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_176)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_174;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_173;

DEFLABEL (label_174)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_173)
DEFLABEL (label_175)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_177)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (lambda_109)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_7_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_182;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_182;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_181)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_179;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_178;

DEFLABEL (label_179)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_178)
DEFLABEL (label_180)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_182)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (lambda_110)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_187;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_187;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_186)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_184;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_183;

DEFLABEL (label_184)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_183)
DEFLABEL (label_185)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_186;

DEFLABEL (lambda_111)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_7_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_192;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_192;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_191)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_189;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_188;

DEFLABEL (label_189)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_188)
DEFLABEL (label_190)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_192)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (lambda_112)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_197;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_197;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_196)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_194;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_193;

DEFLABEL (label_194)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_193)
DEFLABEL (label_195)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_197)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (lambda_113)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_7_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_202;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_202;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_201)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_199;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_198;

DEFLABEL (label_199)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_198)
DEFLABEL (label_200)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_202)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (lambda_114)
DEFLABEL (lambda_73)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_207;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_207;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_206)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_204;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_203;

DEFLABEL (label_204)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_203)
DEFLABEL (label_205)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_206;

DEFLABEL (lambda_115)
DEFLABEL (lambda_77)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_212;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_212;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_211)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd24.Obj))
    goto label_209;
  Rvl = (current_block [OBJECT_7_16]);
  goto label_208;

DEFLABEL (label_209)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_208)
DEFLABEL (label_210)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_212)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_15]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_211;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_6 5
#define LABEL_8_4 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_10 13
#define LABEL_8_14 15
#define LABEL_8_11 17
#define TAG_8_12 7
#define LABEL_8_17 19
#define LABEL_8_15 21
#define LABEL_8_18 23
#define TAG_8_19 10
#define LABEL_8_20 25
#define TAG_8_21 11
#define LABEL_8_23 27
#define LABEL_8_26 29
#define ENVIRONMENT_LABEL_8_3 57
#define DEBUGGING_LABEL_8_2 56
#define OBJECT_8_8 55
#define OBJECT_8_7 54
#define OBJECT_8_6 53
#define OBJECT_8_5 52
#define OBJECT_8_4 51
#define OBJECT_8_3 50
#define OBJECT_8_2 49
#define OBJECT_8_1 48
#define OBJECT_8_0 47
#define EXECUTE_CACHE_8_27 31
#define EXECUTE_CACHE_8_25 33
#define EXECUTE_CACHE_8_24 35
#define EXECUTE_CACHE_8_22 37
#define EXECUTE_CACHE_8_16 39
#define EXECUTE_CACHE_8_13 41
#define EXECUTE_CACHE_8_9 43
#define FREE_REFERENCE_8_0 46
#define FREE_REFERENCES_LABEL_8_0 30
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd56;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd51;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_4);
      goto Z__record_slot_name_15;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_24;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_8_18);
      goto lambda_25;

    case 11:
      current_block = (Rpc - LABEL_8_20);
      goto lambda_26;

    case 12:
      current_block = (Rpc - LABEL_8_23);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_8_26);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_slot_name_23)
DEFLABEL (Z__record_slot_name_15)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_8_0]);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd51.Lng))))
    goto label_43;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_42;

DEFLABEL (label_41)
  (Wrd13.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_27)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_29;
  (Wrd15.Obj) = (current_block [OBJECT_8_4]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd15.Obj) = (current_block [OBJECT_8_3]);

DEFLABEL (label_28)
DEFLABEL (label_40)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_5);

DEFLABEL (label_36)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_11])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd43 = Wrd42;
  (Wrd44.Obj) = (Rsp [1]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_35;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_35;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_23);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_33;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_33;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) < (Wrd19.Lng))
    goto label_32;

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (label_33)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_35)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_39;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd46.Lng) > 0)
    goto label_36;
  goto label_37;

DEFLABEL (label_39)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto label_38;

DEFLABEL (label_43)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_8_11);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_45;
  Wrd6 = Wrd10;

DEFLABEL (label_44)
  (Wrd15.Obj) = (current_block [OBJECT_8_7]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_18])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_20])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Rsp [1]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_22]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_17])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_8_18);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_8_20);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_8]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_10 9
#define LABEL_9_8 11
#define LABEL_9_9 13
#define LABEL_9_15 15
#define LABEL_9_12 17
#define LABEL_9_17 19
#define LABEL_9_19 21
#define LABEL_9_13 23
#define LABEL_9_14 25
#define LABEL_9_18 27
#define LABEL_9_24 29
#define LABEL_9_20 31
#define LABEL_9_22 33
#define LABEL_9_23 35
#define LABEL_9_25 37
#define LABEL_9_27 39
#define LABEL_9_29 41
#define ENVIRONMENT_LABEL_9_3 69
#define DEBUGGING_LABEL_9_2 68
#define OBJECT_9_4 67
#define OBJECT_9_3 66
#define OBJECT_9_2 65
#define OBJECT_9_1 64
#define OBJECT_9_0 63
#define EXECUTE_CACHE_9_30 43
#define EXECUTE_CACHE_9_28 45
#define EXECUTE_CACHE_9_26 47
#define EXECUTE_CACHE_9_21 49
#define EXECUTE_CACHE_9_16 51
#define EXECUTE_CACHE_9_11 53
#define EXECUTE_CACHE_9_6 55
#define FREE_REFERENCE_9_1 58
#define FREE_REFERENCE_9_0 59
#define FREE_ASSIGNMENT_9_1 61
#define FREE_ASSIGNMENT_9_0 62
#define FREE_REFERENCES_LABEL_9_0 42
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto initialize_record_slot_accessB_15;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_6;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_9_19);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto lambda_14;

    case 13:
      current_block = (Rpc - LABEL_9_24);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_9_20);
      goto lambda_5;

    case 15:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_9_25);
      goto continuation_4;

    case 18:
      current_block = (Rpc - LABEL_9_27);
      goto lambda_13;

    case 19:
      current_block = (Rpc - LABEL_9_29);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_record_slot_accessB_24)
DEFLABEL (initialize_record_slot_accessB_15)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_35;
  Wrd23 = Wrd27;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_30;
  Wrd20 = Wrd24;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_19])), (Wrd21.pObj));

DEFLABEL (label_21)
  (Wrd20.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_20)
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd24.pObj));

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_36;

DEFLABEL (lambda_25)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_9_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  goto label_39;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_26)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_9_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_48;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  goto label_44;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (lambda_27)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_9_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_28]));

DEFLABEL (lambda_28)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_9_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_29);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_10 11
#define ENVIRONMENT_LABEL_10_3 27
#define DEBUGGING_LABEL_10_2 26
#define OBJECT_10_4 25
#define OBJECT_10_3 24
#define OBJECT_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_12 13
#define EXECUTE_CACHE_10_11 15
#define EXECUTE_CACHE_10_9 17
#define EXECUTE_CACHE_10_6 19
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_10_4);
      goto store_value_restart_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (store_value_restart_8)
DEFLABEL (store_value_restart_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define ENVIRONMENT_LABEL_11_3 23
#define DEBUGGING_LABEL_11_2 22
#define OBJECT_11_2 21
#define OBJECT_11_1 20
#define OBJECT_11_0 19
#define EXECUTE_CACHE_11_11 11
#define EXECUTE_CACHE_11_10 13
#define EXECUTE_CACHE_11_9 15
#define EXECUTE_CACHE_11_6 17
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto use_value_restart_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (use_value_restart_6)
DEFLABEL (use_value_restart_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define LABEL_12_9 9
#define TAG_12_10 3
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_8 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto string__interactor_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__interactor_7)
DEFLABEL (string__interactor_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
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

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define LABEL_13_9 9
#define LABEL_13_12 11
#define LABEL_13_6 13
#define LABEL_13_10 15
#define LABEL_13_15 17
#define LABEL_13_18 19
#define LABEL_13_11 21
#define LABEL_13_13 23
#define LABEL_13_16 25
#define LABEL_13_23 27
#define LABEL_13_25 29
#define LABEL_13_26 31
#define LABEL_13_17 33
#define LABEL_13_19 35
#define LABEL_13_20 37
#define LABEL_13_21 39
#define LABEL_13_24 41
#define LABEL_13_34 43
#define LABEL_13_36 45
#define LABEL_13_37 47
#define LABEL_13_28 49
#define LABEL_13_29 51
#define LABEL_13_30 53
#define LABEL_13_32 55
#define TAG_13_33 26
#define LABEL_13_35 57
#define LABEL_13_45 59
#define LABEL_13_38 61
#define LABEL_13_39 63
#define LABEL_13_40 65
#define LABEL_13_41 67
#define LABEL_13_43 69
#define TAG_13_44 33
#define LABEL_13_46 71
#define LABEL_13_47 73
#define LABEL_13_48 75
#define LABEL_13_49 77
#define LABEL_13_51 79
#define TAG_13_52 38
#define LABEL_13_54 81
#define LABEL_13_55 83
#define LABEL_13_56 85
#define TAG_13_57 41
#define LABEL_13_58 87
#define LABEL_13_59 89
#define LABEL_13_60 91
#define TAG_13_61 44
#define LABEL_13_62 93
#define TAG_13_63 45
#define LABEL_13_70 95
#define LABEL_13_65 97
#define TAG_13_66 47
#define LABEL_13_69 99
#define LABEL_13_71 101
#define TAG_13_72 49
#define ENVIRONMENT_LABEL_13_3 160
#define DEBUGGING_LABEL_13_2 159
#define OBJECT_13_21 158
#define OBJECT_13_20 157
#define OBJECT_13_19 156
#define OBJECT_13_18 155
#define OBJECT_13_17 154
#define OBJECT_13_16 153
#define OBJECT_13_15 152
#define OBJECT_13_14 151
#define OBJECT_13_13 150
#define OBJECT_13_12 149
#define OBJECT_13_11 148
#define OBJECT_13_10 147
#define OBJECT_13_9 146
#define OBJECT_13_8 145
#define OBJECT_13_7 144
#define OBJECT_13_6 143
#define OBJECT_13_5 142
#define OBJECT_13_4 141
#define OBJECT_13_3 140
#define OBJECT_13_2 139
#define OBJECT_13_1 138
#define OBJECT_13_0 137
#define EXECUTE_CACHE_13_68 103
#define EXECUTE_CACHE_13_67 105
#define EXECUTE_CACHE_13_64 107
#define EXECUTE_CACHE_13_53 109
#define EXECUTE_CACHE_13_50 111
#define EXECUTE_CACHE_13_42 113
#define EXECUTE_CACHE_13_31 115
#define EXECUTE_CACHE_13_27 117
#define EXECUTE_CACHE_13_22 119
#define EXECUTE_CACHE_13_14 121
#define EXECUTE_CACHE_13_8 123
#define FREE_REFERENCE_13_4 126
#define FREE_REFERENCE_13_3 127
#define FREE_REFERENCE_13_2 128
#define FREE_REFERENCE_13_1 129
#define FREE_REFERENCE_13_0 130
#define FREE_ASSIGNMENT_13_4 132
#define FREE_ASSIGNMENT_13_3 133
#define FREE_ASSIGNMENT_13_2 134
#define FREE_ASSIGNMENT_13_1 135
#define FREE_ASSIGNMENT_13_0 136
#define FREE_REFERENCES_LABEL_13_0 102
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
recslot_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto initialize_conditionsB_45;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_47;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_13_6);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_13_18);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_13_11);
      goto lambda_11;

    case 10:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_13_16);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_13_23);
      goto label_52;

    case 13:
      current_block = (Rpc - LABEL_13_25);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_13_26);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_13_17);
      goto lambda_19;

    case 16:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_1;

    case 19:
      current_block = (Rpc - LABEL_13_24);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_13_34);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_13_36);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_13_37);
      goto label_57;

    case 23:
      current_block = (Rpc - LABEL_13_28);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_13_29);
      goto continuation_7;

    case 25:
      current_block = (Rpc - LABEL_13_30);
      goto continuation_6;

    case 26:
      current_block = (Rpc - LABEL_13_32);
      goto lambda_65;

    case 27:
      current_block = (Rpc - LABEL_13_35);
      goto continuation_37;

    case 28:
      current_block = (Rpc - LABEL_13_45);
      goto label_58;

    case 29:
      current_block = (Rpc - LABEL_13_38);
      goto continuation_15;

    case 30:
      current_block = (Rpc - LABEL_13_39);
      goto continuation_14;

    case 31:
      current_block = (Rpc - LABEL_13_40);
      goto continuation_8;

    case 32:
      current_block = (Rpc - LABEL_13_41);
      goto continuation_23;

    case 33:
      current_block = (Rpc - LABEL_13_43);
      goto lambda_66;

    case 34:
      current_block = (Rpc - LABEL_13_46);
      goto continuation_16;

    case 35:
      current_block = (Rpc - LABEL_13_47);
      goto continuation_10;

    case 36:
      current_block = (Rpc - LABEL_13_48);
      goto continuation_9;

    case 37:
      current_block = (Rpc - LABEL_13_49);
      goto continuation_26;

    case 38:
      current_block = (Rpc - LABEL_13_51);
      goto lambda_67;

    case 39:
      current_block = (Rpc - LABEL_13_54);
      goto continuation_18;

    case 40:
      current_block = (Rpc - LABEL_13_55);
      goto continuation_17;

    case 41:
      current_block = (Rpc - LABEL_13_56);
      goto lambda_68;

    case 42:
      current_block = (Rpc - LABEL_13_58);
      goto continuation_40;

    case 43:
      current_block = (Rpc - LABEL_13_59);
      goto continuation_39;

    case 44:
      current_block = (Rpc - LABEL_13_60);
      goto lambda_69;

    case 45:
      current_block = (Rpc - LABEL_13_62);
      goto lambda_70;

    case 46:
      current_block = (Rpc - LABEL_13_70);
      goto label_59;

    case 47:
      current_block = (Rpc - LABEL_13_65);
      goto lambda_71;

    case 48:
      current_block = (Rpc - LABEL_13_69);
      goto continuation_29;

    case 49:
      current_block = (Rpc - LABEL_13_71);
      goto lambda_72;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_conditionsB_61)
DEFLABEL (initialize_conditionsB_45)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_101;
  Wrd11 = Wrd15;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_97)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_96;
  Wrd24 = Wrd28;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_92)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_91;
  Wrd24 = Wrd28;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_13_6]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_13_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_87)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_86;
  Wrd21 = Wrd25;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_13_9]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_84;
  Wrd28 = Wrd32;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_13_24);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_32])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_3]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_80)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_79;
  Wrd26 = Wrd30;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_13_12]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_4]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_77;
  Wrd33 = Wrd37;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_13_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_43])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_4]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_73)
  Rvl = (current_block [OBJECT_13_14]);
  goto pop_return;

DEFLABEL (label_75)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_45])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_58)
  goto label_73;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_37])), (Wrd34.pObj));

DEFLABEL (label_57)
  (Wrd33.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_36])), (Wrd27.pObj));

DEFLABEL (label_56)
  (Wrd26.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_34])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_55)
  goto label_80;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_26])), (Wrd29.pObj));

DEFLABEL (label_54)
  (Wrd28.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_25])), (Wrd22.pObj));

DEFLABEL (label_53)
  (Wrd21.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_89)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_52)
  goto label_87;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_18])), (Wrd25.pObj));

DEFLABEL (label_51)
  (Wrd24.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_94)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_50)
  goto label_92;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_12])), (Wrd25.pObj));

DEFLABEL (label_49)
  (Wrd24.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_99)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_98;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_48)
  goto label_97;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_100;

DEFLABEL (lambda_62)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_13_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (Wrd5.Obj) = (current_block [OBJECT_13_11]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (lambda_63)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_13_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_48]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_47);
  (Wrd5.Obj) = (current_block [OBJECT_13_18]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (lambda_64)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_13_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_55]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_13_55);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13_54);
  (Wrd5.Obj) = (current_block [OBJECT_13_11]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_13_32);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_42]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_13_41);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_103)
  (Wrd14.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_102)
DEFLABEL (label_104)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_13_49);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_57);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_56])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_53]));

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_13_43);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_51])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_53]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_13_51);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_13_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_68]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_13_58);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_65])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_67]));

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_13_56);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_60])));
  Rhp += 5;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd25 = Wrd10;
  (Wrd28.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd25.pObj) [4]) = (Wrd20.Obj);
  ((Wrd25.pObj) [5]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [6]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_63);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_62])));
  Rhp += 3;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd38 = Wrd31;
  (Wrd41.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  ((Wrd38.pObj) [3]) = (Wrd24.Obj);
  ((Wrd38.pObj) [4]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_64]));

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_13_60);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_68]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_13_69);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_72);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_71])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_67]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_13_62);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_106;
  (Wrd20.Obj) = ((Wrd33.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_106;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_106;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd16.pObj) = (& ((Wrd29.pObj) [(Wrd11.Lng)]));
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [1]) = (Wrd17.Obj);

DEFLABEL (label_105)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_106)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [3]);
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_70]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_21]), 3);

DEFLABEL (label_59)
  goto label_105;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_13_65);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_13_71);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define ENVIRONMENT_LABEL_3 93
#define DEBUGGING_LABEL_2 92
#define PURIFICATION_ROOT 91
#define OBJECT_37 90
#define OBJECT_36 89
#define OBJECT_35 88
#define OBJECT_34 87
#define OBJECT_33 86
#define OBJECT_32 85
#define OBJECT_31 84
#define OBJECT_30 83
#define OBJECT_29 82
#define OBJECT_28 81
#define OBJECT_27 80
#define OBJECT_26 79
#define OBJECT_25 78
#define OBJECT_24 77
#define OBJECT_23 76
#define OBJECT_22 75
#define OBJECT_21 74
#define OBJECT_20 73
#define OBJECT_19 72
#define OBJECT_18 71
#define OBJECT_17 70
#define OBJECT_16 69
#define OBJECT_15 68
#define OBJECT_14 67
#define OBJECT_13 66
#define OBJECT_12 65
#define OBJECT_11 64
#define OBJECT_10 63
#define OBJECT_9 62
#define OBJECT_8 61
#define OBJECT_7 60
#define OBJECT_6 59
#define OBJECT_5 58
#define OBJECT_4 57
#define OBJECT_3 56
#define OBJECT_2 55
#define OBJECT_1 54
#define OBJECT_0 53
#define GLOBAL_EXECUTE_CACHE_10 51
#define FREE_REFERENCES_LABEL_0 50
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
recslot_so_befcc978dd3bb2b3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto label_27;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto expression_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_23)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_27])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_27)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_26)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	1,
	1,
	3,
	2,
	1,
	0,
	2,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
      goto label_25;
    blocks = (current_block [OBJECT_37]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_26])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_25)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_36]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_recslot_so_befcc978dd3bb2b3 [13] =
  {
    { "recslot_so_code_1", 5, recslot_so_code_1 },
    { "recslot_so_code_2", 5, recslot_so_code_2 },
    { "recslot_so_code_3", 5, recslot_so_code_3 },
    { "recslot_so_code_4", 17, recslot_so_code_4 },
    { "recslot_so_code_5", 33, recslot_so_code_5 },
    { "recslot_so_code_6", 17, recslot_so_code_6 },
    { "recslot_so_code_7", 33, recslot_so_code_7 },
    { "recslot_so_code_8", 14, recslot_so_code_8 },
    { "recslot_so_code_9", 20, recslot_so_code_9 },
    { "recslot_so_code_10", 5, recslot_so_code_10 },
    { "recslot_so_code_11", 4, recslot_so_code_11 },
    { "recslot_so_code_12", 4, recslot_so_code_12 },
    { "recslot_so_code_13", 50, recslot_so_code_13 }
  };

int
decl_recslot_so_befcc978dd3bb2b3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_recslot_so_befcc978dd3bb2b3);
  return (0);
}

DECLARE_COMPILED_CODE ("recslot.so", 24, decl_recslot_so_befcc978dd3bb2b3, recslot_so_befcc978dd3bb2b3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_recslot_so_data_befcc978dd3bb2b3 [4006] =
  "\xb0\x01\x1d\x85\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x20\xb9\xc1"
  "\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\xb1\xb2\x28\x0d\xbe\x28"
  "\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x83\x88\xb1\xb2\x28\x0d\xb9\x28\xb4\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x08"
  "\x0d\x81\xb2\xc1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\xc2\x1c\x02\x02\x02\x02\x02\x02\x02\x02\x02\x86\x85\x84\x83"
  "\x82\x81\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\xc3\x1c\x1d\x02\x02\x02\x02\x02\x02\x02\x02\x02\x86"
  "\x85\x84\x83\x82\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x02\x02\x02\x02\x02\x02\x02\x02\x02\x86\x85\x84\x83\x82\x81"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x0c\x0d"
  "\x1c\x06\x07\x02\xc2\x02\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x81\x1b"
  "\x82\xb4\xb4\x1b\x25\xb4\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xba\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0c\x0c\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x0c\x0d\x1c"
  "\x0d\xb8\x0c\x1d\x0c\x1b\x0d\x1c\x08\x89\x0c\x0c\xb0\x1b\x08\x89"
  "\x1b\x0c\x0d\x1b\x08\x88\x0c\x0d\xb0\x08\x88\x0d\x08\x0d\x1c\x0d"
  "\x1c\x0d\xb8\x1b\x0d\x1c\x25\x0d\x1b\x0d\x1b\xb0\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x0d\x1b\x1b\xb0\x1b\x1b\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x0d\xb2\x2a\x1b\xb4\x1b\x1b\x2a\xb1\x1b\x2a\xb6\x1b"
  "\x2a\xc2\x02\x02\x0d\xb3\x1b\x2a\x1b\x2a\x0d\x1b\x2a\x0d\xb7\x2a"
  "\xc3\x0d\xb5\x2a\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x72\x65\x63\x73\x6c\x6f\x74\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x08\x25\x72\x65\x63\x6f\x72\x64\x04\x63"
  "\x61\x72\x03\x11\x25\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65"
  "\x73\x73\x6f\x72\x04\x13\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x6c"
  "\x6f\x74\x2d\x69\x6e\x64\x65\x78\x03\x1d\x0c\x81\x8b\x02\x1c\x0a"
  "\x81\x87\x02\x1b\x08\x81\x8d\x02\x1a\x06\x81\x87\x02\x19\x04\x83"
  "\x04\x0b\x15\x02\x03\x11\x25\x72\x65\x63\x6f\x72\x64\x2d\x6d\x6f"
  "\x64\x69\x66\x69\x65\x72\x04\x03\x22\x0c\x81\x8b\x02\x21\x0a\x81"
  "\x87\x02\x20\x08\x81\x8d\x02\x1f\x06\x81\x87\x02\x1e\x04\x83\x04"
  "\x0b\x15\x02\x03\x11\x25\x72\x65\x63\x6f\x72\x64\x2d\x69\x6e\x69"
  "\x74\x70\x72\x65\x64\x04\x03\x27\x0c\x81\x8b\x02\x26\x0a\x81\x87"
  "\x02\x25\x08\x81\x8d\x02\x24\x06\x81\x87\x02\x23\x04\x83\x04\x0b"
  "\x15\x09\x02\x05\x65\x6c\x73\x65\x05\x63\x61\x73\x65\x04\x63\x64"
  "\x72\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x02"
  "\x38\x24\x81\x85\x02\x37\x22\x81\x89\x02\x36\x20\x81\x85\x02\x35"
  "\x1e\x81\x85\x02\x34\x1c\x81\x87\x02\x33\x1a\x81\x87\x02\x32\x18"
  "\x81\x87\x02\x31\x16\x81\x87\x02\x30\x14\x81\x87\x02\x2f\x12\x81"
  "\x8b\x02\x2e\x10\x81\x8b\x02\x2d\x0e\x81\x8b\x02\x2c\x0c\x81\x8b"
  "\x02\x2b\x0a\x81\x85\x02\x2a\x08\x81\x89\x02\x29\x06\x81\x89\x02"
  "\x28\x04\x84\x06\x23\x2f\x0a\x02\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x0b\x10\x0f\x0e\x0d\x0c\x0b\x0a\x09\x08\x1a\x72"
  "\x65\x63\x6f\x72\x64\x2d\x73\x6c\x6f\x74\x2d\x75\x6e\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x64\x0c\x02\x04\x19\x65\x72\x72\x6f"
  "\x72\x3a\x75\x6e\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x2d"
  "\x73\x6c\x6f\x74\x0d\x02\x59\x44\x81\x83\x02\x58\x42\x83\x04\x57"
  "\x40\x81\x83\x02\x56\x3e\x83\x04\x55\x3c\x81\x83\x02\x54\x3a\x83"
  "\x04\x53\x38\x81\x83\x02\x52\x36\x83\x04\x51\x34\x81\x83\x02\x50"
  "\x32\x83\x04\x4f\x30\x81\x83\x02\x4e\x2e\x83\x04\x4d\x2c\x81\x83"
  "\x02\x4c\x2a\x83\x04\x4b\x28\x81\x83\x02\x4a\x26\x83\x04\x49\x24"
  "\x81\x83\x02\x48\x22\x83\x04\x47\x20\x81\x83\x02\x46\x1e\x83\x04"
  "\x45\x1c\x81\x83\x02\x44\x1a\x83\x04\x43\x18\x81\x83\x02\x42\x16"
  "\x83\x04\x41\x14\x81\x83\x02\x40\x12\x83\x04\x3f\x10\x81\x83\x02"
  "\x3e\x0e\x83\x04\x3d\x0c\x81\x83\x02\x3c\x0a\x83\x04\x3b\x08\x81"
  "\x85\x02\x3a\x06\x81\x85\x02\x39\x04\x83\x04\x43\x5b\x0e\x02\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0f\x02\x10\x0f"
  "\x0e\x0d\x0c\x0b\x0a\x09\x08\x6a\x24\x84\x06\x69\x22\x84\x06\x68"
  "\x20\x84\x06\x67\x1e\x84\x06\x66\x1c\x84\x06\x65\x1a\x84\x06\x64"
  "\x18\x84\x06\x63\x16\x84\x06\x62\x14\x84\x06\x61\x12\x84\x06\x60"
  "\x10\x84\x06\x5f\x0e\x84\x06\x5e\x0c\x84\x06\x5d\x0a\x84\x06\x5c"
  "\x08\x84\x06\x5b\x06\x81\x87\x02\x5a\x04\x83\x04\x23\x37\x10\x02"
  "\x08\x0b\x10\x0f\x0e\x0d\x0c\x0b\x0a\x09\x08\x0c\x02\x8b\x01\x44"
  "\x81\x83\x02\x8a\x01\x42\x83\x04\x89\x01\x40\x81\x83\x02\x88\x01"
  "\x3e\x83\x04\x87\x01\x3c\x81\x83\x02\x86\x01\x3a\x83\x04\x85\x01"
  "\x38\x81\x83\x02\x84\x01\x36\x83\x04\x83\x01\x34\x81\x83\x02\x82"
  "\x01\x32\x83\x04\x81\x01\x30\x81\x83\x02\x80\x01\x2e\x83\x04\x7f"
  "\x2c\x81\x83\x02\x7e\x2a\x83\x04\x7d\x28\x81\x83\x02\x7c\x26\x83"
  "\x04\x7b\x24\x81\x83\x02\x7a\x22\x83\x04\x79\x20\x81\x83\x02\x78"
  "\x1e\x83\x04\x77\x1c\x81\x83\x02\x76\x1a\x83\x04\x75\x18\x81\x83"
  "\x02\x74\x16\x83\x04\x73\x14\x81\x83\x02\x72\x12\x83\x04\x71\x10"
  "\x81\x83\x02\x70\x0e\x83\x04\x6f\x0c\x81\x83\x02\x6e\x0a\x83\x04"
  "\x6d\x08\x81\x85\x02\x6c\x06\x81\x85\x02\x6b\x04\x83\x04\x43\x59"
  "\x0c\x02\x09\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x0d\x72\x65\x63\x6f"
  "\x72\x64\x20\x69\x6e\x64\x65\x78\x12\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x73\x6c\x6f\x74\x2d\x6e\x61\x6d\x65\x0b\x0f\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x25\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x2d\x61\x70\x70"
  "\x6c\x69\x63\x61\x62\x6c\x65\x2d\x6d\x65\x74\x68\x6f\x64\x73\x02"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x1f\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x11\x03\x06\x6c\x69"
  "\x73\x74\x3f\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x03\x13\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x6c\x6f"
  "\x74\x2d\x6e\x61\x6d\x65\x73\x12\x04\x09\x6c\x69\x73\x74\x2d\x72"
  "\x65\x66\x08\x99\x01\x1e\x81\x85\x02\x98\x01\x1c\x81\x85\x02\x97"
  "\x01\x1a\x81\x85\x02\x96\x01\x18\x81\x83\x02\x95\x01\x16\x81\x85"
  "\x02\x94\x01\x14\x81\x85\x02\x93\x01\x12\x81\x85\x02\x92\x01\x10"
  "\x81\x85\x02\x91\x01\x0e\x81\x85\x02\x90\x01\x0c\x81\x85\x02\x8f"
  "\x01\x0a\x81\x83\x02\x8e\x01\x08\x84\x06\x8d\x01\x06\x81\x85\x02"
  "\x8c\x01\x04\x81\x85\x02\x1d\x3a\x13\x02\x0a\x12\x12\x03\x12\x03"
  "\x04\x17\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x20\x61\x64\x64\x2d\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x03\x16\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x2d\x74\x61\x67\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73"
  "\x03\x0d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x3f\x03\x17"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\x05\x18\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x66\x69\x65\x6c\x64\x2d\x69\x6e\x64\x65\x78\x03"
  "\x18\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x66\x69\x65"
  "\x6c\x64\x2d\x6e\x61\x6d\x65\x73\x08\xad\x01\x2a\x81\x83\x02\xac"
  "\x01\x28\x83\x04\xab\x01\x26\x81\x85\x02\xaa\x01\x24\x81\x87\x02"
  "\xa9\x01\x22\x81\x85\x02\xa8\x01\x20\x84\x06\xa7\x01\x1e\x81\x89"
  "\x02\xa6\x01\x1c\x84\x06\xa5\x01\x1a\x81\x87\x02\xa4\x01\x18\x81"
  "\x85\x02\xa3\x01\x16\x81\x83\x02\xa2\x01\x14\x81\x81\x02\xa1\x01"
  "\x12\x81\x81\x02\xa0\x01\x10\x81\x89\x02\x9f\x01\x0e\x84\x06\x9e"
  "\x01\x0c\x81\x81\x02\x9d\x01\x0a\x81\x85\x02\x9c\x01\x08\x81\x81"
  "\x02\x9b\x01\x06\x81\x81\x02\x9a\x01\x04\x82\x02\x29\x46\x02\x0b"
  "\x11\x49\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x20\x73\x6c\x6f\x74"
  "\x20\x13\x20\x74\x6f\x20\x61\x20\x67\x69\x76\x65\x6e\x20\x76\x61"
  "\x6c\x75\x65\x2e\x05\x53\x65\x74\x20\x04\x20\x74\x6f\x0c\x73\x74"
  "\x6f\x72\x65\x2d\x76\x61\x6c\x75\x65\x03\x10\x77\x72\x69\x74\x65"
  "\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x14\x05\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x15\x03\x13\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x69\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x16"
  "\x07\x0d\x77\x69\x74\x68\x2d\x72\x65\x73\x74\x61\x72\x74\x17\x05"
  "\xb2\x01\x0c\x81\x8b\x02\xb1\x01\x0a\x81\x8d\x02\xb0\x01\x08\x81"
  "\x8b\x02\xaf\x01\x06\x81\x87\x02\xae\x01\x04\x85\x08\x0b\x1c\x18"
  "\x02\x0c\x0a\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x0b\x53\x70\x65"
  "\x63\x69\x66\x79\x20\x61\x20\x02\x2e\x05\x15\x03\x12\x73\x74\x72"
  "\x69\x6e\x67\x2d\x63\x61\x70\x69\x74\x61\x6c\x69\x7a\x65\x07\x17"
  "\x03\x16\x05\xb6\x01\x0a\x81\x8d\x02\xb5\x01\x08\x81\x8b\x02\xb4"
  "\x01\x06\x81\x87\x02\xb3\x01\x04\x85\x08\x09\x18\x17\x02\x0d\x03"
  "\x20\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65\x76\x61\x6c"
  "\x75\x61\x74\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x02\xba\x01\x0a\x81\x85\x02\xb9\x01\x08\x81\x83\x02\xb8\x01\x06"
  "\x81\x83\x02\xb7\x01\x04\x83\x04\x09\x0f\x19\x02\x0e\x0f\x2e\x76"
  "\x61\x6c\x75\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x69\x6e\x73\x74"
  "\x65\x61\x64\x20\x6f\x66\x20\x74\x68\x65\x20\x63\x6f\x6e\x74\x65"
  "\x6e\x74\x73\x20\x6f\x66\x20\x73\x6c\x6f\x74\x20\x1d\x73\x6c\x6f"
  "\x74\x20\x6e\x61\x6d\x65\x20\x74\x6f\x20\x75\x73\x65\x20\x69\x6e"
  "\x73\x74\x65\x61\x64\x20\x6f\x66\x20\x2d\x20\x66\x61\x69\x6c\x65"
  "\x64\x20\x62\x65\x63\x61\x75\x73\x65\x20\x74\x68\x65\x20\x73\x6c"
  "\x6f\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x64\x2e\x0c\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x0f\x07\x72\x65\x63\x6f\x72\x64\x15\x20\x69\x6e\x20\x72"
  "\x65\x63\x6f\x72\x64\x73\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x02"
  "\x0c\x20\x69\x6e\x20\x72\x65\x63\x6f\x72\x64\x20\x0f\x09\x6c\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x1a\x02\x2e\x0f\x4e\x6f\x20\x73\x6c\x6f"
  "\x74\x20\x6e\x61\x6d\x65\x64\x20\x1a\x1a\x1b\x41\x74\x74\x65\x6d"
  "\x70\x74\x20\x74\x6f\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20"
  "\x73\x6c\x6f\x74\x20\x0d\x6e\x6f\x2d\x73\x75\x63\x68\x2d\x73\x6c"
  "\x6f\x74\x0f\x1a\x41\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x20\x65\x72"
  "\x72\x6f\x72\x20\x66\x6f\x72\x20\x73\x6c\x6f\x74\x20\x13\x75\x6e"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x2d\x73\x6c\x6f\x74"
  "\x0b\x73\x6c\x6f\x74\x2d\x65\x72\x72\x6f\x72\x1a\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x6c\x6f\x74\x2d"
  "\x65\x72\x72\x6f\x72\x1a\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x75\x6e\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x64\x2d\x73\x6c\x6f\x74\x0f\x1c\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x2d\x73\x75\x63\x68"
  "\x2d\x73\x6c\x6f\x74\x0d\x13\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x2d"
  "\x73\x75\x63\x68\x2d\x73\x6c\x6f\x74\x1b\x06\x1a\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x63\x65\x6c\x6c\x2d"
  "\x65\x72\x72\x6f\x72\x1a\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x0f\x06\x06"
  "\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x04\x11\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04\x06\x77\x72\x69\x74\x65"
  "\x04\x0b\x03\x14\x03\x11\x05\x14\x73\x74\x6f\x72\x65\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x14\x05\x12\x75\x73"
  "\x65\x2d\x76\x61\x6c\x75\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x11"
  "\x04\x15\x0c\xec\x01\x66\x81\x83\x02\xeb\x01\x64\x81\x85\x02\xea"
  "\x01\x62\x81\x83\x02\xe9\x01\x60\x81\x85\x02\xe8\x01\x5e\x81\x85"
  "\x02\xe7\x01\x5c\x81\x83\x02\xe6\x01\x5a\x81\x87\x02\xe5\x01\x58"
  "\x81\x85\x02\xe4\x01\x56\x81\x85\x02\xe3\x01\x54\x81\x89\x02\xe2"
  "\x01\x52\x81\x85\x02\xe1\x01\x50\x81\x85\x02\xe0\x01\x4e\x81\x89"
  "\x02\xdf\x01\x4c\x81\x89\x02\xde\x01\x4a\x81\x85\x02\xdd\x01\x48"
  "\x81\x85\x02\xdc\x01\x46\x81\x87\x02\xdb\x01\x44\x81\x87\x02\xda"
  "\x01\x42\x81\x85\x02\xd9\x01\x40\x81\x89\x02\xd8\x01\x3e\x81\x85"
  "\x02\xd7\x01\x3c\x81\x81\x02\xd6\x01\x3a\x81\x81\x02\xd5\x01\x38"
  "\x81\x87\x02\xd4\x01\x36\x81\x89\x02\xd3\x01\x34\x81\x85\x02\xd2"
  "\x01\x32\x81\x85\x02\xd1\x01\x30\x81\x87\x02\xd0\x01\x2e\x81\x83"
  "\x02\xcf\x01\x2c\x81\x81\x02\xce\x01\x2a\x81\x81\x02\xcd\x01\x28"
  "\x81\x89\x02\xcc\x01\x26\x81\x85\x02\xcb\x01\x24\x81\x85\x02\xca"
  "\x01\x22\x84\x06\xc9\x01\x20\x81\x87\x02\xc8\x01\x1e\x81\x83\x02"
  "\xc7\x01\x1c\x81\x81\x02\xc6\x01\x1a\x81\x81\x02\xc5\x01\x18\x81"
  "\x85\x02\xc4\x01\x16\x84\x06\xc3\x01\x14\x81\x87\x02\xc2\x01\x12"
  "\x81\x81\x02\xc1\x01\x10\x81\x81\x02\xc0\x01\x0e\x84\x06\xbf\x01"
  "\x0c\x81\x87\x02\xbe\x01\x0a\x81\x81\x02\xbd\x01\x08\x81\x81\x02"
  "\xbc\x01\x06\x81\x87\x02\xbb\x01\x04\x82\x02\x65\xa1\x01\x15\x0e"
  "\x1c\x1c\x15\x04\x17\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x73\x21\x1b\x0d\x0f\x1a\x16"
  "\x19\x04\x11\x17\x04\x14\x18\x04\x1f\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x6c\x6f\x74\x2d"
  "\x61\x63\x63\x65\x73\x73\x21\x04\x12\x0b\x13\x08\x0c\x04\x10\x04"
  "\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x15\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2d\x69\x6e\x64\x65\x78\x2d\x63\x61\x73\x65"
  "\x73\x0e\x04\x0a\x04\x1b\x25\x72\x65\x63\x6f\x72\x64\x2d\x69\x6e"
  "\x69\x74\x70\x72\x65\x64\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72"
  "\x09\x04\x1b\x25\x72\x65\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69\x66"
  "\x69\x65\x72\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x04\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1b"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72"
  "\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x04\x04\x1f\x73\x63\x2d"
  "\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65"
  "\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x18\x32\x80\x80"
  "\x04\x17\x30\x81\x81\x02\x16\x2e\x81\x81\x02\x15\x2c\x81\x83\x02"
  "\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11"
  "\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81"
  "\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x85\x02"
  "\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01"
  "\x04\x81\x83\x02\x31\x5e";

SCHEME_OBJECT *
recslot_so_data_befcc978dd3bb2b3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_recslot_so_data_befcc978dd3bb2b3 [0]))), (sizeof (prog_recslot_so_data_befcc978dd3bb2b3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_28]));
}

DECLARE_COMPILED_DATA_NS ("recslot.so", recslot_so_data_befcc978dd3bb2b3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("recslot.so", "aafbef116c34908a")
