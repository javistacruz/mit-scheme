/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_0 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_5 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto register_typeP_1;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_typeP_4)
DEFLABEL (register_typeP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_5;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

DEFLABEL (label_5)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == Rvl)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define EXECUTE_CACHE_2_7 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto register_type_predicate_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_type_predicate_4)
DEFLABEL (register_type_predicate_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
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

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_0 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_3_4);
      goto empty_register_map_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (empty_register_map_4)
DEFLABEL (empty_register_map_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd15.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define LABEL_4_7 11
#define LABEL_4_9 13
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_2 16
#define OBJECT_4_1 15
#define OBJECT_4_0 14
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto map_entries_search_9;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_search_15)
DEFLABEL (map_entries_search_9)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_18;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  Rdl = (& (Rsp [4]));
  goto loop_7;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_4_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_1])))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_23)
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = Rvl;
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_13)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_12)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define LABEL_5_11 17
#define LABEL_5_12 19
#define LABEL_5_13 21
#define LABEL_5_14 23
#define ENVIRONMENT_LABEL_5_3 33
#define DEBUGGING_LABEL_5_2 32
#define OBJECT_5_4 31
#define OBJECT_5_3 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_15 25
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd20;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto map_entries_find_home_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto loop_11;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_5_13);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_5_14);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_find_home_23)
DEFLABEL (map_entries_find_home_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  goto loop_11;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_24)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_5_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_1])))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_42;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_41)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_40;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd68.Lng))))
    goto label_40;
  (Wrd20.Obj) = ((Wrd66.pObj) [1]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_39)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_38;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_37)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_36;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd57.Lng))))
    goto label_36;
  (Wrd52.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_33;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [0]);

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_30;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_30)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_21)
  (Wrd81.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_36)
  (Wrd60.Obj) = (current_block [OBJECT_5_2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_18)
  (Wrd42.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd71.Obj) = (current_block [OBJECT_5_2]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_39;

DEFLABEL (label_42)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_8 13
#define LABEL_6_12 15
#define LABEL_6_7 17
#define LABEL_6_13 19
#define ENVIRONMENT_LABEL_6_3 29
#define DEBUGGING_LABEL_6_2 28
#define OBJECT_6_4 27
#define OBJECT_6_3 26
#define OBJECT_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_11 21
#define FREE_REFERENCES_LABEL_6_0 20
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6_4);
      goto map_entries_find_alias_11;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_6_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_find_alias_19)
DEFLABEL (map_entries_find_alias_11)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  goto loop_9;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_1])))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_33)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_32;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_32;
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_29;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_27)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_17)
  (Wrd22.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_32)
  (Wrd31.Obj) = (current_block [OBJECT_6_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_0 6
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto map_entries_add_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_add_5)
DEFLABEL (map_entries_add_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_6)
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto map_entries_delete_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_delete_5)
DEFLABEL (map_entries_delete_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

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
regmap_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto map_entries_delete__1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_delete__5)
DEFLABEL (map_entries_delete__1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_7 13
#define LABEL_10_10 15
#define LABEL_10_11 17
#define ENVIRONMENT_LABEL_10_3 22
#define DEBUGGING_LABEL_10_2 21
#define OBJECT_10_2 20
#define OBJECT_10_1 19
#define OBJECT_10_0 18
#define FREE_REFERENCES_LABEL_10_0 18
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd53;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto map_entries_replace_10;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_10_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_replace_17)
DEFLABEL (map_entries_replace_10)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [5]));
  goto loop_8;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_10_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_10_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_21;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_21)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_29;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_28)
  Rdl = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  if ((Wrd12.Obj) == (Wrd27.Obj))
    goto label_25;
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_24;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));

DEFLABEL (label_22)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_15)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd31.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd31.Obj) = ((Wrd26.pObj) [2]);
  goto label_23;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_14)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_13)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd53.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd31.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto map_entries_replace_touch_2;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entries_replace_touch_6)
DEFLABEL (map_entries_replace_touch_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
regmap_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_12_4);
      goto map_registers_add_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_registers_add_6)
DEFLABEL (map_registers_add_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_7 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto map_registers_add__2;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_registers_add__6)
DEFLABEL (map_registers_add__2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_8;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_0 9
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto map_registers_delete_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_registers_delete_5)
DEFLABEL (map_registers_delete_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto map_registers_replace_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_registers_replace_5)
DEFLABEL (map_registers_replace_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 5
#define DEBUGGING_LABEL_16_2 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_map_entry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_map_entry_3)
DEFLABEL (make_map_entry_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto map_entry_home_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_home_3)
DEFLABEL (map_entry_home_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto map_entry_saved_into_homeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_saved_into_homeP_3)
DEFLABEL (map_entry_saved_into_homeP_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

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

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto map_entry_aliases_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_aliases_3)
DEFLABEL (map_entry_aliases_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto map_entry_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_label_3)
DEFLABEL (map_entry_label_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

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

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 10
#define DEBUGGING_LABEL_21_2 9
#define OBJECT_21_2 8
#define OBJECT_21_1 7
#define OBJECT_21_0 6
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_21_4);
      goto map_entry_any_alias_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_any_alias_5)
DEFLABEL (map_entry_any_alias_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_7 5
#define LABEL_22_5 7
#define TAG_22_6 2
#define LABEL_22_9 9
#define LABEL_22_11 11
#define ENVIRONMENT_LABEL_22_3 23
#define DEBUGGING_LABEL_22_2 22
#define OBJECT_22_2 21
#define OBJECT_22_1 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_12 13
#define EXECUTE_CACHE_22_10 15
#define EXECUTE_CACHE_22_8 17
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto map_entry_find_alias_4;

    case 1:
      current_block = (Rpc - LABEL_22_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_find_alias_8)
DEFLABEL (map_entry_find_alias_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_22_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_22_2]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_7 5
#define LABEL_23_5 7
#define TAG_23_6 2
#define LABEL_23_9 9
#define LABEL_23_11 11
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_2 21
#define OBJECT_23_1 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_12 13
#define EXECUTE_CACHE_23_10 15
#define EXECUTE_CACHE_23_8 17
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_23_4);
      goto map_entry_aliases_4;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_aliases_8)
DEFLABEL (map_entry_aliases_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_23_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_23_2]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define OBJECT_24_4 16
#define OBJECT_24_3 15
#define OBJECT_24_2 14
#define OBJECT_24_1 13
#define OBJECT_24_0 12
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_24_4);
      goto map_entry_add_alias_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_add_alias_12)
DEFLABEL (map_entry_add_alias_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_16;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd49.Lng))))
    goto label_16;
  (Wrd43.Obj) = ((Wrd47.pObj) [4]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_15)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_14;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd65.Lng))))
    goto label_14;
  (Wrd57.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_13)
  (Wrd73.Obj) = (* (Rsp++));
  (Wrd74.Obj) = (* (Rsp++));
  (Wrd75.Obj) = (* (Rsp++));
  (Wrd82.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd78.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (current_block [OBJECT_24_4]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_10)
  (Wrd57.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (current_block [OBJECT_24_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_24_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_6 9
#define LABEL_25_9 11
#define LABEL_25_10 13
#define ENVIRONMENT_LABEL_25_3 23
#define DEBUGGING_LABEL_25_2 22
#define OBJECT_25_4 21
#define OBJECT_25_3 20
#define OBJECT_25_2 19
#define OBJECT_25_1 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_8 15
#define FREE_REFERENCES_LABEL_25_0 14
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_25_4);
      goto map_entry_delete_alias_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_delete_alias_12)
DEFLABEL (map_entry_delete_alias_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_18;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_18;
  (Wrd27.Obj) = ((Wrd31.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_13)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.Obj) = (* (Rsp++));
  (Wrd39.Obj) = (* (Rsp++));
  (Wrd46.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd42.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_25_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_25_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_25_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_6 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define ENVIRONMENT_LABEL_26_3 23
#define DEBUGGING_LABEL_26_2 22
#define OBJECT_26_4 21
#define OBJECT_26_3 20
#define OBJECT_26_2 19
#define OBJECT_26_1 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_8 15
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_26_4);
      goto map_entry_replace_alias_5;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_replace_alias_12)
DEFLABEL (map_entry_replace_alias_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_18;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_18;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_13)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.Obj) = (* (Rsp++));
  (Wrd39.Obj) = (* (Rsp++));
  (Wrd46.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd42.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_26_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_26_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_26_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 14
#define DEBUGGING_LABEL_27_2 13
#define OBJECT_27_1 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto map_entry_P_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_P_7)
DEFLABEL (map_entry_P_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_27_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 17
#define DEBUGGING_LABEL_28_2 16
#define OBJECT_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_7 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_28_4);
      goto register_map_add_home_6;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_add_home_11)
DEFLABEL (register_map_add_home_6)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_28_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd25.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd21.pObj) = (& (Rhp [-5]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define LABEL_29_8 9
#define LABEL_29_9 11
#define ENVIRONMENT_LABEL_29_3 21
#define DEBUGGING_LABEL_29_2 20
#define OBJECT_29_0 19
#define EXECUTE_CACHE_29_11 13
#define EXECUTE_CACHE_29_10 15
#define EXECUTE_CACHE_29_7 17
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_29_4);
      goto register_map_add_alias_4;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_add_alias_8)
DEFLABEL (register_map_add_alias_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define ENVIRONMENT_LABEL_30_3 21
#define DEBUGGING_LABEL_30_2 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_11 13
#define EXECUTE_CACHE_30_10 15
#define EXECUTE_CACHE_30_7 17
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_30_4);
      goto register_map_replace_alias_4;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_replace_alias_8)
DEFLABEL (register_map_replace_alias_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define LABEL_31_6 13
#define ENVIRONMENT_LABEL_31_3 24
#define DEBUGGING_LABEL_31_2 23
#define OBJECT_31_5 22
#define OBJECT_31_4 21
#define OBJECT_31_3 20
#define OBJECT_31_2 19
#define OBJECT_31_1 18
#define OBJECT_31_0 17
#define EXECUTE_CACHE_31_10 15
#define FREE_REFERENCES_LABEL_31_0 14
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_31_4);
      goto register_map_save_entry_6;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_save_entry_13)
DEFLABEL (register_map_save_entry_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_19;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_19;
  (Wrd19.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_18)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_17;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_17;
  (Wrd35.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_16)
  (Wrd58.Obj) = (Rsp [5]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_15;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd57.Lng))))
    goto label_15;
  (Wrd49.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_14)
  (Wrd65.Obj) = (* (Rsp++));
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd72.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd73.Obj) = (current_block [OBJECT_31_5]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd68.pObj) = (& (Rhp [-5]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd68.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd74.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd60.Obj) = (Rsp [5]);
  (Wrd61.Obj) = (current_block [OBJECT_31_4]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_11)
  (Wrd49.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.Obj) = (current_block [OBJECT_31_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_31_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 13
#define DEBUGGING_LABEL_32_2 12
#define OBJECT_32_3 11
#define OBJECT_32_2 10
#define OBJECT_32_1 9
#define OBJECT_32_0 8
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_32_4);
      goto pseudo_register_entry__temporary_entry_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_entry__temporary_entry_7)
DEFLABEL (pseudo_register_entry__temporary_entry_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_8)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd46.Obj) = (current_block [OBJECT_32_3]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd40.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd40.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_32_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_6 11
#define ENVIRONMENT_LABEL_33_3 21
#define DEBUGGING_LABEL_33_2 20
#define OBJECT_33_4 19
#define OBJECT_33_3 18
#define OBJECT_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_9 13
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_33_4);
      goto register_map_entry__temporary_5;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_entry__temporary_11)
DEFLABEL (register_map_entry__temporary_5)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_15;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd25.Lng))))
    goto label_15;
  (Wrd19.Obj) = ((Wrd23.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_14)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_13;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_13;
  (Wrd33.Obj) = ((Wrd39.pObj) [3]);

DEFLABEL (label_12)
  (Wrd49.Obj) = (* (Rsp++));
  (Wrd55.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd57.Obj) = (current_block [OBJECT_33_4]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd51.pObj) = (& (Rhp [-5]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd58.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.Obj) = (current_block [OBJECT_33_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_33_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_7 5
#define LABEL_34_8 7
#define LABEL_34_5 9
#define LABEL_34_11 11
#define LABEL_34_6 13
#define LABEL_34_10 15
#define ENVIRONMENT_LABEL_34_3 28
#define DEBUGGING_LABEL_34_2 27
#define OBJECT_34_3 26
#define OBJECT_34_2 25
#define OBJECT_34_1 24
#define OBJECT_34_0 23
#define EXECUTE_CACHE_34_13 17
#define EXECUTE_CACHE_34_12 19
#define EXECUTE_CACHE_34_9 21
#define FREE_REFERENCES_LABEL_34_0 16
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_34_4);
      goto register_map_delete_entry_6;

    case 1:
      current_block = (Rpc - LABEL_34_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_34_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_34_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_delete_entry_12)
DEFLABEL (register_map_delete_entry_6)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_18;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_17)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_16;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (current_block [OBJECT_34_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_7 5
#define LABEL_35_10 7
#define LABEL_35_5 9
#define LABEL_35_13 11
#define LABEL_35_6 13
#define LABEL_35_8 15
#define LABEL_35_9 17
#define LABEL_35_17 19
#define LABEL_35_12 21
#define ENVIRONMENT_LABEL_35_3 39
#define DEBUGGING_LABEL_35_2 38
#define OBJECT_35_3 37
#define OBJECT_35_2 36
#define OBJECT_35_1 35
#define OBJECT_35_0 34
#define EXECUTE_CACHE_35_16 23
#define EXECUTE_CACHE_35_15 25
#define EXECUTE_CACHE_35_14 27
#define EXECUTE_CACHE_35_11 29
#define FREE_REFERENCE_35_1 32
#define FREE_REFERENCE_35_0 33
#define FREE_REFERENCES_LABEL_35_0 22
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_35_4);
      goto register_map_delete_entries_8;

    case 1:
      current_block = (Rpc - LABEL_35_7);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_35_10);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_35_13);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_35_17);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_delete_entries_15)
DEFLABEL (register_map_delete_entries_8)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_35_0])))
    goto label_16;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_23)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_22;
  Wrd29 = Wrd33;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_18;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_17])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_10])), (Wrd30.pObj));

