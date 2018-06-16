/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:46-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parse_object_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_object_4)
DEFLABEL (parse_object_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define TAG_2_8 2
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define TAG_2_13 6
#define ENVIRONMENT_LABEL_2_3 24
#define DEBUGGING_LABEL_2_2 23
#define OBJECT_2_3 22
#define OBJECT_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_6 17
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_2_4);
      goto parse_objects_10;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_objects_13)
DEFLABEL (parse_objects_10)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 4;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd16.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  ((Wrd18.pObj) [5]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_7;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_11 11
#define LABEL_3_9 13
#define TAG_3_10 5
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_17 19
#define LABEL_3_15 21
#define LABEL_3_18 23
#define LABEL_3_19 25
#define LABEL_3_20 27
#define ENVIRONMENT_LABEL_3_3 45
#define DEBUGGING_LABEL_3_2 44
#define OBJECT_3_6 43
#define OBJECT_3_5 42
#define OBJECT_3_4 41
#define OBJECT_3_3 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_16 29
#define EXECUTE_CACHE_3_14 31
#define EXECUTE_CACHE_3_6 33
#define FREE_REFERENCE_3_0 36
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd26;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto top_level_parser_18;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto restart_13;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_3_19);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_parser_24)
DEFLABEL (top_level_parser_18)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;

DEFLABEL (label_28)
  goto restart_13;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_11);
  goto label_28;

DEFLABEL (restart_26)
DEFLABEL (restart_13)
  INTERRUPT_CHECK (26, LABEL_3_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_30;
  Rsp = (& (Rsp [2]));
  goto restart_13;

DEFLABEL (label_30)
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_17);

DEFLABEL (label_37)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_36;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd56.Lng))))
    goto label_36;
  (Wrd26.Obj) = ((Wrd54.pObj) [2]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_34)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_33;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd38.Lng))))
    goto label_33;
  (Wrd30.Obj) = ((Wrd36.pObj) [16]);

DEFLABEL (label_32)
  (Wrd50.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));

DEFLABEL (label_31)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 2);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  Rvl = (Rsp [0]);
  goto label_31;

DEFLABEL (label_36)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_3_4]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_34;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_18])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_2 21
#define OBJECT_4_1 20
#define OBJECT_4_0 19
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_8 13
#define EXECUTE_CACHE_4_6 15
#define FREE_REFERENCE_4_0 18
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto read_in_context_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_in_context_9)
DEFLABEL (read_in_context_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_10;
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd8.Obj))
    goto label_11;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_9])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto read_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_object_3)
DEFLABEL (read_object_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define LABEL_6_10 11
#define LABEL_6_9 13
#define LABEL_6_11 15
#define LABEL_6_13 17
#define LABEL_6_17 19
#define LABEL_6_18 21
#define LABEL_6_19 23
#define LABEL_6_14 25
#define LABEL_6_20 27
#define LABEL_6_21 29
#define LABEL_6_15 31
#define ENVIRONMENT_LABEL_6_3 52
#define DEBUGGING_LABEL_6_2 51
#define OBJECT_6_6 50
#define OBJECT_6_5 49
#define OBJECT_6_4 48
#define OBJECT_6_3 47
#define OBJECT_6_2 46
#define OBJECT_6_1 45
#define OBJECT_6_0 44
#define EXECUTE_CACHE_6_22 33
#define EXECUTE_CACHE_6_16 35
#define EXECUTE_CACHE_6_12 37
#define EXECUTE_CACHE_6_7 39
#define FREE_REFERENCE_6_1 42
#define FREE_REFERENCE_6_0 43
#define FREE_REFERENCES_LABEL_6_0 32
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto dispatch_23;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto loop_20;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_6_20);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_6_21);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_32)
DEFLABEL (dispatch_23)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  goto loop_20;

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (loop_33)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_6_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_49;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_49;
  (Wrd11.Obj) = ((Wrd15.pObj) [12]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_48)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_36;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_47;
  Wrd7 = Wrd11;

DEFLABEL (label_46)
  (Wrd13.Obj) = (Rsp [0]);
  if (! ((Wrd13.Obj) == (Wrd7.Obj)))
    goto label_37;
  Rsp = (& (Rsp [2]));
  goto loop_20;

DEFLABEL (label_37)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_45;
  Wrd15 = Wrd19;

DEFLABEL (label_44)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (Wrd15.Obj))
    goto label_43;
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_42;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd43.Lng))))
    goto label_42;
  (Wrd35.Obj) = ((Wrd41.pObj) [16]);

DEFLABEL (label_41)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_40;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd66.Lng))))
    goto label_40;
  ((Wrd64.pObj) [16]) = (Wrd56.Obj);

DEFLABEL (label_39)
  Rvl = (Rsp [0]);

DEFLABEL (label_38)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd69.Obj) = (Rsp [4]);
  (Wrd70.Obj) = (current_block [OBJECT_6_5]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 3);

DEFLABEL (label_30)
  goto label_39;

DEFLABEL (label_42)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.Obj) = (current_block [OBJECT_6_5]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  Rvl = (Wrd21.Obj);
  goto label_38;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_21])), (Wrd16.pObj));

DEFLABEL (label_28)
  (Wrd15.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_20])), (Wrd8.pObj));

DEFLABEL (label_27)
  (Wrd7.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_6_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define ENVIRONMENT_LABEL_7_3 22
#define DEBUGGING_LABEL_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_10 15
#define EXECUTE_CACHE_7_6 17
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7_4);
      goto handler_special_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_special_9)
DEFLABEL (handler_special_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_7_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_6 5
#define LABEL_8_4 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 18
#define DEBUGGING_LABEL_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_9 13
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_4);
      goto get_handler_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_handler_12)
DEFLABEL (get_handler_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_20;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd16.Lng) < 256L)
    goto label_14;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_13)
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_14)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_18;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_18;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd32.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_18;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd28.pObj) = (& ((Wrd34.pObj) [(Wrd25.Lng)]));
  (Wrd23.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd23.Obj);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd50.Obj);
  goto label_13;

DEFLABEL (label_18)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_10)
  (Wrd23.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  goto label_14;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_5 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_12 15
#define LABEL_9_14 17
#define LABEL_9_17 19
#define LABEL_9_15 21
#define LABEL_9_16 23
#define LABEL_9_22 25
#define LABEL_9_19 27
#define LABEL_9_20 29
#define LABEL_9_23 31
#define LABEL_9_24 33
#define LABEL_9_26 35
#define LABEL_9_28 37
#define LABEL_9_29 39
#define LABEL_9_27 41
#define LABEL_9_31 43
#define LABEL_9_32 45
#define LABEL_9_30 47
#define LABEL_9_36 49
#define LABEL_9_33 51
#define LABEL_9_35 53
#define LABEL_9_41 55
#define LABEL_9_37 57
#define TAG_9_38 27
#define LABEL_9_40 59
#define LABEL_9_43 61
#define LABEL_9_44 63
#define LABEL_9_45 65
#define LABEL_9_42 67
#define LABEL_9_47 69
#define LABEL_9_46 71
#define LABEL_9_49 73
#define LABEL_9_48 75
#define LABEL_9_51 77
#define LABEL_9_50 79
#define LABEL_9_53 81
#define LABEL_9_52 83
#define LABEL_9_55 85
#define LABEL_9_54 87
#define LABEL_9_57 89
#define LABEL_9_56 91
#define LABEL_9_59 93
#define LABEL_9_58 95
#define LABEL_9_61 97
#define LABEL_9_60 99
#define LABEL_9_63 101
#define LABEL_9_62 103
#define LABEL_9_65 105
#define LABEL_9_64 107
#define LABEL_9_67 109
#define LABEL_9_66 111
#define LABEL_9_69 113
#define LABEL_9_68 115
#define LABEL_9_71 117
#define LABEL_9_70 119
#define LABEL_9_73 121
#define LABEL_9_72 123
#define LABEL_9_75 125
#define LABEL_9_74 127
#define LABEL_9_77 129
#define LABEL_9_76 131
#define LABEL_9_79 133
#define LABEL_9_78 135
#define LABEL_9_81 137
#define LABEL_9_80 139
#define LABEL_9_83 141
#define LABEL_9_82 143
#define LABEL_9_85 145
#define LABEL_9_84 147
#define LABEL_9_87 149
#define LABEL_9_86 151
#define LABEL_9_89 153
#define LABEL_9_90 155
#define LABEL_9_88 157
#define LABEL_9_91 159
#define LABEL_9_93 161
#define LABEL_9_94 163
#define LABEL_9_95 165
#define LABEL_9_96 167
#define LABEL_9_97 169
#define LABEL_9_98 171
#define LABEL_9_99 173
#define LABEL_9_100 175
#define LABEL_9_101 177
#define LABEL_9_102 179
#define LABEL_9_103 181
#define LABEL_9_104 183
#define LABEL_9_105 185
#define LABEL_9_106 187
#define LABEL_9_108 189
#define ENVIRONMENT_LABEL_9_3 287
#define DEBUGGING_LABEL_9_2 286
#define OBJECT_9_29 285
#define OBJECT_9_28 284
#define OBJECT_9_27 283
#define OBJECT_9_26 282
#define OBJECT_9_25 281
#define OBJECT_9_24 280
#define OBJECT_9_23 279
#define OBJECT_9_22 278
#define OBJECT_9_21 277
#define OBJECT_9_20 276
#define OBJECT_9_19 275
#define OBJECT_9_18 274
#define OBJECT_9_17 273
#define OBJECT_9_16 272
#define OBJECT_9_15 271
#define OBJECT_9_14 270
#define OBJECT_9_13 269
#define OBJECT_9_12 268
#define OBJECT_9_11 267
#define OBJECT_9_10 266
#define OBJECT_9_9 265
#define OBJECT_9_8 264
#define OBJECT_9_7 263
#define OBJECT_9_6 262
#define OBJECT_9_5 261
#define OBJECT_9_4 260
#define OBJECT_9_3 259
#define OBJECT_9_2 258
#define OBJECT_9_1 257
#define OBJECT_9_0 256
#define EXECUTE_CACHE_9_109 191
#define EXECUTE_CACHE_9_107 193
#define EXECUTE_CACHE_9_92 195
#define EXECUTE_CACHE_9_39 197
#define EXECUTE_CACHE_9_34 199
#define EXECUTE_CACHE_9_25 201
#define EXECUTE_CACHE_9_21 203
#define EXECUTE_CACHE_9_18 205
#define EXECUTE_CACHE_9_13 207
#define EXECUTE_CACHE_9_11 209
#define EXECUTE_CACHE_9_8 211
#define FREE_REFERENCE_9_28 214
#define FREE_REFERENCE_9_27 215
#define FREE_REFERENCE_9_26 216
#define FREE_REFERENCE_9_25 217
#define FREE_REFERENCE_9_24 218
#define FREE_REFERENCE_9_23 219
#define FREE_REFERENCE_9_22 220
#define FREE_REFERENCE_9_21 221
#define FREE_REFERENCE_9_20 222
#define FREE_REFERENCE_9_19 223
#define FREE_REFERENCE_9_18 224
#define FREE_REFERENCE_9_17 225
#define FREE_REFERENCE_9_16 226
#define FREE_REFERENCE_9_15 227
#define FREE_REFERENCE_9_14 228
#define FREE_REFERENCE_9_13 229
#define FREE_REFERENCE_9_12 230
#define FREE_REFERENCE_9_11 231
#define FREE_REFERENCE_9_10 232
#define FREE_REFERENCE_9_9 233
#define FREE_REFERENCE_9_8 234
#define FREE_REFERENCE_9_7 235
#define FREE_REFERENCE_9_6 236
#define FREE_REFERENCE_9_5 237
#define FREE_REFERENCE_9_4 238
#define FREE_REFERENCE_9_3 239
#define FREE_REFERENCE_9_2 240
#define FREE_REFERENCE_9_1 241
#define FREE_REFERENCE_9_0 242
#define FREE_ASSIGNMENT_9_11 244
#define FREE_ASSIGNMENT_9_10 245
#define FREE_ASSIGNMENT_9_9 246
#define FREE_ASSIGNMENT_9_8 247
#define FREE_ASSIGNMENT_9_7 248
#define FREE_ASSIGNMENT_9_6 249
#define FREE_ASSIGNMENT_9_5 250
#define FREE_ASSIGNMENT_9_4 251
#define FREE_ASSIGNMENT_9_3 252
#define FREE_ASSIGNMENT_9_2 253
#define FREE_ASSIGNMENT_9_1 254
#define FREE_ASSIGNMENT_9_0 255
#define FREE_REFERENCES_LABEL_9_0 190
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd154;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto initialize_packageB_57;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_59;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto label_61;

    case 9:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_9_22);
      goto label_62;

    case 12:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_9_26);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_9_28);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_9_29);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_9_27);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_9_31);
      goto label_65;

    case 21:
      current_block = (Rpc - LABEL_9_32);
      goto lambda_15;

    case 22:
      current_block = (Rpc - LABEL_9_30);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_9_36);
      goto label_66;

    case 24:
      current_block = (Rpc - LABEL_9_33);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_21;

    case 26:
      current_block = (Rpc - LABEL_9_41);
      goto label_67;

    case 27:
      current_block = (Rpc - LABEL_9_37);
      goto lambda_110;

    case 28:
      current_block = (Rpc - LABEL_9_40);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_9_43);
      goto label_68;

    case 30:
      current_block = (Rpc - LABEL_9_44);
      goto lambda_12;

    case 31:
      current_block = (Rpc - LABEL_9_45);
      goto label_69;

    case 32:
      current_block = (Rpc - LABEL_9_42);
      goto continuation_23;

    case 33:
      current_block = (Rpc - LABEL_9_47);
      goto label_70;

    case 34:
      current_block = (Rpc - LABEL_9_46);
      goto continuation_24;

    case 35:
      current_block = (Rpc - LABEL_9_49);
      goto label_71;

    case 36:
      current_block = (Rpc - LABEL_9_48);
      goto continuation_25;

    case 37:
      current_block = (Rpc - LABEL_9_51);
      goto label_72;

    case 38:
      current_block = (Rpc - LABEL_9_50);
      goto continuation_26;

    case 39:
      current_block = (Rpc - LABEL_9_53);
      goto label_73;

    case 40:
      current_block = (Rpc - LABEL_9_52);
      goto continuation_27;

    case 41:
      current_block = (Rpc - LABEL_9_55);
      goto label_74;

    case 42:
      current_block = (Rpc - LABEL_9_54);
      goto continuation_28;

    case 43:
      current_block = (Rpc - LABEL_9_57);
      goto label_75;

    case 44:
      current_block = (Rpc - LABEL_9_56);
      goto continuation_29;

    case 45:
      current_block = (Rpc - LABEL_9_59);
      goto label_76;

    case 46:
      current_block = (Rpc - LABEL_9_58);
      goto continuation_30;

    case 47:
      current_block = (Rpc - LABEL_9_61);
      goto label_77;

    case 48:
      current_block = (Rpc - LABEL_9_60);
      goto continuation_31;

    case 49:
      current_block = (Rpc - LABEL_9_63);
      goto label_78;

    case 50:
      current_block = (Rpc - LABEL_9_62);
      goto continuation_32;

    case 51:
      current_block = (Rpc - LABEL_9_65);
      goto label_79;

    case 52:
      current_block = (Rpc - LABEL_9_64);
      goto continuation_33;

    case 53:
      current_block = (Rpc - LABEL_9_67);
      goto label_80;

    case 54:
      current_block = (Rpc - LABEL_9_66);
      goto continuation_34;

    case 55:
      current_block = (Rpc - LABEL_9_69);
      goto label_81;

    case 56:
      current_block = (Rpc - LABEL_9_68);
      goto continuation_35;

    case 57:
      current_block = (Rpc - LABEL_9_71);
      goto label_82;

    case 58:
      current_block = (Rpc - LABEL_9_70);
      goto continuation_36;

    case 59:
      current_block = (Rpc - LABEL_9_73);
      goto label_83;

    case 60:
      current_block = (Rpc - LABEL_9_72);
      goto continuation_37;

    case 61:
      current_block = (Rpc - LABEL_9_75);
      goto label_84;

    case 62:
      current_block = (Rpc - LABEL_9_74);
      goto continuation_38;

    case 63:
      current_block = (Rpc - LABEL_9_77);
      goto label_85;

    case 64:
      current_block = (Rpc - LABEL_9_76);
      goto continuation_39;

    case 65:
      current_block = (Rpc - LABEL_9_79);
      goto label_86;

    case 66:
      current_block = (Rpc - LABEL_9_78);
      goto continuation_40;

    case 67:
      current_block = (Rpc - LABEL_9_81);
      goto label_87;

    case 68:
      current_block = (Rpc - LABEL_9_80);
      goto continuation_41;

    case 69:
      current_block = (Rpc - LABEL_9_83);
      goto label_88;

    case 70:
      current_block = (Rpc - LABEL_9_82);
      goto continuation_42;

    case 71:
      current_block = (Rpc - LABEL_9_85);
      goto label_89;

    case 72:
      current_block = (Rpc - LABEL_9_84);
      goto continuation_43;

    case 73:
      current_block = (Rpc - LABEL_9_87);
      goto label_90;

    case 74:
      current_block = (Rpc - LABEL_9_86);
      goto continuation_44;

    case 75:
      current_block = (Rpc - LABEL_9_89);
      goto label_91;

    case 76:
      current_block = (Rpc - LABEL_9_90);
      goto label_92;

    case 77:
      current_block = (Rpc - LABEL_9_88);
      goto continuation_45;

    case 78:
      current_block = (Rpc - LABEL_9_91);
      goto continuation_46;

    case 79:
      current_block = (Rpc - LABEL_9_93);
      goto label_93;

    case 80:
      current_block = (Rpc - LABEL_9_94);
      goto label_94;

    case 81:
      current_block = (Rpc - LABEL_9_95);
      goto label_95;

    case 82:
      current_block = (Rpc - LABEL_9_96);
      goto label_96;

    case 83:
      current_block = (Rpc - LABEL_9_97);
      goto label_97;

    case 84:
      current_block = (Rpc - LABEL_9_98);
      goto label_98;

    case 85:
      current_block = (Rpc - LABEL_9_99);
      goto label_99;

    case 86:
      current_block = (Rpc - LABEL_9_100);
      goto label_100;

    case 87:
      current_block = (Rpc - LABEL_9_101);
      goto label_101;

    case 88:
      current_block = (Rpc - LABEL_9_102);
      goto label_102;

    case 89:
      current_block = (Rpc - LABEL_9_103);
      goto label_103;

    case 90:
      current_block = (Rpc - LABEL_9_104);
      goto label_104;

    case 91:
      current_block = (Rpc - LABEL_9_105);
      goto label_105;

    case 92:
      current_block = (Rpc - LABEL_9_106);
      goto continuation_56;

    case 93:
      current_block = (Rpc - LABEL_9_108);
      goto label_106;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_108)
DEFLABEL (initialize_packageB_57)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_217;
  Wrd8 = Wrd12;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_215;
  Wrd14 = Wrd18;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_213;
  Wrd5 = Wrd9;

DEFLABEL (label_212)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_211;
  Wrd5 = Wrd9;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_209;
  Wrd8 = Wrd12;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_207;
  Wrd14 = Wrd18;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_15;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_205;
  Wrd8 = Wrd12;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_15;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_203;
  Wrd8 = Wrd12;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_15;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_201;
  Wrd8 = Wrd12;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_15;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_199;
  Wrd8 = Wrd12;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_197;
  Wrd8 = Wrd12;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_9_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_195;
  Wrd8 = Wrd12;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_9_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_193;
  Wrd8 = Wrd12;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_9_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_191;
  Wrd8 = Wrd12;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_9_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_189;
  Wrd8 = Wrd12;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_9_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_187;
  Wrd8 = Wrd12;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_9_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_14]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_185;
  Wrd8 = Wrd12;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_9_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_15]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_183;
  Wrd8 = Wrd12;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_9_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_181;
  Wrd8 = Wrd12;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_9_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_17]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_179;
  Wrd8 = Wrd12;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_9_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_177;
  Wrd8 = Wrd12;

DEFLABEL (label_176)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_9_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_175;
  Wrd8 = Wrd12;

DEFLABEL (label_174)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_9_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_20]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_173;
  Wrd8 = Wrd12;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_9_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_21]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_171;
  Wrd8 = Wrd12;

DEFLABEL (label_170)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_9_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_21]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_169;
  Wrd8 = Wrd12;

DEFLABEL (label_168)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_9_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_22]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_167;
  Wrd8 = Wrd12;

DEFLABEL (label_166)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_9_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_22]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_165;
  Wrd8 = Wrd12;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_9_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_23]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_163;
  Wrd8 = Wrd12;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_26]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_9_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_161;
  Wrd8 = Wrd12;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_9_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_159;
  Wrd8 = Wrd12;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_9_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_26]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_157;
  Wrd8 = Wrd12;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_12;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_9_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_27]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_155;
  Wrd8 = Wrd12;

DEFLABEL (label_154)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_153;
  Wrd14 = Wrd18;

DEFLABEL (label_152)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_15;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_9_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_92]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_9_91);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_151;

DEFLABEL (label_150)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_149)
  Rsp = (& (Rsp [2]));
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_1]));
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_148;

DEFLABEL (label_147)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_146)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_2]));
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_145;

DEFLABEL (label_144)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_143)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_3]));
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd51.Obj) = ((Wrd43.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_142;

DEFLABEL (label_141)
  ((Wrd43.pObj) [0]) = (Wrd44.Obj);

DEFLABEL (label_140)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_4]));
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd63.Obj) = ((Wrd55.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  ((Wrd55.pObj) [0]) = (Wrd56.Obj);

DEFLABEL (label_137)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_5]));
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd75.Obj) = ((Wrd67.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd67.pObj) [0]) = (Wrd68.Obj);

DEFLABEL (label_134)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_6]));
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd87.Obj) = ((Wrd79.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  ((Wrd79.pObj) [0]) = (Wrd80.Obj);

DEFLABEL (label_131)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_7]));
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd99.Obj) = ((Wrd91.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd91.pObj) [0]) = (Wrd92.Obj);

DEFLABEL (label_128)
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_8]));
  (Wrd104.Obj) = (Rsp [5]);
  (Wrd111.Obj) = ((Wrd103.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd103.pObj) [0]) = (Wrd104.Obj);

DEFLABEL (label_125)
  Rsp = (& (Rsp [6]));
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_28]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_124;
  Wrd116 = Wrd120;

DEFLABEL (label_123)
  (Wrd122.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_9]));
  (Wrd130.Obj) = ((Wrd122.pObj) [0]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd122.pObj) [0]) = (Wrd116.Obj);

DEFLABEL (label_120)
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_28]));
  (Wrd138.Obj) = ((Wrd135.pObj) [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if ((Wrd139.uLng) == 50)
    goto label_119;
  Wrd134 = Wrd138;

DEFLABEL (label_118)
  (Wrd140.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_10]));
  (Wrd148.Obj) = ((Wrd140.pObj) [0]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if ((Wrd149.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  ((Wrd140.pObj) [0]) = (Wrd134.Obj);

DEFLABEL (label_115)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_106]))));
  (* (--Rsp)) = (Wrd154.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_107]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_9_106);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_109]));

DEFLABEL (label_114)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_108])), (Wrd6.pObj), Rvl);

DEFLABEL (label_106)
  goto label_112;

DEFLABEL (label_117)
  if ((Wrd148.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_116;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_105])), (Wrd140.pObj), (Wrd134.Obj));

DEFLABEL (label_105)
  goto label_115;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_104])), (Wrd135.pObj));

DEFLABEL (label_104)
  (Wrd134.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_122)
  if ((Wrd130.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_103])), (Wrd122.pObj), (Wrd116.Obj));

DEFLABEL (label_103)
  goto label_120;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_102])), (Wrd117.pObj));

DEFLABEL (label_102)
  (Wrd116.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_127)
  if ((Wrd111.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_101])), (Wrd103.pObj), (Wrd104.Obj));

DEFLABEL (label_101)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd99.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_100])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_100)
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd87.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_99])), (Wrd79.pObj), (Wrd80.Obj));

DEFLABEL (label_99)
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd75.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_98])), (Wrd67.pObj), (Wrd68.Obj));

DEFLABEL (label_98)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd63.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_97])), (Wrd55.pObj), (Wrd56.Obj));

DEFLABEL (label_97)
  goto label_137;

DEFLABEL (label_142)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_141;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_96])), (Wrd43.pObj), (Wrd44.Obj));

DEFLABEL (label_96)
  goto label_140;

DEFLABEL (label_145)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_144;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_95])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_95)
  goto label_143;

DEFLABEL (label_148)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_147;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_94])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_94)
  goto label_146;

DEFLABEL (label_151)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_150;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_93])), (Wrd6.pObj), Rvl);

DEFLABEL (label_93)
  goto label_149;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_90])), (Wrd15.pObj));

DEFLABEL (label_92)
  (Wrd14.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_89])), (Wrd9.pObj));

DEFLABEL (label_91)
  (Wrd8.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_87])), (Wrd9.pObj));

DEFLABEL (label_90)
  (Wrd8.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_85])), (Wrd9.pObj));

DEFLABEL (label_89)
  (Wrd8.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_83])), (Wrd9.pObj));

DEFLABEL (label_88)
  (Wrd8.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_81])), (Wrd9.pObj));

DEFLABEL (label_87)
  (Wrd8.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_79])), (Wrd9.pObj));

DEFLABEL (label_86)
  (Wrd8.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_77])), (Wrd9.pObj));

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_75])), (Wrd9.pObj));

DEFLABEL (label_84)
  (Wrd8.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_73])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_71])), (Wrd9.pObj));

DEFLABEL (label_82)
  (Wrd8.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_69])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_67])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_65])), (Wrd9.pObj));

DEFLABEL (label_79)
  (Wrd8.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_63])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_61])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_59])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_57])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_55])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_53])), (Wrd9.pObj));

DEFLABEL (label_73)
  (Wrd8.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_51])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_49])), (Wrd9.pObj));

DEFLABEL (label_71)
  (Wrd8.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_47])), (Wrd9.pObj));

DEFLABEL (label_70)
  (Wrd8.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_43])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_41])), (Wrd9.pObj));

DEFLABEL (label_67)
  (Wrd8.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_36])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_31])), (Wrd9.pObj));

DEFLABEL (label_65)
  (Wrd8.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_29])), (Wrd15.pObj));

DEFLABEL (label_64)
  (Wrd14.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_28])), (Wrd9.pObj));

DEFLABEL (label_63)
  (Wrd8.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_22])), (Wrd6.pObj));

DEFLABEL (label_62)
  (Wrd5.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_17])), (Wrd6.pObj));

DEFLABEL (label_61)
  (Wrd5.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd15.pObj));

DEFLABEL (label_60)
  (Wrd14.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_216;

DEFLABEL (lambda_109)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_9_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_33);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_37])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_39]));

DEFLABEL (lambda_110)
  CLOSURE_HEADER (LABEL_9_37);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_12;

DEFLABEL (lambda_111)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_9_44);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_221;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_220)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 10)
    goto label_219;

DEFLABEL (label_218)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_10]), 3);

DEFLABEL (label_219)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_218;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_218;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd20.pObj) = (& ((Wrd28.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [1]) = (Wrd21.Obj);
  Rvl = (current_block [OBJECT_9_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_221)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_45]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 1);

DEFLABEL (label_69)
  (Wrd7.Obj) = Rvl;
  goto label_220;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define FREE_REFERENCE_10_0 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto handler_whitespace_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_whitespace_4)
DEFLABEL (handler_whitespace_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define LABEL_11_13 15
#define LABEL_11_11 17
#define LABEL_11_14 19
#define LABEL_11_15 21
#define LABEL_11_16 23
#define LABEL_11_17 25
#define LABEL_11_18 27
#define LABEL_11_19 29
#define LABEL_11_20 31
#define LABEL_11_21 33
#define LABEL_11_22 35
#define LABEL_11_23 37
#define LABEL_11_24 39
#define LABEL_11_25 41
#define LABEL_11_28 43
#define LABEL_11_26 45
#define ENVIRONMENT_LABEL_11_3 69
#define DEBUGGING_LABEL_11_2 68
#define OBJECT_11_9 67
#define OBJECT_11_8 66
#define OBJECT_11_7 65
#define OBJECT_11_6 64
#define OBJECT_11_5 63
#define OBJECT_11_4 62
#define OBJECT_11_3 61
#define OBJECT_11_2 60
#define OBJECT_11_1 59
#define OBJECT_11_0 58
#define EXECUTE_CACHE_11_29 47
#define EXECUTE_CACHE_11_27 49
#define EXECUTE_CACHE_11_12 51
#define EXECUTE_CACHE_11_7 53
#define FREE_REFERENCE_11_1 56
#define FREE_REFERENCE_11_0 57
#define FREE_REFERENCES_LABEL_11_0 46
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto handler_comment_36;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto discard_35;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto scan_11;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_30;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_31;

    case 10:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_11_17);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_11_18);
      goto dash_29;

    case 13:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_11_21);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_11_24);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_11_28);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_11_26);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_comment_45)
DEFLABEL (handler_comment_36)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (* (--Rsp)) = Rvl;
  (Wrd34.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd38.uLng) == 26)
    goto label_49;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_49)
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd40.Lng) < 2L)
    goto label_51;
  (Wrd36.Obj) = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (label_51)
  (Wrd36.Obj) = (current_block [OBJECT_11_1]);

DEFLABEL (label_50)
DEFLABEL (label_58)
  Rsp = (& (Rsp [3]));
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_57)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_56;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_56;
  (Wrd9.Obj) = ((Wrd20.pObj) [6]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  goto scan_11;

DEFLABEL (label_53)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  goto discard_35;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_9])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_11_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_52;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  goto label_53;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_57;

DEFLABEL (discard_46)
DEFLABEL (discard_35)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 2);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_62;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_7]))
    goto label_60;
  Rsp = (& (Rsp [1]));
  goto discard_35;

DEFLABEL (label_60)
  Rvl = (Rsp [1]);

DEFLABEL (label_61)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_62)
  Rvl = (Wrd6.Obj);
  goto label_61;

DEFLABEL (scan_47)
DEFLABEL (scan_11)
  INTERRUPT_CHECK (26, LABEL_11_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_68;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_7]))
    goto label_64;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_8]))
    goto label_63;
  Rsp = (& (Rsp [1]));
  goto scan_11;

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  goto dash_29;

DEFLABEL (label_64)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_67;
  Wrd14 = Wrd18;

DEFLABEL (label_66)
  Rvl = (Wrd14.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_17])), (Wrd15.pObj));

DEFLABEL (label_40)
  (Wrd14.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  Rvl = (Wrd6.Obj);
  goto label_65;

DEFLABEL (dash_48)
DEFLABEL (dash_29)
  INTERRUPT_CHECK (26, LABEL_11_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_83;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_7]))
    goto label_79;
  if (! ((Wrd6.Obj) == (current_block [OBJECT_11_9])))
    goto label_77;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 2);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_76;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_7]))
    goto label_72;
  if ((Wrd6.Obj) == (current_block [OBJECT_11_8]))
    goto label_69;
  Rsp = (& (Rsp [1]));
  goto scan_11;

DEFLABEL (label_69)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_11_25);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_71;
  Wrd6 = Wrd10;

DEFLABEL (label_70)
  (Rsp [0]) = (Wrd6.Obj);
  goto discard_35;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_28])), (Wrd7.pObj));

DEFLABEL (label_43)
  (Wrd6.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_75;
  Wrd23 = Wrd27;

DEFLABEL (label_74)
  Rvl = (Wrd23.Obj);

DEFLABEL (label_73)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_24])), (Wrd24.pObj));

DEFLABEL (label_42)
  (Wrd23.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  Rvl = (Wrd6.Obj);
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd6.Obj) == (current_block [OBJECT_11_8]))
    goto label_78;
  Rsp = (& (Rsp [1]));
  goto scan_11;

DEFLABEL (label_78)
  Rsp = (& (Rsp [1]));
  goto dash_29;

DEFLABEL (label_79)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_82;
  Wrd21 = Wrd25;

DEFLABEL (label_81)
  Rvl = (Wrd21.Obj);

DEFLABEL (label_80)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_21])), (Wrd22.pObj));

