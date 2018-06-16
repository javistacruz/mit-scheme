/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:58-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_11 11
#define LABEL_1_9 13
#define TAG_1_10 5
#define LABEL_1_12 15
#define LABEL_1_13 17
#define TAG_1_14 7
#define LABEL_1_16 19
#define ENVIRONMENT_LABEL_1_3 36
#define DEBUGGING_LABEL_1_2 35
#define OBJECT_1_2 34
#define OBJECT_1_1 33
#define OBJECT_1_0 32
#define EXECUTE_CACHE_1_17 21
#define EXECUTE_CACHE_1_15 23
#define EXECUTE_CACHE_1_6 25
#define FREE_REFERENCE_1_1 28
#define FREE_REFERENCE_1_0 29
#define FREE_ASSIGNMENT_1_0 31
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_1_4);
      goto define_error_handler_7;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_15;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_error_handler_13)
DEFLABEL (define_error_handler_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_20;
  Wrd14 = Wrd18;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd37.uLng) == 10)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 3);

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_16;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_16;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd25.pObj) = (& ((Wrd33.pObj) [(Wrd22.Lng)]));
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [1]) = (Wrd26.Obj);

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd15.pObj));

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_25;
  Wrd39 = Wrd43;

DEFLABEL (label_24)
  (Wrd48.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd57.Obj) = ((Wrd49.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd49.pObj) [0]) = (Wrd45.Obj);
  goto label_18;

DEFLABEL (label_23)
  if ((Wrd57.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_8])), (Wrd49.pObj), (Wrd45.Obj));

DEFLABEL (label_11)
  goto label_18;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd40.pObj));

DEFLABEL (label_10)
  (Wrd39.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define TAG_2_9 3
#define LABEL_2_10 11
#define LABEL_2_11 13
#define TAG_2_12 5
#define LABEL_2_14 15
#define ENVIRONMENT_LABEL_2_3 29
#define DEBUGGING_LABEL_2_2 28
#define OBJECT_2_2 27
#define OBJECT_2_1 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_15 17
#define EXECUTE_CACHE_2_13 19
#define EXECUTE_CACHE_2_7 21
#define FREE_REFERENCE_2_0 24
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto define_low_level_handler_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_11;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_low_level_handler_9)
DEFLABEL (define_low_level_handler_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 3);

DEFLABEL (label_13)
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 26))
    goto label_12;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_12;
  (Wrd13.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd16.pObj) = (& ((Wrd24.pObj) [(Wrd13.Lng)]));
  ((Wrd16.pObj) [1]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define TAG_3_8 2
#define LABEL_3_9 9
#define ENVIRONMENT_LABEL_3_3 18
#define DEBUGGING_LABEL_3_2 17
#define OBJECT_3_1 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_10 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto condition_signaller_6;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_signaller_9)
DEFLABEL (condition_signaller_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_0]);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define TAG_4_8 2
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_12 13
#define LABEL_4_14 15
#define LABEL_4_16 17
#define TAG_4_17 7
#define LABEL_4_20 19
#define LABEL_4_22 21
#define LABEL_4_24 23
#define TAG_4_25 10
#define ENVIRONMENT_LABEL_4_3 45
#define DEBUGGING_LABEL_4_2 44
#define OBJECT_4_4 43
#define OBJECT_4_3 42
#define OBJECT_4_2 41
#define OBJECT_4_1 40
#define OBJECT_4_0 39
#define EXECUTE_CACHE_4_23 25
#define EXECUTE_CACHE_4_21 27
#define EXECUTE_CACHE_4_19 29
#define EXECUTE_CACHE_4_18 31
#define EXECUTE_CACHE_4_15 33
#define EXECUTE_CACHE_4_13 35
#define EXECUTE_CACHE_4_11 37
#define FREE_REFERENCES_LABEL_4_0 24
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto unbound_variable_store_value_13;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_4_24);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unbound_variable_store_value_16)
DEFLABEL (unbound_variable_store_value_13)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_16])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Wrd5.Obj) = (current_block [OBJECT_4_4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_4_16);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_22);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_4_24);

DEFLABEL (lambda_9)
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

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define TAG_5_8 2
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_12 13
#define LABEL_5_14 15
#define LABEL_5_16 17
#define TAG_5_17 7
#define LABEL_5_20 19
#define LABEL_5_22 21
#define LABEL_5_24 23
#define TAG_5_25 10
#define ENVIRONMENT_LABEL_5_3 45
#define DEBUGGING_LABEL_5_2 44
#define OBJECT_5_4 43
#define OBJECT_5_3 42
#define OBJECT_5_2 41
#define OBJECT_5_1 40
#define OBJECT_5_0 39
#define EXECUTE_CACHE_5_23 25
#define EXECUTE_CACHE_5_21 27
#define EXECUTE_CACHE_5_19 29
#define EXECUTE_CACHE_5_18 31
#define EXECUTE_CACHE_5_15 33
#define EXECUTE_CACHE_5_13 35
#define EXECUTE_CACHE_5_11 37
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto unassigned_variable_store_value_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_5_24);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unassigned_variable_store_value_16)
DEFLABEL (unassigned_variable_store_value_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_16])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Wrd5.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_16);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_5_24);

DEFLABEL (lambda_9)
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

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define TAG_6_10 3
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_14 15
#define LABEL_6_16 17
#define TAG_6_17 7
#define LABEL_6_20 19
#define LABEL_6_22 21
#define LABEL_6_24 23
#define TAG_6_25 10
#define ENVIRONMENT_LABEL_6_3 46
#define DEBUGGING_LABEL_6_2 45
#define OBJECT_6_3 44
#define OBJECT_6_2 43
#define OBJECT_6_1 42
#define OBJECT_6_0 41
#define EXECUTE_CACHE_6_23 25
#define EXECUTE_CACHE_6_21 27
#define EXECUTE_CACHE_6_19 29
#define EXECUTE_CACHE_6_18 31
#define EXECUTE_CACHE_6_15 33
#define EXECUTE_CACHE_6_13 35
#define EXECUTE_CACHE_6_8 37
#define EXECUTE_CACHE_6_6 39
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_6_4);
      goto variable_use_value_14;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_6_24);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_use_value_17)
DEFLABEL (variable_use_value_14)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_16])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Wrd5.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_6_16);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_6_24);

DEFLABEL (lambda_9)
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

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define TAG_7_10 3
#define LABEL_7_11 11
#define LABEL_7_13 13
#define TAG_7_14 5
#define LABEL_7_16 15
#define LABEL_7_18 17
#define TAG_7_19 7
#define ENVIRONMENT_LABEL_7_3 34
#define DEBUGGING_LABEL_7_2 33
#define OBJECT_7_3 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_17 19
#define EXECUTE_CACHE_7_15 21
#define EXECUTE_CACHE_7_12 23
#define EXECUTE_CACHE_7_8 25
#define EXECUTE_CACHE_7_6 27
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto inapplicable_object_use_value_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_7;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_7_18);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inapplicable_object_use_value_12)
DEFLABEL (inapplicable_object_use_value_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_9])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_1]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (Rsp [3]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_7_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_7_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_18])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_7_18);

DEFLABEL (lambda_5)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define TAG_8_8 2
#define LABEL_8_9 9
#define TAG_8_10 3
#define LABEL_8_12 11
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_13 13
#define EXECUTE_CACHE_8_11 15
#define EXECUTE_CACHE_8_6 17
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
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
      goto illegal_arg_signaller_5;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegal_arg_signaller_8)
DEFLABEL (illegal_arg_signaller_5)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_8_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define TAG_9_10 3
#define LABEL_9_11 11
#define LABEL_9_13 13
#define TAG_9_14 5
#define LABEL_9_16 15
#define LABEL_9_18 17
#define LABEL_9_20 19
#define TAG_9_21 8
#define ENVIRONMENT_LABEL_9_3 38
#define DEBUGGING_LABEL_9_2 37
#define OBJECT_9_3 36
#define OBJECT_9_2 35
#define OBJECT_9_1 34
#define OBJECT_9_0 33
#define EXECUTE_CACHE_9_19 21
#define EXECUTE_CACHE_9_17 23
#define EXECUTE_CACHE_9_15 25
#define EXECUTE_CACHE_9_12 27
#define EXECUTE_CACHE_9_8 29
#define EXECUTE_CACHE_9_6 31
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto illegal_argument_use_value_10;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto lambda_8;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_9_20);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegal_argument_use_value_13)
DEFLABEL (illegal_argument_use_value_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd7.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd17 = Wrd10;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [5]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_9_1]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (Rsp [4]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_18)
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [4]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = ((Wrd20.pObj) [5]);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_9_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_20])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_9_20);

DEFLABEL (lambda_6)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_8 9
#define TAG_10_9 3
#define LABEL_10_10 11
#define TAG_10_11 4
#define LABEL_10_13 13
#define TAG_10_14 5
#define LABEL_10_16 15
#define ENVIRONMENT_LABEL_10_3 29
#define DEBUGGING_LABEL_10_2 28
#define OBJECT_10_0 27
#define EXECUTE_CACHE_10_17 17
#define EXECUTE_CACHE_10_15 19
#define EXECUTE_CACHE_10_12 21
#define EXECUTE_CACHE_10_7 23
#define FREE_REFERENCE_10_0 26
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_10_4);
      goto file_operation_signaller_6;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto lambda_13;

    case 6:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_operation_signaller_10)
DEFLABEL (file_operation_signaller_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;
  Wrd9 = Wrd13;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd10.pObj));

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_10_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 8;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd22 = Wrd7;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [6]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [7]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [8]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [9]) = (Wrd9.Obj);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [9]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_13])));
  Rhp += 8;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd51 = Wrd22;
  (Wrd54.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd51.pObj) [2]) = (Wrd54.Obj);
  (Wrd50.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  ((Wrd51.pObj) [4]) = (Wrd7.Obj);
  ((Wrd51.pObj) [5]) = (Wrd10.Obj);
  (Wrd38.Obj) = ((Wrd6.pObj) [6]);
  ((Wrd51.pObj) [6]) = (Wrd38.Obj);
  ((Wrd51.pObj) [7]) = (Wrd13.Obj);
  ((Wrd51.pObj) [8]) = (Wrd16.Obj);
  ((Wrd51.pObj) [9]) = (Wrd19.Obj);
  (Rsp [5]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_10_13);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [7]);
  (Rsp [7]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_11 11
#define TAG_11_12 4
#define LABEL_11_13 13
#define LABEL_11_15 15
#define TAG_11_16 6
#define LABEL_11_18 17
#define TAG_11_19 7
#define LABEL_11_21 19
#define LABEL_11_23 21
#define LABEL_11_25 23
#define TAG_11_26 10
#define ENVIRONMENT_LABEL_11_3 49
#define DEBUGGING_LABEL_11_2 48
#define OBJECT_11_6 47
#define OBJECT_11_5 46
#define OBJECT_11_4 45
#define OBJECT_11_3 44
#define OBJECT_11_2 43
#define OBJECT_11_1 42
#define OBJECT_11_0 41
#define EXECUTE_CACHE_11_24 25
#define EXECUTE_CACHE_11_22 27
#define EXECUTE_CACHE_11_20 29
#define EXECUTE_CACHE_11_17 31
#define EXECUTE_CACHE_11_14 33
#define EXECUTE_CACHE_11_10 35
#define EXECUTE_CACHE_11_8 37
#define EXECUTE_CACHE_11_6 39
#define FREE_REFERENCES_LABEL_11_0 24
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto file_operation_use_value_14;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_11_18);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_11_25);
      goto lambda_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_operation_use_value_17)
DEFLABEL (file_operation_use_value_14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rsp = (& (Rsp [7]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_11])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_18])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd11.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_11_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_15])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [4]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = ((Wrd20.pObj) [5]);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_11_15);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 2);

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_11_18);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_11_25);

DEFLABEL (lambda_9)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define LABEL_12_13 11
#define LABEL_12_11 13
#define TAG_12_12 5
#define LABEL_12_15 15
#define TAG_12_16 6
#define ENVIRONMENT_LABEL_12_3 35
#define DEBUGGING_LABEL_12_2 34
#define OBJECT_12_4 33
#define OBJECT_12_3 32
#define OBJECT_12_2 31
#define OBJECT_12_1 30
#define OBJECT_12_0 29
#define EXECUTE_CACHE_12_17 17
#define EXECUTE_CACHE_12_14 19
#define EXECUTE_CACHE_12_10 21
#define EXECUTE_CACHE_12_8 23
#define EXECUTE_CACHE_12_6 25
#define FREE_REFERENCE_12_0 28
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto file_operation_retry_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_13);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto lambda_11;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_operation_retry_10)
DEFLABEL (file_operation_retry_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_3]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  (Rsp [6]) = (Wrd16.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_13])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_12_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_15])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd18.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_12_15);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_7 15
#define LABEL_13_11 17
#define ENVIRONMENT_LABEL_13_3 22
#define DEBUGGING_LABEL_13_2 21
#define OBJECT_13_2 20
#define OBJECT_13_1 19
#define OBJECT_13_0 18
#define FREE_REFERENCES_LABEL_13_0 18
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd32;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_13_4);
      goto substitute_element_9;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitute_element_17)
DEFLABEL (substitute_element_9)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_7;

DEFLABEL (loop_18)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_29;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_29;
  if ((Wrd5.Obj) == (Wrd9.Obj))
    goto label_26;

DEFLABEL (label_25)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_24;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_24;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_23)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_22;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_21)
  Rdl = (& (Rsp [3]));
  goto loop_7;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_19)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_13)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_28;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_27)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_28)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_14)
  (Wrd65.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd60.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define EXECUTE_CACHE_14_9 9
#define EXECUTE_CACHE_14_8 11
#define EXECUTE_CACHE_14_6 13
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto continuation_next_continuation_4;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_next_continuation_7)
DEFLABEL (continuation_next_continuation_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_11 9
#define LABEL_15_12 11
#define LABEL_15_9 13
#define LABEL_15_15 15
#define LABEL_15_13 17
#define ENVIRONMENT_LABEL_15_3 35
#define DEBUGGING_LABEL_15_2 34
#define OBJECT_15_0 33
#define EXECUTE_CACHE_15_18 19
#define EXECUTE_CACHE_15_17 21
#define EXECUTE_CACHE_15_16 23
#define EXECUTE_CACHE_15_14 25
#define EXECUTE_CACHE_15_10 27
#define EXECUTE_CACHE_15_8 29
#define EXECUTE_CACHE_15_6 31
#define FREE_REFERENCES_LABEL_15_0 18
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_15_4);
      goto continuation_next_continuation_no_compiled_code_10;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_next_continuation_no_compiled_code_13)
DEFLABEL (continuation_next_continuation_no_compiled_code_10)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 5
#define DEBUGGING_LABEL_16_2 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto continuation_restartableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_restartableP_3)
DEFLABEL (continuation_restartableP_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto frame_type_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_type_4)
DEFLABEL (frame_type_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_0 18
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCE_18_1 16
#define FREE_REFERENCE_18_0 17
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_18_4);
      goto apply_frameP_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_frameP_9)
DEFLABEL (apply_frameP_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_22;
  Wrd9 = Wrd13;

DEFLABEL (label_21)
  Wrd8 = Wrd9;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_20;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_20;
  if ((Wrd9.Obj) == (Wrd16.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_16;
  Wrd24 = Wrd28;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd32.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_10;
  if ((Wrd24.Obj) == (Wrd33.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_18_0]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_9])), (Wrd25.pObj));

DEFLABEL (label_7)
  (Wrd24.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_18_0]);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_7])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 9
#define DEBUGGING_LABEL_19_2 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto apply_frame_operator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_frame_operator_3)
DEFLABEL (apply_frame_operator_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto apply_frame_operand_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_frame_operand_5)
DEFLABEL (apply_frame_operand_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_7;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd17.Lng) + 4L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_7;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (label_7)
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_1 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_8 9
#define EXECUTE_CACHE_21_6 11
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_21_4);
      goto apply_frame_operands_3;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_frame_operands_7)
DEFLABEL (apply_frame_operands_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (label_9)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 9
#define DEBUGGING_LABEL_22_2 8
#define OBJECT_22_0 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto eval_frame_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eval_frame_expression_3)
DEFLABEL (eval_frame_expression_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 9
#define DEBUGGING_LABEL_23_2 8
#define OBJECT_23_0 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto eval_frame_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eval_frame_environment_3)
DEFLABEL (eval_frame_environment_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_12 11
#define LABEL_24_10 13
#define LABEL_24_15 15
#define LABEL_24_9 17
#define LABEL_24_16 19
#define ENVIRONMENT_LABEL_24_3 40
#define DEBUGGING_LABEL_24_2 39
#define OBJECT_24_3 38
#define OBJECT_24_2 37
#define OBJECT_24_1 36
#define OBJECT_24_0 35
#define EXECUTE_CACHE_24_18 21
#define EXECUTE_CACHE_24_17 23
#define EXECUTE_CACHE_24_14 25
#define EXECUTE_CACHE_24_13 27
#define EXECUTE_CACHE_24_11 29
#define EXECUTE_CACHE_24_6 31
#define FREE_REFERENCE_24_0 34
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_24_4);
      goto pop_return_frame_value_10;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_24_12);
      goto loop_8;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_24_15);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pop_return_frame_value_14)
DEFLABEL (pop_return_frame_value_10)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  goto loop_8;

DEFLABEL (loop_15)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_24_12);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_7);

DEFLABEL (label_26)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_24;
  Wrd15 = Wrd19;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd24.uLng) == 26)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_16;
  if ((Wrd15.Obj) == (Wrd25.Obj))
    goto label_19;
  (Wrd22.Obj) = (current_block [OBJECT_24_2]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd22.Obj) = (current_block [OBJECT_24_1]);

DEFLABEL (label_18)
DEFLABEL (label_22)
  Rsp = (& (Rsp [3]));
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_16);
  (Rsp [0]) = Rvl;
  goto loop_8;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_15])), (Wrd16.pObj));

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto label_21;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 9
#define DEBUGGING_LABEL_25_2 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto reference_trap_frame_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_trap_frame_name_3)
DEFLABEL (reference_trap_frame_name_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 9
#define DEBUGGING_LABEL_26_2 8
#define OBJECT_26_0 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto reference_trap_frame_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_trap_frame_environment_3)
DEFLABEL (reference_trap_frame_environment_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 15
#define DEBUGGING_LABEL_27_2 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCE_27_0 12
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_27_4);
      goto compiled_code_error_frameP_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_error_frameP_6)
DEFLABEL (compiled_code_error_frameP_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd16.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_8;
  if ((Wrd8.Obj) == (Wrd17.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_27_0]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 9
#define DEBUGGING_LABEL_28_2 8
#define OBJECT_28_0 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto compiled_code_error_frame_irritant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_error_frame_irritant_3)
DEFLABEL (compiled_code_error_frame_irritant_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_5 3
#define LABEL_29_4 5
#define LABEL_29_8 7
#define LABEL_29_12 9
#define LABEL_29_9 11
#define LABEL_29_7 13
#define LABEL_29_6 15
#define LABEL_29_13 17
#define LABEL_29_14 19
#define LABEL_29_16 21
#define ENVIRONMENT_LABEL_29_3 45
#define DEBUGGING_LABEL_29_2 44
#define OBJECT_29_8 43
#define OBJECT_29_7 42
#define OBJECT_29_6 41
#define OBJECT_29_5 40
#define OBJECT_29_4 39
#define OBJECT_29_3 38
#define OBJECT_29_2 37
#define OBJECT_29_1 36
#define OBJECT_29_0 35
#define EXECUTE_CACHE_29_19 23
#define EXECUTE_CACHE_29_18 25
#define EXECUTE_CACHE_29_17 27
#define EXECUTE_CACHE_29_15 29
#define EXECUTE_CACHE_29_11 31
#define EXECUTE_CACHE_29_10 33
#define FREE_REFERENCES_LABEL_29_0 22
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd52;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_29_4);
      goto error_type__string_16;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_29_16);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_type__string_21)
DEFLABEL (error_type__string_16)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_23;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_22)
DEFLABEL (label_49)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_29_0]);
  (Wrd47.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd47.Lng))))
    goto label_48;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_47;

DEFLABEL (label_46)
  (Wrd26.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng)))
    goto label_25;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_25)
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_27;
  (Wrd28.Obj) = (current_block [OBJECT_29_4]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd28.Obj) = (current_block [OBJECT_29_3]);

DEFLABEL (label_26)
DEFLABEL (label_45)
  Rsp = (& (Rsp [3]));
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_40)
  (Wrd50.Obj) = (Rsp [0]);
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_5]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_29_0]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd43.Lng))))
    goto label_38;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd15.Obj) == (Wrd17.Obj))
    goto label_37;

DEFLABEL (label_36)
  (Wrd18.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng)))
    goto label_30;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_30)
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_32;
  (Wrd20.Obj) = (current_block [OBJECT_29_4]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd20.Obj) = (current_block [OBJECT_29_3]);

DEFLABEL (label_31)
DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29_7]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_8]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_19]));

DEFLABEL (label_34)
  (Wrd30.Obj) = (current_block [OBJECT_29_6]);
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_18]));

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto label_33;

DEFLABEL (label_38)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_42)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd56.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd56.Obj);
  goto label_43;

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_43)
  goto label_40;

DEFLABEL (label_47)
  Rsp = (& (Rsp [2]));
  goto label_41;

DEFLABEL (label_48)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define LABEL_30_5 7
#define LABEL_30_9 9
#define LABEL_30_8 11
#define LABEL_30_11 13
#define LABEL_30_10 15
#define LABEL_30_13 17
#define LABEL_30_15 19
#define LABEL_30_12 21
#define LABEL_30_16 23
#define LABEL_30_14 25
#define LABEL_30_18 27
#define LABEL_30_17 29
#define LABEL_30_20 31
#define LABEL_30_19 33
#define ENVIRONMENT_LABEL_30_3 60
#define DEBUGGING_LABEL_30_2 59
#define OBJECT_30_21 58
#define OBJECT_30_20 57
#define OBJECT_30_19 56
#define OBJECT_30_18 55
#define OBJECT_30_17 54
#define OBJECT_30_16 53
#define OBJECT_30_15 52
#define OBJECT_30_14 51
#define OBJECT_30_13 50
#define OBJECT_30_12 49
#define OBJECT_30_11 48
#define OBJECT_30_10 47
#define OBJECT_30_9 46
#define OBJECT_30_8 45
#define OBJECT_30_7 44
#define OBJECT_30_6 43
#define OBJECT_30_5 42
#define OBJECT_30_4 41
#define OBJECT_30_3 40
#define OBJECT_30_2 39
#define OBJECT_30_1 38
#define OBJECT_30_0 37
#define EXECUTE_CACHE_30_6 35
#define FREE_REFERENCES_LABEL_30_0 34
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_30_4);
      goto normalize_trap_code_name_15;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (normalize_trap_code_name_18)
DEFLABEL (normalize_trap_code_name_15)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_30_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_30_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_30_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_30_13]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_12]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_11]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_30_10]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_30_16]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_15]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_14]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_30_19]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_17]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_20]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_30_21]);
  goto label_31;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_20 5
#define LABEL_31_19 7
#define LABEL_31_18 9
#define LABEL_31_17 11
#define LABEL_31_16 13
#define LABEL_31_15 15
#define LABEL_31_14 17
#define LABEL_31_13 19
#define LABEL_31_12 21
#define LABEL_31_11 23
#define LABEL_31_10 25
#define LABEL_31_9 27
#define LABEL_31_8 29
#define LABEL_31_7 31
#define LABEL_31_6 33
#define LABEL_31_5 35
#define ENVIRONMENT_LABEL_31_3 84
#define DEBUGGING_LABEL_31_2 83
#define OBJECT_31_46 82
#define OBJECT_31_45 81
#define OBJECT_31_44 80
#define OBJECT_31_43 79
#define OBJECT_31_42 78
#define OBJECT_31_41 77
#define OBJECT_31_40 76
#define OBJECT_31_39 75
#define OBJECT_31_38 74
#define OBJECT_31_37 73
#define OBJECT_31_36 72
#define OBJECT_31_35 71
#define OBJECT_31_34 70
#define OBJECT_31_33 69
#define OBJECT_31_32 68
#define OBJECT_31_31 67
#define OBJECT_31_30 66
#define OBJECT_31_29 65
#define OBJECT_31_28 64
#define OBJECT_31_27 63
#define OBJECT_31_26 62
#define OBJECT_31_25 61
#define OBJECT_31_24 60
#define OBJECT_31_23 59
#define OBJECT_31_22 58
#define OBJECT_31_21 57
#define OBJECT_31_20 56
#define OBJECT_31_19 55
#define OBJECT_31_18 54
#define OBJECT_31_17 53
#define OBJECT_31_16 52
#define OBJECT_31_15 51
#define OBJECT_31_14 50
#define OBJECT_31_13 49
#define OBJECT_31_12 48
#define OBJECT_31_11 47
#define OBJECT_31_10 46
#define OBJECT_31_9 45
#define OBJECT_31_8 44
#define OBJECT_31_7 43
#define OBJECT_31_6 42
#define OBJECT_31_5 41
#define OBJECT_31_4 40
#define OBJECT_31_3 39
#define OBJECT_31_2 38
#define OBJECT_31_1 37
#define OBJECT_31_0 36
#define FREE_REFERENCES_LABEL_31_0 36
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_31_4);
      goto file_primitive_description_64;

    case 1:
      current_block = (Rpc - LABEL_31_20);
      goto lambda_32;

    case 2:
      current_block = (Rpc - LABEL_31_19);
      goto lambda_34;

    case 3:
      current_block = (Rpc - LABEL_31_18);
      goto lambda_36;

    case 4:
      current_block = (Rpc - LABEL_31_17);
      goto lambda_38;

    case 5:
      current_block = (Rpc - LABEL_31_16);
      goto lambda_40;

    case 6:
      current_block = (Rpc - LABEL_31_15);
      goto lambda_42;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto lambda_44;

    case 8:
      current_block = (Rpc - LABEL_31_13);
      goto lambda_46;

    case 9:
      current_block = (Rpc - LABEL_31_12);
      goto lambda_48;

    case 10:
      current_block = (Rpc - LABEL_31_11);
      goto lambda_50;

    case 11:
      current_block = (Rpc - LABEL_31_10);
      goto lambda_52;

    case 12:
      current_block = (Rpc - LABEL_31_9);
      goto lambda_54;

    case 13:
      current_block = (Rpc - LABEL_31_8);
      goto lambda_56;

    case 14:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_58;

    case 15:
      current_block = (Rpc - LABEL_31_6);
      goto lambda_60;

    case 16:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_62;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_primitive_description_67)
DEFLABEL (file_primitive_description_64)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_31_0]))
    goto label_100;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_1]))
    goto label_100;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_2]))
    goto label_99;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_3]))
    goto label_99;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_4]))
    goto label_99;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_5]))
    goto label_99;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_6]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_7]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_8]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_9]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_10]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_11]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_12]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_13]))
    goto label_98;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_14]))
    goto label_97;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_15]))
    goto label_96;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_16]))
    goto label_96;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_17]))
    goto label_95;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_18]))
    goto label_94;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_19]))
    goto label_94;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_20]))
    goto label_93;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_21]))
    goto label_93;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_22]))
    goto label_92;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_23]))
    goto label_91;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_24]))
    goto label_90;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_25]))
    goto label_89;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_26]))
    goto label_89;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_27]))
    goto label_89;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_28]))
    goto label_88;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_29]))
    goto label_88;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_30]))
    goto label_87;
  if ((Wrd5.Obj) == (current_block [OBJECT_31_31]))
    goto label_85;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  goto label_84;

DEFLABEL (label_85)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));

DEFLABEL (label_84)
DEFLABEL (label_86)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_87)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  goto label_86;

DEFLABEL (label_88)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  goto label_86;

DEFLABEL (label_89)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  goto label_86;

DEFLABEL (label_90)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  goto label_86;

DEFLABEL (label_91)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  goto label_86;

DEFLABEL (label_92)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  goto label_86;

DEFLABEL (label_93)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  goto label_86;

DEFLABEL (label_94)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  goto label_86;

DEFLABEL (label_95)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  goto label_86;

DEFLABEL (label_96)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  goto label_86;

DEFLABEL (label_97)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  goto label_86;

DEFLABEL (label_98)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  goto label_86;

DEFLABEL (label_99)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  goto label_86;

DEFLABEL (label_100)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  goto label_86;

