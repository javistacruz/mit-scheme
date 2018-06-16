/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_9 9
#define ENVIRONMENT_LABEL_1_3 14
#define DEBUGGING_LABEL_1_2 13
#define EXECUTE_CACHE_1_8 11
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_rvalue_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_rvalue_6)
DEFLABEL (generate_rvalue_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define ENVIRONMENT_LABEL_2_3 22
#define DEBUGGING_LABEL_2_2 21
#define OBJECT_2_4 20
#define OBJECT_2_3 19
#define OBJECT_2_2 18
#define OBJECT_2_1 17
#define OBJECT_2_0 16
#define FREE_REFERENCE_2_0 15
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_2_4);
      goto generate_rvalue__4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_rvalue__12)
DEFLABEL (generate_rvalue__4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_20;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_20;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_18;
  Wrd35 = Wrd39;

DEFLABEL (label_17)
  Wrd34 = Wrd35;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_16;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_16;
  (Wrd41.Obj) = ((Wrd45.pObj) [3]);

DEFLABEL (label_15)
  (Wrd54.Obj) = (* (Rsp++));
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_14;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_14;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_14;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd57.pObj) = (& ((Wrd61.pObj) [(Wrd55.Lng)]));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_13)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd50.Obj) = (current_block [OBJECT_2_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_9)
  (Wrd41.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd36.pObj));

DEFLABEL (label_8)
  (Wrd35.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd30.Obj) = (current_block [OBJECT_2_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto expression_value_simple_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_value_simple_5)
DEFLABEL (expression_value_simple_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define TAG_4_6 2
#define LABEL_4_9 9
#define LABEL_4_11 11
#define TAG_4_12 4
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define EXECUTE_CACHE_4_10 13
#define EXECUTE_CACHE_4_8 15
#define FREE_REFERENCE_4_0 18
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_4_4);
      goto expression_value_temporary_4;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_value_temporary_8)
DEFLABEL (expression_value_temporary_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_11])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_4_11);

DEFLABEL (lambda_1)
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
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define TAG_5_9 3
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_5_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define ENVIRONMENT_LABEL_6_3 10
#define DEBUGGING_LABEL_6_2 9
#define OBJECT_6_2 8
#define OBJECT_6_1 7
#define OBJECT_6_0 6
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_6_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [0]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define LABEL_7_12 17
#define LABEL_7_17 19
#define LABEL_7_13 21
#define TAG_7_14 9
#define LABEL_7_20 23
#define LABEL_7_15 25
#define TAG_7_16 11
#define LABEL_7_25 27
#define LABEL_7_19 29
#define LABEL_7_28 31
#define LABEL_7_29 33
#define LABEL_7_22 35
#define LABEL_7_23 37
#define TAG_7_24 17
#define LABEL_7_31 39
#define TAG_7_32 18
#define LABEL_7_34 41
#define LABEL_7_35 43
#define ENVIRONMENT_LABEL_7_3 84
#define DEBUGGING_LABEL_7_2 83
#define OBJECT_7_11 82
#define OBJECT_7_10 81
#define OBJECT_7_9 80
#define OBJECT_7_8 79
#define OBJECT_7_7 78
#define OBJECT_7_6 77
#define OBJECT_7_5 76
#define OBJECT_7_4 75
#define OBJECT_7_3 74
#define OBJECT_7_2 73
#define OBJECT_7_1 72
#define OBJECT_7_0 71
#define EXECUTE_CACHE_7_38 45
#define EXECUTE_CACHE_7_37 47
#define EXECUTE_CACHE_7_36 49
#define EXECUTE_CACHE_7_33 51
#define EXECUTE_CACHE_7_30 53
#define EXECUTE_CACHE_7_27 55
#define EXECUTE_CACHE_7_26 57
#define EXECUTE_CACHE_7_21 59
#define EXECUTE_CACHE_7_18 61
#define EXECUTE_CACHE_7_11 63
#define FREE_REFERENCE_7_4 66
#define FREE_REFERENCE_7_3 67
#define FREE_REFERENCE_7_2 68
#define FREE_REFERENCE_7_1 69
#define FREE_REFERENCE_7_0 70
#define FREE_REFERENCES_LABEL_7_0 44
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_38;

    case 10:
      current_block = (Rpc - LABEL_7_20);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_7_15);
      goto lambda_39;

    case 12:
      current_block = (Rpc - LABEL_7_25);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_7_28);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_7_29);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_7_23);
      goto lambda_40;

    case 18:
      current_block = (Rpc - LABEL_7_31);
      goto lambda_41;

    case 19:
      current_block = (Rpc - LABEL_7_34);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_7_35);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_55;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_55;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_54)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_53;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_53;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_52)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_51;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_51;
  (Wrd37.Obj) = ((Wrd43.pObj) [5]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_49;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd61.Lng))))
    goto label_49;
  (Wrd55.Obj) = ((Wrd59.pObj) [10]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_48)
  (Wrd69.Obj) = (Rsp [0]);
  if (! ((Wrd69.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  goto lambda_17;

DEFLABEL (label_43)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_47;
  Wrd71 = Wrd75;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_45;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd85.Lng))))
    goto label_45;
  (Wrd77.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_44)
  (Wrd93.Obj) = (* (Rsp++));
  if ((Wrd77.Obj) == (Wrd93.Obj))
    goto label_42;
  (Wrd94.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd94.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_45)
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.Obj) = (current_block [OBJECT_7_5]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_29)
  (Wrd77.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd72.pObj));

DEFLABEL (label_28)
  (Wrd71.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_7_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_7_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_26)
  (Wrd37.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_7_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_37)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_7_12);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  ((Wrd13.pObj) [3]) = (Wrd5.Obj);
  ((Wrd13.pObj) [4]) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_15])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  ((Wrd20.pObj) [2]) = (Wrd14.Obj);
  ((Wrd20.pObj) [3]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_57;
  Wrd23 = Wrd27;

DEFLABEL (label_56)
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd29.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_17])), (Wrd24.pObj));

DEFLABEL (label_30)
  (Wrd23.Obj) = Rvl;
  goto label_56;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_64;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd20.Lng))))
    goto label_64;
  (Wrd12.Obj) = ((Wrd18.pObj) [20]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_63)
  (Wrd32.Obj) = (current_block [OBJECT_7_7]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = ((Wrd30.pObj) [2]);
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (label_58)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_62;
  Wrd7 = Wrd11;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_60;
  Wrd14 = Wrd18;

DEFLABEL (label_59)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_7_8]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_7_9]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_29])), (Wrd15.pObj));

DEFLABEL (label_34)
  (Wrd14.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_28])), (Wrd8.pObj));

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_7_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_7_15);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_23])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_66;
  Wrd21 = Wrd25;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_7_10]);
  (Wrd10.Obj) = (current_block [OBJECT_7_8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_7_11]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_30]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_25])), (Wrd22.pObj));

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_7_23);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_31])));
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
  (Rsp [0]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_33]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_7_31);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_36]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_38]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_34);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_37]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_10 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define TAG_8_9 4
#define LABEL_8_12 13
#define TAG_8_13 5
#define LABEL_8_14 15
#define LABEL_8_16 17
#define LABEL_8_17 19
#define TAG_8_18 8
#define LABEL_8_20 21
#define LABEL_8_22 23
#define LABEL_8_25 25
#define LABEL_8_26 27
#define LABEL_8_24 29
#define LABEL_8_29 31
#define LABEL_8_30 33
#define LABEL_8_28 35
#define LABEL_8_32 37
#define LABEL_8_33 39
#define LABEL_8_34 41
#define LABEL_8_31 43
#define LABEL_8_38 45
#define LABEL_8_39 47
#define LABEL_8_35 49
#define LABEL_8_42 51
#define LABEL_8_43 53
#define LABEL_8_37 55
#define LABEL_8_44 57
#define LABEL_8_41 59
#define LABEL_8_46 61
#define LABEL_8_47 63
#define LABEL_8_45 65
#define LABEL_8_49 67
#define LABEL_8_50 69
#define LABEL_8_48 71
#define LABEL_8_53 73
#define LABEL_8_54 75
#define LABEL_8_51 77
#define LABEL_8_55 79
#define LABEL_8_52 81
#define LABEL_8_56 83
#define ENVIRONMENT_LABEL_8_3 117
#define DEBUGGING_LABEL_8_2 116
#define OBJECT_8_10 115
#define OBJECT_8_9 114
#define OBJECT_8_8 113
#define OBJECT_8_7 112
#define OBJECT_8_6 111
#define OBJECT_8_5 110
#define OBJECT_8_4 109
#define OBJECT_8_3 108
#define OBJECT_8_2 107
#define OBJECT_8_1 106
#define OBJECT_8_0 105
#define EXECUTE_CACHE_8_40 85
#define EXECUTE_CACHE_8_36 87
#define EXECUTE_CACHE_8_27 89
#define EXECUTE_CACHE_8_23 91
#define EXECUTE_CACHE_8_21 93
#define EXECUTE_CACHE_8_19 95
#define EXECUTE_CACHE_8_15 97
#define EXECUTE_CACHE_8_11 99
#define EXECUTE_CACHE_8_6 101
#define FREE_REFERENCE_8_0 104
#define FREE_REFERENCES_LABEL_8_0 84
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto generate_cached_reference_54;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_10);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_48;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto lambda_78;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_79;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto lambda_80;

    case 9:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_8_25);
      goto label_57;

    case 12:
      current_block = (Rpc - LABEL_8_26);
      goto label_58;

    case 13:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_8_29);
      goto label_59;

    case 15:
      current_block = (Rpc - LABEL_8_30);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_8_32);
      goto label_61;

    case 18:
      current_block = (Rpc - LABEL_8_33);
      goto label_62;

    case 19:
      current_block = (Rpc - LABEL_8_34);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_8_31);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_8_38);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_8_39);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_8_35);
      goto continuation_27;

    case 24:
      current_block = (Rpc - LABEL_8_42);
      goto label_65;

    case 25:
      current_block = (Rpc - LABEL_8_43);
      goto label_66;

    case 26:
      current_block = (Rpc - LABEL_8_37);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_8_44);
      goto label_67;

    case 28:
      current_block = (Rpc - LABEL_8_41);
      goto continuation_31;

    case 29:
      current_block = (Rpc - LABEL_8_46);
      goto label_68;

    case 30:
      current_block = (Rpc - LABEL_8_47);
      goto label_69;

    case 31:
      current_block = (Rpc - LABEL_8_45);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_8_49);
      goto label_70;

    case 33:
      current_block = (Rpc - LABEL_8_50);
      goto label_71;

    case 34:
      current_block = (Rpc - LABEL_8_48);
      goto continuation_37;

    case 35:
      current_block = (Rpc - LABEL_8_53);
      goto label_72;

    case 36:
      current_block = (Rpc - LABEL_8_54);
      goto label_73;

    case 37:
      current_block = (Rpc - LABEL_8_51);
      goto continuation_43;

    case 38:
      current_block = (Rpc - LABEL_8_55);
      goto label_74;

    case 39:
      current_block = (Rpc - LABEL_8_52);
      goto continuation_42;

    case 40:
      current_block = (Rpc - LABEL_8_56);
      goto label_75;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_cached_reference_77)
