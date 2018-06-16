/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_0 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto analyze_file_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_file_4)
DEFLABEL (analyze_file_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
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
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_11 11
#define LABEL_2_10 13
#define LABEL_2_13 15
#define LABEL_2_14 17
#define ENVIRONMENT_LABEL_2_3 33
#define DEBUGGING_LABEL_2_2 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_16 19
#define EXECUTE_CACHE_2_15 21
#define EXECUTE_CACHE_2_12 23
#define EXECUTE_CACHE_2_9 25
#define EXECUTE_CACHE_2_7 27
#define FREE_REFERENCE_2_0 30
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto analyze_top_level_9;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_top_level_13)
DEFLABEL (analyze_top_level_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_2_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-4]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_6 7
#define LABEL_3_5 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_9 15
#define LABEL_3_13 17
#define TAG_3_14 7
#define LABEL_3_16 19
#define LABEL_3_15 21
#define LABEL_3_18 23
#define LABEL_3_21 25
#define LABEL_3_22 27
#define TAG_3_23 12
#define LABEL_3_19 29
#define TAG_3_20 13
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_17 31
#define EXECUTE_CACHE_3_12 33
#define EXECUTE_CACHE_3_8 35
#define FREE_REFERENCES_LABEL_3_0 30
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
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
      goto sort_expressions_20;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_31;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto lambda_33;

    case 13:
      current_block = (Rpc - LABEL_3_19);
      goto lambda_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_expressions_28)
DEFLABEL (sort_expressions_20)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_3_0])))
    goto label_34;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [2]));
  goto lambda_2;

DEFLABEL (label_35)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.pObj) = (& (Rsp [1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_2;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
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

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_29)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_30)
DEFLABEL (lambda_2)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_10);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_39;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_38)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (label_39)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_23)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_41)
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_22])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  Rvl = (Wrd27.Obj);

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_45;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_44)
  (Wrd52.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
  Rhp += 2;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd58 = Wrd55;
  (Wrd59.Obj) = (Rsp [1]);
  ((Wrd58.pObj) [2]) = (Wrd59.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  ((Wrd58.pObj) [3]) = (Wrd57.Obj);
  Rvl = (Wrd54.Obj);
  goto label_40;

DEFLABEL (label_45)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_26)
  (Wrd34.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_3_22);

DEFLABEL (lambda_13)
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

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_3_19);

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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define LABEL_4_7 9
#define LABEL_4_12 11
#define LABEL_4_13 13
#define ENVIRONMENT_LABEL_4_3 31
#define DEBUGGING_LABEL_4_2 30
#define OBJECT_4_0 29
#define EXECUTE_CACHE_4_15 15
#define EXECUTE_CACHE_4_14 17
#define EXECUTE_CACHE_4_11 19
#define EXECUTE_CACHE_4_10 21
#define EXECUTE_CACHE_4_8 23
#define EXECUTE_CACHE_4_6 25
#define FREE_REFERENCE_4_0 28
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto process_top_level_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_top_level_8)
DEFLABEL (process_top_level_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_13 13
#define LABEL_5_17 15
#define LABEL_5_15 17
#define ENVIRONMENT_LABEL_5_3 40
#define DEBUGGING_LABEL_5_2 39
#define OBJECT_5_5 38
#define OBJECT_5_4 37
#define OBJECT_5_3 36
#define OBJECT_5_2 35
#define OBJECT_5_1 34
#define OBJECT_5_0 33
#define EXECUTE_CACHE_5_18 19
#define EXECUTE_CACHE_5_16 21
#define EXECUTE_CACHE_5_14 23
#define EXECUTE_CACHE_5_12 25
#define EXECUTE_CACHE_5_10 27
#define EXECUTE_CACHE_5_8 29
#define EXECUTE_CACHE_5_6 31
#define FREE_REFERENCES_LABEL_5_0 18
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_4);
      goto analyze_top_level_definition_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_top_level_definition_12)