DEFLABEL (lambda_68)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_31_20);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_69)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_31_19);
  (Wrd5.Obj) = (current_block [OBJECT_31_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_70)
DEFLABEL (lambda_36)
  INTERRUPT_CHECK (26, LABEL_31_18);
  (Wrd5.Obj) = (current_block [OBJECT_31_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_71)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_31_17);
  (Wrd5.Obj) = (current_block [OBJECT_31_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_72)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_31_16);
  (Wrd5.Obj) = (current_block [OBJECT_31_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_73)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_31_15);
  (Wrd5.Obj) = (current_block [OBJECT_31_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_74)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_31_14);
  (Wrd5.Obj) = (current_block [OBJECT_31_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_38]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_75)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_31_13);
  (Wrd5.Obj) = (current_block [OBJECT_31_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_38]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_76)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_31_12);
  (Wrd5.Obj) = (current_block [OBJECT_31_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_77)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_31_11);
  (Wrd5.Obj) = (current_block [OBJECT_31_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_78)
DEFLABEL (lambda_52)
  INTERRUPT_CHECK (26, LABEL_31_10);
  (Wrd5.Obj) = (current_block [OBJECT_31_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_79)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_31_9);
  (Wrd5.Obj) = (current_block [OBJECT_31_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_80)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_31_8);
  (Wrd5.Obj) = (current_block [OBJECT_31_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_38]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_81)
DEFLABEL (lambda_58)
  INTERRUPT_CHECK (26, LABEL_31_7);
  (Wrd5.Obj) = (current_block [OBJECT_31_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_82)
DEFLABEL (lambda_60)
  INTERRUPT_CHECK (26, LABEL_31_6);
  (Wrd5.Obj) = (current_block [OBJECT_31_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_83)
DEFLABEL (lambda_62)
  INTERRUPT_CHECK (26, LABEL_31_5);
  (Wrd5.Obj) = (current_block [OBJECT_31_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_33]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_11 15
#define LABEL_32_12 17
#define LABEL_32_13 19
#define LABEL_32_14 21
#define LABEL_32_18 23
#define LABEL_32_21 25
#define LABEL_32_15 27
#define LABEL_32_16 29
#define LABEL_32_19 31
#define LABEL_32_25 33
#define LABEL_32_27 35
#define LABEL_32_20 37
#define LABEL_32_23 39
#define LABEL_32_26 41
#define LABEL_32_36 43
#define LABEL_32_37 45
#define LABEL_32_29 47
#define LABEL_32_31 49
#define TAG_32_32 23
#define LABEL_32_34 51
#define TAG_32_35 24
#define LABEL_32_47 53
#define LABEL_32_38 55
#define LABEL_32_51 57
#define LABEL_32_39 59
#define TAG_32_40 28
#define LABEL_32_52 61
#define LABEL_32_55 63
#define LABEL_32_42 65
#define LABEL_32_43 67
#define LABEL_32_57 69
#define LABEL_32_46 71
#define LABEL_32_61 73
#define LABEL_32_49 75
#define LABEL_32_64 77
#define LABEL_32_50 79
#define LABEL_32_65 81
#define LABEL_32_53 83
#define LABEL_32_68 85
#define LABEL_32_59 87
#define LABEL_32_58 89
#define LABEL_32_62 91
#define LABEL_32_73 93
#define LABEL_32_63 95
#define LABEL_32_66 97
#define LABEL_32_77 99
#define LABEL_32_71 101
#define LABEL_32_81 103
#define LABEL_32_72 105
#define LABEL_32_74 107
#define TAG_32_75 52
#define LABEL_32_78 109
#define LABEL_32_89 111
#define LABEL_32_90 113
#define LABEL_32_79 115
#define LABEL_32_93 117
#define LABEL_32_80 119
#define LABEL_32_82 121
#define TAG_32_83 59
#define LABEL_32_84 123
#define TAG_32_85 60
#define LABEL_32_86 125
#define TAG_32_87 61
#define LABEL_32_105 127
#define LABEL_32_88 129
#define LABEL_32_108 131
#define LABEL_32_91 133
#define LABEL_32_109 135
#define LABEL_32_92 137
#define LABEL_32_111 139
#define LABEL_32_95 141
#define TAG_32_96 69
#define LABEL_32_97 143
#define TAG_32_98 70
#define LABEL_32_99 145
#define LABEL_32_100 147
#define TAG_32_101 72
#define LABEL_32_103 149
#define TAG_32_104 73
#define LABEL_32_106 151
#define LABEL_32_110 153
#define LABEL_32_112 155
#define TAG_32_113 76
#define LABEL_32_114 157
#define TAG_32_115 77
#define LABEL_32_116 159
#define TAG_32_117 78
#define LABEL_32_119 161
#define TAG_32_120 79
#define LABEL_32_122 163
#define LABEL_32_123 165
#define LABEL_32_125 167
#define LABEL_32_142 169
#define LABEL_32_126 171
#define TAG_32_127 84
#define LABEL_32_128 173
#define TAG_32_129 85
#define LABEL_32_130 175
#define TAG_32_131 86
#define LABEL_32_139 177
#define LABEL_32_138 179
#define LABEL_32_137 181
#define LABEL_32_134 183
#define LABEL_32_135 185
#define LABEL_32_133 187
#define LABEL_32_132 189
#define LABEL_32_141 191
#define LABEL_32_143 193
#define TAG_32_144 95
#define LABEL_32_145 195
#define TAG_32_146 96
#define LABEL_32_147 197
#define LABEL_32_148 199
#define LABEL_32_152 201
#define LABEL_32_151 203
#define LABEL_32_150 205
#define LABEL_32_149 207
#define LABEL_32_153 209
#define LABEL_32_156 211
#define LABEL_32_157 213
#define LABEL_32_158 215
#define LABEL_32_160 217
#define LABEL_32_161 219
#define LABEL_32_162 221
#define LABEL_32_163 223
#define LABEL_32_164 225
#define LABEL_32_165 227
#define LABEL_32_167 229
#define LABEL_32_169 231
#define LABEL_32_170 233
#define LABEL_32_172 235
#define LABEL_32_173 237
#define LABEL_32_174 239
#define LABEL_32_176 241
#define LABEL_32_177 243
#define LABEL_32_178 245
#define LABEL_32_179 247
#define LABEL_32_180 249
#define LABEL_32_181 251
#define LABEL_32_182 253
#define LABEL_32_183 255
#define LABEL_32_184 257
#define LABEL_32_185 259
#define LABEL_32_186 261
#define LABEL_32_187 263
#define LABEL_32_188 265
#define LABEL_32_189 267
#define LABEL_32_190 269
#define LABEL_32_191 271
#define LABEL_32_194 273
#define LABEL_32_192 275
#define LABEL_32_195 277
#define LABEL_32_197 279
#define LABEL_32_193 281
#define LABEL_32_196 283
#define LABEL_32_201 285
#define LABEL_32_202 287
#define LABEL_32_198 289
#define LABEL_32_199 291
#define LABEL_32_206 293
#define LABEL_32_208 295
#define LABEL_32_200 297
#define LABEL_32_203 299
#define LABEL_32_204 301
#define LABEL_32_205 303
#define LABEL_32_207 305
#define LABEL_32_215 307
#define LABEL_32_209 309
#define LABEL_32_210 311
#define TAG_32_211 154
#define LABEL_32_213 313
#define LABEL_32_219 315
#define LABEL_32_221 317
#define LABEL_32_214 319
#define LABEL_32_216 321
#define LABEL_32_217 323
#define LABEL_32_218 325
#define LABEL_32_220 327
#define LABEL_32_226 329
#define LABEL_32_222 331
#define LABEL_32_223 333
#define LABEL_32_224 335
#define LABEL_32_230 337
#define LABEL_32_233 339
#define LABEL_32_225 341
#define LABEL_32_227 343
#define LABEL_32_228 345
#define LABEL_32_229 347
#define LABEL_32_231 349
#define LABEL_32_239 351
#define LABEL_32_232 353
#define LABEL_32_234 355
#define LABEL_32_235 357
#define LABEL_32_237 359
#define LABEL_32_245 361
#define LABEL_32_248 363
#define LABEL_32_238 365
#define LABEL_32_240 367
#define TAG_32_241 182
#define LABEL_32_242 369
#define LABEL_32_243 371
#define LABEL_32_244 373
#define LABEL_32_246 375
#define LABEL_32_251 377
#define LABEL_32_247 379
#define LABEL_32_249 381
#define LABEL_32_250 383
#define LABEL_32_252 385
#define LABEL_32_262 387
#define LABEL_32_253 389
#define LABEL_32_264 391
#define LABEL_32_255 393
#define LABEL_32_256 395
#define LABEL_32_257 397
#define LABEL_32_259 399
#define LABEL_32_267 401
#define LABEL_32_258 403
#define LABEL_32_260 405
#define LABEL_32_269 407
#define LABEL_32_271 409
#define LABEL_32_261 411
#define LABEL_32_263 413
#define LABEL_32_265 415
#define LABEL_32_266 417
#define LABEL_32_268 419
#define LABEL_32_270 421
#define LABEL_32_278 423
#define LABEL_32_272 425
#define LABEL_32_273 427
#define TAG_32_274 212
#define LABEL_32_275 429
#define LABEL_32_276 431
#define LABEL_32_282 433
#define LABEL_32_277 435
#define LABEL_32_279 437
#define LABEL_32_280 439
#define LABEL_32_281 441
#define LABEL_32_283 443
#define LABEL_32_288 445
#define LABEL_32_284 447
#define LABEL_32_286 449
#define LABEL_32_287 451
#define LABEL_32_290 453
#define LABEL_32_291 455
#define LABEL_32_292 457
#define LABEL_32_293 459
#define TAG_32_294 228
#define LABEL_32_295 461
#define LABEL_32_300 463
#define LABEL_32_296 465
#define LABEL_32_297 467
#define LABEL_32_298 469
#define LABEL_32_299 471
#define LABEL_32_304 473
#define LABEL_32_307 475
#define LABEL_32_301 477
#define LABEL_32_309 479
#define LABEL_32_302 481
#define LABEL_32_310 483
#define LABEL_32_303 485
#define LABEL_32_313 487
#define LABEL_32_314 489
#define LABEL_32_316 491
#define LABEL_32_317 493
#define LABEL_32_319 495
#define LABEL_32_305 497
#define LABEL_32_322 499
#define LABEL_32_324 501
#define LABEL_32_306 503
#define LABEL_32_308 505
#define LABEL_32_311 507
#define LABEL_32_312 509
#define LABEL_32_320 511
#define LABEL_32_315 513
#define LABEL_32_323 515
#define LABEL_32_331 517
#define LABEL_32_332 519
#define LABEL_32_325 521
#define LABEL_32_326 523
#define LABEL_32_336 525
#define LABEL_32_337 527
#define LABEL_32_327 529
#define LABEL_32_338 531
#define LABEL_32_328 533
#define LABEL_32_329 535
#define LABEL_32_330 537
#define LABEL_32_342 539
#define LABEL_32_344 541
#define LABEL_32_333 543
#define LABEL_32_334 545
#define LABEL_32_335 547
#define LABEL_32_339 549
#define LABEL_32_347 551
#define LABEL_32_348 553
#define LABEL_32_341 555
#define LABEL_32_349 557
#define LABEL_32_350 559
#define LABEL_32_351 561
#define LABEL_32_343 563
#define LABEL_32_359 565
#define LABEL_32_345 567
#define TAG_32_346 282
#define LABEL_32_352 569
#define TAG_32_353 283
#define LABEL_32_354 571
#define LABEL_32_357 573
#define LABEL_32_363 575
#define LABEL_32_365 577
#define LABEL_32_358 579
#define LABEL_32_360 581
#define LABEL_32_362 583
#define LABEL_32_361 585
#define LABEL_32_369 587
#define LABEL_32_364 589
#define LABEL_32_377 591
#define LABEL_32_366 593
#define LABEL_32_367 595
#define LABEL_32_374 597
#define LABEL_32_370 599
#define TAG_32_371 298
#define LABEL_32_372 601
#define LABEL_32_375 603
#define LABEL_32_384 605
#define LABEL_32_386 607
#define LABEL_32_376 609
#define LABEL_32_378 611
#define LABEL_32_379 613
#define LABEL_32_380 615
#define LABEL_32_383 617
#define LABEL_32_382 619
#define LABEL_32_385 621
#define LABEL_32_390 623
#define LABEL_32_387 625
#define LABEL_32_388 627
#define LABEL_32_389 629
#define LABEL_32_394 631
#define LABEL_32_397 633
#define LABEL_32_391 635
#define LABEL_32_392 637
#define LABEL_32_393 639
#define LABEL_32_395 641
#define LABEL_32_400 643
#define LABEL_32_396 645
#define LABEL_32_398 647
#define LABEL_32_403 649
#define LABEL_32_406 651
#define LABEL_32_399 653
#define LABEL_32_401 655
#define TAG_32_402 326
#define LABEL_32_404 657
#define LABEL_32_411 659
#define LABEL_32_405 661
#define LABEL_32_407 663
#define LABEL_32_408 665
#define LABEL_32_409 667
#define LABEL_32_419 669
#define LABEL_32_410 671
#define LABEL_32_412 673
#define TAG_32_413 335
#define LABEL_32_414 675
#define LABEL_32_415 677
#define LABEL_32_416 679
#define LABEL_32_417 681
#define LABEL_32_426 683
#define LABEL_32_418 685
#define LABEL_32_420 687
#define TAG_32_421 342
#define LABEL_32_422 689
#define LABEL_32_423 691
#define LABEL_32_424 693
#define LABEL_32_432 695
#define LABEL_32_435 697
#define LABEL_32_425 699
#define LABEL_32_427 701
#define TAG_32_428 349
#define LABEL_32_429 703
#define LABEL_32_430 705
#define LABEL_32_431 707
#define LABEL_32_433 709
#define LABEL_32_443 711
#define LABEL_32_434 713
#define LABEL_32_436 715
#define LABEL_32_437 717
#define LABEL_32_438 719
#define LABEL_32_439 721
#define LABEL_32_440 723
#define LABEL_32_441 725
#define LABEL_32_450 727
#define LABEL_32_452 729
#define LABEL_32_442 731
#define LABEL_32_444 733
#define TAG_32_445 365
#define LABEL_32_446 735
#define LABEL_32_447 737
#define LABEL_32_448 739
#define LABEL_32_449 741
#define LABEL_32_451 743
#define LABEL_32_460 745
#define LABEL_32_462 747
#define LABEL_32_453 749
#define LABEL_32_454 751
#define LABEL_32_455 753
#define LABEL_32_456 755
#define LABEL_32_457 757
#define TAG_32_458 377
#define LABEL_32_461 759
#define LABEL_32_468 761
#define LABEL_32_463 763
#define LABEL_32_464 765
#define LABEL_32_465 767
#define LABEL_32_466 769
#define LABEL_32_472 771
#define LABEL_32_473 773
#define LABEL_32_474 775
#define LABEL_32_475 777
#define LABEL_32_476 779
#define LABEL_32_478 781
#define LABEL_32_479 783
#define LABEL_32_467 785
#define LABEL_32_484 787
#define LABEL_32_469 789
#define LABEL_32_471 791
#define LABEL_32_481 793
#define LABEL_32_483 795
#define LABEL_32_488 797
#define LABEL_32_485 799
#define LABEL_32_486 801
#define LABEL_32_487 803
#define LABEL_32_490 805
#define LABEL_32_489 807
#define LABEL_32_492 809
#define LABEL_32_491 811
#define LABEL_32_494 813
#define LABEL_32_493 815
#define LABEL_32_496 817
#define LABEL_32_495 819
#define LABEL_32_498 821
#define LABEL_32_497 823
#define LABEL_32_500 825
#define LABEL_32_499 827
#define LABEL_32_503 829
#define LABEL_32_504 831
#define LABEL_32_501 833
#define TAG_32_502 415
#define LABEL_32_505 835
#define TAG_32_506 416
#define LABEL_32_507 837
#define LABEL_32_512 839
#define LABEL_32_510 841
#define LABEL_32_511 843
#define LABEL_32_508 845
#define LABEL_32_517 847
#define LABEL_32_514 849
#define LABEL_32_519 851
#define LABEL_32_516 853
#define LABEL_32_520 855
#define LABEL_32_521 857
#define LABEL_32_522 859
#define LABEL_32_523 861
#define LABEL_32_525 863
#define LABEL_32_526 865
#define LABEL_32_524 867
#define ENVIRONMENT_LABEL_32_3 1227
#define DEBUGGING_LABEL_32_2 1226
#define OBJECT_32_175 1225
#define OBJECT_32_174 1224
#define OBJECT_32_173 1223
#define OBJECT_32_172 1222
#define OBJECT_32_171 1221
#define OBJECT_32_170 1220
#define OBJECT_32_169 1219
#define OBJECT_32_168 1218
#define OBJECT_32_167 1217
#define OBJECT_32_166 1216
#define OBJECT_32_165 1215
#define OBJECT_32_164 1214
#define OBJECT_32_163 1213
#define OBJECT_32_162 1212
#define OBJECT_32_161 1211
#define OBJECT_32_160 1210
#define OBJECT_32_159 1209
#define OBJECT_32_158 1208
#define OBJECT_32_157 1207
#define OBJECT_32_156 1206
#define OBJECT_32_155 1205
#define OBJECT_32_154 1204
#define OBJECT_32_153 1203
#define OBJECT_32_152 1202
#define OBJECT_32_151 1201
#define OBJECT_32_150 1200
#define OBJECT_32_149 1199
#define OBJECT_32_148 1198
#define OBJECT_32_147 1197
#define OBJECT_32_146 1196
#define OBJECT_32_145 1195
#define OBJECT_32_144 1194
#define OBJECT_32_143 1193
#define OBJECT_32_142 1192
#define OBJECT_32_141 1191
#define OBJECT_32_140 1190
#define OBJECT_32_139 1189
#define OBJECT_32_138 1188
#define OBJECT_32_137 1187
#define OBJECT_32_136 1186
#define OBJECT_32_135 1185
#define OBJECT_32_134 1184
#define OBJECT_32_133 1183
#define OBJECT_32_132 1182
#define OBJECT_32_131 1181
#define OBJECT_32_130 1180
#define OBJECT_32_129 1179
#define OBJECT_32_128 1178
#define OBJECT_32_127 1177
#define OBJECT_32_126 1176
#define OBJECT_32_125 1175
#define OBJECT_32_124 1174
#define OBJECT_32_123 1173
#define OBJECT_32_122 1172
#define OBJECT_32_121 1171
#define OBJECT_32_120 1170
#define OBJECT_32_119 1169
#define OBJECT_32_118 1168
#define OBJECT_32_117 1167
#define OBJECT_32_116 1166
#define OBJECT_32_115 1165
#define OBJECT_32_114 1164
#define OBJECT_32_113 1163
#define OBJECT_32_112 1162
#define OBJECT_32_111 1161
#define OBJECT_32_110 1160
#define OBJECT_32_109 1159
#define OBJECT_32_108 1158
#define OBJECT_32_107 1157
#define OBJECT_32_106 1156
#define OBJECT_32_105 1155
#define OBJECT_32_104 1154
#define OBJECT_32_103 1153
#define OBJECT_32_102 1152
#define OBJECT_32_101 1151
#define OBJECT_32_100 1150
#define OBJECT_32_99 1149
#define OBJECT_32_98 1148
#define OBJECT_32_97 1147
#define OBJECT_32_96 1146
#define OBJECT_32_95 1145
#define OBJECT_32_94 1144
#define OBJECT_32_93 1143
#define OBJECT_32_92 1142
#define OBJECT_32_91 1141
#define OBJECT_32_90 1140
#define OBJECT_32_89 1139
#define OBJECT_32_88 1138
#define OBJECT_32_87 1137
#define OBJECT_32_86 1136
#define OBJECT_32_85 1135
#define OBJECT_32_84 1134
#define OBJECT_32_83 1133
#define OBJECT_32_82 1132
#define OBJECT_32_81 1131
#define OBJECT_32_80 1130
#define OBJECT_32_79 1129
#define OBJECT_32_78 1128
#define OBJECT_32_77 1127
#define OBJECT_32_76 1126
#define OBJECT_32_75 1125
#define OBJECT_32_74 1124
#define OBJECT_32_73 1123
#define OBJECT_32_72 1122
#define OBJECT_32_71 1121
#define OBJECT_32_70 1120
#define OBJECT_32_69 1119
#define OBJECT_32_68 1118
#define OBJECT_32_67 1117
#define OBJECT_32_66 1116
#define OBJECT_32_65 1115
#define OBJECT_32_64 1114
#define OBJECT_32_63 1113
#define OBJECT_32_62 1112
#define OBJECT_32_61 1111
#define OBJECT_32_60 1110
#define OBJECT_32_59 1109
#define OBJECT_32_58 1108
#define OBJECT_32_57 1107
#define OBJECT_32_56 1106
#define OBJECT_32_55 1105
#define OBJECT_32_54 1104
#define OBJECT_32_53 1103
#define OBJECT_32_52 1102
#define OBJECT_32_51 1101
#define OBJECT_32_50 1100
#define OBJECT_32_49 1099
#define OBJECT_32_48 1098
#define OBJECT_32_47 1097
#define OBJECT_32_46 1096
#define OBJECT_32_45 1095
#define OBJECT_32_44 1094
#define OBJECT_32_43 1093
#define OBJECT_32_42 1092
#define OBJECT_32_41 1091
#define OBJECT_32_40 1090
#define OBJECT_32_39 1089
#define OBJECT_32_38 1088
#define OBJECT_32_37 1087
#define OBJECT_32_36 1086
#define OBJECT_32_35 1085
#define OBJECT_32_34 1084
#define OBJECT_32_33 1083
#define OBJECT_32_32 1082
#define OBJECT_32_31 1081
#define OBJECT_32_30 1080
#define OBJECT_32_29 1079
#define OBJECT_32_28 1078
#define OBJECT_32_27 1077
#define OBJECT_32_26 1076
#define OBJECT_32_25 1075
#define OBJECT_32_24 1074
#define OBJECT_32_23 1073
#define OBJECT_32_22 1072
#define OBJECT_32_21 1071
#define OBJECT_32_20 1070
#define OBJECT_32_19 1069
#define OBJECT_32_18 1068
#define OBJECT_32_17 1067
#define OBJECT_32_16 1066
#define OBJECT_32_15 1065
#define OBJECT_32_14 1064
#define OBJECT_32_13 1063
#define OBJECT_32_12 1062
#define OBJECT_32_11 1061
#define OBJECT_32_10 1060
#define OBJECT_32_9 1059
#define OBJECT_32_8 1058
#define OBJECT_32_7 1057
#define OBJECT_32_6 1056
#define OBJECT_32_5 1055
#define OBJECT_32_4 1054
#define OBJECT_32_3 1053
#define OBJECT_32_2 1052
#define OBJECT_32_1 1051
#define OBJECT_32_0 1050
#define EXECUTE_CACHE_32_518 869
#define EXECUTE_CACHE_32_515 871
#define EXECUTE_CACHE_32_513 873
#define EXECUTE_CACHE_32_509 875
#define EXECUTE_CACHE_32_482 877
#define EXECUTE_CACHE_32_480 879
#define EXECUTE_CACHE_32_477 881
#define EXECUTE_CACHE_32_470 883
#define EXECUTE_CACHE_32_459 885
#define EXECUTE_CACHE_32_381 887
#define EXECUTE_CACHE_32_373 889
#define EXECUTE_CACHE_32_368 891
#define EXECUTE_CACHE_32_356 893
#define EXECUTE_CACHE_32_355 895
#define EXECUTE_CACHE_32_340 897
#define EXECUTE_CACHE_32_321 899
#define EXECUTE_CACHE_32_318 901
#define EXECUTE_CACHE_32_289 903
#define EXECUTE_CACHE_32_254 905
#define EXECUTE_CACHE_32_236 907
#define EXECUTE_CACHE_32_212 909
#define EXECUTE_CACHE_32_175 911
#define EXECUTE_CACHE_32_171 913
#define EXECUTE_CACHE_32_168 915
#define EXECUTE_CACHE_32_166 917
#define EXECUTE_CACHE_32_159 919
#define EXECUTE_CACHE_32_155 921
#define EXECUTE_CACHE_32_154 923
#define EXECUTE_CACHE_32_140 925
#define EXECUTE_CACHE_32_136 927
#define EXECUTE_CACHE_32_124 929
#define EXECUTE_CACHE_32_121 931
#define EXECUTE_CACHE_32_118 933
#define EXECUTE_CACHE_32_107 935
#define EXECUTE_CACHE_32_102 937
#define EXECUTE_CACHE_32_94 939
#define EXECUTE_CACHE_32_76 941
#define EXECUTE_CACHE_32_70 943
#define EXECUTE_CACHE_32_69 945
#define EXECUTE_CACHE_32_67 947
#define EXECUTE_CACHE_32_60 949
#define EXECUTE_CACHE_32_56 951
#define EXECUTE_CACHE_32_54 953
#define EXECUTE_CACHE_32_48 955
#define EXECUTE_CACHE_32_45 957
#define EXECUTE_CACHE_32_44 959
#define EXECUTE_CACHE_32_41 961
#define EXECUTE_CACHE_32_33 963
#define EXECUTE_CACHE_32_285 965
#define EXECUTE_CACHE_32_30 967
#define EXECUTE_CACHE_32_28 969
#define EXECUTE_CACHE_32_24 971
#define EXECUTE_CACHE_32_22 973
#define EXECUTE_CACHE_32_17 975
#define EXECUTE_CACHE_32_6 977
#define FREE_REFERENCE_32_41 980
#define FREE_REFERENCE_32_40 981
#define FREE_REFERENCE_32_39 982
#define FREE_REFERENCE_32_38 983
#define FREE_REFERENCE_32_37 984
#define FREE_REFERENCE_32_36 985
#define FREE_REFERENCE_32_35 986
#define FREE_REFERENCE_32_34 987
#define FREE_REFERENCE_32_33 988
#define FREE_REFERENCE_32_32 989
#define FREE_REFERENCE_32_31 990
#define FREE_REFERENCE_32_30 991
#define FREE_REFERENCE_32_29 992
#define FREE_REFERENCE_32_28 993
#define FREE_REFERENCE_32_27 994
#define FREE_REFERENCE_32_26 995
#define FREE_REFERENCE_32_25 996
#define FREE_REFERENCE_32_24 997
#define FREE_REFERENCE_32_23 998
#define FREE_REFERENCE_32_22 999
#define FREE_REFERENCE_32_21 1000
#define FREE_REFERENCE_32_20 1001
#define FREE_REFERENCE_32_19 1002
#define FREE_REFERENCE_32_18 1003
#define FREE_REFERENCE_32_17 1004
#define FREE_REFERENCE_32_16 1005
#define FREE_REFERENCE_32_15 1006
#define FREE_REFERENCE_32_14 1007
#define FREE_REFERENCE_32_13 1008
#define FREE_REFERENCE_32_12 1009
#define FREE_REFERENCE_32_11 1010
#define FREE_REFERENCE_32_10 1011
#define FREE_REFERENCE_32_9 1012
#define FREE_REFERENCE_32_8 1013
#define FREE_REFERENCE_32_7 1014
#define FREE_REFERENCE_32_6 1015
#define FREE_REFERENCE_32_5 1016
#define FREE_REFERENCE_32_4 1017
#define FREE_REFERENCE_32_3 1018
#define FREE_REFERENCE_32_2 1019
#define FREE_REFERENCE_32_1 1020
#define FREE_REFERENCE_32_0 1021
#define FREE_ASSIGNMENT_32_26 1023
#define FREE_ASSIGNMENT_32_25 1024
#define FREE_ASSIGNMENT_32_24 1025
#define FREE_ASSIGNMENT_32_23 1026
#define FREE_ASSIGNMENT_32_22 1027
#define FREE_ASSIGNMENT_32_21 1028
#define FREE_ASSIGNMENT_32_20 1029
#define FREE_ASSIGNMENT_32_19 1030
#define FREE_ASSIGNMENT_32_18 1031
#define FREE_ASSIGNMENT_32_17 1032
#define FREE_ASSIGNMENT_32_16 1033
#define FREE_ASSIGNMENT_32_15 1034
#define FREE_ASSIGNMENT_32_14 1035
#define FREE_ASSIGNMENT_32_13 1036
#define FREE_ASSIGNMENT_32_12 1037
#define FREE_ASSIGNMENT_32_11 1038
#define FREE_ASSIGNMENT_32_10 1039
#define FREE_ASSIGNMENT_32_9 1040
#define FREE_ASSIGNMENT_32_8 1041
#define FREE_ASSIGNMENT_32_7 1042
#define FREE_ASSIGNMENT_32_6 1043
#define FREE_ASSIGNMENT_32_5 1044
#define FREE_ASSIGNMENT_32_4 1045
#define FREE_ASSIGNMENT_32_3 1046
#define FREE_ASSIGNMENT_32_2 1047
#define FREE_ASSIGNMENT_32_1 1048
#define FREE_ASSIGNMENT_32_0 1049
#define FREE_REFERENCES_LABEL_32_0 868
#define NUMBER_OF_LINKER_SECTIONS_32_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uerror_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd53;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd82;
  machine_word Wrd45;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd62;
  machine_word Wrd36;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto initialize_packageB_477;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_479;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_480;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_32_11);
      goto label_481;

    case 7:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_32_13);
      goto label_482;

    case 9:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_32_18);
      goto label_483;

    case 11:
      current_block = (Rpc - LABEL_32_21);
      goto label_484;

    case 12:
      current_block = (Rpc - LABEL_32_15);
      goto lambda_7;

    case 13:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_32_19);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_32_25);
      goto label_485;

    case 16:
      current_block = (Rpc - LABEL_32_27);
      goto label_486;

    case 17:
      current_block = (Rpc - LABEL_32_20);
      goto lambda_12;

    case 18:
      current_block = (Rpc - LABEL_32_23);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_32_36);
      goto label_487;

    case 21:
      current_block = (Rpc - LABEL_32_37);
      goto label_488;

    case 22:
      current_block = (Rpc - LABEL_32_29);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_32_31);
      goto lambda_590;

    case 24:
      current_block = (Rpc - LABEL_32_34);
      goto lambda_591;

    case 25:
      current_block = (Rpc - LABEL_32_47);
      goto label_489;

    case 26:
      current_block = (Rpc - LABEL_32_38);
      goto continuation_36;

    case 27:
      current_block = (Rpc - LABEL_32_51);
      goto continuation_33;

    case 28:
      current_block = (Rpc - LABEL_32_39);
      goto lambda_592;

    case 29:
      current_block = (Rpc - LABEL_32_52);
      goto label_491;

    case 30:
      current_block = (Rpc - LABEL_32_55);
      goto label_490;

    case 31:
      current_block = (Rpc - LABEL_32_42);
      goto continuation_11;

    case 32:
      current_block = (Rpc - LABEL_32_43);
      goto continuation_10;

    case 33:
      current_block = (Rpc - LABEL_32_57);
      goto lambda_20;

    case 34:
      current_block = (Rpc - LABEL_32_46);
      goto continuation_24;

    case 35:
      current_block = (Rpc - LABEL_32_61);
      goto label_492;

    case 36:
      current_block = (Rpc - LABEL_32_49);
      goto continuation_38;

    case 37:
      current_block = (Rpc - LABEL_32_64);
      goto label_493;

    case 38:
      current_block = (Rpc - LABEL_32_50);
      goto continuation_37;

    case 39:
      current_block = (Rpc - LABEL_32_65);
      goto label_494;

    case 40:
      current_block = (Rpc - LABEL_32_53);
      goto continuation_32;

    case 41:
      current_block = (Rpc - LABEL_32_68);
      goto label_495;

    case 42:
      current_block = (Rpc - LABEL_32_59);
      goto continuation_16;

    case 43:
      current_block = (Rpc - LABEL_32_58);
      goto continuation_17;

    case 44:
      current_block = (Rpc - LABEL_32_62);
      goto continuation_57;

    case 45:
      current_block = (Rpc - LABEL_32_73);
      goto label_496;

    case 46:
      current_block = (Rpc - LABEL_32_63);
      goto continuation_48;

    case 47:
      current_block = (Rpc - LABEL_32_66);
      goto continuation_39;

    case 48:
      current_block = (Rpc - LABEL_32_77);
      goto label_497;

    case 49:
      current_block = (Rpc - LABEL_32_71);
      goto continuation_66;

    case 50:
      current_block = (Rpc - LABEL_32_81);
      goto label_498;

    case 51:
      current_block = (Rpc - LABEL_32_72);
      goto continuation_58;

    case 52:
      current_block = (Rpc - LABEL_32_74);
      goto lambda_594;

    case 53:
      current_block = (Rpc - LABEL_32_78);
      goto continuation_41;

    case 54:
      current_block = (Rpc - LABEL_32_89);
      goto label_500;

    case 55:
      current_block = (Rpc - LABEL_32_90);
      goto label_499;

    case 56:
      current_block = (Rpc - LABEL_32_79);
      goto continuation_76;

    case 57:
      current_block = (Rpc - LABEL_32_93);
      goto label_501;

    case 58:
      current_block = (Rpc - LABEL_32_80);
      goto continuation_67;

    case 59:
      current_block = (Rpc - LABEL_32_82);
      goto lambda_595;

    case 60:
      current_block = (Rpc - LABEL_32_84);
      goto lambda_596;

    case 61:
      current_block = (Rpc - LABEL_32_86);
      goto lambda_597;

    case 62:
      current_block = (Rpc - LABEL_32_105);
      goto signal_variable_error_442;

    case 63:
      current_block = (Rpc - LABEL_32_88);
      goto lambda_43;

    case 64:
      current_block = (Rpc - LABEL_32_108);
      goto label_502;

    case 65:
      current_block = (Rpc - LABEL_32_91);
      goto continuation_45;

    case 66:
      current_block = (Rpc - LABEL_32_109);
      goto label_503;

    case 67:
      current_block = (Rpc - LABEL_32_92);
      goto continuation_77;

    case 68:
      current_block = (Rpc - LABEL_32_111);
      goto label_504;

    case 69:
      current_block = (Rpc - LABEL_32_95);
      goto lambda_598;

    case 70:
      current_block = (Rpc - LABEL_32_97);
      goto lambda_599;

    case 71:
      current_block = (Rpc - LABEL_32_99);
      goto lambda_63;

    case 72:
      current_block = (Rpc - LABEL_32_100);
      goto lambda_600;

    case 73:
      current_block = (Rpc - LABEL_32_103);
      goto lambda_601;

    case 74:
      current_block = (Rpc - LABEL_32_106);
      goto continuation_397;

    case 75:
      current_block = (Rpc - LABEL_32_110);
      goto continuation_78;

    case 76:
      current_block = (Rpc - LABEL_32_112);
      goto lambda_604;

    case 77:
      current_block = (Rpc - LABEL_32_114);
      goto lambda_605;

    case 78:
      current_block = (Rpc - LABEL_32_116);
      goto lambda_606;

    case 79:
      current_block = (Rpc - LABEL_32_119);
      goto lambda_608;

    case 80:
      current_block = (Rpc - LABEL_32_122);
      goto continuation_399;

    case 81:
      current_block = (Rpc - LABEL_32_123);
      goto continuation_398;

    case 82:
      current_block = (Rpc - LABEL_32_125);
      goto continuation_79;

    case 83:
      current_block = (Rpc - LABEL_32_142);
      goto define_arg_error_449;

    case 84:
      current_block = (Rpc - LABEL_32_126);
      goto lambda_609;

    case 85:
      current_block = (Rpc - LABEL_32_128);
      goto lambda_610;

    case 86:
      current_block = (Rpc - LABEL_32_130);
      goto lambda_611;

    case 87:
      current_block = (Rpc - LABEL_32_139);
      goto continuation_410;

    case 88:
      current_block = (Rpc - LABEL_32_138);
      goto continuation_413;

    case 89:
      current_block = (Rpc - LABEL_32_137);
      goto continuation_414;

    case 90:
      current_block = (Rpc - LABEL_32_134);
      goto continuation_431;

    case 91:
      current_block = (Rpc - LABEL_32_135);
      goto continuation_430;

    case 92:
      current_block = (Rpc - LABEL_32_133);
      goto continuation_432;

    case 93:
      current_block = (Rpc - LABEL_32_132);
      goto continuation_435;

    case 94:
      current_block = (Rpc - LABEL_32_141);
      goto continuation_80;

    case 95:
      current_block = (Rpc - LABEL_32_143);
      goto lambda_613;

    case 96:
      current_block = (Rpc - LABEL_32_145);
      goto lambda_614;

    case 97:
      current_block = (Rpc - LABEL_32_147);
      goto continuation_411;

    case 98:
      current_block = (Rpc - LABEL_32_148);
      goto continuation_412;

    case 99:
      current_block = (Rpc - LABEL_32_152);
      goto continuation_420;

    case 100:
      current_block = (Rpc - LABEL_32_151);
      goto continuation_422;

    case 101:
      current_block = (Rpc - LABEL_32_150);
      goto continuation_424;

    case 102:
      current_block = (Rpc - LABEL_32_149);
      goto continuation_427;

    case 103:
      current_block = (Rpc - LABEL_32_153);
      goto continuation_429;

    case 104:
      current_block = (Rpc - LABEL_32_156);
      goto continuation_434;

    case 105:
      current_block = (Rpc - LABEL_32_157);
      goto continuation_433;

    case 106:
      current_block = (Rpc - LABEL_32_158);
      goto continuation_436;

    case 107:
      current_block = (Rpc - LABEL_32_160);
      goto continuation_81;

    case 108:
      current_block = (Rpc - LABEL_32_161);
      goto continuation_443;

    case 109:
      current_block = (Rpc - LABEL_32_162);
      goto continuation_421;

    case 110:
      current_block = (Rpc - LABEL_32_163);
      goto continuation_423;

    case 111:
      current_block = (Rpc - LABEL_32_164);
      goto continuation_425;

    case 112:
      current_block = (Rpc - LABEL_32_165);
      goto continuation_426;

    case 113:
      current_block = (Rpc - LABEL_32_167);
      goto continuation_438;

    case 114:
      current_block = (Rpc - LABEL_32_169);
      goto continuation_82;

    case 115:
      current_block = (Rpc - LABEL_32_170);
      goto continuation_444;

    case 116:
      current_block = (Rpc - LABEL_32_172);
      goto continuation_437;

    case 117:
      current_block = (Rpc - LABEL_32_173);
      goto continuation_83;

    case 118:
      current_block = (Rpc - LABEL_32_174);
      goto continuation_446;

    case 119:
      current_block = (Rpc - LABEL_32_176);
      goto continuation_84;

    case 120:
      current_block = (Rpc - LABEL_32_177);
      goto continuation_445;

    case 121:
      current_block = (Rpc - LABEL_32_178);
      goto continuation_85;

    case 122:
      current_block = (Rpc - LABEL_32_179);
      goto continuation_86;

    case 123:
      current_block = (Rpc - LABEL_32_180);
      goto continuation_87;

    case 124:
      current_block = (Rpc - LABEL_32_181);
      goto continuation_88;

    case 125:
      current_block = (Rpc - LABEL_32_182);
      goto continuation_89;

    case 126:
      current_block = (Rpc - LABEL_32_183);
      goto continuation_90;

    case 127:
      current_block = (Rpc - LABEL_32_184);
      goto continuation_91;

    case 128:
      current_block = (Rpc - LABEL_32_185);
      goto continuation_92;

    case 129:
      current_block = (Rpc - LABEL_32_186);
      goto continuation_93;

    case 130:
      current_block = (Rpc - LABEL_32_187);
      goto continuation_94;

    case 131:
      current_block = (Rpc - LABEL_32_188);
      goto continuation_95;

    case 132:
      current_block = (Rpc - LABEL_32_189);
      goto continuation_96;

    case 133:
      current_block = (Rpc - LABEL_32_190);
      goto continuation_97;

    case 134:
      current_block = (Rpc - LABEL_32_191);
      goto continuation_98;

    case 135:
      current_block = (Rpc - LABEL_32_194);
      goto label_505;

    case 136:
      current_block = (Rpc - LABEL_32_192);
      goto continuation_103;

    case 137:
      current_block = (Rpc - LABEL_32_195);
      goto label_506;

    case 138:
      current_block = (Rpc - LABEL_32_197);
      goto label_507;

    case 139:
      current_block = (Rpc - LABEL_32_193);
      goto lambda_102;

    case 140:
      current_block = (Rpc - LABEL_32_196);
      goto continuation_104;

    case 141:
      current_block = (Rpc - LABEL_32_201);
      goto label_508;

    case 142:
      current_block = (Rpc - LABEL_32_202);
      goto define_primitive_error_461;

    case 143:
      current_block = (Rpc - LABEL_32_198);
      goto continuation_99;

    case 144:
      current_block = (Rpc - LABEL_32_199);
      goto continuation_109;

    case 145:
      current_block = (Rpc - LABEL_32_206);
      goto label_509;

    case 146:
      current_block = (Rpc - LABEL_32_208);
      goto label_510;

    case 147:
      current_block = (Rpc - LABEL_32_200);
      goto lambda_108;

    case 148:
      current_block = (Rpc - LABEL_32_203);
      goto continuation_450;

    case 149:
      current_block = (Rpc - LABEL_32_204);
      goto continuation_101;

    case 150:
      current_block = (Rpc - LABEL_32_205);
      goto continuation_100;

    case 151:
      current_block = (Rpc - LABEL_32_207);
      goto continuation_110;

    case 152:
      current_block = (Rpc - LABEL_32_215);
      goto label_511;

    case 153:
      current_block = (Rpc - LABEL_32_209);
      goto continuation_105;

    case 154:
      current_block = (Rpc - LABEL_32_210);
      goto lambda_618;

    case 155:
      current_block = (Rpc - LABEL_32_213);
      goto continuation_115;

    case 156:
      current_block = (Rpc - LABEL_32_219);
      goto label_512;

    case 157:
      current_block = (Rpc - LABEL_32_221);
      goto label_513;

    case 158:
      current_block = (Rpc - LABEL_32_214);
      goto lambda_114;

    case 159:
      current_block = (Rpc - LABEL_32_216);
      goto continuation_107;

    case 160:
      current_block = (Rpc - LABEL_32_217);
      goto continuation_106;

    case 161:
      current_block = (Rpc - LABEL_32_218);
      goto continuation_452;

    case 162:
      current_block = (Rpc - LABEL_32_220);
      goto continuation_116;

    case 163:
      current_block = (Rpc - LABEL_32_226);
      goto label_514;

    case 164:
      current_block = (Rpc - LABEL_32_222);
      goto continuation_111;

    case 165:
      current_block = (Rpc - LABEL_32_223);
      goto continuation_453;

    case 166:
      current_block = (Rpc - LABEL_32_224);
      goto continuation_121;

    case 167:
      current_block = (Rpc - LABEL_32_230);
      goto label_515;

    case 168:
      current_block = (Rpc - LABEL_32_233);
      goto label_516;

    case 169:
      current_block = (Rpc - LABEL_32_225);
      goto lambda_120;

    case 170:
      current_block = (Rpc - LABEL_32_227);
      goto continuation_113;

    case 171:
      current_block = (Rpc - LABEL_32_228);
      goto continuation_112;

    case 172:
      current_block = (Rpc - LABEL_32_229);
      goto continuation_454;

    case 173:
      current_block = (Rpc - LABEL_32_231);
      goto continuation_134;

    case 174:
      current_block = (Rpc - LABEL_32_239);
      goto label_517;

    case 175:
      current_block = (Rpc - LABEL_32_232);
      goto continuation_122;

    case 176:
      current_block = (Rpc - LABEL_32_234);
      goto continuation_117;

    case 177:
      current_block = (Rpc - LABEL_32_235);
      goto continuation_455;

    case 178:
      current_block = (Rpc - LABEL_32_237);
      goto continuation_139;

    case 179:
      current_block = (Rpc - LABEL_32_245);
      goto label_518;

    case 180:
      current_block = (Rpc - LABEL_32_248);
      goto label_519;

    case 181:
      current_block = (Rpc - LABEL_32_238);
      goto lambda_138;

    case 182:
      current_block = (Rpc - LABEL_32_240);
      goto lambda_621;

    case 183:
      current_block = (Rpc - LABEL_32_242);
      goto continuation_119;

    case 184:
      current_block = (Rpc - LABEL_32_243);
      goto continuation_118;

    case 185:
      current_block = (Rpc - LABEL_32_244);
      goto continuation_456;

    case 186:
      current_block = (Rpc - LABEL_32_246);
      goto continuation_144;

    case 187:
      current_block = (Rpc - LABEL_32_251);
      goto label_520;

    case 188:
      current_block = (Rpc - LABEL_32_247);
      goto lambda_143;

    case 189:
      current_block = (Rpc - LABEL_32_249);
      goto continuation_135;

    case 190:
      current_block = (Rpc - LABEL_32_250);
      goto continuation_124;

    case 191:
      current_block = (Rpc - LABEL_32_252);
      goto continuation_164;

    case 192:
      current_block = (Rpc - LABEL_32_262);
      goto label_521;

    case 193:
      current_block = (Rpc - LABEL_32_253);
      goto continuation_146;

    case 194:
      current_block = (Rpc - LABEL_32_264);
      goto label_522;

    case 195:
      current_block = (Rpc - LABEL_32_255);
      goto continuation_140;

    case 196:
      current_block = (Rpc - LABEL_32_256);
      goto continuation_137;

    case 197:
      current_block = (Rpc - LABEL_32_257);
      goto continuation_136;

    case 198:
      current_block = (Rpc - LABEL_32_259);
      goto continuation_125;

    case 199:
      current_block = (Rpc - LABEL_32_267);
      goto label_523;

    case 200:
      current_block = (Rpc - LABEL_32_258);
      goto continuation_126;

    case 201:
      current_block = (Rpc - LABEL_32_260);
      goto continuation_169;

    case 202:
      current_block = (Rpc - LABEL_32_269);
      goto label_524;

    case 203:
      current_block = (Rpc - LABEL_32_271);
      goto label_525;

    case 204:
      current_block = (Rpc - LABEL_32_261);
      goto lambda_168;

    case 205:
      current_block = (Rpc - LABEL_32_263);
      goto continuation_145;

    case 206:
      current_block = (Rpc - LABEL_32_265);
      goto continuation_142;

    case 207:
      current_block = (Rpc - LABEL_32_266);
      goto continuation_141;

    case 208:
      current_block = (Rpc - LABEL_32_268);
      goto continuation_128;

    case 209:
      current_block = (Rpc - LABEL_32_270);
      goto continuation_170;

    case 210:
      current_block = (Rpc - LABEL_32_278);
      goto label_526;

    case 211:
      current_block = (Rpc - LABEL_32_272);
      goto continuation_165;

    case 212:
      current_block = (Rpc - LABEL_32_273);
      goto lambda_625;

    case 213:
      current_block = (Rpc - LABEL_32_275);
      goto continuation_129;

    case 214:
      current_block = (Rpc - LABEL_32_276);
      goto continuation_195;

    case 215:
      current_block = (Rpc - LABEL_32_282);
      goto label_527;

    case 216:
      current_block = (Rpc - LABEL_32_277);
      goto lambda_194;

    case 217:
      current_block = (Rpc - LABEL_32_279);
      goto continuation_167;

    case 218:
      current_block = (Rpc - LABEL_32_280);
      goto continuation_166;

    case 219:
      current_block = (Rpc - LABEL_32_281);
      goto continuation_148;

    case 220:
      current_block = (Rpc - LABEL_32_283);
      goto continuation_197;

    case 221:
      current_block = (Rpc - LABEL_32_288);
      goto label_528;

    case 222:
      current_block = (Rpc - LABEL_32_284);
      goto continuation_171;

    case 223:
      current_block = (Rpc - LABEL_32_286);
      goto continuation_149;

    case 224:
      current_block = (Rpc - LABEL_32_287);
      goto continuation_196;

    case 225:
      current_block = (Rpc - LABEL_32_290);
      goto continuation_173;

    case 226:
      current_block = (Rpc - LABEL_32_291);
      goto continuation_172;

    case 227:
      current_block = (Rpc - LABEL_32_292);
      goto continuation_150;

    case 228:
      current_block = (Rpc - LABEL_32_293);
      goto lambda_627;

    case 229:
      current_block = (Rpc - LABEL_32_295);
      goto continuation_241;

    case 230:
      current_block = (Rpc - LABEL_32_300);
      goto label_529;

    case 231:
      current_block = (Rpc - LABEL_32_296);
      goto continuation_174;

    case 232:
      current_block = (Rpc - LABEL_32_297);
      goto continuation_151;

    case 233:
      current_block = (Rpc - LABEL_32_298);
      goto continuation_199;

    case 234:
      current_block = (Rpc - LABEL_32_299);
      goto continuation_242;

    case 235:
      current_block = (Rpc - LABEL_32_304);
      goto label_530;

    case 236:
      current_block = (Rpc - LABEL_32_307);
      goto label_531;

    case 237:
      current_block = (Rpc - LABEL_32_301);
      goto continuation_176;

    case 238:
      current_block = (Rpc - LABEL_32_309);
      goto continuation_177;

    case 239:
      current_block = (Rpc - LABEL_32_302);
      goto continuation_175;

    case 240:
      current_block = (Rpc - LABEL_32_310);
      goto label_532;

    case 241:
      current_block = (Rpc - LABEL_32_303);
      goto continuation_200;

    case 242:
      current_block = (Rpc - LABEL_32_313);
      goto label_533;

    case 243:
      current_block = (Rpc - LABEL_32_314);
      goto label_534;

    case 244:
      current_block = (Rpc - LABEL_32_316);
      goto label_535;

    case 245:
      current_block = (Rpc - LABEL_32_317);
      goto label_537;

    case 246:
      current_block = (Rpc - LABEL_32_319);
      goto label_536;

    case 247:
      current_block = (Rpc - LABEL_32_305);
      goto continuation_247;

    case 248:
      current_block = (Rpc - LABEL_32_322);
      goto label_538;

    case 249:
      current_block = (Rpc - LABEL_32_324);
      goto label_539;

    case 250:
      current_block = (Rpc - LABEL_32_306);
      goto lambda_246;

    case 251:
      current_block = (Rpc - LABEL_32_308);
      goto continuation_184;

    case 252:
      current_block = (Rpc - LABEL_32_311);
      goto continuation_180;

    case 253:
      current_block = (Rpc - LABEL_32_312);
      goto continuation_181;

    case 254:
      current_block = (Rpc - LABEL_32_320);
      goto continuation_210;

    case 255:
      current_block = (Rpc - LABEL_32_315);
      goto continuation_208;

    case 256:
      current_block = (Rpc - LABEL_32_323);
      goto continuation_248;

    case 257:
      current_block = (Rpc - LABEL_32_331);
      goto label_540;

    case 258:
      current_block = (Rpc - LABEL_32_332);
      goto define_fasload_error_475;

    case 259:
      current_block = (Rpc - LABEL_32_325);
      goto continuation_243;

    case 260:
      current_block = (Rpc - LABEL_32_326);
      goto continuation_186;

    case 261:
      current_block = (Rpc - LABEL_32_336);
      goto continuation_191;

    case 262:
      current_block = (Rpc - LABEL_32_337);
      goto continuation_187;

    case 263:
      current_block = (Rpc - LABEL_32_327);
      goto continuation_185;

    case 264:
      current_block = (Rpc - LABEL_32_338);
      goto label_541;

    case 265:
      current_block = (Rpc - LABEL_32_328);
      goto continuation_182;

    case 266:
      current_block = (Rpc - LABEL_32_329);
      goto continuation_205;

    case 267:
      current_block = (Rpc - LABEL_32_330);
      goto continuation_249;

    case 268:
      current_block = (Rpc - LABEL_32_342);
      goto label_542;

    case 269:
      current_block = (Rpc - LABEL_32_344);
      goto label_543;

    case 270:
      current_block = (Rpc - LABEL_32_333);
      goto continuation_462;

    case 271:
      current_block = (Rpc - LABEL_32_334);
      goto continuation_245;

    case 272:
      current_block = (Rpc - LABEL_32_335);
      goto continuation_244;

    case 273:
      current_block = (Rpc - LABEL_32_339);
      goto continuation_192;

    case 274:
      current_block = (Rpc - LABEL_32_347);
      goto continuation_219;

    case 275:
      current_block = (Rpc - LABEL_32_348);
      goto continuation_216;

    case 276:
      current_block = (Rpc - LABEL_32_341);
      goto continuation_204;

    case 277:
      current_block = (Rpc - LABEL_32_349);
      goto label_544;

    case 278:
      current_block = (Rpc - LABEL_32_350);
      goto label_546;

    case 279:
      current_block = (Rpc - LABEL_32_351);
      goto label_545;

    case 280:
      current_block = (Rpc - LABEL_32_343);
      goto continuation_250;

    case 281:
      current_block = (Rpc - LABEL_32_359);
      goto label_547;

    case 282:
      current_block = (Rpc - LABEL_32_345);
      goto lambda_630;

    case 283:
      current_block = (Rpc - LABEL_32_352);
      goto lambda_222;

    case 284:
      current_block = (Rpc - LABEL_32_354);
      goto continuation_223;

    case 285:
      current_block = (Rpc - LABEL_32_357);
      goto continuation_255;

    case 286:
      current_block = (Rpc - LABEL_32_363);
      goto label_548;

    case 287:
      current_block = (Rpc - LABEL_32_365);
      goto label_549;

    case 288:
      current_block = (Rpc - LABEL_32_358);
      goto lambda_254;

    case 289:
      current_block = (Rpc - LABEL_32_360);
      goto continuation_464;

    case 290:
      current_block = (Rpc - LABEL_32_362);
      goto continuation_233;

    case 291:
      current_block = (Rpc - LABEL_32_361);
      goto continuation_224;

    case 292:
      current_block = (Rpc - LABEL_32_369);
      goto label_550;

    case 293:
      current_block = (Rpc - LABEL_32_364);
      goto continuation_256;

    case 294:
      current_block = (Rpc - LABEL_32_377);
      goto label_551;

    case 295:
      current_block = (Rpc - LABEL_32_366);
      goto continuation_251;

    case 296:
      current_block = (Rpc - LABEL_32_367);
      goto continuation_465;

    case 297:
      current_block = (Rpc - LABEL_32_374);
      goto continuation_228;

    case 298:
      current_block = (Rpc - LABEL_32_370);
      goto lambda_633;

    case 299:
      current_block = (Rpc - LABEL_32_372);
      goto continuation_232;

    case 300:
      current_block = (Rpc - LABEL_32_375);
      goto continuation_261;

    case 301:
      current_block = (Rpc - LABEL_32_384);
      goto label_552;

    case 302:
      current_block = (Rpc - LABEL_32_386);
      goto label_553;

    case 303:
      current_block = (Rpc - LABEL_32_376);
      goto lambda_260;

    case 304:
      current_block = (Rpc - LABEL_32_378);
      goto continuation_253;

    case 305:
      current_block = (Rpc - LABEL_32_379);
      goto continuation_252;

    case 306:
      current_block = (Rpc - LABEL_32_380);
      goto continuation_466;

    case 307:
      current_block = (Rpc - LABEL_32_383);
      goto continuation_230;

    case 308:
      current_block = (Rpc - LABEL_32_382);
      goto continuation_229;

    case 309:
      current_block = (Rpc - LABEL_32_385);
      goto continuation_262;

    case 310:
      current_block = (Rpc - LABEL_32_390);
      goto label_554;

    case 311:
      current_block = (Rpc - LABEL_32_387);
      goto continuation_257;

    case 312:
      current_block = (Rpc - LABEL_32_388);
      goto continuation_470;

    case 313:
      current_block = (Rpc - LABEL_32_389);
      goto continuation_263;

    case 314:
      current_block = (Rpc - LABEL_32_394);
      goto label_555;

    case 315:
      current_block = (Rpc - LABEL_32_397);
      goto label_556;

    case 316:
      current_block = (Rpc - LABEL_32_391);
      goto continuation_259;

    case 317:
      current_block = (Rpc - LABEL_32_392);
      goto continuation_258;

    case 318:
      current_block = (Rpc - LABEL_32_393);
      goto continuation_469;

    case 319:
      current_block = (Rpc - LABEL_32_395);
      goto continuation_276;

    case 320:
      current_block = (Rpc - LABEL_32_400);
      goto label_557;

    case 321:
      current_block = (Rpc - LABEL_32_396);
      goto continuation_264;

    case 322:
      current_block = (Rpc - LABEL_32_398);
      goto continuation_281;

    case 323:
      current_block = (Rpc - LABEL_32_403);
      goto label_558;

    case 324:
      current_block = (Rpc - LABEL_32_406);
      goto label_559;

    case 325:
      current_block = (Rpc - LABEL_32_399);
      goto lambda_280;

    case 326:
      current_block = (Rpc - LABEL_32_401);
      goto lambda_635;

    case 327:
      current_block = (Rpc - LABEL_32_404);
      goto continuation_293;

    case 328:
      current_block = (Rpc - LABEL_32_411);
      goto label_560;

    case 329:
      current_block = (Rpc - LABEL_32_405);
      goto continuation_282;

    case 330:
      current_block = (Rpc - LABEL_32_407);
      goto continuation_277;

    case 331:
      current_block = (Rpc - LABEL_32_408);
      goto continuation_266;

    case 332:
      current_block = (Rpc - LABEL_32_409);
      goto continuation_316;

    case 333:
      current_block = (Rpc - LABEL_32_419);
      goto label_561;

    case 334:
      current_block = (Rpc - LABEL_32_410);
      goto continuation_294;

    case 335:
      current_block = (Rpc - LABEL_32_412);
      goto lambda_637;

    case 336:
      current_block = (Rpc - LABEL_32_414);
      goto continuation_279;

    case 337:
      current_block = (Rpc - LABEL_32_415);
      goto continuation_278;

    case 338:
      current_block = (Rpc - LABEL_32_416);
      goto continuation_267;

    case 339:
      current_block = (Rpc - LABEL_32_417);
      goto continuation_326;

    case 340:
      current_block = (Rpc - LABEL_32_426);
      goto label_562;

    case 341:
      current_block = (Rpc - LABEL_32_418);
      goto continuation_317;

    case 342:
      current_block = (Rpc - LABEL_32_420);
      goto lambda_638;

    case 343:
      current_block = (Rpc - LABEL_32_422);
      goto continuation_284;

    case 344:
      current_block = (Rpc - LABEL_32_423);
      goto continuation_268;

    case 345:
      current_block = (Rpc - LABEL_32_424);
      goto continuation_330;

    case 346:
      current_block = (Rpc - LABEL_32_432);
      goto label_563;

    case 347:
      current_block = (Rpc - LABEL_32_435);
      goto label_564;

    case 348:
      current_block = (Rpc - LABEL_32_425);
      goto lambda_329;

    case 349:
      current_block = (Rpc - LABEL_32_427);
      goto lambda_639;

    case 350:
      current_block = (Rpc - LABEL_32_429);
      goto continuation_296;

    case 351:
      current_block = (Rpc - LABEL_32_430);
      goto continuation_285;

    case 352:
      current_block = (Rpc - LABEL_32_431);
      goto continuation_271;

    case 353:
      current_block = (Rpc - LABEL_32_433);
      goto continuation_342;

    case 354:
      current_block = (Rpc - LABEL_32_443);
      goto label_565;

    case 355:
      current_block = (Rpc - LABEL_32_434);
      goto continuation_331;

    case 356:
      current_block = (Rpc - LABEL_32_436);
      goto continuation_327;

    case 357:
      current_block = (Rpc - LABEL_32_437);
      goto continuation_319;

    case 358:
      current_block = (Rpc - LABEL_32_438);
      goto continuation_297;

    case 359:
      current_block = (Rpc - LABEL_32_439);
      goto continuation_286;

    case 360:
      current_block = (Rpc - LABEL_32_440);
      goto continuation_270;

    case 361:
      current_block = (Rpc - LABEL_32_441);
      goto continuation_350;

    case 362:
      current_block = (Rpc - LABEL_32_450);
      goto label_566;

    case 363:
      current_block = (Rpc - LABEL_32_452);
      goto label_567;

    case 364:
      current_block = (Rpc - LABEL_32_442);
      goto lambda_349;

    case 365:
      current_block = (Rpc - LABEL_32_444);
      goto lambda_641;

    case 366:
      current_block = (Rpc - LABEL_32_446);
      goto continuation_328;

    case 367:
      current_block = (Rpc - LABEL_32_447);
      goto continuation_320;

    case 368:
      current_block = (Rpc - LABEL_32_448);
      goto continuation_298;

    case 369:
      current_block = (Rpc - LABEL_32_449);
      goto continuation_287;

    case 370:
      current_block = (Rpc - LABEL_32_451);
      goto continuation_351;

    case 371:
      current_block = (Rpc - LABEL_32_460);
      goto label_568;

    case 372:
      current_block = (Rpc - LABEL_32_462);
      goto label_569;

    case 373:
      current_block = (Rpc - LABEL_32_453);
      goto continuation_343;

    case 374:
      current_block = (Rpc - LABEL_32_454);
      goto continuation_333;

    case 375:
      current_block = (Rpc - LABEL_32_455);
      goto continuation_321;

    case 376:
      current_block = (Rpc - LABEL_32_456);
      goto continuation_299;

    case 377:
      current_block = (Rpc - LABEL_32_457);
      goto lambda_643;

    case 378:
      current_block = (Rpc - LABEL_32_461);
      goto continuation_361;

    case 379:
      current_block = (Rpc - LABEL_32_468);
      goto label_570;

    case 380:
      current_block = (Rpc - LABEL_32_463);
      goto continuation_345;

    case 381:
      current_block = (Rpc - LABEL_32_464);
      goto continuation_344;

    case 382:
      current_block = (Rpc - LABEL_32_465);
      goto continuation_334;

    case 383:
      current_block = (Rpc - LABEL_32_466);
      goto continuation_322;

    case 384:
      current_block = (Rpc - LABEL_32_472);
      goto continuation_305;

    case 385:
      current_block = (Rpc - LABEL_32_473);
      goto label_575;

    case 386:
      current_block = (Rpc - LABEL_32_474);
      goto label_576;

    case 387:
      current_block = (Rpc - LABEL_32_475);
      goto continuation_303;

    case 388:
      current_block = (Rpc - LABEL_32_476);
      goto label_573;

    case 389:
      current_block = (Rpc - LABEL_32_478);
      goto loop_311;

    case 390:
      current_block = (Rpc - LABEL_32_479);
      goto label_571;

    case 391:
      current_block = (Rpc - LABEL_32_467);
      goto continuation_360;

    case 392:
      current_block = (Rpc - LABEL_32_484);
      goto label_572;

    case 393:
      current_block = (Rpc - LABEL_32_469);
      goto continuation_346;

    case 394:
      current_block = (Rpc - LABEL_32_471);
      goto continuation_335;

    case 395:
      current_block = (Rpc - LABEL_32_481);
      goto continuation_307;

    case 396:
      current_block = (Rpc - LABEL_32_483);
      goto continuation_359;

    case 397:
      current_block = (Rpc - LABEL_32_488);
      goto label_574;

    case 398:
      current_block = (Rpc - LABEL_32_485);
      goto continuation_347;

    case 399:
      current_block = (Rpc - LABEL_32_486);
      goto continuation_337;

    case 400:
      current_block = (Rpc - LABEL_32_487);
      goto continuation_358;

    case 401:
      current_block = (Rpc - LABEL_32_490);
      goto label_577;

    case 402:
      current_block = (Rpc - LABEL_32_489);
      goto continuation_357;

    case 403:
      current_block = (Rpc - LABEL_32_492);
      goto label_578;

    case 404:
      current_block = (Rpc - LABEL_32_491);
      goto continuation_356;

    case 405:
      current_block = (Rpc - LABEL_32_494);
      goto label_579;

    case 406:
      current_block = (Rpc - LABEL_32_493);
      goto continuation_355;

    case 407:
      current_block = (Rpc - LABEL_32_496);
      goto label_580;

    case 408:
      current_block = (Rpc - LABEL_32_495);
      goto continuation_354;

    case 409:
      current_block = (Rpc - LABEL_32_498);
      goto label_581;

    case 410:
      current_block = (Rpc - LABEL_32_497);
      goto continuation_353;

    case 411:
      current_block = (Rpc - LABEL_32_500);
      goto label_582;

    case 412:
      current_block = (Rpc - LABEL_32_499);
      goto continuation_352;

    case 413:
      current_block = (Rpc - LABEL_32_503);
      goto label_583;

    case 414:
      current_block = (Rpc - LABEL_32_504);
      goto label_584;

    case 415:
      current_block = (Rpc - LABEL_32_501);
      goto lambda_645;

    case 416:
      current_block = (Rpc - LABEL_32_505);
      goto lambda_646;

    case 417:
      current_block = (Rpc - LABEL_32_507);
      goto label_585;

    case 418:
      current_block = (Rpc - LABEL_32_512);
      goto continuation_366;

    case 419:
      current_block = (Rpc - LABEL_32_510);
      goto continuation_365;

    case 420:
      current_block = (Rpc - LABEL_32_511);
      goto continuation_364;

    case 421:
      current_block = (Rpc - LABEL_32_508);
      goto continuation_381;

    case 422:
      current_block = (Rpc - LABEL_32_517);
      goto continuation_370;

    case 423:
      current_block = (Rpc - LABEL_32_514);
      goto continuation_368;

    case 424:
      current_block = (Rpc - LABEL_32_519);
      goto continuation_383;

    case 425:
      current_block = (Rpc - LABEL_32_516);
      goto continuation_382;

    case 426:
      current_block = (Rpc - LABEL_32_520);
      goto continuation_384;

    case 427:
      current_block = (Rpc - LABEL_32_521);
      goto continuation_385;

    case 428:
      current_block = (Rpc - LABEL_32_522);
      goto continuation_386;

    case 429:
      current_block = (Rpc - LABEL_32_523);
      goto continuation_387;

    case 430:
      current_block = (Rpc - LABEL_32_525);
      goto continuation_390;

    case 431:
      current_block = (Rpc - LABEL_32_526);
      goto continuation_389;

    case 432:
      current_block = (Rpc - LABEL_32_524);
      goto continuation_388;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_587)