DEFLABEL (label_41)
  (Wrd21.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  Rvl = (Wrd6.Obj);
  goto label_80;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_13 15
#define LABEL_12_11 17
#define LABEL_12_14 19
#define LABEL_12_15 21
#define LABEL_12_16 23
#define LABEL_12_18 25
#define LABEL_12_20 27
#define LABEL_12_22 29
#define LABEL_12_24 31
#define LABEL_12_17 33
#define LABEL_12_26 35
#define LABEL_12_27 37
#define LABEL_12_19 39
#define LABEL_12_28 41
#define LABEL_12_21 43
#define LABEL_12_29 45
#define LABEL_12_30 47
#define LABEL_12_23 49
#define LABEL_12_31 51
#define LABEL_12_25 53
#define LABEL_12_33 55
#define LABEL_12_34 57
#define LABEL_12_32 59
#define LABEL_12_35 61
#define LABEL_12_36 63
#define LABEL_12_39 65
#define LABEL_12_37 67
#define ENVIRONMENT_LABEL_12_3 92
#define DEBUGGING_LABEL_12_2 91
#define OBJECT_12_10 90
#define OBJECT_12_9 89
#define OBJECT_12_8 88
#define OBJECT_12_7 87
#define OBJECT_12_6 86
#define OBJECT_12_5 85
#define OBJECT_12_4 84
#define OBJECT_12_3 83
#define OBJECT_12_2 82
#define OBJECT_12_1 81
#define OBJECT_12_0 80
#define EXECUTE_CACHE_12_40 69
#define EXECUTE_CACHE_12_38 71
#define EXECUTE_CACHE_12_12 73
#define EXECUTE_CACHE_12_7 75
#define FREE_REFERENCE_12_1 78
#define FREE_REFERENCE_12_0 79
#define FREE_REFERENCES_LABEL_12_0 68
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto handler_multi_line_comment_60;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_63;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_62;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto discard_46;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto scan_10;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_42;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_12_15);
      goto label_64;

    case 10:
      current_block = (Rpc - LABEL_12_16);
      goto discard_vbar_59;

    case 11:
      current_block = (Rpc - LABEL_12_18);
      goto discard_sharp_52;

    case 12:
      current_block = (Rpc - LABEL_12_20);
      goto vbar_24;

    case 13:
      current_block = (Rpc - LABEL_12_22);
      goto dash_32;

    case 14:
      current_block = (Rpc - LABEL_12_24);
      goto sharp_17;

    case 15:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_53;

    case 16:
      current_block = (Rpc - LABEL_12_26);
      goto label_65;

    case 17:
      current_block = (Rpc - LABEL_12_27);
      goto label_66;

    case 18:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_47;

    case 19:
      current_block = (Rpc - LABEL_12_28);
      goto label_67;

    case 20:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_12_29);
      goto label_69;

    case 22:
      current_block = (Rpc - LABEL_12_30);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_12_31);
      goto label_70;

    case 25:
      current_block = (Rpc - LABEL_12_25);
      goto continuation_11;

    case 26:
      current_block = (Rpc - LABEL_12_33);
      goto label_72;

    case 27:
      current_block = (Rpc - LABEL_12_34);
      goto label_71;

    case 28:
      current_block = (Rpc - LABEL_12_32);
      goto continuation_33;

    case 29:
      current_block = (Rpc - LABEL_12_35);
      goto label_73;

    case 30:
      current_block = (Rpc - LABEL_12_36);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_12_39);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_12_37);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_multi_line_comment_76)
DEFLABEL (handler_multi_line_comment_60)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (* (--Rsp)) = Rvl;
  (Wrd35.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd39.uLng) == 26)
    goto label_84;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_84)
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd41.Lng) < 2L)
    goto label_86;
  (Wrd37.Obj) = ((SCHEME_OBJECT) 0);
  goto label_85;

DEFLABEL (label_86)
  (Wrd37.Obj) = (current_block [OBJECT_12_1]);

DEFLABEL (label_85)
DEFLABEL (label_93)
  Rsp = (& (Rsp [3]));
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;

DEFLABEL (label_92)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_91;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng))))
    goto label_91;
  (Wrd9.Obj) = ((Wrd21.pObj) [6]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;

DEFLABEL (label_87)
  goto scan_10;

DEFLABEL (label_88)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_90;
  Wrd11 = Wrd15;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto discard_46;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_9])), (Wrd12.pObj));

DEFLABEL (label_62)
  (Wrd11.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_12_2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  goto label_87;

DEFLABEL (label_94)
  Rsp = (& (Rsp [2]));
  goto label_88;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  goto label_92;

DEFLABEL (discard_77)
DEFLABEL (discard_46)
  INTERRUPT_CHECK (26, LABEL_12_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_95;
  Rsp = (& (Rsp [1]));
  goto discard_sharp_52;

DEFLABEL (label_95)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_96;
  Rsp = (& (Rsp [1]));
  goto discard_46;

DEFLABEL (label_96)
  Rsp = (& (Rsp [1]));
  goto discard_vbar_59;

DEFLABEL (scan_78)
DEFLABEL (scan_10)
  INTERRUPT_CHECK (26, LABEL_12_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_7]))
    goto label_100;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_97;
  Rsp = (& (Rsp [1]));
  goto sharp_17;

DEFLABEL (label_97)
  if (! (Rvl == (current_block [OBJECT_12_8])))
    goto label_98;
  Rsp = (& (Rsp [1]));
  goto dash_32;

DEFLABEL (label_98)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_99;
  Rsp = (& (Rsp [1]));
  goto scan_10;

DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  goto vbar_24;

DEFLABEL (label_100)
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_102;
  Wrd19 = Wrd23;

DEFLABEL (label_101)
  (Rsp [1]) = (Wrd19.Obj);
  goto discard_46;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_15])), (Wrd20.pObj));

DEFLABEL (label_64)
  (Wrd19.Obj) = Rvl;
  goto label_101;

DEFLABEL (discard_vbar_79)
DEFLABEL (discard_vbar_59)
  INTERRUPT_CHECK (26, LABEL_12_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_5]))
    goto label_105;
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_104;

DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  goto discard_46;

DEFLABEL (label_104)
  Rsp = (& (Rsp [1]));
  goto discard_vbar_59;

DEFLABEL (label_105)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_110;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd32.Lng) > 0)
    goto label_107;

DEFLABEL (label_106)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_109;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_109;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd24.Obj);
  goto label_103;

DEFLABEL (label_109)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_66)
  (Wrd24.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_65)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_107;

DEFLABEL (discard_sharp_80)
DEFLABEL (discard_sharp_52)
  INTERRUPT_CHECK (26, LABEL_12_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_111;
  Rsp = (& (Rsp [1]));
  goto discard_sharp_52;

DEFLABEL (label_111)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_113;

DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  goto discard_46;

DEFLABEL (label_113)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_115;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_115;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_114)
  (Rsp [1]) = (Wrd14.Obj);
  goto label_112;

DEFLABEL (label_115)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_67)
  (Wrd14.Obj) = Rvl;
  goto label_114;

DEFLABEL (vbar_81)
DEFLABEL (vbar_24)
  INTERRUPT_CHECK (26, LABEL_12_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_21);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_7]))
    goto label_121;
  if (Rvl == (current_block [OBJECT_12_5]))
    goto label_118;
  if (! (Rvl == (current_block [OBJECT_12_8])))
    goto label_116;
  Rsp = (& (Rsp [1]));
  goto dash_32;

DEFLABEL (label_116)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_117;
  Rsp = (& (Rsp [1]));
  goto scan_10;

DEFLABEL (label_117)
  Rsp = (& (Rsp [1]));
  goto vbar_24;

DEFLABEL (label_118)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_120;
  Wrd17 = Wrd21;

DEFLABEL (label_119)
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_30])), (Wrd18.pObj));

DEFLABEL (label_68)
  (Wrd17.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_121)
  (Wrd23.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_123;
  Wrd25 = Wrd29;

DEFLABEL (label_122)
  (Rsp [1]) = (Wrd25.Obj);
  goto discard_46;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_29])), (Wrd26.pObj));

DEFLABEL (label_69)
  (Wrd25.Obj) = Rvl;
  goto label_122;

DEFLABEL (dash_82)
DEFLABEL (dash_32)
  INTERRUPT_CHECK (26, LABEL_12_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_7]))
    goto label_136;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_124;
  Rsp = (& (Rsp [1]));
  goto sharp_17;

DEFLABEL (label_124)
  if (! (Rvl == (current_block [OBJECT_12_9])))
    goto label_133;
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_12_32);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_7]))
    goto label_130;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_125;
  Rsp = (& (Rsp [1]));
  goto sharp_17;

DEFLABEL (label_125)
  if (! (Rvl == (current_block [OBJECT_12_8])))
    goto label_128;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_38]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_12_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_40]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_12_36);
  (Wrd5.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_127;
  Wrd7 = Wrd11;

DEFLABEL (label_126)
  (Rsp [1]) = (Wrd7.Obj);
  goto discard_46;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_39])), (Wrd8.pObj));

DEFLABEL (label_74)
  (Wrd7.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_128)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_129;
  Rsp = (& (Rsp [1]));
  goto scan_10;

DEFLABEL (label_129)
  Rsp = (& (Rsp [1]));
  goto vbar_24;

DEFLABEL (label_130)
  (Wrd26.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_132;
  Wrd28 = Wrd32;

DEFLABEL (label_131)
  (Rsp [1]) = (Wrd28.Obj);
  goto discard_46;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_35])), (Wrd29.pObj));

DEFLABEL (label_73)
  (Wrd28.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_133)
  if (! (Rvl == (current_block [OBJECT_12_8])))
    goto label_134;
  Rsp = (& (Rsp [1]));
  goto dash_32;

DEFLABEL (label_134)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_135;
  Rsp = (& (Rsp [1]));
  goto scan_10;

DEFLABEL (label_135)
  Rsp = (& (Rsp [1]));
  goto vbar_24;

DEFLABEL (label_136)
  (Wrd25.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_138;
  Wrd27 = Wrd31;

DEFLABEL (label_137)
  (Rsp [1]) = (Wrd27.Obj);
  goto discard_46;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_31])), (Wrd28.pObj));

DEFLABEL (label_70)
  (Wrd27.Obj) = Rvl;
  goto label_137;

DEFLABEL (sharp_83)
DEFLABEL (sharp_17)
  INTERRUPT_CHECK (26, LABEL_12_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_25);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_12_7]))
    goto label_144;
  if (! (Rvl == (current_block [OBJECT_12_5])))
    goto label_139;
  Rsp = (& (Rsp [1]));
  goto sharp_17;

DEFLABEL (label_139)
  if (! (Rvl == (current_block [OBJECT_12_8])))
    goto label_140;
  Rsp = (& (Rsp [1]));
  goto dash_32;

DEFLABEL (label_140)
  if (Rvl == (current_block [OBJECT_12_6]))
    goto label_141;
  Rsp = (& (Rsp [1]));
  goto scan_10;

DEFLABEL (label_141)
  (Wrd14.Obj) = (current_block [OBJECT_12_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_143;
  Wrd16 = Wrd20;

DEFLABEL (label_142)
  (Rsp [1]) = (Wrd16.Obj);
  goto discard_46;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_34])), (Wrd17.pObj));

DEFLABEL (label_71)
  (Wrd16.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd24.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_146;
  Wrd26 = Wrd30;

DEFLABEL (label_145)
  (Rsp [1]) = (Wrd26.Obj);
  goto discard_46;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_33])), (Wrd27.pObj));

DEFLABEL (label_72)
  (Wrd26.Obj) = Rvl;
  goto label_145;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCE_13_0 12
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_13_4);
      goto handler_expression_comment_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_expression_comment_5)
DEFLABEL (handler_expression_comment_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_9 9
#define LABEL_14_11 11
#define LABEL_14_12 13
#define LABEL_14_15 15
#define LABEL_14_14 17
#define LABEL_14_10 19
#define ENVIRONMENT_LABEL_14_3 39
#define DEBUGGING_LABEL_14_2 38
#define OBJECT_14_6 37
#define OBJECT_14_5 36
#define OBJECT_14_4 35
#define OBJECT_14_3 34
#define OBJECT_14_2 33
#define OBJECT_14_1 32
#define OBJECT_14_0 31
#define EXECUTE_CACHE_14_18 21
#define EXECUTE_CACHE_14_17 23
#define EXECUTE_CACHE_14_16 25
#define EXECUTE_CACHE_14_13 27
#define EXECUTE_CACHE_14_6 29
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd39;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto handler_atom_12;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_20;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_atom_19)
DEFLABEL (handler_atom_12)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_14_1]))
    goto label_26;

DEFLABEL (label_25)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_24;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd26.Lng))))
    goto label_24;
  (Wrd18.Obj) = ((Wrd24.pObj) [8]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_23)
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_14_6]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_32;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd51.Lng))))
    goto label_32;
  (Wrd39.Obj) = ((Wrd49.pObj) [7]);

DEFLABEL (label_31)
  if (! ((Wrd39.Obj) == (current_block [OBJECT_14_4])))
    goto label_25;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 30))
    goto label_30;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  (Wrd67.Obj) = (MAKE_OBJECT (26, (Wrd71.uLng)));

DEFLABEL (label_29)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_28;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd83.Lng) = ((Wrd84.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd83.Lng)))
    goto label_28;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_27)
  (Wrd86.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (label_28)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_16)
  (Wrd67.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [2]);
  (Wrd59.Obj) = (current_block [OBJECT_14_2]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_15)
  (Wrd39.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define TAG_15_8 2
#define LABEL_15_9 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_13 15
#define LABEL_15_14 17
#define LABEL_15_12 19
#define ENVIRONMENT_LABEL_15_3 37
#define DEBUGGING_LABEL_15_2 36
#define OBJECT_15_6 35
#define OBJECT_15_5 34
#define OBJECT_15_4 33
#define OBJECT_15_3 32
#define OBJECT_15_2 31
#define OBJECT_15_1 30
#define OBJECT_15_0 29
#define EXECUTE_CACHE_15_17 21
#define EXECUTE_CACHE_15_16 23
#define EXECUTE_CACHE_15_15 25
#define EXECUTE_CACHE_15_6 27
#define FREE_REFERENCES_LABEL_15_0 20
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto handler_symbol_11;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_20;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_15_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_symbol_19)
DEFLABEL (handler_symbol_11)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_15_1]))
    goto label_22;

DEFLABEL (label_21)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_33;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd21.Lng))))
    goto label_33;
  (Wrd9.Obj) = ((Wrd19.pObj) [7]);

DEFLABEL (label_32)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_15_4])))
    goto label_21;
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 30))
    goto label_31;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd38.uLng)));

DEFLABEL (label_30)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_29;
  if ((Wrd34.Obj) == (current_block [OBJECT_15_6]))
    goto label_28;

DEFLABEL (label_27)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 30))
    goto label_26;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [1]);
  (Wrd50.Obj) = (MAKE_OBJECT (26, (Wrd54.uLng)));

DEFLABEL (label_25)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_24;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd66.Lng) = ((Wrd67.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd66.Lng)))
    goto label_24;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_23)
  (Wrd69.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (label_24)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_15)
  (Wrd50.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd70.Obj) = (Rsp [2]);
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_27;

DEFLABEL (label_29)
  (Wrd73.Obj) = (current_block [OBJECT_15_6]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_31)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_14)
  (Wrd34.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_15_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define ENVIRONMENT_LABEL_16_3 28
#define DEBUGGING_LABEL_16_2 27
#define OBJECT_16_5 26
#define OBJECT_16_4 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_12 15
#define EXECUTE_CACHE_16_8 17
#define EXECUTE_CACHE_16_7 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_16_4);
      goto handler_prefix_keyword_6;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_prefix_keyword_12)
DEFLABEL (handler_prefix_keyword_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_15)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_2]))
    goto label_14;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_13)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_16_9);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_21;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_20)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_19;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd28.Lng) == 0)
    goto label_18;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [1]);
  if (! ((Wrd24.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = (current_block [OBJECT_16_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_17_4);
      goto handler_number_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_number_5)
DEFLABEL (handler_number_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_8 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 11
#define EXECUTE_CACHE_18_9 13
#define EXECUTE_CACHE_18_6 15
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto parse_number_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_number_9)
DEFLABEL (parse_number_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_18_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
parse_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto parse_atom_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_atom_3)
DEFLABEL (parse_atom_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto parse_atom_no_quoting_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_atom_no_quoting_3)
DEFLABEL (parse_atom_no_quoting_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define LABEL_21_14 21
#define LABEL_21_16 23
#define LABEL_21_18 25
#define LABEL_21_19 27
#define LABEL_21_15 29
#define LABEL_21_17 31
#define LABEL_21_23 33
#define LABEL_21_26 35
#define LABEL_21_27 37
#define LABEL_21_28 39
#define LABEL_21_20 41
#define LABEL_21_30 43
#define LABEL_21_34 45
#define LABEL_21_35 47
#define LABEL_21_24 49
#define TAG_21_25 23
#define LABEL_21_33 51
#define LABEL_21_31 53
#define LABEL_21_32 55
#define LABEL_21_40 57
#define LABEL_21_41 59
#define LABEL_21_42 61
#define LABEL_21_44 63
#define LABEL_21_38 65
#define LABEL_21_39 67
#define LABEL_21_46 69
#define LABEL_21_45 71
#define LABEL_21_48 73
#define LABEL_21_47 75
#define ENVIRONMENT_LABEL_21_3 111
#define DEBUGGING_LABEL_21_2 110
#define OBJECT_21_15 109
#define OBJECT_21_14 108
#define OBJECT_21_13 107
#define OBJECT_21_12 106
#define OBJECT_21_11 105
#define OBJECT_21_10 104
#define OBJECT_21_9 103
#define OBJECT_21_8 102
#define OBJECT_21_7 101
#define OBJECT_21_6 100
#define OBJECT_21_5 99
#define OBJECT_21_4 98
#define OBJECT_21_3 97
#define OBJECT_21_2 96
#define OBJECT_21_1 95
#define OBJECT_21_0 94
#define EXECUTE_CACHE_21_43 77
#define EXECUTE_CACHE_21_37 79
#define EXECUTE_CACHE_21_36 81
#define EXECUTE_CACHE_21_29 83
#define EXECUTE_CACHE_21_22 85
#define EXECUTE_CACHE_21_21 87
#define EXECUTE_CACHE_21_11 89
#define FREE_REFERENCE_21_1 92
#define FREE_REFERENCE_21_0 93
#define FREE_REFERENCES_LABEL_21_0 76
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd38;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd100;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd39;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd73;
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
      goto parse_atom_1_58;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_60;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_61;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_64;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_62;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto Z__peek_53;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto read_unquoted_34;

    case 10:
      current_block = (Rpc - LABEL_21_16);
      goto loop_51;

    case 11:
      current_block = (Rpc - LABEL_21_18);
      goto label_65;

    case 12:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_48;

    case 15:
      current_block = (Rpc - LABEL_21_23);
      goto continuation_31;

    case 16:
      current_block = (Rpc - LABEL_21_26);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_21_27);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_21_28);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_21_20);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_21_30);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_21_34);
      goto label_67;

    case 22:
      current_block = (Rpc - LABEL_21_35);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_21_24);
      goto lambda_76;

    case 24:
      current_block = (Rpc - LABEL_21_33);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_21_31);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_21_32);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_21_40);
      goto Z__read_45;

    case 28:
      current_block = (Rpc - LABEL_21_41);
      goto label_69;

    case 29:
      current_block = (Rpc - LABEL_21_42);
      goto label_70;

    case 30:
      current_block = (Rpc - LABEL_21_44);
      goto read_quoted_29;

    case 31:
      current_block = (Rpc - LABEL_21_38);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_21_39);
      goto continuation_20;

    case 33:
      current_block = (Rpc - LABEL_21_46);
      goto continuation_25;

    case 34:
      current_block = (Rpc - LABEL_21_45);
      goto continuation_22;

    case 35:
      current_block = (Rpc - LABEL_21_48);
      goto continuation_26;

    case 36:
      current_block = (Rpc - LABEL_21_47);
      goto continuation_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_atom_1_72)
DEFLABEL (parse_atom_1_58)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd73.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd71.pObj) = (& (Rhp [-1]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd71.pObj)));
  (Rsp [2]) = (Wrd72.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_90;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_90;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_89)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_88;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_88;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_87)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_86;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_86;
  (Wrd39.Obj) = ((Wrd59.pObj) [4]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;

DEFLABEL (label_82)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_81;
  Wrd50 = Wrd54;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_79)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto Z__peek_53;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto read_unquoted_34;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd51.pObj));

DEFLABEL (label_63)
  (Wrd50.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_85;
  Wrd41 = Wrd45;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_79;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd42.pObj));

DEFLABEL (label_62)
  (Wrd41.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_21_3]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  goto label_82;

DEFLABEL (label_88)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_21_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (Z__peek_73)
DEFLABEL (Z__peek_53)
  INTERRUPT_CHECK (26, LABEL_21_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_91;
  goto loop_51;

DEFLABEL (label_91)
  (Rsp [0]) = (Wrd9.Obj);
  if (! ((Wrd10.uLng) == 1))
    goto label_92;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd18.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_92)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 1);

DEFLABEL (read_unquoted_74)
DEFLABEL (read_unquoted_34)
  INTERRUPT_CHECK (26, LABEL_21_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_7]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == Rvl)
    goto label_108;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_108;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_107;
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_26]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21_26);

DEFLABEL (label_107)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [10]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_93;
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_37]));

DEFLABEL (label_93)
  if (! ((Wrd13.uLng) == 1))
    goto label_106;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_105)
  (Wrd31.Obj) = (Rsp [10]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  ((Wrd32.pObj) [0]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_104)
  (Wrd34.Obj) = (Rsp [2]);
  if ((Wrd34.Obj) == (current_block [OBJECT_21_10]))
    goto label_103;
  if ((Wrd34.Obj) == (current_block [OBJECT_21_11]))
    goto label_100;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_33]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_27]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd47.uLng) == 2))
    goto label_99;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_98)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd57.Lng) < 256L)
    goto label_95;
  (Wrd61.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_94)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_36]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21_33);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [8]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  goto Z__peek_53;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21_38);
  (Rsp [2]) = Rvl;
  goto read_unquoted_34;

DEFLABEL (label_95)
  (Wrd78.Obj) = (Rsp [9]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 30))
    goto label_97;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_97;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [1]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) (Wrd57.Lng)) < ((unsigned long) (Wrd77.Lng))))
    goto label_97;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd68.pChr) = (& ((Wrd75.pChr) [(Wrd65.Lng)]));
  (Wrd69.uLng) = ((unsigned long) (((unsigned char *) (Wrd68.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd62.Obj) = (MAKE_OBJECT (26, (Wrd69.uLng)));

DEFLABEL (label_96)
  (Rsp [1]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_14]), 1);

DEFLABEL (label_97)
  (Wrd80.Obj) = (Rsp [9]);
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_35]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_13]), 2);

DEFLABEL (label_68)
  (Wrd62.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_34]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_12]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  (Wrd86.Obj) = (Rsp [10]);
  if (! ((Wrd86.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_102;

DEFLABEL (label_101)
  (Rsp [10]) = (Wrd34.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_29]));

DEFLABEL (label_102)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_31]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_32]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.pObj) = (& (Rsp [10]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd95.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  goto Z__read_45;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21_31);
  (Wrd5.Obj) = (current_block [OBJECT_21_15]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [8]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto Z__peek_53;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21_39);
  (Rsp [2]) = Rvl;
  goto read_unquoted_34;

DEFLABEL (label_103)
  (Wrd100.Obj) = (Rsp [10]);
  if ((Wrd100.Obj) == ((SCHEME_OBJECT) 0))
    goto label_101;
  Rsp = (& (Rsp [3]));
  goto read_quoted_29;

DEFLABEL (label_106)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_30]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_9]), 1);

DEFLABEL (label_66)
  (Wrd16.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd12.Obj) = (Rsp [10]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_109;
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [10]) = (Wrd18.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_22]));

DEFLABEL (label_109)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_22]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_21_23);
  (Rsp [8]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [9]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [10]) = (Wrd7.Obj);
  Rsp = (& (Rsp [8]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_24])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_27);
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21_28);
  goto label_104;

DEFLABEL (loop_75)
DEFLABEL (loop_51)
  INTERRUPT_CHECK (26, LABEL_21_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_112;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd23.Lng))))
    goto label_112;
  (Wrd15.Obj) = ((Wrd21.pObj) [14]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_111)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_21_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_110)
  Rsp = (& (Rsp [1]));
  goto loop_51;

DEFLABEL (label_112)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);
  (Wrd31.Obj) = (current_block [OBJECT_21_8]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_21_24);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (Z__read_77)
DEFLABEL (Z__read_45)
  INTERRUPT_CHECK (26, LABEL_21_40);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_113;
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [1]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_43]));

DEFLABEL (label_113)
  if (! ((Wrd10.uLng) == 1))
    goto label_117;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_116)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_115;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd38.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_114)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [2]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  ((Wrd62.pObj) [0]) = (Wrd38.Obj);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_42]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_9]), 1);

DEFLABEL (label_70)
  (Wrd38.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_41]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (read_quoted_78)
DEFLABEL (read_quoted_29)
  INTERRUPT_CHECK (26, LABEL_21_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto Z__read_45;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21_45);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_21_10])))
    goto label_118;
  (* (--Rsp)) = Rvl;
  (Wrd22.Obj) = (current_block [OBJECT_21_15]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_47]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.pObj) = (& (Rsp [8]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  goto Z__peek_53;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21_47);
  (Rsp [2]) = Rvl;
  goto read_unquoted_34;

DEFLABEL (label_118)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_48]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! (Rvl == (current_block [OBJECT_21_11])))
    goto label_120;
  (Wrd18.pObj) = (& (Rsp [8]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  goto Z__read_45;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_21_46);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_36]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_21_48);
  Rsp = (& (Rsp [1]));
  goto read_quoted_29;

DEFLABEL (label_120)
  Rsp = (& (Rsp [1]));
  goto label_119;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define LABEL_22_11 13
#define ENVIRONMENT_LABEL_22_3 26
#define DEBUGGING_LABEL_22_2 25
#define OBJECT_22_1 24
#define OBJECT_22_0 23
#define EXECUTE_CACHE_22_12 15
#define EXECUTE_CACHE_22_10 17
#define EXECUTE_CACHE_22_7 19
#define FREE_REFERENCE_22_0 22
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_22_4);
      goto handler_list_10;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_list_14)
DEFLABEL (handler_list_10)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (loop_15)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_16;
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_10 15
#define LABEL_23_11 17
#define LABEL_23_12 19
#define LABEL_23_14 21
#define ENVIRONMENT_LABEL_23_3 32
#define DEBUGGING_LABEL_23_2 31
#define OBJECT_23_5 30
#define OBJECT_23_4 29
#define OBJECT_23_3 28
#define OBJECT_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_13 23
#define FREE_REFERENCES_LABEL_23_0 22
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_23_4);
      goto fix_up_listB_15;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_23_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_23_12);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_23_14);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_up_listB_25)
DEFLABEL (fix_up_listB_15)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_13;

DEFLABEL (loop_26)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_23_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  Rvl = (current_block [OBJECT_23_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  if (! ((Wrd6.uLng) == 1))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_45)
  if ((Wrd9.Obj) == (current_block [OBJECT_23_1]))
    goto label_30;
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_13;

DEFLABEL (label_29)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_18)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd29.Obj) = (Rsp [1]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_5);

DEFLABEL (label_36)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_35;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_34)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_33;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd71.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_31;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = (Rsp [1]);
  ((Wrd80.pObj) [1]) = (Wrd81.Obj);
  Rvl = (current_block [OBJECT_23_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 2);

DEFLABEL (label_33)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_23)
  (Wrd71.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_22)
  (Wrd62.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_44;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_43)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_37;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_42;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_41)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_40;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_39)
  if ((Wrd54.Obj) == (current_block [OBJECT_23_3]))
    goto label_36;
  goto label_37;

DEFLABEL (label_40)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_21)
  (Wrd54.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_20)
  (Wrd45.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_19)
  (Wrd31.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 24
#define DEBUGGING_LABEL_24_2 23
#define OBJECT_24_1 22
#define OBJECT_24_0 21
#define EXECUTE_CACHE_24_11 13
#define EXECUTE_CACHE_24_10 15
#define EXECUTE_CACHE_24_7 17
#define FREE_REFERENCE_24_0 20
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto handler_vector_8;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_vector_12)
DEFLABEL (handler_vector_8)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_14;
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_14)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_6 5
#define LABEL_25_7 7
#define LABEL_25_4 9
#define LABEL_25_8 11
#define ENVIRONMENT_LABEL_25_3 24
#define DEBUGGING_LABEL_25_2 23
#define OBJECT_25_1 22
#define OBJECT_25_0 21
#define EXECUTE_CACHE_25_10 13
#define EXECUTE_CACHE_25_9 15
#define FREE_REFERENCE_25_2 18
#define FREE_REFERENCE_25_1 19
#define FREE_REFERENCE_25_0 20
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_4);
      goto handler_close_parenthesis_3;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_close_parenthesis_9)
DEFLABEL (handler_close_parenthesis_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_25_0]))
    goto label_17;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_1]))
    goto label_11;

DEFLABEL (label_10)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (label_11)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;
  Wrd23 = Wrd27;

DEFLABEL (label_15)
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_14;
  Wrd31 = Wrd35;

DEFLABEL (label_13)
  Rvl = (Wrd31.Obj);

DEFLABEL (label_12)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd32.pObj));

DEFLABEL (label_7)
  (Wrd31.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd24.pObj));

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_19;
  Wrd15 = Wrd19;

DEFLABEL (label_18)
  Rvl = (Wrd15.Obj);
  goto label_12;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd16.pObj));

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_4 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 15
#define DEBUGGING_LABEL_26_2 14
#define OBJECT_26_0 13
#define EXECUTE_CACHE_26_7 9
#define FREE_REFERENCE_26_0 12
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_26_4);
      goto handler_close_bracket_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_close_bracket_6)
DEFLABEL (handler_close_bracket_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_26_0]))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_8 9
#define LABEL_27_11 11
#define LABEL_27_13 13
#define LABEL_27_14 15
#define LABEL_27_16 17
#define LABEL_27_9 19
#define LABEL_27_19 21
#define LABEL_27_23 23
#define LABEL_27_17 25
#define TAG_27_18 11
#define LABEL_27_21 27
#define TAG_27_22 12
#define LABEL_27_24 29
#define TAG_27_25 13
#define LABEL_27_12 31
#define LABEL_27_28 33
#define LABEL_27_29 35
#define LABEL_27_30 37
#define ENVIRONMENT_LABEL_27_3 62
#define DEBUGGING_LABEL_27_2 61
#define OBJECT_27_3 60
#define OBJECT_27_2 59
#define OBJECT_27_1 58
#define OBJECT_27_0 57
#define EXECUTE_CACHE_27_31 39
#define EXECUTE_CACHE_27_27 41
#define EXECUTE_CACHE_27_26 43
#define EXECUTE_CACHE_27_20 45
#define EXECUTE_CACHE_27_15 47
#define EXECUTE_CACHE_27_10 49
#define EXECUTE_CACHE_27_7 51
#define FREE_REFERENCE_27_2 54
#define FREE_REFERENCE_27_1 55
#define FREE_REFERENCE_27_0 56
#define FREE_REFERENCES_LABEL_27_0 38
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd14;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto handler_hashed_object_25;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto loop_23;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_27_13);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_27_14);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_27_19);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_27_23);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_27_17);
      goto lambda_38;

    case 12:
      current_block = (Rpc - LABEL_27_21);
      goto lambda_39;

    case 13:
      current_block = (Rpc - LABEL_27_24);
      goto lambda_40;

    case 14:
      current_block = (Rpc - LABEL_27_12);
      goto lambda_15;

    case 15:
      current_block = (Rpc - LABEL_27_28);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_27_29);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_27_30);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_hashed_object_36)
DEFLABEL (handler_hashed_object_25)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_23;

DEFLABEL (loop_37)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_56;
  Wrd6 = Wrd10;

DEFLABEL (label_55)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_42;
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_42)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_17])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_46)
  (Wrd17.Obj) = (Rsp [0]);
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_5;

DEFLABEL (label_43)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_21])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  ((Wrd26.pObj) [4]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_45;
  Wrd29 = Wrd33;

DEFLABEL (label_44)
  (Wrd38.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Rsp [0]) = (Wrd35.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_24])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd42 = Wrd41;
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_23])), (Wrd30.pObj));

DEFLABEL (label_28)
  (Wrd29.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_48)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  if (! ((Wrd14.uLng) == 1))
    goto label_54;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_52;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_51)
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_50;
  Wrd72 = Wrd76;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_14])), (Wrd73.pObj));

DEFLABEL (label_31)
  (Wrd72.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_8])), (Wrd7.pObj));

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_27_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_27]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_27_21);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_27_24);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (lambda_41)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_27_12);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_63;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_62)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_57;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_57)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_60)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_59;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_31]));

DEFLABEL (label_59)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_34)
  (Wrd25.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_33)
  (Wrd16.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_9 9
#define ENVIRONMENT_LABEL_28_3 22
#define DEBUGGING_LABEL_28_2 21
#define OBJECT_28_1 20
#define OBJECT_28_0 19
#define EXECUTE_CACHE_28_10 11
#define EXECUTE_CACHE_28_8 13
#define EXECUTE_CACHE_28_6 15
#define FREE_REFERENCE_28_0 18
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_28_4);
      goto define_bracketed_object_parser_method_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_bracketed_object_parser_method_6)
DEFLABEL (define_bracketed_object_parser_method_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_9])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 17
#define DEBUGGING_LABEL_29_2 16
#define OBJECT_29_0 15
#define EXECUTE_CACHE_29_9 9
#define EXECUTE_CACHE_29_8 11
#define EXECUTE_CACHE_29_7 13
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_29_4);
      goto handler_unhash_3;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_unhash_6)
DEFLABEL (handler_unhash_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define LABEL_30_5 7
#define LABEL_30_9 9
#define ENVIRONMENT_LABEL_30_3 21
#define DEBUGGING_LABEL_30_2 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_11 11
#define EXECUTE_CACHE_30_10 13
#define EXECUTE_CACHE_30_8 15
#define EXECUTE_CACHE_30_6 17
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto parse_unhash_5;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_unhash_8)
DEFLABEL (parse_unhash_5)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_7);

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_30_0])))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 13
#define DEBUGGING_LABEL_31_2 12
#define OBJECT_31_2 11
#define OBJECT_31_1 10
#define OBJECT_31_0 9
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_31_4);
      goto handler_quote_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_quote_5)
DEFLABEL (handler_quote_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd9.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_31_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 13
#define DEBUGGING_LABEL_32_2 12
#define OBJECT_32_2 11
#define OBJECT_32_1 10
#define OBJECT_32_0 9
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto handler_quasiquote_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_quasiquote_5)
DEFLABEL (handler_quasiquote_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd9.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_9 7
#define LABEL_33_7 9
#define LABEL_33_11 11
#define ENVIRONMENT_LABEL_33_3 25
#define DEBUGGING_LABEL_33_2 24
#define OBJECT_33_4 23
#define OBJECT_33_3 22
#define OBJECT_33_2 21
#define OBJECT_33_1 20
#define OBJECT_33_0 19
#define EXECUTE_CACHE_33_10 13
#define EXECUTE_CACHE_33_8 15
#define EXECUTE_CACHE_33_6 17
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_33_4);
      goto handler_unquote_7;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_unquote_10)