DEFLABEL (generate_cached_reference_54)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_8])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  ((Wrd14.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_82;
  Wrd25 = Wrd29;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd26.pObj));

DEFLABEL (label_56)
  (Wrd25.Obj) = Rvl;
  goto label_81;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_8_8);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_8_3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_17])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_121;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_121;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_120)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_119;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_119;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_118)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_117;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_117;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_116)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_115;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_115;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_114)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_8_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_36]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_8_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_102;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_102;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_101)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_100;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_100;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_8_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_98;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_98;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_97)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_96;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_96;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_8_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_94;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_94;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_93)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_92;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_92;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_8_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_90;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_90;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_89)
  (Wrd36.Obj) = (Rsp [8]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_88;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_88;
  (Wrd29.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_8_52);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_86;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_86;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_8_51);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_84;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_84;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_83)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (current_block [OBJECT_8_10]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_8_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_55]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_74)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_8_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd38.Obj) = (Rsp [8]);
  (Wrd39.Obj) = (current_block [OBJECT_8_9]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_54]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_8_9]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_53]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_8_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_50]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_8_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_49]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_8_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_47]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_8_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_43]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_42]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_113;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_113;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_112)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_111;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_111;
  (Wrd37.Obj) = ((Wrd41.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_109;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_109;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_108)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_107;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_107;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_37);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_105;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_105;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_104)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (current_block [OBJECT_8_10]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_8_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_8_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_39]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_8_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (current_block [OBJECT_8_9]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (current_block [OBJECT_8_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_8_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_8_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_8_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_8_12);

DEFLABEL (lambda_51)
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

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_8_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define LABEL_9_7 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_22 15
#define LABEL_9_24 17
#define LABEL_9_19 19
#define LABEL_9_17 21
#define LABEL_9_13 23
#define TAG_9_14 10
#define LABEL_9_15 25
#define LABEL_9_35 27
#define LABEL_9_10 29
#define LABEL_9_26 31
#define TAG_9_27 14
#define LABEL_9_28 33
#define TAG_9_29 15
#define LABEL_9_30 35
#define TAG_9_31 16
#define LABEL_9_32 37
#define LABEL_9_33 39
#define LABEL_9_37 41
#define TAG_9_38 19
#define LABEL_9_39 43
#define TAG_9_40 20
#define ENVIRONMENT_LABEL_9_3 83
#define DEBUGGING_LABEL_9_2 82
#define OBJECT_9_12 81
#define OBJECT_9_11 80
#define OBJECT_9_10 79
#define OBJECT_9_9 78
#define OBJECT_9_8 77
#define OBJECT_9_7 76
#define OBJECT_9_6 75
#define OBJECT_9_5 74
#define OBJECT_9_4 73
#define OBJECT_9_3 72
#define OBJECT_9_2 71
#define OBJECT_9_1 70
#define OBJECT_9_0 69
#define EXECUTE_CACHE_9_41 45
#define EXECUTE_CACHE_9_36 47
#define EXECUTE_CACHE_9_34 49
#define EXECUTE_CACHE_9_25 51
#define EXECUTE_CACHE_9_23 53
#define EXECUTE_CACHE_9_21 55
#define EXECUTE_CACHE_9_20 57
#define EXECUTE_CACHE_9_18 59
#define EXECUTE_CACHE_9_16 61
#define EXECUTE_CACHE_9_8 63
#define EXECUTE_CACHE_9_6 65
#define FREE_REFERENCE_9_0 68
#define FREE_REFERENCES_LABEL_9_0 44
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd90;
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
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_9_22);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_41;

    case 11:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_27;

    case 12:
      current_block = (Rpc - LABEL_9_35);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_29;

    case 14:
      current_block = (Rpc - LABEL_9_26);
      goto lambda_42;

    case 15:
      current_block = (Rpc - LABEL_9_28);
      goto lambda_43;

    case 16:
      current_block = (Rpc - LABEL_9_30);
      goto lambda_44;

    case 17:
      current_block = (Rpc - LABEL_9_32);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_9_33);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_9_37);
      goto lambda_45;

    case 20:
      current_block = (Rpc - LABEL_9_39);
      goto lambda_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_9_0]))
    goto label_62;
  if (Rvl == (current_block [OBJECT_9_1]))
    goto label_53;
  if (! (Rvl == (current_block [OBJECT_9_7])))
    goto label_47;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (label_47)
  if (Rvl == (current_block [OBJECT_9_8]))
    goto label_48;
  if (Rvl == (current_block [OBJECT_9_9]))
    goto label_48;
  (Wrd15.Obj) = (current_block [OBJECT_9_12]);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (label_48)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd34.Lng))))
    goto label_52;
  (Wrd18.Obj) = ((Wrd32.pObj) [27]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;

DEFLABEL (label_51)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_9_11]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_9);

DEFLABEL (label_50)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_49)
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (label_52)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_9_10]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_50;

DEFLABEL (label_53)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_61;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd52.Lng))))
    goto label_61;
  (Wrd44.Obj) = ((Wrd50.pObj) [18]);

DEFLABEL (label_60)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_59;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd60.Obj);
  if (! ((Wrd60.Obj) == (current_block [OBJECT_9_5])))
    goto label_56;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 1;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  Wrd81 = Wrd80;
  (Wrd82.Obj) = (Rsp [1]);
  ((Wrd81.pObj) [2]) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_55;
  Wrd7 = Wrd11;

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_36]));

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_35])), (Wrd8.pObj));

DEFLABEL (label_38)
  (Wrd7.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  if ((Wrd60.Obj) == (current_block [OBJECT_9_6]))
    goto label_57;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_28])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_30])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_37)
  (Wrd60.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (current_block [OBJECT_9_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_36)
  (Wrd44.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd90.Obj);
  goto label_49;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_24);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_37])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_34]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_41]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9_32);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_39])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_9_26);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_9_28);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_9_30);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_9_37);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_9_39);

DEFLABEL (lambda_24)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_8 7
#define LABEL_10_5 9
#define LABEL_10_12 11
#define LABEL_10_13 13
#define LABEL_10_14 15
#define LABEL_10_15 17
#define LABEL_10_18 19
#define LABEL_10_6 21
#define LABEL_10_19 23
#define LABEL_10_21 25
#define LABEL_10_22 27
#define LABEL_10_10 29
#define TAG_10_11 13
#define LABEL_10_16 31
#define LABEL_10_20 33
#define LABEL_10_28 35
#define LABEL_10_29 37
#define LABEL_10_30 39
#define LABEL_10_23 41
#define LABEL_10_25 43
#define LABEL_10_27 45
#define LABEL_10_33 47
#define LABEL_10_31 49
#define LABEL_10_35 51
#define TAG_10_36 24
#define ENVIRONMENT_LABEL_10_3 86
#define DEBUGGING_LABEL_10_2 85
#define OBJECT_10_14 84
#define OBJECT_10_13 83
#define OBJECT_10_12 82
#define OBJECT_10_11 81
#define OBJECT_10_10 80
#define OBJECT_10_9 79
#define OBJECT_10_8 78
#define OBJECT_10_7 77
#define OBJECT_10_6 76
#define OBJECT_10_5 75
#define OBJECT_10_4 74
#define OBJECT_10_3 73
#define OBJECT_10_2 72
#define OBJECT_10_1 71
#define OBJECT_10_0 70
#define EXECUTE_CACHE_10_34 53
#define EXECUTE_CACHE_10_32 55
#define EXECUTE_CACHE_10_26 57
#define EXECUTE_CACHE_10_24 59
#define EXECUTE_CACHE_10_17 61
#define EXECUTE_CACHE_10_9 63
#define FREE_REFERENCE_10_1 66
#define FREE_REFERENCE_10_0 67
#define FREE_ASSIGNMENT_10_0 69
#define FREE_REFERENCES_LABEL_10_0 52
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_ic_cons_34;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_10_12);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_10_21);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_10_22);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_51;

    case 14:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_27;

    case 15:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_10_28);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_10_29);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_10_30);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_30;

    case 21:
      current_block = (Rpc - LABEL_10_27);
      goto continuation_3;

    case 22:
      current_block = (Rpc - LABEL_10_33);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_10_31);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_10_35);
      goto lambda_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ic_cons_50)