DEFLABEL (initialize_packageB_477)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_684;

DEFLABEL (label_683)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_682)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_681;

DEFLABEL (label_680)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_679)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_678;

DEFLABEL (label_677)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_676)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_675;

DEFLABEL (label_674)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_673)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_672;

DEFLABEL (label_671)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_670)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_669;
  Wrd24 = Wrd28;

DEFLABEL (label_668)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_32_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_667;

DEFLABEL (label_666)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_665)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_664;
  Wrd22 = Wrd26;

DEFLABEL (label_663)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_34])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_6]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_662;

DEFLABEL (label_661)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_660)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_7]));
  (Wrd24.Obj) = (current_block [OBJECT_32_8]);
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_659;

DEFLABEL (label_658)
  ((Wrd23.pObj) [0]) = (Wrd24.Obj);

DEFLABEL (label_657)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_39])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [3]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_32_9]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_41]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_13]), 0);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_32_50);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_656;
  Wrd5 = Wrd9;

DEFLABEL (label_655)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_66]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_67]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_32_66);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_654;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_654;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_654;
  (Wrd11.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd14.pObj) = (& ((Wrd18.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_653)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_78]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_22]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_67]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_32_78);
  (Wrd7.Obj) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_88]))));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_652;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 26))
    goto label_652;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_652;
  (Wrd18.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd21.pObj) = (& ((Wrd27.pObj) [(Wrd18.Lng)]));
  ((Wrd21.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_651)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_650;
  Wrd8 = Wrd12;

DEFLABEL (label_649)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_91]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_24]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_67]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_32_91);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_648;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_648;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd16.Lng))))
    goto label_648;
  (Wrd7.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd10.pObj) = (& ((Wrd14.pObj) [(Wrd7.Lng)]));
  ((Wrd10.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_647)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_27]), 1);

