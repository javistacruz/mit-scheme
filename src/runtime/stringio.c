/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:54-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto with_input_from_string_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_input_from_string_4)
DEFLABEL (with_input_from_string_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto call_with_input_string_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_input_string_4)
DEFLABEL (call_with_input_string_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_8 7
#define LABEL_3_5 9
#define LABEL_3_12 11
#define LABEL_3_13 13
#define LABEL_3_10 15
#define LABEL_3_15 17
#define TAG_3_16 7
#define LABEL_3_17 19
#define TAG_3_18 8
#define LABEL_3_20 21
#define LABEL_3_21 23
#define LABEL_3_23 25
#define LABEL_3_28 27
#define LABEL_3_25 29
#define LABEL_3_30 31
#define LABEL_3_26 33
#define TAG_3_27 15
#define LABEL_3_31 35
#define LABEL_3_33 37
#define ENVIRONMENT_LABEL_3_3 64
#define DEBUGGING_LABEL_3_2 63
#define OBJECT_3_1 62
#define OBJECT_3_0 61
#define EXECUTE_CACHE_3_32 39
#define EXECUTE_CACHE_3_29 41
#define EXECUTE_CACHE_3_24 43
#define EXECUTE_CACHE_3_22 45
#define EXECUTE_CACHE_3_19 47
#define EXECUTE_CACHE_3_14 49
#define EXECUTE_CACHE_3_11 51
#define EXECUTE_CACHE_3_9 53
#define EXECUTE_CACHE_3_7 55
#define FREE_REFERENCE_3_2 58
#define FREE_REFERENCE_3_1 59
#define FREE_REFERENCE_3_0 60
#define FREE_REFERENCES_LABEL_3_0 38
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto open_input_string_15;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto lambda_24;

    case 9:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_3_28);
      goto label_18;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_3_30);
      goto label_19;

    case 15:
      current_block = (Rpc - LABEL_3_26);
      goto lambda_25;

    case 16:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_3_33);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_input_string_22)
DEFLABEL (open_input_string_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 30))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_15])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_3_15);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_28])), (Wrd8.pObj));

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_3_17);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_34;
  Wrd7 = Wrd11;

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_30])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_3_26);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_31);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_36;
  Wrd7 = Wrd11;

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_33])), (Wrd8.pObj));

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define LABEL_4_4 15
#define LABEL_4_12 17
#define TAG_4_13 7
#define ENVIRONMENT_LABEL_4_3 26
#define DEBUGGING_LABEL_4_2 25
#define OBJECT_4_1 24
#define OBJECT_4_0 23
#define EXECUTE_CACHE_4_14 19
#define EXECUTE_CACHE_4_11 21
#define FREE_REFERENCES_LABEL_4_0 18
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd68;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd24;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_4_4);
      goto check_index_limits_13;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_index_limits_18)
DEFLABEL (check_index_limits_13)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_30;
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_29;
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_29;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if ((Wrd51.Lng) > (Wrd53.Lng))
    goto label_28;

DEFLABEL (label_27)
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_26)
  (Wrd15.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == (current_block [OBJECT_4_0]))
    goto label_25;
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_24;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_24;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd70.Lng) > (Wrd72.Lng))
    goto label_22;

DEFLABEL (label_21)
  (Wrd24.Obj) = (Rsp [1]);

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_12])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  Rvl = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_23)
  (Wrd68.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_24)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (label_25)
  (Wrd24.Obj) = (current_block [OBJECT_4_1]);
  goto label_20;

DEFLABEL (label_28)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_23;

DEFLABEL (label_29)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_30)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_26;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_5);
  goto label_21;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_6);
  goto label_27;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_4_12);

DEFLABEL (lambda_10)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_7 27
#define OBJECT_5_6 26
#define OBJECT_5_5 25
#define OBJECT_5_4 24
#define OBJECT_5_3 23
#define OBJECT_5_2 22
#define OBJECT_5_1 21
#define OBJECT_5_0 20
#define EXECUTE_CACHE_5_9 13
#define FREE_REFERENCE_5_3 16
#define FREE_REFERENCE_5_2 17
#define FREE_REFERENCE_5_1 18
#define FREE_REFERENCE_5_0 19
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_5_4);
      goto make_string_in_type_21;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_string_in_type_28)
DEFLABEL (make_string_in_type_21)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd15.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_34;
  Wrd37 = Wrd41;

DEFLABEL (label_33)
  (Wrd46.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd51.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd58.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Wrd70.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd75.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd84.Obj) = ((Wrd81.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_32;
  Wrd80 = Wrd84;

DEFLABEL (label_31)
  (Wrd89.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Wrd93.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (Wrd94.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd100.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd103.Obj) = ((Wrd100.pObj) [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 50)
    goto label_30;
  Wrd99 = Wrd103;

DEFLABEL (label_29)
  (Wrd108.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd113.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Rsp [1]) = (Wrd114.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd100.pObj));

DEFLABEL (label_26)
  (Wrd99.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd81.pObj));

DEFLABEL (label_25)
  (Wrd80.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd38.pObj));

DEFLABEL (label_24)
  (Wrd37.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto make_internal_input_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_internal_input_state_3)
DEFLABEL (make_internal_input_state_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto iistate_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iistate_string_3)
DEFLABEL (iistate_string_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto iistate_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iistate_start_3)
DEFLABEL (iistate_start_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto iistate_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iistate_end_3)
DEFLABEL (iistate_end_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto iistate_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iistate_next_3)
DEFLABEL (iistate_next_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_11_4);
      goto set_iistate_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_iistate_nextB_3)
DEFLABEL (set_iistate_nextB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_3 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto iistateP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iistateP_10)
DEFLABEL (iistateP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  Rvl = (current_block [OBJECT_12_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 6
#define DEBUGGING_LABEL_13_2 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto string_in_char_readyP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_in_char_readyP_3)
DEFLABEL (string_in_char_readyP_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 9
#define DEBUGGING_LABEL_14_2 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto string_in_write_self_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_in_write_self_3)
DEFLABEL (string_in_write_self_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 16
#define DEBUGGING_LABEL_15_2 15
#define OBJECT_15_4 14
#define OBJECT_15_3 13
#define OBJECT_15_2 12
#define OBJECT_15_1 11
#define OBJECT_15_0 10
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto internal_in_eofP_5;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_in_eofP_11)
DEFLABEL (internal_in_eofP_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_17)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_16;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_16;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_15)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_13;
  Rvl = (current_block [OBJECT_15_4]);
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_15_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_9)
  (Wrd37.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_15_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define LABEL_16_6 13
#define LABEL_16_11 15
#define LABEL_16_12 17
#define ENVIRONMENT_LABEL_16_3 28
#define DEBUGGING_LABEL_16_2 27
#define OBJECT_16_5 26
#define OBJECT_16_4 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_10 19
#define FREE_REFERENCES_LABEL_16_0 18
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto internal_in_read_substring_10;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_16_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_in_read_substring_19)
DEFLABEL (internal_in_read_substring_10)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_29;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_29;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_28)
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_27;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd51.Lng))))
    goto label_27;
  (Wrd45.Obj) = ((Wrd49.pObj) [5]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_26)
  (Wrd68.Obj) = (Rsp [6]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_25;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd67.Lng))))
    goto label_25;
  (Wrd61.Obj) = ((Wrd65.pObj) [2]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_22)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd22.Lng) + (Wrd24.Lng));
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_21;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd35.Lng))))
    goto label_21;
  ((Wrd33.pObj) [5]) = (Wrd21.Obj);

DEFLABEL (label_20)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_16_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 3);

DEFLABEL (label_17)
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_16_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd70.Obj) = (Rsp [6]);
  (Wrd71.Obj) = (current_block [OBJECT_16_4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.Obj) = (current_block [OBJECT_16_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (current_block [OBJECT_16_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 18
#define DEBUGGING_LABEL_17_2 17
#define EXECUTE_CACHE_17_8 11
#define FREE_REFERENCE_17_2 14
#define FREE_REFERENCE_17_1 15
#define FREE_REFERENCE_17_0 16
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_17_4);
      goto make_narrow_input_type_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_narrow_input_type_6)
DEFLABEL (make_narrow_input_type_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_8;
  Wrd17 = Wrd21;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_9 13
#define ENVIRONMENT_LABEL_18_3 24
#define DEBUGGING_LABEL_18_2 23
#define OBJECT_18_5 22
#define OBJECT_18_4 21
#define OBJECT_18_3 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 15
#define FREE_REFERENCES_LABEL_18_0 14
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd107;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_18_4);
      goto narrow_in_peek_char_7;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_in_peek_char_15)
DEFLABEL (narrow_in_peek_char_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_25)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_24;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_24;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_23)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_16;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_16)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_22;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_22;
  (Wrd57.Obj) = ((Wrd63.pObj) [5]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_20;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd81.Lng))))
    goto label_20;
  (Wrd73.Obj) = ((Wrd79.pObj) [2]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd107.uLng) == 30)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_5]), 2);

DEFLABEL (label_18)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_17;
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [1]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) (Wrd101.Lng)) < ((unsigned long) (Wrd105.Lng))))
    goto label_17;
  (Wrd92.uLng) = (OBJECT_DATUM (Wrd98.Obj));
  (Wrd95.pChr) = (& ((Wrd103.pChr) [(Wrd92.Lng)]));
  (Wrd96.uLng) = ((unsigned long) (((unsigned char *) (Wrd95.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd96.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (current_block [OBJECT_18_4]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_13)
  (Wrd73.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (current_block [OBJECT_18_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_12)
  (Wrd57.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_18_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_11)
  (Wrd37.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_18_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define LABEL_19_10 15
#define LABEL_19_11 17
#define LABEL_19_12 19
#define ENVIRONMENT_LABEL_19_3 31
#define DEBUGGING_LABEL_19_2 30
#define OBJECT_19_6 29
#define OBJECT_19_5 28
#define OBJECT_19_4 27
#define OBJECT_19_3 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_13 21
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd107;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd101;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto narrow_in_read_char_12;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_19_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_19_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_in_read_char_23)
DEFLABEL (narrow_in_read_char_12)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_38;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_38;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_37)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_36;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_36;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_35)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_24;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (label_24)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_34;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_34;
  (Wrd59.Obj) = ((Wrd63.pObj) [5]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_33)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_32;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd81.Lng))))
    goto label_32;
  (Wrd73.Obj) = ((Wrd79.pObj) [2]);

DEFLABEL (label_31)
  (Wrd89.Obj) = (* (Rsp++));
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd101.uLng) == 30))
    goto label_30;
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd96.uLng) == 26))
    goto label_30;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [1]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) (Wrd97.Lng)) < ((unsigned long) (Wrd100.Lng))))
    goto label_30;
  (Wrd91.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd93.pChr) = (& ((Wrd98.pChr) [(Wrd91.Lng)]));
  (Wrd94.uLng) = ((unsigned long) (((unsigned char *) (Wrd93.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd95.Obj) = (MAKE_OBJECT (2, (Wrd94.uLng)));
  (* (--Rsp)) = (Wrd95.Obj);

DEFLABEL (label_29)
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 62))
    goto label_28;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd115.Lng))))
    goto label_28;
  (Wrd107.Obj) = ((Wrd113.pObj) [5]);

DEFLABEL (label_27)
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd125.Lng) = ((Wrd124.Lng) + 1L);
  (Wrd123.Obj) = (LONG_TO_FIXNUM (Wrd125.Lng));
  (Wrd136.Obj) = (Rsp [1]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if (! ((Wrd137.uLng) == 62))
    goto label_26;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd136.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd135.Lng))))
    goto label_26;
  ((Wrd133.pObj) [5]) = (Wrd123.Obj);

DEFLABEL (label_25)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd138.Obj) = (Rsp [1]);
  (Wrd139.Obj) = (current_block [OBJECT_19_3]);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 3);

DEFLABEL (label_21)
  goto label_25;

DEFLABEL (label_28)
  (Wrd118.Obj) = (Rsp [1]);
  (Wrd119.Obj) = (current_block [OBJECT_19_3]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_20)
  (Wrd107.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.Obj) = (current_block [OBJECT_19_4]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_18)
  (Wrd73.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (current_block [OBJECT_19_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_19_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_16)
  (Wrd37.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_19_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_6 5
#define LABEL_20_4 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define LABEL_20_11 17
#define LABEL_20_12 19
#define ENVIRONMENT_LABEL_20_3 33
#define DEBUGGING_LABEL_20_2 32
#define OBJECT_20_8 31
#define OBJECT_20_7 30
#define OBJECT_20_6 29
#define OBJECT_20_5 28
#define OBJECT_20_4 27
#define OBJECT_20_3 26
#define OBJECT_20_2 25
#define OBJECT_20_1 24
#define OBJECT_20_0 23
#define EXECUTE_CACHE_20_13 21
#define FREE_REFERENCES_LABEL_20_0 20
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd127;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd110;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd80;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_10;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_20_4);
      goto narrow_in_unread_char_13;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_20_12);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_in_unread_char_22)
DEFLABEL (narrow_in_unread_char_13)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_36;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd23.Obj) = ((Wrd27.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_35)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_34;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_34;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_33)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_32;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_20_8]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_6);

DEFLABEL (label_32)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_31;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_31;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_30)
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd78.Lng) = ((Wrd77.Lng) - 1L);
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 62))
    goto label_29;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd88.Lng))))
    goto label_29;
  (Wrd80.Obj) = ((Wrd86.pObj) [2]);

DEFLABEL (label_28)
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd110.uLng) == 30))
    goto label_27;
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_27;
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [1]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) (Wrd106.Lng)) < ((unsigned long) (Wrd109.Lng))))
    goto label_27;
  (Wrd99.uLng) = (OBJECT_DATUM (Wrd103.Obj));
  (Wrd101.pChr) = (& ((Wrd107.pChr) [(Wrd99.Lng)]));
  (Wrd102.uLng) = ((unsigned long) (((unsigned char *) (Wrd101.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd96.Obj) = (MAKE_OBJECT (2, (Wrd102.uLng)));

DEFLABEL (label_26)
  (Wrd116.Obj) = (Rsp [3]);
  if ((Wrd116.Obj) == (Wrd96.Obj))
    goto label_25;
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd121.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_5);

DEFLABEL (label_25)
  (Wrd122.Obj) = (current_block [OBJECT_20_2]);
  (Rsp [2]) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd123.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 3);

DEFLABEL (label_24)
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd134.Lng))))
    goto label_23;
  (Wrd127.Obj) = (Rsp [2]);
  ((Wrd132.pObj) [5]) = (Wrd127.Obj);
  Rvl = (current_block [OBJECT_20_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 2);

DEFLABEL (label_20)
  (Wrd96.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (current_block [OBJECT_20_3]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_19)
  (Wrd80.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_20_2]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_18)
  (Wrd61.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_20_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_17)
  (Wrd37.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_20_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 18
#define DEBUGGING_LABEL_21_2 17
#define EXECUTE_CACHE_21_8 11
#define FREE_REFERENCE_21_2 14
#define FREE_REFERENCE_21_1 15
#define FREE_REFERENCE_21_0 16
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_21_4);
      goto make_wide_input_type_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_wide_input_type_6)
DEFLABEL (make_wide_input_type_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_8;
  Wrd17 = Wrd21;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define ENVIRONMENT_LABEL_22_3 25
#define DEBUGGING_LABEL_22_2 24
#define OBJECT_22_4 23
#define OBJECT_22_3 22
#define OBJECT_22_2 21
#define OBJECT_22_1 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_11 15
#define EXECUTE_CACHE_22_10 17
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto wide_in_peek_char_7;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_in_peek_char_15)
DEFLABEL (wide_in_peek_char_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_24;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_23)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_22;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_22;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_21)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_16;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_16)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_20;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_20;
  (Wrd57.Obj) = ((Wrd63.pObj) [5]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_18;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd81.Lng))))
    goto label_18;
  (Wrd73.Obj) = ((Wrd79.pObj) [2]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_18)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (current_block [OBJECT_22_4]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_13)
  (Wrd73.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (current_block [OBJECT_22_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_12)
  (Wrd57.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_22_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_11)
  (Wrd37.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_22_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_9 11
#define LABEL_23_10 13
#define LABEL_23_8 15
#define LABEL_23_13 17
#define LABEL_23_14 19
#define ENVIRONMENT_LABEL_23_3 32
#define DEBUGGING_LABEL_23_2 31
#define OBJECT_23_5 30
#define OBJECT_23_4 29
#define OBJECT_23_3 28
#define OBJECT_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_12 21
#define EXECUTE_CACHE_23_11 23
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto wide_in_read_char_12;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_23_14);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_in_read_char_22)
DEFLABEL (wide_in_read_char_12)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_35;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_34)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_33;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_33;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_32)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_23;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_23)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_31;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd68.Lng))))
    goto label_31;
  (Wrd62.Obj) = ((Wrd66.pObj) [5]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_30)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_29;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd84.Lng))))
    goto label_29;
  (Wrd78.Obj) = ((Wrd82.pObj) [2]);
  (* (--Rsp)) = (Wrd78.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_26)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_25;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd33.Lng))))
    goto label_25;
  ((Wrd31.pObj) [5]) = (Wrd21.Obj);

DEFLABEL (label_24)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_23_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 3);

DEFLABEL (label_20)
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_23_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.Obj) = (current_block [OBJECT_23_4]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_23_3]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_23_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_16)
  (Wrd37.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_23_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_5 3
#define LABEL_24_4 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_9 13
#define LABEL_24_11 15
#define LABEL_24_14 17
#define LABEL_24_10 19
#define ENVIRONMENT_LABEL_24_3 34
#define DEBUGGING_LABEL_24_2 33
#define OBJECT_24_7 32
#define OBJECT_24_6 31
#define OBJECT_24_5 30
#define OBJECT_24_4 29
#define OBJECT_24_3 28
#define OBJECT_24_2 27
#define OBJECT_24_1 26
#define OBJECT_24_0 25
#define EXECUTE_CACHE_24_13 21
#define EXECUTE_CACHE_24_12 23
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_24_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_24_4);
      goto wide_in_unread_char_13;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_in_unread_char_21)
DEFLABEL (wide_in_unread_char_13)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_33;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_33;
  (Wrd23.Obj) = ((Wrd27.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_32)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_31;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_31;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_30)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) < (Wrd55.Lng))
    goto label_29;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_5);