DEFLABEL (analyze_top_level_definition_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (current_block [OBJECT_5_0]);
  (Wrd16.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (current_block [OBJECT_5_2]);
  (Wrd16.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (current_block [OBJECT_5_4]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd7.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Wrd8.Obj) = (* (Rsp++));
  (Wrd15.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd11.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd11.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd7.Obj) = (current_block [OBJECT_5_5]);
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto analyze_and_compress_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_and_compress_4)
DEFLABEL (analyze_and_compress_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define EXECUTE_CACHE_7_7 9
#define FREE_REFERENCE_7_0 12
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto analyze_expression_1;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_expression_5)
DEFLABEL (analyze_expression_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_9 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 23
#define DEBUGGING_LABEL_8_2 22
#define OBJECT_8_2 21
#define OBJECT_8_1 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_10 15
#define EXECUTE_CACHE_8_7 17
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_4);
      goto analyze_expressions_5;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_expressions_10)
DEFLABEL (analyze_expressions_5)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_11;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto analyze_uninteresting_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_uninteresting_4)
DEFLABEL (analyze_uninteresting_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_9_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define OBJECT_10_0 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto analyze_error_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_error_3)
DEFLABEL (analyze_error_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define LABEL_11_5 7
#define LABEL_11_8 9
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 11
#define EXECUTE_CACHE_11_9 13
#define EXECUTE_CACHE_11_6 15
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto analyze_access_3;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_access_6)
DEFLABEL (analyze_access_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto analyze_variable_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_variable_4)
DEFLABEL (analyze_variable_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define EXECUTE_CACHE_13_11 11
#define EXECUTE_CACHE_13_10 13
#define EXECUTE_CACHE_13_9 15
#define EXECUTE_CACHE_13_6 17
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto analyze_assignment_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_assignment_6)
DEFLABEL (analyze_assignment_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define EXECUTE_CACHE_14_13 13
#define EXECUTE_CACHE_14_12 15
#define EXECUTE_CACHE_14_11 17
#define EXECUTE_CACHE_14_10 19
#define EXECUTE_CACHE_14_7 21
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto analyze_combination_4;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_combination_7)
DEFLABEL (analyze_combination_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_11 11
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_8 15
#define EXECUTE_CACHE_15_6 17
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_15_4);
      goto analyze_lambda_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_lambda_7)
DEFLABEL (analyze_lambda_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd16.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_9;

DEFLABEL (label_10)
  (Wrd19.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define OBJECT_16_2 19
#define OBJECT_16_1 18
#define OBJECT_16_0 17
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_6 15
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_16_4);
      goto analyze_error_combination_7;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_error_combination_13)
DEFLABEL (analyze_error_combination_7)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_19)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_17)
  (Wrd24.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_15)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Rsp [1]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_16)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
anfile_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto analyze_delay_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_delay_4)
DEFLABEL (analyze_delay_1)
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
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto analyze_sequence_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_sequence_4)
DEFLABEL (analyze_sequence_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCE_19_0 14
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto analyze_conditional_1;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_conditional_5)
DEFLABEL (analyze_conditional_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define ENVIRONMENT_LABEL_20_3 16
#define DEBUGGING_LABEL_20_2 15
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCE_20_0 14
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto analyze_disjunction_1;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_disjunction_5)
DEFLABEL (analyze_disjunction_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
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
anfile_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto analyze_comment_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_comment_4)
DEFLABEL (analyze_comment_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 10
#define DEBUGGING_LABEL_22_2 9
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_22_4);
      goto eq_set_adjoin_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eq_set_adjoin_4)
DEFLABEL (eq_set_adjoin_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Rsp [1]);
  goto label_5;

DEFLABEL (label_6)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_6 9
#define LABEL_23_9 11
#define LABEL_23_10 13
#define ENVIRONMENT_LABEL_23_3 21
#define DEBUGGING_LABEL_23_2 20
#define OBJECT_23_2 19
#define OBJECT_23_1 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_8 15
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto eq_set_union_10;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eq_set_union_16)
DEFLABEL (eq_set_union_10)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_23_0]))
    goto label_18;
  goto loop_8;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_17)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_23_0])))
    goto label_19;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_27;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_25;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  goto label_22;

DEFLABEL (label_25)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_14)
  (Wrd17.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_6 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define LABEL_24_9 15
#define LABEL_24_12 17
#define ENVIRONMENT_LABEL_24_3 25
#define DEBUGGING_LABEL_24_2 24
#define OBJECT_24_2 23
#define OBJECT_24_1 22
#define OBJECT_24_0 21
#define EXECUTE_CACHE_24_8 19
#define FREE_REFERENCES_LABEL_24_0 18
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
anfile_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto eq_set_difference_10;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eq_set_difference_17)
DEFLABEL (eq_set_difference_10)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_24_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_19;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_28;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_26;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_25)
  Rdl = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_23)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_14)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_12)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_9 7