DEFLABEL (handler_unquote_7)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == (current_block [OBJECT_33_0]))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Wrd9.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_33_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd9.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_33_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define TAG_34_6 1
#define LABEL_34_8 7
#define LABEL_34_9 9
#define LABEL_34_13 11
#define LABEL_34_15 13
#define LABEL_34_17 15
#define LABEL_34_19 17
#define LABEL_34_20 19
#define LABEL_34_21 21
#define LABEL_34_22 23
#define LABEL_34_23 25
#define LABEL_34_24 27
#define LABEL_34_11 29
#define LABEL_34_12 31
#define LABEL_34_26 33
#define ENVIRONMENT_LABEL_34_3 66
#define DEBUGGING_LABEL_34_2 65
#define OBJECT_34_17 64
#define OBJECT_34_16 63
#define OBJECT_34_15 62
#define OBJECT_34_14 61
#define OBJECT_34_13 60
#define OBJECT_34_12 59
#define OBJECT_34_11 58
#define OBJECT_34_10 57
#define OBJECT_34_9 56
#define OBJECT_34_8 55
#define OBJECT_34_7 54
#define OBJECT_34_6 53
#define OBJECT_34_5 52
#define OBJECT_34_4 51
#define OBJECT_34_3 50
#define OBJECT_34_2 49
#define OBJECT_34_1 48
#define OBJECT_34_0 47
#define EXECUTE_CACHE_34_25 35
#define EXECUTE_CACHE_34_18 37
#define EXECUTE_CACHE_34_16 39
#define EXECUTE_CACHE_34_14 41
#define EXECUTE_CACHE_34_10 43
#define EXECUTE_CACHE_34_7 45
#define FREE_REFERENCES_LABEL_34_0 34
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_34_4);
      goto handler_string_23;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_34_8);
      goto loop_20;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_34_21);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_34_22);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_34_23);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_34_24);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_34_26);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_string_26)
DEFLABEL (handler_string_23)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_34_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_20;

DEFLABEL (loop_28)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_34_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_34_0])))
    goto label_29;
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  if (Rvl == (current_block [OBJECT_34_2]))
    goto label_30;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_13);
  Rsp = (& (Rsp [1]));
  goto loop_20;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd5.Obj) = (current_block [OBJECT_34_16]);

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_34_26);
  Rsp = (& (Rsp [1]));
  goto loop_20;

DEFLABEL (label_33)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_34_15]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_34)
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd5.Obj) = (current_block [OBJECT_34_14]);
  goto label_32;

DEFLABEL (label_35)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_34_13]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_34;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_11);
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd5.Obj) = (current_block [OBJECT_34_12]);
  goto label_32;

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_34_11]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_34;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd5.Obj) = (current_block [OBJECT_34_10]);
  goto label_32;

DEFLABEL (label_37)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_34_9]);
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_34;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_34_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd5.Obj) = (current_block [OBJECT_34_8]);
  goto label_32;

DEFLABEL (label_38)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_34_7]);
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_34;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_34_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd5.Obj) = (current_block [OBJECT_34_6]);
  goto label_32;

DEFLABEL (label_39)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_34_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  goto label_34;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_34_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_34_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [3]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = ((Wrd70.pObj) [2]);
  (Rsp [2]) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (label_40)
  (Wrd5.Obj) = (Rsp [0]);
  goto label_32;

DEFLABEL (label_41)
  (Wrd5.Obj) = (current_block [OBJECT_34_4]);
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_7 5
#define LABEL_35_5 7
#define LABEL_35_9 9
#define LABEL_35_12 11
#define LABEL_35_11 13
#define LABEL_35_13 15
#define LABEL_35_15 17
#define LABEL_35_14 19
#define ENVIRONMENT_LABEL_35_3 30
#define DEBUGGING_LABEL_35_2 29
#define OBJECT_35_1 28
#define OBJECT_35_0 27
#define EXECUTE_CACHE_35_10 21
#define EXECUTE_CACHE_35_8 23
#define EXECUTE_CACHE_35_6 25
#define FREE_REFERENCES_LABEL_35_0 20
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto octal__char_18;

    case 1:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_35_14);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (octal__char_21)
DEFLABEL (octal__char_18)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_7);

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd11.Lng) = 3L;
  (Wrd14.Lng) = (FIXNUM_LSH ((Wrd9.Lng), (Wrd11.Lng)));
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd19.Lng) = ((Wrd14.Lng) + (Wrd16.Lng));
  (Wrd24.Lng) = (FIXNUM_LSH ((Wrd19.Lng), (Wrd11.Lng)));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd24.Lng) + (Wrd26.Lng));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Rsp [7]) = (Wrd23.Obj);
  Rsp = (& (Rsp [7]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_23)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_35_15);
  goto label_22;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_12);
  goto label_24;

DEFLABEL (label_28)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) > 3L)
    goto label_27;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_8 5
#define LABEL_36_5 7
#define LABEL_36_6 9
#define ENVIRONMENT_LABEL_36_3 20
#define DEBUGGING_LABEL_36_2 19
#define OBJECT_36_1 18
#define OBJECT_36_0 17
#define EXECUTE_CACHE_36_10 11
#define EXECUTE_CACHE_36_9 13
#define EXECUTE_CACHE_36_7 15
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto handler_false_6;

    case 1:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_false_9)
DEFLABEL (handler_false_6)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_5);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_8 5
#define LABEL_37_5 7
#define LABEL_37_6 9
#define ENVIRONMENT_LABEL_37_3 21
#define DEBUGGING_LABEL_37_2 20
#define OBJECT_37_2 19
#define OBJECT_37_1 18
#define OBJECT_37_0 17
#define EXECUTE_CACHE_37_10 11
#define EXECUTE_CACHE_37_9 13
#define EXECUTE_CACHE_37_7 15
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_37_4);
      goto handler_true_6;

    case 1:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_true_9)
DEFLABEL (handler_true_6)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.Obj) = (current_block [OBJECT_37_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_5);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_8 9
#define LABEL_38_9 11
#define LABEL_38_10 13
#define LABEL_38_11 15
#define LABEL_38_12 17
#define ENVIRONMENT_LABEL_38_3 33
#define DEBUGGING_LABEL_38_2 32
#define OBJECT_38_8 31
#define OBJECT_38_7 30
#define OBJECT_38_6 29
#define OBJECT_38_5 28
#define OBJECT_38_4 27
#define OBJECT_38_3 26
#define OBJECT_38_2 25
#define OBJECT_38_1 24
#define OBJECT_38_0 23
#define EXECUTE_CACHE_38_13 19
#define EXECUTE_CACHE_38_6 21
#define FREE_REFERENCES_LABEL_38_0 18
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd74;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_38_4);
      goto handler_bit_string_17;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_38_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_38_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_38_12);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_bit_string_24)
DEFLABEL (handler_bit_string_17)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_26)
  (Wrd17.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_13;

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_38_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_28;
  (Wrd10.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_8]), 2);

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_37;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_36)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == (current_block [OBJECT_38_4]))
    goto label_35;
  if ((Wrd37.Obj) == (current_block [OBJECT_38_5]))
    goto label_29;
  (Wrd41.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (label_29)
  (Wrd43.Obj) = (current_block [OBJECT_38_6]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_34)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_33;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (multiply_with_overflow ((Wrd54.Lng), 2, (& (Wrd52.Lng))))
    goto label_33;
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));

DEFLABEL (label_32)
  (Wrd57.Obj) = (* (Rsp++));
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_31;
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_31;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd66.Lng) = ((Wrd67.Lng) + (Wrd68.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd66.Lng)))
    goto label_31;
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd63.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd72.Lng) = ((Wrd71.Lng) + 1L);
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));
  (Rsp [0]) = (Wrd69.Obj);
  goto loop_13;

DEFLABEL (label_31)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd63.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_38_7]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_21)
  (Wrd49.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd74.Obj) = (current_block [OBJECT_38_2]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_34;

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define LABEL_39_10 9
#define LABEL_39_12 11
#define LABEL_39_14 13
#define LABEL_39_15 15
#define LABEL_39_9 17
#define LABEL_39_13 19
#define LABEL_39_20 21
#define LABEL_39_21 23
#define LABEL_39_16 25
#define LABEL_39_17 27
#define TAG_39_18 12
#define LABEL_39_23 29
#define LABEL_39_25 31
#define LABEL_39_26 33
#define LABEL_39_28 35
#define LABEL_39_27 37
#define LABEL_39_29 39
#define ENVIRONMENT_LABEL_39_3 61
#define DEBUGGING_LABEL_39_2 60
#define OBJECT_39_8 59
#define OBJECT_39_7 58
#define OBJECT_39_6 57
#define OBJECT_39_5 56
#define OBJECT_39_4 55
#define OBJECT_39_3 54
#define OBJECT_39_2 53
#define OBJECT_39_1 52
#define OBJECT_39_0 51
#define EXECUTE_CACHE_39_24 41
#define EXECUTE_CACHE_39_22 43
#define EXECUTE_CACHE_39_19 45
#define EXECUTE_CACHE_39_11 47
#define EXECUTE_CACHE_39_8 49
#define FREE_REFERENCES_LABEL_39_0 40
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_39_4);
      goto handler_char_29;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_39_10);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_39_12);
      goto loop_6;

    case 5:
      current_block = (Rpc - LABEL_39_14);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_39_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_39_20);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_39_21);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_39_16);
      goto continuation_27;

    case 12:
      current_block = (Rpc - LABEL_39_17);
      goto lambda_38;

    case 13:
      current_block = (Rpc - LABEL_39_23);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_39_25);
      goto loop_24;

    case 15:
      current_block = (Rpc - LABEL_39_26);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_39_28);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_39_27);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_39_29);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_char_35)
DEFLABEL (handler_char_29)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_39_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_12;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_39_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_17])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [5]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_39_16);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_22]));

DEFLABEL (label_43)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (current_block [OBJECT_39_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_36)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_39_5);
  goto loop_6;

DEFLABEL (loop_37)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_39_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd23.Lng))))
    goto label_49;
  (Wrd15.Obj) = ((Wrd21.pObj) [14]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_48)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_5]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_20);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_45;
  Rvl = (current_block [OBJECT_39_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_47;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_47;
  (Wrd8.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd32.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (label_47)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_39_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_39_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_39_17);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_39_23);
  goto loop_24;

DEFLABEL (loop_39)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_39_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_39_28);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_39_7])))
    goto label_50;
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_24]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_12;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_39_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (current_block [OBJECT_39_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  goto loop_24;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_39_27);
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_9 9
#define LABEL_40_10 11
#define LABEL_40_11 13
#define LABEL_40_13 15
#define LABEL_40_12 17
#define LABEL_40_15 19
#define LABEL_40_14 21
#define LABEL_40_17 23
#define LABEL_40_16 25
#define LABEL_40_19 27
#define LABEL_40_18 29
#define LABEL_40_20 31
#define LABEL_40_21 33
#define ENVIRONMENT_LABEL_40_3 65
#define DEBUGGING_LABEL_40_2 64
#define OBJECT_40_15 63
#define OBJECT_40_14 62
#define OBJECT_40_13 61
#define OBJECT_40_12 60
#define OBJECT_40_11 59
#define OBJECT_40_10 58
#define OBJECT_40_9 57
#define OBJECT_40_8 56
#define OBJECT_40_7 55
#define OBJECT_40_6 54
#define OBJECT_40_5 53
#define OBJECT_40_4 52
#define OBJECT_40_3 51
#define OBJECT_40_2 50
#define OBJECT_40_1 49
#define OBJECT_40_0 48
#define EXECUTE_CACHE_40_23 35
#define EXECUTE_CACHE_40_22 37
#define EXECUTE_CACHE_40_8 39
#define EXECUTE_CACHE_40_6 41
#define FREE_REFERENCE_40_3 44
#define FREE_REFERENCE_40_2 45
#define FREE_REFERENCE_40_1 46
#define FREE_REFERENCE_40_0 47
#define FREE_REFERENCES_LABEL_40_0 34
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_40_4);
      goto handler_named_constant_12;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_40_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_40_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_40_17);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_40_19);
      goto label_17;

    case 13:
      current_block = (Rpc - LABEL_40_18);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_40_20);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_40_21);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_named_constant_19)
DEFLABEL (handler_named_constant_12)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (current_block [OBJECT_40_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = (current_block [OBJECT_40_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_40_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_40_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_40_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_40_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd7.Obj) = (current_block [OBJECT_40_11]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_12]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_13]), 2);

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_40_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_22]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_40_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (current_block [OBJECT_40_15]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_23]));

DEFLABEL (label_26)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_19])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_17])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_15])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_13])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_10 11
#define LABEL_41_16 13
#define LABEL_41_17 15
#define LABEL_41_18 17
#define LABEL_41_12 19
#define LABEL_41_19 21
#define ENVIRONMENT_LABEL_41_3 42
#define DEBUGGING_LABEL_41_2 41
#define OBJECT_41_3 40
#define OBJECT_41_2 39
#define OBJECT_41_1 38
#define OBJECT_41_0 37
#define EXECUTE_CACHE_41_20 23
#define EXECUTE_CACHE_41_15 25
#define EXECUTE_CACHE_41_14 27
#define EXECUTE_CACHE_41_13 29
#define EXECUTE_CACHE_41_11 31
#define EXECUTE_CACHE_41_9 33
#define EXECUTE_CACHE_41_6 35
#define FREE_REFERENCES_LABEL_41_0 22
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_41_4);
      goto handler_special_arg_15;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_16);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_41_17);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_41_18);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_41_12);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_41_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_special_arg_20)
DEFLABEL (handler_special_arg_15)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  goto loop_13;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_41_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_16);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), 10, (& (Wrd13.Lng))))
    goto label_25;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_24)
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_23;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_23;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) + (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_23;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd5.Obj) = (current_block [OBJECT_41_0]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (current_block [OBJECT_41_1])))
    goto label_27;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_12);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd12.Obj) == (current_block [OBJECT_41_3]))
    goto label_28;
  (Rsp [6]) = (Wrd12.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (label_28)
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd19.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define EXECUTE_CACHE_42_5 5
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto make_shared_objects_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_shared_objects_3)
DEFLABEL (make_shared_objects_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_8 9
#define LABEL_43_10 11
#define LABEL_43_7 13
#define ENVIRONMENT_LABEL_43_3 26
#define DEBUGGING_LABEL_43_2 25
#define OBJECT_43_1 24
#define OBJECT_43_0 23
#define EXECUTE_CACHE_43_12 15
#define EXECUTE_CACHE_43_11 17
#define EXECUTE_CACHE_43_9 19
#define FREE_REFERENCE_43_0 22
#define FREE_REFERENCES_LABEL_43_0 14
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_43_4);
      goto save_shared_objectB_5;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_shared_objectB_11)
DEFLABEL (save_shared_objectB_5)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_17;
  Wrd21 = Wrd25;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_15;
  Wrd30 = Wrd34;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd5.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd5.Obj)))
    goto label_13;

DEFLABEL (label_12)
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_10);
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_8])), (Wrd31.pObj));

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_6])), (Wrd22.pObj));

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_43_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_6 5
#define LABEL_44_7 7
#define LABEL_44_9 9
#define LABEL_44_5 11
#define LABEL_44_10 13
#define ENVIRONMENT_LABEL_44_3 24
#define DEBUGGING_LABEL_44_2 23
#define OBJECT_44_1 22
#define OBJECT_44_0 21
#define EXECUTE_CACHE_44_11 15
#define EXECUTE_CACHE_44_8 17
#define FREE_REFERENCE_44_0 20
#define FREE_REFERENCES_LABEL_44_0 14
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_44_4);
      goto get_shared_object_5;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_shared_object_11)
DEFLABEL (get_shared_object_5)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_17;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_17;
  (Wrd17.Obj) = ((Wrd21.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_9);
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_10])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_44_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_8 9
#define LABEL_45_9 11
#define LABEL_45_7 13
#define ENVIRONMENT_LABEL_45_3 18
#define DEBUGGING_LABEL_45_2 17
#define OBJECT_45_2 16
#define OBJECT_45_1 15
#define OBJECT_45_0 14
#define FREE_REFERENCES_LABEL_45_0 14
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_45_4);
      goto Z__read_char_10;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_char_15)
DEFLABEL (Z__read_char_10)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  goto loop_5;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_45_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_45_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_23;
  (Wrd11.Obj) = ((Wrd15.pObj) [15]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_45_9);
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_45_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_8 7
#define LABEL_46_7 9
#define ENVIRONMENT_LABEL_46_3 19
#define DEBUGGING_LABEL_46_2 18
#define OBJECT_46_2 17
#define OBJECT_46_1 16
#define OBJECT_46_0 15
#define EXECUTE_CACHE_46_9 11
#define EXECUTE_CACHE_46_6 13
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_46_4);
      goto Z__read_char_no_eof_5;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_char_no_eof_8)
DEFLABEL (Z__read_char_no_eof_5)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_10;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_8);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_6 9
#define ENVIRONMENT_LABEL_47_3 13
#define DEBUGGING_LABEL_47_2 12
#define OBJECT_47_1 11
#define OBJECT_47_0 10
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_47_4);
      goto Z__peek_char_6;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__peek_char_10)
DEFLABEL (Z__peek_char_6)
  INTERRUPT_CHECK (26, LABEL_47_4);
  goto loop_4;

DEFLABEL (loop_11)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_47_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [14]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto loop_4;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_47_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_6 9
#define LABEL_48_9 11
#define LABEL_48_8 13
#define ENVIRONMENT_LABEL_48_3 23
#define DEBUGGING_LABEL_48_2 22
#define OBJECT_48_4 21
#define OBJECT_48_3 20
#define OBJECT_48_2 19
#define OBJECT_48_1 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_10 15
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_48_4);
      goto Z__peek_char_no_eof_11;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__peek_char_no_eof_15)
DEFLABEL (Z__peek_char_no_eof_11)
  INTERRUPT_CHECK (26, LABEL_48_4);
  goto loop_5;

DEFLABEL (loop_16)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  (Wrd11.Obj) = ((Wrd15.pObj) [14]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_4]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_9);
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_48_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 7
#define DEBUGGING_LABEL_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto db_associate_positionsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_associate_positionsP_3)
DEFLABEL (db_associate_positionsP_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

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

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 7
#define DEBUGGING_LABEL_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto db_atom_delimiters_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_atom_delimiters_3)
DEFLABEL (db_atom_delimiters_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

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

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 7
#define DEBUGGING_LABEL_51_2 6
#define OBJECT_51_1 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto db_canonicalize_symbolsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_canonicalize_symbolsP_3)
DEFLABEL (db_canonicalize_symbolsP_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

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

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 7
#define DEBUGGING_LABEL_52_2 6
#define OBJECT_52_1 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto db_constituents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_constituents_3)
DEFLABEL (db_constituents_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

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

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 7
#define DEBUGGING_LABEL_53_2 6
#define OBJECT_53_1 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto db_enable_file_attributes_parsing_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_enable_file_attributes_parsing_3)
DEFLABEL (db_enable_file_attributes_parsing_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto db_keyword_style_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_keyword_style_3)
DEFLABEL (db_keyword_style_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 7
#define DEBUGGING_LABEL_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto db_radix_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_radix_3)
DEFLABEL (db_radix_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto db_parser_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_parser_table_3)
DEFLABEL (db_parser_table_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto db_shared_objects_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_shared_objects_3)
DEFLABEL (db_shared_objects_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 7
#define DEBUGGING_LABEL_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto db_discretionary_write_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_discretionary_write_char_3)
DEFLABEL (db_discretionary_write_char_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto db_get_position_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_get_position_3)
DEFLABEL (db_get_position_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 7
#define DEBUGGING_LABEL_60_2 6
#define OBJECT_60_1 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto db_input_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_input_line_3)
DEFLABEL (db_input_line_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 7
#define DEBUGGING_LABEL_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto db_peek_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_peek_char_3)
DEFLABEL (db_peek_char_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 7
#define DEBUGGING_LABEL_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto db_read_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_read_char_3)
DEFLABEL (db_read_char_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 7
#define DEBUGGING_LABEL_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto db_position_mapping_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db_position_mapping_3)
DEFLABEL (db_position_mapping_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 8
#define DEBUGGING_LABEL_64_2 7
#define OBJECT_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto set_db_position_mappingB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_db_position_mappingB_3)
DEFLABEL (set_db_position_mappingB_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [16]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_64_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_7 9
#define ENVIRONMENT_LABEL_65_3 17
#define DEBUGGING_LABEL_65_2 16
#define OBJECT_65_3 15
#define OBJECT_65_2 14
#define OBJECT_65_1 13
#define OBJECT_65_0 12
#define FREE_REFERENCE_65_0 11
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto dbP_4;

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

DEFLABEL (dbP_10)
DEFLABEL (dbP_4)
  INTERRUPT_CHECK (26, LABEL_65_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
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
  Rvl = (current_block [OBJECT_65_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_65_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_5 3
#define LABEL_66_4 5
#define LABEL_66_6 7
#define LABEL_66_8 9
#define LABEL_66_11 11
#define LABEL_66_13 13
#define LABEL_66_14 15
#define LABEL_66_16 17
#define LABEL_66_17 19
#define LABEL_66_19 21
#define LABEL_66_21 23
#define LABEL_66_22 25
#define LABEL_66_23 27
#define LABEL_66_25 29
#define LABEL_66_26 31
#define LABEL_66_27 33
#define LABEL_66_28 35
#define LABEL_66_30 37
#define LABEL_66_31 39
#define LABEL_66_32 41
#define ENVIRONMENT_LABEL_66_3 78
#define DEBUGGING_LABEL_66_2 77
#define OBJECT_66_13 76
#define OBJECT_66_12 75
#define OBJECT_66_11 74
#define OBJECT_66_10 73
#define OBJECT_66_9 72
#define OBJECT_66_8 71
#define OBJECT_66_7 70
#define OBJECT_66_6 69
#define OBJECT_66_5 68
#define OBJECT_66_4 67
#define OBJECT_66_3 66
#define OBJECT_66_2 65
#define OBJECT_66_1 64
#define OBJECT_66_0 63
#define EXECUTE_CACHE_66_33 43
#define EXECUTE_CACHE_66_29 45
#define EXECUTE_CACHE_66_24 47
#define EXECUTE_CACHE_66_20 49
#define EXECUTE_CACHE_66_18 51
#define EXECUTE_CACHE_66_15 53
#define EXECUTE_CACHE_66_12 55
#define EXECUTE_CACHE_66_10 57
#define EXECUTE_CACHE_66_9 59
#define EXECUTE_CACHE_66_7 61
#define FREE_REFERENCES_LABEL_66_0 42
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_66_4);
      goto initial_db_23;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_66_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_66_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_66_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_66_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_66_17);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_66_19);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_66_21);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_66_22);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_66_23);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_66_25);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_66_26);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_66_27);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_66_28);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_66_30);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_66_31);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_66_32);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_db_26)
DEFLABEL (initial_db_23)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_66_0])))
    goto label_29;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_66_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_66_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_66_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_66_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_66_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_66_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_66_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_66_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_66_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_66_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_66_28);
  (Rsp [10]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_66_30);
  (Rsp [11]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_66_11]);
  (Rsp [14]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_66_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_66_31);
  (Rsp [12]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_66_32);
  (Rsp [13]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_33]));

DEFLABEL (label_29)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_6);
  (Wrd11.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define TAG_67_6 1
#define LABEL_67_8 7
#define LABEL_67_10 9
#define TAG_67_11 3
#define ENVIRONMENT_LABEL_67_3 19
#define DEBUGGING_LABEL_67_2 18
#define OBJECT_67_0 17
#define EXECUTE_CACHE_67_12 11
#define EXECUTE_CACHE_67_9 13
#define EXECUTE_CACHE_67_7 15
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_67_4);
      goto repl_environment_value_3;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_67_10);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_environment_value_6)
DEFLABEL (repl_environment_value_3)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_67_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_67_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 13
#define DEBUGGING_LABEL_68_2 12
#define OBJECT_68_0 11
#define EXECUTE_CACHE_68_7 7
#define EXECUTE_CACHE_68_6 9
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto overridable_value_4;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (overridable_value_7)
DEFLABEL (overridable_value_4)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_68_0]))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_8 7
#define LABEL_69_7 9
#define ENVIRONMENT_LABEL_69_3 18
#define DEBUGGING_LABEL_69_2 17
#define OBJECT_69_1 16
#define OBJECT_69_0 15
#define EXECUTE_CACHE_69_9 11
#define EXECUTE_CACHE_69_6 13
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_69_4);
      goto position_operation_5;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_69_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (position_operation_8)
DEFLABEL (position_operation_5)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_69_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_69_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd6.Obj);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_69_7);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 9
#define DEBUGGING_LABEL_70_2 8
#define OBJECT_70_1 7
#define OBJECT_70_0 6
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_70_4);
      goto current_line_2;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_line_6)
DEFLABEL (current_line_2)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_70_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 9
#define DEBUGGING_LABEL_71_2 8
#define OBJECT_71_1 7
#define OBJECT_71_0 6
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto current_position_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_position_5)
DEFLABEL (current_position_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_7;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd14.Lng))))
    goto label_7;
  (Wrd6.Obj) = ((Wrd12.pObj) [12]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_71_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_5 3
#define LABEL_72_6 5
#define LABEL_72_4 7
#define ENVIRONMENT_LABEL_72_3 16
#define DEBUGGING_LABEL_72_2 15
#define OBJECT_72_3 14
#define OBJECT_72_2 13
#define OBJECT_72_1 12
#define OBJECT_72_0 11
#define EXECUTE_CACHE_72_7 9
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_72_4);
      goto record_object_positionB_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_object_positionB_8)
DEFLABEL (record_object_positionB_4)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_72_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_14;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd23.Lng))))
    goto label_14;
  (Wrd15.Obj) = ((Wrd21.pObj) [16]);

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd40.Obj);
  (Rsp [2]) = (Wrd36.Obj);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd53.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 3);

DEFLABEL (label_12)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd51.Lng))))
    goto label_11;
  ((Wrd49.pObj) [16]) = (Wrd36.Obj);
  goto label_9;

DEFLABEL (label_14)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_72_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define ENVIRONMENT_LABEL_73_3 12
#define DEBUGGING_LABEL_73_2 11
#define OBJECT_73_2 10
#define OBJECT_73_1 9
#define OBJECT_73_0 8
#define FREE_REFERENCES_LABEL_73_0 8
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
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
      goto finish_parsing_2;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_parsing_7)
DEFLABEL (finish_parsing_2)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_13;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd35.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd17.pObj) [16]);

DEFLABEL (label_9)
  (Wrd31.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_73_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  goto label_8;

DEFLABEL (label_13)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_73_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define LABEL_74_9 9
#define ENVIRONMENT_LABEL_74_3 22
#define DEBUGGING_LABEL_74_2 21
#define OBJECT_74_1 20
#define OBJECT_74_0 19
#define EXECUTE_CACHE_74_11 11
#define EXECUTE_CACHE_74_10 13
#define EXECUTE_CACHE_74_8 15
#define EXECUTE_CACHE_74_6 17
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_74_4);
      goto process_file_attributes_3;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_74_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_file_attributes_6)
DEFLABEL (process_file_attributes_3)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (current_block [OBJECT_74_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (current_block [OBJECT_74_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_7 7
#define LABEL_75_9 9
#define ENVIRONMENT_LABEL_75_3 18
#define DEBUGGING_LABEL_75_2 17
#define EXECUTE_CACHE_75_10 11
#define EXECUTE_CACHE_75_8 13
#define EXECUTE_CACHE_75_6 15
#define FREE_REFERENCES_LABEL_75_0 10
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_75_4);
      goto lookup_file_attribute_3;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_file_attribute_6)
DEFLABEL (lookup_file_attribute_3)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_75_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_7 5
#define LABEL_76_8 7
#define LABEL_76_11 9
#define LABEL_76_12 11
#define LABEL_76_13 13
#define LABEL_76_14 15
#define LABEL_76_15 17
#define LABEL_76_5 19
#define LABEL_76_16 21
#define LABEL_76_17 23
#define LABEL_76_18 25
#define LABEL_76_19 27
#define LABEL_76_21 29
#define LABEL_76_22 31
#define LABEL_76_23 33
#define LABEL_76_9 35
#define ENVIRONMENT_LABEL_76_3 64
#define DEBUGGING_LABEL_76_2 63
#define OBJECT_76_15 62
#define OBJECT_76_14 61
#define OBJECT_76_13 60
#define OBJECT_76_12 59
#define OBJECT_76_11 58
#define OBJECT_76_10 57
#define OBJECT_76_9 56
#define OBJECT_76_8 55
#define OBJECT_76_7 54
#define OBJECT_76_6 53
#define OBJECT_76_5 52
#define OBJECT_76_4 51
#define OBJECT_76_3 50
#define OBJECT_76_2 49
#define OBJECT_76_1 48
#define OBJECT_76_0 47
#define EXECUTE_CACHE_76_25 37
#define EXECUTE_CACHE_76_24 39
#define EXECUTE_CACHE_76_20 41
#define EXECUTE_CACHE_76_10 43
#define EXECUTE_CACHE_76_6 45
#define FREE_REFERENCES_LABEL_76_0 36
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd107;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd98;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd117;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd136;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
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
      current_block = (Rpc - LABEL_76_4);
      goto process_keyword_attribute_22;

    case 1:
      current_block = (Rpc - LABEL_76_7);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_76_11);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_76_12);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_76_13);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_76_14);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_76_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_76_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_76_17);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_76_18);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_76_19);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_76_21);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_76_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_76_23);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_76_9);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_keyword_attribute_29)
DEFLABEL (process_keyword_attribute_22)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  Rvl = (current_block [OBJECT_76_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd128.Obj) = (current_block [OBJECT_76_6]);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd131.Lng))))
    goto label_57;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd128.Obj));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd26.Obj) = (current_block [OBJECT_76_8]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng)))
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_7]), 2);

DEFLABEL (label_32)
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_34;
  (Wrd28.Obj) = (current_block [OBJECT_76_10]);
  goto label_33;

DEFLABEL (label_34)
  (Wrd28.Obj) = (current_block [OBJECT_76_9]);

DEFLABEL (label_33)
DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (current_block [OBJECT_76_14]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_23]))));
  (* (--Rsp)) = (Wrd125.Obj);

DEFLABEL (label_35)
  (Wrd107.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd107.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_24]));

DEFLABEL (label_37)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_76_6]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd112.Lng))))
    goto label_53;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd43.Obj) == (Wrd45.Obj))
    goto label_52;

DEFLABEL (label_51)
  (Wrd46.Obj) = (current_block [OBJECT_76_8]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd56.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng))))
    goto label_31;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_39;
  (Wrd48.Obj) = (current_block [OBJECT_76_10]);
  goto label_38;

DEFLABEL (label_39)
  (Wrd48.Obj) = (current_block [OBJECT_76_9]);

DEFLABEL (label_38)
DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (current_block [OBJECT_76_13]);
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_22]))));
  (* (--Rsp)) = (Wrd106.Obj);
  goto label_35;

DEFLABEL (label_41)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_76_6]);
  (Wrd93.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd93.Lng))))
    goto label_49;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd90.Obj));
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd63.Obj) == (Wrd65.Obj))
    goto label_48;

DEFLABEL (label_47)
  (Wrd66.Obj) = (current_block [OBJECT_76_8]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd76.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd76.Lng))))
    goto label_31;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd70.Obj) == (Wrd72.Obj))
    goto label_43;
  (Wrd68.Obj) = (current_block [OBJECT_76_10]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd68.Obj) = (current_block [OBJECT_76_9]);

DEFLABEL (label_42)
DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd68.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;

DEFLABEL (label_44)
  (Wrd78.Obj) = (current_block [OBJECT_76_11]);
  (Rsp [1]) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd79.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_20]));

DEFLABEL (label_45)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_12]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (current_block [OBJECT_76_12]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_21]))));
  (* (--Rsp)) = (Wrd87.Obj);
  goto label_35;

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto label_45;

DEFLABEL (label_49)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_19]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_7]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_40;

DEFLABEL (label_53)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_18]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_7]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto label_36;

DEFLABEL (label_57)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_17]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_7]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_59)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_5]), 1);

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_76_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_76_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_60)
  (Wrd156.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd156.Obj);
  (Wrd157.Obj) = (current_block [OBJECT_76_2]);
  (Rsp [1]) = (Wrd157.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (label_61)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd162.Obj) = (current_block [OBJECT_76_1]);
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_9]))));
  (* (--Rsp)) = (Wrd165.Obj);
  goto label_35;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_76_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_76_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd151.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd151.Obj);
  (Wrd152.Obj) = (current_block [OBJECT_76_2]);
  (Rsp [1]) = (Wrd152.Obj);
  (Wrd153.Obj) = (current_block [OBJECT_76_3]);
  (Rsp [2]) = (Wrd153.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_76_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_76_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd146.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd146.Obj);
  (Wrd147.Obj) = (current_block [OBJECT_76_2]);
  (Rsp [1]) = (Wrd147.Obj);
  (Wrd148.Obj) = (current_block [OBJECT_76_4]);
  (Rsp [2]) = (Wrd148.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_76_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_76_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_40;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_76_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_76_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_76_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_60;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_7 5
#define LABEL_77_8 7
#define LABEL_77_9 9
#define LABEL_77_10 11
#define LABEL_77_5 13
#define LABEL_77_11 15
#define LABEL_77_12 17
#define LABEL_77_13 19
#define LABEL_77_16 21
#define ENVIRONMENT_LABEL_77_3 42
#define DEBUGGING_LABEL_77_2 41
#define OBJECT_77_9 40
#define OBJECT_77_8 39
#define OBJECT_77_7 38
#define OBJECT_77_6 37
#define OBJECT_77_5 36
#define OBJECT_77_4 35
#define OBJECT_77_3 34
#define OBJECT_77_2 33
#define OBJECT_77_1 32
#define OBJECT_77_0 31
#define EXECUTE_CACHE_77_17 23
#define EXECUTE_CACHE_77_15 25
#define EXECUTE_CACHE_77_14 27
#define EXECUTE_CACHE_77_6 29
#define FREE_REFERENCES_LABEL_77_0 22
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd75;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd94;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd64;
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
      current_block = (Rpc - LABEL_77_4);
      goto process_mode_attribute_14;

    case 1:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_77_8);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_77_9);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_77_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_77_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_77_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_77_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_mode_attribute_20)