DEFLABEL (label_11)
  (Wrd29.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_11 13
#define LABEL_36_8 15
#define LABEL_36_13 17
#define ENVIRONMENT_LABEL_36_3 33
#define DEBUGGING_LABEL_36_2 32
#define OBJECT_36_4 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_15 19
#define EXECUTE_CACHE_36_14 21
#define EXECUTE_CACHE_36_12 23
#define EXECUTE_CACHE_36_7 25
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_36_4);
      goto register_map_delete_alias_9;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_delete_alias_16)
DEFLABEL (register_map_delete_alias_9)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_24)
  (Wrd20.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_22)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_21;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_20)
  if ((Wrd24.Obj) == (current_block [OBJECT_36_3]))
    goto label_17;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_19;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (label_19)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_4]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_36_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_9 7
#define LABEL_37_5 9
#define LABEL_37_12 11
#define LABEL_37_13 13
#define LABEL_37_6 15
#define LABEL_37_8 17
#define LABEL_37_11 19
#define ENVIRONMENT_LABEL_37_3 37
#define DEBUGGING_LABEL_37_2 36
#define OBJECT_37_6 35
#define OBJECT_37_5 34
#define OBJECT_37_4 33
#define OBJECT_37_3 32
#define OBJECT_37_2 31
#define OBJECT_37_1 30
#define OBJECT_37_0 29
#define EXECUTE_CACHE_37_16 21
#define EXECUTE_CACHE_37_15 23
#define EXECUTE_CACHE_37_14 25
#define EXECUTE_CACHE_37_10 27
#define FREE_REFERENCES_LABEL_37_0 20
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_37_4);
      goto register_map_delete_other_aliases_12;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_37_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_37_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_37_13);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_delete_other_aliases_19)
DEFLABEL (register_map_delete_other_aliases_12)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_28;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_28;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_27)
  (Wrd39.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_24;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_24;
  (Wrd24.Obj) = ((Wrd30.pObj) [4]);

DEFLABEL (label_23)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd42.Obj) = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_37_5]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.Obj) = (current_block [OBJECT_37_6]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd54.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd55.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd51.pObj) = (& (Rhp [-5]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd51.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_37_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_17)
  (Wrd24.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_37_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.Obj) = (current_block [OBJECT_37_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_9 9
#define LABEL_38_6 11
#define LABEL_38_8 13
#define ENVIRONMENT_LABEL_38_3 25
#define DEBUGGING_LABEL_38_2 24
#define OBJECT_38_2 23
#define OBJECT_38_1 22
#define OBJECT_38_0 21
#define EXECUTE_CACHE_38_11 15
#define EXECUTE_CACHE_38_10 17
#define FREE_REFERENCE_38_0 20
#define FREE_REFERENCES_LABEL_38_0 14
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_38_4);
      goto register_map_entries__temporaries_5;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_entries__temporaries_11)
DEFLABEL (register_map_entries__temporaries_5)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_38_0])))
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_18;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_16;
  Wrd20 = Wrd24;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_14;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd21.pObj));

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_8 11
#define LABEL_39_9 13
#define LABEL_39_10 15
#define LABEL_39_13 17
#define LABEL_39_14 19
#define LABEL_39_16 21
#define LABEL_39_17 23
#define LABEL_39_15 25
#define LABEL_39_20 27
#define LABEL_39_11 29
#define LABEL_39_21 31
#define ENVIRONMENT_LABEL_39_3 48
#define DEBUGGING_LABEL_39_2 47
#define OBJECT_39_5 46
#define OBJECT_39_4 45
#define OBJECT_39_3 44
#define OBJECT_39_2 43
#define OBJECT_39_1 42
#define OBJECT_39_0 41
#define EXECUTE_CACHE_39_22 33
#define EXECUTE_CACHE_39_19 35
#define EXECUTE_CACHE_39_18 37
#define EXECUTE_CACHE_39_12 39
#define FREE_REFERENCES_LABEL_39_0 32
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_39_4);
      goto register_map_keep_live_entries_19;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_39_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_39_10);
      goto loop_17;

    case 7:
      current_block = (Rpc - LABEL_39_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_39_14);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_39_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_39_17);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_39_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_39_21);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_keep_live_entries_31)
DEFLABEL (register_map_keep_live_entries_19)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_33)
  goto loop_17;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_32)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_39_10);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_39_0])))
    goto label_37;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_22]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_39_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_49;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_48)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_47;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd25.Lng))))
    goto label_47;
  (Wrd20.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_45)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_44;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_43)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_42;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_42;
  (Wrd50.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_15);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_40;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_17;

DEFLABEL (label_40)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd58.Obj) = (current_block [OBJECT_39_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_25)
  (Wrd40.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd28.Obj) = (current_block [OBJECT_39_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_53;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_52)
  (Wrd80.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Rsp [2]) = (Wrd77.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_51;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd81.Obj);
  goto loop_17;

DEFLABEL (label_51)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_28)
  (Wrd81.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_27)
  (Wrd68.Obj) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_8 9
#define LABEL_40_6 11
#define LABEL_40_10 13
#define LABEL_40_11 15
#define LABEL_40_12 17
#define LABEL_40_13 19
#define LABEL_40_15 21
#define LABEL_40_16 23
#define LABEL_40_14 25
#define LABEL_40_21 27
#define LABEL_40_22 29
#define LABEL_40_23 31
#define LABEL_40_17 33
#define TAG_40_18 15
#define LABEL_40_25 35
#define LABEL_40_20 37
#define LABEL_40_28 39
#define LABEL_40_29 41
#define LABEL_40_30 43
#define LABEL_40_27 45
#define LABEL_40_32 47
#define LABEL_40_33 49
#define ENVIRONMENT_LABEL_40_3 74
#define DEBUGGING_LABEL_40_2 73
#define OBJECT_40_7 72
#define OBJECT_40_6 71
#define OBJECT_40_5 70
#define OBJECT_40_4 69
#define OBJECT_40_3 68
#define OBJECT_40_2 67
#define OBJECT_40_1 66
#define OBJECT_40_0 65
#define EXECUTE_CACHE_40_34 51
#define EXECUTE_CACHE_40_31 53
#define EXECUTE_CACHE_40_26 55
#define EXECUTE_CACHE_40_24 57
#define EXECUTE_CACHE_40_19 59
#define EXECUTE_CACHE_40_9 61
#define FREE_REFERENCE_40_0 64
#define FREE_REFERENCES_LABEL_40_0 50
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd77;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_40_4);
      goto map_equalP_29;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto loop_27;

    case 6:
      current_block = (Rpc - LABEL_40_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_40_12);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_40_13);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_40_15);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_40_16);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_40_21);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_40_22);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_40_23);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_40_17);
      goto lambda_50;

    case 16:
      current_block = (Rpc - LABEL_40_25);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_40_20);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_40_28);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_40_29);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_40_30);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_40_27);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_40_32);
      goto label_46;

    case 23:
      current_block = (Rpc - LABEL_40_33);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_equalP_48)
DEFLABEL (map_equalP_29)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_56;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_54;
  Wrd17 = Wrd21;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_52;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (Rsp [1]) = Rvl;
  goto loop_27;

DEFLABEL (label_52)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_7])), (Wrd18.pObj));

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (loop_49)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_40_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_40_1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_87;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_86;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_85)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_84;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd68.Lng))))
    goto label_84;
  (Wrd17.Obj) = ((Wrd66.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_80)
  (Wrd28.Obj) = (Rsp [1]);
  if ((Wrd28.Obj) == (current_block [OBJECT_40_1]))
    goto label_78;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_77;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_76)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_75;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd48.Lng))))
    goto label_75;
  (Wrd43.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_74)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_17])));
  Rhp += 1;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd59 = Wrd58;
  (Wrd60.Obj) = (Rsp [0]);
  ((Wrd59.pObj) [2]) = (Wrd60.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_40_14);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_73;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_73;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_72)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_71;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_70)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_69;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_69;
  (Wrd36.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_40_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_67;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_67;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_66)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_65;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_64)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_63;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_63;
  (Wrd36.Obj) = ((Wrd39.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_31]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_40_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_61;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_34]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_40_33);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_27;

DEFLABEL (label_61)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_32]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 1);

DEFLABEL (label_46)
  (Wrd7.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd44.Obj) = (current_block [OBJECT_40_7]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_30]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_29]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_44)
  (Wrd26.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_40_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_28]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd44.Obj) = (current_block [OBJECT_40_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_22]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_40)
  (Wrd26.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_40_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd51.Obj) = (current_block [OBJECT_40_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_36)
  (Wrd33.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_79)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_83;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_82)
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_27;

DEFLABEL (label_83)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 1);

DEFLABEL (label_35)
  (Wrd19.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd71.Obj) = (current_block [OBJECT_40_3]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_80;

DEFLABEL (label_86)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  (Wrd77.Obj) = (Rsp [1]);
  if (! ((Wrd77.Obj) == (Wrd6.Obj)))
    goto label_78;
  Rvl = (current_block [OBJECT_40_2]);
  goto label_79;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_40_17);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_89;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_89;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_88)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_26]));

DEFLABEL (label_89)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_40_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_88;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define TAG_41_9 3
#define LABEL_41_14 11
#define LABEL_41_15 13
#define LABEL_41_11 15
#define LABEL_41_12 17
#define TAG_41_13 7
#define LABEL_41_19 19
#define LABEL_41_20 21
#define LABEL_41_22 23
#define LABEL_41_26 25
#define LABEL_41_16 27
#define LABEL_41_21 29
#define LABEL_41_29 31
#define LABEL_41_27 33
#define LABEL_41_31 35
#define LABEL_41_23 37
#define TAG_41_24 17
#define LABEL_41_33 39
#define LABEL_41_34 41
#define LABEL_41_35 43
#define LABEL_41_37 45
#define ENVIRONMENT_LABEL_41_3 76
#define DEBUGGING_LABEL_41_2 75
#define OBJECT_41_5 74
#define OBJECT_41_4 73
#define OBJECT_41_3 72
#define OBJECT_41_2 71
#define OBJECT_41_1 70
#define OBJECT_41_0 69
#define EXECUTE_CACHE_41_39 47
#define EXECUTE_CACHE_41_38 49
#define EXECUTE_CACHE_41_36 51
#define EXECUTE_CACHE_41_32 53
#define EXECUTE_CACHE_41_30 55
#define EXECUTE_CACHE_41_28 57
#define EXECUTE_CACHE_41_25 59
#define EXECUTE_CACHE_41_18 61
#define EXECUTE_CACHE_41_17 63
#define EXECUTE_CACHE_41_10 65
#define EXECUTE_CACHE_41_6 67
#define FREE_REFERENCES_LABEL_41_0 46
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto make_free_register_30;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto lambda_38;

    case 4:
      current_block = (Rpc - LABEL_41_14);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_41_15);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_26;

    case 7:
      current_block = (Rpc - LABEL_41_12);
      goto lambda_39;

    case 8:
      current_block = (Rpc - LABEL_41_19);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_41_20);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_41_22);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_41_26);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_41_16);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_41_21);
      goto continuation_22;

    case 14:
      current_block = (Rpc - LABEL_41_29);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_41_27);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_41_31);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_41_23);
      goto lambda_40;

    case 18:
      current_block = (Rpc - LABEL_41_33);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_41_34);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_41_35);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_41_37);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_free_register_37)
DEFLABEL (make_free_register_30)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_8])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_12])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd10.Obj) = (current_block [OBJECT_41_3]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_18]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_41_8);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_57;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_57;
  (Wrd7.Obj) = ((Wrd42.pObj) [1]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_56;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_56;
  (Wrd13.Obj) = ((Wrd28.pObj) [2]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.Obj) = ((Wrd11.pObj) [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_47)
DEFLABEL (label_53)
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_23])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  Wrd51 = Wrd48;
  (Wrd52.Obj) = (Rsp [5]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  (Rsp [1]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_25]));

DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_52)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = (Wrd33.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_27]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_41_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_32]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_41_33);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  goto label_52;

DEFLABEL (label_56)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_41_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_44;

DEFLABEL (label_57)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_41_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_26);
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_41_12);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_63;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_63;
  (Wrd7.Obj) = ((Wrd42.pObj) [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_62;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd30.Lng))))
    goto label_62;
  (Wrd13.Obj) = ((Wrd28.pObj) [1]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_58;

DEFLABEL (label_61)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_41_21);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_41_31);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (current_block [OBJECT_41_5]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_41_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_58;

DEFLABEL (label_63)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_41_4]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_41_23);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_36]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_39]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_41_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_38]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_37);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_10 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define TAG_42_9 3
#define LABEL_42_5 11
#define TAG_42_6 4
#define LABEL_42_12 13
#define LABEL_42_13 15
#define TAG_42_14 6
#define LABEL_42_23 17
#define LABEL_42_24 19
#define LABEL_42_16 21
#define LABEL_42_18 23
#define LABEL_42_20 25
#define LABEL_42_21 27
#define TAG_42_22 12
#define LABEL_42_31 29
#define LABEL_42_32 31
#define LABEL_42_25 33
#define LABEL_42_27 35
#define LABEL_42_29 37
#define TAG_42_30 17
#define LABEL_42_33 39
#define LABEL_42_34 41
#define ENVIRONMENT_LABEL_42_3 64
#define DEBUGGING_LABEL_42_2 63
#define OBJECT_42_7 62
#define OBJECT_42_6 61
#define OBJECT_42_5 60
#define OBJECT_42_4 59
#define OBJECT_42_3 58
#define OBJECT_42_2 57
#define OBJECT_42_1 56
#define OBJECT_42_0 55
#define EXECUTE_CACHE_42_28 43
#define EXECUTE_CACHE_42_26 45
#define EXECUTE_CACHE_42_19 47
#define EXECUTE_CACHE_42_17 49
#define EXECUTE_CACHE_42_15 51
#define EXECUTE_CACHE_42_11 53
#define FREE_REFERENCES_LABEL_42_0 42
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_42_4);
      goto find_free_register_26;

    case 1:
      current_block = (Rpc - LABEL_42_10);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto lambda_38;

    case 4:
      current_block = (Rpc - LABEL_42_5);
      goto reallocate_alias_25;

    case 5:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto lambda_39;

    case 7:
      current_block = (Rpc - LABEL_42_23);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_42_24);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_42_18);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_42_20);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_42_21);
      goto lambda_40;

    case 13:
      current_block = (Rpc - LABEL_42_31);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_42_32);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_42_25);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_42_27);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_42_29);
      goto lambda_41;

    case 18:
      current_block = (Rpc - LABEL_42_33);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_42_34);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_free_register_36)