DEFLABEL (make_ic_cons_34)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_84;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd21.Lng))))
    goto label_84;
  (Wrd15.Obj) = ((Wrd19.pObj) [9]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_83)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_82;
  Wrd29 = Wrd33;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_80;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_80;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_79)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_10_6]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_54;

DEFLABEL (label_53)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_54)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd37.Lng))))
    goto label_53;
  (Wrd29.Obj) = ((Wrd35.pObj) [16]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_77)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_76;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd51.Lng))))
    goto label_76;
  (Wrd45.Obj) = ((Wrd49.pObj) [7]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_75)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_74;
  Wrd59 = Wrd63;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_72;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_72;
  (Wrd8.Obj) = ((Wrd14.pObj) [6]);

DEFLABEL (label_71)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_70;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_69)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_68;
  Wrd31 = Wrd35;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_27);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  ((Wrd6.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_64;
  Wrd9 = Wrd13;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_62;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng))))
    goto label_62;
  (Wrd15.Obj) = ((Wrd21.pObj) [15]);

DEFLABEL (label_61)
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd39.pObj) [0]) = (Wrd36.Obj);

DEFLABEL (label_58)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_57;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd59.Lng))))
    goto label_57;
  (Wrd53.Obj) = ((Wrd57.pObj) [19]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_56)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_10_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (Wrd15.Obj) = (current_block [OBJECT_10_8]);
  (Wrd16.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_10_9]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto lambda_22;

DEFLABEL (label_55)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_57)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_10_4]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_14])), (Wrd39.pObj), (Wrd36.Obj));

DEFLABEL (label_40)
  goto label_58;

DEFLABEL (label_62)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_10_3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_39)
  (Wrd15.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_12])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd17.Obj) = (current_block [OBJECT_10_12]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_30])), (Wrd32.pObj));

DEFLABEL (label_47)
  (Wrd31.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_11]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.Obj) = (current_block [OBJECT_10_10]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_22])), (Wrd60.pObj));

DEFLABEL (label_44)
  (Wrd59.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd54.Obj) = (Rsp [6]);
  (Wrd55.Obj) = (current_block [OBJECT_10_7]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_77;

DEFLABEL (label_80)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_10_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_8])), (Wrd30.pObj));

DEFLABEL (label_37)
  (Wrd29.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_10_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_23);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_31);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_13]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_10_14]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_35])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  Rvl = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_10_35);

DEFLABEL (lambda_20)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_4 15
#define OBJECT_11_3 14
#define OBJECT_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
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
      goto make_trivial_closure_cons_5;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_trivial_closure_cons_9)
DEFLABEL (make_trivial_closure_cons_5)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [15]);

DEFLABEL (label_10)
  (Wrd24.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_11_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define LABEL_12_13 17
#define LABEL_12_10 19
#define ENVIRONMENT_LABEL_12_3 35
#define DEBUGGING_LABEL_12_2 34
#define OBJECT_12_6 33
#define OBJECT_12_5 32
#define OBJECT_12_4 31
#define OBJECT_12_3 30
#define OBJECT_12_2 29
#define OBJECT_12_1 28
#define OBJECT_12_0 27
#define EXECUTE_CACHE_12_15 21
#define EXECUTE_CACHE_12_14 23
#define EXECUTE_CACHE_12_9 25
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_cons_closure_indirection_10;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cons_closure_indirection_19)
DEFLABEL (make_cons_closure_indirection_10)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [19]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd21.Obj) = ((Wrd27.pObj) [18]);

DEFLABEL (label_28)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_27;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_26)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_24)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_23;
  (Wrd25.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_22)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_21;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd44.Lng))))
    goto label_21;
  (Wrd39.Obj) = ((Wrd42.pObj) [17]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (label_21)
  (Wrd47.Obj) = (current_block [OBJECT_12_6]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd34.Obj) = (current_block [OBJECT_12_5]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_16)
  (Wrd25.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_12_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_12_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_9 9
#define LABEL_13_7 11
#define ENVIRONMENT_LABEL_13_3 23
#define DEBUGGING_LABEL_13_2 22
#define OBJECT_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_11 13
#define EXECUTE_CACHE_13_10 15
#define EXECUTE_CACHE_13_8 17
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_13_4);
      goto make_cons_closure_redirection_6;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cons_closure_redirection_11)
DEFLABEL (make_cons_closure_redirection_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [19]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd14.Lng))))
    goto label_13;
  (Wrd6.Obj) = ((Wrd12.pObj) [8]);

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (label_13)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_13_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define ENVIRONMENT_LABEL_14_3 19
#define DEBUGGING_LABEL_14_2 18
#define OBJECT_14_4 17
#define OBJECT_14_3 16
#define OBJECT_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_14_4);
      goto redirect_closure_4;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (redirect_closure_8)
DEFLABEL (redirect_closure_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_10;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_10;
  (Wrd10.Obj) = ((Wrd14.pObj) [20]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd24.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_10)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_14_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define LABEL_15_10 13
#define LABEL_15_11 15
#define LABEL_15_12 17
#define LABEL_15_13 19
#define LABEL_15_14 21
#define LABEL_15_15 23
#define LABEL_15_18 25
#define LABEL_15_19 27
#define LABEL_15_20 29
#define LABEL_15_22 31
#define LABEL_15_24 33
#define ENVIRONMENT_LABEL_15_3 58
#define DEBUGGING_LABEL_15_2 57
#define OBJECT_15_5 56
#define OBJECT_15_4 55
#define OBJECT_15_3 54
#define OBJECT_15_2 53
#define OBJECT_15_1 52
#define OBJECT_15_0 51
#define EXECUTE_CACHE_15_27 35
#define EXECUTE_CACHE_15_26 37
#define EXECUTE_CACHE_15_25 39
#define EXECUTE_CACHE_15_23 41
#define EXECUTE_CACHE_15_21 43
#define EXECUTE_CACHE_15_17 45
#define EXECUTE_CACHE_15_16 47
#define EXECUTE_CACHE_15_6 49
#define FREE_REFERENCES_LABEL_15_0 34
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd102;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd79;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_15_4);
      goto make_closure_redirection_20;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_15_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_15_12);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_15_13);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_15_14);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_15_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_15_20);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_15_22);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_closure_redirection_30)
DEFLABEL (make_closure_redirection_20)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_45)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_44;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_44;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_43)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_42;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_42;
  (Wrd34.Obj) = ((Wrd40.pObj) [4]);

DEFLABEL (label_41)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_40;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd56.Lng))))
    goto label_40;
  (Wrd51.Obj) = ((Wrd54.pObj) [4]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_39)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_38;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd71.Lng))))
    goto label_38;
  (Wrd65.Obj) = ((Wrd69.pObj) [17]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_37)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 10))
    goto label_36;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd87.Lng))))
    goto label_36;
  (Wrd79.Obj) = ((Wrd85.pObj) [17]);

DEFLABEL (label_35)
  (Wrd95.Obj) = (Rsp [0]);
  if ((Wrd79.Obj) == (Wrd95.Obj))
    goto label_34;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd101.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_7);