#define LABEL_10 9
#define LABEL_11 11
#define LABEL_12 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_6 31
#define LABEL_7 33
#define LABEL_22 35
#define LABEL_23 37
#define LABEL_24 39
#define ENVIRONMENT_LABEL_3 82
#define DEBUGGING_LABEL_2 81
#define PURIFICATION_ROOT 80
#define OBJECT_19 79
#define OBJECT_18 78
#define OBJECT_17 77
#define OBJECT_16 76
#define OBJECT_15 75
#define OBJECT_14 74
#define OBJECT_13 73
#define OBJECT_12 72
#define OBJECT_11 71
#define OBJECT_10 70
#define OBJECT_9 69
#define OBJECT_8 68
#define OBJECT_7 67
#define OBJECT_6 66
#define OBJECT_5 65
#define OBJECT_4 64
#define OBJECT_3 63
#define OBJECT_2 62
#define OBJECT_1 61
#define OBJECT_0 60
#define EXECUTE_CACHE_21 41
#define FREE_REFERENCE_12 44
#define FREE_REFERENCE_11 45
#define FREE_REFERENCE_10 46
#define FREE_REFERENCE_9 47
#define FREE_REFERENCE_8 48
#define FREE_REFERENCE_7 49
#define FREE_REFERENCE_6 50
#define FREE_REFERENCE_5 51
#define FREE_REFERENCE_4 52
#define FREE_REFERENCE_3 53
#define FREE_REFERENCE_2 54
#define FREE_REFERENCE_1 55
#define FREE_REFERENCE_0 56
#define GLOBAL_EXECUTE_CACHE_5 58
#define FREE_REFERENCES_LABEL_0 40
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
anfile_so_02fad5ebf47cb119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd239;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd235;
  machine_word Wrd231;
  machine_word Wrd233;
  machine_word Wrd234;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd230;
  machine_word Wrd221;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd212;
  machine_word Wrd214;
  machine_word Wrd215;
  machine_word Wrd208;
  machine_word Wrd210;
  machine_word Wrd211;
  machine_word Wrd202;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd183;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd178;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd173;
  machine_word Wrd164;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd145;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd126;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
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
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_9);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_10);
      goto label_43;

    case 4:
      current_block = (Rpc - LABEL_11);
      goto label_44;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto label_45;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto label_46;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_52;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_6);
      goto continuation_38;

    case 15:
      current_block = (Rpc - LABEL_7);
      goto continuation_37;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto label_57;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto expression_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_40)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_23])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_57)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_56)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
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
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 24)
      goto label_55;
    blocks = (current_block [OBJECT_19]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_55)
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
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_83;
  Wrd12 = Wrd16;

DEFLABEL (label_82)
  (Wrd21.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_81;
  Wrd31 = Wrd35;

DEFLABEL (label_80)
  (Wrd40.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd45.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_79;
  Wrd50 = Wrd54;

DEFLABEL (label_78)
  (Wrd59.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_77;
  Wrd69 = Wrd73;

DEFLABEL (label_76)
  (Wrd78.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_75;
  Wrd88 = Wrd92;

DEFLABEL (label_74)
  (Wrd97.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (Wrd101.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (Wrd102.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_73;
  Wrd107 = Wrd111;

DEFLABEL (label_72)
  (Wrd116.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd120.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd121.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd127.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd130.Obj) = ((Wrd127.pObj) [0]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 50)
    goto label_71;
  Wrd126 = Wrd130;

DEFLABEL (label_70)
  (Wrd135.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd134.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd134.pObj)));
  (Wrd139.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd140.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd149.Obj) = ((Wrd146.pObj) [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if ((Wrd150.uLng) == 50)
    goto label_69;
  Wrd145 = Wrd149;

DEFLABEL (label_68)
  (Wrd154.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd154.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd157.pObj) = (& (Rhp [-2]));
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd157.pObj)));
  (Wrd159.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd168.Obj) = ((Wrd165.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_67;
  Wrd164 = Wrd168;

DEFLABEL (label_66)
  (Wrd173.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd173.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  (Wrd177.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd177.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (Wrd178.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd178.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd184.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd187.Obj) = ((Wrd184.pObj) [0]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if ((Wrd188.uLng) == 50)
    goto label_65;
  Wrd183 = Wrd187;

DEFLABEL (label_64)
  (Wrd192.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd197.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd197.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (* (--Rsp)) = (Wrd200.Obj);
  (Wrd203.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd206.Obj) = ((Wrd203.pObj) [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if ((Wrd207.uLng) == 50)
    goto label_63;
  Wrd202 = Wrd206;

DEFLABEL (label_62)
  (Wrd211.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd202.Obj);
  (* (Rhp++)) = (Wrd211.Obj);
  (Wrd210.pObj) = (& (Rhp [-2]));
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd210.pObj)));
  (Wrd215.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd215.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd214.pObj) = (& (Rhp [-2]));
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd214.pObj)));
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd222.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd225.Obj) = ((Wrd222.pObj) [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 50)
    goto label_61;
  Wrd221 = Wrd225;

DEFLABEL (label_60)
  (Wrd230.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd234.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd234.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd233.pObj) = (& (Rhp [-2]));
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd233.pObj)));
  (Wrd235.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd235.Obj);
  (Wrd237.pObj) = (& (Rhp [-2]));
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd237.pObj)));
  (* (--Rsp)) = (Wrd238.Obj);
  (Wrd240.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd243.Obj) = ((Wrd240.pObj) [0]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if ((Wrd244.uLng) == 50)
    goto label_59;
  Wrd239 = Wrd243;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd239.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_16]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd240.pObj));