DEFLABEL (process_mode_attribute_14)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_22;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_77_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if (! ((Wrd7.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_77_2]);
  (Wrd89.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd89.Lng))))
    goto label_41;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_40;

DEFLABEL (label_39)
  (Wrd27.Obj) = (current_block [OBJECT_77_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng)))
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

DEFLABEL (label_24)
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_26;
  (Wrd29.Obj) = (current_block [OBJECT_77_6]);
  goto label_25;

DEFLABEL (label_26)
  (Wrd29.Obj) = (current_block [OBJECT_77_5]);

DEFLABEL (label_25)
DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;

DEFLABEL (label_37)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_77_8]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_16]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_77_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_77_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_36)
  (Wrd39.Obj) = (current_block [OBJECT_77_7]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_77_2]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd70.Lng))))
    goto label_35;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd48.Obj) == (Wrd50.Obj))
    goto label_34;

DEFLABEL (label_33)
  (Wrd51.Obj) = (current_block [OBJECT_77_4]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd61.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd61.Lng))))
    goto label_23;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd55.Obj) == (Wrd57.Obj))
    goto label_28;
  (Wrd53.Obj) = (current_block [OBJECT_77_6]);
  goto label_27;

DEFLABEL (label_28)
  (Wrd53.Obj) = (current_block [OBJECT_77_5]);

DEFLABEL (label_27)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_77_9);
  (Wrd64.Obj) = Rvl;

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (label_31)
  (Wrd64.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_29;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  goto label_30;

DEFLABEL (label_35)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_41)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_42;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_77_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_7 5
#define LABEL_78_8 7
#define LABEL_78_9 9
#define LABEL_78_10 11
#define LABEL_78_5 13
#define LABEL_78_11 15
#define LABEL_78_14 17
#define LABEL_78_15 19
#define LABEL_78_17 21
#define LABEL_78_19 23
#define LABEL_78_20 25
#define LABEL_78_23 27
#define LABEL_78_26 29
#define LABEL_78_12 31
#define LABEL_78_28 33
#define LABEL_78_13 35
#define LABEL_78_29 37
#define LABEL_78_27 39
#define LABEL_78_24 41
#define ENVIRONMENT_LABEL_78_3 75
#define DEBUGGING_LABEL_78_2 74
#define OBJECT_78_16 73
#define OBJECT_78_15 72
#define OBJECT_78_14 71
#define OBJECT_78_13 70
#define OBJECT_78_12 69
#define OBJECT_78_11 68
#define OBJECT_78_10 67
#define OBJECT_78_9 66
#define OBJECT_78_8 65
#define OBJECT_78_7 64
#define OBJECT_78_6 63
#define OBJECT_78_5 62
#define OBJECT_78_4 61
#define OBJECT_78_3 60
#define OBJECT_78_2 59
#define OBJECT_78_1 58
#define OBJECT_78_0 57
#define EXECUTE_CACHE_78_30 43
#define EXECUTE_CACHE_78_22 45
#define EXECUTE_CACHE_78_21 47
#define EXECUTE_CACHE_78_25 49
#define EXECUTE_CACHE_78_18 51
#define EXECUTE_CACHE_78_16 53
#define EXECUTE_CACHE_78_6 55
#define FREE_REFERENCES_LABEL_78_0 42
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd48;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd53;
  machine_word Wrd61;
  machine_word Wrd72;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd82;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd44;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd105;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd22;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_78_4);
      goto process_studly_case_attribute_26;

    case 1:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_78_8);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_78_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_78_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_78_11);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_78_14);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_78_15);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_78_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_78_19);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_78_20);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_78_23);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_78_26);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_78_12);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_78_28);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_78_13);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_78_29);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_78_27);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_78_24);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_studly_case_attribute_34)
DEFLABEL (process_studly_case_attribute_26)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_35;
  Rvl = (current_block [OBJECT_78_13]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  if (! ((Wrd6.uLng) == 1))
    goto label_61;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_60)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_78_2]))
    goto label_58;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd97.Obj) = (current_block [OBJECT_78_5]);
  (Wrd100.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd100.Lng))))
    goto label_57;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd97.Obj));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd28.Obj) = (current_block [OBJECT_78_7]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_6]), 2);

DEFLABEL (label_37)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_39;
  (Wrd30.Obj) = (current_block [OBJECT_78_8]);
  goto label_38;

DEFLABEL (label_39)
  (Wrd30.Obj) = (current_block [OBJECT_78_2]);

DEFLABEL (label_38)
DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (current_block [OBJECT_78_12]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_20]))));
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_41)
  (Wrd72.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_21]));

DEFLABEL (label_43)
  (Wrd40.Obj) = (Rsp [0]);
  if (! ((Wrd40.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;

DEFLABEL (label_44)
  (Wrd84.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd84.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_78_9]);
  (Rsp [2]) = (Wrd85.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_78_2]);
  (Rsp [3]) = (Wrd86.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (label_45)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_78_5]);
  (Wrd77.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd77.Lng))))
    goto label_53;
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd74.Obj));
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd47.Obj) == (Wrd49.Obj))
    goto label_52;

DEFLABEL (label_51)
  (Wrd50.Obj) = (current_block [OBJECT_78_7]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd60.Lng))))
    goto label_36;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_47;
  (Wrd52.Obj) = (current_block [OBJECT_78_8]);
  goto label_46;

DEFLABEL (label_47)
  (Wrd52.Obj) = (current_block [OBJECT_78_2]);

DEFLABEL (label_46)
DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd52.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  (Wrd62.Obj) = (current_block [OBJECT_78_10]);
  (Rsp [2]) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd63.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_18]));

DEFLABEL (label_49)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_78_11]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_41;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_49;

DEFLABEL (label_53)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_17]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_6]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto label_42;

DEFLABEL (label_57)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_15]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_6]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_58)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_12]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (current_block [OBJECT_78_3]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_13]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd117.Obj) = (Rsp [4]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_59;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (* (--Rsp)) = (Wrd116.Obj);
  goto label_40;

DEFLABEL (label_59)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_14]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_4]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_61)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_78_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_78_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_58;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_78_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_78_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_44;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_78_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_78_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_42;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_78_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_78_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_27]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_78_15]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_25]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_78_27);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_78_5]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd43.Lng))))
    goto label_71;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_70;

DEFLABEL (label_69)
  (Wrd15.Obj) = (current_block [OBJECT_78_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_63;
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_6]), 2);

DEFLABEL (label_63)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_65;
  (Wrd17.Obj) = (current_block [OBJECT_78_8]);
  goto label_64;

DEFLABEL (label_65)
  (Wrd17.Obj) = (current_block [OBJECT_78_2]);

DEFLABEL (label_64)
DEFLABEL (label_68)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_67;

DEFLABEL (label_66)
  (Wrd27.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_78_9]);
  (Rsp [2]) = (Wrd28.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (label_67)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_78_16]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_29]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_78_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_30]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_78_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_66;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_24]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_78_14]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_78_24);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  Rsp = (& (Rsp [2]));
  goto label_67;

DEFLABEL (label_71)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_28]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_6]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_70;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_78_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_6 5
#define LABEL_79_5 7
#define LABEL_79_9 9
#define LABEL_79_10 11
#define LABEL_79_11 13
#define LABEL_79_12 15
#define LABEL_79_13 17
#define LABEL_79_14 19
#define LABEL_79_15 21
#define LABEL_79_16 23
#define LABEL_79_17 25
#define LABEL_79_18 27
#define LABEL_79_20 29
#define LABEL_79_21 31
#define LABEL_79_22 33
#define LABEL_79_23 35
#define ENVIRONMENT_LABEL_79_3 66
#define DEBUGGING_LABEL_79_2 65
#define OBJECT_79_17 64
#define OBJECT_79_16 63
#define OBJECT_79_15 62
#define OBJECT_79_14 61
#define OBJECT_79_13 60
#define OBJECT_79_12 59
#define OBJECT_79_11 58
#define OBJECT_79_10 57
#define OBJECT_79_9 56
#define OBJECT_79_8 55
#define OBJECT_79_7 54
#define OBJECT_79_6 53
#define OBJECT_79_5 52
#define OBJECT_79_4 51
#define OBJECT_79_3 50
#define OBJECT_79_2 49
#define OBJECT_79_1 48
#define OBJECT_79_0 47
#define EXECUTE_CACHE_79_25 37
#define EXECUTE_CACHE_79_24 39
#define EXECUTE_CACHE_79_19 41
#define EXECUTE_CACHE_79_8 43
#define EXECUTE_CACHE_79_7 45
#define FREE_REFERENCES_LABEL_79_0 36
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd81;
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
      current_block = (Rpc - LABEL_79_4);
      goto lambda_49;

    case 1:
      current_block = (Rpc - LABEL_79_6);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_79_9);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_79_10);
      goto label_53;

    case 5:
      current_block = (Rpc - LABEL_79_11);
      goto label_54;

    case 6:
      current_block = (Rpc - LABEL_79_12);
      goto label_55;

    case 7:
      current_block = (Rpc - LABEL_79_13);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_79_14);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_79_15);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_79_16);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_79_17);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_79_18);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_79_20);
      goto continuation_35;

    case 14:
      current_block = (Rpc - LABEL_79_21);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_79_22);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_79_23);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_62)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_83)
  (Wrd17.Obj) = (current_block [OBJECT_79_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  (Wrd81.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd81.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (label_64)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_82;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_81)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_80;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_79)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_78;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_77)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_76;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_75)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_74;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_73)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_72;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_71)
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_70;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_69)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_68;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd62.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_67)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_66;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd69.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_18]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_79_3]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_79_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_19]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_79_20);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_79_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_79_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_79_7]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_79_8]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_79_9]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_21]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_79_10]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_23]))));
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_79_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_79_21);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_79_5]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_79_11]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_79_12]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_79_6]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_79_13]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_79_14]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd65.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_79_9]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd70.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_79_15]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_60)
  (Wrd69.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_16]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_59)
  (Wrd62.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_15]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_58)
  (Wrd53.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_57)
  (Wrd46.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_56)
  (Wrd39.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_55)
  (Wrd30.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_53)
  (Wrd16.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_52)
  (Wrd7.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (lambda_63)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_79_23);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_79_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_79_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_79_16]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_79_17]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_7 5
#define LABEL_80_5 7
#define LABEL_80_9 9
#define LABEL_80_12 11
#define LABEL_80_6 13
#define LABEL_80_10 15
#define LABEL_80_14 17
#define LABEL_80_16 19
#define LABEL_80_17 21
#define LABEL_80_11 23
#define LABEL_80_15 25
#define LABEL_80_21 27
#define LABEL_80_24 29
#define LABEL_80_19 31
#define LABEL_80_22 33
#define LABEL_80_26 35
#define LABEL_80_28 37
#define LABEL_80_29 39
#define LABEL_80_23 41
#define LABEL_80_25 43
#define LABEL_80_27 45
#define LABEL_80_31 47
#define LABEL_80_34 49
#define LABEL_80_30 51
#define LABEL_80_32 53
#define LABEL_80_36 55
#define LABEL_80_38 57
#define LABEL_80_39 59
#define LABEL_80_33 61
#define LABEL_80_35 63
#define LABEL_80_37 65
#define LABEL_80_41 67
#define LABEL_80_44 69
#define LABEL_80_40 71
#define LABEL_80_42 73
#define LABEL_80_46 75
#define LABEL_80_48 77
#define LABEL_80_49 79
#define LABEL_80_43 81
#define LABEL_80_45 83
#define LABEL_80_47 85
#define LABEL_80_52 87
#define LABEL_80_55 89
#define LABEL_80_50 91
#define LABEL_80_53 93
#define LABEL_80_57 95
#define LABEL_80_59 97
#define LABEL_80_60 99
#define LABEL_80_54 101
#define LABEL_80_56 103
#define LABEL_80_58 105
#define LABEL_80_62 107
#define LABEL_80_65 109
#define LABEL_80_61 111
#define LABEL_80_63 113
#define LABEL_80_67 115
#define LABEL_80_69 117
#define LABEL_80_70 119
#define LABEL_80_64 121
#define LABEL_80_72 123
#define LABEL_80_66 125
#define LABEL_80_74 127
#define LABEL_80_68 129
#define LABEL_80_75 131
#define LABEL_80_78 133
#define LABEL_80_71 135
#define LABEL_80_73 137
#define LABEL_80_80 139
#define LABEL_80_76 141
#define LABEL_80_84 143
#define LABEL_80_86 145
#define LABEL_80_87 147
#define LABEL_80_77 149
#define LABEL_80_79 151
#define LABEL_80_81 153
#define TAG_80_82 75
#define LABEL_80_85 155
#define LABEL_80_91 157
#define LABEL_80_94 159
#define LABEL_80_88 161
#define LABEL_80_89 163
#define LABEL_80_92 165
#define LABEL_80_96 167
#define LABEL_80_98 169
#define LABEL_80_99 171
#define LABEL_80_93 173
#define LABEL_80_95 175
#define LABEL_80_97 177
#define LABEL_80_101 179
#define LABEL_80_104 181
#define LABEL_80_100 183
#define LABEL_80_102 185
#define LABEL_80_106 187
#define LABEL_80_108 189
#define LABEL_80_109 191
#define LABEL_80_103 193
#define LABEL_80_105 195
#define LABEL_80_107 197
#define LABEL_80_111 199
#define LABEL_80_114 201
#define LABEL_80_110 203
#define LABEL_80_112 205
#define LABEL_80_116 207
#define LABEL_80_118 209
#define LABEL_80_119 211
#define LABEL_80_113 213
#define LABEL_80_115 215
#define LABEL_80_117 217
#define LABEL_80_121 219
#define LABEL_80_124 221
#define LABEL_80_120 223
#define LABEL_80_122 225
#define LABEL_80_126 227
#define LABEL_80_128 229
#define LABEL_80_129 231
#define LABEL_80_123 233
#define LABEL_80_125 235
#define LABEL_80_127 237
#define LABEL_80_131 239
#define LABEL_80_134 241
#define LABEL_80_130 243
#define LABEL_80_132 245
#define LABEL_80_136 247
#define LABEL_80_138 249
#define LABEL_80_139 251
#define LABEL_80_133 253
#define LABEL_80_135 255
#define LABEL_80_137 257
#define LABEL_80_141 259
#define LABEL_80_144 261
#define LABEL_80_140 263
#define LABEL_80_142 265
#define LABEL_80_146 267
#define LABEL_80_148 269
#define LABEL_80_149 271
#define LABEL_80_143 273
#define LABEL_80_145 275
#define LABEL_80_147 277
#define LABEL_80_152 279
#define LABEL_80_155 281
#define LABEL_80_150 283
#define LABEL_80_151 285
#define LABEL_80_153 287
#define LABEL_80_158 289
#define LABEL_80_160 291
#define LABEL_80_161 293
#define LABEL_80_154 295
#define LABEL_80_156 297
#define LABEL_80_157 299
#define LABEL_80_159 301
#define LABEL_80_165 303
#define LABEL_80_168 305
#define LABEL_80_162 307
#define LABEL_80_163 309
#define LABEL_80_164 311
#define LABEL_80_166 313
#define LABEL_80_170 315
#define LABEL_80_172 317
#define LABEL_80_173 319
#define LABEL_80_167 321
#define LABEL_80_169 323
#define LABEL_80_171 325
#define LABEL_80_175 327
#define LABEL_80_174 329
#define LABEL_80_176 331
#define ENVIRONMENT_LABEL_80_3 454
#define DEBUGGING_LABEL_80_2 453
#define OBJECT_80_54 452
#define OBJECT_80_53 451
#define OBJECT_80_52 450
#define OBJECT_80_51 449
#define OBJECT_80_50 448
#define OBJECT_80_49 447
#define OBJECT_80_48 446
#define OBJECT_80_47 445
#define OBJECT_80_46 444
#define OBJECT_80_45 443
#define OBJECT_80_44 442
#define OBJECT_80_43 441
#define OBJECT_80_42 440
#define OBJECT_80_41 439
#define OBJECT_80_40 438
#define OBJECT_80_39 437
#define OBJECT_80_38 436
#define OBJECT_80_37 435
#define OBJECT_80_36 434
#define OBJECT_80_35 433
#define OBJECT_80_34 432
#define OBJECT_80_33 431
#define OBJECT_80_32 430
#define OBJECT_80_31 429
#define OBJECT_80_30 428
#define OBJECT_80_29 427
#define OBJECT_80_28 426
#define OBJECT_80_27 425
#define OBJECT_80_26 424
#define OBJECT_80_25 423
#define OBJECT_80_24 422
#define OBJECT_80_23 421
#define OBJECT_80_22 420
#define OBJECT_80_21 419
#define OBJECT_80_20 418
#define OBJECT_80_19 417
#define OBJECT_80_18 416
#define OBJECT_80_17 415
#define OBJECT_80_16 414
#define OBJECT_80_15 413
#define OBJECT_80_14 412
#define OBJECT_80_13 411
#define OBJECT_80_12 410
#define OBJECT_80_11 409
#define OBJECT_80_10 408
#define OBJECT_80_9 407
#define OBJECT_80_8 406
#define OBJECT_80_7 405
#define OBJECT_80_6 404
#define OBJECT_80_5 403
#define OBJECT_80_4 402
#define OBJECT_80_3 401
#define OBJECT_80_2 400
#define OBJECT_80_1 399
#define OBJECT_80_0 398
#define EXECUTE_CACHE_80_90 333
#define EXECUTE_CACHE_80_83 335
#define EXECUTE_CACHE_80_51 337
#define EXECUTE_CACHE_80_20 339
#define EXECUTE_CACHE_80_18 341
#define EXECUTE_CACHE_80_13 343
#define EXECUTE_CACHE_80_8 345
#define FREE_REFERENCE_80_17 348
#define FREE_REFERENCE_80_16 349
#define FREE_REFERENCE_80_15 350
#define FREE_REFERENCE_80_14 351
#define FREE_REFERENCE_80_13 352
#define FREE_REFERENCE_80_12 353
#define FREE_REFERENCE_80_11 354
#define FREE_REFERENCE_80_10 355
#define FREE_REFERENCE_80_9 356
#define FREE_REFERENCE_80_8 357
#define FREE_REFERENCE_80_7 358
#define FREE_REFERENCE_80_6 359
#define FREE_REFERENCE_80_5 360
#define FREE_REFERENCE_80_4 361
#define FREE_REFERENCE_80_3 362
#define FREE_REFERENCE_80_2 363
#define FREE_REFERENCE_80_1 364
#define FREE_REFERENCE_80_0 365
#define FREE_ASSIGNMENT_80_30 367
#define FREE_ASSIGNMENT_80_29 368
#define FREE_ASSIGNMENT_80_28 369
#define FREE_ASSIGNMENT_80_27 370
#define FREE_ASSIGNMENT_80_26 371
#define FREE_ASSIGNMENT_80_25 372
#define FREE_ASSIGNMENT_80_24 373
#define FREE_ASSIGNMENT_80_23 374
#define FREE_ASSIGNMENT_80_22 375
#define FREE_ASSIGNMENT_80_21 376
#define FREE_ASSIGNMENT_80_20 377
#define FREE_ASSIGNMENT_80_19 378
#define FREE_ASSIGNMENT_80_18 379
#define FREE_ASSIGNMENT_80_17 380
#define FREE_ASSIGNMENT_80_16 381
#define FREE_ASSIGNMENT_80_15 382
#define FREE_ASSIGNMENT_80_14 383
#define FREE_ASSIGNMENT_80_13 384
#define FREE_ASSIGNMENT_80_12 385
#define FREE_ASSIGNMENT_80_11 386
#define FREE_ASSIGNMENT_80_10 387
#define FREE_ASSIGNMENT_80_9 388
#define FREE_ASSIGNMENT_80_8 389
#define FREE_ASSIGNMENT_80_7 390
#define FREE_ASSIGNMENT_80_6 391
#define FREE_ASSIGNMENT_80_5 392
#define FREE_ASSIGNMENT_80_4 393
#define FREE_ASSIGNMENT_80_3 394
#define FREE_ASSIGNMENT_80_2 395
#define FREE_ASSIGNMENT_80_1 396
#define FREE_ASSIGNMENT_80_0 397
#define FREE_REFERENCES_LABEL_80_0 332
#define NUMBER_OF_LINKER_SECTIONS_80_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parse_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_80_4);
      goto initialize_condition_typesB_103;

    case 1:
      current_block = (Rpc - LABEL_80_7);
      goto label_105;

    case 2:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_80_9);
      goto label_106;

    case 4:
      current_block = (Rpc - LABEL_80_12);
      goto label_107;

    case 5:
      current_block = (Rpc - LABEL_80_6);
      goto lambda_0;

    case 6:
      current_block = (Rpc - LABEL_80_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_80_14);
      goto label_108;

    case 8:
      current_block = (Rpc - LABEL_80_16);
      goto label_109;

    case 9:
      current_block = (Rpc - LABEL_80_17);
      goto label_110;

    case 10:
      current_block = (Rpc - LABEL_80_11);
      goto lambda_5;

    case 11:
      current_block = (Rpc - LABEL_80_15);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_80_21);
      goto label_111;

    case 13:
      current_block = (Rpc - LABEL_80_24);
      goto label_112;

    case 14:
      current_block = (Rpc - LABEL_80_19);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_80_22);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_80_26);
      goto label_113;

    case 17:
      current_block = (Rpc - LABEL_80_28);
      goto label_114;

    case 18:
      current_block = (Rpc - LABEL_80_29);
      goto label_115;

    case 19:
      current_block = (Rpc - LABEL_80_23);
      goto lambda_11;

    case 20:
      current_block = (Rpc - LABEL_80_25);
      goto continuation_3;

    case 21:
      current_block = (Rpc - LABEL_80_27);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_80_31);
      goto label_116;

    case 23:
      current_block = (Rpc - LABEL_80_34);
      goto label_117;

    case 24:
      current_block = (Rpc - LABEL_80_30);
      goto continuation_8;

    case 25:
      current_block = (Rpc - LABEL_80_32);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_80_36);
      goto label_118;

    case 27:
      current_block = (Rpc - LABEL_80_38);
      goto label_119;

    case 28:
      current_block = (Rpc - LABEL_80_39);
      goto label_120;

    case 29:
      current_block = (Rpc - LABEL_80_33);
      goto lambda_17;

    case 30:
      current_block = (Rpc - LABEL_80_35);
      goto continuation_9;

    case 31:
      current_block = (Rpc - LABEL_80_37);
      goto continuation_19;

    case 32:
      current_block = (Rpc - LABEL_80_41);
      goto label_121;

    case 33:
      current_block = (Rpc - LABEL_80_44);
      goto label_122;

    case 34:
      current_block = (Rpc - LABEL_80_40);
      goto continuation_14;

    case 35:
      current_block = (Rpc - LABEL_80_42);
      goto continuation_24;

    case 36:
      current_block = (Rpc - LABEL_80_46);
      goto label_123;

    case 37:
      current_block = (Rpc - LABEL_80_48);
      goto label_124;

    case 38:
      current_block = (Rpc - LABEL_80_49);
      goto label_125;

    case 39:
      current_block = (Rpc - LABEL_80_43);
      goto lambda_23;

    case 40:
      current_block = (Rpc - LABEL_80_45);
      goto continuation_15;

    case 41:
      current_block = (Rpc - LABEL_80_47);
      goto continuation_25;

    case 42:
      current_block = (Rpc - LABEL_80_52);
      goto label_126;

    case 43:
      current_block = (Rpc - LABEL_80_55);
      goto label_127;

    case 44:
      current_block = (Rpc - LABEL_80_50);
      goto continuation_20;

    case 45:
      current_block = (Rpc - LABEL_80_53);
      goto continuation_37;

    case 46:
      current_block = (Rpc - LABEL_80_57);
      goto label_128;

    case 47:
      current_block = (Rpc - LABEL_80_59);
      goto label_129;

    case 48:
      current_block = (Rpc - LABEL_80_60);
      goto label_130;

    case 49:
      current_block = (Rpc - LABEL_80_54);
      goto lambda_36;

    case 50:
      current_block = (Rpc - LABEL_80_56);
      goto continuation_21;

    case 51:
      current_block = (Rpc - LABEL_80_58);
      goto continuation_38;

    case 52:
      current_block = (Rpc - LABEL_80_62);
      goto label_131;

    case 53:
      current_block = (Rpc - LABEL_80_65);
      goto label_132;

    case 54:
      current_block = (Rpc - LABEL_80_61);
      goto continuation_26;

    case 55:
      current_block = (Rpc - LABEL_80_63);
      goto continuation_43;

    case 56:
      current_block = (Rpc - LABEL_80_67);
      goto label_133;

    case 57:
      current_block = (Rpc - LABEL_80_69);
      goto label_134;

    case 58:
      current_block = (Rpc - LABEL_80_70);
      goto label_135;

    case 59:
      current_block = (Rpc - LABEL_80_64);
      goto lambda_42;

    case 60:
      current_block = (Rpc - LABEL_80_72);
      goto continuation_34;

    case 61:
      current_block = (Rpc - LABEL_80_66);
      goto continuation_27;

    case 62:
      current_block = (Rpc - LABEL_80_74);
      goto label_136;

    case 63:
      current_block = (Rpc - LABEL_80_68);
      goto continuation_44;

    case 64:
      current_block = (Rpc - LABEL_80_75);
      goto label_137;

    case 65:
      current_block = (Rpc - LABEL_80_78);
      goto label_138;

    case 66:
      current_block = (Rpc - LABEL_80_71);
      goto continuation_39;

    case 67:
      current_block = (Rpc - LABEL_80_73);
      goto continuation_30;

    case 68:
      current_block = (Rpc - LABEL_80_80);
      goto label_139;

    case 69:
      current_block = (Rpc - LABEL_80_76);
      goto continuation_49;

    case 70:
      current_block = (Rpc - LABEL_80_84);
      goto label_140;

    case 71:
      current_block = (Rpc - LABEL_80_86);
      goto label_141;

    case 72:
      current_block = (Rpc - LABEL_80_87);
      goto label_142;

    case 73:
      current_block = (Rpc - LABEL_80_77);
      goto lambda_48;

    case 74:
      current_block = (Rpc - LABEL_80_79);
      goto continuation_40;

    case 75:
      current_block = (Rpc - LABEL_80_81);
      goto lambda_193;

    case 76:
      current_block = (Rpc - LABEL_80_85);
      goto continuation_50;

    case 77:
      current_block = (Rpc - LABEL_80_91);
      goto label_143;

    case 78:
      current_block = (Rpc - LABEL_80_94);
      goto label_144;

    case 79:
      current_block = (Rpc - LABEL_80_88);
      goto continuation_45;

    case 80:
      current_block = (Rpc - LABEL_80_89);
      goto continuation_31;

    case 81:
      current_block = (Rpc - LABEL_80_92);
      goto continuation_55;

    case 82:
      current_block = (Rpc - LABEL_80_96);
      goto label_145;

    case 83:
      current_block = (Rpc - LABEL_80_98);
      goto label_146;

    case 84:
      current_block = (Rpc - LABEL_80_99);
      goto label_147;

    case 85:
      current_block = (Rpc - LABEL_80_93);
      goto lambda_54;

    case 86:
      current_block = (Rpc - LABEL_80_95);
      goto continuation_46;

    case 87:
      current_block = (Rpc - LABEL_80_97);
      goto continuation_56;

    case 88:
      current_block = (Rpc - LABEL_80_101);
      goto label_148;

    case 89:
      current_block = (Rpc - LABEL_80_104);
      goto label_149;

    case 90:
      current_block = (Rpc - LABEL_80_100);
      goto continuation_51;

    case 91:
      current_block = (Rpc - LABEL_80_102);
      goto continuation_61;

    case 92:
      current_block = (Rpc - LABEL_80_106);
      goto label_150;

    case 93:
      current_block = (Rpc - LABEL_80_108);
      goto label_151;

    case 94:
      current_block = (Rpc - LABEL_80_109);
      goto label_152;

    case 95:
      current_block = (Rpc - LABEL_80_103);
      goto lambda_60;

    case 96:
      current_block = (Rpc - LABEL_80_105);
      goto continuation_52;

    case 97:
      current_block = (Rpc - LABEL_80_107);
      goto continuation_62;

    case 98:
      current_block = (Rpc - LABEL_80_111);
      goto label_153;

    case 99:
      current_block = (Rpc - LABEL_80_114);
      goto label_154;

    case 100:
      current_block = (Rpc - LABEL_80_110);
      goto continuation_57;

    case 101:
      current_block = (Rpc - LABEL_80_112);
      goto continuation_67;

    case 102:
      current_block = (Rpc - LABEL_80_116);
      goto label_155;

    case 103:
      current_block = (Rpc - LABEL_80_118);
      goto label_156;

    case 104:
      current_block = (Rpc - LABEL_80_119);
      goto label_157;

    case 105:
      current_block = (Rpc - LABEL_80_113);
      goto lambda_66;

    case 106:
      current_block = (Rpc - LABEL_80_115);
      goto continuation_58;

    case 107:
      current_block = (Rpc - LABEL_80_117);
      goto continuation_68;

    case 108:
      current_block = (Rpc - LABEL_80_121);
      goto label_158;

    case 109:
      current_block = (Rpc - LABEL_80_124);
      goto label_159;

    case 110:
      current_block = (Rpc - LABEL_80_120);
      goto continuation_63;

    case 111:
      current_block = (Rpc - LABEL_80_122);
      goto continuation_73;

    case 112:
      current_block = (Rpc - LABEL_80_126);
      goto label_160;

    case 113:
      current_block = (Rpc - LABEL_80_128);
      goto label_161;

    case 114:
      current_block = (Rpc - LABEL_80_129);
      goto label_162;

    case 115:
      current_block = (Rpc - LABEL_80_123);
      goto lambda_72;

    case 116:
      current_block = (Rpc - LABEL_80_125);
      goto continuation_64;

    case 117:
      current_block = (Rpc - LABEL_80_127);
      goto continuation_74;

    case 118:
      current_block = (Rpc - LABEL_80_131);
      goto label_163;

    case 119:
      current_block = (Rpc - LABEL_80_134);
      goto label_164;

    case 120:
      current_block = (Rpc - LABEL_80_130);
      goto continuation_69;

    case 121:
      current_block = (Rpc - LABEL_80_132);
      goto continuation_82;

    case 122:
      current_block = (Rpc - LABEL_80_136);
      goto label_165;

    case 123:
      current_block = (Rpc - LABEL_80_138);
      goto label_166;

    case 124:
      current_block = (Rpc - LABEL_80_139);
      goto label_167;

    case 125:
      current_block = (Rpc - LABEL_80_133);
      goto lambda_81;

    case 126:
      current_block = (Rpc - LABEL_80_135);
      goto continuation_70;

    case 127:
      current_block = (Rpc - LABEL_80_137);
      goto continuation_83;

    case 128:
      current_block = (Rpc - LABEL_80_141);
      goto label_168;

    case 129:
      current_block = (Rpc - LABEL_80_144);
      goto label_169;

    case 130:
      current_block = (Rpc - LABEL_80_140);
      goto continuation_75;

    case 131:
      current_block = (Rpc - LABEL_80_142);
      goto continuation_89;

    case 132:
      current_block = (Rpc - LABEL_80_146);
      goto label_170;

    case 133:
      current_block = (Rpc - LABEL_80_148);
      goto label_171;

    case 134:
      current_block = (Rpc - LABEL_80_149);
      goto label_172;

    case 135:
      current_block = (Rpc - LABEL_80_143);
      goto lambda_88;

    case 136:
      current_block = (Rpc - LABEL_80_145);
      goto continuation_76;

    case 137:
      current_block = (Rpc - LABEL_80_147);
      goto continuation_90;

    case 138:
      current_block = (Rpc - LABEL_80_152);
      goto label_173;

    case 139:
      current_block = (Rpc - LABEL_80_155);
      goto label_174;

    case 140:
      current_block = (Rpc - LABEL_80_150);
      goto continuation_84;

    case 141:
      current_block = (Rpc - LABEL_80_151);
      goto continuation_77;

    case 142:
      current_block = (Rpc - LABEL_80_153);
      goto continuation_95;

    case 143:
      current_block = (Rpc - LABEL_80_158);
      goto label_175;

    case 144:
      current_block = (Rpc - LABEL_80_160);
      goto label_176;

    case 145:
      current_block = (Rpc - LABEL_80_161);
      goto label_177;

    case 146:
      current_block = (Rpc - LABEL_80_154);
      goto lambda_94;

    case 147:
      current_block = (Rpc - LABEL_80_156);
      goto continuation_85;

    case 148:
      current_block = (Rpc - LABEL_80_157);
      goto continuation_78;

    case 149:
      current_block = (Rpc - LABEL_80_159);
      goto continuation_96;

    case 150:
      current_block = (Rpc - LABEL_80_165);
      goto label_178;

    case 151:
      current_block = (Rpc - LABEL_80_168);
      goto label_179;

    case 152:
      current_block = (Rpc - LABEL_80_162);
      goto continuation_91;

    case 153:
      current_block = (Rpc - LABEL_80_163);
      goto continuation_86;

    case 154:
      current_block = (Rpc - LABEL_80_164);
      goto continuation_79;

    case 155:
      current_block = (Rpc - LABEL_80_166);
      goto continuation_101;

    case 156:
      current_block = (Rpc - LABEL_80_170);
      goto label_180;

    case 157:
      current_block = (Rpc - LABEL_80_172);
      goto label_181;

    case 158:
      current_block = (Rpc - LABEL_80_173);
      goto label_182;

    case 159:
      current_block = (Rpc - LABEL_80_167);
      goto lambda_100;

    case 160:
      current_block = (Rpc - LABEL_80_169);
      goto continuation_92;

    case 161:
      current_block = (Rpc - LABEL_80_171);
      goto continuation_102;

    case 162:
      current_block = (Rpc - LABEL_80_175);
      goto label_183;

    case 163:
      current_block = (Rpc - LABEL_80_174);
      goto continuation_97;

    case 164:
      current_block = (Rpc - LABEL_80_176);
      goto continuation_98;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_condition_typesB_185)