DEFLABEL (label_648)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_109]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_21]), 3);

DEFLABEL (label_503)
  goto label_647;

DEFLABEL (label_650)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_90])), (Wrd9.pObj));

DEFLABEL (label_499)
  (Wrd8.Obj) = Rvl;
  goto label_649;

DEFLABEL (label_652)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_88]))));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_89]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_21]), 3);

DEFLABEL (label_500)
  goto label_651;

DEFLABEL (label_654)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_77]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_21]), 3);

DEFLABEL (label_497)
  goto label_653;

DEFLABEL (label_656)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_65])), (Wrd6.pObj));

DEFLABEL (label_494)
  (Wrd5.Obj) = Rvl;
  goto label_655;

DEFLABEL (label_659)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_658;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_37])), (Wrd23.pObj), (Wrd24.Obj));

DEFLABEL (label_488)
  goto label_657;

DEFLABEL (label_662)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_661;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_36])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_487)
  goto label_660;

DEFLABEL (label_664)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_27])), (Wrd23.pObj));

DEFLABEL (label_486)
  (Wrd22.Obj) = Rvl;
  goto label_663;

DEFLABEL (label_667)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_666;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_485)
  goto label_665;

DEFLABEL (label_669)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_21])), (Wrd25.pObj));

DEFLABEL (label_484)
  (Wrd24.Obj) = Rvl;
  goto label_668;

DEFLABEL (label_672)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_671;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_483)
  goto label_670;

DEFLABEL (label_675)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_674;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_482)
  goto label_673;

DEFLABEL (label_678)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_677;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_481)
  goto label_676;

DEFLABEL (label_681)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_680;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_480)
  goto label_679;

DEFLABEL (label_684)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_683;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_479)
  goto label_682;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_32_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_842;
  Wrd12 = Wrd16;

DEFLABEL (label_841)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_32_63);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_75);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_74])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_32_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_840;
  Wrd12 = Wrd16;

DEFLABEL (label_839)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_32_72);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_83);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_82])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_32_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_838;
  Wrd12 = Wrd16;

DEFLABEL (label_837)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_32_80);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_96);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_95])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_32_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_836;
  Wrd8 = Wrd12;

DEFLABEL (label_835)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_94]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_32_92);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_110]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_834;
  Wrd11 = Wrd15;

DEFLABEL (label_833)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_94]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_32_110);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32_29]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_32_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_40]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_32_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_48]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_32_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_49]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_32_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_50]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_32_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_51]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_32_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_52]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_32_178);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_55]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_32_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_56]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_57]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_32_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_59]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_32_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_60]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_32_182);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_183]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_61]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_32_183);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_62]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_32_184);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_63]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_32_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_64]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_32_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_65]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_32_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_188]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_52]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_66]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_32_188);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_189]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_67]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_32_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_56]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_68]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_32_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_191]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_69]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto define_arg_error_449;

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_32_191);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_193]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_832;
  Wrd11 = Wrd15;

DEFLABEL (label_831)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_71]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_32_192);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_830;

DEFLABEL (label_829)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_828)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_196]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_827;
  Wrd21 = Wrd25;

DEFLABEL (label_826)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_72]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_primitive_error_461;

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_32_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_200]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_825;
  Wrd11 = Wrd15;

DEFLABEL (label_824)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_74]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_32_199);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_823;

DEFLABEL (label_822)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_821)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_207]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_11]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_820;
  Wrd21 = Wrd25;

DEFLABEL (label_819)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_74]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_primitive_error_461;

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_32_207);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_213]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_214]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_11]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_818;
  Wrd11 = Wrd15;

DEFLABEL (label_817)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_77]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_32_213);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_816;

DEFLABEL (label_815)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_814)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_220]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_12]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_813;
  Wrd21 = Wrd25;

DEFLABEL (label_812)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_78]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_primitive_error_461;

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_32_220);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_224]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_225]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_811;
  Wrd11 = Wrd15;

DEFLABEL (label_810)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_80]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_32_224);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_809;

DEFLABEL (label_808)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_807)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_231]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_232]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_13]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_806;
  Wrd25 = Wrd29;

DEFLABEL (label_805)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_32_232);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_241);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_240])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_80]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_32_231);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_237]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_238]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_804;
  Wrd11 = Wrd15;

DEFLABEL (label_803)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_83]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_32_237);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_802;

DEFLABEL (label_801)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_800)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_246]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_247]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_799;
  Wrd24 = Wrd28;

DEFLABEL (label_798)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_32_84]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_32_246);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_797;

DEFLABEL (label_796)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_795)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_252]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_253]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_254]));

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_32_253);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_263]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_14]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_794;
  Wrd9 = Wrd13;

DEFLABEL (label_793)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_32_263);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_274);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_273])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32_84]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_32_252);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_260]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_261]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_792;
  Wrd11 = Wrd15;

DEFLABEL (label_791)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_86]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_32_260);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_14]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_790;

DEFLABEL (label_789)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_788)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_270]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_16]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_787;
  Wrd21 = Wrd25;

DEFLABEL (label_786)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_86]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_primitive_error_461;

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_32_270);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_276]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_277]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_91]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_785;
  Wrd11 = Wrd15;

DEFLABEL (label_784)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_92]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_195)
  INTERRUPT_CHECK (27, LABEL_32_276);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_15]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_783;

DEFLABEL (label_782)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_781)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_283]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_254]));

DEFLABEL (continuation_197)
  INTERRUPT_CHECK (27, LABEL_32_283);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_287]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_17]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_780;
  Wrd9 = Wrd13;

DEFLABEL (label_779)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_289]));

DEFLABEL (continuation_196)
  INTERRUPT_CHECK (27, LABEL_32_287);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_294);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_293])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  ((Wrd14.pObj) [0]) = (Wrd6.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_295]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_14]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_41]));

DEFLABEL (continuation_241)
  INTERRUPT_CHECK (27, LABEL_32_295);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_299]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_18]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_778;
  Wrd10 = Wrd14;

DEFLABEL (label_777)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_97]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_242)
  INTERRUPT_CHECK (27, LABEL_32_299);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_16]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_776;

DEFLABEL (label_775)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_774)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_305]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_306]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_19]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_773;
  Wrd24 = Wrd28;

DEFLABEL (label_772)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_32_109]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_247)
  INTERRUPT_CHECK (27, LABEL_32_305);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_17]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_771;

DEFLABEL (label_770)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_769)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_323]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_20]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_768;
  Wrd21 = Wrd25;

DEFLABEL (label_767)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_109]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_fasload_error_475;

DEFLABEL (continuation_248)
  INTERRUPT_CHECK (27, LABEL_32_323);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_330]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_20]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_766;
  Wrd10 = Wrd14;

DEFLABEL (label_765)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_117]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_249)
  INTERRUPT_CHECK (27, LABEL_32_330);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_18]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_764;

DEFLABEL (label_763)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_762)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_343]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_21]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_761;
  Wrd21 = Wrd25;

DEFLABEL (label_760)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_123]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_fasload_error_475;

DEFLABEL (continuation_250)
  INTERRUPT_CHECK (27, LABEL_32_343);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_357]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_358]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_19]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_759;
  Wrd11 = Wrd15;

DEFLABEL (label_758)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_125]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_255)
  INTERRUPT_CHECK (27, LABEL_32_357);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_19]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_757;

DEFLABEL (label_756)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_755)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_364]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_22]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_754;
  Wrd21 = Wrd25;

DEFLABEL (label_753)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_125]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_fasload_error_475;

DEFLABEL (continuation_256)
  INTERRUPT_CHECK (27, LABEL_32_364);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_375]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_376]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_19]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_752;
  Wrd11 = Wrd15;

DEFLABEL (label_751)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_128]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_261)
  INTERRUPT_CHECK (27, LABEL_32_375);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_20]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_750;

DEFLABEL (label_749)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_748)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_385]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_23]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_747;
  Wrd21 = Wrd25;

DEFLABEL (label_746)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_32_128]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto define_fasload_error_475;

DEFLABEL (continuation_262)
  INTERRUPT_CHECK (27, LABEL_32_385);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_389]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_20]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_745;
  Wrd10 = Wrd14;

DEFLABEL (label_744)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_132]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_263)
  INTERRUPT_CHECK (27, LABEL_32_389);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_21]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_743;

DEFLABEL (label_742)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_741)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_395]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_396]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_32_118]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_24]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_740;
  Wrd25 = Wrd29;

DEFLABEL (label_739)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_264)
  INTERRUPT_CHECK (27, LABEL_32_396);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_402);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_401])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_132]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_276)
  INTERRUPT_CHECK (27, LABEL_32_395);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_398]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_399]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_134]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_25]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_738;
  Wrd11 = Wrd15;

DEFLABEL (label_737)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_135]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_281)
  INTERRUPT_CHECK (27, LABEL_32_398);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_22]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_736;

DEFLABEL (label_735)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_734)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_404]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_405]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_32_136]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_26]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_733;
  Wrd25 = Wrd29;

DEFLABEL (label_732)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_282)
  INTERRUPT_CHECK (27, LABEL_32_405);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_413);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_412])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_139]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_293)
  INTERRUPT_CHECK (27, LABEL_32_404);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_409]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_410]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_138]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_27]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_731;
  Wrd12 = Wrd16;

DEFLABEL (label_730)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_294)
  INTERRUPT_CHECK (27, LABEL_32_410);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_421);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_420])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_141]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_316)
  INTERRUPT_CHECK (27, LABEL_32_409);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_417]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_418]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_28]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_729;
  Wrd12 = Wrd16;

DEFLABEL (label_728)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_317)
  INTERRUPT_CHECK (27, LABEL_32_418);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_428);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_427])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_144]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_326)
  INTERRUPT_CHECK (27, LABEL_32_417);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_424]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_425]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_727;
  Wrd11 = Wrd15;

DEFLABEL (label_726)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_143]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_330)
  INTERRUPT_CHECK (27, LABEL_32_424);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_23]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_725;

DEFLABEL (label_724)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_723)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_433]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_434]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_32_145]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_29]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_722;
  Wrd25 = Wrd29;

DEFLABEL (label_721)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_331)
  INTERRUPT_CHECK (27, LABEL_32_434);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_445);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_444])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_143]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_342)
  INTERRUPT_CHECK (27, LABEL_32_433);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_441]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_442]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_147]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_720;
  Wrd11 = Wrd15;

DEFLABEL (label_719)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_148]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_350)
  INTERRUPT_CHECK (27, LABEL_32_441);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_24]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_718;

DEFLABEL (label_717)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_716)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_451]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_149]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_30]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_715;
  Wrd23 = Wrd27;

DEFLABEL (label_714)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_32_150]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_351)
  INTERRUPT_CHECK (27, LABEL_32_451);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_25]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_713;

DEFLABEL (label_712)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_711)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_461]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_31]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_710;
  Wrd22 = Wrd26;

DEFLABEL (label_709)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_361)
  INTERRUPT_CHECK (27, LABEL_32_461);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_467]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_32]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_708;
  Wrd9 = Wrd13;

DEFLABEL (label_707)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_360)
  INTERRUPT_CHECK (27, LABEL_32_467);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_483]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_33]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_706;
  Wrd9 = Wrd13;

DEFLABEL (label_705)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_359)
  INTERRUPT_CHECK (27, LABEL_32_483);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_487]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_34]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_704;
  Wrd9 = Wrd13;

DEFLABEL (label_703)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_358)
  INTERRUPT_CHECK (27, LABEL_32_487);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_489]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_35]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_702;
  Wrd9 = Wrd13;

DEFLABEL (label_701)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_357)
  INTERRUPT_CHECK (27, LABEL_32_489);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_491]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_36]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_700;
  Wrd9 = Wrd13;

DEFLABEL (label_699)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_356)
  INTERRUPT_CHECK (27, LABEL_32_491);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_493]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_28]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_698;
  Wrd9 = Wrd13;

DEFLABEL (label_697)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_355)
  INTERRUPT_CHECK (27, LABEL_32_493);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_495]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_37]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_696;
  Wrd9 = Wrd13;

DEFLABEL (label_695)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_354)
  INTERRUPT_CHECK (27, LABEL_32_495);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_497]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_38]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_694;
  Wrd9 = Wrd13;

DEFLABEL (label_693)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_353)
  INTERRUPT_CHECK (27, LABEL_32_497);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_499]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_39]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_692;
  Wrd9 = Wrd13;

DEFLABEL (label_691)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_352)
  INTERRUPT_CHECK (27, LABEL_32_499);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 13));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_502);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_501])));
  Rhp += 10;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd26 = Wrd7;
  (Wrd27.Obj) = (Rsp [9]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  ((Wrd26.pObj) [4]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  ((Wrd26.pObj) [5]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd26.pObj) [6]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [7]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [8]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [9]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [10]) = (Wrd11.Obj);
  ((Wrd26.pObj) [11]) = Rvl;
  Rsp = (& (Rsp [10]));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_40]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_690;

DEFLABEL (label_689)
  Wrd29 = Wrd33;

DEFLABEL (label_688)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_26]));
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_687;

DEFLABEL (label_686)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_685)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_687)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_686;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_504])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_584)
  goto label_685;

DEFLABEL (label_690)
  if ((Wrd33.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_689;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_32_503])), (Wrd30.pObj));

DEFLABEL (label_583)
  (Wrd29.Obj) = Rvl;
  goto label_688;

DEFLABEL (label_692)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_500])), (Wrd10.pObj));

DEFLABEL (label_582)
  (Wrd9.Obj) = Rvl;
  goto label_691;

DEFLABEL (label_694)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_498])), (Wrd10.pObj));

DEFLABEL (label_581)
  (Wrd9.Obj) = Rvl;
  goto label_693;

DEFLABEL (label_696)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_496])), (Wrd10.pObj));

DEFLABEL (label_580)
  (Wrd9.Obj) = Rvl;
  goto label_695;

DEFLABEL (label_698)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_494])), (Wrd10.pObj));

DEFLABEL (label_579)
  (Wrd9.Obj) = Rvl;
  goto label_697;

DEFLABEL (label_700)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_492])), (Wrd10.pObj));

DEFLABEL (label_578)
  (Wrd9.Obj) = Rvl;
  goto label_699;

DEFLABEL (label_702)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_490])), (Wrd10.pObj));

DEFLABEL (label_577)
  (Wrd9.Obj) = Rvl;
  goto label_701;

DEFLABEL (label_704)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_488])), (Wrd10.pObj));

DEFLABEL (label_574)
  (Wrd9.Obj) = Rvl;
  goto label_703;

DEFLABEL (label_706)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_484])), (Wrd10.pObj));

DEFLABEL (label_572)
  (Wrd9.Obj) = Rvl;
  goto label_705;

DEFLABEL (label_708)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_468])), (Wrd10.pObj));

DEFLABEL (label_570)
  (Wrd9.Obj) = Rvl;
  goto label_707;

DEFLABEL (label_710)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_462])), (Wrd23.pObj));

DEFLABEL (label_569)
  (Wrd22.Obj) = Rvl;
  goto label_709;

DEFLABEL (label_713)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_712;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_460])), (Wrd6.pObj), Rvl);

DEFLABEL (label_568)
  goto label_711;

DEFLABEL (label_715)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_452])), (Wrd24.pObj));

DEFLABEL (label_567)
  (Wrd23.Obj) = Rvl;
  goto label_714;

DEFLABEL (label_718)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_717;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_450])), (Wrd6.pObj), Rvl);

DEFLABEL (label_566)
  goto label_716;

DEFLABEL (label_720)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_443])), (Wrd12.pObj));

DEFLABEL (label_565)
  (Wrd11.Obj) = Rvl;
  goto label_719;

DEFLABEL (label_722)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_435])), (Wrd26.pObj));

DEFLABEL (label_564)
  (Wrd25.Obj) = Rvl;
  goto label_721;

DEFLABEL (label_725)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_724;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_432])), (Wrd6.pObj), Rvl);

DEFLABEL (label_563)
  goto label_723;

DEFLABEL (label_727)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_426])), (Wrd12.pObj));

DEFLABEL (label_562)
  (Wrd11.Obj) = Rvl;
  goto label_726;

DEFLABEL (label_729)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_419])), (Wrd13.pObj));

DEFLABEL (label_561)
  (Wrd12.Obj) = Rvl;
  goto label_728;

DEFLABEL (label_731)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_411])), (Wrd13.pObj));

DEFLABEL (label_560)
  (Wrd12.Obj) = Rvl;
  goto label_730;

DEFLABEL (label_733)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_406])), (Wrd26.pObj));

DEFLABEL (label_559)
  (Wrd25.Obj) = Rvl;
  goto label_732;

DEFLABEL (label_736)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_735;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_403])), (Wrd6.pObj), Rvl);

DEFLABEL (label_558)
  goto label_734;

DEFLABEL (label_738)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_400])), (Wrd12.pObj));

DEFLABEL (label_557)
  (Wrd11.Obj) = Rvl;
  goto label_737;

DEFLABEL (label_740)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_397])), (Wrd26.pObj));

DEFLABEL (label_556)
  (Wrd25.Obj) = Rvl;
  goto label_739;

DEFLABEL (label_743)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_742;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_394])), (Wrd6.pObj), Rvl);

DEFLABEL (label_555)
  goto label_741;

DEFLABEL (label_745)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_390])), (Wrd11.pObj));

DEFLABEL (label_554)
  (Wrd10.Obj) = Rvl;
  goto label_744;

DEFLABEL (label_747)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_386])), (Wrd22.pObj));

DEFLABEL (label_553)
  (Wrd21.Obj) = Rvl;
  goto label_746;

DEFLABEL (label_750)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_749;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_384])), (Wrd6.pObj), Rvl);

DEFLABEL (label_552)
  goto label_748;

DEFLABEL (label_752)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_377])), (Wrd12.pObj));

DEFLABEL (label_551)
  (Wrd11.Obj) = Rvl;
  goto label_751;

DEFLABEL (label_754)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_365])), (Wrd22.pObj));

DEFLABEL (label_549)
  (Wrd21.Obj) = Rvl;
  goto label_753;

DEFLABEL (label_757)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_756;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_363])), (Wrd6.pObj), Rvl);

DEFLABEL (label_548)
  goto label_755;

DEFLABEL (label_759)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_359])), (Wrd12.pObj));

DEFLABEL (label_547)
  (Wrd11.Obj) = Rvl;
  goto label_758;

DEFLABEL (label_761)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_344])), (Wrd22.pObj));

DEFLABEL (label_543)
  (Wrd21.Obj) = Rvl;
  goto label_760;

DEFLABEL (label_764)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_763;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_342])), (Wrd6.pObj), Rvl);

DEFLABEL (label_542)
  goto label_762;

DEFLABEL (label_766)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_331])), (Wrd11.pObj));

DEFLABEL (label_540)
  (Wrd10.Obj) = Rvl;
  goto label_765;

DEFLABEL (label_768)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_324])), (Wrd22.pObj));

DEFLABEL (label_539)
  (Wrd21.Obj) = Rvl;
  goto label_767;

DEFLABEL (label_771)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_770;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_322])), (Wrd6.pObj), Rvl);

DEFLABEL (label_538)
  goto label_769;

DEFLABEL (label_773)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_307])), (Wrd25.pObj));

DEFLABEL (label_531)
  (Wrd24.Obj) = Rvl;
  goto label_772;

DEFLABEL (label_776)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_775;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_304])), (Wrd6.pObj), Rvl);

DEFLABEL (label_530)
  goto label_774;

DEFLABEL (label_778)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_300])), (Wrd11.pObj));

DEFLABEL (label_529)
  (Wrd10.Obj) = Rvl;
  goto label_777;

DEFLABEL (label_780)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_288])), (Wrd10.pObj));

DEFLABEL (label_528)
  (Wrd9.Obj) = Rvl;
  goto label_779;

DEFLABEL (label_783)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_782;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_282])), (Wrd6.pObj), Rvl);

DEFLABEL (label_527)
  goto label_781;

DEFLABEL (label_785)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_278])), (Wrd12.pObj));

DEFLABEL (label_526)
  (Wrd11.Obj) = Rvl;
  goto label_784;

DEFLABEL (label_787)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_271])), (Wrd22.pObj));

DEFLABEL (label_525)
  (Wrd21.Obj) = Rvl;
  goto label_786;

DEFLABEL (label_790)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_789;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_269])), (Wrd6.pObj), Rvl);

DEFLABEL (label_524)
  goto label_788;

DEFLABEL (label_792)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_262])), (Wrd12.pObj));

DEFLABEL (label_521)
  (Wrd11.Obj) = Rvl;
  goto label_791;

DEFLABEL (label_794)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_264])), (Wrd10.pObj));

DEFLABEL (label_522)
  (Wrd9.Obj) = Rvl;
  goto label_793;

DEFLABEL (label_797)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_796;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_251])), (Wrd6.pObj), Rvl);

DEFLABEL (label_520)
  goto label_795;

DEFLABEL (label_799)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_248])), (Wrd25.pObj));

DEFLABEL (label_519)
  (Wrd24.Obj) = Rvl;
  goto label_798;

DEFLABEL (label_802)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_801;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_245])), (Wrd6.pObj), Rvl);

DEFLABEL (label_518)
  goto label_800;

DEFLABEL (label_804)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_239])), (Wrd12.pObj));

DEFLABEL (label_517)
  (Wrd11.Obj) = Rvl;
  goto label_803;

DEFLABEL (label_806)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_233])), (Wrd26.pObj));

DEFLABEL (label_516)
  (Wrd25.Obj) = Rvl;
  goto label_805;

DEFLABEL (label_809)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_808;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_230])), (Wrd6.pObj), Rvl);

DEFLABEL (label_515)
  goto label_807;

DEFLABEL (label_811)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_226])), (Wrd12.pObj));

DEFLABEL (label_514)
  (Wrd11.Obj) = Rvl;
  goto label_810;