DEFLABEL (find_free_register_26)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  Wrd30 = Wrd32;
  (Wrd31.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [3]) = (Wrd28.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_8])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd31.Obj);
  ((Wrd12.pObj) [3]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_49;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd10.pObj) = (& (Rhp [-4]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_42;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
DEFLABEL (label_47)
  (Wrd17.Obj) = (Rsp [0]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_13])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_21])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_42_20);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_29])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

DEFLABEL (label_49)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_42_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_42_6]);

DEFLABEL (label_51)
DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (reallocate_alias_37)
DEFLABEL (reallocate_alias_25)
  INTERRUPT_CHECK (26, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_19]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_42_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_28]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_42_27);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_42_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_59;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd35.pObj) [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_58;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_58;
  (Wrd11.Obj) = ((Wrd21.pObj) [4]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_55;

DEFLABEL (label_57)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [0]) = (Wrd13.Obj);
  goto reallocate_alias_25;

DEFLABEL (label_58)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_42_4]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_24]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_55;

DEFLABEL (label_59)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_42_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_42_21);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_63)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_62;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_61)
  if ((Wrd21.Obj) == (current_block [OBJECT_42_1]))
    goto label_60;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Rsp [0]) = (Wrd29.Obj);
  goto reallocate_alias_25;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_32]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_42_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_42_29);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_69;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_69;
  (Wrd7.Obj) = ((Wrd35.pObj) [1]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_68;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_68;
  (Wrd13.Obj) = ((Wrd21.pObj) [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [0]) = (Wrd15.Obj);
  goto reallocate_alias_25;

DEFLABEL (label_68)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_42_7]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_34]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_67;

DEFLABEL (label_69)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_42_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_33]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define TAG_43_8 2
#define LABEL_43_10 9
#define LABEL_43_12 11
#define ENVIRONMENT_LABEL_43_3 22
#define DEBUGGING_LABEL_43_2 21
#define EXECUTE_CACHE_43_13 13
#define EXECUTE_CACHE_43_11 15
#define EXECUTE_CACHE_43_9 17
#define EXECUTE_CACHE_43_6 19
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_43_4);
      goto allocate_register_without_spillP_8;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_43_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_register_without_spillP_11)
DEFLABEL (allocate_register_without_spillP_8)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_7])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_43_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define TAG_44_8 2
#define LABEL_44_10 9
#define LABEL_44_11 11
#define ENVIRONMENT_LABEL_44_3 23
#define DEBUGGING_LABEL_44_2 22
#define OBJECT_44_2 21
#define OBJECT_44_1 20
#define OBJECT_44_0 19
#define EXECUTE_CACHE_44_12 13
#define EXECUTE_CACHE_44_9 15
#define EXECUTE_CACHE_44_6 17
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_44_4);
      goto free_register_existsP_5;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_44_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_44_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_register_existsP_10)
DEFLABEL (free_register_existsP_5)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_12)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_7])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_44_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_17;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd41.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd39.pObj) [1]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_16;
  (Wrd13.Obj) = ((Wrd25.pObj) [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (label_16)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_44_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_15;

DEFLABEL (label_17)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_44_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_8 5
#define LABEL_45_5 7
#define LABEL_45_6 9
#define TAG_45_7 3
#define LABEL_45_10 11
#define TAG_45_11 4
#define LABEL_45_13 13
#define LABEL_45_15 15
#define LABEL_45_19 17
#define LABEL_45_20 19
#define LABEL_45_21 21
#define LABEL_45_17 23
#define ENVIRONMENT_LABEL_45_3 42
#define DEBUGGING_LABEL_45_2 41
#define OBJECT_45_5 40
#define OBJECT_45_4 39
#define OBJECT_45_3 38
#define OBJECT_45_2 37
#define OBJECT_45_1 36
#define OBJECT_45_0 35
#define EXECUTE_CACHE_45_18 25
#define EXECUTE_CACHE_45_16 27
#define EXECUTE_CACHE_45_14 29
#define EXECUTE_CACHE_45_12 31
#define EXECUTE_CACHE_45_9 33
#define FREE_REFERENCES_LABEL_45_0 24
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_45_4);
      goto allocate_register_without_unloadP_14;

    case 1:
      current_block = (Rpc - LABEL_45_8);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_45_6);
      goto lambda_22;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto lambda_23;

    case 5:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_45_19);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_45_20);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_45_21);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_register_without_unloadP_21)
DEFLABEL (allocate_register_without_unloadP_14)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_10])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (label_26)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_45_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_45_3]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_45_10);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_44;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd50.Lng))))
    goto label_44;
  (Wrd9.Obj) = ((Wrd48.pObj) [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_34)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  (Wrd11.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_32)
DEFLABEL (label_43)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = (Wrd12.Obj);

DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_42;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_42;
  (Wrd16.Obj) = ((Wrd22.pObj) [3]);

DEFLABEL (label_41)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_40;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_39)
  if ((Wrd32.Obj) == (current_block [OBJECT_45_5]))
    goto label_38;
  Rvl = (current_block [OBJECT_45_3]);
  goto label_37;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
  goto label_35;

DEFLABEL (label_40)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_18)
  (Wrd32.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_45_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_45_1]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_7 5
#define LABEL_46_5 7
#define LABEL_46_10 9
#define LABEL_46_12 11
#define LABEL_46_8 13
#define LABEL_46_14 15
#define TAG_46_15 6
#define LABEL_46_17 17
#define LABEL_46_23 19
#define LABEL_46_24 21
#define LABEL_46_21 23
#define LABEL_46_22 25
#define LABEL_46_18 27
#define LABEL_46_19 29
#define LABEL_46_26 31
#define LABEL_46_29 33
#define ENVIRONMENT_LABEL_46_3 61
#define DEBUGGING_LABEL_46_2 60
#define OBJECT_46_4 59
#define OBJECT_46_3 58
#define OBJECT_46_2 57
#define OBJECT_46_1 56
#define OBJECT_46_0 55
#define EXECUTE_CACHE_46_30 35
#define EXECUTE_CACHE_46_28 37
#define EXECUTE_CACHE_46_27 39
#define EXECUTE_CACHE_46_25 41
#define EXECUTE_CACHE_46_20 43
#define EXECUTE_CACHE_46_16 45
#define EXECUTE_CACHE_46_13 47
#define EXECUTE_CACHE_46_11 49
#define EXECUTE_CACHE_46_9 51
#define EXECUTE_CACHE_46_6 53
#define FREE_REFERENCES_LABEL_46_0 34
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
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
      goto load_alias_register_20;

    case 1:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_46_12);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_46_14);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_46_23);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_46_24);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_46_22);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_46_26);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_46_29);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_alias_register_26)
DEFLABEL (load_alias_register_20)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd35.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd32.pObj) = (& (Rhp [-4]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_28;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_46_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_46_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_29);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 10))
    goto label_38;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_38;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_37)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_46_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_46_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_46_26);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_46_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (label_23)
  (Wrd14.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define TAG_47_8 2
#define LABEL_47_10 9
#define ENVIRONMENT_LABEL_47_3 18
#define DEBUGGING_LABEL_47_2 17
#define EXECUTE_CACHE_47_11 11
#define EXECUTE_CACHE_47_9 13
#define EXECUTE_CACHE_47_6 15
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto allocate_alias_register_3;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_alias_register_6)
DEFLABEL (allocate_alias_register_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_47_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_10);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_9 9
#define ENVIRONMENT_LABEL_48_3 19
#define DEBUGGING_LABEL_48_2 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_10 11
#define EXECUTE_CACHE_48_8 13
#define EXECUTE_CACHE_48_6 15
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_48_4);
      goto allocate_temporary_register_3;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_temporary_register_6)
DEFLABEL (allocate_temporary_register_3)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_48_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define ENVIRONMENT_LABEL_49_3 18
#define DEBUGGING_LABEL_49_2 17
#define EXECUTE_CACHE_49_10 9
#define EXECUTE_CACHE_49_9 11
#define EXECUTE_CACHE_49_8 13
#define EXECUTE_CACHE_49_6 15
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_49_4);
      goto add_pseudo_register_alias_4;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_pseudo_register_alias_7)
DEFLABEL (add_pseudo_register_alias_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (label_8)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 12
#define DEBUGGING_LABEL_50_2 11
#define OBJECT_50_1 10
#define OBJECT_50_0 9
#define EXECUTE_CACHE_50_6 7
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_50_4);
      goto machine_register_contents_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_contents_5)
DEFLABEL (machine_register_contents_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_8)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  Rvl = ((Wrd17.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 12
#define DEBUGGING_LABEL_51_2 11
#define OBJECT_51_1 10
#define OBJECT_51_0 9
#define EXECUTE_CACHE_51_6 7
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_51_4);
      goto pseudo_register_aliases_2;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_aliases_5)
DEFLABEL (pseudo_register_aliases_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_8)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  Rvl = ((Wrd17.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_9 7
#define LABEL_52_7 9
#define TAG_52_8 3
#define ENVIRONMENT_LABEL_52_3 20
#define DEBUGGING_LABEL_52_2 19
#define OBJECT_52_1 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_11 11
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_6 15
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto machine_register_alias_5;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_alias_9)
DEFLABEL (machine_register_alias_5)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_7])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 10))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_52_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_52_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_14;
  (Wrd9.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_9 9
#define ENVIRONMENT_LABEL_53_3 20
#define DEBUGGING_LABEL_53_2 19
#define OBJECT_53_1 18
#define OBJECT_53_0 17
#define EXECUTE_CACHE_53_10 11
#define EXECUTE_CACHE_53_8 13
#define EXECUTE_CACHE_53_6 15
#define FREE_REFERENCES_LABEL_53_0 10
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_53_4);
      goto pseudo_register_alias_4;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_alias_8)
DEFLABEL (pseudo_register_alias_4)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (Rsp [3]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_11;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_11;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_53_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define LABEL_54_8 9
#define ENVIRONMENT_LABEL_54_3 19
#define DEBUGGING_LABEL_54_2 18
#define OBJECT_54_4 17
#define OBJECT_54_3 16
#define OBJECT_54_2 15
#define OBJECT_54_1 14
#define OBJECT_54_0 13
#define EXECUTE_CACHE_54_6 11
#define FREE_REFERENCES_LABEL_54_0 10
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_54_4);
      goto machine_register_is_uniqueP_6;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_54_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_is_uniqueP_11)
DEFLABEL (machine_register_is_uniqueP_6)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  (Wrd40.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_12)
DEFLABEL (label_22)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Wrd9.Obj);

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_21;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_21;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);

DEFLABEL (label_20)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_18)
  if ((Wrd29.Obj) == (current_block [OBJECT_54_4]))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_54_0]);

DEFLABEL (label_16)
  goto label_14;

DEFLABEL (label_19)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 1);

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_54_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define LABEL_55_8 9
#define LABEL_55_9 11
#define ENVIRONMENT_LABEL_55_3 22
#define DEBUGGING_LABEL_55_2 21
#define OBJECT_55_5 20
#define OBJECT_55_4 19
#define OBJECT_55_3 18
#define OBJECT_55_2 17
#define OBJECT_55_1 16
#define OBJECT_55_0 15
#define EXECUTE_CACHE_55_6 13
#define FREE_REFERENCES_LABEL_55_0 12
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd59;
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
      current_block = (Rpc - LABEL_55_4);
      goto machine_register_holds_unique_valueP_8;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_55_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_holds_unique_valueP_14)
DEFLABEL (machine_register_holds_unique_valueP_8)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  (Wrd59.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_15)
DEFLABEL (label_27)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Wrd9.Obj);

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);

DEFLABEL (label_25)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_24;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_23)
  if ((Wrd29.Obj) == (current_block [OBJECT_55_4]))
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_20)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_22;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_22;
  (Wrd41.Obj) = ((Wrd48.pObj) [2]);
  if (! ((Wrd41.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_55_0]);
  goto label_17;

DEFLABEL (label_22)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_55_5]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_19;

DEFLABEL (label_24)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 1);

DEFLABEL (label_11)
  (Wrd29.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_55_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_9 7
#define LABEL_56_7 9
#define TAG_56_8 3
#define ENVIRONMENT_LABEL_56_3 20
#define DEBUGGING_LABEL_56_2 19
#define OBJECT_56_1 18
#define OBJECT_56_0 17
#define EXECUTE_CACHE_56_11 11
#define EXECUTE_CACHE_56_10 13
#define EXECUTE_CACHE_56_6 15
#define FREE_REFERENCES_LABEL_56_0 10
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_56_4);
      goto is_pseudo_register_aliasP_4;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_56_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (is_pseudo_register_aliasP_8)
DEFLABEL (is_pseudo_register_aliasP_4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_10)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_7])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 10))
    goto label_12;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_12;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (label_12)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_56_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_56_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_7 7
#define LABEL_57_8 9
#define LABEL_57_9 11
#define LABEL_57_10 13
#define LABEL_57_12 15
#define ENVIRONMENT_LABEL_57_3 29
#define DEBUGGING_LABEL_57_2 28
#define OBJECT_57_4 27
#define OBJECT_57_3 26
#define OBJECT_57_2 25
#define OBJECT_57_1 24
#define OBJECT_57_0 23
#define EXECUTE_CACHE_57_13 17
#define EXECUTE_CACHE_57_11 19
#define EXECUTE_CACHE_57_6 21
#define FREE_REFERENCES_LABEL_57_0 16
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_57_4);
      goto save_machine_register_8;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_57_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_57_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_machine_register_14)
DEFLABEL (save_machine_register_8)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_57_4]);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd51.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd51.uLng) == 10))
    goto label_22;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd47.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_20;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_19)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_18;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd27.Obj) == (current_block [OBJECT_57_4])))
    goto label_15;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_57_12);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_18)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 1);

DEFLABEL (label_11)
  (Wrd27.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_57_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_57_0]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_7 7