DEFLABEL (initialize_condition_typesB_103)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_387;
  Wrd11 = Wrd15;

DEFLABEL (label_386)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_80_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_385;

DEFLABEL (label_384)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_383)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_382;
  Wrd24 = Wrd28;

DEFLABEL (label_381)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_80_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_380;

DEFLABEL (label_379)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_378)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_377;
  Wrd21 = Wrd25;

DEFLABEL (label_376)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_375;
  Wrd28 = Wrd32;

DEFLABEL (label_374)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_80_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_373;

DEFLABEL (label_372)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_371)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_370;
  Wrd24 = Wrd28;

DEFLABEL (label_369)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_6]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_80_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_368;

DEFLABEL (label_367)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_366)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_365;
  Wrd21 = Wrd25;

DEFLABEL (label_364)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_363;
  Wrd28 = Wrd32;

DEFLABEL (label_362)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_80_27);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_361;

DEFLABEL (label_360)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_359)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_358;
  Wrd24 = Wrd28;

DEFLABEL (label_357)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_9]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_80_32);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_356;

DEFLABEL (label_355)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_354)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_353;
  Wrd21 = Wrd25;

DEFLABEL (label_352)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_8]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_5]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_351;
  Wrd28 = Wrd32;

DEFLABEL (label_350)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_80_37);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_349;

DEFLABEL (label_348)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_347)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_43]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_346;
  Wrd24 = Wrd28;

DEFLABEL (label_345)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_13]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_80_42);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_344;

DEFLABEL (label_343)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_342)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_341;
  Wrd21 = Wrd25;

DEFLABEL (label_340)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_12]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_6]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_339;
  Wrd28 = Wrd32;

DEFLABEL (label_338)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_80_47);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_337;

DEFLABEL (label_336)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_335)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_53]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_54]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_334;
  Wrd24 = Wrd28;

DEFLABEL (label_333)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_16]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_80_53);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_332;

DEFLABEL (label_331)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_330)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_58]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_329;
  Wrd21 = Wrd25;

DEFLABEL (label_328)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_12]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_7]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_327;
  Wrd28 = Wrd32;

DEFLABEL (label_326)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_80_58);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_325;

DEFLABEL (label_324)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_323)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_63]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_64]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_18]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_322;
  Wrd24 = Wrd28;

DEFLABEL (label_321)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_19]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_80_63);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_320;

DEFLABEL (label_319)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_318)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_68]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_317;
  Wrd21 = Wrd25;

DEFLABEL (label_316)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_18]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_8]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_315;
  Wrd28 = Wrd32;

DEFLABEL (label_314)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_80_68);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_313;

DEFLABEL (label_312)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_311)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_76]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_77]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_310;
  Wrd24 = Wrd28;

DEFLABEL (label_309)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_24]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_80_76);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_308;

DEFLABEL (label_307)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_306)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_85]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_305;
  Wrd21 = Wrd25;

DEFLABEL (label_304)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_9]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_303;
  Wrd28 = Wrd32;

DEFLABEL (label_302)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_80_85);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_14]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_301;

DEFLABEL (label_300)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_299)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_92]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_93]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_28]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_298;
  Wrd24 = Wrd28;

DEFLABEL (label_297)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_29]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_80_92);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_15]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_296;

DEFLABEL (label_295)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_294)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_97]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_293;
  Wrd21 = Wrd25;

DEFLABEL (label_292)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_28]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_10]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_291;
  Wrd28 = Wrd32;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_80_97);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_16]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_289;

DEFLABEL (label_288)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_287)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_102]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_103]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_28]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_286;
  Wrd24 = Wrd28;

DEFLABEL (label_285)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_32]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_80_102);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_17]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_284;

DEFLABEL (label_283)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_282)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_107]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_281;
  Wrd21 = Wrd25;

DEFLABEL (label_280)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_28]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_11]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_279;
  Wrd28 = Wrd32;

DEFLABEL (label_278)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_80_107);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_18]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_277;

DEFLABEL (label_276)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_275)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_112]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_113]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_274;
  Wrd24 = Wrd28;

DEFLABEL (label_273)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_34]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_80_112);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_19]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_272;

DEFLABEL (label_271)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_270)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_117]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_269;
  Wrd21 = Wrd25;

DEFLABEL (label_268)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_12]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_267;
  Wrd28 = Wrd32;

DEFLABEL (label_266)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_80_117);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_20]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_265;

DEFLABEL (label_264)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_263)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_122]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_123]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_36]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_262;
  Wrd24 = Wrd28;

DEFLABEL (label_261)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_37]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_80_122);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_21]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_260;

DEFLABEL (label_259)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_258)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_127]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_257;
  Wrd21 = Wrd25;

DEFLABEL (label_256)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_36]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_13]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_255;
  Wrd28 = Wrd32;

DEFLABEL (label_254)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_80_127);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_22]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_253;

DEFLABEL (label_252)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_251)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_132]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_133]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_40]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_250;
  Wrd24 = Wrd28;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_41]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_80_132);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_23]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_248;

DEFLABEL (label_247)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_246)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_137]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_245;
  Wrd21 = Wrd25;

DEFLABEL (label_244)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_40]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_14]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_243;
  Wrd28 = Wrd32;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_80_137);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_24]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_241;

DEFLABEL (label_240)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_239)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_142]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_143]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_44]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_238;
  Wrd24 = Wrd28;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_45]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_80_142);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_25]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_236;

DEFLABEL (label_235)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_234)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_147]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_233;
  Wrd21 = Wrd25;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_44]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_15]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_231;
  Wrd28 = Wrd32;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_80_147);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_26]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_229;

DEFLABEL (label_228)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_227)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_153]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_154]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_226;
  Wrd24 = Wrd28;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_47]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_80_153);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_27]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_224;

DEFLABEL (label_223)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_222)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_159]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_221;
  Wrd21 = Wrd25;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_8]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_16]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_219;
  Wrd28 = Wrd32;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_80_159);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_28]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_217;

DEFLABEL (label_216)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_215)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_166]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_167]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_80_36]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_214;
  Wrd24 = Wrd28;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_80_50]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_80_166);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_29]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_212;

DEFLABEL (label_211)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_210)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_171]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_209;
  Wrd21 = Wrd25;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_36]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_17]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_207;
  Wrd28 = Wrd32;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_18]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_80_171);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_80_30]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_205;

DEFLABEL (label_204)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_203)
  Rvl = (current_block [OBJECT_80_53]);
  goto pop_return;

DEFLABEL (label_205)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_204;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_175])), (Wrd6.pObj), Rvl);

DEFLABEL (label_183)
  goto label_203;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_173])), (Wrd29.pObj));

DEFLABEL (label_182)
  (Wrd28.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_172])), (Wrd22.pObj));

DEFLABEL (label_181)
  (Wrd21.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_212)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_211;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_170])), (Wrd6.pObj), Rvl);

DEFLABEL (label_180)
  goto label_210;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_168])), (Wrd25.pObj));

DEFLABEL (label_179)
  (Wrd24.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_217)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_216;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_165])), (Wrd6.pObj), Rvl);

DEFLABEL (label_178)
  goto label_215;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_161])), (Wrd29.pObj));

DEFLABEL (label_177)
  (Wrd28.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_160])), (Wrd22.pObj));

DEFLABEL (label_176)
  (Wrd21.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_224)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_223;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_158])), (Wrd6.pObj), Rvl);

DEFLABEL (label_175)
  goto label_222;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_155])), (Wrd25.pObj));

DEFLABEL (label_174)
  (Wrd24.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_229)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_228;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_152])), (Wrd6.pObj), Rvl);

DEFLABEL (label_173)
  goto label_227;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_149])), (Wrd29.pObj));

DEFLABEL (label_172)
  (Wrd28.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_148])), (Wrd22.pObj));

DEFLABEL (label_171)
  (Wrd21.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_236)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_235;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_146])), (Wrd6.pObj), Rvl);

DEFLABEL (label_170)
  goto label_234;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_144])), (Wrd25.pObj));

DEFLABEL (label_169)
  (Wrd24.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_241)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_240;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_141])), (Wrd6.pObj), Rvl);

DEFLABEL (label_168)
  goto label_239;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_139])), (Wrd29.pObj));

DEFLABEL (label_167)
  (Wrd28.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_138])), (Wrd22.pObj));

DEFLABEL (label_166)
  (Wrd21.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_248)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_247;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_136])), (Wrd6.pObj), Rvl);

DEFLABEL (label_165)
  goto label_246;

DEFLABEL (label_250)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_134])), (Wrd25.pObj));

DEFLABEL (label_164)
  (Wrd24.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_253)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_252;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_131])), (Wrd6.pObj), Rvl);

DEFLABEL (label_163)
  goto label_251;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_129])), (Wrd29.pObj));

DEFLABEL (label_162)
  (Wrd28.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_128])), (Wrd22.pObj));

DEFLABEL (label_161)
  (Wrd21.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_260)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_259;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_126])), (Wrd6.pObj), Rvl);

DEFLABEL (label_160)
  goto label_258;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_124])), (Wrd25.pObj));

DEFLABEL (label_159)
  (Wrd24.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_265)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_264;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_121])), (Wrd6.pObj), Rvl);

DEFLABEL (label_158)
  goto label_263;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_119])), (Wrd29.pObj));

DEFLABEL (label_157)
  (Wrd28.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_118])), (Wrd22.pObj));

DEFLABEL (label_156)
  (Wrd21.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_272)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_271;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_116])), (Wrd6.pObj), Rvl);

DEFLABEL (label_155)
  goto label_270;

DEFLABEL (label_274)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_114])), (Wrd25.pObj));

DEFLABEL (label_154)
  (Wrd24.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_277)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_276;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_111])), (Wrd6.pObj), Rvl);

DEFLABEL (label_153)
  goto label_275;

DEFLABEL (label_279)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_109])), (Wrd29.pObj));

DEFLABEL (label_152)
  (Wrd28.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_108])), (Wrd22.pObj));

DEFLABEL (label_151)
  (Wrd21.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_284)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_283;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_106])), (Wrd6.pObj), Rvl);

DEFLABEL (label_150)
  goto label_282;

DEFLABEL (label_286)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_104])), (Wrd25.pObj));

DEFLABEL (label_149)
  (Wrd24.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_289)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_288;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_101])), (Wrd6.pObj), Rvl);

DEFLABEL (label_148)
  goto label_287;

DEFLABEL (label_291)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_99])), (Wrd29.pObj));

DEFLABEL (label_147)
  (Wrd28.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_98])), (Wrd22.pObj));

DEFLABEL (label_146)
  (Wrd21.Obj) = Rvl;
  goto label_292;

DEFLABEL (label_296)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_295;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_96])), (Wrd6.pObj), Rvl);

DEFLABEL (label_145)
  goto label_294;

DEFLABEL (label_298)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_94])), (Wrd25.pObj));

DEFLABEL (label_144)
  (Wrd24.Obj) = Rvl;
  goto label_297;

DEFLABEL (label_301)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_300;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_91])), (Wrd6.pObj), Rvl);

DEFLABEL (label_143)
  goto label_299;

DEFLABEL (label_303)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_87])), (Wrd29.pObj));

DEFLABEL (label_142)
  (Wrd28.Obj) = Rvl;
  goto label_302;

DEFLABEL (label_305)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_86])), (Wrd22.pObj));

DEFLABEL (label_141)
  (Wrd21.Obj) = Rvl;
  goto label_304;

DEFLABEL (label_308)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_307;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_84])), (Wrd6.pObj), Rvl);

DEFLABEL (label_140)
  goto label_306;

DEFLABEL (label_310)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_78])), (Wrd25.pObj));

DEFLABEL (label_138)
  (Wrd24.Obj) = Rvl;
  goto label_309;

DEFLABEL (label_313)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_312;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_75])), (Wrd6.pObj), Rvl);

DEFLABEL (label_137)
  goto label_311;

DEFLABEL (label_315)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_70])), (Wrd29.pObj));

DEFLABEL (label_135)
  (Wrd28.Obj) = Rvl;
  goto label_314;

DEFLABEL (label_317)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_69])), (Wrd22.pObj));

DEFLABEL (label_134)
  (Wrd21.Obj) = Rvl;
  goto label_316;

DEFLABEL (label_320)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_319;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_67])), (Wrd6.pObj), Rvl);

DEFLABEL (label_133)
  goto label_318;

DEFLABEL (label_322)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_65])), (Wrd25.pObj));

DEFLABEL (label_132)
  (Wrd24.Obj) = Rvl;
  goto label_321;

DEFLABEL (label_325)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_324;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_62])), (Wrd6.pObj), Rvl);

DEFLABEL (label_131)
  goto label_323;

DEFLABEL (label_327)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_60])), (Wrd29.pObj));

DEFLABEL (label_130)
  (Wrd28.Obj) = Rvl;
  goto label_326;

DEFLABEL (label_329)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_59])), (Wrd22.pObj));

DEFLABEL (label_129)
  (Wrd21.Obj) = Rvl;
  goto label_328;

DEFLABEL (label_332)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_331;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_57])), (Wrd6.pObj), Rvl);

DEFLABEL (label_128)
  goto label_330;

DEFLABEL (label_334)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_55])), (Wrd25.pObj));

DEFLABEL (label_127)
  (Wrd24.Obj) = Rvl;
  goto label_333;

DEFLABEL (label_337)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_336;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_52])), (Wrd6.pObj), Rvl);

DEFLABEL (label_126)
  goto label_335;

DEFLABEL (label_339)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_49])), (Wrd29.pObj));

DEFLABEL (label_125)
  (Wrd28.Obj) = Rvl;
  goto label_338;

DEFLABEL (label_341)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_48])), (Wrd22.pObj));

DEFLABEL (label_124)
  (Wrd21.Obj) = Rvl;
  goto label_340;

DEFLABEL (label_344)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_343;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_46])), (Wrd6.pObj), Rvl);

DEFLABEL (label_123)
  goto label_342;

DEFLABEL (label_346)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_44])), (Wrd25.pObj));

DEFLABEL (label_122)
  (Wrd24.Obj) = Rvl;
  goto label_345;

DEFLABEL (label_349)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_348;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_41])), (Wrd6.pObj), Rvl);

DEFLABEL (label_121)
  goto label_347;

DEFLABEL (label_351)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_39])), (Wrd29.pObj));

DEFLABEL (label_120)
  (Wrd28.Obj) = Rvl;
  goto label_350;

DEFLABEL (label_353)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_38])), (Wrd22.pObj));

DEFLABEL (label_119)
  (Wrd21.Obj) = Rvl;
  goto label_352;

DEFLABEL (label_356)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_355;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_36])), (Wrd6.pObj), Rvl);

DEFLABEL (label_118)
  goto label_354;

DEFLABEL (label_358)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_34])), (Wrd25.pObj));

DEFLABEL (label_117)
  (Wrd24.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_361)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_360;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_31])), (Wrd6.pObj), Rvl);

DEFLABEL (label_116)
  goto label_359;

DEFLABEL (label_363)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_29])), (Wrd29.pObj));

DEFLABEL (label_115)
  (Wrd28.Obj) = Rvl;
  goto label_362;

DEFLABEL (label_365)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_28])), (Wrd22.pObj));

DEFLABEL (label_114)
  (Wrd21.Obj) = Rvl;
  goto label_364;

DEFLABEL (label_368)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_367;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_26])), (Wrd6.pObj), Rvl);

DEFLABEL (label_113)
  goto label_366;

DEFLABEL (label_370)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_24])), (Wrd25.pObj));

DEFLABEL (label_112)
  (Wrd24.Obj) = Rvl;
  goto label_369;

DEFLABEL (label_373)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_372;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_111)
  goto label_371;

DEFLABEL (label_375)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_17])), (Wrd29.pObj));

DEFLABEL (label_110)
  (Wrd28.Obj) = Rvl;
  goto label_374;

DEFLABEL (label_377)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_16])), (Wrd22.pObj));

DEFLABEL (label_109)
  (Wrd21.Obj) = Rvl;
  goto label_376;

DEFLABEL (label_380)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_379;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_108)
  goto label_378;

DEFLABEL (label_382)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_12])), (Wrd25.pObj));

DEFLABEL (label_107)
  (Wrd24.Obj) = Rvl;
  goto label_381;

DEFLABEL (label_385)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_384;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_80_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_106)
  goto label_383;

DEFLABEL (label_387)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_7])), (Wrd12.pObj));

DEFLABEL (label_105)
  (Wrd11.Obj) = Rvl;
  goto label_386;

DEFLABEL (lambda_186)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_80_6);
  (Wrd5.Obj) = (current_block [OBJECT_80_4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_187)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_80_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_80_25);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_188)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_80_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_80_30);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_35]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_80_35);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_189)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_80_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_80_40);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_45]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_80_45);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_190)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_80_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_80_50);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_56]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_17]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_80_56);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_191)
DEFLABEL (lambda_36)
  INTERRUPT_CHECK (26, LABEL_80_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_80_61);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_66]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_20]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_80_66);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_389;

DEFLABEL (label_388)
  (Wrd7.Obj) = (current_block [OBJECT_80_23]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (label_389)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_393;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_392)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_80_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_391;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_390)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_80_82);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80_81])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_83]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_80_72);
  goto label_388;

DEFLABEL (label_391)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_80]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_26]), 1);

DEFLABEL (label_139)
  (* (--Rsp)) = Rvl;
  goto label_390;

DEFLABEL (label_393)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_74]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_22]), 1);

DEFLABEL (label_136)
  (* (--Rsp)) = Rvl;
  goto label_392;

DEFLABEL (lambda_192)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_80_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_80_71);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_79]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_25]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_80_79);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_194)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_80_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_80_88);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_95]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_30]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_80_95);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_193)
  CLOSURE_HEADER (LABEL_80_81);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_80_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_90]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_80_89);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_195)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_80_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_80_100);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_105]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_33]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_80_105);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_196)
DEFLABEL (lambda_60)
  INTERRUPT_CHECK (26, LABEL_80_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_80_110);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_115]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_35]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_80_115);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_197)
DEFLABEL (lambda_66)
  INTERRUPT_CHECK (26, LABEL_80_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_80_120);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_125]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_38]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_80_125);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_198)
DEFLABEL (lambda_72)
  INTERRUPT_CHECK (26, LABEL_80_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_80_130);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_135]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_42]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_80_135);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_199)
DEFLABEL (lambda_81)
  INTERRUPT_CHECK (26, LABEL_80_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_80_140);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_80_145);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_151]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_46]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_80_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_80_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_80_164);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_200)
DEFLABEL (lambda_88)
  INTERRUPT_CHECK (26, LABEL_80_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_80_150);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_156]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_48]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_80_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_80_163);
  (Wrd5.Obj) = (current_block [OBJECT_80_52]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (lambda_201)
DEFLABEL (lambda_94)
  INTERRUPT_CHECK (26, LABEL_80_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_80_162);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_169]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_51]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_80_169);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

DEFLABEL (lambda_202)
DEFLABEL (lambda_100)
  INTERRUPT_CHECK (26, LABEL_80_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_20]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_80_174);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_176]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80_54]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_13]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_80_176);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_51]));

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
#define LABEL_10 15
#define LABEL_11 17
#define LABEL_12 19
#define LABEL_13 21
#define LABEL_14 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_18 31
#define LABEL_19 33
#define LABEL_20 35
#define LABEL_21 37
#define LABEL_22 39
#define LABEL_23 41
#define LABEL_24 43
#define LABEL_25 45
#define LABEL_26 47
#define LABEL_27 49
#define LABEL_28 51
#define LABEL_29 53
#define LABEL_30 55
#define LABEL_31 57
#define LABEL_32 59
#define LABEL_33 61
#define LABEL_34 63
#define LABEL_35 65
#define LABEL_36 67
#define LABEL_37 69
#define LABEL_38 71
#define LABEL_39 73
#define LABEL_40 75
#define LABEL_41 77
#define LABEL_42 79
#define LABEL_43 81
#define LABEL_44 83
#define LABEL_45 85
#define LABEL_46 87
#define LABEL_47 89
#define LABEL_48 91
#define LABEL_49 93
#define LABEL_50 95
#define LABEL_51 97
#define LABEL_52 99
#define LABEL_53 101
#define LABEL_54 103
#define LABEL_55 105
#define LABEL_56 107
#define LABEL_57 109
#define LABEL_58 111
#define LABEL_59 113
#define LABEL_60 115
#define LABEL_61 117
#define LABEL_62 119
#define LABEL_63 121
#define LABEL_64 123
#define LABEL_65 125
#define LABEL_66 127
#define LABEL_67 129
#define LABEL_68 131
#define LABEL_69 133
#define LABEL_70 135
#define LABEL_71 137
#define LABEL_72 139
#define LABEL_73 141
#define LABEL_74 143
#define LABEL_75 145
#define LABEL_76 147
#define LABEL_77 149
#define LABEL_78 151
#define LABEL_79 153
#define LABEL_80 155
#define LABEL_85 157
#define LABEL_81 159
#define LABEL_83 161
#define LABEL_84 163
#define LABEL_87 165
#define LABEL_88 167
#define TAG_89 82
#define LABEL_90 169
#define LABEL_91 171
#define LABEL_92 173
#define LABEL_93 175
#define LABEL_94 177
#define LABEL_95 179
#define LABEL_96 181
#define LABEL_97 183
#define LABEL_98 185
#define LABEL_99 187
#define LABEL_100 189
#define LABEL_101 191
#define LABEL_102 193
#define LABEL_103 195
#define LABEL_104 197
#define LABEL_107 199
#define LABEL_105 201
#define LABEL_106 203
#define LABEL_108 205
#define LABEL_109 207
#define LABEL_110 209
#define LABEL_111 211
#define LABEL_112 213
#define LABEL_113 215
#define LABEL_114 217
#define LABEL_115 219
#define LABEL_116 221
#define LABEL_117 223
#define LABEL_118 225
#define LABEL_119 227
#define LABEL_120 229
#define LABEL_121 231
#define LABEL_122 233
#define LABEL_123 235
#define LABEL_124 237
#define LABEL_126 239
#define LABEL_127 241
#define LABEL_128 243
#define LABEL_129 245
#define LABEL_130 247
#define LABEL_131 249
#define LABEL_132 251
#define LABEL_133 253
#define LABEL_134 255
#define LABEL_135 257
#define LABEL_136 259
#define LABEL_137 261
#define LABEL_138 263
#define LABEL_139 265
#define LABEL_140 267
#define LABEL_141 269
#define LABEL_142 271
#define LABEL_143 273
#define LABEL_144 275
#define LABEL_145 277
#define LABEL_146 279
#define LABEL_147 281
#define LABEL_148 283
#define LABEL_149 285
#define LABEL_150 287
#define LABEL_151 289
#define LABEL_152 291
#define LABEL_153 293
#define LABEL_154 295
#define LABEL_155 297
#define LABEL_156 299
#define LABEL_157 301
#define LABEL_158 303
#define LABEL_159 305
#define ENVIRONMENT_LABEL_3 549
#define DEBUGGING_LABEL_2 548
#define PURIFICATION_ROOT 547
#define OBJECT_231 546
#define OBJECT_230 545
#define OBJECT_229 544
#define OBJECT_228 543
#define OBJECT_227 542
#define OBJECT_226 541
#define OBJECT_225 540
#define OBJECT_224 539
#define OBJECT_223 538
#define OBJECT_222 537
#define OBJECT_221 536
#define OBJECT_220 535
#define OBJECT_219 534
#define OBJECT_218 533
#define OBJECT_217 532
#define OBJECT_216 531
#define OBJECT_215 530
#define OBJECT_214 529
#define OBJECT_213 528
#define OBJECT_212 527
#define OBJECT_211 526
#define OBJECT_210 525
#define OBJECT_209 524
#define OBJECT_208 523
#define OBJECT_207 522
#define OBJECT_206 521
#define OBJECT_205 520
#define OBJECT_204 519
#define OBJECT_203 518
#define OBJECT_202 517
#define OBJECT_201 516
#define OBJECT_200 515
#define OBJECT_199 514
#define OBJECT_198 513
#define OBJECT_197 512
#define OBJECT_196 511
#define OBJECT_195 510
#define OBJECT_194 509
#define OBJECT_193 508
#define OBJECT_192 507
#define OBJECT_191 506
#define OBJECT_190 505
#define OBJECT_189 504
#define OBJECT_188 503
#define OBJECT_187 502
#define OBJECT_186 501
#define OBJECT_185 500
#define OBJECT_184 499
#define OBJECT_183 498
#define OBJECT_182 497
#define OBJECT_181 496
#define OBJECT_180 495
#define OBJECT_179 494
#define OBJECT_178 493
#define OBJECT_177 492
#define OBJECT_176 491
#define OBJECT_175 490
#define OBJECT_174 489
#define OBJECT_173 488
#define OBJECT_172 487
#define OBJECT_171 486
#define OBJECT_170 485
#define OBJECT_169 484
#define OBJECT_168 483
#define OBJECT_167 482
#define OBJECT_166 481
#define OBJECT_165 480
#define OBJECT_164 479
#define OBJECT_163 478
#define OBJECT_162 477
#define OBJECT_161 476
#define OBJECT_160 475
#define OBJECT_159 474
#define OBJECT_158 473
#define OBJECT_157 472
#define OBJECT_156 471
#define OBJECT_155 470
#define OBJECT_154 469
#define OBJECT_153 468
#define OBJECT_152 467
#define OBJECT_151 466
#define OBJECT_150 465
#define OBJECT_149 464
#define OBJECT_148 463
#define OBJECT_147 462
#define OBJECT_146 461
#define OBJECT_145 460
#define OBJECT_144 459
#define OBJECT_143 458
#define OBJECT_142 457
#define OBJECT_141 456
#define OBJECT_140 455
#define OBJECT_139 454
#define OBJECT_138 453
#define OBJECT_137 452
#define OBJECT_136 451
#define OBJECT_135 450
#define OBJECT_134 449
#define OBJECT_133 448
#define OBJECT_132 447
#define OBJECT_131 446
#define OBJECT_130 445
#define OBJECT_129 444
#define OBJECT_128 443
#define OBJECT_127 442
#define OBJECT_126 441
#define OBJECT_125 440
#define OBJECT_124 439
#define OBJECT_123 438
#define OBJECT_122 437
#define OBJECT_121 436
#define OBJECT_120 435
#define OBJECT_119 434
#define OBJECT_118 433
#define OBJECT_117 432
#define OBJECT_116 431
#define OBJECT_115 430
#define OBJECT_114 429
#define OBJECT_113 428
#define OBJECT_112 427
#define OBJECT_111 426
#define OBJECT_110 425
#define OBJECT_109 424
#define OBJECT_108 423
#define OBJECT_107 422
#define OBJECT_106 421
#define OBJECT_105 420
#define OBJECT_104 419
#define OBJECT_103 418
#define OBJECT_102 417
#define OBJECT_101 416
#define OBJECT_100 415
#define OBJECT_99 414
#define OBJECT_98 413
#define OBJECT_97 412
#define OBJECT_96 411
#define OBJECT_95 410
#define OBJECT_94 409
#define OBJECT_93 408
#define OBJECT_92 407
#define OBJECT_91 406
#define OBJECT_90 405
#define OBJECT_89 404
#define OBJECT_88 403
#define OBJECT_87 402
#define OBJECT_86 401
#define OBJECT_85 400
#define OBJECT_84 399
#define OBJECT_83 398
#define OBJECT_82 397
#define OBJECT_81 396
#define OBJECT_80 395
#define OBJECT_79 394
#define OBJECT_78 393
#define OBJECT_77 392
#define OBJECT_76 391
#define OBJECT_75 390
#define OBJECT_74 389
#define OBJECT_73 388
#define OBJECT_72 387
#define OBJECT_71 386
#define OBJECT_70 385
#define OBJECT_69 384
#define OBJECT_68 383
#define OBJECT_67 382
#define OBJECT_66 381
#define OBJECT_65 380
#define OBJECT_64 379
#define OBJECT_63 378
#define OBJECT_62 377
#define OBJECT_61 376
#define OBJECT_60 375
#define OBJECT_59 374
#define OBJECT_58 373
#define OBJECT_57 372
#define OBJECT_56 371
#define OBJECT_55 370
#define OBJECT_54 369
#define OBJECT_53 368
#define OBJECT_52 367
#define OBJECT_51 366
#define OBJECT_50 365
#define OBJECT_49 364
#define OBJECT_48 363
#define OBJECT_47 362
#define OBJECT_46 361
#define OBJECT_45 360
#define OBJECT_44 359
#define OBJECT_43 358
#define OBJECT_42 357
#define OBJECT_41 356
#define OBJECT_40 355
#define OBJECT_39 354
#define OBJECT_38 353
#define OBJECT_37 352
#define OBJECT_36 351
#define OBJECT_35 350
#define OBJECT_34 349
#define OBJECT_33 348
#define OBJECT_32 347
#define OBJECT_31 346
#define OBJECT_30 345
#define OBJECT_29 344
#define OBJECT_28 343
#define OBJECT_27 342
#define OBJECT_26 341
#define OBJECT_25 340
#define OBJECT_24 339
#define OBJECT_23 338
#define OBJECT_22 337
#define OBJECT_21 336
#define OBJECT_20 335
#define OBJECT_19 334
#define OBJECT_18 333
#define OBJECT_17 332
#define OBJECT_16 331
#define OBJECT_15 330
#define OBJECT_14 329
#define OBJECT_13 328
#define OBJECT_12 327
#define OBJECT_11 326
#define OBJECT_10 325
#define OBJECT_9 324
#define OBJECT_8 323
#define OBJECT_7 322
#define OBJECT_6 321
#define OBJECT_5 320
#define OBJECT_4 319
#define OBJECT_3 318
#define OBJECT_2 317
#define OBJECT_1 316
#define OBJECT_0 315
#define FREE_REFERENCE_0 307
#define GLOBAL_EXECUTE_CACHE_125 309
#define GLOBAL_EXECUTE_CACHE_86 311
#define GLOBAL_EXECUTE_CACHE_82 313
#define FREE_REFERENCES_LABEL_0 306
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
parse_so_70bc06d34d8b3af1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd10;
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
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_28);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_27;

    case 26:
      current_block = (Rpc - LABEL_30);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_31);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_30;

    case 29:
      current_block = (Rpc - LABEL_33);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_34);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_35);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_36);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_37);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_38);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_39);
      goto continuation_37;

    case 36:
      current_block = (Rpc - LABEL_40);
      goto continuation_38;

    case 37:
      current_block = (Rpc - LABEL_41);
      goto continuation_39;

    case 38:
      current_block = (Rpc - LABEL_42);
      goto continuation_40;

    case 39:
      current_block = (Rpc - LABEL_43);
      goto continuation_41;

    case 40:
      current_block = (Rpc - LABEL_44);
      goto continuation_42;

    case 41:
      current_block = (Rpc - LABEL_45);
      goto continuation_43;

    case 42:
      current_block = (Rpc - LABEL_46);
      goto continuation_44;

    case 43:
      current_block = (Rpc - LABEL_47);
      goto continuation_45;

    case 44:
      current_block = (Rpc - LABEL_48);
      goto continuation_46;

    case 45:
      current_block = (Rpc - LABEL_49);
      goto continuation_47;

    case 46:
      current_block = (Rpc - LABEL_50);
      goto continuation_48;

    case 47:
      current_block = (Rpc - LABEL_51);
      goto continuation_49;

    case 48:
      current_block = (Rpc - LABEL_52);
      goto continuation_50;

    case 49:
      current_block = (Rpc - LABEL_53);
      goto continuation_51;

    case 50:
      current_block = (Rpc - LABEL_54);
      goto continuation_53;

    case 51:
      current_block = (Rpc - LABEL_55);
      goto continuation_55;

    case 52:
      current_block = (Rpc - LABEL_56);
      goto continuation_56;

    case 53:
      current_block = (Rpc - LABEL_57);
      goto continuation_57;

    case 54:
      current_block = (Rpc - LABEL_58);
      goto continuation_58;

    case 55:
      current_block = (Rpc - LABEL_59);
      goto continuation_59;

    case 56:
      current_block = (Rpc - LABEL_60);
      goto continuation_60;

    case 57:
      current_block = (Rpc - LABEL_61);
      goto continuation_61;

    case 58:
      current_block = (Rpc - LABEL_62);
      goto continuation_62;

    case 59:
      current_block = (Rpc - LABEL_63);
      goto continuation_63;

    case 60:
      current_block = (Rpc - LABEL_64);
      goto continuation_64;

    case 61:
      current_block = (Rpc - LABEL_65);
      goto continuation_65;

    case 62:
      current_block = (Rpc - LABEL_66);
      goto continuation_66;

    case 63:
      current_block = (Rpc - LABEL_67);
      goto continuation_67;

    case 64:
      current_block = (Rpc - LABEL_68);
      goto continuation_68;

    case 65:
      current_block = (Rpc - LABEL_69);
      goto continuation_69;

    case 66:
      current_block = (Rpc - LABEL_70);
      goto continuation_70;

    case 67:
      current_block = (Rpc - LABEL_71);
      goto continuation_71;

    case 68:
      current_block = (Rpc - LABEL_72);
      goto continuation_72;

    case 69:
      current_block = (Rpc - LABEL_73);
      goto continuation_73;

    case 70:
      current_block = (Rpc - LABEL_74);
      goto continuation_74;

    case 71:
      current_block = (Rpc - LABEL_75);
      goto continuation_76;

    case 72:
      current_block = (Rpc - LABEL_76);
      goto continuation_77;

    case 73:
      current_block = (Rpc - LABEL_77);
      goto continuation_78;

    case 74:
      current_block = (Rpc - LABEL_78);
      goto continuation_79;

    case 75:
      current_block = (Rpc - LABEL_79);
      goto continuation_80;

    case 76:
      current_block = (Rpc - LABEL_80);
      goto continuation_97;

    case 77:
      current_block = (Rpc - LABEL_85);
      goto label_172;

    case 78:
      current_block = (Rpc - LABEL_81);
      goto continuation_96;

    case 79:
      current_block = (Rpc - LABEL_83);
      goto continuation_102;

    case 80:
      current_block = (Rpc - LABEL_84);
      goto continuation_98;

    case 81:
      current_block = (Rpc - LABEL_87);
      goto continuation_103;

    case 82:
      current_block = (Rpc - LABEL_88);
      goto make_db_175;

    case 83:
      current_block = (Rpc - LABEL_90);
      goto continuation_104;

    case 84:
      current_block = (Rpc - LABEL_91);
      goto continuation_105;

    case 85:
      current_block = (Rpc - LABEL_92);
      goto continuation_106;

    case 86:
      current_block = (Rpc - LABEL_93);
      goto continuation_107;

    case 87:
      current_block = (Rpc - LABEL_94);
      goto continuation_108;

    case 88:
      current_block = (Rpc - LABEL_95);
      goto continuation_109;

    case 89:
      current_block = (Rpc - LABEL_96);
      goto continuation_110;

    case 90:
      current_block = (Rpc - LABEL_97);
      goto continuation_111;

    case 91:
      current_block = (Rpc - LABEL_98);
      goto continuation_112;

    case 92:
      current_block = (Rpc - LABEL_99);
      goto continuation_113;

    case 93:
      current_block = (Rpc - LABEL_100);
      goto continuation_114;

    case 94:
      current_block = (Rpc - LABEL_101);
      goto continuation_115;

    case 95:
      current_block = (Rpc - LABEL_102);
      goto continuation_116;

    case 96:
      current_block = (Rpc - LABEL_103);
      goto continuation_117;

    case 97:
      current_block = (Rpc - LABEL_104);
      goto continuation_118;

    case 98:
      current_block = (Rpc - LABEL_107);
      goto label_173;

    case 99:
      current_block = (Rpc - LABEL_105);
      goto continuation_120;

    case 100:
      current_block = (Rpc - LABEL_106);
      goto continuation_119;

    case 101:
      current_block = (Rpc - LABEL_108);
      goto continuation_121;

    case 102:
      current_block = (Rpc - LABEL_109);
      goto continuation_122;

    case 103:
      current_block = (Rpc - LABEL_110);
      goto continuation_123;

    case 104:
      current_block = (Rpc - LABEL_111);
      goto continuation_124;

    case 105:
      current_block = (Rpc - LABEL_112);
      goto continuation_125;

    case 106:
      current_block = (Rpc - LABEL_113);
      goto continuation_126;

    case 107:
      current_block = (Rpc - LABEL_114);
      goto continuation_127;

    case 108:
      current_block = (Rpc - LABEL_115);
      goto continuation_128;

    case 109:
      current_block = (Rpc - LABEL_116);
      goto continuation_129;

    case 110:
      current_block = (Rpc - LABEL_117);
      goto continuation_130;

    case 111:
      current_block = (Rpc - LABEL_118);
      goto continuation_131;

    case 112:
      current_block = (Rpc - LABEL_119);
      goto continuation_132;

    case 113:
      current_block = (Rpc - LABEL_120);
      goto continuation_133;

    case 114:
      current_block = (Rpc - LABEL_121);
      goto continuation_134;

    case 115:
      current_block = (Rpc - LABEL_122);
      goto continuation_138;

    case 116:
      current_block = (Rpc - LABEL_123);
      goto continuation_137;

    case 117:
      current_block = (Rpc - LABEL_124);
      goto continuation_135;

    case 118:
      current_block = (Rpc - LABEL_126);
      goto continuation_139;

    case 119:
      current_block = (Rpc - LABEL_127);
      goto continuation_140;

    case 120:
      current_block = (Rpc - LABEL_128);
      goto continuation_141;

    case 121:
      current_block = (Rpc - LABEL_129);
      goto continuation_142;

    case 122:
      current_block = (Rpc - LABEL_130);
      goto continuation_143;

    case 123:
      current_block = (Rpc - LABEL_131);
      goto continuation_144;

    case 124:
      current_block = (Rpc - LABEL_132);
      goto continuation_145;

    case 125:
      current_block = (Rpc - LABEL_133);
      goto continuation_146;

    case 126:
      current_block = (Rpc - LABEL_134);
      goto continuation_147;

    case 127:
      current_block = (Rpc - LABEL_135);
      goto continuation_148;

    case 128:
      current_block = (Rpc - LABEL_136);
      goto continuation_149;

    case 129:
      current_block = (Rpc - LABEL_137);
      goto continuation_150;

    case 130:
      current_block = (Rpc - LABEL_138);
      goto continuation_151;

    case 131:
      current_block = (Rpc - LABEL_139);
      goto continuation_152;

    case 132:
      current_block = (Rpc - LABEL_140);
      goto continuation_153;

    case 133:
      current_block = (Rpc - LABEL_141);
      goto continuation_154;

    case 134:
      current_block = (Rpc - LABEL_142);
      goto continuation_155;

    case 135:
      current_block = (Rpc - LABEL_143);
      goto continuation_156;

    case 136:
      current_block = (Rpc - LABEL_144);
      goto continuation_157;

    case 137:
      current_block = (Rpc - LABEL_145);
      goto continuation_158;

    case 138:
      current_block = (Rpc - LABEL_146);
      goto continuation_159;

    case 139:
      current_block = (Rpc - LABEL_147);
      goto continuation_160;

    case 140:
      current_block = (Rpc - LABEL_148);
      goto continuation_161;

    case 141:
      current_block = (Rpc - LABEL_149);
      goto continuation_162;

    case 142:
      current_block = (Rpc - LABEL_150);
      goto continuation_163;

    case 143:
      current_block = (Rpc - LABEL_151);
      goto continuation_164;

    case 144:
      current_block = (Rpc - LABEL_152);
      goto continuation_165;

    case 145:
      current_block = (Rpc - LABEL_153);
      goto continuation_166;

    case 146:
      current_block = (Rpc - LABEL_154);
      goto continuation_167;

    case 147:
      current_block = (Rpc - LABEL_155);
      goto continuation_168;

    case 148:
      current_block = (Rpc - LABEL_156);
      goto continuation_169;

    case 149:
      current_block = (Rpc - LABEL_157);
      goto label_177;

    case 150:
      current_block = (Rpc - LABEL_158);
      goto label_178;

    case 151:
      current_block = (Rpc - LABEL_159);
      goto expression_171;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_171)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_158])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_178)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_177)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	0,
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
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
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
	2,
	1,
	3,
	1,
	1,
	2,
	1,
	2,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 80)
      goto label_176;
    blocks = (current_block [OBJECT_231]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_157])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_176)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_80]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_119]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_33]);
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
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_82]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_182;
  Wrd11 = Wrd15;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_86]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1010, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_180;
  Wrd11 = Wrd15;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_86]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_106);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_125]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd9.Obj) = (current_block [OBJECT_196]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_198]), 2);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd5.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_230]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd12.pObj));