DEFLABEL (label_34)
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_33;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd110.Lng))))
    goto label_33;
  (Wrd102.Obj) = ((Wrd108.pObj) [18]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd102.Obj);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_15);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_18);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (label_33)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (current_block [OBJECT_15_3]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_28)
  (Wrd102.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Obj) = (current_block [OBJECT_15_2]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_27)
  (Wrd79.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.Obj) = (current_block [OBJECT_15_2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd59.Obj) = (current_block [OBJECT_15_0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_15_0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_24)
  (Wrd34.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd30.Obj) = (current_block [OBJECT_15_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define LABEL_16_10 15
#define LABEL_16_11 17
#define LABEL_16_16 19
#define LABEL_16_18 21
#define LABEL_16_12 23
#define LABEL_16_13 25
#define LABEL_16_14 27
#define LABEL_16_15 29
#define LABEL_16_29 31
#define LABEL_16_19 33
#define TAG_16_20 15
#define LABEL_16_30 35
#define LABEL_16_31 37
#define LABEL_16_21 39
#define LABEL_16_24 41
#define LABEL_16_32 43
#define LABEL_16_25 45
#define LABEL_16_28 47
#define LABEL_16_36 49
#define LABEL_16_37 51
#define LABEL_16_38 53
#define LABEL_16_33 55
#define LABEL_16_39 57
#define LABEL_16_35 59
#define LABEL_16_40 61
#define LABEL_16_44 63
#define LABEL_16_45 65
#define LABEL_16_42 67
#define TAG_16_43 32
#define LABEL_16_46 69
#define ENVIRONMENT_LABEL_16_3 111
#define DEBUGGING_LABEL_16_2 110
#define OBJECT_16_24 109
#define OBJECT_16_23 108
#define OBJECT_16_22 107
#define OBJECT_16_21 106
#define OBJECT_16_20 105
#define OBJECT_16_19 104
#define OBJECT_16_18 103
#define OBJECT_16_17 102
#define OBJECT_16_16 101
#define OBJECT_16_15 100
#define OBJECT_16_14 99
#define OBJECT_16_13 98
#define OBJECT_16_12 97
#define OBJECT_16_11 96
#define OBJECT_16_10 95
#define OBJECT_16_9 94
#define OBJECT_16_8 93
#define OBJECT_16_7 92
#define OBJECT_16_6 91
#define OBJECT_16_5 90
#define OBJECT_16_4 89
#define OBJECT_16_3 88
#define OBJECT_16_2 87
#define OBJECT_16_1 86
#define OBJECT_16_0 85
#define EXECUTE_CACHE_16_41 71
#define EXECUTE_CACHE_16_34 73
#define EXECUTE_CACHE_16_27 75
#define EXECUTE_CACHE_16_26 77
#define EXECUTE_CACHE_16_23 79
#define EXECUTE_CACHE_16_22 81
#define EXECUTE_CACHE_16_17 83
#define FREE_REFERENCES_LABEL_16_0 70
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd42;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd41;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd181;
  machine_word Wrd182;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd157;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd126;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd112;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd179;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd37;
  machine_word Wrd198;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      goto make_non_trivial_closure_cons_65;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_67;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_68;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_69;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto label_70;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto label_75;

    case 6:
      current_block = (Rpc - LABEL_16_10);
      goto label_71;

    case 7:
      current_block = (Rpc - LABEL_16_11);
      goto label_72;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto label_73;

    case 9:
      current_block = (Rpc - LABEL_16_18);
      goto label_74;

    case 10:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_16_15);
      goto lambda_15;

    case 14:
      current_block = (Rpc - LABEL_16_29);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_16_19);
      goto lambda_88;

    case 16:
      current_block = (Rpc - LABEL_16_30);
      goto label_77;

    case 17:
      current_block = (Rpc - LABEL_16_31);
      goto label_78;

    case 18:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_62;

    case 19:
      current_block = (Rpc - LABEL_16_24);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_16_32);
      goto label_79;

    case 21:
      current_block = (Rpc - LABEL_16_25);
      goto lambda_26;

    case 22:
      current_block = (Rpc - LABEL_16_28);
      goto lambda_12;

    case 23:
      current_block = (Rpc - LABEL_16_36);
      goto label_80;

    case 24:
      current_block = (Rpc - LABEL_16_37);
      goto label_81;

    case 25:
      current_block = (Rpc - LABEL_16_38);
      goto continuation_31;

    case 26:
      current_block = (Rpc - LABEL_16_33);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_16_39);
      goto label_82;

    case 28:
      current_block = (Rpc - LABEL_16_35);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_16_40);
      goto continuation_34;

    case 30:
      current_block = (Rpc - LABEL_16_44);
      goto label_83;

    case 31:
      current_block = (Rpc - LABEL_16_45);
      goto label_84;

    case 32:
      current_block = (Rpc - LABEL_16_42);
      goto lambda_92;

    case 33:
      current_block = (Rpc - LABEL_16_46);
      goto label_85;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_non_trivial_closure_cons_87)
DEFLABEL (make_non_trivial_closure_cons_65)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_127;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_127;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_126)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_125;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_125;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_124)
  (Wrd34.Obj) = (Rsp [2]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_94;
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_93;

DEFLABEL (label_94)
  (Wrd198.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd198.Obj);

DEFLABEL (label_93)
DEFLABEL (label_123)
  (Wrd37.Obj) = (Rsp [1]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_122;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_121;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd47.Lng))))
    goto label_121;
  (Wrd39.Obj) = ((Wrd45.pObj) [17]);

DEFLABEL (label_120)
  (Wrd55.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (Wrd55.Obj))
    goto label_96;
  (Wrd56.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_16_15]);
  (Rsp [2]) = (Wrd57.Obj);

DEFLABEL (label_95)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (label_96)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_119;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd67.Lng))))
    goto label_119;
  (Wrd59.Obj) = ((Wrd65.pObj) [18]);

DEFLABEL (label_118)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_117;
  if (! ((Wrd59.Obj) == (current_block [OBJECT_16_5])))
    goto label_98;

DEFLABEL (label_97)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd182.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_19])));
  Rhp += 1;
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd182.pObj)));
  Wrd183 = Wrd182;
  (Wrd184.Obj) = (Rsp [2]);
  ((Wrd183.pObj) [2]) = (Wrd184.Obj);
  (Rsp [3]) = (Wrd181.Obj);
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_98)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_116;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd85.Lng))))
    goto label_116;
  (Wrd77.Obj) = ((Wrd83.pObj) [18]);

DEFLABEL (label_115)
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_114;
  (Wrd179.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if ((Wrd179.Lng) == 0)
    goto label_111;

DEFLABEL (label_110)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd119.Obj) = (Rsp [4]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 10))
    goto label_109;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [0]);
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd118.Lng))))
    goto label_109;
  (Wrd112.Obj) = ((Wrd116.pObj) [19]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_16_24);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_107;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd14.Lng))))
    goto label_107;
  (Wrd8.Obj) = ((Wrd12.pObj) [18]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_106)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_33]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_34]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_16_33);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_105;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_105;
  if (Rvl == (Wrd5.Obj))
    goto label_103;

DEFLABEL (label_104)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_38]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_16_24]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_16_38);

DEFLABEL (label_103)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_40]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_41]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_16_40);
  (Wrd9.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_102;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd18.Lng))))
    goto label_102;
  (Wrd10.Obj) = ((Wrd16.pObj) [22]);

DEFLABEL (label_101)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_100;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd38.Lng))))
    goto label_100;
  (Wrd30.Obj) = ((Wrd36.pObj) [18]);

DEFLABEL (label_99)
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_16_11]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_16_20]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_16_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_45]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_84)
  (Wrd30.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (current_block [OBJECT_16_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_44]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_83)
  (Wrd10.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_105)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_103;

DEFLABEL (label_107)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_16_4]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd121.Obj) = (Rsp [4]);
  (Wrd122.Obj) = (current_block [OBJECT_16_6]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd135.Obj) = (Rsp [2]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_113;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd134.Lng))))
    goto label_113;
  (Wrd126.Obj) = ((Wrd132.pObj) [22]);

DEFLABEL (label_112)
  (Wrd145.Obj) = (current_block [OBJECT_16_8]);
  (Wrd146.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd146.Obj);
  (Wrd144.pObj) = (& (Rhp [-2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd144.pObj)));
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd142.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (Wrd153.Obj) = (current_block [OBJECT_16_10]);
  (* (Rhp++)) = (Wrd153.Obj);
  (* (Rhp++)) = (Wrd147.Obj);
  (Wrd152.pObj) = (& (Rhp [-2]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd152.pObj)));
  (Wrd157.Obj) = (current_block [OBJECT_16_11]);
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = (Wrd150.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  (* (Rhp++)) = (Wrd154.Obj);
  (* (Rhp++)) = (Wrd146.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (Wrd165.Obj) = (current_block [OBJECT_16_12]);
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd146.Obj);
  (Wrd164.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd164.pObj)));
  (Wrd170.Obj) = (current_block [OBJECT_16_13]);
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd162.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (* (Rhp++)) = (Wrd167.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd178.Obj) = (current_block [OBJECT_16_14]);
  (* (Rhp++)) = (Wrd178.Obj);
  (* (Rhp++)) = (Wrd171.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd137.Obj) = (Rsp [2]);
  (Wrd138.Obj) = (current_block [OBJECT_16_7]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_74)
  (Wrd126.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_114)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_111;

DEFLABEL (label_116)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (current_block [OBJECT_16_4]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_71)
  (Wrd77.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd190.Obj) = (current_block [OBJECT_16_5]);
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_75)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_97;

DEFLABEL (label_119)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_16_4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_70)
  (Wrd59.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_16_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_69)
  (Wrd39.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_122)
  (Wrd195.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd195.Obj);
  (Wrd196.Obj) = (current_block [OBJECT_16_2]);
  (Rsp [2]) = (Wrd196.Obj);
  goto label_95;

DEFLABEL (label_125)
  (Wrd30.Obj) = (current_block [OBJECT_16_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_126;

DEFLABEL (lambda_89)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_16_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_133;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd13.Lng))))
    goto label_133;
  (Wrd5.Obj) = ((Wrd11.pObj) [18]);

DEFLABEL (label_132)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_128;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_128)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) == 0)
    goto label_130;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_129;

DEFLABEL (label_130)
  Rvl = (current_block [OBJECT_16_16]);

DEFLABEL (label_129)
DEFLABEL (label_131)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_133)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_76)
  (Wrd5.Obj) = Rvl;
  goto label_132;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_16_19);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_137;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd17.Lng))))
    goto label_137;
  (Wrd5.Obj) = ((Wrd15.pObj) [22]);

DEFLABEL (label_136)
  (Wrd32.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_135;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd53.Lng))))
    goto label_135;
  (Wrd41.Obj) = ((Wrd51.pObj) [15]);

DEFLABEL (label_134)
  (Wrd68.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_16_18]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd73.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd80.Obj) = (current_block [OBJECT_16_19]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd89.Obj) = (current_block [OBJECT_16_20]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [2]);
  (Wrd61.Obj) = (current_block [OBJECT_16_17]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_78)
  (Wrd41.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_16_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_77)
  (Wrd5.Obj) = Rvl;
  goto label_136;

DEFLABEL (lambda_90)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_16_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_16_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_42])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_91)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_16_28);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_143;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_143;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_142)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_141;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_140)
  (Wrd28.Obj) = (current_block [OBJECT_16_23]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 10)
    goto label_139;

DEFLABEL (label_138)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_139)
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd38.Lng))))
    goto label_138;
  Rvl = ((Wrd36.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_141)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_37]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_22]), 1);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_21]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_80)
  (Wrd5.Obj) = Rvl;
  goto label_142;

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_16_42);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_145;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_145;
  (Wrd5.Obj) = ((Wrd15.pObj) [15]);

DEFLABEL (label_144)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_145)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_16_17]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_46]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_85)
  (Wrd5.Obj) = Rvl;
  goto label_144;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_4 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_10 13