#define LABEL_58_8 9
#define LABEL_58_10 11
#define ENVIRONMENT_LABEL_58_3 23
#define DEBUGGING_LABEL_58_2 22
#define OBJECT_58_2 21
#define OBJECT_58_1 20
#define OBJECT_58_0 19
#define EXECUTE_CACHE_58_11 13
#define EXECUTE_CACHE_58_9 15
#define EXECUTE_CACHE_58_6 17
#define FREE_REFERENCES_LABEL_58_0 12
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_58_4);
      goto save_pseudo_register_5;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_pseudo_register_9)
DEFLABEL (save_pseudo_register_5)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_58_2]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_11)
  (Wrd27.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd27.uLng) == 10))
    goto label_13;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd23.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_13)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (current_block [OBJECT_58_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_9 11
#define LABEL_59_10 13
#define LABEL_59_11 15
#define LABEL_59_12 17
#define LABEL_59_13 19
#define LABEL_59_16 21
#define LABEL_59_14 23
#define TAG_59_15 10
#define LABEL_59_8 25
#define ENVIRONMENT_LABEL_59_3 35
#define DEBUGGING_LABEL_59_2 34
#define OBJECT_59_4 33
#define OBJECT_59_3 32
#define OBJECT_59_2 31
#define OBJECT_59_1 30
#define OBJECT_59_0 29
#define EXECUTE_CACHE_59_17 27
#define FREE_REFERENCES_LABEL_59_0 26
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd24;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd20;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_59_4);
      goto register_map_label_17;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_59_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_59_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_59_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_59_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_59_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_59_14);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_59_8);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_label_27)
DEFLABEL (register_map_label_17)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  goto loop_15;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (loop_28)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_59_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_59_1])))
    goto label_33;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_48;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_47)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_46;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd82.Lng))))
    goto label_46;
  (Wrd20.Obj) = ((Wrd80.pObj) [4]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd67.Obj) = (current_block [OBJECT_59_1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_43;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_59_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_41)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_37;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_36)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_35;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_35;
  (Wrd35.Obj) = ((Wrd39.pObj) [4]);

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd48.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd48.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_14])));
  Rhp += 2;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  Wrd54 = Wrd51;
  (Wrd55.Obj) = (Rsp [1]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  ((Wrd54.pObj) [3]) = (Wrd53.Obj);
  Rvl = (Wrd50.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd44.Obj) = (current_block [OBJECT_59_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_22)
  (Wrd35.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_21)
  (Wrd26.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_40;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd57.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_40)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_4]), 1);

DEFLABEL (label_23)
  (Wrd57.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_16]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_46)
  (Wrd85.Obj) = (current_block [OBJECT_59_2]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_59_14);

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

DEFLABEL (lambda_30)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_59_8);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define LABEL_60_8 11
#define LABEL_60_9 13
#define LABEL_60_11 15
#define LABEL_60_10 17
#define LABEL_60_13 19
#define LABEL_60_15 21
#define LABEL_60_14 23
#define ENVIRONMENT_LABEL_60_3 33
#define DEBUGGING_LABEL_60_2 32
#define OBJECT_60_4 31
#define OBJECT_60_3 30
#define OBJECT_60_2 29
#define OBJECT_60_1 28
#define OBJECT_60_0 27
#define EXECUTE_CACHE_60_12 25
#define FREE_REFERENCES_LABEL_60_0 24
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd53;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_60_4);
      goto register_map_labels_17;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_60_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_60_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_60_11);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_60_13);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_60_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_60_14);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_labels_27)
DEFLABEL (register_map_labels_17)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  Rdl = (& (Rsp [4]));
  goto loop_15;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (loop_28)
DEFLABEL (loop_15)
  DLINK_INTERRUPT_CHECK (25, LABEL_60_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_60_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_31;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_44)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_43;
  (Wrd21.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_42)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_60_1]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_38;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_60_1]))
    goto label_34;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_32)
  Rdl = (& (Rsp [2]));
  goto loop_15;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_60_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 1);

DEFLABEL (label_24)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_36;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_35)
  (Wrd49.pObj) = (& (Rsp [6]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd49.pObj) <= Rdl) ? (Wrd49.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_15;

DEFLABEL (label_36)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 1);

DEFLABEL (label_25)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_22)
  (Wrd53.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd53.Obj));
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_41;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_40)
  (Wrd78.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd78.pObj) <= Rdl) ? (Wrd78.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_15;

DEFLABEL (label_41)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 1);

DEFLABEL (label_23)
  (Wrd70.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd70.Obj));
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd33.Obj) = (current_block [OBJECT_60_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 2);

DEFLABEL (label_21)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_20)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_8 7
#define LABEL_61_10 9
#define LABEL_61_12 11
#define LABEL_61_13 13
#define LABEL_61_14 15
#define LABEL_61_11 17
#define LABEL_61_7 19
#define LABEL_61_16 21
#define ENVIRONMENT_LABEL_61_3 38
#define DEBUGGING_LABEL_61_2 37
#define OBJECT_61_7 36
#define OBJECT_61_6 35
#define OBJECT_61_5 34
#define OBJECT_61_4 33
#define OBJECT_61_3 32
#define OBJECT_61_2 31
#define OBJECT_61_1 30
#define OBJECT_61_0 29
#define EXECUTE_CACHE_61_15 23
#define EXECUTE_CACHE_61_9 25
#define EXECUTE_CACHE_61_6 27
#define FREE_REFERENCES_LABEL_61_0 22
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd80;
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
      current_block = (Rpc - LABEL_61_4);
      goto set_machine_register_label_14;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_8);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_61_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_61_12);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_61_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_61_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_61_11);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_61_16);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_machine_register_label_23)
DEFLABEL (set_machine_register_label_14)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_31;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_29;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_29;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_28)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_27;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_27;
  (Wrd37.Obj) = ((Wrd41.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_26)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_25;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd59.Lng))))
    goto label_25;
  (Wrd51.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_24)
  (Wrd67.Obj) = (* (Rsp++));
  (Wrd68.Obj) = (* (Rsp++));
  (Wrd75.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd70.pObj) = (& (Rhp [-5]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_61_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.Obj) = (current_block [OBJECT_61_4]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_14]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_19)
  (Wrd51.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (current_block [OBJECT_61_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (current_block [OBJECT_61_1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_36;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [1]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_33)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_61_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd25.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd27.Obj) = (current_block [OBJECT_61_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-5]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 13
#define DEBUGGING_LABEL_62_2 12
#define OBJECT_62_2 11
#define OBJECT_62_1 10
#define OBJECT_62_0 9
#define EXECUTE_CACHE_62_6 7
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_62_4);
      goto pseudo_register_saved_into_homeP_4;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_saved_into_homeP_7)
DEFLABEL (pseudo_register_saved_into_homeP_4)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  (Wrd27.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_8)
DEFLABEL (label_14)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd9.Obj);

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_62_1]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 2);

DEFLABEL (label_13)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_12;
  Rvl = ((Wrd22.pObj) [2]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 12
#define DEBUGGING_LABEL_63_2 11
#define EXECUTE_CACHE_63_7 7
#define EXECUTE_CACHE_63_6 9
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto delete_machine_register_2;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_machine_register_5)
DEFLABEL (delete_machine_register_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (label_6)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define LABEL_64_8 9
#define LABEL_64_12 11
#define LABEL_64_10 13
#define LABEL_64_13 15
#define ENVIRONMENT_LABEL_64_3 28
#define DEBUGGING_LABEL_64_2 27
#define OBJECT_64_3 26
#define OBJECT_64_2 25
#define OBJECT_64_1 24
#define OBJECT_64_0 23
#define EXECUTE_CACHE_64_11 17
#define EXECUTE_CACHE_64_9 19
#define EXECUTE_CACHE_64_6 21
#define FREE_REFERENCES_LABEL_64_0 16
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_64_4);
      goto delete_pseudo_register_7;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_64_12);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_64_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_64_13);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_pseudo_register_13)
DEFLABEL (delete_pseudo_register_7)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 10))
    goto label_21;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_21;
  (Wrd9.Obj) = ((Wrd24.pObj) [4]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_16;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_15)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_64_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_8);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_20;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_19)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_20)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_64_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_64_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_9 7
#define LABEL_65_8 9
#define LABEL_65_11 11
#define LABEL_65_12 13
#define LABEL_65_13 15
#define LABEL_65_6 17
#define ENVIRONMENT_LABEL_65_3 31
#define DEBUGGING_LABEL_65_2 30
#define OBJECT_65_4 29
#define OBJECT_65_3 28
#define OBJECT_65_2 27
#define OBJECT_65_1 26
#define OBJECT_65_0 25
#define EXECUTE_CACHE_65_14 19
#define EXECUTE_CACHE_65_10 21
#define EXECUTE_CACHE_65_7 23
#define FREE_REFERENCES_LABEL_65_0 18
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_65_4);
      goto delete_pseudo_registers_14;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_65_9);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_65_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_65_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_65_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_pseudo_registers_21)
DEFLABEL (delete_pseudo_registers_14)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_10;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_65_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_65_0])))
    goto label_23;
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_33;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd56.Lng))))
    goto label_33;
  (Wrd18.Obj) = ((Wrd54.pObj) [4]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [2]);
  goto label_24;

DEFLABEL (label_25)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));

DEFLABEL (label_24)
DEFLABEL (label_32)
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_31;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_31;
  (Wrd29.Obj) = ((Wrd40.pObj) [4]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_29)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  goto label_27;

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [3]);

DEFLABEL (label_27)
DEFLABEL (label_30)
  (Rsp [3]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_31)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_65_3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_33)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_65_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_6 5
#define LABEL_66_5 7
#define ENVIRONMENT_LABEL_66_3 17
#define DEBUGGING_LABEL_66_2 16
#define OBJECT_66_0 15
#define EXECUTE_CACHE_66_9 9
#define EXECUTE_CACHE_66_8 11
#define EXECUTE_CACHE_66_7 13
#define FREE_REFERENCES_LABEL_66_0 8
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_66_4);
      goto delete_other_locations_3;

    case 1:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_other_locations_6)
DEFLABEL (delete_other_locations_3)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 5
#define DEBUGGING_LABEL_67_2 4
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_67_4);
      goto allocator_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocator_values_3)
DEFLABEL (allocator_values_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define ENVIRONMENT_LABEL_68_3 15
#define DEBUGGING_LABEL_68_2 14
#define OBJECT_68_3 13
#define OBJECT_68_2 12
#define OBJECT_68_1 11
#define OBJECT_68_0 10
#define FREE_REFERENCES_LABEL_68_0 10
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_68_4);
      goto bind_allocator_values_3;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_allocator_values_9)
DEFLABEL (bind_allocator_values_3)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_13;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_13;
  (Wrd22.Obj) = ((Wrd28.pObj) [3]);

DEFLABEL (label_12)
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_11;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_11;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_11)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_68_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_7)
  (Wrd38.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_68_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define ENVIRONMENT_LABEL_69_3 18
#define DEBUGGING_LABEL_69_2 17
#define OBJECT_69_3 16
#define OBJECT_69_2 15
#define OBJECT_69_1 14
#define OBJECT_69_0 13
#define EXECUTE_CACHE_69_8 11
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_69_4);
      goto save_into_home_instruction_3;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_into_home_instruction_9)
DEFLABEL (save_into_home_instruction_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_14)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_13;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_12)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_11;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd36.Lng))))
    goto label_11;
  (Wrd28.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (label_11)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_69_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_7)
  (Wrd28.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_8 11
#define LABEL_70_9 13
#define LABEL_70_11 15
#define LABEL_70_10 17
#define ENVIRONMENT_LABEL_70_3 24
#define DEBUGGING_LABEL_70_2 23
#define OBJECT_70_4 22
#define OBJECT_70_3 21
#define OBJECT_70_2 20
#define OBJECT_70_1 19
#define OBJECT_70_0 18
#define FREE_REFERENCES_LABEL_70_0 18
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd54;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_70_4);
      goto register_map_live_homes_11;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_70_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_70_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_70_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_live_homes_19)
DEFLABEL (register_map_live_homes_11)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_70_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_70_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_23;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_31)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_30;
  (Wrd17.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_29)
  Rdl = (& (Rsp [2]));
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_25;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_24)
  goto loop_9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_4]), 1);

DEFLABEL (label_16)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_28;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_27)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_4]), 1);

DEFLABEL (label_17)
  (Wrd54.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd54.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd25.Obj) = (current_block [OBJECT_70_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_6 7
#define ENVIRONMENT_LABEL_71_3 15
#define DEBUGGING_LABEL_71_2 14
#define OBJECT_71_0 13
#define EXECUTE_CACHE_71_7 9
#define FREE_REFERENCE_71_0 12
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regmap_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_71_4);
      goto register_map_clearP_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_map_clearP_6)