DEFLABEL (label_53)
  (Wrd239.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd222.pObj));

DEFLABEL (label_52)
  (Wrd221.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd203.pObj));

DEFLABEL (label_51)
  (Wrd202.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd184.pObj));

DEFLABEL (label_50)
  (Wrd183.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd165.pObj));

DEFLABEL (label_49)
  (Wrd164.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd146.pObj));

DEFLABEL (label_48)
  (Wrd145.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd127.pObj));

DEFLABEL (label_47)
  (Wrd126.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd108.pObj));

DEFLABEL (label_46)
  (Wrd107.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd89.pObj));

DEFLABEL (label_45)
  (Wrd88.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd70.pObj));

DEFLABEL (label_44)
  (Wrd69.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd51.pObj));

DEFLABEL (label_43)
  (Wrd50.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd32.pObj));

DEFLABEL (label_42)
  (Wrd31.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_anfile_so_02fad5ebf47cb119 [24] =
  {
    { "anfile_so_code_1", 2, anfile_so_code_1 },
    { "anfile_so_code_2", 8, anfile_so_code_2 },
    { "anfile_so_code_3", 14, anfile_so_code_3 },
    { "anfile_so_code_4", 6, anfile_so_code_4 },
    { "anfile_so_code_5", 8, anfile_so_code_5 },
    { "anfile_so_code_6", 2, anfile_so_code_6 },
    { "anfile_so_code_7", 3, anfile_so_code_7 },
    { "anfile_so_code_8", 5, anfile_so_code_8 },
    { "anfile_so_code_9", 2, anfile_so_code_9 },
    { "anfile_so_code_10", 1, anfile_so_code_10 },
    { "anfile_so_code_11", 4, anfile_so_code_11 },
    { "anfile_so_code_12", 2, anfile_so_code_12 },
    { "anfile_so_code_13", 4, anfile_so_code_13 },
    { "anfile_so_code_14", 5, anfile_so_code_14 },
    { "anfile_so_code_15", 4, anfile_so_code_15 },
    { "anfile_so_code_16", 5, anfile_so_code_16 },
    { "anfile_so_code_17", 2, anfile_so_code_17 },
    { "anfile_so_code_18", 2, anfile_so_code_18 },
    { "anfile_so_code_19", 3, anfile_so_code_19 },
    { "anfile_so_code_20", 3, anfile_so_code_20 },
    { "anfile_so_code_21", 2, anfile_so_code_21 },
    { "anfile_so_code_22", 2, anfile_so_code_22 },
    { "anfile_so_code_23", 6, anfile_so_code_23 },
    { "anfile_so_code_24", 8, anfile_so_code_24 }
  };

int
decl_anfile_so_02fad5ebf47cb119 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_anfile_so_02fad5ebf47cb119);
  return (0);
}