#define LABEL_17_11 15
#define LABEL_17_12 17
#define LABEL_17_14 19
#define LABEL_17_16 21
#define LABEL_17_17 23
#define LABEL_17_13 25
#define LABEL_17_21 27
#define LABEL_17_19 29
#define LABEL_17_20 31
#define LABEL_17_29 33
#define LABEL_17_31 35
#define LABEL_17_33 37
#define LABEL_17_37 39
#define LABEL_17_38 41
#define LABEL_17_39 43
#define LABEL_17_40 45
#define LABEL_17_41 47
#define LABEL_17_23 49
#define LABEL_17_24 51
#define LABEL_17_47 53
#define LABEL_17_27 55
#define LABEL_17_34 57
#define LABEL_17_50 59
#define LABEL_17_35 61
#define LABEL_17_52 63
#define LABEL_17_36 65
#define LABEL_17_54 67
#define LABEL_17_55 69
#define LABEL_17_56 71
#define LABEL_17_43 73
#define LABEL_17_48 75
#define LABEL_17_53 77
#define ENVIRONMENT_LABEL_17_3 135
#define DEBUGGING_LABEL_17_2 134
#define OBJECT_17_15 133
#define OBJECT_17_14 132
#define OBJECT_17_13 131
#define OBJECT_17_12 130
#define OBJECT_17_11 129
#define OBJECT_17_10 128
#define OBJECT_17_9 127
#define OBJECT_17_8 126
#define OBJECT_17_7 125
#define OBJECT_17_6 124
#define OBJECT_17_5 123
#define OBJECT_17_4 122
#define OBJECT_17_3 121
#define OBJECT_17_2 120
#define OBJECT_17_1 119
#define OBJECT_17_0 118
#define EXECUTE_CACHE_17_59 79
#define EXECUTE_CACHE_17_58 81
#define EXECUTE_CACHE_17_57 83
#define EXECUTE_CACHE_17_51 85
#define EXECUTE_CACHE_17_49 87
#define EXECUTE_CACHE_17_46 89
#define EXECUTE_CACHE_17_45 91
#define EXECUTE_CACHE_17_44 93
#define EXECUTE_CACHE_17_42 95
#define EXECUTE_CACHE_17_30 97
#define EXECUTE_CACHE_17_28 99
#define EXECUTE_CACHE_17_26 101
#define EXECUTE_CACHE_17_25 103
#define EXECUTE_CACHE_17_22 105
#define EXECUTE_CACHE_17_18 107
#define EXECUTE_CACHE_17_32 109
#define EXECUTE_CACHE_17_15 111
#define EXECUTE_CACHE_17_9 113
#define FREE_REFERENCE_17_1 116
#define FREE_REFERENCE_17_0 117
#define FREE_REFERENCES_LABEL_17_0 78
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd9;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd94;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_17_4);
      goto load_closure_environment_48;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto label_52;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto label_53;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto label_54;

    case 8:
      current_block = (Rpc - LABEL_17_14);
      goto label_55;

    case 9:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_36;

    case 10:
      current_block = (Rpc - LABEL_17_17);
      goto load_closure_parent_46;

    case 11:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_44;

    case 13:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_40;

    case 14:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_39;

    case 15:
      current_block = (Rpc - LABEL_17_29);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_17_31);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_17_33);
      goto loop_33;

    case 18:
      current_block = (Rpc - LABEL_17_37);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_17_38);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_17_39);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_17_40);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_17_41);
      goto label_60;

    case 23:
      current_block = (Rpc - LABEL_17_23);
      goto continuation_38;

    case 24:
      current_block = (Rpc - LABEL_17_24);
      goto continuation_37;

    case 25:
      current_block = (Rpc - LABEL_17_47);
      goto continuation_42;

    case 26:
      current_block = (Rpc - LABEL_17_27);
      goto continuation_41;

    case 27:
      current_block = (Rpc - LABEL_17_34);
      goto continuation_32;

    case 28:
      current_block = (Rpc - LABEL_17_50);
      goto label_61;

    case 29:
      current_block = (Rpc - LABEL_17_35);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_17_52);
      goto continuation_27;

    case 31:
      current_block = (Rpc - LABEL_17_36);
      goto continuation_18;

    case 32:
      current_block = (Rpc - LABEL_17_54);
      goto label_62;

    case 33:
      current_block = (Rpc - LABEL_17_55);
      goto label_63;

    case 34:
      current_block = (Rpc - LABEL_17_56);
      goto continuation_26;

    case 35:
      current_block = (Rpc - LABEL_17_43);
      goto continuation_24;

    case 36:
      current_block = (Rpc - LABEL_17_48);
      goto continuation_43;

    case 37:
      current_block = (Rpc - LABEL_17_53);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_closure_environment_65)
DEFLABEL (load_closure_environment_48)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_83)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_82;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_82;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_81)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_80;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_80;
  (Wrd29.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_79)
  (Wrd41.Obj) = (Rsp [0]);
  if (! ((Wrd41.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_68;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd7.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rsp [3]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (Rsp [2]) = (Wrd12.Obj);
  Rdl = (& (Rsp [7]));
  goto load_closure_parent_46;

DEFLABEL (label_69)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_78;
  Wrd14 = Wrd18;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_76;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_76;
  (Wrd20.Obj) = ((Wrd26.pObj) [3]);

DEFLABEL (label_75)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd20.Obj) == (Wrd36.Obj))
    goto label_70;
  (Wrd37.Obj) = (current_block [OBJECT_17_5]);
  (Rsp [3]) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (label_70)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_74;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd48.Lng))))
    goto label_74;
  (Wrd42.Obj) = ((Wrd46.pObj) [15]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_73)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.pObj) = (& (Rsp [3]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_72;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_72;
  (Wrd65.Obj) = ((Wrd69.pObj) [4]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_71)
  Rdl = (& (Rsp [3]));
  goto load_closure_parent_46;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (Rsp [1]) = Rvl;
  goto loop_33;

DEFLABEL (label_72)
  (Wrd74.Obj) = (Rsp [4]);
  (Wrd75.Obj) = (current_block [OBJECT_17_2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_17_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_17_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_53)
  (Wrd20.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_10])), (Wrd15.pObj));

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd37.Obj) = (current_block [OBJECT_17_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_17_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_50)
  (Wrd12.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd49.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd62.uLng) == 10)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_86)
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd60.Lng))))
    goto label_85;
  (Wrd52.Obj) = ((Wrd58.pObj) [19]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd52.Obj);
  goto label_83;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (load_closure_parent_66)
DEFLABEL (load_closure_parent_46)
  DLINK_INTERRUPT_CHECK (25, LABEL_17_17);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;

DEFLABEL (label_92)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_17_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_88;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_26]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_87)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_25]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_17_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_46]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_17_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_45]));

DEFLABEL (label_88)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_17_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;

DEFLABEL (label_90)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_48]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_49]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_17_48);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_22]));

DEFLABEL (label_89)
  (Wrd25.Obj) = (current_block [OBJECT_17_7]);
  (Wrd26.Obj) = (current_block [OBJECT_17_8]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_17_9]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_87;

DEFLABEL (label_91)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_47]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_17_14]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_17_47);
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  goto label_90;

DEFLABEL (label_93)
  (Wrd18.Obj) = (Rsp [0]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_95;

DEFLABEL (label_94)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_95)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_92;

DEFLABEL (loop_67)
DEFLABEL (loop_33)
  INTERRUPT_CHECK (26, LABEL_17_33);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_17_8])))
    goto label_96;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_36]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_117;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_116)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_115;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_114)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_113;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd41.Lng))))
    goto label_113;
  (Wrd35.Obj) = ((Wrd39.pObj) [10]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_112)
  (Wrd49.Obj) = (Rsp [0]);
  if (! ((Wrd49.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_107;

DEFLABEL (label_106)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_43]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_17_43);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_98;

DEFLABEL (label_97)
  (Wrd7.Obj) = (Rsp [8]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_59]));

DEFLABEL (label_98)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_58]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_17_56);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_52]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_57]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_17_52);
  (Wrd29.Obj) = (current_block [OBJECT_17_8]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_17_9]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_105)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_104;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_103)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_102;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_101)
  (Wrd24.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_46]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_45]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_17_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_51]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_17_34);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_100;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_33;

DEFLABEL (label_100)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_50]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_15]), 1);

DEFLABEL (label_61)
  (Wrd6.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_55]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_15]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_54]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_11]), 1);

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_107)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_111;
  Wrd51 = Wrd55;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_109;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd65.Lng))))
    goto label_109;
  (Wrd57.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_108)
  (Wrd73.Obj) = (* (Rsp++));
  if (! ((Wrd57.Obj) == (Wrd73.Obj)))
    goto label_106;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_31]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_42]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_17_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (current_block [OBJECT_17_10]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_17_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd94.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd94.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_30]));

DEFLABEL (label_109)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_17_13]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_41]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_60)
  (Wrd57.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_40])), (Wrd52.pObj));

DEFLABEL (label_59)
  (Wrd51.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (current_block [OBJECT_17_12]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_39]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_38]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_11]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_37]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_11]), 1);

DEFLABEL (label_56)
  (Wrd17.Obj) = Rvl;
  goto label_116;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_36);
  (* (--Rsp)) = Rvl;
  goto label_105;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_9 13
#define LABEL_18_12 15
#define ENVIRONMENT_LABEL_18_3 29
#define DEBUGGING_LABEL_18_2 28
#define OBJECT_18_4 27
#define OBJECT_18_3 26
#define OBJECT_18_2 25
#define OBJECT_18_1 24
#define OBJECT_18_0 23
#define EXECUTE_CACHE_18_13 17
#define EXECUTE_CACHE_18_11 19
#define EXECUTE_CACHE_18_10 21
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgrval_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
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
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_18_4);
      goto bypass_closure_referenceP_8;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bypass_closure_referenceP_15)