DEFLABEL (label_29)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_28;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_28;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_27)
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd78.Lng) = ((Wrd77.Lng) - 1L);
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd93.Obj) = (Rsp [3]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 62))
    goto label_26;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd92.Lng))))
    goto label_26;
  (Wrd86.Obj) = ((Wrd90.pObj) [2]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Wrd6.Obj) = (Rsp [3]);
  if ((Wrd6.Obj) == Rvl)
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_14);

DEFLABEL (label_24)
  (Wrd12.Obj) = (current_block [OBJECT_24_2]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_23;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_6]), 3);

DEFLABEL (label_23)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_22;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  Rvl = (current_block [OBJECT_24_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.Obj) = (current_block [OBJECT_24_3]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_24_2]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_18)
  (Wrd61.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_24_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_17)
  (Wrd37.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_24_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define LABEL_25_9 13
#define LABEL_25_10 15
#define LABEL_25_11 17
#define ENVIRONMENT_LABEL_25_3 38
#define DEBUGGING_LABEL_25_2 37
#define OBJECT_25_7 36
#define OBJECT_25_6 35
#define OBJECT_25_5 34
#define OBJECT_25_4 33
#define OBJECT_25_3 32
#define OBJECT_25_2 31
#define OBJECT_25_1 30
#define OBJECT_25_0 29
#define EXECUTE_CACHE_25_12 19
#define FREE_REFERENCE_25_6 22
#define FREE_REFERENCE_25_5 23
#define FREE_REFERENCE_25_4 24
#define FREE_REFERENCE_25_3 25
#define FREE_REFERENCE_25_2 26
#define FREE_REFERENCE_25_1 27
#define FREE_REFERENCE_25_0 28
#define FREE_REFERENCES_LABEL_25_0 18
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd130;
  machine_word Wrd121;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto make_external_input_type_21;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_25_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_25_11);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_external_input_type_31)
DEFLABEL (make_external_input_type_21)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_45;
  Wrd7 = Wrd11;

DEFLABEL (label_44)
  (Wrd16.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_43;
  Wrd26 = Wrd30;

DEFLABEL (label_42)
  (Wrd35.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_41;
  Wrd45 = Wrd49;

DEFLABEL (label_40)
  (Wrd54.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_25_3]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd59.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_3]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_39;
  Wrd64 = Wrd68;

DEFLABEL (label_38)
  (Wrd73.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd77.Obj) = (current_block [OBJECT_25_4]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd78.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_4]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_37;
  Wrd83 = Wrd87;

DEFLABEL (label_36)
  (Wrd92.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd96.Obj) = (current_block [OBJECT_25_5]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd97.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_5]));
  (Wrd106.Obj) = ((Wrd103.pObj) [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd107.uLng) == 50)
    goto label_35;
  Wrd102 = Wrd106;

DEFLABEL (label_34)
  (Wrd111.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (Wrd115.Obj) = (current_block [OBJECT_25_6]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd116.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd122.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_6]));
  (Wrd125.Obj) = ((Wrd122.pObj) [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 50)
    goto label_33;
  Wrd121 = Wrd125;

DEFLABEL (label_32)
  (Wrd130.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd129.pObj) = (& (Rhp [-2]));
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd129.pObj)));
  (Wrd134.Obj) = (current_block [OBJECT_25_7]);
  (* (Rhp++)) = (Wrd134.Obj);
  (* (Rhp++)) = (Wrd127.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd135.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd131.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (* (--Rsp)) = (Wrd138.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_11])), (Wrd122.pObj));

DEFLABEL (label_29)
  (Wrd121.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd103.pObj));

DEFLABEL (label_28)
  (Wrd102.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd84.pObj));

DEFLABEL (label_27)
  (Wrd83.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd65.pObj));

DEFLABEL (label_26)
  (Wrd64.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd46.pObj));

DEFLABEL (label_25)
  (Wrd45.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd27.pObj));

DEFLABEL (label_24)
  (Wrd26.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd8.pObj));

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto make_external_input_state_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_external_input_state_4)
DEFLABEL (make_external_input_state_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto xistate_source_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (xistate_source_3)
DEFLABEL (xistate_source_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto xistate_unread_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (xistate_unread_3)
DEFLABEL (xistate_unread_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 8
#define DEBUGGING_LABEL_29_2 7
#define OBJECT_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto set_xistate_unreadB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_xistate_unreadB_3)
DEFLABEL (set_xistate_unreadB_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define ENVIRONMENT_LABEL_30_3 17
#define DEBUGGING_LABEL_30_2 16
#define OBJECT_30_3 15
#define OBJECT_30_2 14
#define OBJECT_30_1 13
#define OBJECT_30_0 12
#define FREE_REFERENCE_30_0 11
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto xistateP_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (xistateP_10)
DEFLABEL (xistateP_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
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
  Rvl = (current_block [OBJECT_30_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_30_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define LABEL_31_7 11
#define ENVIRONMENT_LABEL_31_3 17
#define DEBUGGING_LABEL_31_2 16
#define OBJECT_31_3 15
#define OBJECT_31_2 14
#define OBJECT_31_1 13
#define OBJECT_31_0 12
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd23;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto external_in_eofP_5;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_in_eofP_11)
DEFLABEL (external_in_eofP_5)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_19;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_19;
  (Wrd23.Obj) = ((Wrd49.pObj) [3]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_18;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_18;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_17)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_31_3]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_31_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (current_block [OBJECT_31_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_8 9
#define LABEL_32_7 11
#define LABEL_32_9 13
#define ENVIRONMENT_LABEL_32_3 19
#define DEBUGGING_LABEL_32_2 18
#define OBJECT_32_3 17
#define OBJECT_32_2 16
#define OBJECT_32_1 15
#define OBJECT_32_0 14
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_32_4);
      goto external_in_peek_char_8;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_in_peek_char_15)
DEFLABEL (external_in_peek_char_8)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_20;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_20;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Rsp [0]) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  ((Wrd14.pObj) [3]) = Rvl;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_32_0]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 3);

DEFLABEL (label_13)
  goto label_17;

DEFLABEL (label_20)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_32_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_32_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_8 11
#define ENVIRONMENT_LABEL_33_3 17
#define DEBUGGING_LABEL_33_2 16
#define OBJECT_33_3 15
#define OBJECT_33_2 14
#define OBJECT_33_1 13
#define OBJECT_33_0 12
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto external_in_read_char_6;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_in_read_char_13)
DEFLABEL (external_in_read_char_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_20;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_20;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_15;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd49.Lng))))
    goto label_15;
  ((Wrd47.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_33_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 3);

DEFLABEL (label_10)
  goto label_14;

DEFLABEL (label_16)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_18;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_18;
  (Wrd58.Obj) = ((Wrd64.pObj) [2]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_18)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_33_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_11)
  (Wrd58.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_33_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_33_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_4 17
#define OBJECT_34_3 16
#define OBJECT_34_2 15
#define OBJECT_34_1 14
#define OBJECT_34_0 13
#define EXECUTE_CACHE_34_8 11
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto external_in_unread_char_4;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_in_unread_char_9)
DEFLABEL (external_in_unread_char_4)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_14;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_14;
  (Wrd23.Obj) = ((Wrd46.pObj) [3]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_13)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_34_4]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);

DEFLABEL (label_12)
  (Wrd25.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_11)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_10;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [3]) = (Wrd29.Obj);
  Rvl = (current_block [OBJECT_34_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_34_0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 19
#define DEBUGGING_LABEL_35_2 18
#define OBJECT_35_2 17
#define OBJECT_35_1 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_9 11
#define EXECUTE_CACHE_35_6 13
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_35_4);
      goto external_in_read_substring_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_in_read_substring_8)
DEFLABEL (external_in_read_substring_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [3]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_11)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_10;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_10;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_10)
  (Wrd31.Obj) = (current_block [OBJECT_35_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_35_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_7 7
#define LABEL_36_5 9
#define LABEL_36_9 11
#define LABEL_36_10 13
#define LABEL_36_11 15
#define LABEL_36_14 17
#define LABEL_36_13 19
#define LABEL_36_16 21
#define LABEL_36_20 23
#define LABEL_36_18 25
#define LABEL_36_23 27
#define ENVIRONMENT_LABEL_36_3 46
#define DEBUGGING_LABEL_36_2 45
#define EXECUTE_CACHE_36_24 29
#define EXECUTE_CACHE_36_22 31
#define EXECUTE_CACHE_36_21 33
#define EXECUTE_CACHE_36_19 35
#define EXECUTE_CACHE_36_17 37
#define EXECUTE_CACHE_36_15 39
#define EXECUTE_CACHE_36_12 41
#define EXECUTE_CACHE_36_8 43
#define FREE_REFERENCES_LABEL_36_0 28
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto move_charsB_14;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_36_20);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_36_23);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_charsB_21)
DEFLABEL (move_charsB_14)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_31;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_31;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_31;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_30)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_29;
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_29;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_29;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_27;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_27;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_27;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_25;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_25;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_25;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_24)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_36_14);
  (Rsp [8]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_22]));

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_36_20);
  (Rsp [8]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_23);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_22]));

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_18);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_8 9
#define LABEL_37_7 11
#define ENVIRONMENT_LABEL_37_3 14
#define DEBUGGING_LABEL_37_2 13
#define OBJECT_37_0 12
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_37_4);
      goto source__sinkB_6;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source__sinkB_10)
DEFLABEL (source__sinkB_6)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_4;

DEFLABEL (loop_11)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_14;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_14;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_4;

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_6 5
#define LABEL_38_8 7
#define ENVIRONMENT_LABEL_38_3 22
#define DEBUGGING_LABEL_38_2 21
#define EXECUTE_CACHE_38_12 9
#define EXECUTE_CACHE_38_11 11
#define EXECUTE_CACHE_38_10 13
#define EXECUTE_CACHE_38_9 15
#define EXECUTE_CACHE_38_7 17
#define EXECUTE_CACHE_38_5 19
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_38_4);
      goto string_source_3;

    case 1:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_source_6)
DEFLABEL (string_source_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_5]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_6 5
#define LABEL_39_8 7
#define ENVIRONMENT_LABEL_39_3 22
#define DEBUGGING_LABEL_39_2 21
#define EXECUTE_CACHE_39_12 9
#define EXECUTE_CACHE_39_11 11
#define EXECUTE_CACHE_39_10 13
#define EXECUTE_CACHE_39_9 15
#define EXECUTE_CACHE_39_7 17
#define EXECUTE_CACHE_39_5 19
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_39_4);
      goto string_sink_3;

    case 1:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_sink_6)
DEFLABEL (string_sink_3)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_5]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 10
#define DEBUGGING_LABEL_40_2 9
#define OBJECT_40_0 8
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto narrow_string_source_5;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_string_source_9)
DEFLABEL (narrow_string_source_5)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd10.Lng) < (Wrd14.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd51.Obj) = ((Wrd6.pObj) [4]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 30))
    goto label_13;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_13;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd10.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_13;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd28.pChr) = (& ((Wrd46.pChr) [(Wrd23.Lng)]));
  (Wrd29.uLng) = ((unsigned long) (((unsigned char *) (Wrd28.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd30.Obj) = (MAKE_OBJECT (2, (Wrd29.uLng)));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_12)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [3]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd71.Lng) = ((Wrd70.Lng) + 1L);
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));
  ((Wrd68.pObj) [0]) = (Wrd64.Obj);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [4]);
  (Wrd59.Obj) = ((Wrd55.pObj) [3]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd60.pObj) [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_7 5
#define LABEL_41_5 7
#define TAG_41_6 2
#define LABEL_41_8 9
#define LABEL_41_9 11
#define LABEL_41_10 13
#define ENVIRONMENT_LABEL_41_3 21
#define DEBUGGING_LABEL_41_2 20
#define OBJECT_41_2 19
#define OBJECT_41_1 18
#define OBJECT_41_0 17
#define EXECUTE_CACHE_41_11 15
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto narrow_string_sink_7;

    case 1:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_string_sink_13)
DEFLABEL (narrow_string_sink_7)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 2))
    goto label_24;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_23)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd17.Lng) < 256L)
    goto label_22;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_7);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd32.Obj) = ((Wrd25.pObj) [2]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd29.Lng) < (Wrd33.Lng))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd99.Obj) = ((Wrd25.pObj) [4]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 30))
    goto label_21;
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_21;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [1]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd96.Lng))))
    goto label_21;
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 2))
    goto label_21;
  (Wrd69.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd74.pChr) = (& ((Wrd94.pChr) [(Wrd69.Lng)]));
  ((Wrd74.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd77.Obj)));

DEFLABEL (label_20)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_19;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd51.Lng) = ((Wrd57.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd51.Lng)))
    goto label_19;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));

DEFLABEL (label_18)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [3]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  ((Wrd61.pObj) [0]) = (Wrd44.Obj);
  Rvl = (current_block [OBJECT_41_2]);
  goto label_15;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (Wrd44.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd101.Obj) = ((Wrd103.pObj) [4]);
  (Wrd107.Obj) = ((Wrd103.pObj) [3]);
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd104.Obj) = ((Wrd108.pObj) [0]);
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 3);

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (label_24)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define TAG_42_6 1
#define LABEL_42_7 7
#define ENVIRONMENT_LABEL_42_3 12
#define DEBUGGING_LABEL_42_2 11
#define EXECUTE_CACHE_42_8 9
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_42_4);
      goto wide_string_source_5;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_source_8)
DEFLABEL (wide_string_source_5)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_42_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd10.Lng) < (Wrd14.Lng))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd27.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  ((Wrd9.pObj) [0]) = (Wrd5.Obj);
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_7 7
#define LABEL_43_9 9
#define ENVIRONMENT_LABEL_43_3 15
#define DEBUGGING_LABEL_43_2 14
#define OBJECT_43_0 13
#define EXECUTE_CACHE_43_8 11
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_43_4);
      goto wide_string_sink_4;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_sink_8)
DEFLABEL (wide_string_sink_4)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Obj) = ((Wrd8.pObj) [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! ((Wrd12.Lng) < (Wrd16.Lng)))
    goto label_10;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd30.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_13;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_13;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_12)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  ((Wrd30.pObj) [0]) = (Wrd13.Obj);
  Rvl = (current_block [OBJECT_43_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_6)
  (Wrd13.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_8 7
#define LABEL_44_6 9
#define TAG_44_7 3
#define LABEL_44_9 11
#define LABEL_44_10 13
#define LABEL_44_11 15
#define LABEL_44_13 17
#define LABEL_44_12 19
#define ENVIRONMENT_LABEL_44_3 30
#define DEBUGGING_LABEL_44_2 29
#define OBJECT_44_3 28
#define OBJECT_44_2 27
#define OBJECT_44_1 26
#define OBJECT_44_0 25
#define EXECUTE_CACHE_44_15 21
#define EXECUTE_CACHE_44_14 23
#define FREE_REFERENCES_LABEL_44_0 20
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd141;
  machine_word Wrd134;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd142;
  machine_word Wrd149;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd122;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd171;
  machine_word Wrd167;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_44_4);
      goto external_string_source_12;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_44_6);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_44_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_string_source_19)
DEFLABEL (external_string_source_12)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_44_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_6])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_44_6);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_30;
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_30;
  (Wrd167.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd171.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd167.Lng) < (Wrd171.Lng))
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd36.Lng) = 4096L;
  if ((Wrd34.Lng) < (Wrd36.Lng))
    goto label_27;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd61.Obj) = ((Wrd30.pObj) [4]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_29;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd65.Lng) = ((Wrd71.Lng) + (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd65.Lng)))
    goto label_29;
  (Wrd74.Obj) = (LONG_TO_FIXNUM (Wrd65.Lng));
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd172.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [5]);
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd176.Obj) = (current_block [OBJECT_44_2]);
  ((Wrd175.pObj) [0]) = (Wrd176.Obj);

DEFLABEL (label_27)
  (Wrd107.Obj) = (Rsp [0]);
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [6]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 30))
    goto label_26;
  (Wrd91.Obj) = ((Wrd108.pObj) [5]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 26))
    goto label_26;
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [1]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) (Wrd100.Lng)) < ((unsigned long) (Wrd106.Lng))))
    goto label_26;
  (Wrd81.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd86.pChr) = (& ((Wrd104.pChr) [(Wrd81.Lng)]));
  (Wrd87.uLng) = ((unsigned long) (((unsigned char *) (Wrd86.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd88.Obj) = (MAKE_OBJECT (2, (Wrd87.uLng)));
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_25)
  (Wrd123.Obj) = (Rsp [1]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [5]);
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  (Wrd129.Lng) = ((Wrd128.Lng) + 1L);
  (Wrd122.Obj) = (LONG_TO_FIXNUM (Wrd129.Lng));
  ((Wrd126.pObj) [0]) = (Wrd122.Obj);
  (Wrd145.Obj) = ((Wrd124.pObj) [4]);
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 26))
    goto label_24;
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  (Wrd149.Lng) = ((Wrd155.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd149.Lng)))
    goto label_24;
  (Wrd142.Obj) = (LONG_TO_FIXNUM (Wrd149.Lng));

DEFLABEL (label_23)
  (Wrd156.Obj) = (Rsp [1]);
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [4]);
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  ((Wrd159.pObj) [0]) = (Wrd142.Obj);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [4]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd134.Obj) = ((Wrd138.pObj) [0]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd142.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [6]);
  (Wrd117.Obj) = ((Wrd113.pObj) [5]);
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd114.Obj) = ((Wrd118.pObj) [0]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [4]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd54.pObj) [0]);
  (Wrd55.Obj) = (current_block [OBJECT_44_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd19.pObj) [0]);
  (Wrd20.Obj) = ((Wrd17.pObj) [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_8 7
#define LABEL_45_9 9
#define LABEL_45_6 11
#define TAG_45_7 4
#define LABEL_45_11 13
#define LABEL_45_12 15
#define LABEL_45_13 17
#define LABEL_45_14 19
#define LABEL_45_15 21
#define LABEL_45_16 23
#define LABEL_45_10 25
#define ENVIRONMENT_LABEL_45_3 38
#define DEBUGGING_LABEL_45_2 37
#define OBJECT_45_5 36
#define OBJECT_45_4 35
#define OBJECT_45_3 34
#define OBJECT_45_2 33
#define OBJECT_45_1 32
#define OBJECT_45_0 31
#define EXECUTE_CACHE_45_18 27
#define EXECUTE_CACHE_45_17 29
#define FREE_REFERENCES_LABEL_45_0 26
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd109;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd135;
  machine_word Wrd122;
  machine_word Wrd134;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd68;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd48;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd188;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd158;
  machine_word Wrd153;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd174;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd206;
  machine_word Wrd202;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd222;
  machine_word Wrd215;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd210;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd248;
  machine_word Wrd235;
  machine_word Wrd247;
  machine_word Wrd241;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd209;
  machine_word Wrd5;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto external_string_sink_15;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_45_6);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_45_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_45_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_45_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_45_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_45_16);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_string_sink_24)