DEFLABEL (register_map_clearP_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_10 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_15 29
#define LABEL_16 31
#define LABEL_22 33
#define LABEL_20 35
#define LABEL_25 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_31 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_40 67
#define LABEL_41 69
#define LABEL_42 71
#define LABEL_43 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_32 81
#define LABEL_50 83
#define LABEL_52 85
#define LABEL_53 87
#define LABEL_55 89
#define LABEL_37 91
#define LABEL_57 93
#define LABEL_44 95
#define LABEL_49 97
#define LABEL_54 99
#define LABEL_61 101
#define LABEL_62 103
#define LABEL_56 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_67 111
#define LABEL_60 113
#define LABEL_66 115
#define LABEL_69 117
#define LABEL_70 119
#define LABEL_68 121
#define LABEL_71 123
#define LABEL_72 125
#define LABEL_73 127
#define ENVIRONMENT_LABEL_3 171
#define DEBUGGING_LABEL_2 170
#define PURIFICATION_ROOT 169
#define OBJECT_19 168
#define OBJECT_18 167
#define OBJECT_17 166
#define OBJECT_16 165
#define OBJECT_15 164
#define OBJECT_14 163
#define OBJECT_13 162
#define OBJECT_12 161
#define OBJECT_11 160
#define OBJECT_10 159
#define OBJECT_9 158
#define OBJECT_8 157
#define OBJECT_7 156
#define OBJECT_6 155
#define OBJECT_5 154
#define OBJECT_4 153
#define OBJECT_3 152
#define OBJECT_2 151
#define OBJECT_1 150
#define OBJECT_0 149
#define EXECUTE_CACHE_63 129
#define EXECUTE_CACHE_59 131
#define EXECUTE_CACHE_58 133
#define EXECUTE_CACHE_51 135
#define EXECUTE_CACHE_48 137
#define EXECUTE_CACHE_21 139
#define FREE_REFERENCE_3 142
#define FREE_REFERENCE_2 143
#define FREE_REFERENCE_1 144
#define FREE_REFERENCE_0 145
#define GLOBAL_EXECUTE_CACHE_5 147
#define FREE_REFERENCES_LABEL_0 128
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
regmap_so_2825e84ca13a0c6f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd16;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd65;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_76;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_77;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_78;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto coerce_map_instructions_10;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_79;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto label_80;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_81;

    case 13:
      current_block = (Rpc - LABEL_15);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_16);
      goto clear_map_instructions_13;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_82;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto lambda_9;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto input_loop_26;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto output_loop_72;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto label_83;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto label_84;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto label_88;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto label_85;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto label_86;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto label_87;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto loop_24;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto label_89;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto label_92;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto label_90;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto label_91;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto entries_loop_47;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto label_93;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto label_94;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto label_95;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto label_96;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto label_97;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto label_98;

    case 39:
      current_block = (Rpc - LABEL_32);
      goto continuation_59;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto label_99;

    case 41:
      current_block = (Rpc - LABEL_52);
      goto registers_loop_68;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto label_101;

    case 43:
      current_block = (Rpc - LABEL_55);
      goto label_100;

    case 44:
      current_block = (Rpc - LABEL_37);
      goto continuation_22;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto label_102;

    case 46:
      current_block = (Rpc - LABEL_44);
      goto continuation_35;

    case 47:
      current_block = (Rpc - LABEL_49);
      goto continuation_57;

    case 48:
      current_block = (Rpc - LABEL_54);
      goto continuation_66;

    case 49:
      current_block = (Rpc - LABEL_61);
      goto label_103;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto label_104;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_20;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto aliases_loop_44;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto label_106;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto label_105;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_64;

    case 56:
      current_block = (Rpc - LABEL_66);
      goto continuation_42;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto label_107;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto label_108;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto continuation_40;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto label_120;

    case 61:
      current_block = (Rpc - LABEL_72);
      goto label_121;

    case 62:
      current_block = (Rpc - LABEL_73);
      goto expression_75;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_75)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_72])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_121)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_120)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	1,
	0,
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
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	0,
	1,
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
	0,
	0,
	0,
	0,
	0,
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
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 71)
      goto label_119;
    blocks = (current_block [OBJECT_19]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_71])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_119)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_127;
  Wrd8 = Wrd12;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_125;
  Wrd8 = Wrd12;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_123;
  Wrd8 = Wrd12;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15);
  Rvl = (current_block [OBJECT_12]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_126;

DEFLABEL (coerce_map_instructions_110)
DEFLABEL (coerce_map_instructions_10)
  INTERRUPT_CHECK (26, LABEL_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_133;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_132)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_131;
  Wrd14 = Wrd18;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_129;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_128)
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (Rsp [3]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_129)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_81)
  (Wrd20.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd15.pObj));

DEFLABEL (label_80)
  (Wrd14.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (clear_map_instructions_111)
DEFLABEL (clear_map_instructions_13)
  INTERRUPT_CHECK (26, LABEL_16);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_135;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_134)
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (Rsp [1]) = (Wrd14.Obj);
  goto input_loop_26;

DEFLABEL (label_135)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (lambda_112)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto output_loop_72;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [4]));
  goto entries_loop_47;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto input_loop_26;

DEFLABEL (input_loop_113)
DEFLABEL (input_loop_26)
  INTERRUPT_CHECK (26, LABEL_25);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_24;

DEFLABEL (output_loop_114)
DEFLABEL (output_loop_72)
  INTERRUPT_CHECK (26, LABEL_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_13]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_136;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_136)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_151;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_150)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_149;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_149;
  (Wrd17.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_148)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_144;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_143)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_142;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_142;
  (Wrd41.Obj) = ((Wrd44.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_141)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.pObj) = (& (Rsp [1]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_140;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_139)
  goto registers_loop_68;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_32);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_138;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_137)
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_49);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (label_138)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd49.Obj) = (current_block [OBJECT_17]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_85)
  (Wrd31.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_145)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_147;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_146)
  (Rsp [1]) = (Wrd68.Obj);
  Rsp = (& (Rsp [1]));
  goto output_loop_72;

DEFLABEL (label_147)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_88)
  (Wrd68.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd25.Obj) = (current_block [OBJECT_14]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_83)
  (Wrd7.Obj) = Rvl;
  goto label_150;

DEFLABEL (loop_115)
DEFLABEL (loop_24)
  DLINK_INTERRUPT_CHECK (25, LABEL_34);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13])))
    goto label_152;
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  Rvl = ((Wrd76.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_152)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_163;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_162)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_161;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_161;
  (Wrd21.Obj) = ((Wrd61.pObj) [2]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_156;

DEFLABEL (label_155)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_154;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_153)
  (Rsp [0]) = (Wrd46.Obj);
  goto loop_24;

DEFLABEL (label_154)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_91)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd46.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_160;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_159)
  Rdl = (& (Rsp [2]));
  goto loop_24;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_158;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_157)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_102)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_90)
  (Wrd37.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd37.Obj));
  (* (--Rsp)) = Rvl;
  goto label_159;

DEFLABEL (label_161)
  (Wrd70.Obj) = (current_block [OBJECT_18]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_92)
  (Wrd65.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd65.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_155;

DEFLABEL (label_163)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_89)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_162;

DEFLABEL (entries_loop_116)
DEFLABEL (entries_loop_47)
  DLINK_INTERRUPT_CHECK (25, LABEL_40);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13])))
    goto label_164;
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  Rvl = ((Wrd98.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_164)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_176;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_175)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_174;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_173)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_172;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_172;
  (Wrd32.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_171)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_170;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_169)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_168;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_167)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_166;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd86.Lng))))
    goto label_166;
  (Wrd81.Obj) = ((Wrd84.pObj) [3]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_165)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto aliases_loop_44;

DEFLABEL (label_166)
  (Wrd93.Obj) = (current_block [OBJECT_17]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_98)
  (Wrd88.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd88.Obj));
  (* (--Rsp)) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_97)
  (Wrd72.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_96)
  (Wrd61.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd56.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd44.Obj) = (current_block [OBJECT_17]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_95)
  (Wrd39.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd39.Obj));
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_94)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_93)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_175;

DEFLABEL (registers_loop_117)
DEFLABEL (registers_loop_68)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_13]))
    goto label_183;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_182;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_181)
  goto registers_loop_68;

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_180;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_179)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_178;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_177)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_60);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (label_178)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (label_183)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_185;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd23.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_184)
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto output_loop_72;

DEFLABEL (label_185)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_101)
  (Wrd23.Obj) = Rvl;
  goto label_184;

DEFLABEL (aliases_loop_118)
DEFLABEL (aliases_loop_44)
  DLINK_INTERRUPT_CHECK (25, LABEL_64);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_13]))
    goto label_192;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_191;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_190)
  Rdl = (& (Rsp [2]));
  goto aliases_loop_44;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_189;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_188)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_187;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_186)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (label_187)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_108)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 1);

DEFLABEL (label_107)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_105)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_190;

DEFLABEL (label_192)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd43.Obj) = ((Wrd31.pObj) [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_194;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_193)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.pObj) = (& ((Wrd56.pObj) [3]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd57.pObj) <= Rdl) ? (Wrd57.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto entries_loop_47;

DEFLABEL (label_194)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_106)
  (Wrd45.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd45.Obj));
  (* (--Rsp)) = Rvl;
  goto label_193;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_regmap_so_2825e84ca13a0c6f [71] =
  {
    { "regmap_so_code_1", 2, regmap_so_code_1 },
    { "regmap_so_code_2", 2, regmap_so_code_2 },
    { "regmap_so_code_3", 2, regmap_so_code_3 },
    { "regmap_so_code_4", 6, regmap_so_code_4 },
    { "regmap_so_code_5", 11, regmap_so_code_5 },
    { "regmap_so_code_6", 9, regmap_so_code_6 },
    { "regmap_so_code_7", 2, regmap_so_code_7 },
    { "regmap_so_code_8", 2, regmap_so_code_8 },
    { "regmap_so_code_9", 2, regmap_so_code_9 },
    { "regmap_so_code_10", 8, regmap_so_code_10 },
    { "regmap_so_code_11", 3, regmap_so_code_11 },
    { "regmap_so_code_12", 2, regmap_so_code_12 },
    { "regmap_so_code_13", 3, regmap_so_code_13 },
    { "regmap_so_code_14", 2, regmap_so_code_14 },
    { "regmap_so_code_15", 2, regmap_so_code_15 },
    { "regmap_so_code_16", 1, regmap_so_code_16 },
    { "regmap_so_code_17", 1, regmap_so_code_17 },
    { "regmap_so_code_18", 1, regmap_so_code_18 },
    { "regmap_so_code_19", 1, regmap_so_code_19 },
    { "regmap_so_code_20", 1, regmap_so_code_20 },
    { "regmap_so_code_21", 2, regmap_so_code_21 },
    { "regmap_so_code_22", 5, regmap_so_code_22 },
    { "regmap_so_code_23", 5, regmap_so_code_23 },
    { "regmap_so_code_24", 5, regmap_so_code_24 },
    { "regmap_so_code_25", 6, regmap_so_code_25 },
    { "regmap_so_code_26", 6, regmap_so_code_26 },
    { "regmap_so_code_27", 3, regmap_so_code_27 },
    { "regmap_so_code_28", 4, regmap_so_code_28 },
    { "regmap_so_code_29", 5, regmap_so_code_29 },
    { "regmap_so_code_30", 5, regmap_so_code_30 },
    { "regmap_so_code_31", 6, regmap_so_code_31 },
    { "regmap_so_code_32", 3, regmap_so_code_32 },
    { "regmap_so_code_33", 5, regmap_so_code_33 },
    { "regmap_so_code_34", 7, regmap_so_code_34 },
    { "regmap_so_code_35", 10, regmap_so_code_35 },
    { "regmap_so_code_36", 8, regmap_so_code_36 },
    { "regmap_so_code_37", 9, regmap_so_code_37 },
    { "regmap_so_code_38", 6, regmap_so_code_38 },
    { "regmap_so_code_39", 15, regmap_so_code_39 },
    { "regmap_so_code_40", 24, regmap_so_code_40 },
    { "regmap_so_code_41", 22, regmap_so_code_41 },
    { "regmap_so_code_42", 20, regmap_so_code_42 },
    { "regmap_so_code_43", 5, regmap_so_code_43 },
    { "regmap_so_code_44", 5, regmap_so_code_44 },
    { "regmap_so_code_45", 11, regmap_so_code_45 },
    { "regmap_so_code_46", 16, regmap_so_code_46 },
    { "regmap_so_code_47", 4, regmap_so_code_47 },
    { "regmap_so_code_48", 4, regmap_so_code_48 },
    { "regmap_so_code_49", 3, regmap_so_code_49 },
    { "regmap_so_code_50", 2, regmap_so_code_50 },
    { "regmap_so_code_51", 2, regmap_so_code_51 },
    { "regmap_so_code_52", 4, regmap_so_code_52 },
    { "regmap_so_code_53", 4, regmap_so_code_53 },
    { "regmap_so_code_54", 4, regmap_so_code_54 },
    { "regmap_so_code_55", 5, regmap_so_code_55 },
    { "regmap_so_code_56", 4, regmap_so_code_56 },
    { "regmap_so_code_57", 7, regmap_so_code_57 },
    { "regmap_so_code_58", 5, regmap_so_code_58 },
    { "regmap_so_code_59", 12, regmap_so_code_59 },
    { "regmap_so_code_60", 11, regmap_so_code_60 },
    { "regmap_so_code_61", 10, regmap_so_code_61 },
    { "regmap_so_code_62", 2, regmap_so_code_62 },
    { "regmap_so_code_63", 2, regmap_so_code_63 },
    { "regmap_so_code_64", 7, regmap_so_code_64 },
    { "regmap_so_code_65", 8, regmap_so_code_65 },
    { "regmap_so_code_66", 3, regmap_so_code_66 },
    { "regmap_so_code_67", 1, regmap_so_code_67 },
    { "regmap_so_code_68", 4, regmap_so_code_68 },
    { "regmap_so_code_69", 4, regmap_so_code_69 },
    { "regmap_so_code_70", 8, regmap_so_code_70 },
    { "regmap_so_code_71", 3, regmap_so_code_71 }
  };

int
decl_regmap_so_2825e84ca13a0c6f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_regmap_so_2825e84ca13a0c6f);
  return (0);
}