DEFLABEL (bypass_closure_referenceP_8)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_22)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_21;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_21;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_19;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd42.Lng))))
    goto label_19;
  (Wrd36.Obj) = ((Wrd40.pObj) [17]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_18)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [18]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_18_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_18_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd30.Obj) = (current_block [OBJECT_18_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_10 11
#define LABEL_12 13
#define LABEL_11 15
#define LABEL_15 17
#define LABEL_14 19
#define LABEL_17 21
#define LABEL_16 23
#define LABEL_18 25
#define LABEL_20 27
#define LABEL_19 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define ENVIRONMENT_LABEL_3 68
#define DEBUGGING_LABEL_2 67
#define PURIFICATION_ROOT 66
#define OBJECT_18 65
#define OBJECT_17 64
#define OBJECT_16 63
#define OBJECT_15 62
#define OBJECT_14 61
#define OBJECT_13 60
#define OBJECT_12 59
#define OBJECT_11 58
#define OBJECT_10 57
#define OBJECT_9 56
#define OBJECT_8 55
#define OBJECT_7 54
#define OBJECT_6 53
#define OBJECT_5 52
#define OBJECT_4 51
#define OBJECT_3 50
#define OBJECT_2 49
#define OBJECT_1 48
#define OBJECT_0 47
#define EXECUTE_CACHE_13 37
#define EXECUTE_CACHE_9 39
#define FREE_REFERENCE_1 42
#define FREE_REFERENCE_0 43
#define GLOBAL_EXECUTE_CACHE_5 45
#define FREE_REFERENCES_LABEL_0 36
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rgrval_so_72d936ae7f676598 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_8);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_15;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_19;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto expression_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_10)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_19)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_18)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	3,
	2,
	2,
	2,
	0,
	1,
	2,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 18)
      goto label_17;
    blocks = (current_block [OBJECT_18]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_17)
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
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_29;
  Wrd12 = Wrd16;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_27;
  Wrd9 = Wrd13;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_25;
  Wrd9 = Wrd13;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_21;
  Wrd9 = Wrd13;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_17]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd10.pObj));

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_11)
  (Wrd12.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rgrval_so_72d936ae7f676598 [18] =
  {
    { "rgrval_so_code_1", 4, rgrval_so_code_1 },
    { "rgrval_so_code_2", 6, rgrval_so_code_2 },
    { "rgrval_so_code_3", 2, rgrval_so_code_3 },
    { "rgrval_so_code_4", 5, rgrval_so_code_4 },
    { "rgrval_so_code_5", 4, rgrval_so_code_5 },
    { "rgrval_so_code_6", 2, rgrval_so_code_6 },
    { "rgrval_so_code_7", 21, rgrval_so_code_7 },
    { "rgrval_so_code_8", 41, rgrval_so_code_8 },
    { "rgrval_so_code_9", 21, rgrval_so_code_9 },
    { "rgrval_so_code_10", 25, rgrval_so_code_10 },
    { "rgrval_so_code_11", 3, rgrval_so_code_11 },
    { "rgrval_so_code_12", 9, rgrval_so_code_12 },
    { "rgrval_so_code_13", 5, rgrval_so_code_13 },
    { "rgrval_so_code_14", 3, rgrval_so_code_14 },
    { "rgrval_so_code_15", 16, rgrval_so_code_15 },
    { "rgrval_so_code_16", 34, rgrval_so_code_16 },
    { "rgrval_so_code_17", 38, rgrval_so_code_17 },
    { "rgrval_so_code_18", 7, rgrval_so_code_18 }
  };

int
decl_rgrval_so_72d936ae7f676598 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgrval_so_72d936ae7f676598);
  return (0);
}