DEFLABEL (label_173)
  (Wrd11.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd12.pObj));

DEFLABEL (label_172)
  (Wrd11.Obj) = Rvl;
  goto label_181;

DEFLABEL (make_db_175)
  CLOSURE_HEADER (LABEL_88);

DEFLABEL (make_db_100)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd24.Obj) = (MAKE_OBJECT (0, 16));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.Obj) = (Rsp [9]);
  (Wrd17.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (Wrd11.Obj) = (Rsp [12]);
  (Wrd12.Obj) = (Rsp [13]);
  (Wrd13.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-17]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [16]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_parse_so_70bc06d34d8b3af1 [80] =
  {
    { "parse_so_code_1", 2, parse_so_code_1 },
    { "parse_so_code_2", 7, parse_so_code_2 },
    { "parse_so_code_3", 13, parse_so_code_3 },
    { "parse_so_code_4", 4, parse_so_code_4 },
    { "parse_so_code_5", 1, parse_so_code_5 },
    { "parse_so_code_6", 15, parse_so_code_6 },
    { "parse_so_code_7", 5, parse_so_code_7 },
    { "parse_so_code_8", 5, parse_so_code_8 },
    { "parse_so_code_9", 94, parse_so_code_9 },
    { "parse_so_code_10", 2, parse_so_code_10 },
    { "parse_so_code_11", 22, parse_so_code_11 },
    { "parse_so_code_12", 33, parse_so_code_12 },
    { "parse_so_code_13", 3, parse_so_code_13 },
    { "parse_so_code_14", 9, parse_so_code_14 },
    { "parse_so_code_15", 9, parse_so_code_15 },
    { "parse_so_code_16", 6, parse_so_code_16 },
    { "parse_so_code_17", 1, parse_so_code_17 },
    { "parse_so_code_18", 4, parse_so_code_18 },
    { "parse_so_code_19", 1, parse_so_code_19 },
    { "parse_so_code_20", 1, parse_so_code_20 },
    { "parse_so_code_21", 37, parse_so_code_21 },
    { "parse_so_code_22", 6, parse_so_code_22 },
    { "parse_so_code_23", 10, parse_so_code_23 },
    { "parse_so_code_24", 5, parse_so_code_24 },
    { "parse_so_code_25", 5, parse_so_code_25 },
    { "parse_so_code_26", 3, parse_so_code_26 },
    { "parse_so_code_27", 18, parse_so_code_27 },
    { "parse_so_code_28", 4, parse_so_code_28 },
    { "parse_so_code_29", 3, parse_so_code_29 },
    { "parse_so_code_30", 4, parse_so_code_30 },
    { "parse_so_code_31", 2, parse_so_code_31 },
    { "parse_so_code_32", 2, parse_so_code_32 },
    { "parse_so_code_33", 5, parse_so_code_33 },
    { "parse_so_code_34", 16, parse_so_code_34 },
    { "parse_so_code_35", 9, parse_so_code_35 },
    { "parse_so_code_36", 4, parse_so_code_36 },
    { "parse_so_code_37", 4, parse_so_code_37 },
    { "parse_so_code_38", 8, parse_so_code_38 },
    { "parse_so_code_39", 19, parse_so_code_39 },
    { "parse_so_code_40", 16, parse_so_code_40 },
    { "parse_so_code_41", 10, parse_so_code_41 },
    { "parse_so_code_42", 1, parse_so_code_42 },
    { "parse_so_code_43", 6, parse_so_code_43 },
    { "parse_so_code_44", 6, parse_so_code_44 },
    { "parse_so_code_45", 6, parse_so_code_45 },
    { "parse_so_code_46", 4, parse_so_code_46 },
    { "parse_so_code_47", 4, parse_so_code_47 },
    { "parse_so_code_48", 6, parse_so_code_48 },
    { "parse_so_code_49", 1, parse_so_code_49 },
    { "parse_so_code_50", 1, parse_so_code_50 },
    { "parse_so_code_51", 1, parse_so_code_51 },
    { "parse_so_code_52", 1, parse_so_code_52 },
    { "parse_so_code_53", 1, parse_so_code_53 },
    { "parse_so_code_54", 1, parse_so_code_54 },
    { "parse_so_code_55", 1, parse_so_code_55 },
    { "parse_so_code_56", 1, parse_so_code_56 },
    { "parse_so_code_57", 1, parse_so_code_57 },
    { "parse_so_code_58", 1, parse_so_code_58 },
    { "parse_so_code_59", 1, parse_so_code_59 },
    { "parse_so_code_60", 1, parse_so_code_60 },
    { "parse_so_code_61", 1, parse_so_code_61 },
    { "parse_so_code_62", 1, parse_so_code_62 },
    { "parse_so_code_63", 1, parse_so_code_63 },
    { "parse_so_code_64", 1, parse_so_code_64 },
    { "parse_so_code_65", 4, parse_so_code_65 },
    { "parse_so_code_66", 20, parse_so_code_66 },
    { "parse_so_code_67", 4, parse_so_code_67 },
    { "parse_so_code_68", 2, parse_so_code_68 },
    { "parse_so_code_69", 4, parse_so_code_69 },
    { "parse_so_code_70", 2, parse_so_code_70 },
    { "parse_so_code_71", 2, parse_so_code_71 },
    { "parse_so_code_72", 3, parse_so_code_72 },
    { "parse_so_code_73", 3, parse_so_code_73 },
    { "parse_so_code_74", 4, parse_so_code_74 },
    { "parse_so_code_75", 4, parse_so_code_75 },
    { "parse_so_code_76", 17, parse_so_code_76 },
    { "parse_so_code_77", 10, parse_so_code_77 },
    { "parse_so_code_78", 20, parse_so_code_78 },
    { "parse_so_code_79", 17, parse_so_code_79 },
    { "parse_so_code_80", 165, parse_so_code_80 }
  };

int
decl_parse_so_70bc06d34d8b3af1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_parse_so_70bc06d34d8b3af1);
  return (0);
}