DEFLABEL (external_string_sink_15)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_6])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_45_6);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 2))
    goto label_41;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_40)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd17.Lng) < 256L)
    goto label_39;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_9);

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_38;
  (Wrd32.Obj) = ((Wrd25.pObj) [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_38;
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd206.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd202.Lng) < (Wrd206.Lng))
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd181.Obj) = (Rsp [0]);
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd183.Obj) = ((Wrd182.pObj) [6]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 30))
    goto label_37;
  (Wrd165.Obj) = ((Wrd182.pObj) [5]);
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd168.uLng) == 26))
    goto label_37;
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [1]);
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  if (! (((unsigned long) (Wrd174.Lng)) < ((unsigned long) (Wrd180.Lng))))
    goto label_37;
  (Wrd161.Obj) = (Rsp [1]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 2))
    goto label_37;
  (Wrd153.uLng) = (OBJECT_DATUM (Wrd167.Obj));
  (Wrd158.pChr) = (& ((Wrd178.pChr) [(Wrd153.Lng)]));
  ((Wrd158.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd161.Obj)));

DEFLABEL (label_36)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [5]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd54.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  ((Wrd52.pObj) [0]) = (Wrd48.Obj);
  (Wrd71.Obj) = ((Wrd50.pObj) [3]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_35;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd75.Lng) = ((Wrd81.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd75.Lng)))
    goto label_35;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd75.Lng));

DEFLABEL (label_34)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [3]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  ((Wrd85.pObj) [0]) = (Wrd68.Obj);
  (Wrd88.Obj) = ((Wrd83.pObj) [5]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  if ((Wrd90.Obj) == (current_block [OBJECT_45_1]))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_45_5]);
  goto label_26;

DEFLABEL (label_30)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd114.Obj) = ((Wrd85.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_32;
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd121.uLng) == 26))
    goto label_32;
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd122.Lng) = ((Wrd128.Lng) - (Wrd134.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd122.Lng)))
    goto label_32;
  (Wrd135.Obj) = (LONG_TO_FIXNUM (Wrd122.Lng));
  (* (--Rsp)) = (Wrd135.Obj);

DEFLABEL (label_31)
  (Wrd136.Obj) = (Rsp [2]);
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd136.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [4]);
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd141.Obj) = ((Wrd137.pObj) [5]);
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd147.Obj) = ((Wrd137.pObj) [6]);
  (* (--Rsp)) = (Wrd147.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_17]));

DEFLABEL (label_32)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [3]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.Obj) = ((Wrd99.pObj) [5]);
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd102.Obj) = ((Wrd106.pObj) [0]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [3]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd64.pObj) [0]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (Wrd68.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd185.Obj) = ((Wrd187.pObj) [6]);
  (Wrd191.Obj) = ((Wrd187.pObj) [5]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd188.Obj) = ((Wrd192.pObj) [0]);
  (Wrd193.Obj) = (Rsp [1]);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 3);

DEFLABEL (label_21)
  goto label_36;

DEFLABEL (label_38)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [0]);
  (Wrd39.Obj) = ((Wrd36.pObj) [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 1);

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (Wrd223.Obj) = (Rsp [1]);
  (Wrd224.pObj) = (OBJECT_ADDRESS (Wrd223.Obj));
  (Wrd225.Obj) = ((Wrd224.pObj) [3]);
  (Wrd226.pObj) = (OBJECT_ADDRESS (Wrd225.Obj));
  (Wrd227.Obj) = ((Wrd226.pObj) [0]);
  (Wrd228.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if (! ((Wrd228.uLng) == 26))
    goto label_43;
  (Wrd231.Obj) = ((Wrd224.pObj) [5]);
  (Wrd232.pObj) = (OBJECT_ADDRESS (Wrd231.Obj));
  (Wrd233.Obj) = ((Wrd232.pObj) [0]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if (! ((Wrd234.uLng) == 26))
    goto label_43;
  (Wrd241.Lng) = (FIXNUM_TO_LONG (Wrd227.Obj));
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd233.Obj));
  (Wrd235.Lng) = ((Wrd241.Lng) - (Wrd247.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd235.Lng)))
    goto label_43;
  (Wrd248.Obj) = (LONG_TO_FIXNUM (Wrd235.Lng));
  (* (--Rsp)) = (Wrd248.Obj);
  goto label_31;

DEFLABEL (label_43)
  (Wrd211.Obj) = (Rsp [1]);
  (Wrd212.pObj) = (OBJECT_ADDRESS (Wrd211.Obj));
  (Wrd213.Obj) = ((Wrd212.pObj) [3]);
  (Wrd214.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd210.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.Obj) = ((Wrd212.pObj) [5]);
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd215.Obj) = ((Wrd219.pObj) [0]);
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  goto label_33;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Wrd261.Obj) = (Rsp [0]);
  (Wrd262.pObj) = (OBJECT_ADDRESS (Wrd261.Obj));
  (Wrd263.Obj) = ((Wrd262.pObj) [5]);
  (Wrd264.pObj) = (OBJECT_ADDRESS (Wrd263.Obj));
  (Wrd265.Obj) = (current_block [OBJECT_45_0]);
  ((Wrd264.pObj) [0]) = (Wrd265.Obj);
  goto label_29;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 10
#define DEBUGGING_LABEL_46_2 9
#define EXECUTE_CACHE_46_6 7
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_46_4);
      goto call_with_input_octets_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_input_octets_4)
DEFLABEL (call_with_input_octets_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define LABEL_47_10 11
#define TAG_47_11 4
#define LABEL_47_14 13
#define LABEL_47_13 15
#define LABEL_47_15 17
#define LABEL_47_17 19
#define LABEL_47_20 21
#define ENVIRONMENT_LABEL_47_3 43
#define DEBUGGING_LABEL_47_2 42
#define OBJECT_47_2 41
#define OBJECT_47_1 40
#define OBJECT_47_0 39
#define EXECUTE_CACHE_47_21 23
#define EXECUTE_CACHE_47_19 25
#define EXECUTE_CACHE_47_18 27
#define EXECUTE_CACHE_47_16 29
#define EXECUTE_CACHE_47_12 31
#define EXECUTE_CACHE_47_9 33
#define EXECUTE_CACHE_47_6 35
#define FREE_REFERENCE_47_0 38
#define FREE_REFERENCES_LABEL_47_0 22
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto open_input_octets_9;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_47_10);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_47_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_47_15);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_47_17);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_47_20);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_input_octets_13)
DEFLABEL (open_input_octets_9)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_10])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_47_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_20);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_14])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define LABEL_48_7 7
#define TAG_48_8 2
#define LABEL_48_11 9
#define LABEL_48_12 11
#define LABEL_48_10 13
#define LABEL_48_14 15
#define LABEL_48_15 17
#define ENVIRONMENT_LABEL_48_3 27
#define DEBUGGING_LABEL_48_2 26
#define OBJECT_48_0 25
#define EXECUTE_CACHE_48_16 19
#define EXECUTE_CACHE_48_13 21
#define EXECUTE_CACHE_48_9 23
#define FREE_REFERENCES_LABEL_48_0 18
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_48_4);
      goto make_octets_source_11;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_48_11);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_48_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_48_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_48_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_octets_source_17)
DEFLABEL (make_octets_source_11)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_7])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  ((Wrd23.pObj) [2]) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_20;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd19.Lng) < (Wrd21.Lng))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_48_0]);

DEFLABEL (label_22)
DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_48_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_30;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_30;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_30;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_28;
  (Wrd40.Obj) = ((Wrd35.pObj) [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_28;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd48.Lng) - (Wrd54.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_28;
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_26;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_26;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd22.Lng) = ((Wrd28.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_26;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_25)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = ((Wrd39.pObj) [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_15);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd29.Obj) = ((Wrd25.pObj) [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd30.pObj) [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define ENVIRONMENT_LABEL_49_3 20
#define DEBUGGING_LABEL_49_2 19
#define OBJECT_49_3 18
#define OBJECT_49_2 17
#define OBJECT_49_1 16
#define OBJECT_49_0 15
#define EXECUTE_CACHE_49_9 9
#define EXECUTE_CACHE_49_8 11
#define EXECUTE_CACHE_49_6 13
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_49_4);
      goto make_octets_input_type_5;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_octets_input_type_8)
DEFLABEL (make_octets_input_type_5)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (Wrd12.Obj) = (current_block [OBJECT_49_1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_49_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_49_7);
  (Wrd5.Obj) = (current_block [OBJECT_49_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_6 9
#define ENVIRONMENT_LABEL_50_3 21
#define DEBUGGING_LABEL_50_2 20
#define OBJECT_50_2 19
#define OBJECT_50_1 18
#define OBJECT_50_0 17
#define EXECUTE_CACHE_50_9 11
#define EXECUTE_CACHE_50_8 13
#define FREE_REFERENCE_50_0 16
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_50_4);
      goto open_narrow_output_string_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_narrow_output_string_6)
DEFLABEL (open_narrow_output_string_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_8 7
#define LABEL_51_6 9
#define ENVIRONMENT_LABEL_51_3 22
#define DEBUGGING_LABEL_51_2 21
#define OBJECT_51_1 20
#define OBJECT_51_0 19
#define EXECUTE_CACHE_51_10 11
#define EXECUTE_CACHE_51_9 13
#define EXECUTE_CACHE_51_7 15
#define FREE_REFERENCE_51_0 18
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_51_4);
      goto open_wide_output_string_2;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_51_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_wide_output_string_6)
DEFLABEL (open_wide_output_string_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_8])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 11
#define DEBUGGING_LABEL_52_2 10
#define OBJECT_52_0 9
#define EXECUTE_CACHE_52_6 7
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto get_output_string_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_output_string_4)
DEFLABEL (get_output_string_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 11
#define DEBUGGING_LABEL_53_2 10
#define OBJECT_53_0 9
#define EXECUTE_CACHE_53_6 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto get_output_stringB_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_output_stringB_4)
DEFLABEL (get_output_stringB_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define ENVIRONMENT_LABEL_54_3 14
#define DEBUGGING_LABEL_54_2 13
#define EXECUTE_CACHE_54_8 9
#define EXECUTE_CACHE_54_6 11
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_54_4);
      goto call_with_narrow_output_string_3;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_narrow_output_string_6)
DEFLABEL (call_with_narrow_output_string_3)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define ENVIRONMENT_LABEL_55_3 14
#define DEBUGGING_LABEL_55_2 13
#define EXECUTE_CACHE_55_8 9
#define EXECUTE_CACHE_55_6 11
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_55_4);
      goto call_with_wide_output_string_3;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_wide_output_string_6)
DEFLABEL (call_with_wide_output_string_3)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define LABEL_56_9 9
#define ENVIRONMENT_LABEL_56_3 18
#define DEBUGGING_LABEL_56_2 17
#define EXECUTE_CACHE_56_10 11
#define EXECUTE_CACHE_56_8 13
#define EXECUTE_CACHE_56_6 15
#define FREE_REFERENCES_LABEL_56_0 10
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_56_4);
      goto call_with_truncated_output_string_5;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_truncated_output_string_8)
DEFLABEL (call_with_truncated_output_string_5)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define ENVIRONMENT_LABEL_57_3 12
#define DEBUGGING_LABEL_57_2 11
#define EXECUTE_CACHE_57_8 7
#define EXECUTE_CACHE_57_7 9
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto with_output_to_string_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_output_to_string_4)
DEFLABEL (with_output_to_string_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define TAG_58_6 1
#define ENVIRONMENT_LABEL_58_3 12
#define DEBUGGING_LABEL_58_2 11
#define EXECUTE_CACHE_58_8 7
#define EXECUTE_CACHE_58_7 9
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto with_output_to_truncated_string_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_output_to_truncated_string_4)
DEFLABEL (with_output_to_truncated_string_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_58_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define ENVIRONMENT_LABEL_59_3 18
#define DEBUGGING_LABEL_59_2 17
#define EXECUTE_CACHE_59_8 11
#define FREE_REFERENCE_59_2 14
#define FREE_REFERENCE_59_1 15
#define FREE_REFERENCE_59_0 16
#define FREE_REFERENCES_LABEL_59_0 10
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_59_4);
      goto make_narrow_output_type_0;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_narrow_output_type_6)
DEFLABEL (make_narrow_output_type_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_8;
  Wrd17 = Wrd21;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_5 3
#define LABEL_60_4 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define LABEL_60_8 11
#define LABEL_60_11 13
#define LABEL_60_12 15
#define LABEL_60_13 17
#define LABEL_60_14 19
#define LABEL_60_15 21
#define LABEL_60_17 23
#define LABEL_60_16 25
#define LABEL_60_19 27
#define ENVIRONMENT_LABEL_60_3 43
#define DEBUGGING_LABEL_60_2 42
#define OBJECT_60_6 41
#define OBJECT_60_5 40
#define OBJECT_60_4 39
#define OBJECT_60_3 38
#define OBJECT_60_2 37
#define OBJECT_60_1 36
#define OBJECT_60_0 35
#define EXECUTE_CACHE_60_18 29
#define EXECUTE_CACHE_60_10 31
#define EXECUTE_CACHE_60_9 33
#define FREE_REFERENCES_LABEL_60_0 28
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_60_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_60_4);
      goto narrow_out_write_char_15;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_60_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_60_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_60_12);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_60_13);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_60_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_60_15);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_60_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_60_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_60_19);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_out_write_char_27)
DEFLABEL (narrow_out_write_char_15)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_46;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_45)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd15.Lng) < 256L)
    goto label_44;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_5);

DEFLABEL (label_44)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_43;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_43;
  (Wrd24.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_42)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_60_3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_60_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_39;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_39;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_38)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd105.uLng) == 30))
    goto label_37;
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_37;
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [1]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) (Wrd101.Lng)) < ((unsigned long) (Wrd104.Lng))))
    goto label_37;
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 2))
    goto label_37;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd95.pChr) = (& ((Wrd102.pChr) [(Wrd93.Lng)]));
  ((Wrd95.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd98.Obj)));

DEFLABEL (label_36)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_35;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_35;
  (Wrd38.Obj) = ((Wrd44.pObj) [3]);

DEFLABEL (label_34)
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd56.Lng) = ((Wrd55.Lng) + 1L);
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_33;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd84.Lng))))
    goto label_33;
  ((Wrd82.pObj) [3]) = (Wrd54.Obj);

DEFLABEL (label_32)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_31;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_31;
  (Wrd62.Obj) = ((Wrd66.pObj) [4]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_30)
  (Wrd76.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_60_16);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_29;
  ((Wrd13.pObj) [4]) = Rvl;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_60_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_60_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_5]), 3);

DEFLABEL (label_25)
  goto label_28;

DEFLABEL (label_31)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_60_6]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (current_block [OBJECT_60_1]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_5]), 3);

DEFLABEL (label_23)
  goto label_32;

DEFLABEL (label_35)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_60_1]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_21)
  (Wrd38.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd108.Obj) = (Rsp [2]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 3);

DEFLABEL (label_24)
  goto label_36;

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_60_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_60_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_60_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define LABEL_61_7 9
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_2 15
#define OBJECT_61_1 14
#define OBJECT_61_0 13
#define EXECUTE_CACHE_61_8 11
#define FREE_REFERENCES_LABEL_61_0 10
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto narrow_out_extract_output_4;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_61_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_out_extract_output_10)
DEFLABEL (narrow_out_extract_output_4)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_13)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_12;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_12;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (label_12)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_61_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_8)
  (Wrd37.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_61_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_61_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define LABEL_62_8 9
#define LABEL_62_6 11
#define LABEL_62_10 13
#define ENVIRONMENT_LABEL_62_3 23
#define DEBUGGING_LABEL_62_2 22
#define OBJECT_62_2 21
#define OBJECT_62_1 20
#define OBJECT_62_0 19
#define EXECUTE_CACHE_62_11 15
#define EXECUTE_CACHE_62_9 17
#define FREE_REFERENCES_LABEL_62_0 14
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_62_4);
      goto narrow_out_extract_outputB_7;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (narrow_out_extract_outputB_13)
DEFLABEL (narrow_out_extract_outputB_7)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_17;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_17;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_15;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_15;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.Obj) = (current_block [OBJECT_62_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_62_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_62_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_7 9
#define ENVIRONMENT_LABEL_63_3 18
#define DEBUGGING_LABEL_63_2 17
#define EXECUTE_CACHE_63_8 11
#define FREE_REFERENCE_63_2 14
#define FREE_REFERENCE_63_1 15
#define FREE_REFERENCE_63_0 16
#define FREE_REFERENCES_LABEL_63_0 10
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_63_4);
      goto make_wide_output_type_0;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_wide_output_type_6)
DEFLABEL (make_wide_output_type_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_8;
  Wrd17 = Wrd21;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_9 9
#define LABEL_64_10 11
#define LABEL_64_8 13
#define LABEL_64_12 15
#define LABEL_64_13 17
#define LABEL_64_15 19
#define LABEL_64_14 21
#define LABEL_64_17 23
#define ENVIRONMENT_LABEL_64_3 37
#define DEBUGGING_LABEL_64_2 36
#define OBJECT_64_4 35
#define OBJECT_64_3 34
#define OBJECT_64_2 33
#define OBJECT_64_1 32
#define OBJECT_64_0 31
#define EXECUTE_CACHE_64_16 25
#define EXECUTE_CACHE_64_11 27
#define EXECUTE_CACHE_64_7 29
#define FREE_REFERENCES_LABEL_64_0 24
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_64_4);
      goto wide_out_write_char_12;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_64_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_64_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_64_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_64_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_64_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_64_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_64_17);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_out_write_char_22)