DECLARE_COMPILED_CODE ("regmap.so", 63, decl_regmap_so_2825e84ca13a0c6f, regmap_so_2825e84ca13a0c6f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_regmap_so_data_2825e84ca13a0c6f [8407] =
  "\xac\x01\x70\xdf\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\x28"
  "\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x08"
  "\x0d\x24\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x84\x88\xc1\xbd"
  "\x08\xc1\xbe\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbf\x1d\xb0\x85\x88\xb5\xc2\x1c\x80\x08\xb6\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb5"
  "\x1b\x82\x08\xb6\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb6\x22\x29\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb6\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb5\x08\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb5\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x80"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x1b"
  "\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x82"
  "\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x82\x28\x0d"
  "\x1c\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x83\x82\x1b\x81\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x83\x82\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x83\x82\x1b\x81"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb6\xb5\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb5\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x83\x1b\x82\xb5\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x82\x1b\x83\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x82\x1b\x83\xb5\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x1b\x82\xb5\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\xb6\xb5\x08\x0d\x1c\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x08"
  "\x1b\x82\xb5\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x07\x83\x80\x1b\x82\xb5\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\xb5\x08\x0d\x1c\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x1b\x80\xb6\xb5\x08\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\x81\xb5\x1b\x80\x07\x08\xb6\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x83\x0c\x81\x1b\x80\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x07\x82\x83\x1b\x80\x08\xb5\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x81\x1b\x80\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x82\x07"
  "\x1b\x80\xb5\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x1b\x82"
  "\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x28\x1b\x28\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\xb5\x1b\x82\x07\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x08\xb5\x1b\x82\x07\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb5\x82\x1b"
  "\x81\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x1b\x81\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1b\x83\x08\xb6"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x1b\x83\x08\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\xb6\x80\x82\x1b"
  "\x81\xb5\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x07\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x83\x08\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\xb5\xb6\x08"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x82\x1b\x80\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\xb6\x1b\x82\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1b\x80"
  "\x08\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x0d\xb8\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x81"
  "\x82\xb5\x1b\x80\x08\x1d\xb6\x0d\x1c\xc3\x0d\x1c\x1b\x1b\x0d\x0d"
  "\x1b\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x1b\xb0\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x0d"
  "\x1b\x1b\x1b\x0d\x17\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb4"
  "\x2a\x17\x0d\x0d\xc3\x0d\x1b\xb2\x99\xb3\x2a\xb1\x2a\x99\x28\x0d"
  "\x26\x0d\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61"
  "\x63\x6b\x2f\x72\x65\x67\x6d\x61\x70\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x03\x1b\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x77\x6f\x72\x64\x3f\x03"
  "\x0e\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x03\x41"
  "\x06\x81\x85\x02\x40\x04\x84\x06\x05\x0e\x02\x04\x0f\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x3f\x02\x43\x06\x81\x85"
  "\x02\x42\x04\x83\x04\x05\x0b\x02\x1c\x61\x76\x61\x69\x6c\x61\x62"
  "\x6c\x65\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x02\x45\x06\x81\x81\x02\x44\x04\x82\x02\x05\x0b"
  "\x02\x04\x63\x64\x72\x04\x63\x61\x72\x4b\x0e\xfd\xff\x03\x4a\x0c"
  "\xfd\xff\x03\x49\x0a\xfd\xff\x03\x48\x08\xff\xff\x03\x47\x06\x81"
  "\x87\x02\x46\x04\x84\x06\x0d\x13\x02\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x09\x04\x05\x65\x71\x76\x3f\x0a\x02\x56\x18\x81"
  "\x8d\x02\x55\x16\x81\x8d\x02\x54\x14\x81\x89\x02\x53\x12\x81\x89"
  "\x02\x52\x10\x81\x89\x02\x51\x0e\x81\x87\x02\x50\x0c\x81\x87\x02"
  "\x4f\x0a\x81\x89\x02\x4e\x08\x81\x89\x02\x4d\x06\x81\x85\x02\x4c"
  "\x04\x84\x06\x17\x22\x0b\x02\x09\x04\x05\x6d\x65\x6d\x71\x02\x5f"
  "\x14\x81\x89\x02\x5e\x12\x81\x87\x02\x5d\x10\x81\x89\x02\x5c\x0e"
  "\x81\x89\x02\x5b\x0c\x81\x8b\x02\x5a\x0a\x81\x8b\x02\x59\x08\x81"
  "\x87\x02\x58\x06\x81\x85\x02\x57\x04\x84\x06\x13\x1e\x0c\x02\x08"
  "\x61\x06\x81\x85\x02\x60\x04\x84\x06\x05\x0d\x02\x09\x04\x0e\x65"
  "\x71\x2d\x73\x65\x74\x2d\x64\x65\x6c\x65\x74\x65\x0e\x02\x63\x06"
  "\x81\x85\x02\x62\x04\x84\x06\x05\x0c\x0f\x02\x0a\x04\x12\x65\x71"
  "\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x10"
  "\x02\x65\x06\x81\x85\x02\x64\x04\x84\x06\x05\x0c\x11\x02\x0b\x6d"
  "\x12\xfd\xff\x03\x6c\x10\xfd\xff\x03\x6b\x0e\xfd\xff\x03\x6a\x0c"
  "\xfd\xff\x03\x69\x0a\xfd\xff\x03\x68\x08\xff\xff\x03\x67\x06\x81"
  "\x89\x02\x66\x04\x85\x08\x11\x17\x12\x02\x0c\x04\x0e\x02\x70\x08"
  "\x81\x87\x02\x6f\x06\x81\x8b\x02\x6e\x04\x85\x08\x07\x0e\x13\x02"
  "\x0d\x03\x17\x73\x6f\x72\x74\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x14\x02\x72\x06\x81\x85\x02"
  "\x71\x04\x84\x06\x05\x0c\x15\x02\x0e\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x16\x03\x14\x03\x75\x08\x81\x85\x02\x74\x06\x81\x87\x02\x73"
  "\x04\x84\x06\x07\x10\x17\x02\x0f\x04\x0f\x65\x71\x76\x2d\x73\x65"
  "\x74\x2d\x64\x65\x6c\x65\x74\x65\x18\x02\x77\x06\x81\x85\x02\x76"
  "\x04\x84\x06\x05\x0c\x19\x02\x10\x05\x13\x65\x71\x76\x2d\x73\x65"
  "\x74\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x02\x79\x06\x81"
  "\x87\x02\x78\x04\x85\x08\x05\x0c\x1a\x02\x11\x7a\x04\x86\x0a\x03"
  "\x1b\x02\x12\x09\x7b\x04\x83\x04\x03\x1c\x02\x13\x09\x7c\x04\x83"
  "\x04\x03\x1d\x02\x14\x09\x7d\x04\x83\x04\x03\x1e\x02\x15\x09\x7e"
  "\x04\x83\x04\x03\x1f\x02\x16\x09\x80\x01\x06\x81\x83\x02\x7f\x04"
  "\x83\x04\x05\x0b\x20\x02\x17\x09\x04\x15\x6c\x69\x73\x74\x2d\x73"
  "\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x21\x04"
  "\x04\x05\x6d\x65\x6d\x76\x22\x04\x85\x01\x0c\x81\x85\x02\x84\x01"
  "\x0a\x81\x85\x02\x83\x01\x08\x81\x85\x02\x82\x01\x06\x81\x87\x02"
  "\x81\x01\x04\x85\x08\x0b\x18\x23\x02\x18\x09\x04\x18\x6c\x69\x73"
  "\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x24\x04\x04\x22\x04\x8a\x01\x0c\x81\x85\x02\x89"
  "\x01\x0a\x81\x85\x02\x88\x01\x08\x81\x85\x02\x87\x01\x06\x81\x87"
  "\x02\x86\x01\x04\x85\x08\x0b\x18\x25\x02\x19\x09\x8f\x01\x0c\x81"
  "\x8b\x02\x8e\x01\x0a\x81\x89\x02\x8d\x01\x08\x81\x87\x02\x8c\x01"
  "\x06\x81\x85\x02\x8b\x01\x04\x84\x06\x0b\x13\x26\x02\x1a\x09\x04"
  "\x0e\x02\x95\x01\x0e\x81\x8b\x02\x94\x01\x0c\x81\x89\x02\x93\x01"
  "\x0a\x81\x87\x02\x92\x01\x08\x81\x8b\x02\x91\x01\x06\x81\x85\x02"
  "\x90\x01\x04\x84\x06\x0d\x18\x27\x02\x1b\x09\x05\x12\x65\x71\x2d"
  "\x73\x65\x74\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x02\x9b"
  "\x01\x0e\x81\x8d\x02\x9a\x01\x0c\x81\x8b\x02\x99\x01\x0a\x81\x89"
  "\x02\x98\x01\x08\x81\x8f\x02\x97\x01\x06\x81\x87\x02\x96\x01\x04"
  "\x85\x08\x0d\x18\x28\x02\x1c\x09\x04\x0a\x02\x9e\x01\x08\x81\x85"
  "\x02\x9d\x01\x06\x81\x85\x02\x9c\x01\x04\x84\x06\x07\x0f\x29\x02"
  "\x1d\x04\x18\x02\xa2\x01\x0a\x81\x8b\x02\xa1\x01\x08\x81\x89\x02"
  "\xa0\x01\x06\x81\x8d\x02\x9f\x01\x04\x86\x0a\x09\x12\x2a\x02\x1e"
  "\x04\x18\x04\x14\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x3a\x61\x64"
  "\x64\x2d\x61\x6c\x69\x61\x73\x2b\x05\x1a\x6d\x61\x70\x2d\x65\x6e"
  "\x74\x72\x69\x65\x73\x3a\x72\x65\x70\x6c\x61\x63\x65\x26\x74\x6f"
  "\x75\x63\x68\x2c\x04\xa7\x01\x0c\x81\x8b\x02\xa6\x01\x0a\x81\x89"
  "\x02\xa5\x01\x08\x81\x87\x02\xa4\x01\x06\x81\x8b\x02\xa3\x01\x04"
  "\x85\x08\x0b\x16\x2d\x02\x1f\x04\x18\x05\x18\x6d\x61\x70\x2d\x65"
  "\x6e\x74\x72\x79\x3a\x72\x65\x70\x6c\x61\x63\x65\x2d\x61\x6c\x69"
  "\x61\x73\x2e\x05\x2c\x04\xac\x01\x0c\x81\x8d\x02\xab\x01\x0a\x81"
  "\x8b\x02\xaa\x01\x08\x81\x89\x02\xa9\x01\x06\x81\x8d\x02\xa8\x01"
  "\x04\x86\x0a\x0b\x16\x2f\x02\x20\x09\x05\x2c\x02\xb2\x01\x0e\x81"
  "\x87\x02\xb1\x01\x0c\x81\x8d\x02\xb0\x01\x0a\x81\x8b\x02\xaf\x01"
  "\x08\x81\x89\x02\xae\x01\x06\x81\x85\x02\xad\x01\x04\x84\x06\x0d"
  "\x19\x30\x02\x21\x09\xb5\x01\x08\x81\x85\x02\xb4\x01\x06\x81\x83"
  "\x02\xb3\x01\x04\x83\x04\x07\x0e\x31\x02\x22\x09\x05\x2c\x02\xba"
  "\x01\x0c\x81\x87\x02\xb9\x01\x0a\x81\x8b\x02\xb8\x01\x08\x81\x89"
  "\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06\x0b\x16\x32\x02"
  "\x23\x09\x04\x16\x04\x0e\x03\x14\x04\xc1\x01\x10\x81\x87\x02\xc0"
  "\x01\x0e\x81\x87\x02\xbf\x01\x0c\x81\x8b\x02\xbe\x01\x0a\x81\x85"
  "\x02\xbd\x01\x08\x81\x8b\x02\xbc\x01\x06\x81\x89\x02\xbb\x01\x04"
  "\x84\x06\x0f\x1d\x33\x02\x24\x06\x61\x70\x70\x6c\x79\x12\x6d\x61"
  "\x70\x2d\x65\x6e\x74\x72\x79\x2d\x61\x6c\x69\x61\x73\x65\x73\x34"
  "\x16\x03\x04\x04\x6d\x61\x70\x04\x10\x03\x14\x04\x16\x05\xcb\x01"
  "\x16\x81\x87\x02\xca\x01\x14\x81\x8f\x02\xc9\x01\x12\x81\x8d\x02"
  "\xc8\x01\x10\x81\x8b\x02\xc7\x01\x0e\x81\x87\x02\xc6\x01\x0c\x81"
  "\x8b\x02\xc5\x01\x0a\x81\x85\x02\xc4\x01\x08\x81\x91\x02\xc3\x01"
  "\x06\x81\x89\x02\xc2\x01\x04\x84\x06\x15\x28\x35\x02\x25\x09\x03"
  "\x14\x04\x0e\x04\x17\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x3a\x64"
  "\x65\x6c\x65\x74\x65\x2d\x61\x6c\x69\x61\x73\x0e\x05\x14\x6d\x61"
  "\x70\x2d\x65\x6e\x74\x72\x69\x65\x73\x3a\x72\x65\x70\x6c\x61\x63"
  "\x65\x36\x05\xd3\x01\x12\x81\x8b\x02\xd2\x01\x10\x81\x89\x02\xd1"
  "\x01\x0e\x81\x8d\x02\xd0\x01\x0c\x81\x8b\x02\xcf\x01\x0a\x81\x8b"
  "\x02\xce\x01\x08\x81\x87\x02\xcd\x01\x06\x81\x89\x02\xcc\x01\x04"
  "\x85\x08\x11\x22\x37\x02\x26\x09\x04\x05\x64\x65\x6c\x71\x05\x36"
  "\x03\x14\x04\x16\x05\xdc\x01\x14\x81\x89\x02\xdb\x01\x12\x81\x8d"
  "\x02\xda\x01\x10\x81\x89\x02\xd9\x01\x0e\x81\x8d\x02\xd8\x01\x0c"
  "\x81\x8b\x02\xd7\x01\x0a\x81\x87\x02\xd6\x01\x08\x81\x8f\x02\xd5"
  "\x01\x06\x81\x8b\x02\xd4\x01\x04\x85\x08\x13\x26\x38\x02\x27\x27"
  "\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x65\x6e\x74\x72\x79\x2d\x3e\x74\x65\x6d\x70\x6f\x72\x61\x72\x79"
  "\x2d\x65\x6e\x74\x72\x79\x39\x02\x04\x10\x05\x05\x6d\x61\x70\x2a"
  "\x03\xe2\x01\x0e\x81\x8d\x02\xe1\x01\x0c\x81\x87\x02\xe0\x01\x0a"
  "\x81\x91\x02\xdf\x01\x08\x81\x8b\x02\xde\x01\x06\x81\x85\x02\xdd"
  "\x01\x04\x84\x06\x0d\x1a\x10\x02\x28\x09\x03\x14\x04\x16\x04\x0f"
  "\x72\x65\x67\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x03\x09"
  "\x72\x65\x76\x65\x72\x73\x65\x21\x05\xf1\x01\x20\x81\x8d\x02\xf0"
  "\x01\x1e\x81\x8b\x02\xef\x01\x1c\x81\x8b\x02\xee\x01\x1a\x81\x8b"
  "\x02\xed\x01\x18\x81\x8f\x02\xec\x01\x16\x81\x8f\x02\xeb\x01\x14"
  "\x81\x8d\x02\xea\x01\x12\x81\x8d\x02\xe9\x01\x10\x81\x8b\x02\xe8"
  "\x01\x0e\x81\x8b\x02\xe7\x01\x0c\x81\x8b\x02\xe6\x01\x0a\x81\x8b"
  "\x02\xe5\x01\x08\x81\x89\x02\xe4\x01\x06\x81\x87\x02\xe3\x01\x04"
  "\x84\x06\x1f\x31\x14\x02\x29\x09\x0f\x6d\x61\x70\x2d\x65\x6e\x74"
  "\x72\x79\x2d\x68\x6f\x6d\x65\x3a\x02\x04\x24\x04\x21\x04\x0a\x62"
  "\x6f\x6f\x6c\x65\x61\x6e\x3d\x3f\x04\x0a\x04\x12\x65\x71\x76\x2d"
  "\x73\x65\x74\x2d\x73\x61\x6d\x65\x2d\x73\x65\x74\x3f\x04\x06\x64"
  "\x65\x6c\x71\x21\x07\x89\x02\x32\x81\x87\x02\x88\x02\x30\x81\x87"
  "\x02\x87\x02\x2e\x81\x87\x02\x86\x02\x2c\x81\x8b\x02\x85\x02\x2a"
  "\x81\x8b\x02\x84\x02\x28\x81\x89\x02\x83\x02\x26\x81\x87\x02\x82"
  "\x02\x24\x81\x87\x02\x81\x02\x22\x81\x85\x02\x80\x02\x20\x81\x8b"
  "\x02\xff\x01\x1e\x81\x8b\x02\xfe\x01\x1c\x81\x89\x02\xfd\x01\x1a"
  "\x81\x85\x02\xfc\x01\x18\x81\x87\x02\xfb\x01\x16\x81\x87\x02\xfa"
  "\x01\x14\x81\x85\x02\xf9\x01\x12\x81\x85\x02\xf8\x01\x10\x81\x85"
  "\x02\xf7\x01\x0e\x81\x85\x02\xf6\x01\x0c\x81\x85\x02\xf5\x01\x0a"
  "\x81\x89\x02\xf4\x01\x08\x81\x87\x02\xf3\x01\x06\x81\x85\x02\xf2"
  "\x01\x04\x84\x06\x31\x4b\x24\x02\x2a\x30\x4d\x41\x4b\x45\x2d\x46"
  "\x52\x45\x45\x2d\x52\x45\x47\x49\x53\x54\x45\x52\x3a\x20\x55\x6e"
  "\x61\x62\x6c\x65\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65"
  "\x20\x72\x65\x67\x69\x73\x74\x65\x72\x09\x05\x13\x66\x69\x6e\x64"
  "\x2d\x66\x72\x65\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3b\x04"
  "\x13\x6d\x61\x70\x2d\x65\x6e\x74\x72\x69\x65\x73\x3a\x73\x65\x61"
  "\x72\x63\x68\x3c\x05\x15\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x3a"
  "\x66\x69\x6e\x64\x2d\x61\x6c\x69\x61\x73\x3d\x03\x06\x65\x72\x72"
  "\x6f\x72\x3e\x04\x16\x62\x69\x6e\x64\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x6f\x72\x2d\x76\x61\x6c\x75\x65\x73\x3f\x03\x1b\x73\x61\x76"
  "\x65\x2d\x69\x6e\x74\x6f\x2d\x68\x6f\x6d\x65\x2d\x69\x6e\x73\x74"
  "\x72\x75\x63\x74\x69\x6f\x6e\x40\x04\x1b\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x74\x79\x70\x65\x73\x2d\x63\x6f\x6d\x70\x61\x74\x69"
  "\x62\x6c\x65\x3f\x41\x05\x1a\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x6d\x61\x70\x3a\x64\x65\x6c\x65\x74\x65\x2d\x61\x6c\x69\x61\x73"
  "\x42\x04\x1c\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x74\x72\x61\x6e\x73\x66\x65\x72\x43\x06"
  "\x1b\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x72\x65"
  "\x70\x6c\x61\x63\x65\x2d\x61\x6c\x69\x61\x73\x44\x04\x16\x0c\x9f"
  "\x02\x2e\x81\x8b\x02\x9e\x02\x2c\x81\x8b\x02\x9d\x02\x2a\x81\x89"
  "\x02\x9c\x02\x28\x81\x8b\x02\x9b\x02\x26\x81\x89\x02\x9a\x02\x24"
  "\x81\x87\x02\x99\x02\x22\x81\x89\x02\x98\x02\x20\x81\x8d\x02\x97"
  "\x02\x1e\x81\x85\x02\x96\x02\x1c\x81\x85\x02\x95\x02\x1a\x81\x87"
  "\x02\x94\x02\x18\x81\x89\x02\x93\x02\x16\x81\x85\x02\x92\x02\x14"
  "\x81\x85\x02\x91\x02\x12\x81\x85\x02\x90\x02\x10\x81\x89\x02\x8f"
  "\x02\x0e\x81\x85\x02\x8e\x02\x0c\x81\x85\x02\x8d\x02\x0a\x81\x85"
  "\x02\x8c\x02\x08\x81\x89\x02\x8b\x02\x06\x81\x87\x02\x8a\x02\x04"
  "\x85\x08\x2d\x4d\x45\x02\x2b\x09\x04\x21\x04\x3c\x04\x05\x3d\x04"
  "\x22\x05\x42\x07\xb3\x02\x2a\x81\x85\x02\xb2\x02\x28\x81\x85\x02"
  "\xb1\x02\x26\x81\x85\x02\xb0\x02\x24\x81\x87\x02\xaf\x02\x22\x81"
  "\x85\x02\xae\x02\x20\x81\x85\x02\xad\x02\x1e\x81\x85\x02\xac\x02"
  "\x1c\x81\x85\x02\xab\x02\x1a\x81\x8b\x02\xaa\x02\x18\x81\x85\x02"
  "\xa9\x02\x16\x81\x85\x02\xa8\x02\x14\x81\x85\x02\xa7\x02\x12\x81"
  "\x85\x02\xa6\x02\x10\x81\x85\x02\xa5\x02\x0e\x81\x8b\x02\xa4\x02"
  "\x0c\x81\x85\x02\xa3\x02\x0a\x81\x85\x02\xa2\x02\x08\x81\x89\x02"
  "\xa1\x02\x06\x81\x8d\x02\xa0\x02\x04\x85\x08\x29\x41\x46\x02\x2c"
  "\x05\x16\x66\x72\x65\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x65\x78\x69\x73\x74\x73\x3f\x47\x04\x3c\x05\x3d\x04\x41\x05\xb8"
  "\x02\x0c\x81\x87\x02\xb7\x02\x0a\x81\x85\x02\xb6\x02\x08\x81\x85"
  "\x02\xb5\x02\x06\x81\x87\x02\xb4\x02\x04\x85\x08\x0b\x17\x41\x02"
  "\x2d\x09\x05\x22\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x77\x69\x74\x68\x6f\x75\x74\x2d\x75\x6e"
  "\x6c\x6f\x61\x64\x3f\x48\x04\x3c\x05\x3d\x04\xbd\x02\x0c\x81\x85"
  "\x02\xbc\x02\x0a\x81\x85\x02\xbb\x02\x08\x81\x85\x02\xba\x02\x06"
  "\x81\x87\x02\xb9\x02\x04\x85\x08\x0b\x18\x49\x02\x2e\x09\x04\x21"
  "\x04\x3c\x04\x05\x3d\x04\x22\x06\xc8\x02\x18\x81\x85\x02\xc7\x02"
  "\x16\x81\x87\x02\xc6\x02\x14\x81\x87\x02\xc5\x02\x12\x81\x85\x02"
  "\xc4\x02\x10\x81\x85\x02\xc3\x02\x0e\x81\x85\x02\xc2\x02\x0c\x81"
  "\x85\x02\xc1\x02\x0a\x81\x85\x02\xc0\x02\x08\x81\x87\x02\xbf\x02"
  "\x06\x81\x8b\x02\xbe\x02\x04\x85\x08\x17\x2b\x22\x02\x2f\x09\x04"
  "\x16\x6d\x61\x70\x2d\x65\x6e\x74\x72\x69\x65\x73\x3a\x66\x69\x6e"
  "\x64\x2d\x68\x6f\x6d\x65\x4a\x05\x13\x6d\x61\x6b\x65\x2d\x66\x72"
  "\x65\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x4b\x03\x18\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x4c\x04\x21\x04\x3f\x04\x18\x68\x6f\x6d\x65"
  "\x2d\x3e\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x72\x61\x6e\x73"
  "\x66\x65\x72\x4d\x04\x43\x05\x17\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6d\x61\x70\x3a\x61\x64\x64\x2d\x61\x6c\x69\x61\x73\x4e\x04"
  "\x16\x06\x16\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a"
  "\x61\x64\x64\x2d\x68\x6f\x6d\x65\x4f\x0b\xd8\x02\x22\x81\x8d\x02"
  "\xd7\x02\x20\x81\x8d\x02\xd6\x02\x1e\x81\x8d\x02\xd5\x02\x1c\x81"
  "\x8b\x02\xd4\x02\x1a\x81\x8d\x02\xd3\x02\x18\x81\x8b\x02\xd2\x02"
  "\x16\x81\x91\x02\xd1\x02\x14\x81\x91\x02\xd0\x02\x12\x81\x89\x02"
  "\xcf\x02\x10\x81\x89\x02\xce\x02\x0e\x81\x8b\x02\xcd\x02\x0c\x81"
  "\x8f\x02\xcc\x02\x0a\x81\x8d\x02\xcb\x02\x08\x81\x89\x02\xca\x02"
  "\x06\x81\x8b\x02\xc9\x02\x04\x86\x0a\x21\x3e\x50\x02\x30\x05\x4b"
  "\x04\x3f\x06\x4f\x04\xdc\x02\x0a\x81\x89\x02\xdb\x02\x08\x81\x89"
  "\x02\xda\x02\x06\x81\x89\x02\xd9\x02\x04\x86\x0a\x09\x13\x51\x02"
  "\x31\x05\x4b\x04\x3f\x06\x4f\x04\xe0\x02\x0a\x81\x87\x02\xdf\x02"
  "\x08\x85\x08\xde\x02\x06\x81\x87\x02\xdd\x02\x04\x85\x08\x09\x14"
  "\x52\x02\x32\x04\x18\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x63\x68"
  "\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x53\x04\x4a\x06"
  "\x4f\x05\x4e\x05\xe3\x02\x08\x81\x8b\x02\xe2\x02\x06\x81\x89\x02"
  "\xe1\x02\x04\x86\x0a\x07\x13\x54\x02\x33\x09\x04\x17\x6d\x61\x70"
  "\x2d\x65\x6e\x74\x72\x69\x65\x73\x3a\x66\x69\x6e\x64\x2d\x61\x6c"
  "\x69\x61\x73\x55\x02\xe5\x02\x06\x81\x85\x02\xe4\x02\x04\x84\x06"
  "\x05\x0d\x56\x02\x34\x09\x04\x4a\x02\xe7\x02\x06\x81\x85\x02\xe6"
  "\x02\x04\x84\x06\x05\x0d\x57\x02\x35\x09\x04\x55\x04\x21\x04\x04"
  "\xeb\x02\x0a\x81\x85\x02\xea\x02\x08\x81\x89\x02\xe9\x02\x06\x81"
  "\x87\x02\xe8\x02\x04\x85\x08\x09\x15\x58\x02\x36\x09\x04\x4a\x03"
  "\x4c\x04\x21\x04\xef\x02\x0a\x81\x89\x02\xee\x02\x08\x81\x89\x02"
  "\xed\x02\x06\x81\x87\x02\xec\x02\x04\x85\x08\x09\x15\x59\x02\x37"
  "\x09\x04\x55\x02\xf3\x02\x0a\x81\x85\x02\xf2\x02\x08\x81\x85\x02"
  "\xf1\x02\x06\x81\x85\x02\xf0\x02\x04\x84\x06\x09\x14\x5a\x02\x38"
  "\x09\x04\x55\x02\xf8\x02\x0c\x81\x85\x02\xf7\x02\x0a\x81\x85\x02"
  "\xf6\x02\x08\x81\x85\x02\xf5\x02\x06\x81\x85\x02\xf4\x02\x04\x84"
  "\x06\x0b\x17\x5b\x02\x39\x09\x04\x4a\x04\x21\x04\x0a\x04\xfc\x02"
  "\x0a\x81\x85\x02\xfb\x02\x08\x81\x89\x02\xfa\x02\x06\x81\x87\x02"
  "\xf9\x02\x04\x85\x08\x09\x15\x21\x02\x3a\x09\x04\x55\x04\x18\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x73\x61\x76\x65"
  "\x2d\x65\x6e\x74\x72\x79\x0a\x03\x40\x04\x83\x03\x10\x81\x89\x02"
  "\x82\x03\x0e\x81\x89\x02\x81\x03\x0c\x81\x89\x02\x80\x03\x0a\x81"
  "\x89\x02\xff\x02\x08\x81\x89\x02\xfe\x02\x06\x81\x87\x02\xfd\x02"
  "\x04\x85\x08\x0f\x1e\x5c\x02\x3b\x09\x04\x4a\x04\x0a\x03\x40\x04"
  "\x88\x03\x0c\x81\x89\x02\x87\x03\x0a\x81\x89\x02\x86\x03\x08\x81"
  "\x89\x02\x85\x03\x06\x81\x87\x02\x84\x03\x04\x85\x08\x0b\x18\x5d"
  "\x02\x3c\x09\x05\x3d\x02\x94\x03\x1a\x83\x04\x93\x03\x18\x81\x85"
  "\x02\x92\x03\x16\x81\x8d\x02\x91\x03\x14\x81\x89\x02\x90\x03\x12"
  "\x81\x89\x02\x8f\x03\x10\x81\x89\x02\x8e\x03\x0e\x81\x89\x02\x8d"
  "\x03\x0c\x81\x89\x02\x8c\x03\x0a\x81\x87\x02\x8b\x03\x08\x81\x87"
  "\x02\x8a\x03\x06\x81\x85\x02\x89\x03\x04\x84\x06\x19\x24\x5e\x02"
  "\x3d\x09\x05\x12\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x3a\x61\x6c"
  "\x69\x61\x73\x65\x73\x5f\x02\x9f\x03\x18\xfd\xff\x03\x9e\x03\x16"
  "\xfd\xff\x03\x9d\x03\x14\xfd\xff\x03\x9c\x03\x12\xfd\xff\x03\x9b"
  "\x03\x10\xfd\xff\x03\x9a\x03\x0e\xfd\xff\x03\x99\x03\x0c\xfd\xff"
  "\x03\x98\x03\x0a\xfd\xff\x03\x97\x03\x08\xff\xff\x03\x96\x03\x06"
  "\x81\x87\x02\x95\x03\x04\x84\x06\x17\x22\x60\x02\x3e\x09\x04\x55"
  "\x04\x18\x05\x36\x04\xa9\x03\x16\x81\x8b\x02\xa8\x03\x14\x81\x89"
  "\x02\xa7\x03\x12\x81\x8b\x02\xa6\x03\x10\x81\x91\x02\xa5\x03\x0e"
  "\x81\x8f\x02\xa4\x03\x0c\x81\x8d\x02\xa3\x03\x0a\x81\x89\x02\xa2"
  "\x03\x08\x81\x8d\x02\xa1\x03\x06\x81\x87\x02\xa0\x03\x04\x85\x08"
  "\x15\x27\x18\x02\x3f\x09\x04\x4a\x02\xab\x03\x06\x81\x85\x02\xaa"
  "\x03\x04\x84\x06\x05\x0e\x61\x02\x40\x04\x55\x05\x42\x03\xad\x03"
  "\x06\x81\x85\x02\xac\x03\x04\x84\x06\x05\x0d\x62\x02\x41\x09\x04"
  "\x4a\x04\x1a\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a"
  "\x64\x65\x6c\x65\x74\x65\x2d\x65\x6e\x74\x72\x79\x63\x04\x1e\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x65\x6e\x74\x72"
  "\x79\x2d\x3e\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x64\x04\xb4\x03"
  "\x10\x81\x89\x02\xb3\x03\x0e\x81\x89\x02\xb2\x03\x0c\x81\x89\x02"
  "\xb1\x03\x0a\x81\x89\x02\xb0\x03\x08\x81\x89\x02\xaf\x03\x06\x81"
  "\x87\x02\xae\x03\x04\x85\x08\x0f\x1d\x65\x02\x42\x09\x04\x1c\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x64\x65\x6c\x65"
  "\x74\x65\x2d\x65\x6e\x74\x72\x69\x65\x73\x66\x04\x4a\x04\x22\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x65\x6e\x74\x72"
  "\x69\x65\x73\x2d\x3e\x74\x65\x6d\x70\x6f\x72\x61\x72\x69\x65\x73"
  "\x67\x04\xbc\x03\x12\x81\x89\x02\xbb\x03\x10\x81\x8d\x02\xba\x03"
  "\x0e\x81\x8d\x02\xb9\x03\x0c\x81\x8d\x02\xb8\x03\x0a\x81\x8b\x02"
  "\xb7\x03\x08\x81\x8d\x02\xb6\x03\x06\x81\x8b\x02\xb5\x03\x04\x84"
  "\x06\x11\x20\x68\x02\x43\x26\x44\x45\x4c\x45\x54\x45\x2d\x4f\x54"
  "\x48\x45\x52\x2d\x4c\x4f\x43\x41\x54\x49\x4f\x4e\x53\x3a\x20\x4d"
  "\x69\x73\x73\x69\x6e\x67\x20\x65\x6e\x74\x72\x79\x04\x55\x04\x3e"
  "\x05\x22\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x64"
  "\x65\x6c\x65\x74\x65\x2d\x6f\x74\x68\x65\x72\x2d\x61\x6c\x69\x61"
  "\x73\x65\x73\x3e\x04\xbf\x03\x08\x81\x87\x02\xbe\x03\x06\x81\x89"
  "\x02\xbd\x03\x04\x84\x06\x07\x12\x69\x02\x44\xc0\x03\x04\x85\x08"
  "\x03\x6a\x02\x45\x09\xc4\x03\x0a\x81\x89\x02\xc3\x03\x08\x81\x89"
  "\x02\xc2\x03\x06\x81\x85\x02\xc1\x03\x04\x84\x06\x09\x10\x6b\x02"
  "\x46\x09\x04\x18\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x68\x6f"
  "\x6d\x65\x2d\x74\x72\x61\x6e\x73\x66\x65\x72\x02\xc8\x03\x0a\x81"
  "\x85\x02\xc7\x03\x08\x81\x83\x02\xc6\x03\x06\x81\x83\x02\xc5\x03"
  "\x04\x83\x04\x09\x13\x6c\x02\x47\x09\xd0\x03\x12\xfd\xff\x03\xcf"
  "\x03\x10\xfd\xff\x03\xce\x03\x0e\xfd\xff\x03\xcd\x03\x0c\x81\x83"
  "\x02\xcc\x03\x0a\x81\x83\x02\xcb\x03\x08\x81\x83\x02\xca\x03\x06"
  "\x81\x83\x02\xc9\x03\x04\x83\x04\x11\x19\x6d\x02\x48\x1b\x6d\x61"
  "\x70\x2d\x65\x6e\x74\x72\x79\x2d\x73\x61\x76\x65\x64\x2d\x69\x6e"
  "\x74\x6f\x2d\x68\x6f\x6d\x65\x3f\x02\x04\x09\x66\x6f\x72\x2d\x61"
  "\x6c\x6c\x3f\x02\xd3\x03\x08\x81\x85\x02\xd2\x03\x06\x81\x83\x02"
  "\xd1\x03\x04\x83\x04\x07\x10\x6e\x48\x6f\x6f\x09\x02\x17\x63\x6c"
  "\x65\x61\x72\x2d\x6d\x61\x70\x2d\x69\x6e\x73\x74\x72\x75\x63\x74"
  "\x69\x6f\x6e\x73\x6f\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x18\x63\x6f\x65\x72\x63\x65\x2d"
  "\x6d\x61\x70\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73"
  "\x09\x6f\x09\x14\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70"
  "\x2d\x63\x6c\x65\x61\x72\x3f\x18\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6d\x61\x70\x2d\x6c\x69\x76\x65\x2d\x68\x6f\x6d\x65\x73\x40"
  "\x3f\x11\x61\x6c\x6c\x6f\x63\x61\x74\x6f\x72\x2d\x76\x61\x6c\x75"
  "\x65\x73\x17\x64\x65\x6c\x65\x74\x65\x2d\x6f\x74\x68\x65\x72\x2d"
  "\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x73\x18\x64\x65\x6c\x65\x74\x65"
  "\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x73\x17\x64\x65\x6c\x65\x74\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x53\x21\x70\x73\x65\x75\x64\x6f"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x73\x61\x76\x65\x64\x2d"
  "\x69\x6e\x74\x6f\x2d\x68\x6f\x6d\x65\x3f\x1b\x73\x65\x74\x2d\x6d"
  "\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x6c\x61\x62\x65\x6c\x14\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d"
  "\x61\x70\x2d\x6c\x61\x62\x65\x6c\x73\x13\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6d\x61\x70\x2d\x6c\x61\x62\x65\x6c\x15\x73\x61\x76"
  "\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x16\x73\x61\x76\x65\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x1a\x69\x73\x2d\x70\x73\x65\x75\x64"
  "\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73"
  "\x3f\x25\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x68\x6f\x6c\x64\x73\x2d\x75\x6e\x69\x71\x75\x65\x2d"
  "\x76\x61\x6c\x75\x65\x3f\x1c\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x73\x2d\x75\x6e\x69\x71\x75"
  "\x65\x3f\x16\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x61\x6c\x69\x61\x73\x17\x6d\x61\x63\x68\x69\x6e\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73\x18"
  "\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x61\x6c\x69\x61\x73\x65\x73\x1a\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x6f\x6e\x74\x65\x6e\x74"
  "\x73\x1a\x61\x64\x64\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x61\x6c\x69\x61\x73\x1c\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65"
  "\x2d\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x14"
  "\x6c\x6f\x61\x64\x2d\x61\x6c\x69\x61\x73\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x48\x47\x21\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x77\x69\x74\x68\x6f\x75\x74\x2d"
  "\x73\x70\x69\x6c\x6c\x3f\x3b\x4b\x0b\x6d\x61\x70\x2d\x65\x71\x75"
  "\x61\x6c\x3f\x1f\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70"
  "\x3a\x6b\x65\x65\x70\x2d\x6c\x69\x76\x65\x2d\x65\x6e\x74\x72\x69"
  "\x65\x73\x67\x3e\x42\x66\x63\x64\x39\x0a\x44\x4e\x4f\x0c\x6d\x61"
  "\x70\x2d\x65\x6e\x74\x72\x79\x3d\x3f\x6f\x2e\x0e\x2b\x5f\x3d\x14"
  "\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x3a\x61\x6e\x79\x2d\x61\x6c"
  "\x69\x61\x73\x10\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x2d\x6c\x61"
  "\x62\x65\x6c\x34\x3a\x0f\x6d\x61\x6b\x65\x2d\x6d\x61\x70\x2d\x65"
  "\x6e\x74\x72\x79\x16\x6d\x61\x70\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x73\x3a\x72\x65\x70\x6c\x61\x63\x65\x15\x6d\x61\x70\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x73\x3a\x64\x65\x6c\x65\x74\x65\x13"
  "\x6d\x61\x70\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x3a\x61\x64"
  "\x64\x2a\x12\x6d\x61\x70\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73"
  "\x3a\x61\x64\x64\x2c\x36\x14\x6d\x61\x70\x2d\x65\x6e\x74\x72\x69"
  "\x65\x73\x3a\x64\x65\x6c\x65\x74\x65\x2a\x13\x6d\x61\x70\x2d\x65"
  "\x6e\x74\x72\x69\x65\x73\x3a\x64\x65\x6c\x65\x74\x65\x10\x6d\x61"
  "\x70\x2d\x65\x6e\x74\x72\x69\x65\x73\x3a\x61\x64\x64\x55\x4a\x3c"
  "\x13\x65\x6d\x70\x74\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x6d\x61\x70\x48\x6e\x04\x6d\x04\x6c\x04\x6b\x04\x6a\x04\x69\x04"
  "\x68\x04\x65\x04\x62\x04\x61\x04\x18\x04\x60\x04\x5e\x04\x5d\x04"
  "\x5c\x04\x21\x04\x5b\x04\x5a\x04\x59\x04\x58\x04\x57\x04\x56\x04"
  "\x54\x04\x52\x04\x51\x04\x50\x04\x22\x04\x49\x04\x41\x04\x46\x04"
  "\x45\x04\x24\x04\x14\x04\x10\x04\x38\x04\x37\x04\x35\x04\x33\x04"
  "\x32\x04\x31\x04\x30\x04\x2f\x04\x2d\x04\x2a\x04\x29\x04\x28\x04"
  "\x27\x04\x26\x04\x25\x04\x23\x04\x20\x04\x1f\x04\x1e\x04\x1d\x04"
  "\x1c\x04\x1b\x04\x1a\x04\x19\x04\x17\x04\x15\x04\x13\x04\x12\x04"
  "\x11\x04\x0f\x04\x0d\x04\x0c\x04\x0b\x04\x04\x04\x48\x0e\x6d\x61"
  "\x70\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x0c\x6d\x61\x70\x2d"
  "\x65\x6e\x74\x72\x69\x65\x73\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x4c\x04\x04\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x05"
  "\x63\x6f\x6e\x73\x04\x63\x61\x72\x04\x63\x64\x72\x6f\x05\x06\x0f"
  "\x74\x68\x72\x65\x65\x2d\x77\x61\x79\x2d\x73\x6f\x72\x74\x04\x13"
  "\x65\x71\x76\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e"
  "\x63\x65\x04\x4d\x03\x40\x04\x16\x04\x43\x07\x3f\x80\x01\x80\x80"
  "\x04\x3e\x7e\x81\x81\x02\x3d\x7c\x81\x81\x02\x3c\x7a\xfd\xff\x03"
  "\x3b\x78\xfd\xff\x03\x3a\x76\xfd\xff\x03\x39\x74\xfd\xff\x03\x38"
  "\x72\x81\x87\x02\x37\x70\xfd\xff\x03\x36\x6e\xfd\xff\x03\x35\x6c"
  "\xff\xff\x03\x34\x6a\xfd\xff\x03\x33\x68\x81\x8b\x02\x32\x66\x81"
  "\x89\x02\x31\x64\x81\x85\x02\x30\x62\x81\x87\x02\x2f\x60\xfd\xff"
  "\x03\x2e\x5e\xfd\xff\x03\x2d\x5c\xfd\xff\x03\x2c\x5a\x81\x89\x02"
  "\x2b\x58\x81\x85\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x89\x02\x28"
  "\x52\x81\x87\x02\x27\x50\xfd\xff\x03\x26\x4e\xfd\xff\x03\x25\x4c"
  "\xfd\xff\x03\x24\x4a\xfd\xff\x03\x23\x48\xfd\xff\x03\x22\x46\xfd"
  "\xff\x03\x21\x44\xff\xff\x03\x20\x42\xfd\xff\x03\x1f\x40\xfd\xff"
  "\x03\x1e\x3e\xfd\xff\x03\x1d\x3c\xfd\xff\x03\x1c\x3a\xff\xff\x03"
  "\x1b\x38\x81\x8b\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x85\x02\x18"
  "\x32\x81\x85\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x89\x02\x13\x28\x81\x87\x02\x12\x26\x81"
  "\x85\x02\x11\x24\x85\x08\x10\x22\x81\x83\x02\x0f\x20\x83\x04\x0e"
  "\x1e\x81\x83\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81\x87\x02\x0b\x18"
  "\x81\x85\x02\x0a\x16\x84\x06\x09\x14\x81\x83\x02\x08\x12\x81\x83"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01"
  "\x04\x81\x83\x02\x7f\xac\x01";

SCHEME_OBJECT *
regmap_so_data_2825e84ca13a0c6f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_regmap_so_data_2825e84ca13a0c6f [0]))), (sizeof (prog_regmap_so_data_2825e84ca13a0c6f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_73]));
}

DECLARE_COMPILED_DATA_NS ("regmap.so", regmap_so_data_2825e84ca13a0c6f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("regmap.so", "89591da9055ff69e")