DEFLABEL (label_813)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_221])), (Wrd22.pObj));

DEFLABEL (label_513)
  (Wrd21.Obj) = Rvl;
  goto label_812;

DEFLABEL (label_816)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_815;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_219])), (Wrd6.pObj), Rvl);

DEFLABEL (label_512)
  goto label_814;

DEFLABEL (label_818)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_215])), (Wrd12.pObj));

DEFLABEL (label_511)
  (Wrd11.Obj) = Rvl;
  goto label_817;

DEFLABEL (label_820)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_208])), (Wrd22.pObj));

DEFLABEL (label_510)
  (Wrd21.Obj) = Rvl;
  goto label_819;

DEFLABEL (label_823)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_822;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_206])), (Wrd6.pObj), Rvl);

DEFLABEL (label_509)
  goto label_821;

DEFLABEL (label_825)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_201])), (Wrd12.pObj));

DEFLABEL (label_508)
  (Wrd11.Obj) = Rvl;
  goto label_824;

DEFLABEL (label_827)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_197])), (Wrd22.pObj));

DEFLABEL (label_507)
  (Wrd21.Obj) = Rvl;
  goto label_826;

DEFLABEL (label_830)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_829;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_195])), (Wrd6.pObj), Rvl);

DEFLABEL (label_506)
  goto label_828;

DEFLABEL (label_832)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_194])), (Wrd12.pObj));

DEFLABEL (label_505)
  (Wrd11.Obj) = Rvl;
  goto label_831;

DEFLABEL (label_834)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_111])), (Wrd12.pObj));

DEFLABEL (label_504)
  (Wrd11.Obj) = Rvl;
  goto label_833;

DEFLABEL (label_836)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_93])), (Wrd9.pObj));

DEFLABEL (label_501)
  (Wrd8.Obj) = Rvl;
  goto label_835;

DEFLABEL (label_838)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_81])), (Wrd13.pObj));

DEFLABEL (label_498)
  (Wrd12.Obj) = Rvl;
  goto label_837;

DEFLABEL (label_840)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_73])), (Wrd13.pObj));

DEFLABEL (label_496)
  (Wrd12.Obj) = Rvl;
  goto label_839;

DEFLABEL (label_842)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_64])), (Wrd13.pObj));

DEFLABEL (label_493)
  (Wrd12.Obj) = Rvl;
  goto label_841;

DEFLABEL (lambda_588)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_32_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_23);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_31])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (lambda_589)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_32_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_42);
  (Wrd5.Obj) = (current_block [OBJECT_32_15]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_590)
  CLOSURE_HEADER (LABEL_32_31);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_45]));

DEFLABEL (lambda_591)
  CLOSURE_HEADER (LABEL_32_34);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_843;
  (Wrd7.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_20;

DEFLABEL (label_843)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_46]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 10))
    goto label_847;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_846)
  (Wrd23.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_48]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32_46);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_845;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_845;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_844)
  goto lambda_20;

DEFLABEL (label_845)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_32_16]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_61]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_492)
  (* (--Rsp)) = Rvl;
  goto label_844;

DEFLABEL (label_847)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 1);

DEFLABEL (label_489)
  (* (--Rsp)) = Rvl;
  goto label_846;

DEFLABEL (lambda_592)
  CLOSURE_HEADER (LABEL_32_39);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_852;

DEFLABEL (label_851)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_850;
  Wrd7 = Wrd11;

DEFLABEL (label_849)
  Wrd13 = Wrd7;

DEFLABEL (label_848)
  (Rsp [0]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_850)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_55])), (Wrd8.pObj));

DEFLABEL (label_490)
  (Wrd7.Obj) = Rvl;
  goto label_849;

DEFLABEL (label_852)
  if (! ((Wrd6.uLng) == 10))
    goto label_856;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_855)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd25.Lng) < 1L)
    goto label_851;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_51]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_53]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_32_14]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_54]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_32_53);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_854;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_854;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_853)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_69]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_32_51);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_851;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd13.Obj) = ((Wrd40.pObj) [0]);
  goto label_848;

DEFLABEL (label_854)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_32_16]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_68]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_495)
  (* (--Rsp)) = Rvl;
  goto label_853;

DEFLABEL (label_856)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_52]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 1);

DEFLABEL (label_491)
  (Wrd14.Obj) = Rvl;
  goto label_855;

DEFLABEL (lambda_593)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_32_57);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_58]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_59]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_60]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32_59);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_861;
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_70]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32_58);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_860)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_858;
  Wrd8 = Wrd5;
  goto label_857;

DEFLABEL (label_858)
  (Wrd8.Obj) = (Rsp [2]);

DEFLABEL (label_857)
DEFLABEL (label_859)
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_861)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_860;

DEFLABEL (lambda_594)
  CLOSURE_HEADER (LABEL_32_74);

DEFLABEL (lambda_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_85);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_84])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_87);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_86])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  ((Wrd20.pObj) [2]) = (Wrd14.Obj);
  ((Wrd20.pObj) [3]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto signal_variable_error_442;

DEFLABEL (lambda_595)
  CLOSURE_HEADER (LABEL_32_82);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_98);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_97])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_99]))));
  (Rsp [2]) = (Wrd15.Obj);
  goto signal_variable_error_442;

DEFLABEL (lambda_596)
  CLOSURE_HEADER (LABEL_32_84);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_101);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_100])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd19 = Wrd10;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_102]));

DEFLABEL (lambda_597)
  CLOSURE_HEADER (LABEL_32_86);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_104);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_103])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd19 = Wrd10;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_102]));

DEFLABEL (signal_variable_error_602)
DEFLABEL (signal_variable_error_442)
  INTERRUPT_CHECK (26, LABEL_32_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_397)
  INTERRUPT_CHECK (27, LABEL_32_106);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_123]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_124]));

DEFLABEL (continuation_398)
  INTERRUPT_CHECK (27, LABEL_32_123);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_140]));

DEFLABEL (continuation_399)
  INTERRUPT_CHECK (27, LABEL_32_122);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_32_30]))
    goto label_870;
  if (Rvl == (current_block [OBJECT_32_31]))
    goto label_869;
  if (! (Rvl == (current_block [OBJECT_32_32])))
    goto label_862;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_134]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_135]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_430)
  INTERRUPT_CHECK (27, LABEL_32_135);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_155]));

DEFLABEL (continuation_431)
  INTERRUPT_CHECK (27, LABEL_32_134);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_153]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_154]));

DEFLABEL (continuation_429)
  INTERRUPT_CHECK (27, LABEL_32_153);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_862)
  if (Rvl == (current_block [OBJECT_32_0]))
    goto label_868;
  if (Rvl == (current_block [OBJECT_32_1]))
    goto label_868;
  if (Rvl == (current_block [OBJECT_32_33]))
    goto label_866;
  if (Rvl == (current_block [OBJECT_32_34]))
    goto label_866;
  if (Rvl == (current_block [OBJECT_32_36]))
    goto label_863;
  if (Rvl == (current_block [OBJECT_32_37]))
    goto label_863;
  if (Rvl == (current_block [OBJECT_32_38]))
    goto label_863;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_863)
  (Wrd27.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_139]))));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_865)
  (Wrd31.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_864)
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (label_866)
  (Wrd33.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_138]))));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_867)
  (Wrd37.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_864;

DEFLABEL (label_868)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_137]))));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_865;

DEFLABEL (label_869)
  (Wrd52.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_133]))));
  (* (--Rsp)) = (Wrd55.Obj);
  goto label_867;

DEFLABEL (label_870)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_132]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd61.Obj);
  goto label_864;

DEFLABEL (continuation_410)
  INTERRUPT_CHECK (27, LABEL_32_139);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_147]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_411)
  INTERRUPT_CHECK (27, LABEL_32_147);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_413)
  INTERRUPT_CHECK (27, LABEL_32_138);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_148]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_412)
  INTERRUPT_CHECK (27, LABEL_32_148);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_414)
  INTERRUPT_CHECK (27, LABEL_32_137);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_32_41]))
    goto label_876;
  if (Rvl == (current_block [OBJECT_32_42]))
    goto label_876;
  if (Rvl == (current_block [OBJECT_32_44]))
    goto label_875;
  if (Rvl == (current_block [OBJECT_32_45]))
    goto label_874;
  if (Rvl == (current_block [OBJECT_32_46]))
    goto label_871;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_871)
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_152]))));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_873)
  (Wrd22.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_872)
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (label_874)
  (Wrd24.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_151]))));
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_873;

DEFLABEL (label_875)
  (Wrd30.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_150]))));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_873;

DEFLABEL (label_876)
  (Wrd36.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_149]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_872;

DEFLABEL (continuation_432)
  INTERRUPT_CHECK (27, LABEL_32_133);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_156]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_157]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_433)
  INTERRUPT_CHECK (27, LABEL_32_157);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_166]));

DEFLABEL (continuation_434)
  INTERRUPT_CHECK (27, LABEL_32_156);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_435)
  INTERRUPT_CHECK (27, LABEL_32_132);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_158]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_159]));

DEFLABEL (continuation_436)
  INTERRUPT_CHECK (27, LABEL_32_158);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_877;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_877)
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_167]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_168]));

DEFLABEL (continuation_438)
  INTERRUPT_CHECK (27, LABEL_32_167);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_172]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_437)
  INTERRUPT_CHECK (27, LABEL_32_172);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_420)
  INTERRUPT_CHECK (27, LABEL_32_152);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_162]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_421)
  INTERRUPT_CHECK (27, LABEL_32_162);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_422)
  INTERRUPT_CHECK (27, LABEL_32_151);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_163]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_423)
  INTERRUPT_CHECK (27, LABEL_32_163);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_424)
  INTERRUPT_CHECK (27, LABEL_32_150);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_164]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_425)
  INTERRUPT_CHECK (27, LABEL_32_164);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_427)
  INTERRUPT_CHECK (27, LABEL_32_149);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_165]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_426)
  INTERRUPT_CHECK (27, LABEL_32_165);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_603)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_32_88);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_879;
  Wrd11 = Wrd15;

DEFLABEL (label_878)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_26]), 2);

DEFLABEL (label_879)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_108])), (Wrd12.pObj));

DEFLABEL (label_502)
  (Wrd11.Obj) = Rvl;
  goto label_878;

DEFLABEL (lambda_598)
  CLOSURE_HEADER (LABEL_32_95);

DEFLABEL (lambda_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_113);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_112])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_115);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_114])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  ((Wrd20.pObj) [2]) = (Wrd14.Obj);
  ((Wrd20.pObj) [3]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto signal_variable_error_442;

DEFLABEL (lambda_599)
  CLOSURE_HEADER (LABEL_32_97);

DEFLABEL (lambda_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_117);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_116])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd19 = Wrd10;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_118]));

DEFLABEL (lambda_607)
DEFLABEL (lambda_63)
  INTERRUPT_CHECK (26, LABEL_32_99);
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_600)
  CLOSURE_HEADER (LABEL_32_100);

DEFLABEL (lambda_53)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_601)
  CLOSURE_HEADER (LABEL_32_103);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_120);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_119])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd29 = Wrd16;
  (Wrd32.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  ((Wrd29.pObj) [3]) = (Wrd13.Obj);
  ((Wrd29.pObj) [4]) = (Wrd7.Obj);
  ((Wrd29.pObj) [5]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_121]));

DEFLABEL (lambda_604)
  CLOSURE_HEADER (LABEL_32_112);

DEFLABEL (lambda_73)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_127);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_126])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd19 = Wrd10;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_102]));

DEFLABEL (lambda_605)
  CLOSURE_HEADER (LABEL_32_114);

DEFLABEL (lambda_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_129);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_128])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd19 = Wrd10;
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_102]));

DEFLABEL (lambda_606)
  CLOSURE_HEADER (LABEL_32_116);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_131);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_130])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd29 = Wrd16;
  (Wrd32.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  ((Wrd29.pObj) [3]) = (Wrd13.Obj);
  ((Wrd29.pObj) [4]) = (Wrd7.Obj);
  ((Wrd29.pObj) [5]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_121]));

DEFLABEL (lambda_608)
  CLOSURE_HEADER (LABEL_32_119);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (define_arg_error_612)
DEFLABEL (define_arg_error_449)
  INTERRUPT_CHECK (26, LABEL_32_142);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_144);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_143])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (lambda_609)
  CLOSURE_HEADER (LABEL_32_126);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_610)
  CLOSURE_HEADER (LABEL_32_128);

DEFLABEL (lambda_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_146);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_145])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd29 = Wrd16;
  (Wrd32.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  ((Wrd29.pObj) [3]) = (Wrd13.Obj);
  ((Wrd29.pObj) [4]) = (Wrd7.Obj);
  ((Wrd29.pObj) [5]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_121]));

DEFLABEL (lambda_611)
  CLOSURE_HEADER (LABEL_32_130);

DEFLABEL (lambda_60)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_613)
  CLOSURE_HEADER (LABEL_32_143);

DEFLABEL (lambda_448)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_443)
  INTERRUPT_CHECK (27, LABEL_32_161);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_444)
  INTERRUPT_CHECK (27, LABEL_32_170);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_880;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_880)
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_174]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_446)
  INTERRUPT_CHECK (27, LABEL_32_174);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_445)
  INTERRUPT_CHECK (27, LABEL_32_177);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_614)
  CLOSURE_HEADER (LABEL_32_145);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_615)
DEFLABEL (lambda_102)
  INTERRUPT_CHECK (26, LABEL_32_193);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_198]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_32_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_204]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_205]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_32_205);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_32_204);
  (Wrd5.Obj) = (current_block [OBJECT_32_76]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (define_primitive_error_616)
DEFLABEL (define_primitive_error_461)
  INTERRUPT_CHECK (26, LABEL_32_202);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_203]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_450)
  INTERRUPT_CHECK (27, LABEL_32_203);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_211);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_210])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (lambda_617)
DEFLABEL (lambda_108)
  INTERRUPT_CHECK (26, LABEL_32_200);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_209]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_32_209);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_216]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_217]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_32_217);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_32_216);
  (Wrd5.Obj) = (current_block [OBJECT_32_79]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_618)
  CLOSURE_HEADER (LABEL_32_210);

DEFLABEL (lambda_459)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_218]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_452)
  INTERRUPT_CHECK (27, LABEL_32_218);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_223]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_453)
  INTERRUPT_CHECK (27, LABEL_32_223);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_881;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_881)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_229]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_454)
  INTERRUPT_CHECK (27, LABEL_32_229);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_235]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_236]));

DEFLABEL (continuation_455)
  INTERRUPT_CHECK (27, LABEL_32_235);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_882;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_882)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_244]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_456)
  INTERRUPT_CHECK (27, LABEL_32_244);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_619)
DEFLABEL (lambda_114)
  INTERRUPT_CHECK (26, LABEL_32_214);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_222]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_32_222);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_227]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_228]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_32_228);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_32_227);
  (Wrd5.Obj) = (current_block [OBJECT_32_82]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_620)
DEFLABEL (lambda_120)
  INTERRUPT_CHECK (26, LABEL_32_225);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_234]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_81]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_32_234);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_242]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_243]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_32_243);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_32_242);
  (Wrd5.Obj) = (current_block [OBJECT_32_85]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_622)
DEFLABEL (lambda_138)
  INTERRUPT_CHECK (26, LABEL_32_238);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_249]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_32_249);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_256]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_257]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_32_257);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_32_256);
  (Wrd5.Obj) = (current_block [OBJECT_32_87]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_621)
  CLOSURE_HEADER (LABEL_32_240);

DEFLABEL (lambda_132)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_250]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_32_250);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_258]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_259]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_124]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_32_259);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_893;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_15]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_892;
  Wrd16 = Wrd20;

DEFLABEL (label_891)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_884;

DEFLABEL (label_883)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_884)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_883;
  if ((Wrd16.Obj) == (Wrd26.Obj))
    goto label_886;
  (Wrd23.Obj) = (current_block [OBJECT_32_89]);
  goto label_885;

DEFLABEL (label_886)
  (Wrd23.Obj) = (current_block [OBJECT_32_88]);

DEFLABEL (label_885)
DEFLABEL (label_890)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd23.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_888;

DEFLABEL (label_887)
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_888)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_268]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_35]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_32_268);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_275]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_236]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_32_275);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_889;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_93]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_889)
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_892)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_267])), (Wrd17.pObj));

DEFLABEL (label_523)
  (Wrd16.Obj) = Rvl;
  goto label_891;

DEFLABEL (label_893)
  Rsp = (& (Rsp [2]));
  goto label_887;

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_32_258);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_887;
  goto label_888;

DEFLABEL (lambda_623)
DEFLABEL (lambda_143)
  INTERRUPT_CHECK (26, LABEL_32_247);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_255]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_32_255);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_265]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_266]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_32_266);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_32_265);
  (Wrd5.Obj) = (current_block [OBJECT_32_90]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_624)
DEFLABEL (lambda_168)
  INTERRUPT_CHECK (26, LABEL_32_261);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_272]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_32_272);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_279]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_280]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_32_280);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_32_279);
  (Wrd5.Obj) = (current_block [OBJECT_32_94]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_285]));

DEFLABEL (lambda_625)
  CLOSURE_HEADER (LABEL_32_273);

DEFLABEL (lambda_162)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_281]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_32_281);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_286]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_32_286);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_894;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_894)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_292]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_32_292);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_297]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_32_297);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_32_98])))
    goto label_896;

DEFLABEL (label_895)
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_32_16]);
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_32_106]);
  (Rsp [5]) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_32_107]);
  (Rsp [6]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_32_108]);
  (Rsp [7]) = (Wrd37.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

DEFLABEL (label_896)
  if ((Wrd7.Obj) == (current_block [OBJECT_32_99]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_100]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_101]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_102]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_103]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_104]))
    goto label_895;
  if ((Wrd7.Obj) == (current_block [OBJECT_32_105]))
    goto label_895;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Rsp [3]) = Rvl;
  (Rsp [1]) = (Wrd26.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_626)
DEFLABEL (lambda_194)
  INTERRUPT_CHECK (26, LABEL_32_277);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_284]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_32_284);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_290]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_291]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_32_291);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_212]));

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_32_290);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_296]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_32_296);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_301]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_302]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_32_302);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_309]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd36.Obj) = (current_block [OBJECT_32_111]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_905;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_904;

DEFLABEL (label_903)
  (Wrd13.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_897;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_112]), 2);

DEFLABEL (label_897)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_899;
  (Wrd15.Obj) = (current_block [OBJECT_32_89]);
  goto label_898;

DEFLABEL (label_899)
  (Wrd15.Obj) = (current_block [OBJECT_32_88]);

DEFLABEL (label_898)
DEFLABEL (label_902)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_901;

DEFLABEL (label_900)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_312]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_32_114]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_32_312);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_328]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_182)
  INTERRUPT_CHECK (27, LABEL_32_328);
  (Wrd5.Obj) = (current_block [OBJECT_32_122]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (label_901)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_311]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_32_113]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_180)
  INTERRUPT_CHECK (27, LABEL_32_311);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (label_904)
  Rsp = (& (Rsp [2]));
  goto label_900;

DEFLABEL (label_905)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_310]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_112]), 2);

DEFLABEL (label_532)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_903;
  goto label_904;

DEFLABEL (continuation_177)
  INTERRUPT_CHECK (27, LABEL_32_309);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_901;
  goto label_900;

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_32_301);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_308]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_32_308);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_326]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_327]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_116]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_32_327);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_337]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd37.Obj) = (current_block [OBJECT_32_111]);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd40.Lng))))
    goto label_915;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_914;

DEFLABEL (label_913)
  (Wrd13.Obj) = (current_block [OBJECT_32_43]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_906;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_112]), 2);

DEFLABEL (label_906)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_908;
  (Wrd15.Obj) = (current_block [OBJECT_32_89]);
  goto label_907;

DEFLABEL (label_908)
  (Wrd15.Obj) = (current_block [OBJECT_32_88]);

DEFLABEL (label_907)
DEFLABEL (label_912)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_911;

DEFLABEL (label_910)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_336]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_32_121]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_191)
  INTERRUPT_CHECK (27, LABEL_32_336);

DEFLABEL (label_909)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_339]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_340]));

DEFLABEL (continuation_192)
  INTERRUPT_CHECK (27, LABEL_32_339);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (label_911)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 30)
    goto label_910;
  goto label_909;

DEFLABEL (label_914)
  Rsp = (& (Rsp [2]));
  goto label_910;

DEFLABEL (label_915)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_338]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_112]), 2);

DEFLABEL (label_541)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_913;
  goto label_914;

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_32_337);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_911;
  goto label_910;

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_32_326);
  (Wrd5.Obj) = (current_block [OBJECT_32_120]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_627)
  CLOSURE_HEADER (LABEL_32_293);

DEFLABEL (lambda_239)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_298]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_199)
  INTERRUPT_CHECK (27, LABEL_32_298);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_303]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_32_303);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_917;

DEFLABEL (label_916)
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_917)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 10))
    goto label_916;
  if (! ((Wrd8.uLng) == 10))
    goto label_949;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_948)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_947;
  if (! ((Wrd11.Obj) == (current_block [OBJECT_32_39])))
    goto label_916;

DEFLABEL (label_946)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_315]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_945;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_945;
  (Wrd32.Obj) = ((Wrd38.pObj) [2]);

DEFLABEL (label_944)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd48.uLng) == 30)
    goto label_941;
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_940;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd57.Lng))))
    goto label_940;
  (Wrd51.Obj) = ((Wrd55.pObj) [3]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_939)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_320]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_321]));

DEFLABEL (continuation_210)
  INTERRUPT_CHECK (27, LABEL_32_320);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_938;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_937)
  (* (--Rsp)) = Rvl;

DEFLABEL (label_936)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_329]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_32_329);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_341]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_32_341);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_348]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_935;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_935;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_934)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd24.uLng) == 30)
    goto label_931;
  (Wrd35.Obj) = (Rsp [7]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_930;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_930;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_929)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_928)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 30)
    goto label_927;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_347]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_356]));

DEFLABEL (continuation_219)
  INTERRUPT_CHECK (27, LABEL_32_347);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_919;
  (Wrd49.Obj) = Rvl;
  goto label_918;

DEFLABEL (label_919)
  (Wrd49.Obj) = (Rsp [1]);

DEFLABEL (label_918)
DEFLABEL (label_926)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_925)
  (Rsp [3]) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_353);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_352])));
  Rhp += 6;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  Wrd62 = Wrd51;
  (Wrd63.Obj) = (Rsp [4]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [3]);
  ((Wrd62.pObj) [2]) = (Wrd65.Obj);
  (Wrd61.Obj) = (Rsp [5]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  ((Wrd62.pObj) [4]) = (Wrd49.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [5]) = (Wrd57.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  ((Wrd62.pObj) [6]) = (Wrd55.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  ((Wrd62.pObj) [7]) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_354]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_355]));

DEFLABEL (continuation_223)
  INTERRUPT_CHECK (27, LABEL_32_354);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_920;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_362]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_222;

DEFLABEL (continuation_233)
  INTERRUPT_CHECK (27, LABEL_32_362);
  (Rsp [8]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_368]));

DEFLABEL (label_920)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_361]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_236]));

DEFLABEL (continuation_224)
  INTERRUPT_CHECK (27, LABEL_32_361);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_922;

DEFLABEL (label_921)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_374]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_222;

DEFLABEL (continuation_228)
  INTERRUPT_CHECK (27, LABEL_32_374);
  (Rsp [8]) = Rvl;
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_381]));

DEFLABEL (label_922)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_32_8]))
    goto label_921;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_924;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_923)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_921;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_371);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_370])));
  Rhp += 6;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd36 = Wrd25;
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  ((Wrd36.pObj) [2]) = (Wrd39.Obj);
  (Wrd35.Obj) = (Rsp [7]);
  ((Wrd36.pObj) [3]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  ((Wrd36.pObj) [4]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  ((Wrd36.pObj) [5]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd36.pObj) [6]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd36.pObj) [7]) = (Wrd27.Obj);
  (Rsp [8]) = (Wrd24.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_372]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_373]));

DEFLABEL (continuation_232)
  INTERRUPT_CHECK (27, LABEL_32_372);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_924)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_369]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_127]), 1);

DEFLABEL (label_550)
  (Wrd9.Obj) = Rvl;
  goto label_923;

DEFLABEL (label_927)
  Wrd49 = Wrd42;
  Rsp = (& (Rsp [1]));
  goto label_925;

DEFLABEL (label_930)
  (Wrd37.Obj) = (Rsp [7]);
  (Wrd38.Obj) = (current_block [OBJECT_32_12]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_351]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_545)
  (Wrd26.Obj) = Rvl;
  goto label_929;

DEFLABEL (label_931)
  (Wrd81.Obj) = (Rsp [7]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_933;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd80.Lng))))
    goto label_933;
  (Wrd72.Obj) = ((Wrd78.pObj) [3]);

DEFLABEL (label_932)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd72.Obj);
  goto label_928;

DEFLABEL (label_933)
  (Wrd83.Obj) = (Rsp [7]);
  (Wrd84.Obj) = (current_block [OBJECT_32_35]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_350]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_546)
  (Wrd72.Obj) = Rvl;
  goto label_932;

DEFLABEL (label_935)
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.Obj) = (current_block [OBJECT_32_12]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_349]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_544)
  (Wrd8.Obj) = Rvl;
  goto label_934;

DEFLABEL (label_938)
  (Wrd14.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_936;

DEFLABEL (label_940)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd61.Obj) = (current_block [OBJECT_32_35]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_319]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_536)
  (* (--Rsp)) = Rvl;
  goto label_939;

DEFLABEL (label_941)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_943;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd77.Lng))))
    goto label_943;
  (Wrd71.Obj) = ((Wrd75.pObj) [2]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_942)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_318]));

DEFLABEL (continuation_208)
  INTERRUPT_CHECK (27, LABEL_32_315);
  goto label_937;

DEFLABEL (label_943)
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.Obj) = (current_block [OBJECT_32_12]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_317]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_537)
  (* (--Rsp)) = Rvl;
  goto label_942;

DEFLABEL (label_945)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.Obj) = (current_block [OBJECT_32_12]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_316]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_17]), 2);

DEFLABEL (label_535)
  (Wrd32.Obj) = Rvl;
  goto label_944;

DEFLABEL (label_947)
  (Wrd23.Obj) = (current_block [OBJECT_32_39]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_314]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_534)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_916;
  goto label_946;

DEFLABEL (label_949)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_313]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 1);

DEFLABEL (label_533)
  (Wrd11.Obj) = Rvl;
  goto label_948;

DEFLABEL (continuation_216)
  INTERRUPT_CHECK (27, LABEL_32_348);
  (* (--Rsp)) = Rvl;
  goto label_928;

DEFLABEL (lambda_628)
DEFLABEL (lambda_246)
  INTERRUPT_CHECK (26, LABEL_32_306);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_325]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_243)
  INTERRUPT_CHECK (27, LABEL_32_325);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_334]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_335]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_119]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_244)
  INTERRUPT_CHECK (27, LABEL_32_335);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_245)
  INTERRUPT_CHECK (27, LABEL_32_334);
  (Wrd5.Obj) = (current_block [OBJECT_32_124]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (define_fasload_error_629)
DEFLABEL (define_fasload_error_475)
  INTERRUPT_CHECK (26, LABEL_32_332);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_333]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_462)
  INTERRUPT_CHECK (27, LABEL_32_333);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_346);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_345])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (lambda_630)
  CLOSURE_HEADER (LABEL_32_345);

DEFLABEL (lambda_473)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_360]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_464)
  INTERRUPT_CHECK (27, LABEL_32_360);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_367]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_465)
  INTERRUPT_CHECK (27, LABEL_32_367);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_950;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_950)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_380]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_466)
  INTERRUPT_CHECK (27, LABEL_32_380);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_32_130])))
    goto label_952;

DEFLABEL (label_951)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_388]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_470)
  INTERRUPT_CHECK (27, LABEL_32_388);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_393]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_469)
  INTERRUPT_CHECK (27, LABEL_32_393);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_952)
  if (Rvl == (current_block [OBJECT_32_131]))
    goto label_951;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_631)
DEFLABEL (lambda_222)
  INTERRUPT_CHECK (26, LABEL_32_352);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32_126]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [6]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (lambda_632)
DEFLABEL (lambda_254)
  INTERRUPT_CHECK (26, LABEL_32_358);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_366]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_251)
  INTERRUPT_CHECK (27, LABEL_32_366);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_378]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_379]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_119]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_252)
  INTERRUPT_CHECK (27, LABEL_32_379);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_253)
  INTERRUPT_CHECK (27, LABEL_32_378);
  (Wrd5.Obj) = (current_block [OBJECT_32_129]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_633)
  CLOSURE_HEADER (LABEL_32_370);

DEFLABEL (lambda_231)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_953;
  (Wrd7.Obj) = (current_block [OBJECT_32_16]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (Rsp [7]) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_383]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_340]));

DEFLABEL (continuation_230)
  INTERRUPT_CHECK (27, LABEL_32_383);
  (Rsp [8]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 8);
  }

DEFLABEL (label_953)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_382]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [7]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto lambda_222;

DEFLABEL (continuation_229)
  INTERRUPT_CHECK (27, LABEL_32_382);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_381]));

DEFLABEL (lambda_634)
DEFLABEL (lambda_260)
  INTERRUPT_CHECK (26, LABEL_32_376);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_387]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_257)
  INTERRUPT_CHECK (27, LABEL_32_387);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_391]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_392]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_119]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_258)
  INTERRUPT_CHECK (27, LABEL_32_392);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_259)
  INTERRUPT_CHECK (27, LABEL_32_391);
  (Wrd5.Obj) = (current_block [OBJECT_32_133]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_636)