DEFLABEL (wide_out_write_char_12)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_64_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_33)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_32;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_32;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_29)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_28;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_28;
  ((Wrd49.pObj) [3]) = (Wrd21.Obj);

DEFLABEL (label_27)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_26;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_26;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_25)
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_64_14);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_24;
  ((Wrd13.pObj) [4]) = Rvl;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_64_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_64_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 3);

DEFLABEL (label_20)
  goto label_23;

DEFLABEL (label_26)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_64_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (current_block [OBJECT_64_0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 3);

DEFLABEL (label_19)
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_64_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_64_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_64_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_64_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_7 9
#define ENVIRONMENT_LABEL_65_3 18
#define DEBUGGING_LABEL_65_2 17
#define OBJECT_65_3 16
#define OBJECT_65_2 15
#define OBJECT_65_1 14
#define OBJECT_65_0 13
#define EXECUTE_CACHE_65_8 11
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_65_4);
      goto wide_out_extract_output_4;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_65_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_out_extract_output_10)
DEFLABEL (wide_out_extract_output_4)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_14;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_14;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_13)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_12;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_12;
  (Wrd38.Obj) = ((Wrd44.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (label_12)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_65_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_8)
  (Wrd38.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_65_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_8 9
#define LABEL_66_6 11
#define LABEL_66_10 13
#define ENVIRONMENT_LABEL_66_3 24
#define DEBUGGING_LABEL_66_2 23
#define OBJECT_66_3 22
#define OBJECT_66_2 21
#define OBJECT_66_1 20
#define OBJECT_66_0 19
#define EXECUTE_CACHE_66_11 15
#define EXECUTE_CACHE_66_9 17
#define FREE_REFERENCES_LABEL_66_0 14
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_66_4);
      goto wide_out_extract_outputB_7;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_66_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_66_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_out_extract_outputB_13)
DEFLABEL (wide_out_extract_outputB_7)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_17;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_17;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_16)
  (Wrd40.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_15;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_15;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.Obj) = (current_block [OBJECT_66_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_66_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define LABEL_67_8 11
#define ENVIRONMENT_LABEL_67_3 29
#define DEBUGGING_LABEL_67_2 28
#define OBJECT_67_7 27
#define OBJECT_67_6 26
#define OBJECT_67_5 25
#define OBJECT_67_4 24
#define OBJECT_67_3 23
#define OBJECT_67_2 22
#define OBJECT_67_1 21
#define OBJECT_67_0 20
#define EXECUTE_CACHE_67_9 13
#define FREE_REFERENCE_67_3 16
#define FREE_REFERENCE_67_2 17
#define FREE_REFERENCE_67_1 18
#define FREE_REFERENCE_67_0 19
#define FREE_REFERENCES_LABEL_67_0 12
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_67_4);
      goto make_string_out_type_21;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_67_8);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_string_out_type_28)
DEFLABEL (make_string_out_type_21)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd15.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_67_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_34;
  Wrd25 = Wrd29;

DEFLABEL (label_33)
  (Wrd34.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_67_2]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_2]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_32;
  Wrd44 = Wrd48;

DEFLABEL (label_31)
  (Wrd53.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_67_3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd58.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd65.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd70.Obj) = (current_block [OBJECT_67_4]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd77.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_67_5]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_3]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_30;
  Wrd87 = Wrd91;

DEFLABEL (label_29)
  (Wrd96.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_67_6]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd101.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (Wrd108.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd113.Obj) = (current_block [OBJECT_67_7]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Rsp [1]) = (Wrd114.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_8])), (Wrd88.pObj));

DEFLABEL (label_26)
  (Wrd87.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_7])), (Wrd45.pObj));

DEFLABEL (label_25)
  (Wrd44.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd26.pObj));

DEFLABEL (label_24)
  (Wrd25.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 7
#define DEBUGGING_LABEL_68_2 6
#define OBJECT_68_1 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto ostate_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ostate_buffer_3)
DEFLABEL (ostate_buffer_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

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

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto ostate_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ostate_index_3)
DEFLABEL (ostate_index_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_69_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

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

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 7
#define DEBUGGING_LABEL_70_2 6
#define OBJECT_70_1 5
#define OBJECT_70_0 4
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto ostate_column_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ostate_column_3)
DEFLABEL (ostate_column_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

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

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 8
#define DEBUGGING_LABEL_71_2 7
#define OBJECT_71_2 6
#define OBJECT_71_1 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_71_4);
      goto set_ostate_bufferB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ostate_bufferB_3)
DEFLABEL (set_ostate_bufferB_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_71_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 8
#define DEBUGGING_LABEL_72_2 7
#define OBJECT_72_2 6
#define OBJECT_72_1 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_72_4);
      goto set_ostate_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ostate_indexB_3)
DEFLABEL (set_ostate_indexB_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_72_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 8
#define DEBUGGING_LABEL_73_2 7
#define OBJECT_73_2 6
#define OBJECT_73_1 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_73_4);
      goto set_ostate_columnB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ostate_columnB_3)
DEFLABEL (set_ostate_columnB_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_73_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define LABEL_74_7 9
#define ENVIRONMENT_LABEL_74_3 17
#define DEBUGGING_LABEL_74_2 16
#define OBJECT_74_3 15
#define OBJECT_74_2 14
#define OBJECT_74_1 13
#define OBJECT_74_0 12
#define FREE_REFERENCE_74_0 11
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto ostateP_4;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_74_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ostateP_10)
DEFLABEL (ostateP_4)
  INTERRUPT_CHECK (26, LABEL_74_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
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
  Rvl = (current_block [OBJECT_74_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_74_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 10
#define DEBUGGING_LABEL_75_2 9
#define OBJECT_75_2 8
#define OBJECT_75_1 7
#define OBJECT_75_0 6
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_75_4);
      goto string_out_output_column_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_out_output_column_5)
DEFLABEL (string_out_output_column_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_75_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 9
#define DEBUGGING_LABEL_76_2 8
#define OBJECT_76_1 7
#define OBJECT_76_0 6
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_76_4);
      goto string_out_position_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_out_position_5)
DEFLABEL (string_out_position_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_76_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 9
#define DEBUGGING_LABEL_77_2 8
#define OBJECT_77_0 7
#define EXECUTE_CACHE_77_5 5
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto string_out_write_self_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_out_write_self_3)
DEFLABEL (string_out_write_self_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define LABEL_78_10 11
#define LABEL_78_11 13
#define LABEL_78_13 15
#define LABEL_78_12 17
#define LABEL_78_9 19
#define LABEL_78_15 21
#define ENVIRONMENT_LABEL_78_3 34
#define DEBUGGING_LABEL_78_2 33
#define OBJECT_78_3 32
#define OBJECT_78_2 31
#define OBJECT_78_1 30
#define OBJECT_78_0 29
#define EXECUTE_CACHE_78_16 23
#define EXECUTE_CACHE_78_14 25
#define EXECUTE_CACHE_78_8 27
#define FREE_REFERENCES_LABEL_78_0 22
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_78_4);
      goto string_out_write_substring_12;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_78_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_78_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_78_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_78_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_78_9);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_78_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_out_write_substring_20)
DEFLABEL (string_out_write_substring_12)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_33;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_33;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_33;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_32)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_31;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_31;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_30)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_27;
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_27;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + (Wrd37.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_27;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_26)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd53.Obj) = (Rsp [6]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_25;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd60.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_78_12);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 3);

DEFLABEL (label_22)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_21;
  ((Wrd20.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_23)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_78_15);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd55.Obj) = (Rsp [6]);
  (Wrd56.Obj) = (current_block [OBJECT_78_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_78_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_78_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_78_9);
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define LABEL_79_7 9
#define LABEL_79_9 11
#define LABEL_79_11 13
#define LABEL_79_8 15
#define LABEL_79_13 17
#define LABEL_79_15 19
#define LABEL_79_14 21
#define LABEL_79_17 23
#define LABEL_79_18 25
#define LABEL_79_20 27
#define LABEL_79_21 29
#define LABEL_79_23 31
#define LABEL_79_16 33
#define LABEL_79_22 35
#define ENVIRONMENT_LABEL_79_3 54
#define DEBUGGING_LABEL_79_2 53
#define OBJECT_79_7 52
#define OBJECT_79_6 51
#define OBJECT_79_5 50
#define OBJECT_79_4 49
#define OBJECT_79_3 48
#define OBJECT_79_2 47
#define OBJECT_79_1 46
#define OBJECT_79_0 45
#define EXECUTE_CACHE_79_24 37
#define EXECUTE_CACHE_79_19 39
#define EXECUTE_CACHE_79_12 41
#define EXECUTE_CACHE_79_10 43
#define FREE_REFERENCES_LABEL_79_0 36
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_79_4);
      goto maybe_grow_buffer_22;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_79_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_79_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_79_11);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_79_8);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_79_13);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_79_15);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_79_14);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_79_17);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_79_18);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_79_20);
      goto loop_11;

    case 13:
      current_block = (Rpc - LABEL_79_21);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_79_23);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_79_16);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_79_22);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_grow_buffer_35)
DEFLABEL (maybe_grow_buffer_22)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_51;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_50)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_49;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_49;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd30.Lng) + (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_49;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_48)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_47;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_47;
  (Wrd36.Obj) = ((Wrd40.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_46)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_42)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_41;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd36.Lng) < (Wrd38.Lng))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_79_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_40;
  if (! ((Wrd26.uLng) == 26))
    goto label_40;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_40;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_39)
  goto loop_11;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_43)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 30))
    goto label_45;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd43.Obj) = (MAKE_OBJECT (26, (Wrd47.uLng)));

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_42;

DEFLABEL (label_45)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_29)
  (Wrd43.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_79_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_79_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_79_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_57;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_57;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_56)
  (Wrd25.Obj) = (current_block [OBJECT_79_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [7]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_55;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_55;
  (Wrd29.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_54)
  (Wrd43.Obj) = (current_block [OBJECT_79_5]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_19]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_79_16);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_79_2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_6]), 3);

DEFLABEL (label_53)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_79_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd38.Obj) = (Rsp [7]);
  (Wrd39.Obj) = (current_block [OBJECT_79_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_79_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (loop_36)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_79_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_63;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_63;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd37.Lng) < (Wrd39.Lng))
    goto label_60;

DEFLABEL (label_59)
  (Wrd16.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_79_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_24]));

DEFLABEL (label_58)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_7]), 1);

DEFLABEL (label_60)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_62;
  if (! ((Wrd28.uLng) == 26))
    goto label_62;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_62;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));

DEFLABEL (label_61)
  (Rsp [0]) = (Wrd26.Obj);
  goto loop_11;

DEFLABEL (label_62)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_33)
  (Wrd26.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_7 5
#define LABEL_80_5 7
#define LABEL_80_9 9
#define LABEL_80_10 11
#define LABEL_80_6 13
#define ENVIRONMENT_LABEL_80_3 29
#define DEBUGGING_LABEL_80_2 28
#define OBJECT_80_8 27
#define OBJECT_80_7 26
#define OBJECT_80_6 25
#define OBJECT_80_5 24
#define OBJECT_80_4 23
#define OBJECT_80_3 22
#define OBJECT_80_2 21
#define OBJECT_80_1 20
#define OBJECT_80_0 19
#define EXECUTE_CACHE_80_11 15
#define EXECUTE_CACHE_80_8 17
#define FREE_REFERENCES_LABEL_80_0 14
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_80_4);
      goto reset_bufferB_5;

    case 1:
      current_block = (Rpc - LABEL_80_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_80_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_80_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_80_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_bufferB_11)
DEFLABEL (reset_bufferB_5)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_20;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd7.Obj) = (current_block [OBJECT_80_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd5.Obj) = Rvl;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_17;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_17;
  ((Wrd44.pObj) [2]) = Rvl;

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_15;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_15;
  (Wrd24.Obj) = (current_block [OBJECT_80_3]);
  ((Wrd28.pObj) [3]) = (Wrd24.Obj);

DEFLABEL (label_14)
  (Wrd6.Obj) = (current_block [OBJECT_80_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_13)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_12;
  ((Wrd17.pObj) [4]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_80_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_80_4]);
  (Wrd35.Obj) = (current_block [OBJECT_80_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_8)
  goto label_14;

DEFLABEL (label_17)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_80_0]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_9)
  goto label_16;

DEFLABEL (label_18)
  (Wrd8.Obj) = (current_block [OBJECT_80_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_8]), 1);

DEFLABEL (label_20)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_80_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 8
#define DEBUGGING_LABEL_81_2 7
#define OBJECT_81_2 6
#define OBJECT_81_1 5
#define OBJECT_81_0 4
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_81_4);
      goto new_column_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_column_8)
DEFLABEL (new_column_5)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_81_0]))
    goto label_12;
  if ((Wrd5.Obj) == (current_block [OBJECT_81_2]))
    goto label_10;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_9;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd18.Lng) = 8L;
  (Wrd23.Lng) = (FIXNUM_REMAINDER ((Wrd16.Lng), (Wrd18.Lng)));
  (Wrd28.Lng) = ((Wrd18.Lng) - (Wrd23.Lng));
  (Wrd29.Lng) = ((Wrd16.Lng) + (Wrd28.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_81_1]);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_8 11
#define LABEL_82_9 13
#define TAG_82_10 5
#define LABEL_82_13 15
#define LABEL_82_11 17
#define LABEL_82_18 19
#define LABEL_82_19 21
#define LABEL_82_14 23
#define LABEL_82_20 25
#define LABEL_82_16 27
#define LABEL_82_21 29
#define LABEL_82_15 31
#define ENVIRONMENT_LABEL_82_3 50
#define DEBUGGING_LABEL_82_2 49
#define OBJECT_82_7 48
#define OBJECT_82_6 47
#define OBJECT_82_5 46
#define OBJECT_82_4 45
#define OBJECT_82_3 44
#define OBJECT_82_2 43
#define OBJECT_82_1 42
#define OBJECT_82_0 41
#define EXECUTE_CACHE_82_23 33
#define EXECUTE_CACHE_82_22 35
#define EXECUTE_CACHE_82_17 37
#define EXECUTE_CACHE_82_12 39
#define FREE_REFERENCES_LABEL_82_0 32
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_82_4);
      goto update_column_for_substringB_19;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_82_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_82_9);
      goto lambda_32;

    case 6:
      current_block = (Rpc - LABEL_82_13);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_82_11);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_82_18);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_82_19);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_82_14);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_82_20);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_82_16);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_82_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_82_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_column_for_substringB_31)
DEFLABEL (update_column_for_substringB_19)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_44;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_44;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_43)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_42;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_42;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_41)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_40;
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_40;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd62.Lng) - (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd61.Lng)))
    goto label_40;
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_39)
  (Wrd71.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd67.pObj) = (& (Rhp [-1]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd73.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_9])));
  Rhp += 4;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd73.pObj)));
  Wrd80 = Wrd73;
  (Wrd81.Obj) = (Rsp [4]);
  ((Wrd80.pObj) [2]) = (Wrd81.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  ((Wrd80.pObj) [3]) = (Wrd79.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  ((Wrd80.pObj) [4]) = (Wrd77.Obj);
  ((Wrd80.pObj) [5]) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  ((Wrd67.pObj) [0]) = (Wrd72.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_11]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_82_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 26))
    goto label_35;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_35;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_34)
  (Rsp [5]) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_82_6]);
  (Rsp [6]) = (Wrd20.Obj);

DEFLABEL (label_33)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_38;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_38;
  (Wrd25.Obj) = ((Wrd31.pObj) [4]);

DEFLABEL (label_37)
  (Rsp [6]) = (Wrd25.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd41.Obj);
  goto label_33;

DEFLABEL (label_38)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (current_block [OBJECT_82_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_18]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_27)
  (Wrd25.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_82_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_23)
  (Wrd37.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_82_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_82_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_82_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_57;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_57;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd50.Lng) < (Wrd54.Lng)))
    goto label_54;

DEFLABEL (label_53)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_82_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_82_15);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_82_14);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_48;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_48;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_48)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_28)
  (Wrd15.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_52;
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_52;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_52;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd20.pChr) = (& ((Wrd29.pChr) [(Wrd15.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_49;

DEFLABEL (label_52)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [4]);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_7]), 2);

DEFLABEL (label_29)
  (Wrd12.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [2]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_82_3]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_56;

DEFLABEL (label_55)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_5]), 3);

DEFLABEL (label_56)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_55;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [4]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_82_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_8 7
#define LABEL_83_9 9
#define ENVIRONMENT_LABEL_83_3 19
#define DEBUGGING_LABEL_83_2 18
#define OBJECT_83_0 17
#define EXECUTE_CACHE_83_10 11
#define EXECUTE_CACHE_83_7 13
#define EXECUTE_CACHE_83_6 15
#define FREE_REFERENCES_LABEL_83_0 10
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_83_4);
      goto find_newline_9;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_8);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_83_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_newline_12)
DEFLABEL (find_newline_9)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (label_14)
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

DEFLABEL (loop_13)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_83_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd14.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_83_9);
  if (Rvl == (current_block [OBJECT_83_0]))
    goto label_16;
  goto loop_7;

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_7 7
#define ENVIRONMENT_LABEL_84_3 14
#define DEBUGGING_LABEL_84_2 13
#define EXECUTE_CACHE_84_8 9
#define EXECUTE_CACHE_84_6 11
#define FREE_REFERENCES_LABEL_84_0 8
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto call_with_output_octets_3;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_84_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_output_octets_6)
DEFLABEL (call_with_output_octets_3)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define LABEL_85_10 9
#define LABEL_85_7 11
#define LABEL_85_8 13
#define LABEL_85_11 15
#define ENVIRONMENT_LABEL_85_3 32
#define DEBUGGING_LABEL_85_2 31
#define OBJECT_85_3 30
#define OBJECT_85_2 29
#define OBJECT_85_1 28
#define OBJECT_85_0 27
#define EXECUTE_CACHE_85_14 17
#define EXECUTE_CACHE_85_13 19
#define EXECUTE_CACHE_85_12 21
#define EXECUTE_CACHE_85_9 23
#define FREE_REFERENCE_85_0 26
#define FREE_REFERENCES_LABEL_85_0 16
#define NUMBER_OF_LINKER_SECTIONS_85_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_85_4);
      goto open_output_octets_7;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_85_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_85_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_85_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_85_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_output_octets_11)