DECLARE_COMPILED_CODE ("anfile.so", 19, decl_anfile_so_02fad5ebf47cb119, anfile_so_02fad5ebf47cb119)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_anfile_so_data_02fad5ebf47cb119 [3030] =
  "\x53\x2a\x8d\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x28\x0d\x28"
  "\x0d\xb9\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0d"
  "\xbb\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\x28\x0d\x28\x0d"
  "\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1\x1c\xc1\x1c\x08\x28"
  "\x0d\x28\xb6\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\xb5\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\xb5\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x0d\x1c\x0d\x1c\xb3\x0d\x17\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\xb7\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x86\x88\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x08\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\xc3\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9a\x1b\x1b\x1b\x9a\x0d\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x0d\x0d\x1b\x0d\x0d\x08\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\xb8\x0d\x1c"
  "\x1b\x1b\xb7\xb4\xb5\xb6\xb1\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb2\x2a\x17\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\xb0\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x52\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x63\x72\x65\x66\x2f\x2e\x2f\x61\x6e\x66\x69\x6c\x65\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x08\x66\x61\x73\x6c\x6f"
  "\x61\x64\x03\x12\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x03\x15\x06\x81\x83\x02\x14\x04\x83\x04\x05"
  "\x0e\x02\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1d\x61\x6e"
  "\x61\x6c\x79\x7a\x65\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2f"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x02\x03\x12\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x03\x11"
  "\x73\x6f\x72\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73"
  "\x04\x04\x6d\x61\x70\x03\x0e\x6d\x61\x6b\x65\x2d\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x03\x15\x61\x6e\x61\x6c\x79\x7a\x65\x2d\x61\x6e"
  "\x64\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x06\x1d\x12\x81\x89\x02"
  "\x1c\x10\x81\x87\x02\x1b\x0e\x81\x85\x02\x1a\x0c\x81\x89\x02\x19"
  "\x0a\x84\x06\x18\x08\x81\x85\x02\x17\x06\x81\x83\x02\x16\x04\x83"
  "\x04\x11\x22\x09\x02\x04\x63\x64\x72\x0a\x04\x63\x61\x72\x0b\x03"
  "\x13\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x3f\x03\x03\x0c\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x3f\x04\x2b\x1e\x81\x85\x02\x2a\x1c\x81\x85\x02\x29\x1a\x81\x87"
  "\x02\x28\x18\x81\x87\x02\x27\x16\x81\x87\x02\x26\x14\x81\x89\x02"
  "\x25\x12\x81\x87\x02\x24\x10\x81\x83\x02\x23\x0e\xfd\xff\x03\x22"
  "\x0c\xff\xff\x03\x21\x0a\x83\x04\x20\x08\x81\x83\x02\x1f\x06\x81"
  "\x85\x02\x1e\x04\x83\x04\x1d\x2a\x0c\x02\x02\x03\x09\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x3f\x03\x0a\x73\x65\x71\x75\x65\x6e\x63\x65\x3f"
  "\x03\x13\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x0d\x03\x03\x11\x73\x65\x71\x75\x65\x6e\x63\x65"
  "\x2d\x61\x63\x74\x69\x6f\x6e\x73\x0e\x04\x0c\x61\x70\x70\x65\x6e"
  "\x64\x2d\x6d\x61\x70\x21\x07\x31\x0e\x81\x85\x02\x30\x0c\x81\x83"
  "\x02\x2f\x0a\x81\x83\x02\x2e\x08\x81\x83\x02\x2d\x06\x81\x83\x02"
  "\x2c\x04\x83\x04\x0d\x20\x0f\x02\x07\x6c\x61\x6d\x62\x64\x61\x10"
  "\x06\x64\x65\x6c\x61\x79\x11\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x01\x0b\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x03\x10\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x03\x11\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x76\x61\x6c\x75\x65\x03"
  "\x1b\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x03\x10\x73\x63\x6f"
  "\x64\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x03\x03\x08\x6c"
  "\x61\x6d\x62\x64\x61\x3f\x03\x07\x64\x65\x6c\x61\x79\x3f\x08\x39"
  "\x12\x81\x87\x02\x38\x10\x81\x87\x02\x37\x0e\x81\x85\x02\x36\x0c"
  "\x81\x85\x02\x35\x0a\x81\x85\x02\x34\x08\x81\x85\x02\x33\x06\x81"
  "\x83\x02\x32\x04\x83\x04\x11\x29\x02\x03\x13\x61\x6e\x61\x6c\x79"
  "\x7a\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x12\x03\x0d"
  "\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x03\x3b\x06\x81"
  "\x83\x02\x3a\x04\x83\x04\x05\x0d\x13\x02\x08\x11\x61\x6e\x61\x6c"
  "\x79\x7a\x65\x2f\x64\x69\x73\x70\x61\x74\x63\x68\x14\x02\x04\x0b"
  "\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x02\x3e\x08\x81\x83\x02"
  "\x3d\x06\x81\x87\x02\x3c\x04\x83\x04\x07\x0f\x15\x02\x09\x0a\x0b"
  "\x03\x12\x03\x14\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x73\x16\x04\x0d\x65\x71\x2d\x73\x65\x74"
  "\x2d\x75\x6e\x69\x6f\x6e\x17\x04\x43\x0c\x81\x85\x02\x42\x0a\x81"
  "\x87\x02\x41\x08\x81\x83\x02\x40\x06\x81\x85\x02\x3f\x04\x83\x04"
  "\x0b\x18\x18\x02\x0a\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x02\x45\x06\x81\x83"
  "\x02\x44\x04\x83\x04\x05\x0c\x19\x02\x0b\x13\x49\x6c\x6c\x65\x67"
  "\x61\x6c\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x06\x65"
  "\x72\x72\x6f\x72\x02\x46\x04\x83\x04\x03\x0a\x1a\x02\x0c\x22\x41"
  "\x63\x63\x65\x73\x73\x20\x74\x6f\x20\x6e\x6f\x6e\x2d\x67\x6c\x6f"
  "\x62\x61\x6c\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a"
  "\x03\x13\x61\x63\x63\x65\x73\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x03\x09\x75\x6e\x73\x79\x6e\x74\x61\x78\x04\x05"
  "\x77\x61\x72\x6e\x04\x4a\x0a\x81\x85\x02\x49\x08\x81\x83\x02\x48"
  "\x06\x81\x83\x02\x47\x04\x83\x04\x09\x15\x1b\x02\x0d\x03\x0e\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x02\x4c\x06\x81"
  "\x83\x02\x4b\x04\x83\x04\x05\x0c\x1c\x02\x0e\x03\x10\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x03\x11\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x6c\x75\x65\x04\x0e"
  "\x65\x71\x2d\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e\x1d\x03\x12"
  "\x05\x50\x0a\x81\x87\x02\x4f\x08\x81\x85\x02\x4e\x06\x81\x83\x02"
  "\x4d\x04\x83\x04\x09\x15\x1e\x02\x0f\x03\x15\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x03"
  "\x15\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x73\x03\x12\x04\x17\x03\x16\x06\x55\x0c\x81\x87"
  "\x02\x54\x0a\x81\x85\x02\x53\x08\x81\x85\x02\x52\x06\x81\x83\x02"
  "\x51\x04\x83\x04\x0b\x19\x1f\x02\x10\x04\x12\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x12\x06\x07"
  "\x61\x70\x70\x65\x6e\x64\x04\x12\x65\x71\x2d\x73\x65\x74\x2d\x64"
  "\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x20\x05\x59\x0a\x81\x8f\x02"
  "\x58\x08\x81\x8f\x02\x57\x06\x89\x10\x56\x04\x83\x04\x09\x16\x21"
  "\x02\x11\x0b\x0a\x04\x17\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x16\x03\x5e"
  "\x0c\x81\x87\x02\x5d\x0a\x81\x85\x02\x5c\x08\x81\x85\x02\x5b\x06"
  "\x84\x06\x5a\x04\x83\x04\x0b\x16\x22\x02\x12\x03\x11\x64\x65\x6c"
  "\x61\x79\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x12\x03"
  "\x60\x06\x81\x83\x02\x5f\x04\x83\x04\x05\x0d\x23\x02\x13\x03\x0e"
  "\x03\x16\x03\x62\x06\x81\x83\x02\x61\x04\x83\x04\x05\x0d\x0e\x02"
  "\x14\x05\x6c\x69\x73\x74\x24\x02\x04\x17\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x03\x16\x03\x65\x08\x81\x83\x02\x64\x06\x81\x85\x02\x63\x04\x83"
  "\x04\x07\x11\x25\x02\x15\x24\x02\x04\x17\x64\x69\x73\x6a\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x03\x16\x03\x68\x08\x81\x83\x02\x67\x06\x81\x85\x02\x66\x04\x83"
  "\x04\x07\x11\x24\x02\x16\x03\x0d\x03\x12\x03\x6a\x06\x81\x83\x02"
  "\x69\x04\x83\x04\x05\x0d\x0d\x02\x17\x04\x05\x6d\x65\x6d\x71\x26"
  "\x02\x6c\x06\x81\x85\x02\x6b\x04\x84\x06\x05\x0b\x27\x02\x18\x0a"
  "\x0b\x04\x26\x02\x72\x0e\x81\x85\x02\x71\x0c\x81\x85\x02\x70\x0a"
  "\x81\x85\x02\x6f\x08\x81\x89\x02\x6e\x06\x81\x85\x02\x6d\x04\x84"
  "\x06\x0d\x16\x28\x02\x19\x0a\x0b\x04\x26\x02\x7a\x12\xfd\xff\x03"
  "\x79\x10\xfd\xff\x03\x78\x0e\xfd\xff\x03\x77\x0c\xfd\xff\x03\x76"
  "\x0a\xfd\xff\x03\x75\x08\xfd\xff\x03\x74\x06\xff\xff\x03\x73\x04"
  "\x84\x06\x11\x1a\x26\x19\x0b\x0b\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x26\x04\x28\x04\x27\x04"
  "\x20\x17\x1d\x07\x61\x63\x63\x65\x73\x73\x0b\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x08\x63\x6f\x6d\x6d\x65\x6e\x74\x0c\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x0b\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x11\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x12\x65\x72"
  "\x72\x6f\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x10"
  "\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x09\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x10\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x63\x6f\x6d\x6d\x65"
  "\x6e\x74\x28\x14\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x64\x69\x73\x6a"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x27\x14\x61\x6e\x61\x6c\x79\x7a\x65"
  "\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x26\x11\x61\x6e"
  "\x61\x6c\x79\x7a\x65\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x20\x0e"
  "\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x64\x65\x6c\x61\x79\x1d\x1a\x61"
  "\x6e\x61\x6c\x79\x7a\x65\x2f\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x17\x0f\x61\x6e\x61\x6c\x79\x7a"
  "\x65\x2f\x6c\x61\x6d\x62\x64\x61\x14\x14\x61\x6e\x61\x6c\x79\x7a"
  "\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x11\x13\x61"
  "\x6e\x61\x6c\x79\x7a\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x10\x11\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x0b\x0f\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x61\x63\x63"
  "\x65\x73\x73\x0a\x0e\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x65\x72\x72"
  "\x6f\x72\x16\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x75\x6e\x69\x6e\x74"
  "\x65\x72\x65\x73\x74\x69\x6e\x67\x29\x16\x12\x0d\x61\x6e\x61\x6c"
  "\x79\x7a\x65\x2d\x66\x69\x6c\x65\x16\x0d\x04\x24\x04\x25\x04\x0e"
  "\x04\x23\x04\x22\x04\x21\x04\x1f\x04\x1e\x04\x1c\x04\x1b\x04\x1a"
  "\x04\x19\x04\x18\x04\x15\x04\x13\x04\x04\x0f\x04\x0c\x04\x09\x04"
  "\x04\x16\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x0b\x20\x14\x17\x27\x1d\x26\x28\x11\x10\x0a\x29"
  "\x0e\x04\x12\x6d\x61\x6b\x65\x2d\x73\x63\x6f\x64\x65\x2d\x77\x61"
  "\x6c\x6b\x65\x72\x02\x13\x28\x80\x80\x04\x12\x26\x81\x81\x02\x11"
  "\x24\x81\x81\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x89\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81\x89\x02\x0b\x18\x81"
  "\x89\x02\x0a\x16\x81\x89\x02\x09\x14\x81\x89\x02\x08\x12\x81\x89"
  "\x02\x07\x10\x81\x89\x02\x06\x0e\x81\x89\x02\x05\x0c\x81\x89\x02"
  "\x04\x0a\x81\x89\x02\x03\x08\x81\x89\x02\x02\x06\x81\x87\x02\x01"
  "\x04\x81\x83\x02\x27\x53";

SCHEME_OBJECT *
anfile_so_data_02fad5ebf47cb119 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_anfile_so_data_02fad5ebf47cb119 [0]))), (sizeof (prog_anfile_so_data_02fad5ebf47cb119)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_24]));
}

DECLARE_COMPILED_DATA_NS ("anfile.so", anfile_so_data_02fad5ebf47cb119)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("anfile.so", "b0a7501a740de278")