DEFLABEL (lambda_280)
  INTERRUPT_CHECK (26, LABEL_32_399);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_407]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_277)
  INTERRUPT_CHECK (27, LABEL_32_407);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_414]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_415]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_140]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_278)
  INTERRUPT_CHECK (27, LABEL_32_415);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (continuation_279)
  INTERRUPT_CHECK (27, LABEL_32_414);
  (Wrd5.Obj) = (current_block [OBJECT_32_142]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (lambda_635)
  CLOSURE_HEADER (LABEL_32_401);

DEFLABEL (lambda_274)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_408]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_266)
  INTERRUPT_CHECK (27, LABEL_32_408);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_416]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_267)
  INTERRUPT_CHECK (27, LABEL_32_416);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_954;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_954)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_423]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_268)
  INTERRUPT_CHECK (27, LABEL_32_423);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_32_131]))
    goto label_955;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_955)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_431]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_271)
  INTERRUPT_CHECK (27, LABEL_32_431);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_440]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_270)
  INTERRUPT_CHECK (27, LABEL_32_440);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_637)
  CLOSURE_HEADER (LABEL_32_412);

DEFLABEL (lambda_291)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_422]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_284)
  INTERRUPT_CHECK (27, LABEL_32_422);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_430]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_285)
  INTERRUPT_CHECK (27, LABEL_32_430);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_956;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_956)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_439]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_286)
  INTERRUPT_CHECK (27, LABEL_32_439);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_449]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_287)
  INTERRUPT_CHECK (27, LABEL_32_449);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_458);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_457])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  ((Wrd15.pObj) [4]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Rsp [2]) = Rvl;
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_459]));

DEFLABEL (lambda_638)
  CLOSURE_HEADER (LABEL_32_420);

DEFLABEL (lambda_314)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_429]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_296)
  INTERRUPT_CHECK (27, LABEL_32_429);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_438]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_297)
  INTERRUPT_CHECK (27, LABEL_32_438);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_957;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_957)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_448]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_298)
  INTERRUPT_CHECK (27, LABEL_32_448);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_456]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_299)
  INTERRUPT_CHECK (27, LABEL_32_456);
  (Rsp [1]) = Rvl;
  goto loop_311;

DEFLABEL (lambda_640)
DEFLABEL (lambda_329)
  INTERRUPT_CHECK (26, LABEL_32_425);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_436]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_327)
  INTERRUPT_CHECK (27, LABEL_32_436);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_446]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_328)
  INTERRUPT_CHECK (27, LABEL_32_446);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (lambda_639)
  CLOSURE_HEADER (LABEL_32_427);

DEFLABEL (lambda_324)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_437]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_319)
  INTERRUPT_CHECK (27, LABEL_32_437);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_447]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_320)
  INTERRUPT_CHECK (27, LABEL_32_447);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_958;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_958)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_455]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_321)
  INTERRUPT_CHECK (27, LABEL_32_455);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_466]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_175]));

DEFLABEL (continuation_322)
  INTERRUPT_CHECK (27, LABEL_32_466);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_642)
DEFLABEL (lambda_349)
  INTERRUPT_CHECK (26, LABEL_32_442);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_453]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_343)
  INTERRUPT_CHECK (27, LABEL_32_453);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_463]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_464]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_152]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_344)
  INTERRUPT_CHECK (27, LABEL_32_464);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_470]));

DEFLABEL (continuation_345)
  INTERRUPT_CHECK (27, LABEL_32_463);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_469]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_44]));

DEFLABEL (continuation_346)
  INTERRUPT_CHECK (27, LABEL_32_469);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_959;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_959)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_485]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_155]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_347)
  INTERRUPT_CHECK (27, LABEL_32_485);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_56]));

DEFLABEL (lambda_641)
  CLOSURE_HEADER (LABEL_32_444);

DEFLABEL (lambda_340)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_454]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_333)
  INTERRUPT_CHECK (27, LABEL_32_454);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_465]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_171]));

DEFLABEL (continuation_334)
  INTERRUPT_CHECK (27, LABEL_32_465);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_960;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_960)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_471]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_335)
  INTERRUPT_CHECK (27, LABEL_32_471);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_32_156]))
    goto label_961;
  Rvl = (current_block [OBJECT_32_28]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_961)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_486]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_136]));

DEFLABEL (continuation_337)
  INTERRUPT_CHECK (27, LABEL_32_486);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Obj) = (current_block [OBJECT_32_16]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_643)
  CLOSURE_HEADER (LABEL_32_457);

DEFLABEL (lambda_288)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (loop_644)
DEFLABEL (loop_311)
  INTERRUPT_CHECK (26, LABEL_32_478);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_963;

DEFLABEL (label_962)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_481]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_482]));

DEFLABEL (continuation_307)
  INTERRUPT_CHECK (27, LABEL_32_481);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_963)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_475]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_971;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_970)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_480]));

DEFLABEL (continuation_303)
  INTERRUPT_CHECK (27, LABEL_32_475);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_962;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_472]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_969;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_968)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_477]));

DEFLABEL (continuation_305)
  INTERRUPT_CHECK (27, LABEL_32_472);
  (Wrd38.Obj) = (Rsp [0]);
  if (! ((Wrd38.Obj) == Rvl))
    goto label_962;
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_967;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_966)
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_965;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_964)
  (Rsp [1]) = (Wrd48.Obj);
  goto loop_311;

DEFLABEL (label_965)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_474]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_154]), 1);

DEFLABEL (label_576)
  (Wrd48.Obj) = Rvl;
  goto label_964;

DEFLABEL (label_967)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_473]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_127]), 1);

DEFLABEL (label_575)
  (Wrd39.Obj) = Rvl;
  goto label_966;

DEFLABEL (label_969)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_476]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_127]), 1);

DEFLABEL (label_573)
  (* (--Rsp)) = Rvl;
  goto label_968;

DEFLABEL (label_971)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_479]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_127]), 1);

DEFLABEL (label_571)
  (* (--Rsp)) = Rvl;
  goto label_970;

DEFLABEL (lambda_645)
  CLOSURE_HEADER (LABEL_32_501);

DEFLABEL (lambda_393)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 14));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_506);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_505])));
  Rhp += 11;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd46 = Wrd7;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  ((Wrd46.pObj) [2]) = (Wrd49.Obj);
  (Wrd45.Obj) = ((Wrd48.pObj) [3]);
  ((Wrd46.pObj) [3]) = (Wrd45.Obj);
  (Wrd41.Obj) = ((Wrd48.pObj) [4]);
  ((Wrd46.pObj) [4]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd48.pObj) [5]);
  ((Wrd46.pObj) [5]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd48.pObj) [6]);
  ((Wrd46.pObj) [6]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd48.pObj) [7]);
  ((Wrd46.pObj) [7]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd48.pObj) [8]);
  ((Wrd46.pObj) [8]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd48.pObj) [9]);
  ((Wrd46.pObj) [9]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd48.pObj) [10]);
  ((Wrd46.pObj) [10]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd48.pObj) [11]);
  ((Wrd46.pObj) [11]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd46.pObj) [12]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (lambda_646)
  CLOSURE_HEADER (LABEL_32_505);

DEFLABEL (lambda_392)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [12]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_972;
  (Wrd31.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [0]) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_972)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_41]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_998;
  Wrd9 = Wrd13;

DEFLABEL (label_997)
  (* (--Rsp)) = (Wrd9.Obj);
  if ((Wrd9.Obj) == (current_block [OBJECT_32_157]))
    goto label_987;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_510]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_511]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_364)
  INTERRUPT_CHECK (27, LABEL_32_511);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_512]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_515]));

DEFLABEL (continuation_366)
  INTERRUPT_CHECK (27, LABEL_32_512);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_973;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_513]));

DEFLABEL (label_973)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_986)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_514]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_159]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_368)
  INTERRUPT_CHECK (27, LABEL_32_514);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_974;
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [6]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = ((Wrd65.pObj) [12]);
  (Rsp [2]) = (Wrd67.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd71.Obj);
  (Rsp [3]) = (Wrd70.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_974)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_517]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_985;
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_518]));

DEFLABEL (continuation_370)
  INTERRUPT_CHECK (27, LABEL_32_517);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_984)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_32_161]))
    goto label_983;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_162]))
    goto label_982;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_163]))
    goto label_981;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_164]))
    goto label_980;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_165]))
    goto label_979;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_166]))
    goto label_978;
  if ((Wrd14.Obj) == (current_block [OBJECT_32_167]))
    goto label_976;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [11]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_975;

DEFLABEL (label_976)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_975)
DEFLABEL (label_977)
  (Wrd32.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd32.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd34.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_978)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_977;

DEFLABEL (label_979)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_977;

DEFLABEL (label_980)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_977;

DEFLABEL (label_981)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd52.Obj);
  goto label_977;

DEFLABEL (label_982)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [9]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd56.Obj);
  goto label_977;

DEFLABEL (label_983)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd60.Obj);
  goto label_977;

DEFLABEL (label_985)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_984;

DEFLABEL (label_987)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_508]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [12]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_32_158]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_381)
  INTERRUPT_CHECK (27, LABEL_32_508);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_988;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_988)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_516]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_160]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_382)
  INTERRUPT_CHECK (27, LABEL_32_516);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_990;

DEFLABEL (label_989)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_990)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_519]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_169]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_383)
  INTERRUPT_CHECK (27, LABEL_32_519);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_989;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_520]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [12]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_32_168]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_384)
  INTERRUPT_CHECK (27, LABEL_32_520);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_991;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_991)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_521]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_170]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_385)
  INTERRUPT_CHECK (27, LABEL_32_521);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_992;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_992)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_522]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_171]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_386)
  INTERRUPT_CHECK (27, LABEL_32_522);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_993;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_993)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_523]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_172]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_387)
  INTERRUPT_CHECK (27, LABEL_32_523);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_994;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_994)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_524]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_173]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_388)
  INTERRUPT_CHECK (27, LABEL_32_524);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_996;

DEFLABEL (label_995)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_32_8]);
  (Rsp [3]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_996)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_526]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_175]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_389)
  INTERRUPT_CHECK (27, LABEL_32_526);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_995;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_525]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [12]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_32_174]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_509]));

DEFLABEL (continuation_390)
  INTERRUPT_CHECK (27, LABEL_32_525);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_995;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd35.Obj) = ((Wrd32.pObj) [12]);
  (Rsp [2]) = (Wrd35.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_998)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_507])), (Wrd10.pObj));

DEFLABEL (label_585)
  (Wrd9.Obj) = Rvl;
  goto label_997;

DEFLABEL (continuation_365)
  INTERRUPT_CHECK (27, LABEL_32_510);
  (Wrd5.Obj) = Rvl;
  goto label_986;

INVOKE_INTERFACE_TARGET_0
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
uerror_so_21ba5d70a3665570 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	0,
	1,
	1,
	0,
	2,
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
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 32)
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

static const struct liarc_code_S arr_decl_uerror_so_21ba5d70a3665570 [32] =
  {
    { "uerror_so_code_1", 9, uerror_so_code_1 },
    { "uerror_so_code_2", 7, uerror_so_code_2 },
    { "uerror_so_code_3", 4, uerror_so_code_3 },
    { "uerror_so_code_4", 11, uerror_so_code_4 },
    { "uerror_so_code_5", 11, uerror_so_code_5 },
    { "uerror_so_code_6", 11, uerror_so_code_6 },
    { "uerror_so_code_7", 8, uerror_so_code_7 },
    { "uerror_so_code_8", 5, uerror_so_code_8 },
    { "uerror_so_code_9", 9, uerror_so_code_9 },
    { "uerror_so_code_10", 7, uerror_so_code_10 },
    { "uerror_so_code_11", 11, uerror_so_code_11 },
    { "uerror_so_code_12", 7, uerror_so_code_12 },
    { "uerror_so_code_13", 8, uerror_so_code_13 },
    { "uerror_so_code_14", 3, uerror_so_code_14 },
    { "uerror_so_code_15", 8, uerror_so_code_15 },
    { "uerror_so_code_16", 1, uerror_so_code_16 },
    { "uerror_so_code_17", 2, uerror_so_code_17 },
    { "uerror_so_code_18", 5, uerror_so_code_18 },
    { "uerror_so_code_19", 1, uerror_so_code_19 },
    { "uerror_so_code_20", 2, uerror_so_code_20 },
    { "uerror_so_code_21", 3, uerror_so_code_21 },
    { "uerror_so_code_22", 1, uerror_so_code_22 },
    { "uerror_so_code_23", 1, uerror_so_code_23 },
    { "uerror_so_code_24", 9, uerror_so_code_24 },
    { "uerror_so_code_25", 1, uerror_so_code_25 },
    { "uerror_so_code_26", 1, uerror_so_code_26 },
    { "uerror_so_code_27", 3, uerror_so_code_27 },
    { "uerror_so_code_28", 1, uerror_so_code_28 },
    { "uerror_so_code_29", 10, uerror_so_code_29 },
    { "uerror_so_code_30", 16, uerror_so_code_30 },
    { "uerror_so_code_31", 17, uerror_so_code_31 },
    { "uerror_so_code_32", 433, uerror_so_code_32 }
  };

int
decl_uerror_so_21ba5d70a3665570 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_uerror_so_21ba5d70a3665570);
  return (0);
}