DECLARE_COMPILED_CODE ("parse.so", 152, decl_parse_so_70bc06d34d8b3af1, parse_so_70bc06d34d8b3af1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_parse_so_data_70bc06d34d8b3af1 [17345] =
  "\xa6\x04\xca\x01\x95\x1f\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d"
  "\xb9\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x08\xc3"
  "\x02\x80\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x02\xc2\xbc\x81\x0d"
  "\xbd\x0d\x0d\x0d\x0d\xbe\x24\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\xc2\x1c\x02\x86\xb6\x24\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\xc3\x1c\x02\x1b\x86\x02\xb4\x02\x0d\x1c\xb6\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x02\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc1\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\xc3\x1d\x1b\x0f\x02\x0c\x0c\x0c"
  "\x0c\x0f\x0f\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x0d\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x0f\x0f\x1b\x02\x86\xb4\x85\x07\x82\x1b\xb6\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0f\x0f\x0f"
  "\x0f\x0f\x80\xb4\x85\x07\x82\x1b\xb6\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\xc1\x1c\x0d\x1c\xb4\x86\x0f\x08\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x1b\x1b\xb4\x86\x0f\x08\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b"
  "\x08\x0d\x1c\xb4\x86\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x02\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x1c\xc2\x1b\x0f\x0f\xc1\x1c\x02"
  "\x1b\x02\x86\xc1\x1c\x83\x82\xb4\x84\x0d\x0d\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x08\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1d\x08\x1b\x0d\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb5\x1b\x0d\x1c\x1b\x1b\x24\x28\x0d\x28\x0d"
  "\xbd\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x24\x28\xb5\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x1b\x1b"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x0d\x08\x1b\x0f\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x02\x0f\x1d\x0f\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x08\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x07\x08\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x82\x81\x0f\x0f\xc2\x80\x1b\x08\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0f\x07"
  "\x1b\x02\x86\x02\xb4\x82\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0c\x1b\x86\x02\x0c\x0c\x0c\x0c\x0c\x07\x0c\x0c\x0c\x0c\x08\x0d"
  "\x0d\x0d\x0d\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x0f\x02\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x02\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\x02\x1b\x24\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\xb4\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x86\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x02\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x02\x86\xb4\x02\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x86\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb4\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x1d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\xb7\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x88\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1b\x28\x1b\x28\xb7\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\xb4\x02\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb4\x02\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb4\x81"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x28\x0d\xbc\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c\x0c\x0c\x06\x07\x85\xc2\x1c\x02"
  "\x1b\x1b\x1b\x1b\x0c\x0d\x1c\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c"
  "\x0c\x06\x07\x85\x1b\x02\x1b\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c"
  "\x1d\x0c\x0c\x0c\x1b\x06\x85\x1b\x02\x1b\x0c\x07\x1b\x0d\x28\x1b"
  "\x28\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d"
  "\x1c\x0d\x0d\x1c\x0d\xbc\x0d\x1b\x0d\x1c\x08\x89\x1b\x08\x88\x0d"
  "\x0d\x1c\x0d\x1c\x1b\x08\x0d\x0d\x1b\x0d\x0d\x08\x89\x0d\x08\x89"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x0c\x0c\x0d\x0c\x0c\x0d\x0c\x1b"
  "\x0d\xb8\x08\x88\xb0\x0c\x0d\xb0\x1b\x08\x89\x1b\x0c\x0d\x1b\x08"
  "\x88\x0c\x0d\x0c\x0d\x1b\x0c\x0d\x1b\x08\x88\x0f\x1b\x0c\x0d\x0c"
  "\x1b\x0d\x1c\x0c\x0d\x1b\x08\x88\x0c\x0d\x0d\x1c\x0c\x0d\x1b\x08"
  "\x88\x0d\x1c\x0c\x0d\x1b\x08\x88\x0c\x0d\x0d\x1c\x0c\x0d\x1b\x08"
  "\x88\x0d\x08\xb4\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b"
  "\x0d\xb8\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\xb5\x0d"
  "\x1c\x1b\x25\x1b\xb4\x1b\x1b\x1b\x1b\x1b\xb0\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x1b\x1b\xb5\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b"
  "\x1b\x1b\x1b\x1b\xb0\x1b\x1b\x1b\x1b\x02\x02\x0d\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\xb7\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x08\x14\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x2a\x1b\x1b\x2a\xb6\x08\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x1b"
  "\x1b\x2a\xb1\x1b\x2a\x0d\xb3\x2a\x0d\xb2\x2a\x1b\x1b\x0d\x0d\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x1b\x02\x1b\x1b\x1b\x1b\x07\x1b\xc3\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x70\x61\x72\x73\x65\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x03\x11\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x2d\x70\x61\x72\x73\x65\x72\x02\x9a\x01\x06\x81\x85\x02\x99\x01"
  "\x04\x84\x06\x05\x0b\x02\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61"
  "\x69\x72\x2d\x63\x6f\x6e\x73\x14\x03\x02\xa1\x01\x10\x81\x83\x02"
  "\xa0\x01\x0e\x81\x85\x02\x9f\x01\x0c\x81\x85\x02\x9e\x01\x0a\x81"
  "\x83\x02\x9d\x01\x08\x81\x83\x02\x9c\x01\x06\x81\x87\x02\x9b\x01"
  "\x04\x85\x08\x0f\x19\x02\x10\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x72\x65\x66\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x0c\x72\x65"
  "\x61\x64\x2d\x66\x69\x6e\x69\x73\x68\x0b\x72\x65\x61\x64\x2d\x73"
  "\x74\x61\x72\x74\x05\x72\x65\x61\x64\x10\x72\x65\x73\x74\x61\x72"
  "\x74\x2d\x70\x61\x72\x73\x69\x6e\x67\x02\x04\x0f\x70\x6f\x72\x74"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x04\x0b\x69\x6e\x69\x74"
  "\x69\x61\x6c\x2d\x64\x62\x09\x05\x09\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x0a\x04\xae\x01\x1c\x81\x8b\x02\xad\x01\x1a\x81\x8b\x02\xac"
  "\x01\x18\x81\x8b\x02\xab\x01\x16\x81\x89\x02\xaa\x01\x14\x81\x8b"
  "\x02\xa9\x01\x12\x81\x87\x02\xa8\x01\x10\x81\x87\x02\xa7\x01\x0e"
  "\x81\x87\x02\xa6\x01\x0c\x81\x87\x02\xa5\x01\x0a\x81\x85\x02\xa4"
  "\x01\x08\x81\x85\x02\xa3\x01\x06\x81\x83\x02\xa2\x01\x04\x83\x04"
  "\x1b\x2e\x0b\x02\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x0c\x09"
  "\x02\x05\x0a\x03\x14\x65\x72\x72\x6f\x72\x3a\x70\x72\x65\x6d\x61"
  "\x74\x75\x72\x65\x2d\x65\x6f\x66\x0d\x03\x19\x65\x72\x72\x6f\x72"
  "\x3a\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x0e\x04\xb2\x01\x0a\x81\x89\x02\xb1\x01\x08\x81\x89"
  "\x02\xb0\x01\x06\x81\x87\x02\xaf\x01\x04\x85\x08\x09\x18\x0f\x02"
  "\x07\x6f\x62\x6a\x65\x63\x74\x10\x05\x10\x72\x65\x61\x64\x2d\x69"
  "\x6e\x2d\x63\x6f\x6e\x74\x65\x78\x74\x11\x02\xb3\x01\x04\x84\x06"
  "\x03\x0a\x12\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74"
  "\x21\x13\x10\x0c\x0c\x09\x11\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2d"
  "\x70\x61\x72\x73\x69\x6e\x67\x14\x03\x03\x15\x70\x61\x72\x73\x65"
  "\x72\x2d\x74\x61\x62\x6c\x65\x2f\x69\x6e\x69\x74\x69\x61\x6c\x04"
  "\x0b\x25\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x15\x04\x0c\x67\x65"
  "\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x16\x03\x10\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x17\x05\xc2\x01\x20"
  "\x81\x97\x02\xc1\x01\x1e\x81\x8d\x02\xc0\x01\x1c\x81\x8d\x02\xbf"
  "\x01\x1a\x81\x8d\x02\xbe\x01\x18\x81\x8d\x02\xbd\x01\x16\x81\x8d"
  "\x02\xbc\x01\x14\x81\x8d\x02\xbb\x01\x12\x81\x8d\x02\xba\x01\x10"
  "\x81\x8b\x02\xb9\x01\x0e\x81\x89\x02\xb8\x01\x0c\x81\x8d\x02\xb7"
  "\x01\x0a\x81\x89\x02\xb6\x01\x08\x81\x87\x02\xb5\x01\x06\x81\x89"
  "\x02\xb4\x01\x04\x85\x08\x1f\x35\x18\x02\x08\x09\x04\x12\x25\x72"
  "\x65\x61\x64\x2d\x63\x68\x61\x72\x2f\x6e\x6f\x2d\x65\x6f\x66\x19"
  "\x03\x15\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x73"
  "\x70\x65\x63\x69\x61\x6c\x04\x16\x04\xc7\x01\x0c\x81\x8d\x02\xc6"
  "\x01\x0a\x81\x8b\x02\xc5\x01\x08\x81\x8f\x02\xc4\x01\x06\x81\x89"
  "\x02\xc3\x01\x04\x86\x0a\x0b\x17\x1a\x02\x09\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74"
  "\x65\x67\x65\x72\x1b\x03\x13\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c"
  "\x65\x67\x61\x6c\x2d\x63\x68\x61\x72\x1c\x02\xcc\x01\x0c\x81\x87"
  "\x02\xcb\x01\x0a\x81\x85\x02\xca\x01\x08\x84\x06\xc9\x01\x06\x81"
  "\x87\x02\xc8\x01\x04\x81\x87\x02\x0b\x13\x1d\x02\x0a\x01\x41\x01"
  "\x22\x01\x5d\x01\x2b\x01\x55\x01\x75\x01\x47\x01\x67\x01\x24\x01"
  "\x23\x01\x2d\x01\x61\x01\x28\x01\x7d\x01\x3c\x01\x3b\x01\x5e\x01"
  "\x2a\x01\x5c\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02"
  "\x1b\x01\x29\x81\x02\x11\x62\x42\x6f\x4f\x64\x44\x78\x58\x69\x49"
  "\x65\x45\x73\x53\x6c\x4c\x04\x2b\x2d\x2e\x0c\x28\x29\x5b\x5d\x7b"
  "\x7d\x22\x3b\x27\x60\x2c\x03\x5c\x7c\x01\xac\x01\x01\xbc\x01\x1b"
  "\x73\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x1e\x16\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2f\x63\x6f\x6e\x73\x74\x69\x74\x75\x65\x6e\x74"
  "\x73\x1f\x19\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x61\x74\x6f\x6d"
  "\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x20\x17\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x2f\x73\x79\x6d\x62\x6f\x6c\x2d\x71\x75\x6f"
  "\x74\x65\x73\x21\x18\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x6c\x65\x61\x64\x65\x72\x73\x22\x19\x2a\x70"
  "\x61\x72\x73\x65\x72\x2d\x61\x74\x6f\x6d\x2d\x64\x65\x6c\x69\x6d"
  "\x69\x74\x65\x72\x73\x2a\x23\x16\x2a\x70\x61\x72\x73\x65\x72\x2d"
  "\x63\x6f\x6e\x73\x74\x69\x74\x75\x65\x6e\x74\x73\x2a\x24\x1f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x61\x74"
  "\x6f\x6d\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x25\x1c\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x63\x6f"
  "\x6e\x73\x74\x69\x74\x75\x65\x6e\x74\x73\x26\x0f\x2a\x70\x61\x72"
  "\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2a\x27\x15\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65"
  "\x28\x16\x68\x61\x73\x68\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x69\x6e\x74\x65\x72\x6e\x73\x29\x0d\x14\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x3a\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\x11\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3a\x67\x72\x61\x70\x68\x69\x63\x11\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x75\x6d\x65\x72\x69\x63\x13"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x77\x68\x69\x74\x65\x73\x70\x61"
  "\x63\x65\x2a\x0d\x68\x61\x6e\x64\x6c\x65\x72\x3a\x61\x74\x6f\x6d"
  "\x2b\x0f\x68\x61\x6e\x64\x6c\x65\x72\x3a\x73\x79\x6d\x62\x6f\x6c"
  "\x2c\x0f\x68\x61\x6e\x64\x6c\x65\x72\x3a\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x0d\x68\x61\x6e\x64\x6c\x65\x72\x3a\x6c\x69\x73\x74\x2e\x0f"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x76\x65\x63\x74\x6f\x72\x2f\x16"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x68\x61\x73\x68\x65\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x30\x1a\x68\x61\x6e\x64\x6c\x65\x72\x3a\x63"
  "\x6c\x6f\x73\x65\x2d\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x73"
  "\x31\x16\x68\x61\x6e\x64\x6c\x65\x72\x3a\x63\x6c\x6f\x73\x65\x2d"
  "\x62\x72\x61\x63\x6b\x65\x74\x32\x17\x68\x61\x6e\x64\x6c\x65\x72"
  "\x3a\x70\x72\x65\x66\x69\x78\x2d\x6b\x65\x79\x77\x6f\x72\x64\x33"
  "\x10\x68\x61\x6e\x64\x6c\x65\x72\x3a\x63\x6f\x6d\x6d\x65\x6e\x74"
  "\x34\x1b\x68\x61\x6e\x64\x6c\x65\x72\x3a\x6d\x75\x6c\x74\x69\x2d"
  "\x6c\x69\x6e\x65\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x35\x1b\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x36\x0e\x68\x61\x6e\x64\x6c\x65"
  "\x72\x3a\x71\x75\x6f\x74\x65\x37\x13\x68\x61\x6e\x64\x6c\x65\x72"
  "\x3a\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\x38\x10\x68\x61\x6e"
  "\x64\x6c\x65\x72\x3a\x75\x6e\x71\x75\x6f\x74\x65\x39\x0f\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x73\x74\x72\x69\x6e\x67\x3a\x10\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x73\x70\x65\x63\x69\x61\x6c\x3b\x0e\x68"
  "\x61\x6e\x64\x6c\x65\x72\x3a\x66\x61\x6c\x73\x65\x3c\x0d\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x74\x72\x75\x65\x3d\x13\x68\x61\x6e\x64"
  "\x6c\x65\x72\x3a\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x3e\x0d"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x63\x68\x61\x72\x3f\x17\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x6e\x61\x6d\x65\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x40\x0f\x68\x61\x6e\x64\x6c\x65\x72\x3a\x75\x6e"
  "\x68\x61\x73\x68\x41\x14\x68\x61\x6e\x64\x6c\x65\x72\x3a\x73\x70"
  "\x65\x63\x69\x61\x6c\x2d\x61\x72\x67\x42\x1e\x1e\x04\x14\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63"
  "\x65\x04\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x03\x11\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x05\x0f\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x43\x04\x43"
  "\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x03\x11\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\x04"
  "\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x43\x04\x12\x6d\x61\x6b\x65"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x02\x1a\x6d"
  "\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x02\x1c\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x73\x21\x44\x0c\xaa\x02\xbe\x01\x81\x81\x02\xa9\x02"
  "\xbc\x01\x81\x81\x02\xa8\x02\xba\x01\x81\x81\x02\xa7\x02\xb8\x01"
  "\x81\x81\x02\xa6\x02\xb6\x01\x81\x81\x02\xa5\x02\xb4\x01\x81\x81"
  "\x02\xa4\x02\xb2\x01\x81\x8d\x02\xa3\x02\xb0\x01\x81\x8d\x02\xa2"
  "\x02\xae\x01\x81\x8d\x02\xa1\x02\xac\x01\x81\x8d\x02\xa0\x02\xaa"
  "\x01\x81\x8d\x02\x9f\x02\xa8\x01\x81\x8d\x02\x9e\x02\xa6\x01\x81"
  "\x8d\x02\x9d\x02\xa4\x01\x81\x8d\x02\x9c\x02\xa2\x01\x81\x91\x02"
  "\x9b\x02\xa0\x01\x81\x91\x02\x9a\x02\x9e\x01\x81\x91\x02\x99\x02"
  "\x9c\x01\x81\x95\x02\x98\x02\x9a\x01\x81\x93\x02\x97\x02\x98\x01"
  "\x81\x91\x02\x96\x02\x96\x01\x81\x93\x02\x95\x02\x94\x01\x81\x91"
  "\x02\x94\x02\x92\x01\x81\x93\x02\x93\x02\x90\x01\x81\x91\x02\x92"
  "\x02\x8e\x01\x81\x93\x02\x91\x02\x8c\x01\x81\x91\x02\x90\x02\x8a"
  "\x01\x81\x93\x02\x8f\x02\x88\x01\x81\x91\x02\x8e\x02\x86\x01\x81"
  "\x93\x02\x8d\x02\x84\x01\x81\x91\x02\x8c\x02\x82\x01\x81\x93\x02"
  "\x8b\x02\x80\x01\x81\x91\x02\x8a\x02\x7e\x81\x93\x02\x89\x02\x7c"
  "\x81\x91\x02\x88\x02\x7a\x81\x93\x02\x87\x02\x78\x81\x91\x02\x86"
  "\x02\x76\x81\x93\x02\x85\x02\x74\x81\x91\x02\x84\x02\x72\x81\x93"
  "\x02\x83\x02\x70\x81\x91\x02\x82\x02\x6e\x81\x93\x02\x81\x02\x6c"
  "\x81\x91\x02\x80\x02\x6a\x81\x93\x02\xff\x01\x68\x81\x91\x02\xfe"
  "\x01\x66\x81\x93\x02\xfd\x01\x64\x81\x91\x02\xfc\x01\x62\x81\x93"
  "\x02\xfb\x01\x60\x81\x91\x02\xfa\x01\x5e\x81\x93\x02\xf9\x01\x5c"
  "\x81\x91\x02\xf8\x01\x5a\x81\x93\x02\xf7\x01\x58\x81\x91\x02\xf6"
  "\x01\x56\x81\x93\x02\xf5\x01\x54\x81\x91\x02\xf4\x01\x52\x81\x93"
  "\x02\xf3\x01\x50\x81\x91\x02\xf2\x01\x4e\x81\x93\x02\xf1\x01\x4c"
  "\x81\x91\x02\xf0\x01\x4a\x81\x93\x02\xef\x01\x48\x81\x91\x02\xee"
  "\x01\x46\x81\x93\x02\xed\x01\x44\x81\x91\x02\xec\x01\x42\x81\x87"
  "\x02\xeb\x01\x40\x81\x87\x02\xea\x01\x3e\x81\x93\x02\xe9\x01\x3c"
  "\x81\x91\x02\xe8\x01\x3a\x81\x85\x02\xe7\x01\x38\x81\x93\x02\xe6"
  "\x01\x36\x81\x91\x02\xe5\x01\x34\x81\x87\x02\xe4\x01\x32\x81\x93"
  "\x02\xe3\x01\x30\x81\x91\x02\xe2\x01\x2e\x81\x87\x02\xe1\x01\x2c"
  "\x81\x93\x02\xe0\x01\x2a\x81\x91\x02\xdf\x01\x28\x81\x95\x02\xde"
  "\x01\x26\x81\x93\x02\xdd\x01\x24\x81\x8f\x02\xdc\x01\x22\x81\x8d"
  "\x02\xdb\x01\x20\x81\x8b\x02\xda\x01\x1e\x81\x8b\x02\xd9\x01\x1c"
  "\x81\x89\x02\xd8\x01\x1a\x81\x8b\x02\xd7\x01\x18\x81\x89\x02\xd6"
  "\x01\x16\x81\x87\x02\xd5\x01\x14\x81\x89\x02\xd4\x01\x12\x81\x87"
  "\x02\xd3\x01\x10\x81\x85\x02\xd2\x01\x0e\x81\x85\x02\xd1\x01\x0c"
  "\x81\x83\x02\xd0\x01\x0a\x81\x81\x02\xcf\x01\x08\x81\x85\x02\xce"
  "\x01\x06\x81\x83\x02\xcd\x01\x04\x82\x02\xbd\x01\xa0\x02\x45\x02"
  "\x0b\x14\x02\xac\x02\x06\x81\x89\x02\xab\x02\x04\x86\x0a\x05\x0a"
  "\x46\x02\x0c\x01\x2b\x01\x2e\x01\x0b\x0c\x09\x14\x03\x04\x0d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x6c\x69\x6e\x65\x47\x04\x15\x05\x1b"
  "\x70\x61\x72\x73\x65\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x6c\x69\x6e\x65\x48\x04\x18\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x49\x05\xc2\x02\x2e\x81\x8f\x02\xc1\x02\x2c\x81"
  "\x8b\x02\xc0\x02\x2a\x81\x8b\x02\xbf\x02\x28\x81\x8b\x02\xbe\x02"
  "\x26\x81\x8b\x02\xbd\x02\x24\x81\x8b\x02\xbc\x02\x22\x81\x8b\x02"
  "\xbb\x02\x20\x81\x8b\x02\xba\x02\x1e\x81\x89\x02\xb9\x02\x1c\x81"
  "\x89\x02\xb8\x02\x1a\x81\x8b\x02\xb7\x02\x18\x81\x8b\x02\xb6\x02"
  "\x16\x81\x8d\x02\xb5\x02\x14\x81\x89\x02\xb4\x02\x12\x81\x8b\x02"
  "\xb3\x02\x10\x81\x89\x02\xb2\x02\x0e\x81\x8b\x02\xb1\x02\x0c\x81"
  "\x89\x02\xb0\x02\x0a\x81\x89\x02\xaf\x02\x08\x81\x89\x02\xae\x02"
  "\x06\x81\x8b\x02\xad\x02\x04\x86\x0a\x2d\x46\x4a\x02\x0d\x01\x2b"
  "\x01\x2e\x01\x0b\x01\x7d\x01\x24\x14\x03\x04\x47\x04\x19\x05\x48"
  "\x04\x49\x05\xe3\x02\x44\x81\x91\x02\xe2\x02\x42\x81\x8f\x02\xe1"
  "\x02\x40\x81\x8d\x02\xe0\x02\x3e\x81\x8f\x02\xdf\x02\x3c\x81\x8b"
  "\x02\xde\x02\x3a\x81\x8f\x02\xdd\x02\x38\x81\x8f\x02\xdc\x02\x36"
  "\x81\x8b\x02\xdb\x02\x34\x81\x8f\x02\xda\x02\x32\x81\x8b\x02\xd9"
  "\x02\x30\x81\x8d\x02\xd8\x02\x2e\x81\x8f\x02\xd7\x02\x2c\x81\x8b"
  "\x02\xd6\x02\x2a\x81\x91\x02\xd5\x02\x28\x81\x8f\x02\xd4\x02\x26"
  "\x81\x91\x02\xd3\x02\x24\x81\x91\x02\xd2\x02\x22\x81\x8f\x02\xd1"
  "\x02\x20\x81\x8b\x02\xd0\x02\x1e\x81\x8b\x02\xcf\x02\x1c\x81\x8b"
  "\x02\xce\x02\x1a\x81\x8f\x02\xcd\x02\x18\x81\x8f\x02\xcc\x02\x16"
  "\x81\x8f\x02\xcb\x02\x14\x81\x8b\x02\xca\x02\x12\x81\x8f\x02\xc9"
  "\x02\x10\x81\x8b\x02\xc8\x02\x0e\x81\x8f\x02\xc7\x02\x0c\x81\x8b"
  "\x02\xc6\x02\x0a\x81\x8b\x02\xc5\x02\x08\x81\x8b\x02\xc4\x02\x06"
  "\x81\x8d\x02\xc3\x02\x04\x87\x0c\x43\x5d\x48\x02\x0e\x10\x14\x02"
  "\x05\x11\x02\xe6\x02\x08\x81\x8b\x02\xe5\x02\x06\x81\x8b\x02\xe4"
  "\x02\x04\x87\x0c\x07\x10\x4b\x02\x0f\x08\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6c\x65\x6e\x67\x74\x68\x4c\x07\x73\x75\x66\x66\x69\x78"
  "\x4d\x01\x3b\x05\x0b\x70\x61\x72\x73\x65\x2d\x61\x74\x6f\x6d\x4e"
  "\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x4f\x04\x0f"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x50\x03"
  "\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c\x51"
  "\x03\x10\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6b\x65\x79\x77\x6f\x72"
  "\x64\x52\x06\xef\x02\x14\x81\x89\x02\xee\x02\x12\x81\x89\x02\xed"
  "\x02\x10\x81\x8b\x02\xec\x02\x0e\x81\x8b\x02\xeb\x02\x0c\x81\x8b"
  "\x02\xea\x02\x0a\x81\x89\x02\xe9\x02\x08\x81\x89\x02\xe8\x02\x06"
  "\x81\x89\x02\xe7\x02\x04\x86\x0a\x13\x28\x53\x02\x10\x4c\x4d\x01"
  "\x3b\x05\x4e\x04\x4f\x03\x51\x03\x52\x05\xf8\x02\x14\x81\x89\x02"
  "\xf7\x02\x12\x81\x8b\x02\xf6\x02\x10\x81\x8b\x02\xf5\x02\x0e\x81"
  "\x89\x02\xf4\x02\x0c\x81\x89\x02\xf3\x02\x0a\x81\x89\x02\xf2\x02"
  "\x08\x81\x89\x02\xf1\x02\x06\x81\x89\x02\xf0\x02\x04\x86\x0a\x13"
  "\x26\x51\x02\x11\x02\x3a\x4c\x07\x70\x72\x65\x66\x69\x78\x4f\x05"
  "\x4e\x06\x2c\x03\x52\x04\xfe\x02\x0e\x81\x87\x02\xfd\x02\x0c\x81"
  "\x87\x02\xfc\x02\x0a\x85\x08\xfb\x02\x08\x81\x89\x02\xfa\x02\x06"
  "\x81\x89\x02\xf9\x02\x04\x86\x0a\x0d\x1d\x52\x02\x12\x05\x0d\x70"
  "\x61\x72\x73\x65\x2d\x6e\x75\x6d\x62\x65\x72\x54\x02\xff\x02\x04"
  "\x87\x0c\x03\x0a\x55\x02\x13\x08\x05\x16\x70\x61\x72\x73\x65\x2d"
  "\x61\x74\x6f\x6d\x2f\x6e\x6f\x2d\x71\x75\x6f\x74\x69\x6e\x67\x56"
  "\x04\x50\x03\x15\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x50\x04\x83\x03\x0a\x81\x89\x02"
  "\x82\x03\x08\x81\x8b\x02\x81\x03\x06\x81\x87\x02\x80\x03\x04\x85"
  "\x08\x09\x15\x57\x02\x14\x06\x0d\x70\x61\x72\x73\x65\x2d\x61\x74"
  "\x6f\x6d\x2d\x31\x58\x02\x84\x03\x04\x85\x08\x03\x0a\x59\x02\x15"
  "\x06\x58\x02\x85\x03\x04\x85\x08\x03\x5a\x02\x16\x0e\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x3e\x63\x68\x61\x72\x5b\x0e\x76\x65\x63\x74"
  "\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x1b\x01\x5d\x01\x7d\x04\x63"
  "\x64\x72\x1b\x0e\x0c\x09\x04\x63\x61\x72\x5c\x0f\x69\x64\x65\x6e"
  "\x74\x69\x74\x79\x2d\x74\x61\x62\x6c\x65\x0f\x64\x6f\x77\x6e\x63"
  "\x61\x73\x65\x2d\x74\x61\x62\x6c\x65\x03\x02\x13\x6f\x70\x65\x6e"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x04\x11"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f"
  "\x5d\x03\x12\x67\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x03\x1c\x04\x0c\x25\x77\x72\x69\x74\x65\x2d\x63"
  "\x68\x61\x72\x5e\x04\x15\x04\x19\x08\xaa\x03\x4c\x81\x97\x02\xa9"
  "\x03\x4a\x81\x93\x02\xa8\x03\x48\x81\x91\x02\xa7\x03\x46\x81\x97"
  "\x02\xa6\x03\x44\x81\x97\x02\xa5\x03\x42\x81\x97\x02\xa4\x03\x40"
  "\x81\x91\x02\xa3\x03\x3e\x81\x85\x02\xa2\x03\x3c\x81\x83\x02\xa1"
  "\x03\x3a\x81\x83\x02\xa0\x03\x38\x81\x9b\x02\x9f\x03\x36\x81\x97"
  "\x02\x9e\x03\x34\x81\x97\x02\x9d\x03\x32\x81\x85\x02\x9c\x03\x30"
  "\x81\x85\x02\x9b\x03\x2e\x81\x83\x02\x9a\x03\x2c\x81\x81\x02\x99"
  "\x03\x2a\x81\x97\x02\x98\x03\x28\x81\x97\x02\x97\x03\x26\x81\x9b"
  "\x02\x96\x03\x24\x81\x97\x02\x95\x03\x22\x81\x97\x02\x94\x03\x20"
  "\x81\x83\x02\x93\x03\x1e\x81\x97\x02\x92\x03\x1c\x81\x97\x02\x91"
  "\x03\x1a\x81\x87\x02\x90\x03\x18\x81\x83\x02\x8f\x03\x16\x81\x97"
  "\x02\x8e\x03\x14\x81\x83\x02\x8d\x03\x12\x81\x91\x02\x8c\x03\x10"
  "\x81\x8f\x02\x8b\x03\x0e\x81\x8d\x02\x8a\x03\x0c\x81\x8d\x02\x89"
  "\x03\x0a\x81\x8d\x02\x88\x03\x08\x81\x8b\x02\x87\x03\x06\x81\x89"
  "\x02\x86\x03\x04\x86\x0a\x4b\x70\x5f\x02\x17\x0f\x63\x6c\x6f\x73"
  "\x65\x2d\x70\x61\x72\x65\x6e\x2d\x6f\x6b\x60\x12\x63\x6c\x6f\x73"
  "\x65\x2d\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x73\x61\x02\x05"
  "\x11\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x62\x03\x0d\x66\x69"
  "\x78\x2d\x75\x70\x2d\x6c\x69\x73\x74\x21\x63\x04\xb0\x03\x0e\x81"
  "\x83\x02\xaf\x03\x0c\x81\x8d\x02\xae\x03\x0a\x81\x8d\x02\xad\x03"
  "\x08\x81\x8b\x02\xac\x03\x06\x81\x8b\x02\xab\x03\x04\x86\x0a\x0d"
  "\x1b\x64\x02\x18\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x02\x1b\x02"
  "\x2e\x5c\x03\x18\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x64\x6f\x74\x2d\x75\x73\x61\x67\x65\x65\x02\xba\x03\x16"
  "\x81\x87\x02\xb9\x03\x14\x81\x87\x02\xb8\x03\x12\x81\x87\x02\xb7"
  "\x03\x10\x81\x87\x02\xb6\x03\x0e\x81\x87\x02\xb5\x03\x0c\x81\x87"
  "\x02\xb4\x03\x0a\x81\x87\x02\xb3\x03\x08\x81\x87\x02\xb2\x03\x06"
  "\x81\x87\x02\xb1\x03\x04\x83\x04\x15\x21\x66\x02\x19\x60\x61\x02"
  "\x05\x11\x03\x62\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74"
  "\x6f\x72\x04\xbf\x03\x0c\x81\x8f\x02\xbe\x03\x0a\x81\x8f\x02\xbd"
  "\x03\x08\x81\x8d\x02\xbc\x03\x06\x81\x8d\x02\xbb\x03\x04\x87\x0c"
  "\x0b\x19\x67\x02\x1a\x60\x19\x69\x67\x6e\x6f\x72\x65\x2d\x65\x78"
  "\x74\x72\x61\x2d\x6c\x69\x73\x74\x2d\x63\x6c\x6f\x73\x65\x73\x60"
  "\x14\x61\x04\x03\x12\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x2f\x6f"
  "\x2d\x70\x6f\x72\x74\x3f\x03\x17\x65\x72\x72\x6f\x72\x3a\x75\x6e"
  "\x62\x61\x6c\x61\x6e\x63\x65\x64\x2d\x63\x6c\x6f\x73\x65\x03\xc4"
  "\x03\x0c\x81\x89\x02\xc3\x03\x0a\x86\x0a\xc2\x03\x08\x81\x89\x02"
  "\xc1\x03\x06\x81\x89\x02\xc0\x03\x04\x81\x89\x02\x0b\x19\x68\x02"
  "\x1b\x11\x63\x6c\x6f\x73\x65\x2d\x62\x72\x61\x63\x6b\x65\x74\x2d"
  "\x6f\x6b\x69\x0e\x63\x6c\x6f\x73\x65\x2d\x62\x72\x61\x63\x6b\x65"
  "\x74\x6a\x02\x03\x02\xc7\x03\x08\x81\x89\x02\xc6\x03\x06\x86\x0a"
  "\xc5\x03\x04\x81\x89\x02\x07\x10\x6b\x02\x1c\x1b\x5c\x69\x6a\x29"
  "\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x65\x72\x72\x6f\x72\x69\x04\x05\x11\x03\x62\x05\x0f\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x62\x03\x11\x69\x6e"
  "\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x3f\x05\x17"
  "\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68"
  "\x61\x6e\x64\x6c\x65\x72\x03\x1c\x65\x72\x72\x6f\x72\x3a\x69\x6c"
  "\x6c\x65\x67\x61\x6c\x2d\x68\x61\x73\x68\x65\x64\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x6c\x03\x0d\x70\x61\x72\x73\x65\x2d\x75\x6e\x68\x61"
  "\x73\x68\x6d\x08\xd9\x03\x26\x81\x85\x02\xd8\x03\x24\x81\x85\x02"
  "\xd7\x03\x22\x81\x85\x02\xd6\x03\x20\x84\x06\xd5\x03\x1e\x81\x85"
  "\x02\xd4\x03\x1c\x81\x83\x02\xd3\x03\x1a\x81\x83\x02\xd2\x03\x18"
  "\x81\x87\x02\xd1\x03\x16\x81\x89\x02\xd0\x03\x14\x81\x8f\x02\xcf"
  "\x03\x12\x81\x85\x02\xce\x03\x10\x81\x8b\x02\xcd\x03\x0e\x81\x89"
  "\x02\xcc\x03\x0c\x81\x87\x02\xcb\x03\x0a\x81\x8f\x02\xca\x03\x08"
  "\x81\x8d\x02\xc9\x03\x06\x81\x8d\x02\xc8\x03\x04\x87\x0c\x25\x3f"
  "\x6e\x02\x1d\x26\x64\x65\x66\x69\x6e\x65\x2d\x62\x72\x61\x63\x6b"
  "\x65\x74\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x6f\x29\x02\x04\x1a\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x05\x1d\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x66\x2d"
  "\x61\x72\x69\x74\x79\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x2f\x70\x75\x74\x21\x70\x04\xdd\x03\x0a\x81\x85\x02\xdc\x03"
  "\x08\x81\x85\x02\xdb\x03\x06\x81\x85\x02\xda\x03\x04\x84\x06\x09"
  "\x17\x71\x02\x1e\x05\x54\x03\x0f\x6d\x61\x6b\x65\x2d\x71\x75\x6f"
  "\x74\x61\x74\x69\x6f\x6e\x03\x6d\x04\xe0\x03\x08\x81\x8d\x02\xdf"
  "\x03\x06\x81\x8b\x02\xde\x03\x04\x87\x0c\x07\x12\x72\x02\x1f\x03"
  "\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x15\x65\x72\x72"
  "\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x75\x6e\x68\x61\x73"
  "\x68\x73\x03\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x75\x6e\x68\x61\x73"
  "\x68\x03\x15\x65\x72\x72\x6f\x72\x3a\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x2d\x68\x61\x73\x68\x74\x05\xe4\x03\x0a\x81\x83\x02\xe3"
  "\x03\x08\x81\x83\x02\xe2\x03\x06\x81\x83\x02\xe1\x03\x04\x83\x04"
  "\x09\x16\x75\x02\x20\x06\x71\x75\x6f\x74\x65\x76\x10\x05\x11\x02"
  "\xe6\x03\x06\x81\x89\x02\xe5\x03\x04\x86\x0a\x05\x0e\x77\x02\x21"
  "\x0b\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\x10\x05\x11\x02\xe8"
  "\x03\x06\x81\x89\x02\xe7\x03\x04\x86\x0a\x05\x0e\x78\x02\x22\x11"
  "\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73\x70\x6c\x69\x63\x69\x6e\x67"
  "\x08\x75\x6e\x71\x75\x6f\x74\x65\x10\x01\x41\x04\x12\x25\x70\x65"
  "\x65\x6b\x2d\x63\x68\x61\x72\x2f\x6e\x6f\x2d\x65\x6f\x66\x79\x04"
  "\x15\x05\x11\x04\xed\x03\x0c\x81\x89\x02\xec\x03\x0a\x81\x89\x02"
  "\xeb\x03\x08\x81\x89\x02\xea\x03\x06\x81\x89\x02\xe9\x03\x04\x86"
  "\x0a\x0b\x1a\x7a\x02\x23\x01\x6f\x01\x0b\x01\x75\x01\x0a\x01\x77"
  "\x01\x0c\x01\x63\x01\x09\x01\x73\x01\x0e\x01\x67\x01\x0d\x01\x62"
  "\x01\x08\x09\x01\x5d\x02\x01\x23\x03\x18\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x7b\x04\x19\x04\x5e\x05\x0c\x6f\x63\x74\x61\x6c\x2d\x3e\x63"
  "\x68\x61\x72\x7c\x04\x0c\x63\x68\x61\x72\x2d\x3e\x64\x69\x67\x69"
  "\x74\x7d\x04\x0a\x63\x68\x61\x72\x2d\x63\x69\x3d\x3f\x07\xfd\x03"
  "\x22\x81\x87\x02\xfc\x03\x20\x81\x89\x02\xfb\x03\x1e\x81\x87\x02"
  "\xfa\x03\x1c\x81\x83\x02\xf9\x03\x1a\x81\x83\x02\xf8\x03\x18\x81"
  "\x83\x02\xf7\x03\x16\x81\x83\x02\xf6\x03\x14\x81\x83\x02\xf5\x03"
  "\x12\x81\x83\x02\xf4\x03\x10\x81\x83\x02\xf3\x03\x0e\x81\x83\x02"
  "\xf2\x03\x0c\x81\x87\x02\xf1\x03\x0a\x81\x85\x02\xf0\x03\x08\x81"
  "\x85\x02\xef\x03\x06\x81\x85\x02\xee\x03\x04\x86\x0a\x21\x43\x7e"
  "\x02\x24\x5b\x09\x04\x7d\x03\x1c\x04\x19\x04\x86\x04\x14\x81\x8f"
  "\x02\x85\x04\x12\x81\x91\x02\x84\x04\x10\x81\x8d\x02\x83\x04\x0e"
  "\x81\x8b\x02\x82\x04\x0c\x81\x8d\x02\x81\x04\x0a\x81\x89\x02\x80"
  "\x04\x08\x81\x87\x02\xff\x03\x06\x81\x89\x02\xfe\x03\x04\x85\x08"
  "\x13\x1f\x5b\x02\x25\x03\x23\x66\x05\x56\x03\x16\x65\x72\x72\x6f"
  "\x72\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x62\x6f\x6f\x6c\x65\x61"
  "\x6e\x7f\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x3d\x3f\x80"
  "\x01\x04\x8a\x04\x0a\x81\x8d\x02\x89\x04\x08\x81\x8b\x02\x88\x04"
  "\x06\x81\x83\x02\x87\x04\x04\x87\x0c\x09\x15\x81\x01\x02\x26\x03"
  "\x23\x74\x05\x56\x03\x7f\x04\x80\x01\x04\x8e\x04\x0a\x81\x8d\x02"
  "\x8d\x04\x08\x81\x8b\x02\x8c\x04\x06\x81\x83\x02\x8b\x04\x04\x87"
  "\x0c\x09\x16\x82\x01\x02\x27\x1d\x75\x6e\x73\x69\x67\x6e\x65\x64"
  "\x2d\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x01\x32\x01\x31\x0b\x73\x74\x72\x69\x6e\x67\x2d"
  "\x72\x65\x66\x4c\x05\x56\x03\x19\x65\x72\x72\x6f\x72\x3a\x69\x6c"
  "\x6c\x65\x67\x61\x6c\x2d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x4c\x03\x96\x04\x12\x81\x89\x02\x95\x04\x10\x81\x8b\x02\x94\x04"
  "\x0e\x81\x8b\x02\x93\x04\x0c\x81\x89\x02\x92\x04\x0a\x81\x89\x02"
  "\x91\x04\x08\x81\x83\x02\x90\x04\x06\x81\x8b\x02\x8f\x04\x04\x87"
  "\x0c\x11\x22\x83\x01\x02\x28\x02\x01\x5d\x0c\x09\x0e\x04\x19\x04"
  "\x5d\x03\x7b\x03\x0b\x6e\x61\x6d\x65\x2d\x3e\x63\x68\x61\x72\x04"
  "\x5e\x06\xa9\x04\x28\x81\x85\x02\xa8\x04\x26\x81\x89\x02\xa7\x04"
  "\x24\x81\x8b\x02\xa6\x04\x22\x81\x85\x02\xa5\x04\x20\x81\x85\x02"
  "\xa4\x04\x1e\x81\x85\x02\xa3\x04\x1c\x81\x85\x02\xa2\x04\x1a\x81"
  "\x8f\x02\xa1\x04\x18\x81\x87\x02\xa0\x04\x16\x81\x85\x02\x9f\x04"
  "\x14\x81\x83\x02\x9e\x04\x12\x81\x8f\x02\x9d\x04\x10\x81\x8f\x02"
  "\x9c\x04\x0e\x81\x87\x02\x9b\x04\x0c\x81\x83\x02\x9a\x04\x0a\x81"
  "\x93\x02\x99\x04\x08\x81\x8d\x02\x98\x04\x06\x81\x83\x02\x97\x04"
  "\x04\x87\x0c\x27\x3e\x7b\x02\x29\x02\x0b\x75\x6e\x73\x70\x65\x63"
  "\x69\x66\x69\x63\x0c\x09\x08\x64\x65\x66\x61\x75\x6c\x74\x04\x65"
  "\x6f\x66\x04\x61\x75\x78\x04\x6b\x65\x79\x05\x72\x65\x73\x74\x09"
  "\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x05\x74\x72\x75\x65\x06\x66\x61"
  "\x6c\x73\x65\x05\x6e\x75\x6c\x6c\x14\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x74\x61\x67\x3a\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x10\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x74\x61\x67\x3a\x72\x65\x73\x74\x0f\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x74\x61\x67\x3a\x6b\x65\x79\x0f\x6c\x61\x6d\x62"
  "\x64\x61\x2d\x74\x61\x67\x3a\x61\x75\x78\x05\x05\x56\x04\x80\x01"
  "\x02\x0f\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x03\x1d\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d"
  "\x6e\x61\x6d\x65\x64\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x5e\x05"
  "\xb9\x04\x22\x81\x83\x02\xb8\x04\x20\x81\x83\x02\xb7\x04\x1e\x81"
  "\x83\x02\xb6\x04\x1c\x81\x83\x02\xb5\x04\x1a\x81\x83\x02\xb4\x04"
  "\x18\x81\x83\x02\xb3\x04\x16\x81\x83\x02\xb2\x04\x14\x81\x83\x02"
  "\xb1\x04\x12\x81\x83\x02\xb0\x04\x10\x81\x83\x02\xaf\x04\x0e\x81"
  "\x83\x02\xae\x04\x0c\x81\x83\x02\xad\x04\x0a\x81\x83\x02\xac\x04"
  "\x08\x81\x83\x02\xab\x04\x06\x81\x8b\x02\xaa\x04\x04\x87\x0c\x21"
  "\x42\x5d\x02\x2a\x01\x24\x10\x01\x3e\x0b\x04\x7d\x04\x19\x03\x0e"
  "\x63\x68\x61\x72\x2d\x6e\x75\x6d\x65\x72\x69\x63\x3f\x05\x11\x04"
  "\x12\x67\x65\x74\x2d\x73\x68\x61\x72\x65\x64\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x7d\x03\x1c\x05\x14\x73\x61\x76\x65\x2d\x73\x68\x61\x72"
  "\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x21\x84\x01\x08\xc3\x04\x16"
  "\x81\x8f\x02\xc2\x04\x14\x81\x8f\x02\xc1\x04\x12\x81\x8f\x02\xc0"
  "\x04\x10\x81\x91\x02\xbf\x04\x0e\x81\x8f\x02\xbe\x04\x0c\x81\x8f"
  "\x02\xbd\x04\x0a\x81\x8d\x02\xbc\x04\x08\x81\x8d\x02\xbb\x04\x06"
  "\x81\x8b\x02\xba\x04\x04\x87\x0c\x15\x2b\x85\x01\x02\x2b\x02\x1b"
  "\x6d\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e\x67\x2d\x65\x71\x76\x2d"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x02\xc4\x04\x04\x82\x02"
  "\x03\x86\x01\x02\x2c\x0a\x12\x6e\x6f\x6e\x2d\x73\x68\x61\x72\x65"
  "\x64\x2d\x6f\x62\x6a\x65\x63\x74\x87\x01\x02\x05\x62\x05\x70\x04"
  "\x17\x65\x72\x72\x6f\x72\x3a\x72\x65\x2d\x73\x68\x61\x72\x65\x64"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x70\x04\xca\x04\x0e\x81\x8b\x02\xc9"
  "\x04\x0c\x81\x89\x02\xc8\x04\x0a\x81\x8d\x02\xc7\x04\x08\x81\x89"
  "\x02\xc6\x04\x06\x81\x87\x02\xc5\x04\x04\x85\x08\x0d\x1b\x88\x01"
  "\x02\x2d\x0a\x87\x01\x02\x05\x62\x03\x18\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x6e\x2d\x73\x68\x61\x72\x65\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x62\x03\xd0\x04\x0e\x81\x87\x02\xcf\x04\x0c\x81\x85\x02\xce"
  "\x04\x0a\x81\x87\x02\xcd\x04\x08\x81\x8b\x02\xcc\x04\x06\x81\x87"
  "\x02\xcb\x04\x04\x84\x06\x0d\x19\x89\x01\x02\x2e\x0f\x0b\xd6\x04"
  "\x0e\x81\x87\x02\xd5\x04\x0c\x81\x89\x02\xd4\x04\x0a\x81\x8b\x02"
  "\xd3\x04\x08\x81\x87\x02\xd2\x04\x06\x81\x85\x02\xd1\x04\x04\x84"
  "\x06\x0d\x13\x8a\x01\x02\x2f\x0c\x09\x04\x15\x03\x0d\x03\xda\x04"
  "\x0a\x81\x87\x02\xd9\x04\x08\x81\x87\x02\xd8\x04\x06\x81\x85\x02"
  "\xd7\x04\x04\x84\x06\x09\x14\x8b\x01\x02\x30\x0e\xde\x04\x0a\x81"
  "\x85\x02\xdd\x04\x08\x81\x89\x02\xdc\x04\x06\x81\x85\x02\xdb\x04"
  "\x04\x84\x06\x09\x0e\x8c\x01\x02\x31\x0c\x09\x0e\x03\x0d\x02\xe4"
  "\x04\x0e\x81\x87\x02\xe3\x04\x0c\x81\x87\x02\xe2\x04\x0a\x81\x85"
  "\x02\xe1\x04\x08\x81\x89\x02\xe0\x04\x06\x81\x85\x02\xdf\x04\x04"
  "\x84\x06\x0d\x18\x8d\x01\x02\x32\xe5\x04\x04\x83\x04\x03\x8e\x01"
  "\x02\x33\xe6\x04\x04\x83\x04\x03\x8f\x01\x02\x34\xe7\x04\x04\x83"
  "\x04\x03\x90\x01\x02\x35\xe8\x04\x04\x83\x04\x03\x91\x01\x02\x36"
  "\xe9\x04\x04\x83\x04\x03\x92\x01\x02\x37\xea\x04\x04\x83\x04\x03"
  "\x93\x01\x02\x38\x08\xeb\x04\x04\x83\x04\x03\x94\x01\x02\x39\x09"
  "\xec\x04\x04\x83\x04\x03\x95\x01\x02\x3a\x0a\xed\x04\x04\x83\x04"
  "\x03\x96\x01\x02\x3b\x0b\xee\x04\x04\x83\x04\x03\x97\x01\x02\x3c"
  "\x0c\xef\x04\x04\x83\x04\x03\x98\x01\x02\x3d\x0d\xf0\x04\x04\x83"
  "\x04\x03\x99\x01\x02\x3e\x0e\xf1\x04\x04\x83\x04\x03\x9a\x01\x02"
  "\x3f\x0f\xf2\x04\x04\x83\x04\x03\x9b\x01\x02\x40\x10\xf3\x04\x04"
  "\x83\x04\x03\x9c\x01\x02\x41\x13\x02\x10\xf4\x04\x04\x84\x06\x03"
  "\x9d\x01\x02\x42\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x9e\x01\x02\xf8\x04\x0a"
  "\x81\x85\x02\xf7\x04\x08\x81\x83\x02\xf6\x04\x06\x81\x83\x02\xf5"
  "\x04\x04\x83\x04\x09\x12\x9f\x01\x02\x43\x0a\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\xa0\x01\x0a\x70\x65\x65\x6b\x2d\x63\x68\x61\x72"
  "\xa1\x01\x0b\x69\x6e\x70\x75\x74\x2d\x6c\x69\x6e\x65\xa2\x01\x1e"
  "\x2a\x70\x61\x72\x73\x65\x72\x2d\x61\x73\x73\x6f\x63\x69\x61\x74"
  "\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x73\x3f\x2a\xa3\x01\x1f"
  "\x2a\x70\x61\x72\x73\x65\x72\x2d\x63\x61\x6e\x6f\x6e\x69\x63\x61"
  "\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x2a\xa4\x01"
  "\x29\x2a\x70\x61\x72\x73\x65\x72\x2d\x65\x6e\x61\x62\x6c\x65\x2d"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d"
  "\x70\x61\x72\x73\x69\x6e\x67\x3f\x2a\xa5\x01\x17\x2a\x70\x61\x72"
  "\x73\x65\x72\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x73\x74\x79\x6c"
  "\x65\x2a\xa6\x01\x0f\x2a\x70\x61\x72\x73\x65\x72\x2d\x72\x61\x64"
  "\x69\x78\x2a\xa7\x01\x27\x19\x64\x69\x73\x63\x72\x65\x74\x69\x6f"
  "\x6e\x61\x72\x79\x2d\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\xa8"
  "\x01\x24\x23\x08\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x19\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x03\x0e\x70\x61\x72\x73\x65\x72\x2d\x74\x61"
  "\x62\x6c\x65\x3f\x04\x17\x72\x65\x70\x6c\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x6c\x75\x65\xa9\x01\x04\x13"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x04\x02\x14\x6d\x61\x6b\x65\x2d\x73\x68\x61\x72\x65\x64"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x73\xaa\x01\x05\x12\x6f\x76\x65\x72"
  "\x72\x69\x64\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65\xab\x01\x04"
  "\x13\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\xac\x01\x11\x08\x6d\x61\x6b\x65\x2d\x64\x62\xad\x01"
  "\x0b\x8c\x05\x2a\x81\x9f\x02\x8b\x05\x28\x81\x9f\x02\x8a\x05\x26"
  "\x81\x9f\x02\x89\x05\x24\x81\x9f\x02\x88\x05\x22\x81\x9d\x02\x87"
  "\x05\x20\x81\x99\x02\x86\x05\x1e\x81\x95\x02\x85\x05\x1c\x81\x93"
  "\x02\x84\x05\x1a\x81\x91\x02\x83\x05\x18\x81\x8f\x02\x82\x05\x16"
  "\x81\x8d\x02\x81\x05\x14\x81\x8b\x02\x80\x05\x12\x81\x8b\x02\xff"
  "\x04\x10\x81\x8b\x02\xfe\x04\x0e\x81\x89\x02\xfd\x04\x0c\x81\x87"
  "\x02\xfc\x04\x0a\x81\x85\x02\xfb\x04\x08\x81\x87\x02\xfa\x04\x06"
  "\x84\x06\xf9\x04\x04\x81\x87\x02\x29\x4f\xae\x01\x02\x44\x05\x75"
  "\x73\x65\x72\x05\x16\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6f\x72\x03\x0e\x2d\x3e\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x13\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x04\x90\x05"
  "\x0a\x81\x83\x02\x8f\x05\x08\x81\x85\x02\x8e\x05\x06\x81\x83\x02"
  "\x8d\x05\x04\x84\x06\x09\x14\xaf\x01\x02\x45\x14\x6e\x6f\x2d\x6f"
  "\x76\x65\x72\x72\x69\x64\x64\x65\x6e\x2d\x76\x61\x6c\x75\x65\x05"
  "\x12\x70\x6f\x72\x74\x2f\x67\x65\x74\x2d\x70\x72\x6f\x70\x65\x72"
  "\x74\x79\x04\xa9\x01\x03\x92\x05\x06\x81\x87\x02\x91\x05\x04\x85"
  "\x08\x05\x0e\xb0\x01\x02\x46\x09\x70\x6f\x73\x69\x74\x69\x6f\x6e"
  "\xa3\x01\x04\xa9\x01\x04\x03\x96\x05\x0a\x83\x04\x95\x05\x08\x81"
  "\x85\x02\x94\x05\x06\x81\x85\x02\x93\x05\x04\x84\x06\x09\x13\x02"
  "\x47\x0d\x98\x05\x06\x81\x85\x02\x97\x05\x04\x84\x06\x05\x0a\xb1"
  "\x01\x02\x48\x0c\x9a\x05\x06\x81\x87\x02\x99\x05\x04\x84\x06\x05"
  "\x0a\xb2\x01\x02\x49\x02\x13\x10\x03\x17\x02\x9d\x05\x08\x85\x08"
  "\x9c\x05\x06\x81\x87\x02\x9b\x05\x04\x81\x87\x02\x07\x11\x17\x02"
  "\x4a\x10\xa0\x05\x08\x81\x85\x02\x9f\x05\x06\x81\x85\x02\x9e\x05"
  "\x04\x84\x06\x07\x0d\x13\x02\x4b\xa5\x01\x02\x05\x13\x70\x6f\x72"
  "\x74\x2f\x73\x65\x74\x2d\x70\x72\x6f\x70\x65\x72\x74\x79\x21\x04"
  "\x1a\x70\x72\x6f\x63\x65\x73\x73\x2d\x6b\x65\x79\x77\x6f\x72\x64"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\xb3\x01\x04\x17\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x6d\x6f\x64\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\xb4\x01\x04\x1e\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x73\x74\x75\x64\x6c\x79\x2d\x63\x61\x73\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\xb5\x01\x05\xa4\x05\x0a\x81\x85\x02\xa3\x05"
  "\x08\x81\x85\x02\xa2\x05\x06\x81\x85\x02\xa1\x05\x04\x84\x06\x09"
  "\x17\xb6\x01\x02\x4c\x05\x06\x61\x73\x73\x6f\x63\x03\x0c\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\xb7\x01\x04\x80\x01\x04\xa8"
  "\x05\x0a\x81\x85\x02\xa7\x05\x08\x81\x85\x02\xa6\x05\x06\x84\x06"
  "\xa5\x05\x04\x84\x06\x09\x13\xb8\x01\x02\x4d\x02\x05\x6e\x6f\x6e"
  "\x65\x07\x70\x72\x65\x66\x69\x78\x07\x73\x75\x66\x66\x69\x78\x25"
  "\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x76\x61\x6c"
  "\x75\x65\x20\x66\x6f\x72\x20\x6b\x65\x79\x77\x6f\x72\x64\x2d\x73"
  "\x74\x79\x6c\x65\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\xb9\x01\x1e\x1b\x4d\x4f\xa6\x01\x06\x66\x61\x6c\x73\x65\x0e"
  "\x6b\x65\x79\x77\x6f\x72\x64\x2d\x73\x74\x79\x6c\x65\x4f\x04\x16"
  "\x6c\x6f\x6f\x6b\x75\x70\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x4d\x05\x04\x05\x77\x61\x72\x6e\xba\x01\x03"
  "\xb7\x01\x04\x80\x01\x06\xb9\x05\x24\x81\x8b\x02\xb8\x05\x22\x81"
  "\x8b\x02\xb7\x05\x20\x81\x8b\x02\xb6\x05\x1e\x81\x8b\x02\xb5\x05"
  "\x1c\x81\x83\x02\xb4\x05\x1a\x81\x83\x02\xb3\x05\x18\x81\x83\x02"
  "\xb2\x05\x16\x81\x87\x02\xb1\x05\x14\x81\x85\x02\xb0\x05\x12\x81"
  "\x87\x02\xaf\x05\x10\x81\x87\x02\xae\x05\x0e\x81\x87\x02\xad\x05"
  "\x0c\x81\x87\x02\xac\x05\x0a\x81\x87\x02\xab\x05\x08\x81\x87\x02"
  "\xaa\x05\x06\x81\x87\x02\xa9\x05\x04\x84\x06\x23\x41\xbb\x01\x02"
  "\x4e\x02\x07\x73\x63\x68\x65\x6d\x65\x16\x55\x6e\x65\x78\x70\x65"
  "\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x6d\x6f\x64\x65\x3a\xb9"
  "\x01\x1e\x1b\x05\x6d\x6f\x64\x65\x04\x4d\x04\xba\x01\x03\xb7\x01"
  "\x04\x80\x01\x05\xc3\x05\x16\x81\x87\x02\xc2\x05\x14\x81\x83\x02"
  "\xc1\x05\x12\x81\x83\x02\xc0\x05\x10\x81\x83\x02\xbf\x05\x0e\x81"
  "\x85\x02\xbe\x05\x0c\x81\x83\x02\xbd\x05\x0a\x81\x85\x02\xbc\x05"
  "\x08\x81\x87\x02\xbb\x05\x06\x81\x83\x02\xba\x05\x04\x84\x06\x15"
  "\x2b\xbc\x01\x02\x4f\x05\x54\x72\x75\x65\x30\x41\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x20\x6e\x61\x6d\x65\x20\x6d\x69\x73\x6d\x61\x74"
  "\x63\x68\x2e\x20\x20\x45\x78\x70\x65\x63\x74\x65\x64\x20\x73\x54"
  "\x75\x44\x6c\x79\x2d\x63\x61\x73\x65\x2e\x2a\x41\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x20\x76\x61\x6c\x75\x65\x20\x6d\x69\x73\x6d\x61"
  "\x74\x63\x68\x2e\x20\x20\x45\x78\x70\x65\x63\x74\x65\x64\x20\x54"
  "\x72\x75\x65\x2e\x02\x05\x74\x72\x75\x65\x06\x66\x61\x6c\x73\x65"
  "\x23\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x76\x61"
  "\x6c\x75\x65\x20\x66\x6f\x72\x20\x73\x54\x75\x44\x6c\x79\x2d\x63"
  "\x61\x73\x65\xa4\x01\xb9\x01\x1e\x5c\x0c\x73\x54\x75\x44\x6c\x79"
  "\x2d\x63\x61\x73\x65\x1b\x0c\x73\x74\x75\x64\x6c\x79\x2d\x63\x61"
  "\x73\x65\x04\x4d\x05\x04\xba\x01\x03\xba\x01\x03\xb7\x01\x04\x80"
  "\x01\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x08\xd7\x05\x2a\x81"
  "\x89\x02\xd6\x05\x28\x81\x89\x02\xd5\x05\x26\x81\x8d\x02\xd4\x05"
  "\x24\x81\x8d\x02\xd3\x05\x22\x81\x83\x02\xd2\x05\x20\x81\x89\x02"
  "\xd1\x05\x1e\x81\x89\x02\xd0\x05\x1c\x81\x89\x02\xcf\x05\x1a\x81"
  "\x8d\x02\xce\x05\x18\x81\x8d\x02\xcd\x05\x16\x81\x83\x02\xcc\x05"
  "\x14\x81\x83\x02\xcb\x05\x12\x81\x8f\x02\xca\x05\x10\x81\x87\x02"
  "\xc9\x05\x0e\x81\x85\x02\xc8\x05\x0c\x81\x89\x02\xc7\x05\x0a\x81"
  "\x89\x02\xc6\x05\x08\x81\x89\x02\xc5\x05\x06\x81\x89\x02\xc4\x05"
  "\x04\x84\x06\x29\x4c\xba\x01\x02\x50\x11\x61\x63\x63\x65\x73\x73"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\xb9\x01\x0a\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\xb7\x01\x06\x62\x65\x67\x69\x6e\x14\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x80\x01\x1b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x70\x61\x72\x73\x65\x2d\x65\x72\x72\x6f\x72\x07"
  "\x6c\x61\x6d\x62\x64\x61\xb7\x01\x05\x70\x6f\x72\x74\xb7\x01\xb7"
  "\x01\x05\x73\x65\x74\x21\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\xbd\x01\x17\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64"
  "\x6c\x65\x72\xbe\x01\x76\x07\x65\x72\x72\x6f\x72\x3a\x10\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x5c\x02\x2b"
  "\x07\x73\x79\x6d\x62\x6f\x6c\x0b\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x1b\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63"
  "\x68\x3f\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73"
  "\x79\x6e\x74\x61\x78\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70"
  "\x70\x65\x6e\x64\x04\x04\x6d\x61\x70\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x06\xe8\x05\x24\x83\x04\xe7\x05\x22\x81\x8f\x02\xe6\x05\x20"
  "\x81\x8b\x02\xe5\x05\x1e\x81\x89\x02\xe4\x05\x1c\x81\x87\x02\xe3"
  "\x05\x1a\x81\x87\x02\xe2\x05\x18\x81\x87\x02\xe1\x05\x16\x81\x87"
  "\x02\xe0\x05\x14\x81\x87\x02\xdf\x05\x12\x81\x87\x02\xde\x05\x10"
  "\x81\x87\x02\xdd\x05\x0e\x81\x85\x02\xdc\x05\x0c\x81\x85\x02\xdb"
  "\x05\x0a\x81\x85\x02\xda\x05\x08\x81\x85\x02\xd9\x05\x06\x81\x87"
  "\x02\xd8\x05\x04\x84\x06\x23\x43\x76\x02\x51\x1e\x55\x6e\x65\x78"
  "\x70\x65\x63\x74\x65\x64\x20\x70\x61\x72\x73\x65\x20\x72\x65\x73"
  "\x74\x61\x72\x74\x20\x6f\x6e\x3a\x20\x02\x02\x23\x1f\x55\x6e\x62"
  "\x61\x6c\x61\x6e\x63\x65\x64\x20\x63\x6c\x6f\x73\x65\x20\x70\x61"
  "\x72\x65\x6e\x74\x68\x65\x73\x69\x73\x3a\x20\x13\x75\x6e\x65\x78"
  "\x70\x65\x63\x74\x65\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x02\x3d"
  "\x22\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x74\x6f\x20\x6e\x6f"
  "\x6e\x2d\x73\x68\x61\x72\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x3a"
  "\x20\x23\x11\x75\x6e\x62\x61\x6c\x61\x6e\x63\x65\x64\x2d\x63\x6c"
  "\x6f\x73\x65\x19\x43\x61\x6e\x27\x74\x20\x72\x65\x2d\x73\x68\x61"
  "\x72\x65\x20\x6f\x62\x6a\x65\x63\x74\x3a\x20\x23\x87\x01\x02\x6e"
  "\x12\x50\x72\x65\x6d\x61\x74\x75\x72\x65\x20\x45\x4f\x46\x20\x6f"
  "\x6e\x20\x11\x72\x65\x2d\x73\x68\x61\x72\x65\x64\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x10\xb7\x01\x18\x51\x75\x6f\x74\x69\x6e\x67\x20\x6e"
  "\x6f\x74\x20\x70\x65\x72\x6d\x69\x74\x74\x65\x64\x3a\x20\x0e\x70"
  "\x72\x65\x6d\x61\x74\x75\x72\x65\x2d\x65\x6f\x66\xb7\x01\x1a\x55"
  "\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x68\x61\x73\x68\x20\x6e\x75"
  "\x6d\x62\x65\x72\x3a\x20\x23\x40\x13\x6e\x6f\x2d\x71\x75\x6f\x74"
  "\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x77\x65\x64\x1d\x49\x6c\x6c\x2d"
  "\x66\x6f\x72\x6d\x65\x64\x20\x75\x6e\x68\x61\x73\x68\x20\x73\x79"
  "\x6e\x74\x61\x78\x3a\x20\x23\x40\x0f\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x2d\x68\x61\x73\x68\x10\x14\x49\x6c\x6c\x2d\x66\x6f\x72"
  "\x6d\x65\x64\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20\x0f\x69\x6c\x6c"
  "\x65\x67\x61\x6c\x2d\x75\x6e\x68\x61\x73\x68\x10\x01\x21\x1b\x1e"
  "\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x6e\x61\x6d\x65\x64"
  "\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3a\x20\x23\x21\x0f\x69\x6c"
  "\x6c\x65\x67\x61\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x02\x5d\x5c\x05"
  "\x6e\x61\x6d\x65\xb7\x01\x1d\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65"
  "\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x73\x79\x6e\x74\x61\x78\x3a"
  "\x20\x23\x5b\x17\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x6e\x61\x6d\x65"
  "\x64\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\xb7\x01\x19\x49\x6c\x6c"
  "\x2d\x66\x6f\x72\x6d\x65\x64\x20\x64\x6f\x74\x74\x65\x64\x20\x6c"
  "\x69\x73\x74\x3a\x20\x16\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x68\x61"
  "\x73\x68\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x08\x6f\x62\x6a\x65"
  "\x63\x74\x73\xb7\x01\x14\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x68"
  "\x61\x72\x61\x63\x74\x65\x72\x3a\x20\x12\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x64\x6f\x74\x2d\x75\x73\x61\x67\x65\xb7\x01\x05\x63\x68"
  "\x61\x72\xb7\x01\x15\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20"
  "\x62\x6f\x6f\x6c\x65\x61\x6e\x3a\x20\x0d\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x63\x68\x61\x72\xb7\x01\x1a\x49\x6c\x6c\x2d\x66\x6f\x72"
  "\x6d\x65\x64\x20\x62\x69\x74\x20\x73\x74\x72\x69\x6e\x67\x3a\x20"
  "\x23\x2a\x10\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x62\x6f\x6f\x6c\x65"
  "\x61\x6e\x07\x73\x74\x72\x69\x6e\x67\xb7\x01\x19\x41\x6e\x6f\x6e"
  "\x79\x6d\x6f\x75\x73\x20\x70\x61\x72\x73\x69\x6e\x67\x20\x65\x72"
  "\x72\x6f\x72\x2e\x13\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\xb7\x01\x0c\x70\x61\x72\x73\x65\x2d"
  "\x65\x72\x72\x6f\x72\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\xb7\x01\x4c\x1f\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x62\x6f\x6f\x6c\x65\x61\x6e\x5c\x7f\x1c\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67"
  "\x61\x6c\x2d\x63\x68\x61\x72\x1b\x1c\x21\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c"
  "\x2d\x64\x6f\x74\x2d\x75\x73\x61\x67\x65\x10\x65\x25\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65"
  "\x67\x61\x6c\x2d\x68\x61\x73\x68\x65\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x6c\x26\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x6e\x61\x6d\x65\x64\x2d"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\xbf\x01\x5e\x1e\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67"
  "\x61\x6c\x2d\x6e\x75\x6d\x62\x65\x72\xc0\x01\x50\x1e\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65"
  "\x67\x61\x6c\x2d\x75\x6e\x68\x61\x73\x68\xc1\x01\x73\x1e\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x64"
  "\x65\x66\x69\x6e\x65\x64\x2d\x68\x61\x73\x68\xc2\x01\x74\x22\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f"
  "\x2d\x71\x75\x6f\x74\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x77\x65\x64"
  "\xc3\x01\x19\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x2d\x71\x75\x6f\x74"
  "\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x77\x65\x64\xc4\x01\x1d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70\x72\x65"
  "\x6d\x61\x74\x75\x72\x65\x2d\x65\x6f\x66\xc5\x01\x0d\x20\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x72\x65\x2d"
  "\x73\x68\x61\x72\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\xc6\x01\x70"
  "\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x6e\x6f\x6e\x2d\x73\x68\x61\x72\x65\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\xc7\x01\x62\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x75\x6e\x62\x61\x6c\x61\x6e\x63\x65\x64\x2d\x63"
  "\x6c\x6f\x73\x65\xc8\x01\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\xc9\x01\x0e\x20\x69\xbe\x01\xb7"
  "\x01\x5c\x1b\x10\xbf\x01\xc0\x01\xc1\x01\xc2\x01\xc3\x01\xc5\x01"
  "\xc6\x01\xc7\x01\xc8\x01\xc9\x01\x13\x06\x80\x01\x04\x0d\x77\x72"
  "\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x05\xbd\x01\x04\xb9\x01"
  "\x04\x06\x77\x72\x69\x74\x65\x04\x43\x04\x0b\x77\x72\x69\x74\x65"
  "\x2d\x63\x68\x61\x72\x08\x8d\x07\xcc\x02\x81\x85\x02\x8c\x07\xca"
  "\x02\x81\x85\x02\x8b\x07\xc8\x02\x81\x81\x02\x8a\x07\xc6\x02\x81"
  "\x81\x02\x89\x07\xc4\x02\x81\x85\x02\x88\x07\xc2\x02\x84\x06\x87"
  "\x07\xc0\x02\x81\x87\x02\x86\x07\xbe\x02\x81\x83\x02\x85\x07\xbc"
  "\x02\x81\x81\x02\x84\x07\xba\x02\x81\x81\x02\x83\x07\xb8\x02\x81"
  "\x87\x02\x82\x07\xb6\x02\x81\x85\x02\x81\x07\xb4\x02\x81\x85\x02"
  "\x80\x07\xb2\x02\x81\x87\x02\xff\x06\xb0\x02\x81\x81\x02\xfe\x06"
  "\xae\x02\x81\x81\x02\xfd\x06\xac\x02\x81\x87\x02\xfc\x06\xaa\x02"
  "\x81\x85\x02\xfb\x06\xa8\x02\x84\x06\xfa\x06\xa6\x02\x81\x87\x02"
  "\xf9\x06\xa4\x02\x81\x83\x02\xf8\x06\xa2\x02\x81\x81\x02\xf7\x06"
  "\xa0\x02\x81\x81\x02\xf6\x06\x9e\x02\x81\x87\x02\xf5\x06\x9c\x02"
  "\x81\x85\x02\xf4\x06\x9a\x02\x81\x87\x02\xf3\x06\x98\x02\x81\x81"
  "\x02\xf2\x06\x96\x02\x81\x81\x02\xf1\x06\x94\x02\x81\x87\x02\xf0"
  "\x06\x92\x02\x84\x06\xef\x06\x90\x02\x81\x87\x02\xee\x06\x8e\x02"
  "\x81\x83\x02\xed\x06\x8c\x02\x81\x81\x02\xec\x06\x8a\x02\x81\x81"
  "\x02\xeb\x06\x88\x02\x81\x85\x02\xea\x06\x86\x02\x81\x87\x02\xe9"
  "\x06\x84\x02\x81\x81\x02\xe8\x06\x82\x02\x81\x81\x02\xe7\x06\x80"
  "\x02\x81\x85\x02\xe6\x06\xfe\x01\x84\x06\xe5\x06\xfc\x01\x81\x87"
  "\x02\xe4\x06\xfa\x01\x81\x83\x02\xe3\x06\xf8\x01\x81\x81\x02\xe2"
  "\x06\xf6\x01\x81\x81\x02\xe1\x06\xf4\x01\x81\x85\x02\xe0\x06\xf2"
  "\x01\x81\x87\x02\xdf\x06\xf0\x01\x81\x81\x02\xde\x06\xee\x01\x81"
  "\x81\x02\xdd\x06\xec\x01\x81\x85\x02\xdc\x06\xea\x01\x84\x06\xdb"
  "\x06\xe8\x01\x81\x87\x02\xda\x06\xe6\x01\x81\x83\x02\xd9\x06\xe4"
  "\x01\x81\x81\x02\xd8\x06\xe2\x01\x81\x81\x02\xd7\x06\xe0\x01\x81"
  "\x85\x02\xd6\x06\xde\x01\x81\x87\x02\xd5\x06\xdc\x01\x81\x81\x02"
  "\xd4\x06\xda\x01\x81\x81\x02\xd3\x06\xd8\x01\x81\x85\x02\xd2\x06"
  "\xd6\x01\x84\x06\xd1\x06\xd4\x01\x81\x87\x02\xd0\x06\xd2\x01\x81"
  "\x83\x02\xcf\x06\xd0\x01\x81\x81\x02\xce\x06\xce\x01\x81\x81\x02"
  "\xcd\x06\xcc\x01\x81\x85\x02\xcc\x06\xca\x01\x81\x87\x02\xcb\x06"
  "\xc8\x01\x81\x81\x02\xca\x06\xc6\x01\x81\x81\x02\xc9\x06\xc4\x01"
  "\x81\x85\x02\xc8\x06\xc2\x01\x84\x06\xc7\x06\xc0\x01\x81\x87\x02"
  "\xc6\x06\xbe\x01\x81\x83\x02\xc5\x06\xbc\x01\x81\x81\x02\xc4\x06"
  "\xba\x01\x81\x81\x02\xc3\x06\xb8\x01\x81\x85\x02\xc2\x06\xb6\x01"
  "\x81\x87\x02\xc1\x06\xb4\x01\x81\x81\x02\xc0\x06\xb2\x01\x81\x81"
  "\x02\xbf\x06\xb0\x01\x81\x85\x02\xbe\x06\xae\x01\x84\x06\xbd\x06"
  "\xac\x01\x81\x87\x02\xbc\x06\xaa\x01\x81\x83\x02\xbb\x06\xa8\x01"
  "\x81\x81\x02\xba\x06\xa6\x01\x81\x81\x02\xb9\x06\xa4\x01\x81\x85"
  "\x02\xb8\x06\xa2\x01\x81\x85\x02\xb7\x06\xa0\x01\x81\x87\x02\xb6"
  "\x06\x9e\x01\x81\x81\x02\xb5\x06\x9c\x01\x81\x81\x02\xb4\x06\x9a"
  "\x01\x81\x85\x02\xb3\x06\x98\x01\x81\x85\x02\xb2\x06\x96\x01\x84"
  "\x06\xb1\x06\x94\x01\x81\x87\x02\xb0\x06\x92\x01\x81\x83\x02\xaf"
  "\x06\x90\x01\x81\x81\x02\xae\x06\x8e\x01\x81\x81\x02\xad\x06\x8c"
  "\x01\x81\x87\x02\xac\x06\x8a\x01\x81\x85\x02\xab\x06\x88\x01\x81"
  "\x85\x02\xaa\x06\x86\x01\x81\x87\x02\xa9\x06\x84\x01\x81\x81\x02"
  "\xa8\x06\x82\x01\x81\x81\x02\xa7\x06\x80\x01\x81\x89\x02\xa6\x06"
  "\x7e\x81\x85\x02\xa5\x06\x7c\x81\x85\x02\xa4\x06\x7a\x84\x06\xa3"
  "\x06\x78\x81\x87\x02\xa2\x06\x76\x81\x83\x02\xa1\x06\x74\x81\x81"
  "\x02\xa0\x06\x72\x81\x81\x02\x9f\x06\x70\x81\x85\x02\x9e\x06\x6e"
  "\x81\x87\x02\x9d\x06\x6c\x81\x81\x02\x9c\x06\x6a\x81\x81\x02\x9b"
  "\x06\x68\x81\x85\x02\x9a\x06\x66\x84\x06\x99\x06\x64\x81\x87\x02"
  "\x98\x06\x62\x81\x83\x02\x97\x06\x60\x81\x81\x02\x96\x06\x5e\x81"
  "\x81\x02\x95\x06\x5c\x81\x85\x02\x94\x06\x5a\x81\x87\x02\x93\x06"
  "\x58\x81\x81\x02\x92\x06\x56\x81\x81\x02\x91\x06\x54\x81\x85\x02"
  "\x90\x06\x52\x84\x06\x8f\x06\x50\x81\x87\x02\x8e\x06\x4e\x81\x83"
  "\x02\x8d\x06\x4c\x81\x81\x02\x8c\x06\x4a\x81\x81\x02\x8b\x06\x48"
  "\x81\x85\x02\x8a\x06\x46\x81\x87\x02\x89\x06\x44\x81\x81\x02\x88"
  "\x06\x42\x81\x81\x02\x87\x06\x40\x81\x85\x02\x86\x06\x3e\x84\x06"
  "\x85\x06\x3c\x81\x87\x02\x84\x06\x3a\x81\x83\x02\x83\x06\x38\x81"
  "\x81\x02\x82\x06\x36\x81\x81\x02\x81\x06\x34\x81\x85\x02\x80\x06"
  "\x32\x81\x87\x02\xff\x05\x30\x81\x81\x02\xfe\x05\x2e\x81\x81\x02"
  "\xfd\x05\x2c\x81\x85\x02\xfc\x05\x2a\x84\x06\xfb\x05\x28\x81\x87"
  "\x02\xfa\x05\x26\x81\x83\x02\xf9\x05\x24\x81\x81\x02\xf8\x05\x22"
  "\x81\x81\x02\xf7\x05\x20\x81\x85\x02\xf6\x05\x1e\x81\x87\x02\xf5"
  "\x05\x1c\x81\x81\x02\xf4\x05\x1a\x81\x81\x02\xf3\x05\x18\x84\x06"
  "\xf2\x05\x16\x81\x87\x02\xf1\x05\x14\x81\x83\x02\xf0\x05\x12\x81"
  "\x81\x02\xef\x05\x10\x81\x81\x02\xee\x05\x0e\x84\x06\xed\x05\x0c"
  "\x81\x87\x02\xec\x05\x0a\x81\x81\x02\xeb\x05\x08\x81\x81\x02\xea"
  "\x05\x06\x81\x87\x02\xe9\x05\x04\x82\x02\xcb\x02\xc7\x03\xbe\x01"
  "\x51\xbd\x01\xbd\x01\xbe\x01\x04\x44\x0e\x74\x70\x0d\x62\xc4\x01"
  "\x73\x50\x5e\x6c\x65\x1c\x7f\x4c\xc9\x01\xc2\x01\xc8\x01\xc6\x01"
  "\xc5\x01\xc7\x01\xc3\x01\xc1\x01\xc0\x01\xbf\x01\x10\x1b\x5c\x0c"
  "\x33\x10\x13\x64\x65\x66\x69\x6e\x65\x2d\x70\x61\x72\x73\x65\x2d"
  "\x65\x72\x72\x6f\x72\xb7\x01\x76\x04\xb5\x01\xba\x01\x04\xb4\x01"
  "\xbc\x01\x04\xb3\x01\xbb\x01\x04\x4d\xb8\x01\x04\x49\xb6\x01\x04"
  "\x0f\x66\x69\x6e\x69\x73\x68\x2d\x70\x61\x72\x73\x69\x6e\x67\x13"
  "\x04\x18\x72\x65\x63\x6f\x72\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\x21\x17\x08\x11\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\xb2\x01\x04\x47"
  "\xb1\x01\x04\xac\x01\x04\xab\x01\xb0\x01\x04\xa9\x01\xaf\x01\x04"
  "\x09\xae\x01\x06\x9e\x01\x04\x64\x62\x3f\x9f\x01\x04\x19\x73\x65"
  "\x74\x2d\x64\x62\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x6d\x61"
  "\x70\x70\x69\x6e\x67\x21\x9d\x01\x04\x14\x64\x62\x2d\x70\x6f\x73"
  "\x69\x74\x69\x6f\x6e\x2d\x6d\x61\x70\x70\x69\x6e\x67\x9c\x01\x04"
  "\x0d\x64\x62\x2d\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x9b\x01\x04"
  "\x0d\x64\x62\x2d\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x9a\x01\x04"
  "\x0e\x64\x62\x2d\x69\x6e\x70\x75\x74\x2d\x6c\x69\x6e\x65\x99\x01"
  "\x04\x10\x64\x62\x2d\x67\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x98\x01\x04\x1c\x64\x62\x2d\x64\x69\x73\x63\x72\x65\x74\x69"
  "\x6f\x6e\x61\x72\x79\x2d\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72"
  "\x97\x01\x04\x12\x64\x62\x2d\x73\x68\x61\x72\x65\x64\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x73\x96\x01\x04\x10\x64\x62\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x95\x01\x04\x09\x64\x62\x2d\x72"
  "\x61\x64\x69\x78\x94\x01\x04\x11\x64\x62\x2d\x6b\x65\x79\x77\x6f"
  "\x72\x64\x2d\x73\x74\x79\x6c\x65\x93\x01\x04\x22\x64\x62\x2d\x65"
  "\x6e\x61\x62\x6c\x65\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x70\x61\x72\x73\x69\x6e\x67\x92\x01\x04"
  "\x10\x64\x62\x2d\x63\x6f\x6e\x73\x74\x69\x74\x75\x65\x6e\x74\x73"
  "\x91\x01\x04\x19\x64\x62\x2d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x90\x01\x04\x13"
  "\x64\x62\x2d\x61\x74\x6f\x6d\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65"
  "\x72\x73\x8f\x01\x04\xad\x01\x18\x64\x62\x2d\x61\x73\x73\x6f\x63"
  "\x69\x61\x74\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x73\x3f\x8e"
  "\x01\x04\x07\x72\x74\x64\x3a\x64\x62\xc9\x01\x03\x64\x62\x15\x61"
  "\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x73\x3f\x10\x61\x74\x6f\x6d\x2d\x64\x65\x6c\x69\x6d\x69\x74"
  "\x65\x72\x73\x16\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x0d\x63\x6f\x6e\x73\x74\x69"
  "\x74\x75\x65\x6e\x74\x73\x1f\x65\x6e\x61\x62\x6c\x65\x2d\x66\x69"
  "\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x70\x61"
  "\x72\x73\x69\x6e\x67\x4f\x06\x72\x61\x64\x69\x78\x0d\x70\x61\x72"
  "\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x0f\x73\x68\x61\x72\x65\x64"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x73\xa8\x01\x0d\x67\x65\x74\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\xa2\x01\xa1\x01\xa0\x01\x11\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x2d\x6d\x61\x70\x70\x69\x6e\x67\x0f\x79"
  "\x8d\x01\x04\x0b\x25\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x8c\x01"
  "\x04\x19\x8b\x01\x04\x15\x8a\x01\x04\x87\x01\x7d\x89\x01\x04\x84"
  "\x01\x88\x01\x04\xaa\x01\x86\x01\x04\x42\x85\x01\x04\x40\x5d\x04"
  "\x3f\x7b\x04\x3e\x83\x01\x04\x3d\x82\x01\x04\x3c\x81\x01\x04\x7c"
  "\x5b\x04\x3a\x7e\x04\x39\x7a\x04\x38\x78\x04\x37\x77\x04\x6d\x75"
  "\x04\x41\x72\x04\x29\x6f\x71\x04\x30\x6e\x04\x6a\x61\x32\x6b\x06"
  "\x31\x68\x0a\x2f\x67\x04\x63\x66\x04\x2e\x64\x04\x58\x5f\x04\x56"
  "\x5a\x04\x4e\x59\x04\x54\x57\x04\x2d\x55\x04\x33\x52\x04\x2c\x51"
  "\x04\x2b\x53\x04\x36\x4b\x04\x35\x48\x04\x34\x4a\x04\x2a\x46\x04"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x21\x45\x04\x22\x21\x20\x1f\x1e\x16\x1d\x08\x3b\x1a"
  "\x04\x14\x0a\x18\x04\x0c\x72\x65\x61\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x12\x04\x11\x0f\x04\x0b\x04\x0e\x70\x61\x72\x73\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x73\x04\x0d\x70\x61\x72\x73\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x04\x60\x28\x15\x72\x75\x6e\x74\x69\x6d\x65\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x72\x61\x64\x69\x78\x1d\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6b\x65\x79\x77"
  "\x6f\x72\x64\x2d\x73\x74\x79\x6c\x65\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x65\x6e\x61\x62\x6c\x65\x2d"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d"
  "\x70\x61\x72\x73\x69\x6e\x67\x3f\x26\x25\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x25\x24"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x61"
  "\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x73\x3f\x27\xa7\x01\x0b\xa6\x01\xa5\x01\x24\xa4\x01\x23\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\xa3\x01\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x1f"
  "\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x04\xc9"
  "\x01\x02\x98\x01\xb2\x02\x80\x80\x04\x97\x01\xb0\x02\x81\x81\x02"
  "\x96\x01\xae\x02\x81\x81\x02\x95\x01\xac\x02\x81\x83\x02\x94\x01"
  "\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02"
  "\x81\x83\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x83"
  "\x02\x8f\x01\xa0\x02\x81\x83\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d"
  "\x01\x9c\x02\x81\x83\x02\x8c\x01\x9a\x02\x81\x83\x02\x8b\x01\x98"
  "\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x83\x02\x89\x01\x94\x02\x81"
  "\x83\x02\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90\x02\x81\x83\x02"
  "\x86\x01\x8e\x02\x81\x83\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01"
  "\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01\x86\x02"
  "\x81\x83\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02\x81\x83"
  "\x02\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x83\x02\x7d\xfc\x01"
  "\x81\x83\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x83\x02\x7a"
  "\xf6\x01\x81\x83\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x81\x83"
  "\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x87\x02\x75\xec\x01"
  "\x81\x85\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x83\x02\x72"
  "\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x83"
  "\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01"
  "\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x83\x02\x6a"
  "\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x83"
  "\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01"
  "\x81\x85\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x87\x02\x62"
  "\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x83"
  "\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01"
  "\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a"
  "\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83"
  "\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01"
  "\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\xa1\x02\x52"
  "\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x85\x02\x50\xa2\x01\x81\x83"
  "\x02\x4f\xa0\x01\x81\x85\x02\x4e\x9e\x01\x81\x87\x02\x4d\x9c\x01"
  "\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a"
  "\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83"
  "\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01"
  "\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42"
  "\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83"
  "\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83"
  "\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02"
  "\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83\x02\x36"
  "\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68"
  "\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81"
  "\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83"
  "\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02"
  "\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26"
  "\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48"
  "\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81"
  "\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83"
  "\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\xb1\x02\xa6"
  "\x04";

SCHEME_OBJECT *
parse_so_data_70bc06d34d8b3af1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_parse_so_data_70bc06d34d8b3af1 [0]))), (sizeof (prog_parse_so_data_70bc06d34d8b3af1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_159]));
}

DECLARE_COMPILED_DATA_NS ("parse.so", parse_so_data_70bc06d34d8b3af1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("parse.so", "5efa4366237e7822")