DEFLABEL (open_output_octets_7)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_2]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_11);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_14]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_10])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_85_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define TAG_86_6 1
#define LABEL_86_8 7
#define LABEL_86_10 9
#define LABEL_86_13 11
#define LABEL_86_11 13
#define LABEL_86_9 15
#define LABEL_86_17 17
#define LABEL_86_16 19
#define LABEL_86_19 21
#define LABEL_86_14 23
#define LABEL_86_15 25
#define LABEL_86_20 27
#define ENVIRONMENT_LABEL_86_3 42
#define DEBUGGING_LABEL_86_2 41
#define OBJECT_86_5 40
#define OBJECT_86_4 39
#define OBJECT_86_3 38
#define OBJECT_86_2 37
#define OBJECT_86_1 36
#define OBJECT_86_0 35
#define EXECUTE_CACHE_86_18 29
#define EXECUTE_CACHE_86_12 31
#define EXECUTE_CACHE_86_7 33
#define FREE_REFERENCES_LABEL_86_0 28
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_86_4);
      goto make_byte_sink_25;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto lambda_33;

    case 2:
      current_block = (Rpc - LABEL_86_8);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_86_10);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_86_13);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_86_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_86_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_86_17);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_86_16);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_86_19);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_86_14);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_86_15);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_86_20);
      goto loop_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_byte_sink_32)
DEFLABEL (make_byte_sink_25)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_86_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_86_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_86_5);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_44;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_44;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_43)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd31.Lng) - (Wrd33.Lng));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd38.Lng) = ((Wrd36.Lng) + (Wrd34.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_42;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd55.Lng))))
    goto label_42;
  (Wrd47.Obj) = ((Wrd53.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_41)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_86_11);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd38.Lng) > (Wrd39.Lng)))
    goto label_35;
  (Wrd41.Obj) = (current_block [OBJECT_86_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_14]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_86_15);
  (* (--Rsp)) = Rvl;
  goto loop_12;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_40)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_39;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_39;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_38)
  (Wrd33.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_18]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_86_16);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_37;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_37;
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd16.Obj);

DEFLABEL (label_36)
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_86_0]);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_3]), 3);

DEFLABEL (label_30)
  goto label_36;

DEFLABEL (label_39)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_86_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_17]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [2]);
  (Wrd63.Obj) = (current_block [OBJECT_86_2]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_86_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_86_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_18]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_86_13);
  (Wrd53.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd53.Obj);
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 62)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_3]), 3);

DEFLABEL (label_46)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_45;
  ((Wrd61.pObj) [2]) = (Wrd53.Obj);
  Rsp = (& (Rsp [4]));
  goto label_40;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_86_9);
  goto label_40;

DEFLABEL (loop_34)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_86_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_47;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_5]), 1);

DEFLABEL (label_47)
  (Wrd16.Lng) = ((Wrd6.Lng) + (Wrd6.Lng));
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_7 7
#define LABEL_87_8 9
#define LABEL_87_9 11
#define LABEL_87_10 13
#define ENVIRONMENT_LABEL_87_3 31
#define DEBUGGING_LABEL_87_2 30
#define OBJECT_87_5 29
#define OBJECT_87_4 28
#define OBJECT_87_3 27
#define OBJECT_87_2 26
#define OBJECT_87_1 25
#define OBJECT_87_0 24
#define EXECUTE_CACHE_87_11 15
#define EXECUTE_CACHE_87_6 17
#define FREE_REFERENCE_87_3 20
#define FREE_REFERENCE_87_2 21
#define FREE_REFERENCE_87_1 22
#define FREE_REFERENCE_87_0 23
#define FREE_REFERENCES_LABEL_87_0 14
#define NUMBER_OF_LINKER_SECTIONS_87_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_87_4);
      goto make_octets_output_type_13;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_87_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_87_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_87_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_87_10);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_octets_output_type_20)
DEFLABEL (make_octets_output_type_13)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  (Wrd15.Obj) = (current_block [OBJECT_87_1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_87_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_26;
  Wrd25 = Wrd29;

DEFLABEL (label_25)
  (Wrd34.Obj) = (current_block [OBJECT_87_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_87_3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_2]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_24;
  Wrd44 = Wrd48;

DEFLABEL (label_23)
  (Wrd53.Obj) = (current_block [OBJECT_87_1]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_87_4]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd58.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_3]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_22;
  Wrd63 = Wrd67;

DEFLABEL (label_21)
  (Wrd72.Obj) = (current_block [OBJECT_87_1]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd76.Obj) = (current_block [OBJECT_87_5]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd77.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_11]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_10])), (Wrd64.pObj));

DEFLABEL (label_18)
  (Wrd63.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_9])), (Wrd45.pObj));

DEFLABEL (label_17)
  (Wrd44.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_8])), (Wrd26.pObj));

DEFLABEL (label_16)
  (Wrd25.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_7])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_7 7
#define LABEL_88_9 9
#define LABEL_88_10 11
#define ENVIRONMENT_LABEL_88_3 23
#define DEBUGGING_LABEL_88_2 22
#define OBJECT_88_2 21
#define OBJECT_88_1 20
#define OBJECT_88_0 19
#define EXECUTE_CACHE_88_11 13
#define EXECUTE_CACHE_88_8 15
#define EXECUTE_CACHE_88_6 17
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_88_4);
      goto octets_out_extract_output_5;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_88_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_88_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_88_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (octets_out_extract_output_10)
DEFLABEL (octets_out_extract_output_5)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_7);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 62))
    goto label_14;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_14;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_13)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_12;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_12;
  (Wrd22.Obj) = ((Wrd28.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

DEFLABEL (label_12)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_88_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_8)
  (Wrd22.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_88_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_7 7
#define LABEL_89_10 9
#define LABEL_89_11 11
#define LABEL_89_9 13
#define LABEL_89_13 15
#define LABEL_89_14 17
#define LABEL_89_15 19
#define ENVIRONMENT_LABEL_89_3 35
#define DEBUGGING_LABEL_89_2 34
#define OBJECT_89_6 33
#define OBJECT_89_5 32
#define OBJECT_89_4 31
#define OBJECT_89_3 30
#define OBJECT_89_2 29
#define OBJECT_89_1 28
#define OBJECT_89_0 27
#define EXECUTE_CACHE_89_12 21
#define EXECUTE_CACHE_89_8 23
#define EXECUTE_CACHE_89_6 25
#define FREE_REFERENCES_LABEL_89_0 20
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_89_4);
      goto octets_out_extract_outputB_10;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_89_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_89_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_89_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_89_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_89_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_89_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_89_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (octets_out_extract_outputB_17)
DEFLABEL (octets_out_extract_outputB_10)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_89_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 62))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_24)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_23;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_23;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_89_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_4]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_89_13);
  (Wrd5.Obj) = Rvl;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  ((Wrd30.pObj) [2]) = Rvl;

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = (current_block [OBJECT_89_6]);
  ((Wrd14.pObj) [3]) = (Wrd10.Obj);

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_89_0]);
  (Wrd21.Obj) = (current_block [OBJECT_89_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_5]), 3);

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_89_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_5]), 3);

DEFLABEL (label_15)
  goto label_20;

DEFLABEL (label_23)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_89_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_89_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_7 7
#define ENVIRONMENT_LABEL_90_3 16
#define DEBUGGING_LABEL_90_2 15
#define OBJECT_90_1 14
#define OBJECT_90_0 13
#define EXECUTE_CACHE_90_8 9
#define EXECUTE_CACHE_90_6 11
#define FREE_REFERENCES_LABEL_90_0 8
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_90_4);
      goto octets_out_position_2;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (octets_out_position_5)
DEFLABEL (octets_out_position_2)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_7)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_6;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 9
#define DEBUGGING_LABEL_91_2 8
#define OBJECT_91_0 7
#define EXECUTE_CACHE_91_5 5
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto octets_out_write_self_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (octets_out_write_self_3)
DEFLABEL (octets_out_write_self_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define LABEL_92_8 9
#define LABEL_92_10 11
#define LABEL_92_11 13
#define LABEL_92_13 15
#define LABEL_92_14 17
#define LABEL_92_16 19
#define LABEL_92_17 21
#define LABEL_92_19 23
#define LABEL_92_20 25
#define LABEL_92_22 27
#define LABEL_92_23 29
#define LABEL_92_25 31
#define LABEL_92_26 33
#define LABEL_92_28 35
#define ENVIRONMENT_LABEL_92_3 65
#define DEBUGGING_LABEL_92_2 64
#define OBJECT_92_1 63
#define OBJECT_92_0 62
#define EXECUTE_CACHE_92_27 37
#define EXECUTE_CACHE_92_24 39
#define EXECUTE_CACHE_92_21 41
#define EXECUTE_CACHE_92_18 43
#define EXECUTE_CACHE_92_15 45
#define EXECUTE_CACHE_92_12 47
#define EXECUTE_CACHE_92_9 49
#define EXECUTE_CACHE_92_6 51
#define FREE_ASSIGNMENT_92_7 54
#define FREE_ASSIGNMENT_92_6 55
#define FREE_ASSIGNMENT_92_5 56
#define FREE_ASSIGNMENT_92_4 57
#define FREE_ASSIGNMENT_92_3 58
#define FREE_ASSIGNMENT_92_2 59
#define FREE_ASSIGNMENT_92_1 60
#define FREE_ASSIGNMENT_92_0 61
#define FREE_REFERENCES_LABEL_92_0 36
#define NUMBER_OF_LINKER_SECTIONS_92_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stringio_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_92_4);
      goto initialize_packageB_8;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_92_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_92_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_92_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_92_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_92_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_92_16);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_92_17);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_92_19);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_92_20);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_92_22);
      goto label_15;

    case 13:
      current_block = (Rpc - LABEL_92_23);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_92_25);
      goto label_16;

    case 15:
      current_block = (Rpc - LABEL_92_26);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_92_28);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_19)
DEFLABEL (initialize_packageB_8)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_35)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_92_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_92_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_29)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_92_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_26)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_92_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_92_1]);
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_20;

DEFLABEL (label_25)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_11)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_41;

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_24 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_25 37
#define LABEL_30 39
#define LABEL_26 41
#define TAG_27 19
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_31 47
#define LABEL_32 49
#define LABEL_36 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_37 59
#define LABEL_42 61
#define LABEL_38 63
#define TAG_39 30
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_43 69
#define LABEL_44 71
#define LABEL_45 73
#define ENVIRONMENT_LABEL_3 119
#define DEBUGGING_LABEL_2 118
#define PURIFICATION_ROOT 117
#define OBJECT_31 116
#define OBJECT_30 115
#define OBJECT_29 114
#define OBJECT_28 113
#define OBJECT_27 112
#define OBJECT_26 111
#define OBJECT_25 110
#define OBJECT_24 109
#define OBJECT_23 108
#define OBJECT_22 107
#define OBJECT_21 106
#define OBJECT_20 105
#define OBJECT_19 104
#define OBJECT_18 103
#define OBJECT_17 102
#define OBJECT_16 101
#define OBJECT_15 100
#define OBJECT_14 99
#define OBJECT_13 98
#define OBJECT_12 97
#define OBJECT_11 96
#define OBJECT_10 95
#define OBJECT_9 94
#define OBJECT_8 93
#define OBJECT_7 92
#define OBJECT_6 91
#define OBJECT_5 90
#define OBJECT_4 89
#define OBJECT_3 88
#define OBJECT_2 87
#define OBJECT_1 86
#define OBJECT_0 85
#define FREE_REFERENCE_2 75
#define FREE_REFERENCE_1 76
#define FREE_REFERENCE_0 77
#define GLOBAL_EXECUTE_CACHE_12 79
#define GLOBAL_EXECUTE_CACHE_8 81
#define GLOBAL_EXECUTE_CACHE_5 83
#define FREE_REFERENCES_LABEL_0 74
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
stringio_so_100ac7e3ddd72e05 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
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
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_iistate_51;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto make_xistate_52;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_27;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_33;

    case 24:
      current_block = (Rpc - LABEL_36);
      goto label_48;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_32;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_38;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_34;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_39;

    case 29:
      current_block = (Rpc - LABEL_42);
      goto label_49;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto make_ostate_53;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_40;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto label_55;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto label_56;

    case 35:
      current_block = (Rpc - LABEL_45);
      goto expression_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_43)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_44])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_56)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_55)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	1,
	2,
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
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	0,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	2,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 92)
      goto label_54;
    blocks = (current_block [OBJECT_31]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_43])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_54)
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
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_68;
  Wrd11 = Wrd15;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
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

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_66;
  Wrd11 = Wrd15;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
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

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_64;
  Wrd11 = Wrd15;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_62;
  Wrd11 = Wrd15;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_60;
  Wrd11 = Wrd15;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_58;
  Wrd11 = Wrd15;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_29]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd12.pObj));

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_44)
  (Wrd11.Obj) = Rvl;
  goto label_67;

DEFLABEL (make_iistate_51)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_iistate_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (make_xistate_52)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (make_xistate_22)
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

DEFLABEL (make_ostate_53)
  CLOSURE_HEADER (LABEL_38);

DEFLABEL (make_ostate_36)
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

static const struct liarc_code_S arr_decl_stringio_so_100ac7e3ddd72e05 [92] =
  {
    { "stringio_so_code_1", 2, stringio_so_code_1 },
    { "stringio_so_code_2", 2, stringio_so_code_2 },
    { "stringio_so_code_3", 18, stringio_so_code_3 },
    { "stringio_so_code_4", 8, stringio_so_code_4 },
    { "stringio_so_code_5", 5, stringio_so_code_5 },
    { "stringio_so_code_6", 1, stringio_so_code_6 },
    { "stringio_so_code_7", 1, stringio_so_code_7 },
    { "stringio_so_code_8", 1, stringio_so_code_8 },
    { "stringio_so_code_9", 1, stringio_so_code_9 },
    { "stringio_so_code_10", 1, stringio_so_code_10 },
    { "stringio_so_code_11", 1, stringio_so_code_11 },
    { "stringio_so_code_12", 4, stringio_so_code_12 },
    { "stringio_so_code_13", 1, stringio_so_code_13 },
    { "stringio_so_code_14", 1, stringio_so_code_14 },
    { "stringio_so_code_15", 4, stringio_so_code_15 },
    { "stringio_so_code_16", 8, stringio_so_code_16 },
    { "stringio_so_code_17", 4, stringio_so_code_17 },
    { "stringio_so_code_18", 6, stringio_so_code_18 },
    { "stringio_so_code_19", 9, stringio_so_code_19 },
    { "stringio_so_code_20", 9, stringio_so_code_20 },
    { "stringio_so_code_21", 4, stringio_so_code_21 },
    { "stringio_so_code_22", 6, stringio_so_code_22 },
    { "stringio_so_code_23", 9, stringio_so_code_23 },
    { "stringio_so_code_24", 9, stringio_so_code_24 },
    { "stringio_so_code_25", 8, stringio_so_code_25 },
    { "stringio_so_code_26", 2, stringio_so_code_26 },
    { "stringio_so_code_27", 1, stringio_so_code_27 },
    { "stringio_so_code_28", 1, stringio_so_code_28 },
    { "stringio_so_code_29", 1, stringio_so_code_29 },
    { "stringio_so_code_30", 4, stringio_so_code_30 },
    { "stringio_so_code_31", 5, stringio_so_code_31 },
    { "stringio_so_code_32", 6, stringio_so_code_32 },
    { "stringio_so_code_33", 5, stringio_so_code_33 },
    { "stringio_so_code_34", 4, stringio_so_code_34 },
    { "stringio_so_code_35", 4, stringio_so_code_35 },
    { "stringio_so_code_36", 13, stringio_so_code_36 },
    { "stringio_so_code_37", 5, stringio_so_code_37 },
    { "stringio_so_code_38", 3, stringio_so_code_38 },
    { "stringio_so_code_39", 3, stringio_so_code_39 },
    { "stringio_so_code_40", 3, stringio_so_code_40 },
    { "stringio_so_code_41", 6, stringio_so_code_41 },
    { "stringio_so_code_42", 3, stringio_so_code_42 },
    { "stringio_so_code_43", 4, stringio_so_code_43 },
    { "stringio_so_code_44", 9, stringio_so_code_44 },
    { "stringio_so_code_45", 12, stringio_so_code_45 },
    { "stringio_so_code_46", 2, stringio_so_code_46 },
    { "stringio_so_code_47", 10, stringio_so_code_47 },
    { "stringio_so_code_48", 8, stringio_so_code_48 },
    { "stringio_so_code_49", 3, stringio_so_code_49 },
    { "stringio_so_code_50", 4, stringio_so_code_50 },
    { "stringio_so_code_51", 4, stringio_so_code_51 },
    { "stringio_so_code_52", 2, stringio_so_code_52 },
    { "stringio_so_code_53", 2, stringio_so_code_53 },
    { "stringio_so_code_54", 3, stringio_so_code_54 },
    { "stringio_so_code_55", 3, stringio_so_code_55 },
    { "stringio_so_code_56", 4, stringio_so_code_56 },
    { "stringio_so_code_57", 2, stringio_so_code_57 },
    { "stringio_so_code_58", 2, stringio_so_code_58 },
    { "stringio_so_code_59", 4, stringio_so_code_59 },
    { "stringio_so_code_60", 13, stringio_so_code_60 },
    { "stringio_so_code_61", 4, stringio_so_code_61 },
    { "stringio_so_code_62", 6, stringio_so_code_62 },
    { "stringio_so_code_63", 4, stringio_so_code_63 },
    { "stringio_so_code_64", 11, stringio_so_code_64 },
    { "stringio_so_code_65", 4, stringio_so_code_65 },
    { "stringio_so_code_66", 6, stringio_so_code_66 },
    { "stringio_so_code_67", 5, stringio_so_code_67 },
    { "stringio_so_code_68", 1, stringio_so_code_68 },
    { "stringio_so_code_69", 1, stringio_so_code_69 },
    { "stringio_so_code_70", 1, stringio_so_code_70 },
    { "stringio_so_code_71", 1, stringio_so_code_71 },
    { "stringio_so_code_72", 1, stringio_so_code_72 },
    { "stringio_so_code_73", 1, stringio_so_code_73 },
    { "stringio_so_code_74", 4, stringio_so_code_74 },
    { "stringio_so_code_75", 2, stringio_so_code_75 },
    { "stringio_so_code_76", 2, stringio_so_code_76 },
    { "stringio_so_code_77", 1, stringio_so_code_77 },
    { "stringio_so_code_78", 10, stringio_so_code_78 },
    { "stringio_so_code_79", 17, stringio_so_code_79 },
    { "stringio_so_code_80", 6, stringio_so_code_80 },
    { "stringio_so_code_81", 1, stringio_so_code_81 },
    { "stringio_so_code_82", 15, stringio_so_code_82 },
    { "stringio_so_code_83", 4, stringio_so_code_83 },
    { "stringio_so_code_84", 3, stringio_so_code_84 },
    { "stringio_so_code_85", 7, stringio_so_code_85 },
    { "stringio_so_code_86", 13, stringio_so_code_86 },
    { "stringio_so_code_87", 6, stringio_so_code_87 },
    { "stringio_so_code_88", 5, stringio_so_code_88 },
    { "stringio_so_code_89", 9, stringio_so_code_89 },
    { "stringio_so_code_90", 3, stringio_so_code_90 },
    { "stringio_so_code_91", 1, stringio_so_code_91 },
    { "stringio_so_code_92", 17, stringio_so_code_92 }
  };