DECLARE_COMPILED_CODE ("rgrval.so", 17, decl_rgrval_so_72d936ae7f676598, rgrval_so_72d936ae7f676598)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgrval_so_data_72d936ae7f676598 [5387] =
  "\x9b\x01\x30\xec\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82"
  "\x88\x82\xc2\x83\xc2\xbb\x80\x0d\xbc\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x22\x29"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x84\x88\x0d\xbf\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\xb3\x82\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x1c\x08\x0d"
  "\x1c\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d"
  "\x1c\x08\x0d\x02\x80\x02\x84\x82\xb3\x83\x0d\x1c\x0d\x1c\x1b\x0d"
  "\x0d\x24\x28\xb1\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x82\x83"
  "\xb3\x81\x0d\x02\x0d\x1b\x1b\x08\x1b\x24\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x02\x0d\x0d\x0d\x0d\x0d"
  "\xc1\x1c\xb3\x02\x0d\x0d\xb7\x24\x28\x0d\xbf\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x84\xc1\x1c\x85"
  "\x1b\x1b\x86\x02\x02\x02\x02\xb3\x02\x08\x0d\x1c\x25\x0d\x1b\x24"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\xb1\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\xb3\x02\x28"
  "\xb7\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x83\x0c\x1b\x02\xb3\x02\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x02\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x80\xb3\x02\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0c"
  "\x02\x02\xb3\x83\x28\xb7\x28\x0d\xbf\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x02\x1b\x84\x1b\x0d\x1b\x02\x07\x0c\x0d\x1b\x02\x0d\x80\x08"
  "\x17\x02\x02\x81\x02\x02\x0c\xb3\x83\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x80\x02\x1b\x0c\x1b\x08\x1b\x07\x0c\x02"
  "\x82\x83\xb3\x02\x0d\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x80\x02\xb3\x83\x28\xb7\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x17"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\xc3"
  "\xb4\x1b\x1b\x99\x1b\x2a\xb6\x2a\x99\xb1\x0d\x99\xb5\x2a\xb2\x2a"
  "\x99\x28\x0d\x26\x0d\xb4\x24\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x67\x65"
  "\x6e\x2f\x72\x67\x72\x76\x61\x6c\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x03\x11\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x76\x61"
  "\x6c\x75\x65\x2a\x02\x15\x0a\x81\x87\x02\x14\x08\x81\x87\x02\x13"
  "\x06\x81\x87\x02\x12\x04\x85\x08\x09\x0f\x02\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x0f\x72\x76\x61\x6c\x75\x65\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x73\x02\x1b\x0e\x81\x83\x02\x1a\x0c\x81\x85\x02\x19\x0a\x81\x85"
  "\x02\x18\x08\x81\x83\x02\x17\x06\x81\x83\x02\x16\x04\x83\x04\x0d"
  "\x17\x02\x1d\x06\x81\x85\x02\x1c\x04\x83\x04\x05\x02\x13\x69\x64"
  "\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x02\x05\x18\x6c\x6f\x61\x64\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72"
  "\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x09\x04\x11\x73\x63\x66"
  "\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x0a\x03\x22"
  "\x0c\x81\x85\x02\x21\x0a\x81\x87\x02\x20\x08\x81\x87\x02\x1f\x06"
  "\x81\x87\x02\x1e\x04\x84\x06\x0b\x15\x0b\x02\x03\x12\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0c\x02"
  "\x26\x0a\x81\x85\x02\x25\x08\x81\x83\x02\x24\x06\x81\x85\x02\x23"
  "\x04\x83\x04\x09\x11\x0d\x02\x06\x66\x65\x74\x63\x68\x0e\x0c\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0f\x28\x06\x81\x85\x02"
  "\x27\x04\x83\x04\x05\x0b\x10\x02\x08\x0e\x1f\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75"
  "\x6c\x74\x3a\x6c\x6f\x6f\x6b\x75\x70\x0f\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x63\x61\x63\x68\x65\x11\x17\x69\x67\x6e\x6f\x72\x65"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x73"
  "\x14\x0a\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67"
  "\x12\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61\x6c"
  "\x75\x65\x2f\x73\x69\x6d\x70\x6c\x65\x13\x0a\x07\x76\x61\x6c\x75"
  "\x65\x73\x0f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x65\x74\x63"
  "\x68\x06\x03\x07\x14\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x76\x61\x6c\x75\x65\x04\x05\x6d\x65\x6d\x71\x05\x09"
  "\x05\x1a\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x61\x63\x68\x65"
  "\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x14\x04\x1b\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61\x6c\x75\x65\x2f\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x15\x04\x1d\x77\x72\x61\x70\x2d"
  "\x77\x69\x74\x68\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x65\x6e\x74\x72\x79\x16\x03\x18\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63"
  "\x6b\x17\x06\x21\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f"
  "\x6f\x6b\x75\x70\x04\x17\x69\x6e\x74\x65\x72\x6e\x2d\x73\x63\x6f"
  "\x64\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x0b\x3d\x2c\x81"
  "\x8d\x02\x3c\x2a\x81\x89\x02\x3b\x28\x81\x85\x02\x3a\x26\x81\x85"
  "\x02\x39\x24\x81\x87\x02\x38\x22\x81\x87\x02\x37\x20\x81\x85\x02"
  "\x36\x1e\x81\x85\x02\x35\x1c\x81\x8d\x02\x34\x1a\x81\x87\x02\x33"
  "\x18\x81\x87\x02\x32\x16\x81\x85\x02\x31\x14\x81\x8d\x02\x30\x12"
  "\x81\x87\x02\x2f\x10\x81\x8b\x02\x2e\x0e\x81\x89\x02\x2d\x0c\x81"
  "\x87\x02\x2c\x0a\x81\x87\x02\x2b\x08\x81\x85\x02\x2a\x06\x81\x83"
  "\x02\x29\x04\x83\x04\x2b\x55\x18\x02\x09\x0a\x73\x6e\x6f\x64\x65"
  "\x2d\x63\x66\x67\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70"
  "\x65\x33\x28\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x63\x61\x63\x68\x65"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x0e\x11\x0a\x02\x02\x19"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x05\x09\x04\x14\x72\x74\x6c\x3a"
  "\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11"
  "\x04\x16\x05\x2a\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61"
  "\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x04\x13\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70\x65\x2d\x74\x65\x73"
  "\x74\x04\x0f\x68\x6f\x6f\x6b\x73\x2d\x63\x6f\x6e\x6e\x65\x63\x74"
  "\x21\x03\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x04\x0c\x68\x6f\x6f"
  "\x6b\x73\x2d\x75\x6e\x69\x6f\x6e\x0a\x66\x54\x81\x97\x02\x65\x52"
  "\x81\x95\x02\x64\x50\x81\x95\x02\x63\x4e\x81\x93\x02\x62\x4c\x81"
  "\x99\x02\x61\x4a\x81\x97\x02\x60\x48\x81\x93\x02\x5f\x46\x81\x97"
  "\x02\x5e\x44\x81\x95\x02\x5d\x42\x81\x93\x02\x5c\x40\x81\x97\x02"
  "\x5b\x3e\x81\x95\x02\x5a\x3c\x81\x93\x02\x59\x3a\x81\x91\x02\x58"
  "\x38\x81\x8f\x02\x57\x36\x81\x97\x02\x56\x34\x81\x95\x02\x55\x32"
  "\x81\x91\x02\x54\x30\x81\x93\x02\x53\x2e\x81\x91\x02\x52\x2c\x81"
  "\x8f\x02\x51\x2a\x81\x8f\x02\x50\x28\x81\x93\x02\x4f\x26\x81\x91"
  "\x02\x4e\x24\x81\x8f\x02\x4d\x22\x81\x93\x02\x4c\x20\x81\x91\x02"
  "\x4b\x1e\x81\x8f\x02\x4a\x1c\x81\x93\x02\x49\x1a\x81\x91\x02\x48"
  "\x18\x81\x8d\x02\x47\x16\x81\x8b\x02\x46\x14\x81\x85\x02\x45\x12"
  "\x81\x89\x02\x44\x10\x81\x87\x02\x43\x0e\x81\x85\x02\x42\x0c\x81"
  "\x85\x02\x41\x0a\x81\x89\x02\x40\x08\x81\x8f\x02\x3f\x06\x81\x87"
  "\x02\x3e\x04\x85\x08\x53\x76\x16\x02\x0a\x17\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x74\x79\x70"
  "\x65\x1c\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x74\x6f\x20\x6f"
  "\x70\x65\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1b\x0e\x6f"
  "\x70\x65\x6e\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x0e\x6f\x70\x65"
  "\x6e\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x03\x69\x63\x0b\x64\x65"
  "\x73\x63\x65\x6e\x64\x61\x6e\x74\x07\x6e\x6f\x72\x6d\x61\x6c\x04"
  "\x63\x61\x72\x19\x12\x08\x63\x6c\x6f\x73\x75\x72\x65\x10\x74\x72"
  "\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x02\x03\x13"
  "\x65\x6e\x71\x75\x65\x75\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x21\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x79"
  "\x70\x65\x04\x1e\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d\x74\x72\x69"
  "\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e"
  "\x73\x1a\x03\x1e\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x72\x65\x64\x69\x72\x65\x63\x74\x69\x6f"
  "\x6e\x1b\x03\x1e\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f"
  "\x6e\x1c\x03\x0d\x6d\x61\x6b\x65\x2d\x69\x63\x2d\x63\x6f\x6e\x73"
  "\x1d\x04\x06\x65\x72\x72\x6f\x72\x1e\x03\x1a\x6d\x61\x6b\x65\x2d"
  "\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x63\x6f\x6e\x73\x1f\x05\x19\x6c\x6f\x61\x64\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20"
  "\x05\x09\x04\x0a\x0c\x7b\x2c\x81\x85\x02\x7a\x2a\x81\x85\x02\x79"
  "\x28\x81\x89\x02\x78\x26\x81\x87\x02\x77\x24\x81\x85\x02\x76\x22"
  "\x81\x85\x02\x75\x20\x81\x85\x02\x74\x1e\x81\x85\x02\x73\x1c\x81"
  "\x87\x02\x72\x1a\x81\x87\x02\x71\x18\x81\x87\x02\x70\x16\x81\x85"
  "\x02\x6f\x14\x81\x85\x02\x6e\x12\x81\x85\x02\x6d\x10\x81\x85\x02"
  "\x6c\x0e\x81\x85\x02\x6b\x0c\x81\x85\x02\x6a\x0a\x81\x83\x02\x69"
  "\x08\x81\x85\x02\x68\x06\x81\x83\x02\x67\x04\x83\x04\x2b\x54\x09"
  "\x02\x0b\x10\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70\x61"
  "\x69\x72\x11\x6d\x61\x63\x68\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x21\x04\x63\x64\x72\x22\x0e\x0f\x10\x08\x13\x0f\x09"
  "\x17\x2a\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x73\x2a\x23\x02\x0e\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x6e\x61\x6d\x65\x23\x03\x04\x04\x6d\x61\x70\x23\x03"
  "\x0b\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x03\x0c\x03\x03\x1a"
  "\x73\x63\x6f\x64\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x09\x12\x73\x63\x6f\x64\x65"
  "\x2f\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x07\x94\x01\x34"
  "\x81\x85\x02\x93\x01\x32\x81\x89\x02\x92\x01\x30\x81\x91\x02\x91"
  "\x01\x2e\x81\x8f\x02\x90\x01\x2c\x81\x89\x02\x8f\x01\x2a\x81\x87"
  "\x02\x8e\x01\x28\x81\x93\x02\x8d\x01\x26\x81\x91\x02\x8c\x01\x24"
  "\x81\x91\x02\x8b\x01\x22\x81\x8d\x02\x8a\x01\x20\x81\x89\x02\x89"
  "\x01\x1e\x81\x87\x02\x88\x01\x1c\x81\x91\x02\x87\x01\x1a\x81\x8f"
  "\x02\x86\x01\x18\x81\x8d\x02\x85\x01\x16\x81\x89\x02\x84\x01\x14"
  "\x81\x8b\x02\x83\x01\x12\x81\x87\x02\x82\x01\x10\x81\x87\x02\x81"
  "\x01\x0e\x81\x89\x02\x80\x01\x0c\x81\x87\x02\x7f\x0a\x81\x83\x02"
  "\x7e\x08\x81\x8d\x02\x7d\x06\x81\x8b\x02\x7c\x04\x83\x04\x33\x57"
  "\x24\x02\x0c\x15\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x25\x10\x65\x6e\x74\x72\x79\x3a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x26\x0f\x03\x02\x97\x01\x08"
  "\x81\x83\x02\x96\x01\x06\x81\x83\x02\x95\x01\x04\x83\x04\x07\x12"
  "\x27\x02\x0d\x11\x40\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x69"
  "\x6f\x6e\x3a\x20\x55\x6e\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x20"
  "\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x22\x12\x13\x05\x1b\x66\x69\x6e\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x2f\x73\x69\x6d"
  "\x70\x6c\x65\x03\x1c\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x05\x19\x6d\x61\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72"
  "\x65\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x28\x04\xa0\x01\x14\x81"
  "\x87\x02\x9f\x01\x12\x81\x89\x02\x9e\x01\x10\x81\x89\x02\x9d\x01"
  "\x0e\x81\x89\x02\x9c\x01\x0c\x81\x87\x02\x9b\x01\x0a\x81\x85\x02"
  "\x9a\x01\x08\x81\x85\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x83"
  "\x04\x13\x24\x29\x02\x0e\x08\x13\x03\x17\x06\x11\x72\x65\x64\x69"
  "\x72\x65\x63\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2a\x03\x1e\x73"
  "\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x04\xa5\x01\x0c"
  "\x81\x87\x02\xa4\x01\x0a\x81\x89\x02\xa3\x01\x08\x81\x85\x02\xa2"
  "\x01\x06\x81\x83\x02\xa1\x01\x04\x83\x04\x0b\x18\x2b\x02\x0f\x0e"
  "\x14\x06\x21\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f"
  "\x72\x2d\x6f\x72\x2d\x73\x65\x6c\x66\x2d\x3e\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x05\x28\x03\xa8\x01\x08\x81\x89\x02\xa7\x01\x06\x81"
  "\x8b\x02\xa6\x01\x04\x86\x0a\x07\x14\x2c\x02\x10\x31\x6d\x61\x6b"
  "\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x64\x69\x72\x65"
  "\x63\x74\x69\x6f\x6e\x3a\x20\x6e\x6f\x6e\x2d\x73\x68\x61\x72\x65"
  "\x64\x20\x72\x65\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x12\x11\x03"
  "\x03\x1b\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x65\x6e\x74\x72\x79\x2d\x6e\x75\x6d\x62\x65\x72\x05\x1e\x04\x1f"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x61\x64\x6a\x75\x73\x74\x6d\x65\x6e\x74\x2d\x04"
  "\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x3d\x2e\x05\x17\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x64\x69\x73\x74"
  "\x61\x6e\x63\x65\x04\x11\x72\x74\x6c\x3a\x62\x75\x6d\x70\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x04\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64"
  "\x3a\x2d\x09\xb8\x01\x22\x81\x91\x02\xb7\x01\x20\x81\x89\x02\xb6"
  "\x01\x1e\x81\x8f\x02\xb5\x01\x1c\x81\x8d\x02\xb4\x01\x1a\x81\x8d"
  "\x02\xb3\x01\x18\x81\x8d\x02\xb2\x01\x16\x81\x8d\x02\xb1\x01\x14"
  "\x81\x8d\x02\xb0\x01\x12\x81\x8b\x02\xaf\x01\x10\x81\x89\x02\xae"
  "\x01\x0e\x81\x89\x02\xad\x01\x0c\x81\x87\x02\xac\x01\x0a\x81\x87"
  "\x02\xab\x01\x08\x81\x87\x02\xaa\x01\x06\x81\x8d\x02\xa9\x01\x04"
  "\x85\x08\x21\x3b\x2f\x02\x11\x34\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e"
  "\x2d\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x2d\x63\x6f\x6e\x73\x3a\x20\x64\x69\x73\x61\x70\x70\x65\x61\x72"
  "\x69\x6e\x67\x20\x65\x6e\x74\x72\x69\x65\x73\x08\x19\x25\x0d\x63"
  "\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75\x72\x65\x26\x0f\x35\x6d\x61"
  "\x6b\x65\x2d\x6e\x6f\x6e\x2d\x74\x72\x69\x76\x69\x61\x6c\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x73\x3a\x20\x4e\x6f\x6e"
  "\x2d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x20\x63\x6c\x6f\x73\x75"
  "\x72\x65\x0d\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21"
  "\x0b\x12\x63\x6f\x6e\x73\x2d\x6d\x75\x6c\x74\x69\x63\x6c\x6f\x73"
  "\x75\x72\x65\x01\x16\x13\x12\x11\x37\x6d\x61\x6b\x65\x2d\x6e\x6f"
  "\x6e\x2d\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x63\x6f\x6e\x73\x3a\x20\x43\x6f\x6e\x73\x69\x6e\x67\x20"
  "\x74\x72\x69\x76\x69\x61\x6c\x20\x63\x6c\x6f\x73\x75\x72\x65\x04"
  "\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x03\x19\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x65\x6e\x63\x6f\x64\x69"
  "\x6e\x67\x04\x1e\x04\x23\x03\x08\x72\x65\x76\x65\x72\x73\x65\x03"
  "\x07\x6c\x65\x6e\x67\x74\x68\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76"
  "\x65\x63\x74\x6f\x72\x08\xda\x01\x46\x81\x87\x02\xd9\x01\x44\x81"
  "\x87\x02\xd8\x01\x42\x81\x8d\x02\xd7\x01\x40\x81\x8d\x02\xd6\x01"
  "\x3e\x81\x8b\x02\xd5\x01\x3c\x81\x83\x02\xd4\x01\x3a\x81\x8b\x02"
  "\xd3\x01\x38\x81\x8d\x02\xd2\x01\x36\x81\x8b\x02\xd1\x01\x34\x81"
  "\x83\x02\xd0\x01\x32\x81\x83\x02\xcf\x01\x30\x83\x04\xce\x01\x2e"
  "\x83\x04\xcd\x01\x2c\x81\x8b\x02\xcc\x01\x2a\x81\x8b\x02\xcb\x01"
  "\x28\x81\x89\x02\xca\x01\x26\x81\x89\x02\xc9\x01\x24\x81\x87\x02"
  "\xc8\x01\x22\x81\x87\x02\xc7\x01\x20\x81\x83\x02\xc6\x01\x1e\x83"
  "\x04\xc5\x01\x1c\x81\x8d\x02\xc4\x01\x1a\x81\x8b\x02\xc3\x01\x18"
  "\x81\x89\x02\xc2\x01\x16\x81\x89\x02\xc1\x01\x14\x81\x91\x02\xc0"
  "\x01\x12\x81\x89\x02\xbf\x01\x10\x81\x89\x02\xbe\x01\x0e\x81\x89"
  "\x02\xbd\x01\x0c\x81\x89\x02\xbc\x01\x0a\x81\x89\x02\xbb\x01\x08"
  "\x81\x85\x02\xba\x01\x06\x81\x85\x02\xb9\x01\x04\x84\x06\x45\x70"
  "\x26\x02\x12\x22\x2e\x6c\x6f\x61\x64\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x20\x62"
  "\x61\x64\x20\x63\x6c\x6f\x73\x75\x72\x65\x20\x63\x6f\x6e\x74\x65"
  "\x78\x74\x0a\x19\x1a\x6b\x6e\x6f\x77\x6e\x20\x69\x67\x6e\x6f\x72"
  "\x61\x62\x6c\x65\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0e\x0f"
  "\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x62\x6c\x6f\x63\x6b\x20\x74"
  "\x79\x70\x65\x0f\x13\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65"
  "\x2f\x63\x6c\x6f\x73\x75\x72\x65\x12\x03\x03\x0a\x69\x63\x2d\x62"
  "\x6c\x6f\x63\x6b\x3f\x04\x1e\x05\x1e\x03\x15\x69\x63\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x75\x73\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x3f\x04"
  "\x14\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69\x63\x2d\x6c\x6f\x63\x61"
  "\x74\x69\x76\x65\x03\x1b\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x66\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74"
  "\x03\x0c\x03\x13\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x3f\x03\x1f\x03\x1e\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x6f\x72\x2d\x76"
  "\x69\x72\x74\x75\x61\x6c\x3f\x03\x1c\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x04\x11\x04\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61"
  "\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x6f\x66\x66\x73"
  "\x65\x74\x03\x17\x04\x0a\x03\x17\x62\x6c\x6f\x63\x6b\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x03\x1a"
  "\x62\x79\x70\x61\x73\x73\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x25\x04\x16\x66\x69\x6e\x64"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x13\x80\x02\x4e\x81\x95\x02\xff\x01\x4c\xfd\xff\x03\xfe\x01"
  "\x4a\x81\x85\x02\xfd\x01\x48\x81\x85\x02\xfc\x01\x46\x81\x97\x02"
  "\xfb\x01\x44\x81\x97\x02\xfa\x01\x42\x81\x93\x02\xf9\x01\x40\x81"
  "\x85\x02\xf8\x01\x3e\x81\x91\x02\xf7\x01\x3c\x81\x8d\x02\xf6\x01"
  "\x3a\x81\x8d\x02\xf5\x01\x38\xfd\xff\x03\xf4\x01\x36\xfd\xff\x03"
  "\xf3\x01\x34\xfd\xff\x03\xf2\x01\x32\xfd\xff\x03\xf1\x01\x30\x81"
  "\x87\x02\xf0\x01\x2e\x81\x85\x02\xef\x01\x2c\x81\x83\x02\xee\x01"
  "\x2a\x81\x95\x02\xed\x01\x28\x81\x95\x02\xec\x01\x26\x81\x8d\x02"
  "\xeb\x01\x24\x81\x85\x02\xea\x01\x22\x81\x85\x02\xe9\x01\x20\xfd"
  "\xff\x03\xe8\x01\x1e\xfd\xff\x03\xe7\x01\x1c\xfd\xff\x03\xe6\x01"
  "\x1a\x81\x8d\x02\xe5\x01\x18\xff\xff\x03\xe4\x01\x16\xfd\xff\x03"
  "\xe3\x01\x14\x81\x93\x02\xe2\x01\x12\x81\x8b\x02\xe1\x01\x10\x81"
  "\x8d\x02\xe0\x01\x0e\x81\x8b\x02\xdf\x01\x0c\x81\x8b\x02\xde\x01"
  "\x0a\x81\x89\x02\xdd\x01\x08\x81\x89\x02\xdc\x01\x06\x85\x08\xdb"
  "\x01\x04\x81\x87\x02\x4d\x88\x01\x23\x02\x13\x12\x11\x03\x04\x2e"
  "\x04\x2d\x04\x87\x02\x10\x81\x89\x02\x86\x02\x0e\x81\x87\x02\x85"
  "\x02\x0c\x81\x85\x02\x84\x02\x0a\x81\x83\x02\x83\x02\x08\x81\x83"
  "\x02\x82\x02\x06\x81\x83\x02\x81\x02\x04\x83\x04\x0f\x1e\x2e\x13"
  "\x2d\x2d\x2e\x04\x23\x06\x26\x04\x2f\x04\x2c\x04\x2b\x04\x29\x04"
  "\x27\x04\x24\x04\x0a\x25\x20\x1a\x28\x2a\x1b\x1c\x1f\x1d\x0a\x0a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x09\x04\x14\x16\x04\x0a\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x18\x04\x06\x62\x6c\x6f\x63\x6b"
  "\x10\x04\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0d\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x15\x13"
  "\x0b\x04\x04\x10\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x76\x61"
  "\x6c\x75\x65\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x0d\x72\x76\x61\x6c\x75\x65\x2d\x74"
  "\x79\x70\x65\x73\x03\x04\x12\x6d\x61\x6b\x65\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x2d\x74\x61\x62\x6c\x65\x05\x1a\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61\x62\x6c\x65\x2d\x65\x6e"
  "\x74\x72\x79\x03\x11\x24\x80\x80\x04\x10\x22\x81\x81\x02\x0f\x20"
  "\x81\x81\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81"
  "\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x83"
  "\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02"
  "\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02"
  "\x06\x81\x89\x02\x01\x04\x81\x83\x02\x23\x45";

SCHEME_OBJECT *
rgrval_so_data_72d936ae7f676598 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgrval_so_data_72d936ae7f676598 [0]))), (sizeof (prog_rgrval_so_data_72d936ae7f676598)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_23]));
}

DECLARE_COMPILED_DATA_NS ("rgrval.so", rgrval_so_data_72d936ae7f676598)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgrval.so", "e2a16b92046cece1")