DECLARE_COMPILED_CODE ("uerror.so", 3, decl_uerror_so_21ba5d70a3665570, uerror_so_21ba5d70a3665570)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_uerror_so_data_21ba5d70a3665570 [15317] =
  "\xee\x09\x5a\x8a\x14\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc3"
  "\xba\x1d\x0d\xbb\x25\xb3\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\xbe\x28"
  "\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xb1\xb2\x1d"
  "\xb4\x24\x28\xb5\x28\xb6\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc2"
  "\x1c\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x1d\x0c\x0c\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x0c\x1d\x0c\x0c\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x0c\x0c\x0d\x1c\x0c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x08\x8a\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x0d\x0d\x0d\x1b\x0d\x1c\x08\x8d\x0d\x24"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\x0c\x1b\x0c\x0c\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0c\x0c\x0c\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\xc1\x1c\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x83\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x84\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x84\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x06\x07\x0c\x0d\x1c\x24\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x82\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x83\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x0f\x0c\xc1\x06\x07\x85\xc2\x1c\x02\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c\x0d\x1c\x0c\x0c"
  "\x0d\x1c\x0c\x0c\x0d\x1c\x0c\x0c\x0c\x0d\x1c\x0c\x0c\x0d\x1c\x0c"
  "\x0c\x0d\x1c\x0c\x0c\x0c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\xc1\xc2\xc1\xc1\xc3\xc2\xc2\xc2\xc1\xc1\xc1\xc1\xc1\xc1\xc2\xc2"
  "\xc1\xc1\xc2\x1c\xc2\x1c\xc2\x1c\xc2\x1c\xc1\x1c\xc1\x1c\xc1\x1c"
  "\xc1\x1c\xc1\xc1\xc1\xc1\xc1\xc1\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0c\x0c\x0c\x0d\xc3\x0c\x1b\x0d\x1c\x0d\x1c\x0c\x0d\x0c\x0d"
  "\x1b\x1b\x08\x89\x0c\x1b\x1b\x1b\x08\x8a\x0d\x0d\x0c\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x08\x8a\x0c\x1b\x1b\x08\x89\x0d\x1b\x08\x88\x0c\x0d"
  "\xc1\xc1\x0c\x0d\x1b\x1b\x0d\x0c\x0d\x0c\x0c\x0c\x1b\x1b\x1b\x1b"
  "\x08\x8a\x0d\x0d\x1c\x0c\x0c\x0c\x1b\x02\x0c\x0d\x0c\x0c\x0c\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0c\x1b\x1b\x0d\x1c\x1b\x08\x8b"
  "\x0c\x0d\x0d\x1b\x1b\x08\x89\x0c\x06\x07\x0c\x0d\x0c\x0d\x0d\x0c"
  "\x0c\x0d\x0c\x0d\x0d\x0c\x1b\x0d\x0c\x0d\x0d\x1b\x1b\x08\x89\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x86\x0d\x0d\x0d\x0d\x84\xc2\xc4\xc3\x85\xc2\xc2\x0d\x83\x0d\x0d"
  "\x0d\x82\x0d\x0d\x0d\x0d\x0d\x0d\x1d\xc1\x1b\x0d\x0d\x0d\x0d\xb2"
  "\x0d\x0d\x0d\x0d\x08\x89\xc2\x80\x0c\x1b\xc0\x81\x1b\x0d\x1c\x0d"
  "\x08\x0c\xb1\x0d\x1b\x0d\x08\x89\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b"
  "\xb4\x0d\x1c\xb7\xb3\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1b\xb7\x0d"
  "\xb4\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x1b"
  "\x0d\x0d\x0d\x0d\x1b\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x28\xb6\x28\x0d\x1c\x28\x0d\x28\xb7\x28\x1b"
  "\x28\xb5\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x17\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb3\xb7\xb4\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x65\x72\x72\x6f\x72"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x17\x73\x65\x74\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73"
  "\x21\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x14\x75"
  "\x6e\x6b\x6e\x6f\x77\x6e\x2d\x65\x72\x72\x6f\x72\x2d\x6e\x61\x6d"
  "\x65\x73\x02\x15\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65"
  "\x72\x2d\x76\x65\x63\x74\x6f\x72\x03\x03\x1b\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x2f\x6e\x61\x6d\x65\x2d"
  "\x3e\x63\x6f\x64\x65\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x04\x16\x64\x65\x66\x61\x75\x6c\x74\x2d\x65"
  "\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x04\x0c\x14\x81"
  "\x85\x02\x0b\x12\x81\x85\x02\x0a\x10\x81\x87\x02\x09\x0e\x81\x87"
  "\x02\x08\x0c\x81\x87\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02"
  "\x05\x06\x81\x85\x02\x04\x04\x84\x06\x13\x25\x09\x02\x02\x02\x03"
  "\x03\x04\x04\x13\x10\x81\x85\x02\x12\x0e\x81\x85\x02\x11\x0c\x81"
  "\x87\x02\x10\x0a\x81\x87\x02\x0f\x08\x81\x87\x02\x0e\x06\x81\x85"
  "\x02\x0d\x04\x84\x06\x0f\x1e\x0a\x02\x06\x61\x70\x70\x6c\x79\x0b"
  "\x0f\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x0c"
  "\x04\x16\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x0d\x03\x06\x65\x72\x72\x6f\x72\x0e"
  "\x03\x17\x0a\x81\x87\x02\x16\x08\x81\x87\x02\x15\x06\x81\x85\x02"
  "\x14\x04\x84\x06\x09\x13\x0f\x02\x13\x20\x74\x6f\x20\x61\x20\x67"
  "\x69\x76\x65\x6e\x20\x76\x61\x6c\x75\x65\x2e\x02\x08\x44\x65\x66"
  "\x69\x6e\x65\x20\x04\x20\x61\x73\x0c\x73\x74\x6f\x72\x65\x2d\x76"
  "\x61\x6c\x75\x65\x10\x03\x10\x77\x72\x69\x74\x65\x2d\x74\x6f\x2d"
  "\x73\x74\x72\x69\x6e\x67\x11\x05\x13\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2d\x64\x65\x66\x69\x6e\x65\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x12\x07\x0d\x77\x69\x74\x68"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x13\x05\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x14\x04\x06\x77\x72\x69\x74\x65"
  "\x15\x04\x20\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65\x76"
  "\x61\x6c\x75\x61\x74\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x16\x08\x22\x18\x81\x85\x02\x21\x16\x81\x83\x02\x20\x14"
  "\x81\x85\x02\x1f\x12\x81\x83\x02\x1e\x10\x81\x85\x02\x1d\x0e\x81"
  "\x85\x02\x1c\x0c\x81\x91\x02\x1b\x0a\x81\x8d\x02\x1a\x08\x81\x85"
  "\x02\x19\x06\x81\x85\x02\x18\x04\x86\x0a\x17\x2e\x17\x02\x13\x20"
  "\x74\x6f\x20\x61\x20\x67\x69\x76\x65\x6e\x20\x76\x61\x6c\x75\x65"
  "\x2e\x02\x05\x53\x65\x74\x20\x04\x20\x74\x6f\x10\x03\x11\x05\x14"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x73\x73\x69"
  "\x67\x6e\x21\x04\x12\x07\x13\x05\x14\x04\x15\x04\x16\x08\x2d\x18"
  "\x81\x85\x02\x2c\x16\x81\x83\x02\x2b\x14\x81\x85\x02\x2a\x12\x81"
  "\x83\x02\x29\x10\x81\x85\x02\x28\x0e\x81\x85\x02\x27\x0c\x81\x91"
  "\x02\x26\x0a\x81\x8d\x02\x25\x08\x81\x85\x02\x24\x06\x81\x85\x02"
  "\x23\x04\x86\x0a\x17\x2e\x10\x02\x02\x2e\x19\x56\x61\x6c\x75\x65"
  "\x20\x74\x6f\x20\x75\x73\x65\x20\x69\x6e\x73\x74\x65\x61\x64\x20"
  "\x6f\x66\x20\x0a\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x18\x23\x53"
  "\x70\x65\x63\x69\x66\x79\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x74"
  "\x6f\x20\x75\x73\x65\x20\x69\x6e\x73\x74\x65\x61\x64\x20\x6f\x66"
  "\x20\x03\x1f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x19\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x61\x62\x6c\x65\x3f\x1a\x03\x11"
  "\x04\x12\x07\x13\x04\x14\x04\x15\x04\x16\x09\x38\x18\x81\x85\x02"
  "\x37\x16\x81\x83\x02\x36\x14\x81\x85\x02\x35\x12\x81\x83\x02\x34"
  "\x10\x81\x85\x02\x33\x0e\x81\x8d\x02\x32\x0c\x81\x8b\x02\x31\x0a"
  "\x81\x85\x02\x30\x08\x81\x8b\x02\x2f\x06\x81\x89\x02\x2e\x04\x86"
  "\x0a\x17\x2f\x1b\x02\x08\x0b\x0e\x4e\x65\x77\x20\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x29\x53\x70\x65\x63\x69\x66\x79\x20\x61\x20"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x74\x6f\x20\x75\x73\x65"
  "\x20\x69\x6e\x20\x69\x74\x73\x20\x70\x6c\x61\x63\x65\x2e\x18\x03"
  "\x19\x03\x1a\x07\x13\x04\x14\x77\x69\x74\x68\x69\x6e\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x1c\x03\x16\x06\x40\x12"
  "\x81\x85\x02\x3f\x10\x81\x81\x02\x3e\x0e\x81\x83\x02\x3d\x0c\x82"
  "\x02\x3c\x0a\x81\x85\x02\x3b\x08\x81\x89\x02\x3a\x06\x81\x87\x02"
  "\x39\x04\x85\x08\x11\x23\x1d\x02\x09\x06\x64\x61\x74\x75\x6d\x1e"
  "\x09\x6f\x70\x65\x72\x61\x74\x6f\x72\x1f\x08\x6f\x70\x65\x72\x61"
  "\x6e\x64\x20\x04\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73"
  "\x69\x67\x6e\x61\x6c\x6c\x65\x72\x21\x07\x1b\x69\x6c\x6c\x65\x67"
  "\x61\x6c\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2f\x75\x73\x65\x2d"
  "\x76\x61\x6c\x75\x65\x22\x04\x09\x6c\x69\x73\x74\x2d\x72\x65\x66"
  "\x23\x04\x45\x0c\x81\x85\x02\x44\x0a\x81\x83\x02\x43\x08\x81\x8b"
  "\x02\x42\x06\x81\x83\x02\x41\x04\x83\x04\x0b\x16\x24\x02\x0a\x0b"
  "\x0d\x4e\x65\x77\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x29\x53\x70"
  "\x65\x63\x69\x66\x79\x20\x61\x6e\x20\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x20\x74\x6f\x20\x75\x73\x65\x20\x69\x6e\x20\x69\x74\x73\x20"
  "\x70\x6c\x61\x63\x65\x2e\x18\x03\x30\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6e\x6f\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x63\x6f\x64\x65\x25\x03\x1a\x07\x13\x04\x1c\x03"
  "\x16\x05\x13\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x26\x07\x4e\x14\x81\x85\x02\x4d\x12\x81\x85"
  "\x02\x4c\x10\x81\x81\x02\x4b\x0e\x81\x83\x02\x4a\x0c\x82\x02\x49"
  "\x0a\x81\x85\x02\x48\x08\x81\x8d\x02\x47\x06\x81\x8b\x02\x46\x04"
  "\x87\x0c\x13\x27\x27\x02\x0b\x09\x66\x69\x6c\x65\x6e\x61\x6d\x65"
  "\x28\x05\x76\x65\x72\x62\x05\x6e\x6f\x75\x6e\x07\x72\x65\x61\x73"
  "\x6f\x6e\x1f\x09\x6f\x70\x65\x72\x61\x6e\x64\x73\x29\x24\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c"
  "\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x65\x72\x72\x6f"
  "\x72\x02\x04\x21\x09\x19\x66\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x2a\x08"
  "\x15\x66\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x72\x65\x74\x72\x79\x2b\x04\x23\x05\x55\x10\x81\x8b\x02\x54\x0e"
  "\x81\x83\x02\x53\x0c\x81\x83\x02\x52\x0a\x81\x91\x02\x51\x08\x81"
  "\x81\x02\x50\x06\x81\x85\x02\x4f\x04\x82\x02\x0f\x1e\x23\x02\x0c"
  "\x0b\x05\x4e\x65\x77\x20\x26\x20\x6e\x61\x6d\x65\x20\x28\x61\x6e"
  "\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x74\x6f\x20\x62"
  "\x65\x20\x65\x76\x61\x6c\x75\x61\x74\x65\x64\x29\x18\x08\x54\x72"
  "\x79\x20\x74\x6f\x20\x0e\x20\x61\x20\x64\x69\x66\x66\x65\x72\x65"
  "\x6e\x74\x20\x02\x2e\x03\x19\x03\x1a\x07\x14\x05\x14\x04\x1c\x07"
  "\x13\x05\x26\x03\x16\x09\x60\x18\x81\x85\x02\x5f\x16\x81\x83\x02"
  "\x5e\x14\x81\x85\x02\x5d\x12\x81\x83\x02\x5c\x10\x81\x83\x02\x5b"
  "\x0e\x81\x93\x02\x5a\x0c\x81\x85\x02\x59\x0a\x81\x91\x02\x58\x08"
  "\x81\x91\x02\x57\x06\x81\x8f\x02\x56\x04\x89\x10\x17\x32\x18\x02"
  "\x0d\x0b\x06\x72\x65\x74\x72\x79\x08\x54\x72\x79\x20\x74\x6f\x20"
  "\x0b\x20\x74\x68\x65\x20\x73\x61\x6d\x65\x20\x08\x20\x61\x67\x61"
  "\x69\x6e\x2e\x07\x76\x61\x6c\x75\x65\x73\x02\x03\x19\x03\x1a\x07"
  "\x14\x07\x13\x04\x1c\x06\x67\x10\x81\x83\x02\x66\x0e\x81\x83\x02"
  "\x65\x0c\x81\x91\x02\x64\x0a\x81\x8f\x02\x63\x08\x81\x8f\x02\x62"
  "\x06\x81\x8d\x02\x61\x04\x88\x0e\x0f\x24\x1c\x02\x0e\x04\x63\x61"
  "\x72\x16\x04\x63\x64\x72\x13\x6f\x12\xfd\xff\x03\x6e\x10\xfd\xff"
  "\x03\x6d\x0e\xfd\xff\x03\x6c\x0c\xfd\xff\x03\x6b\x0a\xfd\xff\x03"
  "\x6a\x08\xfd\xff\x03\x69\x06\xff\xff\x03\x68\x04\x85\x08\x11\x17"
  "\x2c\x02\x0f\x03\x1e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x66\x69\x72\x73\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x2d\x03\x11\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x6e\x65\x78\x74\x2e\x03\x1a\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2d\x3e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x04\x72\x08\x81\x83\x02\x71\x06\x81\x83\x02\x70\x04\x83"
  "\x04\x07\x11\x30\x02\x10\x03\x2d\x03\x2e\x03\x0d\x61\x70\x70\x6c"
  "\x79\x2d\x66\x72\x61\x6d\x65\x3f\x31\x03\x2f\x04\x10\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x66\x2f\x03\x15\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x32\x03\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x3f"
  "\x08\x7a\x12\x81\x87\x02\x79\x10\x81\x87\x02\x78\x0e\x81\x85\x02"
  "\x77\x0c\x81\x85\x02\x76\x0a\x81\x85\x02\x75\x08\x81\x83\x02\x74"
  "\x06\x81\x83\x02\x73\x04\x83\x04\x11\x24\x33\x02\x11\x7b\x04\x83"
  "\x04\x03\x34\x02\x12\x03\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x63\x6f\x64\x65\x35\x03"
  "\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72"
  "\x6e\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x36\x03\x7d\x06"
  "\x81\x83\x02\x7c\x04\x83\x04\x05\x0d\x37\x02\x13\x1b\x72\x65\x74"
  "\x75\x72\x6e\x2d\x63\x6f\x64\x65\x3a\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x61\x70\x70\x6c\x79\x38\x1f\x72\x65\x74\x75\x72\x6e\x2d"
  "\x63\x6f\x64\x65\x3a\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x61\x70"
  "\x70\x6c\x79\x2d\x76\x61\x6c\x39\x03\x03\x35\x02\x82\x01\x0c\x81"
  "\x83\x02\x81\x01\x0a\x81\x83\x02\x80\x01\x08\x81\x83\x02\x7f\x06"
  "\x81\x83\x02\x7e\x04\x83\x04\x0b\x15\x3a\x02\x14\x04\x2f\x02\x83"
  "\x01\x04\x83\x04\x03\x0a\x3b\x02\x15\x04\x2f\x02\x85\x01\x06\x81"
  "\x85\x02\x84\x01\x04\x84\x06\x05\x0c\x3c\x02\x16\x0e\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x3d\x03\x15\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74"
  "\x73\x05\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69"
  "\x73\x74\x3e\x03\x88\x01\x08\x81\x87\x02\x87\x01\x06\x81\x83\x02"
  "\x86\x01\x04\x83\x04\x07\x11\x3f\x02\x17\x04\x2f\x02\x89\x01\x04"
  "\x83\x04\x03\x0a\x40\x02\x18\x04\x2f\x02\x8a\x01\x04\x83\x04\x03"
  "\x0a\x41\x02\x19\x23\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20"
  "\x50\x4f\x50\x2d\x52\x45\x54\x55\x52\x4e\x2d\x45\x52\x52\x4f\x52"
  "\x20\x66\x72\x61\x6d\x65\x2e\x1d\x72\x65\x74\x75\x72\x6e\x2d\x63"
  "\x6f\x64\x65\x3a\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x2d\x65"
  "\x72\x72\x6f\x72\x42\x02\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x03\x35\x03\x0e\x03\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x03\x2e"
  "\x04\x2f\x07\x93\x01\x14\x81\x83\x02\x92\x01\x12\x81\x83\x02\x91"
  "\x01\x10\x81\x83\x02\x90\x01\x0e\x81\x85\x02\x8f\x01\x0c\x81\x83"
  "\x02\x8e\x01\x0a\x81\x83\x02\x8d\x01\x08\x81\x83\x02\x8c\x01\x06"
  "\x81\x83\x02\x8b\x01\x04\x83\x04\x13\x29\x2e\x02\x1a\x04\x2f\x02"
  "\x94\x01\x04\x83\x04\x03\x0a\x43\x02\x1b\x04\x2f\x02\x95\x01\x04"
  "\x83\x04\x03\x0a\x44\x02\x1c\x23\x72\x65\x74\x75\x72\x6e\x2d\x63"
  "\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x65\x72\x72"
  "\x6f\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x45\x02\x03\x35\x02\x98"
  "\x01\x08\x81\x83\x02\x97\x01\x06\x81\x83\x02\x96\x01\x04\x83\x04"
  "\x07\x10\x46\x02\x1d\x04\x2f\x02\x99\x01\x04\x83\x04\x03\x0a\x47"
  "\x02\x1e\x01\x21\x01\x2e\x07\x65\x72\x72\x6f\x72\x20\x1a\x73\x79"
  "\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x2d"
  "\x6d\x65\x73\x73\x61\x67\x65\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74"
  "\x79\x70\x65\x3f\x48\x1e\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f"
  "\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65"
  "\x72\x3f\x49\x03\x27\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x73"
  "\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72"
  "\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x03\x11\x03\x0c\x73"
  "\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x04\x14\x05\x0f\x73\x74"
  "\x72\x69\x6e\x67\x2d\x72\x65\x70\x6c\x61\x63\x65\x07\xa3\x01\x16"
  "\x81\x85\x02\xa2\x01\x14\x81\x85\x02\xa1\x01\x12\x81\x83\x02\xa0"
  "\x01\x10\x81\x85\x02\x9f\x01\x0e\x81\x87\x02\x9e\x01\x0c\x81\x89"
  "\x02\x9d\x01\x0a\x81\x85\x02\x9c\x01\x08\x81\x83\x02\x9b\x01\x06"
  "\x83\x04\x9a\x01\x04\x81\x89\x02\x15\x2e\x14\x02\x1f\x0a\x75\x6e"
  "\x64\x65\x72\x66\x6c\x6f\x77\x11\x19\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x70\x6f\x69\x6e\x74\x20\x75\x6e\x64\x65\x72\x66\x6c\x6f"
  "\x77\x09\x6f\x76\x65\x72\x66\x6c\x6f\x77\x4a\x18\x66\x6c\x6f\x61"
  "\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x20\x6f\x76\x65\x72\x66"
  "\x6c\x6f\x77\x0a\x75\x6e\x64\x65\x72\x66\x6c\x6f\x77\x12\x69\x6e"
  "\x76\x61\x6c\x69\x64\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x4b"
  "\x21\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x70\x6f\x69\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x09\x6f\x76\x65\x72\x66\x6c\x6f\x77\x0f\x69\x6e\x65\x78\x61"
  "\x63\x74\x2d\x72\x65\x73\x75\x6c\x74\x4c\x12\x69\x6e\x65\x78\x61"
  "\x63\x74\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x1e\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x20\x69\x6e\x65\x78"
  "\x61\x63\x74\x20\x72\x65\x73\x75\x6c\x74\x12\x69\x6e\x76\x61\x6c"
  "\x69\x64\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x0f\x64\x69\x76"
  "\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x4d\x0f\x64\x69\x76"
  "\x69\x64\x65\x20\x62\x79\x20\x7a\x65\x72\x6f\x0f\x69\x6e\x65\x78"
  "\x61\x63\x74\x20\x72\x65\x73\x75\x6c\x74\x1e\x66\x6c\x6f\x61\x74"
  "\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x64\x69\x76\x69\x64\x65"
  "\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x4e\x1e\x66\x6c\x6f\x61\x74\x69"
  "\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x20\x64\x69\x76\x69\x64\x65\x20"
  "\x62\x79\x20\x7a\x65\x72\x6f\x0c\x64\x69\x76\x69\x64\x65\x20\x62"
  "\x79\x20\x30\x17\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69"
  "\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x4f\x17\x69\x6e\x74\x65"
  "\x67\x65\x72\x20\x64\x69\x76\x69\x64\x65\x20\x62\x79\x20\x7a\x65"
  "\x72\x6f\x1b\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e"
  "\x74\x20\x64\x69\x76\x69\x64\x65\x20\x62\x79\x20\x30\x14\x69\x6e"
  "\x74\x65\x67\x65\x72\x20\x64\x69\x76\x69\x64\x65\x20\x62\x79\x20"
  "\x30\x04\x12\x73\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78"
  "\x2d\x63\x69\x3f\x02\xb3\x01\x22\x81\x83\x02\xb2\x01\x20\x81\x83"
  "\x02\xb1\x01\x1e\x81\x83\x02\xb0\x01\x1c\x81\x83\x02\xaf\x01\x1a"
  "\x81\x83\x02\xae\x01\x18\x81\x83\x02\xad\x01\x16\x81\x83\x02\xac"
  "\x01\x14\x81\x83\x02\xab\x01\x12\x81\x83\x02\xaa\x01\x10\x81\x83"
  "\x02\xa9\x01\x0e\x81\x83\x02\xa8\x01\x0c\x81\x83\x02\xa7\x01\x0a"
  "\x81\x83\x02\xa6\x01\x08\x81\x83\x02\xa5\x01\x06\x81\x83\x02\xa4"
  "\x01\x04\x83\x04\x21\x3d\x50\x02\x20\x17\x64\x65\x74\x65\x72\x6d"
  "\x69\x6e\x65\x20\x65\x78\x69\x73\x74\x65\x6e\x63\x65\x20\x6f\x66"
  "\x12\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20"
  "\x6f\x66\x05\x6f\x70\x65\x6e\x14\x72\x65\x61\x64\x20\x70\x65\x72"
  "\x6d\x69\x73\x73\x69\x6f\x6e\x73\x20\x6f\x66\x13\x73\x65\x74\x20"
  "\x70\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x73\x20\x6f\x66\x1a\x72"
  "\x65\x61\x64\x20\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x20\x74\x69\x6d\x65\x20\x6f\x66\x13\x72\x65\x61\x64\x20\x61\x74"
  "\x74\x72\x69\x62\x75\x74\x65\x73\x20\x6f\x66\x07\x63\x72\x65\x61"
  "\x74\x65\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x05\x63\x6f\x70"
  "\x79\x05\x6c\x69\x6e\x6b\x07\x64\x65\x6c\x65\x74\x65\x07\x72\x65"
  "\x6e\x61\x6d\x65\x05\x66\x69\x6c\x65\x06\x74\x6f\x75\x63\x68\x0b"
  "\x66\x69\x6c\x65\x2d\x74\x6f\x75\x63\x68\x0c\x66\x69\x6c\x65\x2d"
  "\x72\x65\x6e\x61\x6d\x65\x11\x66\x69\x6c\x65\x2d\x72\x65\x6d\x6f"
  "\x76\x65\x2d\x6c\x69\x6e\x6b\x0c\x66\x69\x6c\x65\x2d\x72\x65\x6d"
  "\x6f\x76\x65\x0a\x6c\x69\x6e\x6b\x2d\x66\x69\x6c\x65\x0f\x66\x69"
  "\x6c\x65\x2d\x6c\x69\x6e\x6b\x2d\x73\x6f\x66\x74\x0f\x66\x69\x6c"
  "\x65\x2d\x6c\x69\x6e\x6b\x2d\x68\x61\x72\x64\x0a\x66\x69\x6c\x65"
  "\x2d\x63\x6f\x70\x79\x11\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x64\x65\x6c\x65\x74\x65\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x6d\x61\x6b\x65\x19\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x10\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x17\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64"
  "\x69\x72\x65\x63\x74\x0e\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x2d\x74"
  "\x69\x6d\x65\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64"
  "\x65\x73\x21\x0c\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x0b"
  "\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x13\x6e\x65\x77\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x6f\x70\x65\x6e\x1d\x6e\x65"
  "\x77\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x51\x19\x6e\x65\x77\x2d"
  "\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6f\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x52\x1c\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x53\x1d\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e"
  "\x2d\x61\x70\x70\x65\x6e\x64\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x54"
  "\x19\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x55\x15\x66\x69\x6c\x65\x2d"
  "\x6f\x70\x65\x6e\x2d\x69\x6f\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x56"
  "\x18\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x57\x19\x66\x69\x6c\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x61\x70\x70\x65\x6e\x64\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x58\x13\x66\x69\x6c\x65\x2d\x74\x79\x70\x65\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x11\x66\x69\x6c\x65\x2d\x74\x79\x70\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x10\x66\x69\x6c\x65\x2d\x73\x6f\x66"
  "\x74\x2d\x6c\x69\x6e\x6b\x3f\x10\x66\x69\x6c\x65\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x3f\x14\x66\x69\x6c\x65\x2d\x65\x78\x69"
  "\x73\x74\x73\x2d\x64\x69\x72\x65\x63\x74\x3f\x0d\x66\x69\x6c\x65"
  "\x2d\x65\x78\x69\x73\x74\x73\x3f\xc4\x01\x24\x83\x04\xc3\x01\x22"
  "\x83\x04\xc2\x01\x20\x83\x04\xc1\x01\x1e\x83\x04\xc0\x01\x1c\x83"
  "\x04\xbf\x01\x1a\x83\x04\xbe\x01\x18\x83\x04\xbd\x01\x16\x83\x04"
  "\xbc\x01\x14\x83\x04\xbb\x01\x12\x83\x04\xba\x01\x10\x83\x04\xb9"
  "\x01\x0e\x83\x04\xb8\x01\x0c\x83\x04\xb7\x01\x0a\x83\x04\xb6\x01"
  "\x08\x83\x04\xb5\x01\x06\x83\x04\xb4\x01\x04\x83\x04\x23\x55\x59"
  "\x02\x21\x17\x58\x43\x50\x54\x5f\x46\x4c\x4f\x41\x54\x5f\x53\x54"
  "\x41\x43\x4b\x5f\x43\x48\x45\x43\x4b\x15\x58\x43\x50\x54\x5f\x42"
  "\x31\x4e\x50\x58\x5f\x45\x52\x52\x41\x54\x41\x5f\x30\x32\x1c\x58"
  "\x43\x50\x54\x5f\x46\x4c\x4f\x41\x54\x5f\x44\x45\x4e\x4f\x52\x4d"
  "\x41\x4c\x5f\x4f\x50\x45\x52\x41\x4e\x44\x1d\x58\x43\x50\x54\x5f"
  "\x46\x4c\x4f\x41\x54\x5f\x49\x4e\x56\x41\x4c\x49\x44\x5f\x4f\x50"
  "\x45\x52\x41\x54\x49\x4f\x4e\x1a\x58\x43\x50\x54\x5f\x46\x4c\x4f"
  "\x41\x54\x5f\x49\x4e\x45\x58\x41\x43\x54\x5f\x52\x45\x53\x55\x4c"
  "\x54\x1c\x58\x43\x50\x54\x5f\x49\x4e\x54\x45\x47\x45\x52\x5f\x44"
  "\x49\x56\x49\x44\x45\x5f\x42\x59\x5f\x5a\x45\x52\x4f\x16\x58\x43"
  "\x50\x54\x5f\x49\x4e\x54\x45\x47\x45\x52\x5f\x4f\x56\x45\x52\x46"
  "\x4c\x4f\x57\x1a\x58\x43\x50\x54\x5f\x46\x4c\x4f\x41\x54\x5f\x44"
  "\x49\x56\x49\x44\x45\x5f\x42\x59\x5f\x5a\x45\x52\x4f\x11\x4a\x4b"
  "\x4f\x4c\x4e\x4d\x14\x58\x43\x50\x54\x5f\x46\x4c\x4f\x41\x54\x5f"
  "\x4f\x56\x45\x52\x46\x4c\x4f\x57\x07\x53\x49\x47\x46\x50\x45\x15"
  "\x58\x43\x50\x54\x5f\x46\x4c\x4f\x41\x54\x5f\x55\x4e\x44\x45\x52"
  "\x46\x4c\x4f\x57\x05\x6f\x73\x2f\x32\x12\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x66\x61\x73\x64\x75\x6d\x70\x03\x3a\x20\x13\x05"
  "\x63\x6f\x64\x65\x4f\x05\x6e\x61\x6d\x65\x4e\x0f\x48\x61\x72\x64"
  "\x77\x61\x72\x65\x20\x74\x72\x61\x70\x20\x15\x75\x73\x65\x72\x2d"
  "\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x73\x65\x74\x15"
  "\x55\x73\x65\x72\x20\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x20\x72"
  "\x65\x73\x65\x74\x0e\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72"
  "\x61\x70\x4e\x4f\x3d\x4f\x62\x6a\x65\x63\x74\x20\x63\x61\x6e\x6e"
  "\x6f\x74\x20\x62\x65\x20\x64\x75\x6d\x70\x65\x64\x20\x62\x65\x63"
  "\x61\x75\x73\x65\x20\x69\x74\x20\x63\x6f\x6e\x74\x61\x69\x6e\x73"
  "\x20\x61\x6e\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a"
  "\x20\x1e\x1f\x20\x12\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x6f\x76"
  "\x65\x72\x66\x6c\x6f\x77\x14\x66\x61\x73\x64\x75\x6d\x70\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x14\x20\x69\x73\x20\x6e"
  "\x6f\x74\x20\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2e\x1a\x77"
  "\x72\x6f\x6e\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x73\x1e\x14\x75\x6e\x64\x65\x66\x69"
  "\x6e\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1e\x05\x74"
  "\x79\x70\x65\x29\x0c\x54\x68\x65\x20\x6f\x62\x6a\x65\x63\x74\x20"
  "\x1e\x29\x14\x69\x6e\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x29\x36\x20\x66\x61\x69\x6c\x65\x64\x3a"
  "\x20\x69\x74\x20\x63\x6f\x6e\x74\x61\x69\x6e\x73\x20\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x73\x20\x77\x69\x74\x68\x20\x69\x6e\x63"
  "\x6f\x72\x72\x65\x63\x74\x20\x61\x72\x69\x74\x79\x2e\x0d\x66\x61"
  "\x73\x6c\x6f\x61\x64\x2d\x62\x61\x6e\x64\x0f\x62\x69\x6e\x61\x72"
  "\x79\x2d\x66\x61\x73\x6c\x6f\x61\x64\x0a\x6c\x6f\x61\x64\x2d\x62"
  "\x61\x6e\x64\x2c\x20\x66\x61\x69\x6c\x65\x64\x3a\x20\x69\x74\x27"
  "\x73\x20\x74\x6f\x6f\x20\x6c\x61\x72\x67\x65\x20\x74\x6f\x20\x66"
  "\x69\x74\x20\x69\x6e\x20\x74\x68\x65\x20\x68\x65\x61\x70\x2e\x17"
  "\x77\x72\x6f\x6e\x67\x2d\x61\x72\x69\x74\x79\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x73\x16\x0c\x12\x66\x61\x73\x6c\x2d\x66\x69"
  "\x6c\x65\x2d\x74\x6f\x6f\x2d\x62\x69\x67\x36\x20\x66\x61\x69\x6c"
  "\x65\x64\x3a\x20\x65\x69\x74\x68\x65\x72\x20\x69\x74\x27\x73\x20"
  "\x6e\x6f\x74\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x72\x20\x74\x68"
  "\x65\x20\x77\x72\x6f\x6e\x67\x20\x76\x65\x72\x73\x69\x6f\x6e\x2e"
  "\x1a\x66\x61\x73\x6c\x6f\x61\x64\x2d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x6d\x69\x73\x6d\x61\x74\x63\x68\x0d\x20\x73\x79\x73\x74"
  "\x65\x6d\x20\x63\x61\x6c\x6c\x0c\x74\x68\x65\x20\x65\x72\x72\x6f"
  "\x72\x3a\x20\x02\x2e\x28\x28\x1f\x29\x1c\x66\x61\x73\x6c\x2d\x66"
  "\x69\x6c\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x6d\x69\x73"
  "\x6d\x61\x74\x63\x68\x0b\x65\x72\x72\x6f\x72\x2d\x74\x79\x70\x65"
  "\x4f\x1d\x41\x74\x74\x65\x6d\x70\x74\x20\x74\x6f\x20\x72\x65\x61"
  "\x64\x20\x62\x69\x6e\x61\x72\x79\x20\x66\x69\x6c\x65\x20\x05\x74"
  "\x68\x65\x20\x0d\x73\x79\x73\x74\x65\x6d\x20\x63\x61\x6c\x6c\x20"
  "\x48\x1e\x0c\x2c\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20\x13\x66"
  "\x61\x73\x6c\x2d\x66\x69\x6c\x65\x2d\x62\x61\x64\x2d\x64\x61\x74"
  "\x61\x13\x63\x68\x61\x6e\x6e\x65\x6c\x20\x74\x61\x62\x6c\x65\x20"
  "\x66\x75\x6c\x6c\x05\x66\x69\x6c\x65\x05\x6f\x70\x65\x6e\x54\x52"
  "\x51\x53\x58\x56\x55\x57\x0e\x66\x61\x73\x6c\x6f\x61\x64\x2d\x65"
  "\x72\x72\x6f\x72\x13\x2c\x20\x77\x68\x69\x6c\x65\x20\x65\x78\x65"
  "\x63\x75\x74\x69\x6e\x67\x20\x1f\x29\x0c\x73\x79\x73\x74\x65\x6d"
  "\x2d\x63\x61\x6c\x6c\x58\x4f\x2a\x20\x77\x61\x73\x20\x67\x69\x76"
  "\x65\x6e\x20\x61\x20\x70\x72\x6f\x63\x65\x73\x73\x20\x74\x68\x61"
  "\x74\x20\x68\x61\x73\x20\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64"
  "\x2e\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x12\x73\x79\x73\x74\x65\x6d"
  "\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x58\x4f\x2d\x20\x63"
  "\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74"
  "\x65\x20\x61\x20\x63\x68\x61\x6e\x6e\x65\x6c\x20\x6f\x72\x20\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2e\x23\x20\x73\x69\x67\x6e"
  "\x61\x6c\x6c\x65\x64\x20\x61\x6e\x20\x61\x6e\x6f\x6e\x79\x6d\x6f"
  "\x75\x73\x20\x49\x2f\x4f\x20\x65\x72\x72\x6f\x72\x2e\x13\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64"
  "\x2c\x20\x77\x61\x73\x20\x63\x61\x6c\x6c\x65\x64\x20\x77\x69\x74"
  "\x68\x20\x61\x6e\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72\x69\x61"
  "\x74\x65\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x2e\x14\x6f\x75\x74"
  "\x2d\x6f\x66\x2d\x66\x69\x6c\x65\x2d\x68\x61\x6e\x64\x6c\x65\x73"
  "\x13\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x69\x6f\x2d\x65\x72"
  "\x72\x6f\x72\x2f\x20\x69\x73\x20\x6e\x6f\x74\x20\x69\x6d\x70\x6c"
  "\x65\x6d\x65\x6e\x74\x65\x64\x20\x66\x6f\x72\x20\x74\x68\x69\x73"
  "\x20\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x20\x73\x79\x73\x74\x65"
  "\x6d\x2e\x1a\x54\x68\x65\x20\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65"
  "\x64\x20\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x20\x14\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72"
  "\x2f\x20\x69\x73\x20\x6e\x6f\x74\x20\x69\x6d\x70\x6c\x65\x6d\x65"
  "\x6e\x74\x65\x64\x20\x69\x6e\x20\x74\x68\x69\x73\x20\x76\x65\x72"
  "\x73\x69\x6f\x6e\x20\x6f\x66\x20\x53\x63\x68\x65\x6d\x65\x2e\x1e"
  "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x1f\x75\x6e"
  "\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x66\x6f\x72\x2d\x6f\x73\x1f\x20\x73\x69"
  "\x67\x6e\x61\x6c\x6c\x65\x64\x20\x61\x6e\x20\x61\x6e\x6f\x6e\x79"
  "\x6d\x6f\x75\x73\x20\x65\x72\x72\x6f\x72\x2e\x1f\x18\x75\x6e\x69"
  "\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x0f\x54\x68\x65\x20\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x20\x10\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x72\x65\x74"
  "\x75\x72\x6e\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x72\x72\x6f\x72\x1f\x29\x16"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x2d\x39\x16\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x38\x16\x77\x72\x6f\x6e"
  "\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d"
  "\x37\x16\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x2d\x36\x16\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x35\x16\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x2d\x34\x16\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x2d\x33\x16\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x32\x16"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x2d\x31\x16\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x30\x15\x62\x61\x64\x2d"
  "\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x39"
  "\x0a\x15\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x2d\x38\x09\x15\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x37\x08\x15\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x2d\x36\x15\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x2d\x35\x15\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x34\x15\x62\x61\x64"
  "\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d"
  "\x33\x15\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x2d\x32\x14\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x0f\x6c\x69\x6e\x6b\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x13\x6c\x65\x78\x69\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17\x73\x61\x66"
  "\x65\x2d\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x15\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x31\x26\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x6c\x6f\x6f"
  "\x6b\x75\x70\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x22\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x3f\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x21\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x25\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73\x61\x66"
  "\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x20\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x10\x61\x63\x63\x65\x73\x73\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x14\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x0b\x65\x76\x61"
  "\x6c\x2d\x65\x72\x72\x6f\x72\x15\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x30\x02\x1a\x73\x65"
  "\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d"
  "\x76\x65\x63\x74\x6f\x72\x21\x0b\x0e\x6d\x61\x63\x72\x6f\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x19\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x14"
  "\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x10\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x11\x75\x6e\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x14\x73\x79\x73\x74\x65\x6d\x2d\x65\x72\x72\x6f"
  "\x72\x2d\x76\x65\x63\x74\x6f\x72\x0c\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x09\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x12\x20\x2d\x2d\x20\x67\x65\x74"
  "\x20\x61\x20\x77\x69\x7a\x61\x72\x64\x2e\x58\x19\x67\x65\x74\x2d"
  "\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65"
  "\x63\x74\x6f\x72\x3d\x0b\x65\x72\x72\x6f\x72\x2d\x63\x6f\x64\x65"
  "\x58\x14\x65\x72\x72\x6f\x72\x2d\x77\x69\x74\x68\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x1b\x41\x6e\x6f\x6d\x61\x6c\x6f\x75\x73\x20"
  "\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x20\x65\x72\x72\x6f\x72\x20"
  "\x1a\x61\x6e\x6f\x6d\x61\x6c\x6f\x75\x73\x2d\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x58\x06\x65\x78\x74\x72"
  "\x61\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x65\x72\x72\x6f\x72"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x11\x70\x6f\x70\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x65\x72\x72\x6f\x72\x13\x69\x6e\x74\x65\x72\x6e"
  "\x61\x6c\x2d\x61\x70\x70\x6c\x79\x2d\x76\x61\x6c\x0f\x69\x6e\x74"
  "\x65\x72\x6e\x61\x6c\x2d\x61\x70\x70\x6c\x79\x38\x39\x42\x45\x29"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x61"
  "\x6e\x6f\x6d\x61\x6c\x6f\x75\x73\x2d\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x65\x72\x72\x6f\x72\x58\x29\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x72\x72"
  "\x6f\x72\x57\x27\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x56\x2e\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x69\x6d\x70"
  "\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x66\x6f\x72\x2d\x6f\x73\x55\x23\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x54\x22\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x69\x6f\x2d\x65\x72\x72\x6f\x72"
  "\x53\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x6f\x75\x74\x2d\x6f\x66\x2d\x66\x69\x6c\x65\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x73\x52\x28\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x70\x72\x6f\x63\x65\x73\x73\x2d\x74\x65\x72"
  "\x6d\x69\x6e\x61\x74\x65\x64\x2d\x65\x72\x72\x6f\x72\x51\x21\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x79"
  "\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x4f"
  "\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x66\x61\x73\x6c\x6f\x61\x64\x2d\x65\x72\x72\x6f\x72\x4e\x22\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x61"
  "\x73\x6c\x2d\x66\x69\x6c\x65\x2d\x62\x61\x64\x2d\x64\x61\x74\x61"
  "\x4d\x2b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x66\x61\x73\x6c\x2d\x66\x69\x6c\x65\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x6d\x69\x73\x6d\x61\x74\x63\x68\x4c\x21\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x61\x73"
  "\x6c\x2d\x66\x69\x6c\x65\x2d\x74\x6f\x6f\x2d\x62\x69\x67\x4b\x26"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x77"
  "\x72\x6f\x6e\x67\x2d\x61\x72\x69\x74\x79\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x73\x4a\x1c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x66\x61\x73\x6c\x6f\x61\x64\x2d\x62\x61"
  "\x6e\x64\x48\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x69\x6e\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x3d\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x66\x61\x73\x64\x75\x6d\x70\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x29\x1d\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x68\x61\x72\x64\x77"
  "\x61\x72\x65\x2d\x74\x72\x61\x70\x28\x24\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x73\x65\x72\x2d\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x73\x65\x74\x20\x13\x68"
  "\x6f\x6f\x6b\x2f\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61"
  "\x70\x1f\x1c\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x65\x72\x72\x6f\x72\x58\x20\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x62\x6f\x75\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x23\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x61\x73\x73\x69\x67"
  "\x6e\x65\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x1d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6d\x61\x63\x72"
  "\x6f\x2d\x62\x69\x6e\x64\x69\x6e\x67\x0e\x22\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x62\x61\x64\x2d\x72\x61"
  "\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x23\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x57"
  "\x56\x55\x54\x52\x45\x51\x4f\x1a\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c\x65\x2d\x65\x72\x72\x6f"
  "\x72\x4e\x4d\x4c\x4b\x4a\x48\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x64"
  "\x61\x74\x75\x6d\x3d\x29\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x77\x72\x6f\x6e\x67\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x6f\x66\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x27\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x6c"
  "\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x6f\x76\x65"
  "\x72\x66\x6c\x6f\x77\x29\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x73\x65\x72\x69\x6f\x75\x73\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x20\x30\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6e\x76\x61\x6c\x69\x64\x2d"
  "\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x26\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6e"
  "\x65\x78\x61\x63\x74\x2d\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70"
  "\x6f\x69\x6e\x74\x2d\x72\x65\x73\x75\x6c\x74\x28\x28\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x6c\x6f\x61"
  "\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x75\x6e\x64\x65\x72"
  "\x66\x6c\x6f\x77\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69"
  "\x6e\x74\x2d\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72"
  "\x6f\x1e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x20"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x61"
  "\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x2d\x65\x72\x72\x6f\x72\x1f"
  "\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79\x73\x74\x65\x6d\x2b\x03"
  "\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72"
  "\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x02\x1b\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x2f\x63\x6f"
  "\x64\x65\x2d\x6c\x69\x6d\x69\x74\x06\x14\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x21\x04\x12\x03\x12"
  "\x03\x04\x19\x64\x65\x66\x69\x6e\x65\x2d\x6c\x6f\x77\x2d\x6c\x65"
  "\x76\x65\x6c\x2d\x68\x61\x6e\x64\x6c\x65\x72\x1f\x04\x11\x61\x63"
  "\x63\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x04\x05"
  "\x3e\x03\x04\x15\x03\x49\x03\x1a\x66\x69\x78\x65\x64\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x6c\x6f"
  "\x74\x04\x05\x65\x71\x76\x3f\x03\x1b\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x65\x72\x72\x6f\x72\x2f\x63\x6f\x64\x65\x2d\x3e\x6e"
  "\x61\x6d\x65\x04\x15\x64\x65\x66\x69\x6e\x65\x2d\x65\x72\x72\x6f"
  "\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x49\x03\x16\x69\x6c\x6c\x65"
  "\x67\x61\x6c\x2d\x61\x72\x67\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65"
  "\x72\x3e\x06\x1d\x75\x6e\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2f\x73\x74\x6f\x72\x65\x2d\x76\x61\x6c\x75\x65"
  "\x1e\x03\x2d\x06\x20\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x73\x74\x6f\x72\x65\x2d\x76"
  "\x61\x6c\x75\x65\x2d\x06\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2f"
  "\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x16\x03\x35\x04\x2f\x03\x36"
  "\x03\x17\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x76\x61\x6c\x75\x65\x36\x03\x0c\x61\x63\x63\x65\x73"
  "\x73\x2d\x6e\x61\x6d\x65\x03\x0a\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x3f\x03\x10\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61"
  "\x6d\x65\x03\x0e\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d"
  "\x65\x03\x31\x03\x15\x61\x70\x70\x6c\x79\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x6f\x70\x65\x72\x61\x6e\x64\x73\x35\x04\x0f\x77\x72\x69\x74"
  "\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x03\x32\x02\x19\x66\x69"
  "\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x73\x69\x67"
  "\x6e\x61\x6c\x6c\x65\x72\x32\x04\x0d\x03\x0f\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c\x03\x21\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c"
  "\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x03\x13\x65\x72\x72"
  "\x6f\x72\x2d\x74\x79\x70\x65\x2d\x3e\x73\x74\x72\x69\x6e\x67\x2f"
  "\x04\x10\x70\x6f\x72\x74\x2d\x65\x72\x72\x6f\x72\x2d\x74\x65\x73"
  "\x74\x03\x27\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x73\x79\x73"
  "\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x65\x72\x72\x6f\x72\x2f\x63"
  "\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x04\x13\x65\x72\x72\x6f\x72"
  "\x3a\x64\x65\x72\x69\x76\x65\x64\x2d\x70\x6f\x72\x74\x03\x1b\x66"
  "\x69\x6c\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x15\x03\x0e\x05\x1e\x69\x6e"
  "\x61\x70\x70\x6c\x69\x63\x61\x62\x6c\x65\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2f\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x13\x04\x08\x64\x69"
  "\x73\x70\x6c\x61\x79\x03\x11\x65\x6e\x74\x69\x74\x79\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x03\x08\x65\x6e\x74\x69\x74\x79\x3f"
  "\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74"
  "\x79\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x03\x19\x68\x61\x72"
  "\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x63\x6f\x64\x65\x03\x15\x68\x61\x72\x64\x77\x61\x72\x65\x2d"
  "\x74\x72\x61\x70\x2d\x66\x72\x61\x6d\x65\x3f\x03\x19\x6e\x6f\x72"
  "\x6d\x61\x6c\x69\x7a\x65\x2d\x74\x72\x61\x70\x2d\x63\x6f\x64\x65"
  "\x2d\x6e\x61\x6d\x65\x12\x38\xf5\x04\xe4\x06\x81\x87\x02\xf4\x04"
  "\xe2\x06\x81\x87\x02\xf3\x04\xe0\x06\x81\x87\x02\xf2\x04\xde\x06"
  "\x81\x87\x02\xf1\x04\xdc\x06\x81\x87\x02\xf0\x04\xda\x06\x81\x87"
  "\x02\xef\x04\xd8\x06\x81\x87\x02\xee\x04\xd6\x06\x81\x87\x02\xed"
  "\x04\xd4\x06\x81\x87\x02\xec\x04\xd2\x06\x81\x87\x02\xeb\x04\xd0"
  "\x06\x81\x87\x02\xea\x04\xce\x06\x81\x87\x02\xe9\x04\xcc\x06\x81"
  "\x89\x02\xe8\x04\xca\x06\x81\x87\x02\xe7\x04\xc8\x06\x81\x83\x02"
  "\xe6\x04\xc6\x06\x81\x85\x02\xe5\x04\xc4\x06\x81\x85\x02\xe4\x04"
  "\xc2\x06\x81\x85\x02\xe3\x04\xc0\x06\x81\x85\x02\xe2\x04\xbe\x06"
  "\x81\x83\x02\xe1\x04\xbc\x06\x81\x99\x02\xe0\x04\xba\x06\x81\x9d"
  "\x02\xdf\x04\xb8\x06\x81\x97\x02\xde\x04\xb6\x06\x81\x9b\x02\xdd"
  "\x04\xb4\x06\x81\x95\x02\xdc\x04\xb2\x06\x81\x99\x02\xdb\x04\xb0"
  "\x06\x81\x93\x02\xda\x04\xae\x06\x81\x97\x02\xd9\x04\xac\x06\x81"
  "\x91\x02\xd8\x04\xaa\x06\x81\x95\x02\xd7\x04\xa8\x06\x81\x8f\x02"
  "\xd6\x04\xa6\x06\x81\x93\x02\xd5\x04\xa4\x06\x81\x8d\x02\xd4\x04"
  "\xa2\x06\x81\x8b\x02\xd3\x04\xa0\x06\x81\x87\x02\xd2\x04\x9e\x06"
  "\x81\x91\x02\xd1\x04\x9c\x06\x81\x8b\x02\xd0\x04\x9a\x06\x81\x89"
  "\x02\xcf\x04\x98\x06\x81\x87\x02\xce\x04\x96\x06\x81\x85\x02\xcd"
  "\x04\x94\x06\x81\x8f\x02\xcc\x04\x92\x06\x81\x89\x02\xcb\x04\x90"
  "\x06\x81\x8b\x02\xca\x04\x8e\x06\x81\x89\x02\xc9\x04\x8c\x06\x81"
  "\x8b\x02\xc8\x04\x8a\x06\x81\x89\x02\xc7\x04\x88\x06\x81\x89\x02"
  "\xc6\x04\x86\x06\x81\x89\x02\xc5\x04\x84\x06\x81\x89\x02\xc4\x04"
  "\x82\x06\x81\x8d\x02\xc3\x04\x80\x06\x81\x87\x02\xc2\x04\xfe\x05"
  "\x81\x89\x02\xc1\x04\xfc\x05\x81\x85\x02\xc0\x04\xfa\x05\x81\x8d"
  "\x02\xbf\x04\xf8\x05\x81\x87\x02\xbe\x04\xf6\x05\x81\x83\x02\xbd"
  "\x04\xf4\x05\x81\x89\x02\xbc\x04\xf2\x05\x81\x89\x02\xbb\x04\xf0"
  "\x05\x81\x85\x02\xba\x04\xee\x05\x81\x85\x02\xb9\x04\xec\x05\x81"
  "\x8b\x02\xb8\x04\xea\x05\x81\x87\x02\xb7\x04\xe8\x05\x81\x87\x02"
  "\xb6\x04\xe6\x05\x81\x89\x02\xb5\x04\xe4\x05\x81\x87\x02\xb4\x04"
  "\xe2\x05\x81\x87\x02\xb3\x04\xe0\x05\x81\x85\x02\xb2\x04\xde\x05"
  "\x81\x85\x02\xb1\x04\xdc\x05\x84\x06\xb0\x04\xda\x05\x81\x8d\x02"
  "\xaf\x04\xd8\x05\x81\x87\x02\xae\x04\xd6\x05\x81\x87\x02\xad\x04"
  "\xd4\x05\x81\x8d\x02\xac\x04\xd2\x05\x81\x87\x02\xab\x04\xd0\x05"
  "\x81\x87\x02\xaa\x04\xce\x05\x81\x85\x02\xa9\x04\xcc\x05\x81\x85"
  "\x02\xa8\x04\xca\x05\x81\x89\x02\xa7\x04\xc8\x05\x81\x8d\x02\xa6"
  "\x04\xc6\x05\x81\x87\x02\xa5\x04\xc4\x05\x81\x8d\x02\xa4\x04\xc2"
  "\x05\x81\x87\x02\xa3\x04\xc0\x05\x81\x85\x02\xa2\x04\xbe\x05\x81"
  "\x85\x02\xa1\x04\xbc\x05\x84\x06\xa0\x04\xba\x05\x81\x8d\x02\x9f"
  "\x04\xb8\x05\x81\x87\x02\x9e\x04\xb6\x05\x81\x87\x02\x9d\x04\xb4"
  "\x05\x81\x87\x02\x9c\x04\xb2\x05\x81\x85\x02\x9b\x04\xb0\x05\x81"
  "\x85\x02\x9a\x04\xae\x05\x81\x89\x02\x99\x04\xac\x05\x81\x8d\x02"
  "\x98\x04\xaa\x05\x81\x87\x02\x97\x04\xa8\x05\x81\x87\x02\x96\x04"
  "\xa6\x05\x81\x89\x02\x95\x04\xa4\x05\x81\x85\x02\x94\x04\xa2\x05"
  "\x81\x85\x02\x93\x04\xa0\x05\x81\x89\x02\x92\x04\x9e\x05\x81\x8d"
  "\x02\x91\x04\x9c\x05\x81\x87\x02\x90\x04\x9a\x05\x81\x85\x02\x8f"
  "\x04\x98\x05\x81\x85\x02\x8e\x04\x96\x05\x81\x89\x02\x8d\x04\x94"
  "\x05\x81\x8d\x02\x8c\x04\x92\x05\x81\x87\x02\x8b\x04\x90\x05\x81"
  "\x85\x02\x8a\x04\x8e\x05\x84\x06\x89\x04\x8c\x05\x81\x8d\x02\x88"
  "\x04\x8a\x05\x81\x87\x02\x87\x04\x88\x05\x81\x87\x02\x86\x04\x86"
  "\x05\x81\x89\x02\x85\x04\x84\x05\x81\x8d\x02\x84\x04\x82\x05\x81"
  "\x87\x02\x83\x04\x80\x05\x81\x8d\x02\x82\x04\xfe\x04\x81\x89\x02"
  "\x81\x04\xfc\x04\x81\x85\x02\x80\x04\xfa\x04\x81\x8d\x02\xff\x03"
  "\xf8\x04\x81\x87\x02\xfe\x03\xf6\x04\x81\x87\x02\xfd\x03\xf4\x04"
  "\x81\x8d\x02\xfc\x03\xf2\x04\x81\x85\x02\xfb\x03\xf0\x04\x81\x8d"
  "\x02\xfa\x03\xee\x04\x81\x87\x02\xf9\x03\xec\x04\x81\x87\x02\xf8"
  "\x03\xea\x04\x81\x93\x02\xf7\x03\xe8\x04\x81\x87\x02\xf6\x03\xe6"
  "\x04\x81\x89\x02\xf5\x03\xe4\x04\x81\x85\x02\xf4\x03\xe2\x04\x84"
  "\x06\xf3\x03\xe0\x04\x81\x89\x02\xf2\x03\xde\x04\x81\x87\x02\xf1"
  "\x03\xdc\x04\x81\x87\x02\xf0\x03\xda\x04\x81\x93\x02\xef\x03\xd8"
  "\x04\x81\x87\x02\xee\x03\xd6\x04\x81\x93\x02\xed\x03\xd4\x04\x81"
  "\x87\x02\xec\x03\xd2\x04\x81\x85\x02\xeb\x03\xd0\x04\x81\x8d\x02"
  "\xea\x03\xce\x04\x81\x87\x02\xe9\x03\xcc\x04\x81\x93\x02\xe8\x03"
  "\xca\x04\x81\x93\x02\xe7\x03\xc8\x04\x81\x93\x02\xe6\x03\xc6\x04"
  "\x81\x85\x02\xe5\x03\xc4\x04\x84\x06\xe4\x03\xc2\x04\x81\x89\x02"
  "\xe3\x03\xc0\x04\x81\x87\x02\xe2\x03\xbe\x04\x81\x87\x02\xe1\x03"
  "\xbc\x04\x81\x91\x02\xe0\x03\xba\x04\x81\x83\x02\xdf\x03\xb8\x04"
  "\x81\x85\x02\xde\x03\xb6\x04\x81\x8d\x02\xdd\x03\xb4\x04\x81\x87"
  "\x02\xdc\x03\xb2\x04\x81\x91\x02\xdb\x03\xb0\x04\x81\x91\x02\xda"
  "\x03\xae\x04\x81\x91\x02\xd9\x03\xac\x04\x81\x8d\x02\xd8\x03\xaa"
  "\x04\x81\x8f\x02\xd7\x03\xa8\x04\x81\x91\x02\xd6\x03\xa6\x04\x81"
  "\x83\x02\xd5\x03\xa4\x04\x81\x89\x02\xd4\x03\xa2\x04\x81\x85\x02"
  "\xd3\x03\xa0\x04\x81\x85\x02\xd2\x03\x9e\x04\x81\x89\x02\xd1\x03"
  "\x9c\x04\x81\x87\x02\xd0\x03\x9a\x04\x81\x87\x02\xcf\x03\x98\x04"
  "\x81\x8b\x02\xce\x03\x96\x04\x81\x83\x02\xcd\x03\x94\x04\x81\x83"
  "\x02\xcc\x03\x92\x04\x81\x87\x02\xcb\x03\x90\x04\x81\x83\x02\xca"
  "\x03\x8e\x04\x81\x83\x02\xc9\x03\x8c\x04\x81\x85\x02\xc8\x03\x8a"
  "\x04\x81\x85\x02\xc7\x03\x88\x04\x81\x85\x02\xc6\x03\x86\x04\x81"
  "\x8d\x02\xc5\x03\x84\x04\x81\x87\x02\xc4\x03\x82\x04\x81\x89\x02"
  "\xc3\x03\x80\x04\x81\x83\x02\xc2\x03\xfe\x03\x81\x83\x02\xc1\x03"
  "\xfc\x03\x81\x83\x02\xc0\x03\xfa\x03\x81\x85\x02\xbf\x03\xf8\x03"
  "\x84\x06\xbe\x03\xf6\x03\x81\x89\x02\xbd\x03\xf4\x03\x81\x87\x02"
  "\xbc\x03\xf2\x03\x81\x87\x02\xbb\x03\xf0\x03\x81\x8b\x02\xba\x03"
  "\xee\x03\x81\x8b\x02\xb9\x03\xec\x03\x81\x8b\x02\xb8\x03\xea\x03"
  "\x81\x89\x02\xb7\x03\xe8\x03\x81\x89\x02\xb6\x03\xe6\x03\x81\x89"
  "\x02\xb5\x03\xe4\x03\x81\x83\x02\xb4\x03\xe2\x03\x81\x87\x02\xb3"
  "\x03\xe0\x03\x81\x83\x02\xb2\x03\xde\x03\x81\x85\x02\xb1\x03\xdc"
  "\x03\x81\x8d\x02\xb0\x03\xda\x03\x81\x87\x02\xaf\x03\xd8\x03\x81"
  "\x87\x02\xae\x03\xd6\x03\x81\x87\x02\xad\x03\xd4\x03\x81\x89\x02"
  "\xac\x03\xd2\x03\x81\x85\x02\xab\x03\xd0\x03\x81\x8d\x02\xaa\x03"
  "\xce\x03\x81\x87\x02\xa9\x03\xcc\x03\x81\x87\x02\xa8\x03\xca\x03"
  "\x81\x87\x02\xa7\x03\xc8\x03\x81\x89\x02\xa6\x03\xc6\x03\x81\x85"
  "\x02\xa5\x03\xc4\x03\x81\x89\x02\xa4\x03\xc2\x03\x81\x87\x02\xa3"
  "\x03\xc0\x03\x81\x85\x02\xa2\x03\xbe\x03\x81\x8d\x02\xa1\x03\xbc"
  "\x03\x81\x87\x02\xa0\x03\xba\x03\x81\x85\x02\x9f\x03\xb8\x03\x81"
  "\x89\x02\x9e\x03\xb6\x03\x81\x85\x02\x9d\x03\xb4\x03\x84\x06\x9c"
  "\x03\xb2\x03\x81\x87\x02\x9b\x03\xb0\x03\x81\x87\x02\x9a\x03\xae"
  "\x03\x81\x87\x02\x99\x03\xac\x03\x81\x85\x02\x98\x03\xaa\x03\x81"
  "\x85\x02\x97\x03\xa8\x03\x81\x8d\x02\x96\x03\xa6\x03\x81\x87\x02"
  "\x95\x03\xa4\x03\x81\x87\x02\x94\x03\xa2\x03\x81\x89\x02\x93\x03"
  "\xa0\x03\x81\x85\x02\x92\x03\x9e\x03\x81\x8b\x02\x91\x03\x9c\x03"
  "\x84\x06\x90\x03\x9a\x03\x81\x89\x02\x8f\x03\x98\x03\x81\x87\x02"
  "\x8e\x03\x96\x03\x81\x87\x02\x8d\x03\x94\x03\x81\x87\x02\x8c\x03"
  "\x92\x03\x81\x83\x02\x8b\x03\x90\x03\x81\x89\x02\x8a\x03\x8e\x03"
  "\x81\x89\x02\x89\x03\x8c\x03\x81\x85\x02\x88\x03\x8a\x03\x81\x85"
  "\x02\x87\x03\x88\x03\x81\x8f\x02\x86\x03\x86\x03\x81\x89\x02\x85"
  "\x03\x84\x03\x81\x8d\x02\x84\x03\x82\x03\x81\x87\x02\x83\x03\x80"
  "\x03\x81\x85\x02\x82\x03\xfe\x02\x81\x85\x02\x81\x03\xfc\x02\x84"
  "\x06\x80\x03\xfa\x02\x81\x87\x02\xff\x02\xf8\x02\x81\x87\x02\xfe"
  "\x02\xf6\x02\x81\x89\x02\xfd\x02\xf4\x02\x81\x89\x02\xfc\x02\xf2"
  "\x02\x81\x85\x02\xfb\x02\xf0\x02\x81\x85\x02\xfa\x02\xee\x02\x84"
  "\x06\xf9\x02\xec\x02\x81\x8d\x02\xf8\x02\xea\x02\x81\x87\x02\xf7"
  "\x02\xe8\x02\x81\x87\x02\xf6\x02\xe6\x02\x81\x89\x02\xf5\x02\xe4"
  "\x02\x81\x85\x02\xf4\x02\xe2\x02\x81\x89\x02\xf3\x02\xe0\x02\x81"
  "\x8d\x02\xf2\x02\xde\x02\x81\x87\x02\xf1\x02\xdc\x02\x81\x87\x02"
  "\xf0\x02\xda\x02\x81\x89\x02\xef\x02\xd8\x02\x81\x85\x02\xee\x02"
  "\xd6\x02\x84\x06\xed\x02\xd4\x02\x81\x8d\x02\xec\x02\xd2\x02\x81"
  "\x87\x02\xeb\x02\xd0\x02\x81\x87\x02\xea\x02\xce\x02\x81\x87\x02"
  "\xe9\x02\xcc\x02\x81\x85\x02\xe8\x02\xca\x02\x81\x8d\x02\xe7\x02"
  "\xc8\x02\x81\x87\x02\xe6\x02\xc6\x02\x81\x85\x02\xe5\x02\xc4\x02"
  "\x81\x89\x02\xe4\x02\xc2\x02\x81\x85\x02\xe3\x02\xc0\x02\x84\x06"
  "\xe2\x02\xbe\x02\x81\x89\x02\xe1\x02\xbc\x02\x81\x87\x02\xe0\x02"
  "\xba\x02\x81\x87\x02\xdf\x02\xb8\x02\x81\x85\x02\xde\x02\xb6\x02"
  "\x81\x85\x02\xdd\x02\xb4\x02\x81\x8d\x02\xdc\x02\xb2\x02\x81\x87"
  "\x02\xdb\x02\xb0\x02\x81\x89\x02\xda\x02\xae\x02\x81\x85\x02\xd9"
  "\x02\xac\x02\x81\x85\x02\xd8\x02\xaa\x02\x84\x06\xd7\x02\xa8\x02"
  "\x81\x89\x02\xd6\x02\xa6\x02\x81\x87\x02\xd5\x02\xa4\x02\x81\x87"
  "\x02\xd4\x02\xa2\x02\x81\x85\x02\xd3\x02\xa0\x02\x81\x85\x02\xd2"
  "\x02\x9e\x02\x81\x8d\x02\xd1\x02\x9c\x02\x81\x87\x02\xd0\x02\x9a"
  "\x02\x84\x06\xcf\x02\x98\x02\x81\x89\x02\xce\x02\x96\x02\x81\x87"
  "\x02\xcd\x02\x94\x02\x81\x87\x02\xcc\x02\x92\x02\x81\x8d\x02\xcb"
  "\x02\x90\x02\x81\x87\x02\xca\x02\x8e\x02\x81\x87\x02\xc9\x02\x8c"
  "\x02\x81\x87\x02\xc8\x02\x8a\x02\x81\x87\x02\xc7\x02\x88\x02\x81"
  "\x87\x02\xc6\x02\x86\x02\x81\x87\x02\xc5\x02\x84\x02\x81\x87\x02"
  "\xc4\x02\x82\x02\x81\x87\x02\xc3\x02\x80\x02\x81\x87\x02\xc2\x02"
  "\xfe\x01\x81\x87\x02\xc1\x02\xfc\x01\x81\x87\x02\xc0\x02\xfa\x01"
  "\x81\x87\x02\xbf\x02\xf8\x01\x81\x87\x02\xbe\x02\xf6\x01\x81\x87"
  "\x02\xbd\x02\xf4\x01\x81\x8d\x02\xbc\x02\xf2\x01\x81\x87\x02\xbb"
  "\x02\xf0\x01\x81\x8b\x02\xba\x02\xee\x01\x81\x87\x02\xb9\x02\xec"
  "\x01\x81\x8b\x02\xb8\x02\xea\x01\x81\x87\x02\xb7\x02\xe8\x01\x81"
  "\x87\x02\xb6\x02\xe6\x01\x81\x8b\x02\xb5\x02\xe4\x01\x81\x8b\x02"
  "\xb4\x02\xe2\x01\x81\x8b\x02\xb3\x02\xe0\x01\x81\x8b\x02\xb2\x02"
  "\xde\x01\x81\x8b\x02\xb1\x02\xdc\x01\x81\x85\x02\xb0\x02\xda\x01"
  "\x81\x87\x02\xaf\x02\xd8\x01\x81\x8b\x02\xae\x02\xd6\x01\x81\x8d"
  "\x02\xad\x02\xd4\x01\x81\x8b\x02\xac\x02\xd2\x01\x81\x8b\x02\xab"
  "\x02\xd0\x01\x81\x8b\x02\xaa\x02\xce\x01\x81\x8b\x02\xa9\x02\xcc"
  "\x01\x81\x8b\x02\xa8\x02\xca\x01\x81\x8b\x02\xa7\x02\xc8\x01\x81"
  "\x8b\x02\xa6\x02\xc6\x01\x81\x8b\x02\xa5\x02\xc4\x01\x81\x83\x02"
  "\xa4\x02\xc2\x01\x81\x85\x02\xa3\x02\xc0\x01\x81\x87\x02\xa2\x02"
  "\xbe\x01\x81\x8b\x02\xa1\x02\xbc\x01\x81\x8b\x02\xa0\x02\xba\x01"
  "\x81\x8d\x02\x9f\x02\xb8\x01\x81\x8b\x02\x9e\x02\xb6\x01\x81\x8b"
  "\x02\x9d\x02\xb4\x01\x81\x8b\x02\x9c\x02\xb2\x01\x81\x8b\x02\x9b"
  "\x02\xb0\x01\x81\x83\x02\x9a\x02\xae\x01\x81\x83\x02\x99\x02\xac"
  "\x01\x81\x83\x02\x98\x02\xaa\x01\x81\x87\x02\x97\x02\xa8\x01\x81"
  "\x87\x02\x96\x02\xa6\x01\x81\x8b\x02\x95\x02\xa4\x01\x81\x89\x02"
  "\x94\x02\xa2\x01\x81\x83\x02\x93\x02\xa0\x01\x81\x83\x02\x92\x02"
  "\x9e\x01\x81\x87\x02\x91\x02\x9c\x01\x81\x87\x02\x90\x02\x9a\x01"
  "\x81\x87\x02\x8f\x02\x98\x01\x81\x87\x02\x8e\x02\x96\x01\x81\x83"
  "\x02\x8d\x02\x94\x01\x81\x83\x02\x8c\x02\x92\x01\x84\x06\x8b\x02"
  "\x90\x01\x81\x87\x02\x8a\x02\x8e\x01\x81\x85\x02\x89\x02\x8c\x01"
  "\x81\x89\x02\x88\x02\x8a\x01\x81\x87\x02\x87\x02\x88\x01\x81\x83"
  "\x02\x86\x02\x86\x01\x81\x85\x02\x85\x02\x84\x01\x81\x87\x02\x84"
  "\x02\x82\x01\x85\x08\x83\x02\x80\x01\x81\x87\x02\x82\x02\x7e\x81"
  "\x87\x02\x81\x02\x7c\x81\x87\x02\x80\x02\x7a\x81\x85\x02\xff\x01"
  "\x78\x81\x89\x02\xfe\x01\x76\x81\x89\x02\xfd\x01\x74\x81\x87\x02"
  "\xfc\x01\x72\x81\x83\x02\xfb\x01\x70\x81\x83\x02\xfa\x01\x6e\x81"
  "\x83\x02\xf9\x01\x6c\x81\x85\x02\xf8\x01\x6a\x81\x89\x02\xf7\x01"
  "\x68\x81\x8d\x02\xf6\x01\x66\x81\x87\x02\xf5\x01\x64\x81\x83\x02"
  "\xf4\x01\x62\x81\x85\x02\xf3\x01\x60\x81\x89\x02\xf2\x01\x5e\x81"
  "\x8d\x02\xf1\x01\x5c\x81\x87\x02\xf0\x01\x5a\x81\x8d\x02\xef\x01"
  "\x58\x81\x8f\x02\xee\x01\x56\x81\x8b\x02\xed\x01\x54\x81\x89\x02"
  "\xec\x01\x52\x81\x83\x02\xeb\x01\x50\x81\x89\x02\xea\x01\x4e\x81"
  "\x8d\x02\xe9\x01\x4c\x81\x87\x02\xe8\x01\x4a\x81\x89\x02\xe7\x01"
  "\x48\x81\x87\x02\xe6\x01\x46\x81\x8b\x02\xe5\x01\x44\x81\x89\x02"
  "\xe4\x01\x42\x81\x85\x02\xe3\x01\x40\x81\x87\x02\xe2\x01\x3e\x81"
  "\x87\x02\xe1\x01\x3c\x81\x87\x02\xe0\x01\x3a\x81\x87\x02\xdf\x01"
  "\x38\x81\x87\x02\xde\x01\x36\x81\x89\x02\xdd\x01\x34\x81\x87\x02"
  "\xdc\x01\x32\x81\x85\x02\xdb\x01\x30\x81\x85\x02\xda\x01\x2e\x81"
  "\x87\x02\xd9\x01\x2c\x81\x87\x02\xd8\x01\x2a\x81\x87\x02\xd7\x01"
  "\x28\x81\x85\x02\xd6\x01\x26\x84\x06\xd5\x01\x24\x81\x8b\x02\xd4"
  "\x01\x22\x81\x87\x02\xd3\x01\x20\x81\x87\x02\xd2\x01\x1e\x81\x8b"
  "\x02\xd1\x01\x1c\x84\x06\xd0\x01\x1a\x81\x8d\x02\xcf\x01\x18\x81"
  "\x87\x02\xce\x01\x16\x81\x87\x02\xcd\x01\x14\x81\x87\x02\xcc\x01"
  "\x12\x81\x87\x02\xcb\x01\x10\x81\x87\x02\xca\x01\x0e\x81\x87\x02"
  "\xc9\x01\x0c\x81\x87\x02\xc8\x01\x0a\x81\x87\x02\xc7\x01\x08\x81"
  "\x87\x02\xc6\x01\x06\x81\x87\x02\xc5\x01\x04\x82\x02\xe3\x06\xcc"
  "\x09\x11\x21\x0e\x0e\x11\x04\x59\x04\x50\x04\x14\x06\x47\x04\x46"
  "\x04\x44\x04\x43\x04\x2e\x04\x41\x04\x40\x04\x3f\x04\x3c\x04\x3b"
  "\x04\x3a\x04\x37\x04\x34\x04\x33\x04\x30\x04\x2c\x04\x1c\x04\x18"
  "\x04\x23\x04\x27\x04\x24\x04\x1d\x04\x1b\x04\x10\x04\x17\x04\x0f"
  "\x04\x0a\x04\x09\x04\x3b\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x15\x12\x2f\x45\x42\x39"
  "\x38\x23\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x66\x72\x61\x6d\x65\x2f\x69\x72\x72\x69"
  "\x74\x61\x6e\x74\x1b\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f"
  "\x64\x65\x2d\x65\x72\x72\x6f\x72\x2d\x66\x72\x61\x6d\x65\x3f\x21"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x66"
  "\x72\x61\x6d\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x1a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x6e\x61\x6d\x65\x36\x17\x65\x76\x61\x6c"
  "\x2d\x66\x72\x61\x6d\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x16\x65\x76\x61\x6c\x2d\x66\x72\x61\x6d\x65\x2f\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x35\x14\x61\x70\x70\x6c\x79\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x6f\x70\x65\x72\x61\x6e\x64\x15\x61\x70"
  "\x70\x6c\x79\x2d\x66\x72\x61\x6d\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x6f\x72\x31\x0b\x66\x72\x61\x6d\x65\x2f\x74\x79\x70\x65\x1a\x25"
  "\x19\x26\x2b\x2a\x32\x22\x3e\x13\x16\x2d\x1e\x21\x1f\x49\x4a\x20"
  "\x55\x56\x4f\x51\x57\x53\x52\x3d\x28\x4e\x48\x4b\x4c\x4d\x29\x54"
  "\x58\x3b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
uerror_so_data_21ba5d70a3665570 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_uerror_so_data_21ba5d70a3665570 [0]))), (sizeof (prog_uerror_so_data_21ba5d70a3665570)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("uerror.so", uerror_so_data_21ba5d70a3665570)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("uerror.so", "fcfce7463a156eb2")