int
decl_stringio_so_100ac7e3ddd72e05 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_stringio_so_100ac7e3ddd72e05);
  return (0);
}

DECLARE_COMPILED_CODE ("stringio.so", 36, decl_stringio_so_100ac7e3ddd72e05, stringio_so_100ac7e3ddd72e05)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_stringio_so_data_100ac7e3ddd72e05 [10538] =
  "\xa0\x01\xae\x01\xe3\x16\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d"
  "\xb9\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88"
  "\x28\xb1\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\xc1"
  "\xbc\xb1\x0d\xbd\x0d\xbe\x0d\xbf\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x80\x1d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d"
  "\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x84\x83"
  "\x1b\x82\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x84\x83\x1b\x82\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x81\x84\x83\x1b\x82\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x81\x84\x83\x1b\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x1b\x1d\x1b\x81\x84\x1b\x82\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\x84\x83\x1b\x82\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x84\x83\x1b\x82\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1d\x0c\x81\x84\x1b\x82\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x08\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x1b"
  "\x82\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x1b\x82\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x82\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x1d\x1b\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xc3\x1c\xc1\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xc1\x1c\x02\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b"
  "\x1b\x02\x80\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1b\x0d\x1c\x24\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x08"
  "\x07\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x80\x0d\x1c\x24\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x80\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\x1b\x1b\x81\x1b\x82\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x83\x1b\x81\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x80"
  "\x1b\x82\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\x80\x1b\x82\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x0d\x1b\x1b\x0d\x0d\x1c\x1b\x08\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x1b\x82\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x82\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x80\x1d\xb4\x81\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1d\x83\x82\x80"
  "\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x80\x0f\x22"
  "\x29\x21\x9f\x2b\xbc\x1d\xb0\x02\x88\x1b\x80\x1b\x1d\x83\x81\x1b"
  "\x82\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x02"
  "\x80\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x80\x1b\x81\x1b\x82\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x1b\x08\x07\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x81\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x1b\x02\x81\x1b\x82"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x80\xb5\xb6\xb7\x1b\x1b\x1b\x1b\x1b\x25\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\xb8\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x0d\x1b\x1b\x1b\x1b\x1b\xb7\xb6\xb5\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x9d\x0d\x1c\x0c\x0d\x0d\x0d\x08\x8a\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x1b\x1b\xb0\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b"
  "\x0d\x0d\x0d\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x0c\x0d\x0d"
  "\x08\x89\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9c\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x08\x1b"
  "\x1b\x1b\xb1\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a"
  "\xb2\x2a\x9d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x73\x74\x72\x69\x6e\x67\x69\x6f\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x03\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x04\x15\x77\x69\x74\x68\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x66\x72\x6f\x6d\x2d\x70\x6f\x72\x74\x03"
  "\x26\x06\x81\x85\x02\x25\x04\x84\x06\x05\x0d\x02\x03\x02\x28\x06"
  "\x81\x85\x02\x27\x04\x84\x06\x05\x0b\x02\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6c\x65\x6e\x67\x74\x68\x12\x6e\x61\x72\x72\x6f\x77\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x10\x77\x69\x64\x65\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x14\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x04\x06"
  "\x13\x63\x68\x65\x63\x6b\x2d\x69\x6e\x64\x65\x78\x2d\x6c\x69\x6d"
  "\x69\x74\x73\x09\x03\x0d\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3f\x0a\x03\x11\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74"
  "\x72\x69\x6e\x67\x3f\x0b\x03\x13\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x0c\x04\x11\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x73\x74\x72\x69\x6e\x67\x0d\x03\x0f"
  "\x78\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x0e\x05"
  "\x1a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x73\x74\x61\x74\x65\x0f\x04\x0a\x6d\x61\x6b"
  "\x65\x2d\x70\x6f\x72\x74\x10\x05\x1a\x6d\x61\x6b\x65\x2d\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x61"
  "\x74\x65\x11\x0a\x3a\x26\x81\x87\x02\x39\x24\x81\x87\x02\x38\x22"
  "\x81\x87\x02\x37\x20\x81\x87\x02\x36\x1e\x81\x87\x02\x35\x1c\x81"
  "\x87\x02\x34\x1a\x81\x87\x02\x33\x18\x81\x8b\x02\x32\x16\x81\x87"
  "\x02\x31\x14\x81\x87\x02\x30\x12\x81\x87\x02\x2f\x10\x81\x87\x02"
  "\x2e\x0e\x81\x8b\x02\x2d\x0c\x81\x87\x02\x2c\x0a\x81\x87\x02\x2b"
  "\x08\x81\x87\x02\x2a\x06\x81\x8b\x02\x29\x04\x85\x04\x25\x41\x12"
  "\x02\x08\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61"
  "\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x04\x24\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x6e\x6f"
  "\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65"
  "\x72\x03\x42\x12\x81\x85\x02\x41\x10\x86\x0a\x40\x0e\x81\x89\x02"
  "\x3f\x0c\x81\x89\x02\x3e\x0a\x81\x8b\x02\x3d\x08\x81\x8b\x02\x3c"
  "\x06\x81\x89\x02\x3b\x04\x81\x8b\x02\x11\x1b\x13\x02\x0c\x63\x68"
  "\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x14\x05\x65\x6f\x66\x3f\x15"
  "\x0a\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x16\x0a\x72\x65\x61\x64"
  "\x2d\x63\x68\x61\x72\x17\x0f\x72\x65\x61\x64\x2d\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x18\x0c\x75\x6e\x72\x65\x61\x64\x2d\x63\x68"
  "\x61\x72\x19\x0b\x77\x72\x69\x74\x65\x2d\x73\x65\x6c\x66\x1a\x15"
  "\x73\x74\x72\x69\x6e\x67\x2d\x69\x6e\x2f\x77\x72\x69\x74\x65\x2d"
  "\x73\x65\x6c\x66\x1b\x1b\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x69"
  "\x6e\x2f\x72\x65\x61\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x1c\x11\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x2f\x65\x6f"
  "\x66\x3f\x1d\x16\x73\x74\x72\x69\x6e\x67\x2d\x69\x6e\x2f\x63\x68"
  "\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x1e\x05\x04\x0f\x6d\x61\x6b"
  "\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x1f\x02\x47\x0c\x81"
  "\x89\x02\x46\x0a\x81\x89\x02\x45\x08\x81\x89\x02\x44\x06\x81\x87"
  "\x02\x43\x04\x85\x08\x0b\x1e\x20\x02\x06\x0d\x6d\x61\x6b\x65\x2d"
  "\x69\x69\x73\x74\x61\x74\x65\x21\x02\x48\x04\x85\x08\x03\x22\x02"
  "\x08\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x23\x49\x04"
  "\x83\x04\x03\x24\x02\x09\x23\x4a\x04\x83\x04\x03\x25\x02\x0a\x23"
  "\x4b\x04\x83\x04\x03\x26\x02\x0b\x23\x4c\x04\x83\x04\x03\x27\x02"
  "\x0c\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x28\x02"
  "\x4d\x04\x84\x06\x03\x29\x02\x0d\x23\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x2a\x07\x2e\x74\x61\x67\x2e\x31"
  "\x2b\x02\x51\x0a\x81\x85\x02\x50\x08\x81\x83\x02\x4f\x06\x81\x83"
  "\x02\x4e\x04\x83\x04\x09\x12\x2c\x02\x0e\x52\x04\x83\x04\x03\x2d"
  "\x02\x0f\x0d\x20\x66\x72\x6f\x6d\x20\x73\x74\x72\x69\x6e\x67\x04"
  "\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x2e\x02\x53"
  "\x04\x84\x06\x03\x0a\x2f\x02\x10\x23\x57\x0a\x81\x85\x02\x56\x08"
  "\x81\x83\x02\x55\x06\x81\x83\x02\x54\x04\x83\x04\x09\x11\x30\x02"
  "\x11\x28\x23\x08\x0c\x6d\x6f\x76\x65\x2d\x63\x68\x61\x72\x73\x21"
  "\x31\x02\x5f\x12\x81\x8d\x02\x5e\x10\x81\x8d\x02\x5d\x0e\x81\x8b"
  "\x02\x5c\x0c\x81\x97\x02\x5b\x0a\x81\x95\x02\x5a\x08\x81\x93\x02"
  "\x59\x06\x81\x89\x02\x58\x04\x86\x0a\x11\x1d\x32\x02\x12\x16\x6e"
  "\x61\x72\x72\x6f\x77\x2d\x69\x6e\x2f\x75\x6e\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\x33\x14\x6e\x61\x72\x72\x6f\x77\x2d\x69\x6e\x2f"
  "\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x34\x14\x6e\x61\x72\x72\x6f"
  "\x77\x2d\x69\x6e\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x35\x04"
  "\x05\x14\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x69\x6e"
  "\x2d\x74\x79\x70\x65\x36\x02\x63\x0a\x81\x85\x02\x62\x08\x81\x83"
  "\x02\x61\x06\x81\x81\x02\x60\x04\x82\x02\x09\x13\x37\x02\x13\x0b"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x38\x23\x03\x10\x6d\x61"
  "\x6b\x65\x2d\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x39\x02\x69"
  "\x0e\x81\x85\x02\x68\x0c\x81\x85\x02\x67\x0a\x81\x87\x02\x66\x08"
  "\x81\x85\x02\x65\x06\x81\x83\x02\x64\x04\x83\x04\x0d\x19\x3a\x02"
  "\x14\x28\x38\x23\x03\x39\x02\x72\x14\x81\x87\x02\x71\x12\x81\x87"
  "\x02\x70\x10\x81\x85\x02\x6f\x0e\x81\x87\x02\x6e\x0c\x81\x85\x02"
  "\x6d\x0a\x81\x87\x02\x6c\x08\x81\x85\x02\x6b\x06\x81\x83\x02\x6a"
  "\x04\x83\x04\x13\x20\x3b\x02\x15\x13\x4e\x6f\x20\x63\x68\x61\x72"
  "\x20\x74\x6f\x20\x75\x6e\x72\x65\x61\x64\x3a\x17\x55\x6e\x72\x65"
  "\x61\x64\x20\x63\x68\x61\x72\x20\x69\x6e\x63\x6f\x72\x72\x65\x63"
  "\x74\x3a\x28\x02\x38\x23\x04\x06\x65\x72\x72\x6f\x72\x3c\x02\x7b"
  "\x14\x81\x89\x02\x7a\x12\x81\x89\x02\x79\x10\x81\x87\x02\x78\x0e"
  "\x81\x89\x02\x77\x0c\x81\x87\x02\x76\x0a\x81\x85\x02\x75\x08\x84"
  "\x06\x74\x06\x81\x87\x02\x73\x04\x81\x89\x02\x13\x22\x3d\x02\x16"
  "\x14\x77\x69\x64\x65\x2d\x69\x6e\x2f\x75\x6e\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\x3e\x12\x77\x69\x64\x65\x2d\x69\x6e\x2f\x72\x65"
  "\x61\x64\x2d\x63\x68\x61\x72\x3f\x12\x77\x69\x64\x65\x2d\x69\x6e"
  "\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x40\x04\x05\x36\x02\x7f"
  "\x0a\x81\x85\x02\x7e\x08\x81\x83\x02\x7d\x06\x81\x81\x02\x7c\x04"
  "\x82\x02\x09\x13\x41\x02\x17\x23\x04\x10\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x42\x03\x39\x03\x85\x01\x0e"
  "\x81\x85\x02\x84\x01\x0c\x81\x85\x02\x83\x01\x0a\x81\x87\x02\x82"
  "\x01\x08\x81\x85\x02\x81\x01\x06\x81\x83\x02\x80\x01\x04\x83\x04"
  "\x0d\x1a\x43\x02\x18\x28\x23\x04\x42\x03\x39\x03\x8e\x01\x14\x81"
  "\x87\x02\x8d\x01\x12\x81\x87\x02\x8c\x01\x10\x81\x85\x02\x8b\x01"
  "\x0e\x81\x89\x02\x8a\x01\x0c\x81\x87\x02\x89\x01\x0a\x81\x87\x02"
  "\x88\x01\x08\x81\x85\x02\x87\x01\x06\x81\x83\x02\x86\x01\x04\x83"
  "\x04\x13\x21\x39\x02\x19\x17\x55\x6e\x72\x65\x61\x64\x20\x63\x68"
  "\x61\x72\x20\x69\x6e\x63\x6f\x72\x72\x65\x63\x74\x3a\x28\x02\x13"
  "\x4e\x6f\x20\x63\x68\x61\x72\x20\x74\x6f\x20\x75\x6e\x72\x65\x61"
  "\x64\x3a\x23\x04\x42\x04\x3c\x03\x97\x01\x14\x81\x89\x02\x96\x01"
  "\x12\x81\x89\x02\x95\x01\x10\x81\x8d\x02\x94\x01\x0e\x81\x87\x02"
  "\x93\x01\x0c\x81\x89\x02\x92\x01\x0a\x81\x87\x02\x91\x01\x08\x81"
  "\x85\x02\x90\x01\x06\x84\x06\x8f\x01\x04\x81\x87\x02\x13\x23\x44"
  "\x02\x1a\x14\x15\x16\x17\x18\x19\x1a\x1b\x18\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x69\x6e\x2f\x75\x6e\x72\x65\x61\x64\x2d\x63\x68"
  "\x61\x72\x19\x1b\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x2f"
  "\x72\x65\x61\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x18\x16"
  "\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x2f\x72\x65\x61\x64"
  "\x2d\x63\x68\x61\x72\x17\x16\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d"
  "\x69\x6e\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x16\x11\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x2f\x65\x6f\x66\x3f\x15\x1e"
  "\x08\x04\x1f\x02\x9f\x01\x12\x81\x85\x02\x9e\x01\x10\x81\x85\x02"
  "\x9d\x01\x0e\x81\x85\x02\x9c\x01\x0c\x81\x85\x02\x9b\x01\x0a\x81"
  "\x85\x02\x9a\x01\x08\x81\x85\x02\x99\x01\x06\x81\x83\x02\x98\x01"
  "\x04\x82\x02\x11\x27\x14\x02\x1b\x05\x17\x65\x78\x74\x65\x72\x6e"
  "\x61\x6c\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x6f\x75\x72\x63\x65"
  "\x45\x05\x0d\x6d\x61\x6b\x65\x2d\x78\x69\x73\x74\x61\x74\x65\x46"
  "\x03\xa1\x01\x06\x81\x87\x02\xa0\x01\x04\x85\x08\x05\x0d\x47\x02"
  "\x1c\x23\xa2\x01\x04\x83\x04\x03\x48\x02\x1d\x23\xa3\x01\x04\x83"
  "\x04\x03\x49\x02\x1e\x28\x02\xa4\x01\x04\x84\x06\x03\x4a\x02\x1f"
  "\x23\x2a\x07\x2e\x74\x61\x67\x2e\x32\x4b\x02\xa8\x01\x0a\x81\x85"
  "\x02\xa7\x01\x08\x81\x83\x02\xa6\x01\x06\x81\x83\x02\xa5\x01\x04"
  "\x83\x04\x09\x12\x4c\x02\x20\x23\xad\x01\x0c\x81\x83\x02\xac\x01"
  "\x0a\x81\x85\x02\xab\x01\x08\x81\x83\x02\xaa\x01\x06\x81\x83\x02"
  "\xa9\x01\x04\x83\x04\x0b\x12\x4d\x02\x21\x28\x23\xb3\x01\x0e\x81"
  "\x85\x02\xb2\x01\x0c\x81\x85\x02\xb1\x01\x0a\x81\x87\x02\xb0\x01"
  "\x08\x81\x83\x02\xaf\x01\x06\x81\x83\x02\xae\x01\x04\x83\x04\x0d"
  "\x14\x4e\x02\x22\x28\x23\xb8\x01\x0c\x81\x85\x02\xb7\x01\x0a\x81"
  "\x85\x02\xb6\x01\x08\x81\x83\x02\xb5\x01\x06\x81\x83\x02\xb4\x01"
  "\x04\x83\x04\x0b\x12\x4f\x02\x23\x18\x43\x61\x6e\x27\x74\x20\x75"
  "\x6e\x72\x65\x61\x64\x20\x74\x77\x6f\x20\x63\x68\x61\x72\x73\x2e"
  "\x28\x02\x23\x03\x3c\x02\xbc\x01\x0a\x81\x87\x02\xbb\x01\x08\x81"
  "\x85\x02\xba\x01\x06\x84\x06\xb9\x01\x04\x81\x87\x02\x09\x14\x3c"
  "\x02\x24\x23\x05\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x69\x6e\x6b"
  "\x50\x04\x0e\x73\x6f\x75\x72\x63\x65\x2d\x3e\x73\x69\x6e\x6b\x21"
  "\x51\x03\xc0\x01\x0a\x81\x89\x02\xbf\x01\x08\x81\x89\x02\xbe\x01"
  "\x06\x81\x89\x02\xbd\x01\x04\x86\x0a\x09\x14\x52\x02\x25\x04\x04"
  "\x6d\x69\x6e\x53\x03\x0a\x05\x50\x05\x13\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x73\x6f\x75\x72\x63\x65\x54\x07\x11\x78"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x55"
  "\x05\x11\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x69"
  "\x6e\x6b\x56\x04\x51\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x73\x6f"
  "\x75\x72\x63\x65\x57\x09\xcd\x01\x1c\x81\x93\x02\xcc\x01\x1a\x81"
  "\x93\x02\xcb\x01\x18\x81\x93\x02\xca\x01\x16\x81\x93\x02\xc9\x01"
  "\x14\x81\x93\x02\xc8\x01\x12\x81\x93\x02\xc7\x01\x10\x81\x93\x02"
  "\xc6\x01\x0e\x81\x91\x02\xc5\x01\x0c\x81\x8f\x02\xc4\x01\x0a\x81"
  "\x8d\x02\xc3\x01\x08\x81\x91\x02\xc2\x01\x06\x81\x8f\x02\xc1\x01"
  "\x04\x88\x0e\x1b\x2f\x58\x02\x26\xd2\x01\x0c\x81\x89\x02\xd1\x01"
  "\x0a\x81\x87\x02\xd0\x01\x08\x81\x87\x02\xcf\x01\x06\x81\x87\x02"
  "\xce\x01\x04\x84\x06\x0b\x0f\x59\x02\x27\x05\x15\x6e\x61\x72\x72"
  "\x6f\x77\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x6f\x75\x72\x63\x65"
  "\x5a\x03\x0a\x03\x0b\x05\x54\x04\x0d\x05\x45\x07\xd5\x01\x08\x81"
  "\x87\x02\xd4\x01\x06\x81\x87\x02\xd3\x01\x04\x85\x08\x07\x17\x5b"
  "\x02\x28\x05\x13\x6e\x61\x72\x72\x6f\x77\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x73\x69\x6e\x6b\x5c\x03\x0a\x03\x0b\x05\x56\x04\x0d\x05"
  "\x15\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x73\x69\x6e\x6b\x0d\x07\xd8\x01\x08\x81\x87\x02\xd7\x01\x06"
  "\x81\x87\x02\xd6\x01\x04\x85\x08\x07\x17\x0b\x02\x29\x38\xdb\x01"
  "\x08\x81\x83\x02\xda\x01\x06\x81\x83\x02\xd9\x01\x04\x85\x08\x07"
  "\x0b\x5d\x02\x2a\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21"
  "\x5e\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x5f"
  "\x03\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x38\x2d\x62\x69"
  "\x74\x2d\x63\x68\x61\x72\x60\x02\xe1\x01\x0e\x81\x85\x02\xe0\x01"
  "\x0c\x81\x85\x02\xdf\x01\x0a\x81\x85\x02\xde\x01\x08\x81\x85\x02"
  "\xdd\x01\x06\x81\x85\x02\xdc\x01\x04\x85\x08\x0d\x16\x61\x02\x2b"
  "\x04\x42\x02\xe4\x01\x08\x81\x83\x02\xe3\x01\x06\x81\x83\x02\xe2"
  "\x01\x04\x85\x08\x07\x0d\x62\x02\x2c\x05\x11\x77\x69\x64\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x63\x02\xe8\x01\x0a"
  "\x81\x85\x02\xe7\x01\x08\x81\x85\x02\xe6\x01\x06\x81\x85\x02\xe5"
  "\x01\x04\x85\x08\x09\x10\x64\x02\x2d\x38\x10\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x65\x81\x20\x04\x53\x07"
  "\x55\x03\xf1\x01\x14\x81\x89\x02\xf0\x01\x12\x81\x8d\x02\xef\x01"
  "\x10\x81\x85\x02\xee\x01\x0e\x81\x83\x02\xed\x01\x0c\x81\x83\x02"
  "\xec\x01\x0a\x81\x83\x02\xeb\x01\x08\x81\x83\x02\xea\x01\x06\x81"
  "\x8b\x02\xe9\x01\x04\x85\x08\x13\x1f\x66\x02\x2e\x5e\x5f\x65\x81"
  "\x20\x07\x55\x03\x60\x03\xfd\x01\x1a\x81\x85\x02\xfc\x01\x18\x81"
  "\x87\x02\xfb\x01\x16\x81\x85\x02\xfa\x01\x14\x81\x85\x02\xf9\x01"
  "\x12\x81\x85\x02\xf8\x01\x10\x81\x85\x02\xf7\x01\x0e\x81\x87\x02"
  "\xf6\x01\x0c\x81\x85\x02\xf5\x01\x0a\x81\x85\x02\xf4\x01\x08\x81"
  "\x85\x02\xf3\x01\x06\x81\x89\x02\xf2\x01\x04\x85\x08\x19\x27\x67"
  "\x02\x2f\x03\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x6f"
  "\x63\x74\x65\x74\x73\x68\x02\xff\x01\x06\x81\x85\x02\xfe\x01\x04"
  "\x84\x06\x05\x0b\x69\x02\x30\x08\x6e\x65\x77\x6c\x69\x6e\x65\x6a"
  "\x0b\x69\x73\x6f\x2d\x38\x38\x35\x39\x2d\x31\x68\x12\x6f\x63\x74"
  "\x65\x74\x73\x2d\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x6b\x02"
  "\x04\x12\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x78\x73\x74\x72"
  "\x69\x6e\x67\x03\x0e\x06\x09\x05\x13\x6d\x61\x6b\x65\x2d\x6f\x63"
  "\x74\x65\x74\x73\x2d\x73\x6f\x75\x72\x63\x65\x0e\x04\x10\x70\x6f"
  "\x72\x74\x2f\x73\x65\x74\x2d\x63\x6f\x64\x69\x6e\x67\x05\x16\x6d"
  "\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d"
  "\x70\x6f\x72\x74\x6c\x04\x15\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d"
  "\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x6d\x08\x89\x02\x16"
  "\x81\x83\x02\x88\x02\x14\x81\x83\x02\x87\x02\x12\x81\x8d\x02\x86"
  "\x02\x10\x81\x87\x02\x85\x02\x0e\x81\x89\x02\x84\x02\x0c\x81\x87"
  "\x02\x83\x02\x0a\x81\x8b\x02\x82\x02\x08\x81\x87\x02\x81\x02\x06"
  "\x81\x87\x02\x80\x02\x04\x85\x04\x15\x2c\x6e\x02\x31\x04\x1d\x6d"
  "\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x70\x6f\x72\x74\x2d\x73\x6f\x75\x72\x63\x65\x04\x53\x07\x55\x04"
  "\x91\x02\x12\x81\x8d\x02\x90\x02\x10\x81\x8b\x02\x8f\x02\x0e\x81"
  "\x89\x02\x8e\x02\x0c\x81\x8d\x02\x8d\x02\x0a\x81\x8b\x02\x8c\x02"
  "\x08\x81\x89\x02\x8b\x02\x06\x81\x83\x02\x8a\x02\x04\x85\x08\x11"
  "\x1c\x55\x02\x32\x12\x20\x66\x72\x6f\x6d\x20\x62\x79\x74\x65\x20"
  "\x76\x65\x63\x74\x6f\x72\x1a\x04\x16\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x53\x04"
  "\x1f\x04\x2e\x04\x94\x02\x08\x84\x06\x93\x02\x06\x81\x81\x02\x92"
  "\x02\x04\x82\x02\x07\x15\x6f\x02\x33\x65\x11\x13\x6e\x61\x72\x72"
  "\x6f\x77\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x79\x70\x65\x70\x02"
  "\x04\x10\x05\x0c\x6d\x61\x6b\x65\x2d\x6f\x73\x74\x61\x74\x65\x71"
  "\x03\x98\x02\x0a\x81\x87\x02\x97\x02\x08\x81\x83\x02\x96\x02\x06"
  "\x81\x81\x02\x95\x02\x04\x82\x02\x09\x16\x72\x02\x34\x11\x11\x77"
  "\x69\x64\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x79\x70\x65\x73"
  "\x02\x03\x11\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x74\x04\x10\x05\x71\x04\x9c\x02\x0a\x81\x87\x02\x9b"
  "\x02\x08\x81\x83\x02\x9a\x02\x06\x81\x81\x02\x99\x02\x04\x82\x02"
  "\x09\x17\x10\x02\x35\x0f\x65\x78\x74\x72\x61\x63\x74\x2d\x6f\x75"
  "\x74\x70\x75\x74\x75\x04\x0f\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x76\x02\x9e\x02\x06\x81\x83\x02\x9d\x02\x04"
  "\x83\x04\x05\x0c\x77\x02\x36\x10\x65\x78\x74\x72\x61\x63\x74\x2d"
  "\x6f\x75\x74\x70\x75\x74\x21\x78\x04\x76\x02\xa0\x02\x06\x81\x83"
  "\x02\x9f\x02\x04\x83\x04\x05\x0c\x76\x02\x37\x02\x1a\x6f\x70\x65"
  "\x6e\x2d\x6e\x61\x72\x72\x6f\x77\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x79\x03\x12\x67\x65\x74\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x7a\x03\xa3\x02\x08\x81"
  "\x85\x02\xa2\x02\x06\x81\x83\x02\xa1\x02\x04\x83\x04\x07\x0f\x7b"
  "\x02\x38\x02\x18\x6f\x70\x65\x6e\x2d\x77\x69\x64\x65\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x7c\x03\x7a\x03\xa6"
  "\x02\x08\x81\x85\x02\xa5\x02\x06\x81\x83\x02\xa4\x02\x04\x83\x04"
  "\x07\x0f\x7d\x02\x39\x02\x79\x05\x20\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x74\x72\x75\x6e\x63\x61\x74\x65\x64\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x03\x7a\x04\xaa\x02\x0a\x81\x89"
  "\x02\xa9\x02\x08\x81\x87\x02\xa8\x02\x06\x81\x85\x02\xa7\x02\x04"
  "\x84\x06\x09\x13\x7e\x02\x3a\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x6e\x61\x72\x72\x6f\x77\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x7f\x04\x14\x77\x69\x74\x68\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x70\x6f\x72\x74\x80\x01\x03"
  "\xac\x02\x06\x81\x85\x02\xab\x02\x04\x83\x04\x05\x0d\x81\x01\x02"
  "\x3b\x04\x22\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x74\x72\x75"
  "\x6e\x63\x61\x74\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x82\x01\x04\x80\x01\x03\xae\x02\x06\x81\x85\x02"
  "\xad\x02\x04\x84\x06\x05\x0d\x80\x01\x02\x3c\x1b\x6e\x61\x72\x72"
  "\x6f\x77\x2d\x6f\x75\x74\x2f\x65\x78\x74\x72\x61\x63\x74\x2d\x6f"
  "\x75\x74\x70\x75\x74\x21\x83\x01\x1a\x6e\x61\x72\x72\x6f\x77\x2d"
  "\x6f\x75\x74\x2f\x65\x78\x74\x72\x61\x63\x74\x2d\x6f\x75\x74\x70"
  "\x75\x74\x84\x01\x16\x6e\x61\x72\x72\x6f\x77\x2d\x6f\x75\x74\x2f"
  "\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x85\x01\x04\x05\x15\x6d"
  "\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6f\x75\x74\x2d\x74"
  "\x79\x70\x65\x86\x01\x02\xb2\x02\x0a\x81\x85\x02\xb1\x02\x08\x81"
  "\x83\x02\xb0\x02\x06\x81\x81\x02\xaf\x02\x04\x82\x02\x09\x13\x87"
  "\x01\x02\x3d\x28\x5e\x23\x5f\x04\x12\x6d\x61\x79\x62\x65\x2d\x67"
  "\x72\x6f\x77\x2d\x62\x75\x66\x66\x65\x72\x5f\x03\x60\x04\x0b\x6e"
  "\x65\x77\x2d\x63\x6f\x6c\x75\x6d\x6e\x60\x04\xbf\x02\x1c\x81\x87"
  "\x02\xbe\x02\x1a\x81\x87\x02\xbd\x02\x18\x81\x89\x02\xbc\x02\x16"
  "\x81\x87\x02\xbb\x02\x14\x81\x87\x02\xba\x02\x12\x81\x87\x02\xb9"
  "\x02\x10\x81\x89\x02\xb8\x02\x0e\x81\x87\x02\xb7\x02\x0c\x81\x87"
  "\x02\xb6\x02\x0a\x81\x85\x02\xb5\x02\x08\x81\x85\x02\xb4\x02\x06"
  "\x84\x06\xb3\x02\x04\x81\x85\x02\x1b\x2c\x5e\x02\x3e\x23\x04\x0c"
  "\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x88\x01\x02\xc3\x02"
  "\x0a\x81\x85\x02\xc2\x02\x08\x81\x83\x02\xc1\x02\x06\x81\x83\x02"
  "\xc0\x02\x04\x83\x04\x09\x12\x89\x01\x02\x3f\x23\x04\x0d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x21\x8a\x01\x03\x0e\x72\x65"
  "\x73\x65\x74\x2d\x62\x75\x66\x66\x65\x72\x21\x8b\x01\x03\xc9\x02"
  "\x0e\x81\x85\x02\xc8\x02\x0c\x81\x83\x02\xc7\x02\x0a\x81\x87\x02"
  "\xc6\x02\x08\x81\x85\x02\xc5\x02\x06\x81\x83\x02\xc4\x02\x04\x83"
  "\x04\x0d\x18\x8c\x01\x02\x40\x19\x77\x69\x64\x65\x2d\x6f\x75\x74"
  "\x2f\x65\x78\x74\x72\x61\x63\x74\x2d\x6f\x75\x74\x70\x75\x74\x21"
  "\x8d\x01\x18\x77\x69\x64\x65\x2d\x6f\x75\x74\x2f\x65\x78\x74\x72"
  "\x61\x63\x74\x2d\x6f\x75\x74\x70\x75\x74\x8e\x01\x14\x77\x69\x64"
  "\x65\x2d\x6f\x75\x74\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72"
  "\x8f\x01\x04\x05\x86\x01\x02\xcd\x02\x0a\x81\x85\x02\xcc\x02\x08"
  "\x81\x83\x02\xcb\x02\x06\x81\x81\x02\xca\x02\x04\x82\x02\x09\x13"
  "\x90\x01\x02\x41\x28\x23\x04\x5f\x05\x63\x04\x60\x04\xd8\x02\x18"
  "\x81\x87\x02\xd7\x02\x16\x81\x87\x02\xd6\x02\x14\x81\x89\x02\xd5"
  "\x02\x12\x81\x87\x02\xd4\x02\x10\x81\x87\x02\xd3\x02\x0e\x81\x87"
  "\x02\xd2\x02\x0c\x81\x8d\x02\xd1\x02\x0a\x81\x8b\x02\xd0\x02\x08"
  "\x81\x87\x02\xcf\x02\x06\x81\x85\x02\xce\x02\x04\x84\x06\x17\x26"
  "\x63\x02\x42\x23\x05\x0f\x77\x69\x64\x65\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x91\x01\x02\xdc\x02\x0a\x81\x87\x02\xdb\x02\x08"
  "\x81\x85\x02\xda\x02\x06\x81\x83\x02\xd9\x02\x04\x83\x04\x09\x13"
  "\x92\x01\x02\x43\x23\x05\x91\x01\x03\x8b\x01\x03\xe2\x02\x0e\x81"
  "\x85\x02\xe1\x02\x0c\x81\x83\x02\xe0\x02\x0a\x81\x89\x02\xdf\x02"
  "\x08\x81\x85\x02\xde\x02\x06\x81\x83\x02\xdd\x02\x04\x83\x04\x0d"
  "\x19\x91\x01\x02\x44\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72"
  "\x10\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x75\x78\x0e\x6f\x75\x74\x70\x75\x74\x2d\x63\x6f\x6c\x75\x6d\x6e"
  "\x09\x70\x6f\x73\x69\x74\x69\x6f\x6e\x93\x01\x1a\x16\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6f\x75\x74\x2f\x77\x72\x69\x74\x65\x2d\x73\x65"
  "\x6c\x66\x94\x01\x14\x73\x74\x72\x69\x6e\x67\x2d\x6f\x75\x74\x2f"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\x95\x01\x19\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6f\x75\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x63\x6f\x6c"
  "\x75\x6d\x6e\x96\x01\x1b\x73\x74\x72\x69\x6e\x67\x2d\x6f\x75\x74"
  "\x2f\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x97\x01\x05\x04\x1f\x02\xe7\x02\x0c\x81\x89\x02\xe6\x02\x0a\x81"
  "\x89\x02\xe5\x02\x08\x81\x89\x02\xe4\x02\x06\x81\x87\x02\xe3\x02"
  "\x04\x85\x08\x0b\x1e\x98\x01\x02\x45\x23\xe8\x02\x04\x83\x04\x03"
  "\x99\x01\x02\x46\x23\xe9\x02\x04\x83\x04\x03\x9a\x01\x02\x47\x23"
  "\xea\x02\x04\x83\x04\x03\x9b\x01\x02\x48\x28\x02\xeb\x02\x04\x84"
  "\x06\x03\x9c\x01\x02\x49\x28\x02\xec\x02\x04\x84\x06\x03\x9d\x01"
  "\x02\x4a\x28\x02\xed\x02\x04\x84\x06\x03\x9e\x01\x02\x4b\x23\x2a"
  "\x07\x2e\x74\x61\x67\x2e\x33\x2a\x02\xf1\x02\x0a\x81\x85\x02\xf0"
  "\x02\x08\x81\x83\x02\xef\x02\x06\x81\x83\x02\xee\x02\x04\x83\x04"
  "\x09\x12\x9f\x01\x02\x4c\x23\xf3\x02\x06\x81\x83\x02\xf2\x02\x04"
  "\x83\x04\x05\x0b\xa0\x01\x02\x4d\x23\xf5\x02\x06\x81\x83\x02\xf4"
  "\x02\x04\x83\x04\x05\x0a\xa1\x01\x02\x4e\x0b\x20\x74\x6f\x20\x73"
  "\x74\x72\x69\x6e\x67\x04\x2e\x02\xf6\x02\x04\x84\x06\x03\x0a\xa2"
  "\x01\x02\x4f\x28\x23\x04\x5f\x08\x31\x04\x1d\x75\x70\x64\x61\x74"
  "\x65\x2d\x63\x6f\x6c\x75\x6d\x6e\x2d\x66\x6f\x72\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x21\xa3\x01\x04\x80\x03\x16\x81\x8d\x02"
  "\xff\x02\x14\x81\x8d\x02\xfe\x02\x12\x81\x85\x02\xfd\x02\x10\x81"
  "\x8b\x02\xfc\x02\x0e\x81\x83\x02\xfb\x02\x0c\x81\x8f\x02\xfa\x02"
  "\x0a\x81\x8d\x02\xf9\x02\x08\x81\x8b\x02\xf8\x02\x06\x81\x89\x02"
  "\xf7\x02\x04\x86\x0a\x15\x23\xa4\x01\x02\x50\x65\x28\x02\x23\x03"
  "\x0a\x03\x0c\x08\x31\x03\x74\x05\x91\x03\x24\x81\x83\x02\x90\x03"
  "\x22\x81\x8b\x02\x8f\x03\x20\x81\x8f\x02\x8e\x03\x1e\x81\x8f\x02"
  "\x8d\x03\x1c\x81\x8f\x02\x8c\x03\x1a\x81\x93\x02\x8b\x03\x18\x81"
  "\x8d\x02\x8a\x03\x16\x81\x8b\x02\x89\x03\x14\x81\x8d\x02\x88\x03"
  "\x12\x81\x8b\x02\x87\x03\x10\x81\x89\x02\x86\x03\x0e\x81\x8b\x02"
  "\x85\x03\x0c\x81\x8b\x02\x84\x03\x0a\x81\x87\x02\x83\x03\x08\x81"
  "\x85\x02\x82\x03\x06\x81\x85\x02\x81\x03\x04\x84\x06\x23\x37\x0c"
  "\x02\x51\x65\x11\x02\x28\x23\x03\x0a\x03\x74\x03\x97\x03\x0e\x81"
  "\x85\x02\x96\x03\x0c\x81\x83\x02\x95\x03\x0a\x81\x83\x02\x94\x03"
  "\x08\x81\x83\x02\x93\x03\x06\x81\x87\x02\x92\x03\x04\x83\x04\x0d"
  "\x1e\x74\x02\x52\x01\x0a\x01\x0b\x98\x03\x04\x84\x06\x03\x02\x53"
  "\x38\x28\x02\x23\x05\x0d\x66\x69\x6e\x64\x2d\x6e\x65\x77\x6c\x69"
  "\x6e\x65\x38\x03\x0a\x04\x42\x04\x60\x05\xa7\x03\x20\x81\x8b\x02"
  "\xa6\x03\x1e\x81\x8d\x02\xa5\x03\x1c\x81\x8d\x02\xa4\x03\x1a\x81"
  "\x87\x02\xa3\x03\x18\x81\x87\x02\xa2\x03\x16\x81\x8f\x02\xa1\x03"
  "\x14\x81\x8f\x02\xa0\x03\x12\x81\x8d\x02\x9f\x03\x10\x81\x87\x02"
  "\x9e\x03\x0e\x81\x87\x02\x9d\x03\x0c\x81\x89\x02\x9c\x03\x0a\x81"
  "\x89\x02\x9b\x03\x08\x81\x87\x02\x9a\x03\x06\x81\x85\x02\x99\x03"
  "\x04\x84\x06\x1f\x33\xa5\x01\x02\x54\x01\x0b\x03\x0a\x06\x1e\x78"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x70"
  "\x72\x65\x76\x69\x6f\x75\x73\x2d\x63\x68\x61\x72\x04\x42\x04\xab"
  "\x03\x0a\x81\x89\x02\xaa\x03\x08\x81\x89\x02\xa9\x03\x06\x81\x87"
  "\x02\xa8\x03\x04\x85\x08\x09\x14\x42\x02\x55\x02\x13\x6f\x70\x65"
  "\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63\x74\x65\x74\x73\x0a"
  "\x03\x7a\x03\xae\x03\x08\x81\x85\x02\xad\x03\x06\x81\x83\x02\xac"
  "\x03\x04\x83\x04\x07\x0f\xa6\x01\x02\x56\x6a\x65\x11\x13\x6f\x63"
  "\x74\x65\x74\x73\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x79\x70\x65"
  "\x6a\x02\x04\x6d\x03\x0f\x6d\x61\x6b\x65\x2d\x62\x79\x74\x65\x2d"
  "\x73\x69\x6e\x6b\x6d\x05\x71\x06\x6c\x05\xb5\x03\x10\x81\x85\x02"
  "\xb4\x03\x0e\x81\x83\x02\xb3\x03\x0c\x81\x89\x02\xb2\x03\x0a\x81"
  "\x83\x02\xb1\x03\x08\x81\x83\x02\xb0\x03\x06\x81\x81\x02\xaf\x03"
  "\x04\x82\x02\x0f\x21\x6c\x02\x57\x65\x28\x23\x03\x1b\x6d\x61\x6b"
  "\x65\x2d\x6e\x6f\x6e\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x70\x6f"
  "\x72\x74\x2d\x73\x69\x6e\x6b\x03\x11\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x62\x2d\x6c\x65\x6e\x67\x74\x68\x07\x10\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x04\xc2\x03\x1c\x81\x8b"
  "\x02\xc1\x03\x1a\x81\x89\x02\xc0\x03\x18\x81\x87\x02\xbf\x03\x16"
  "\x81\x8d\x02\xbe\x03\x14\x81\x8d\x02\xbd\x03\x12\x81\x91\x02\xbc"
  "\x03\x10\x81\x8d\x02\xbb\x03\x0e\x81\x83\x02\xba\x03\x0c\x81\x89"
  "\x02\xb9\x03\x0a\x81\x8f\x02\xb8\x03\x08\x81\x89\x02\xb7\x03\x06"
  "\x81\x89\x02\xb6\x03\x04\x83\x04\x1b\x2b\xa7\x01\x02\x58\x75\x78"
  "\x93\x01\x1a\x16\x6f\x63\x74\x65\x74\x73\x2d\x6f\x75\x74\x2f\x77"
  "\x72\x69\x74\x65\x2d\x73\x65\x6c\x66\x93\x01\x14\x6f\x63\x74\x65"
  "\x74\x73\x2d\x6f\x75\x74\x2f\x70\x6f\x73\x69\x74\x69\x6f\x6e\x78"
  "\x1b\x6f\x63\x74\x65\x74\x73\x2d\x6f\x75\x74\x2f\x65\x78\x74\x72"
  "\x61\x63\x74\x2d\x6f\x75\x74\x70\x75\x74\x21\x75\x1a\x6f\x63\x74"
  "\x65\x74\x73\x2d\x6f\x75\x74\x2f\x65\x78\x74\x72\x61\x63\x74\x2d"
  "\x6f\x75\x74\x70\x75\x74\x1a\x05\x04\x53\x04\x1f\x03\xc8\x03\x0e"
  "\x81\x85\x02\xc7\x03\x0c\x81\x85\x02\xc6\x03\x0a\x81\x85\x02\xc5"
  "\x03\x08\x81\x83\x02\xc4\x03\x06\x81\x81\x02\xc3\x03\x04\x82\x02"
  "\x0d\x20\x53\x02\x59\x23\x03\x19\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\x1f\x03\x16\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63\x74\x65\x74\x73"
  "\x2d\x70\x6f\x72\x74\x2f\x6f\x73\xa8\x01\x04\x88\x01\x04\xcd\x03"
  "\x0c\x81\x85\x02\xcc\x03\x0a\x81\x83\x02\xcb\x03\x08\x81\x83\x02"
  "\xca\x03\x06\x81\x83\x02\xc9\x03\x04\x83\x04\x0b\x18\x88\x01\x02"
  "\x5a\x28\x65\x11\x23\x03\x1f\x03\xa8\x01\x04\x8a\x01\x04\xd6\x03"
  "\x14\x81\x85\x02\xd5\x03\x12\x81\x85\x02\xd4\x03\x10\x81\x85\x02"
  "\xd3\x03\x0e\x81\x83\x02\xd2\x03\x0c\x81\x87\x02\xd1\x03\x0a\x81"
  "\x85\x02\xd0\x03\x08\x81\x83\x02\xcf\x03\x06\x81\x83\x02\xce\x03"
  "\x04\x83\x04\x13\x24\x8a\x01\x02\x5b\x23\x03\x1f\x03\xa8\x01\x03"
  "\xd9\x03\x08\x81\x83\x02\xd8\x03\x06\x81\x83\x02\xd7\x03\x04\x83"
  "\x04\x07\x11\x65\x02\x5c\x10\x20\x74\x6f\x20\x62\x79\x74\x65\x20"
  "\x76\x65\x63\x74\x6f\x72\x04\x2e\x02\xda\x03\x04\x84\x06\x03\x0a"
  "\x2e\x02\x5d\x02\x6b\x70\x73\x6a\xa8\x01\x09\x02\x17\x6d\x61\x6b"
  "\x65\x2d\x6e\x61\x72\x72\x6f\x77\x2d\x69\x6e\x70\x75\x74\x2d\x74"
  "\x79\x70\x65\x28\x02\x15\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x23\x02\x19\x6d\x61\x6b"
  "\x65\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x74\x79\x70\x65\x1f\x02\x17\x6d\x61\x6b\x65\x2d\x6f\x63\x74"
  "\x65\x74\x73\x2d\x69\x6e\x70\x75\x74\x2d\x74\x79\x70\x65\x02\x18"
  "\x6d\x61\x6b\x65\x2d\x6e\x61\x72\x72\x6f\x77\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x74\x79\x70\x65\xa9\x01\x02\x16\x6d\x61\x6b\x65\x2d"
  "\x77\x69\x64\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x79\x70\x65"
  "\xaa\x01\x02\x18\x6d\x61\x6b\x65\x2d\x6f\x63\x74\x65\x74\x73\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x74\x79\x70\x65\xab\x01\x03\x1a\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2d"
  "\x61\x63\x63\x65\x73\x73\x6f\x72\x09\xeb\x03\x24\x81\x81\x02\xea"
  "\x03\x22\x81\x81\x02\xe9\x03\x20\x81\x81\x02\xe8\x03\x1e\x81\x81"
  "\x02\xe7\x03\x1c\x81\x81\x02\xe6\x03\x1a\x81\x81\x02\xe5\x03\x18"
  "\x81\x81\x02\xe4\x03\x16\x81\x81\x02\xe3\x03\x14\x81\x81\x02\xe2"
  "\x03\x12\x81\x81\x02\xe1\x03\x10\x81\x81\x02\xe0\x03\x0e\x81\x81"
  "\x02\xdf\x03\x0c\x81\x81\x02\xde\x03\x0a\x81\x81\x02\xdd\x03\x08"
  "\x81\x81\x02\xdc\x03\x06\x81\x81\x02\xdb\x03\x04\x82\x02\x23\x42"
  "\xac\x01\x5d\xad\x01\xad\x01\x2a\xac\x01\x04\x2e\x04\x65\x04\x8a"
  "\x01\x04\x88\x01\x04\x53\x04\xa7\x01\x04\x6c\x04\xa6\x01\x04\x42"
  "\x04\xa5\x01\x04\x04\x74\x04\x0c\x04\xa4\x01\x04\xa2\x01\x04\xa1"
  "\x01\x04\xa0\x01\x04\x9f\x01\x04\x1c\x14\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\xa8\x01\x6a"
  "\x73\x70\x6b\x93\x01\x78\x75\x1a\xab\x01\x6d\x0a\x18\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63"
  "\x74\x65\x74\x73\x38\xa3\x01\x60\x8b\x01\x5f\x97\x01\x94\x01\x95"
  "\x01\x96\x01\x08\x6f\x73\x74\x61\x74\x65\x3f\x1c\x71\x13\x73\x65"
  "\x74\x2d\x6f\x73\x74\x61\x74\x65\x2d\x63\x6f\x6c\x75\x6d\x6e\x21"
  "\x12\x73\x65\x74\x2d\x6f\x73\x74\x61\x74\x65\x2d\x69\x6e\x64\x65"
  "\x78\x21\x13\x73\x65\x74\x2d\x6f\x73\x74\x61\x74\x65\x2d\x62\x75"
  "\x66\x66\x65\x72\x21\x0e\x6f\x73\x74\x61\x74\x65\x2d\x63\x6f\x6c"
  "\x75\x6d\x6e\x0d\x6f\x73\x74\x61\x74\x65\x2d\x69\x6e\x64\x65\x78"
  "\x0e\x6f\x73\x74\x61\x74\x65\x2d\x62\x75\x66\x66\x65\x72\x9e\x01"
  "\x04\x9d\x01\x04\x9c\x01\x04\x9b\x01\x04\x9a\x01\x04\x99\x01\x04"
  "\x0b\x72\x74\x64\x3a\x6f\x73\x74\x61\x74\x65\xad\x01\x07\x6f\x73"
  "\x74\x61\x74\x65\x07\x62\x75\x66\x66\x65\x72\x06\x69\x6e\x64\x65"
  "\x78\x07\x63\x6f\x6c\x75\x6d\x6e\x4b\x86\x01\x8d\x01\x8e\x01\x8f"
  "\x01\xaa\x01\x83\x01\x84\x01\x85\x01\xa9\x01\x20\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x74\x72\x75\x6e\x63"
  "\x61\x74\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x16\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e"
  "\x67\x82\x01\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x77\x69"
  "\x64\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x7f\x13\x67\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x21\x7a\x7c\x79\x0e\x68\x17\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x6f\x63\x74\x65\x74\x73"
  "\x0d\x45\x56\x54\x5c\x5a\x50\x57\x51\x31\x18\x19\x17\x16\x15\x09"
  "\x78\x69\x73\x74\x61\x74\x65\x3f\x27\x98\x01\x04\x91\x01\x04\x92"
  "\x01\x04\x63\x04\x90\x01\x04\x8c\x01\x04\x89\x01\x04\x5e\x06\x87"
  "\x01\x04\x80\x01\x04\x81\x01\x04\x7e\x04\x7d\x04\x7b\x04\x76\x04"
  "\x77\x04\x10\x04\x72\x04\x6f\x04\x55\x04\x6e\x04\x69\x04\x67\x04"
  "\x66\x04\x64\x04\x62\x04\x61\x04\x5d\x04\x0b\x04\x5b\x04\x59\x04"
  "\x58\x04\x52\x04\x3c\x06\x4f\x04\x4e\x04\x4d\x04\x4c\x04\x27\x46"
  "\x14\x73\x65\x74\x2d\x78\x69\x73\x74\x61\x74\x65\x2d\x75\x6e\x72"
  "\x65\x61\x64\x21\x0f\x78\x69\x73\x74\x61\x74\x65\x2d\x75\x6e\x72"
  "\x65\x61\x64\x0f\x78\x69\x73\x74\x61\x74\x65\x2d\x73\x6f\x75\x72"
  "\x63\x65\x4a\x04\x49\x04\x48\x04\x0c\x72\x74\x64\x3a\x78\x69\x73"
  "\x74\x61\x74\x65\xac\x01\x08\x78\x69\x73\x74\x61\x74\x65\x07\x73"
  "\x6f\x75\x72\x63\x65\x07\x75\x6e\x72\x65\x61\x64\x2b\x11\x1f\x3e"
  "\x3f\x40\x23\x33\x34\x35\x28\x1c\x1d\x1b\x1e\x09\x69\x69\x73\x74"
  "\x61\x74\x65\x3f\x10\x47\x04\x14\x04\x44\x06\x39\x04\x43\x04\x41"
  "\x04\x3d\x08\x3b\x04\x3a\x04\x37\x04\x32\x04\x30\x04\x2f\x04\x2d"
  "\x04\x2c\x04\x10\x21\x12\x73\x65\x74\x2d\x69\x69\x73\x74\x61\x74"
  "\x65\x2d\x6e\x65\x78\x74\x21\x0d\x69\x69\x73\x74\x61\x74\x65\x2d"
  "\x6e\x65\x78\x74\x0c\x69\x69\x73\x74\x61\x74\x65\x2d\x65\x6e\x64"
  "\x0e\x69\x69\x73\x74\x61\x74\x65\x2d\x73\x74\x61\x72\x74\x0f\x69"
  "\x69\x73\x74\x61\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x29\x04\x27"
  "\x04\x26\x04\x25\x04\x24\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x72\x74\x64\x3a\x69\x69\x73"
  "\x74\x61\x74\x65\xab\x01\x08\x69\x69\x73\x74\x61\x74\x65\x07\x73"
  "\x74\x72\x69\x6e\x67\x06\x73\x74\x61\x72\x74\x04\x65\x6e\x64\x05"
  "\x6e\x65\x78\x74\x0f\x36\x09\x17\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x17\x77"
  "\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x72\x6f\x6d\x2d\x73"
  "\x74\x72\x69\x6e\x67\x22\x04\x20\x04\x13\x10\x12\x04\x04\x04\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\xab\x01\xac"
  "\x01\xad\x01\x04\x24\x4a\x80\x80\x04\x23\x48\x81\x81\x02\x22\x46"
  "\x81\x81\x02\x21\x44\x81\x85\x02\x20\x42\x81\x83\x02\x1f\x40\x81"
  "\x89\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85"
  "\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x87\x02"
  "\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15"
  "\x2c\x81\x83\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x87\x02\x12\x26"
  "\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81"
  "\x85\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83"
  "\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x8b\x02"
  "\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06"
  "\x81\x83\x02\x01\x04\x81\x83\x02\x49\x78";

SCHEME_OBJECT *
stringio_so_data_100ac7e3ddd72e05 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_stringio_so_data_100ac7e3ddd72e05 [0]))), (sizeof (prog_stringio_so_data_100ac7e3ddd72e05)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_45]));
}

DECLARE_COMPILED_DATA_NS ("stringio.so", stringio_so_data_100ac7e3ddd72e05)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("stringio.so", "328054e3463bdd94")
