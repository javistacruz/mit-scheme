/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:44-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define OBJECT_1_1 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto ordered_vector_minimum_match_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordered_vector_minimum_match_5)
DEFLABEL (ordered_vector_minimum_match_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_9 7
#define LABEL_2_12 9
#define LABEL_2_7 11
#define LABEL_2_10 13
#define TAG_2_11 5
#define ENVIRONMENT_LABEL_2_3 21
#define DEBUGGING_LABEL_2_2 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_13 15
#define EXECUTE_CACHE_2_8 17
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd12;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd59;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto ordered_subvector_minimum_match_7;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_2_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordered_subvector_minimum_match_12)
DEFLABEL (ordered_subvector_minimum_match_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [9]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [9]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [8]) = Rvl;
  Rsp = (& (Rsp [8]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [2]);
  (Rsp [4]) = (Wrd89.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_15)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) - 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd11.Obj) = (Rsp [1]);
  if ((Wrd11.Obj) == (Wrd7.Obj))
    goto label_18;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [5]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  ((Wrd18.pObj) [3]) = (Wrd8.Obj);
  ((Wrd18.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_17;
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_17;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_17;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd29.pObj) = (& ((Wrd37.pObj) [(Wrd24.Lng)]));
  (Wrd22.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [3]);
  (Rsp [2]) = (Wrd51.Obj);
  (Wrd54.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd54.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [5]);
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [4]);
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd79.Obj) = ((Wrd58.pObj) [5]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 10))
    goto label_20;
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_20;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) (Wrd70.Lng)) < ((unsigned long) (Wrd76.Lng))))
    goto label_20;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd66.pObj) = (& ((Wrd74.pObj) [(Wrd61.Lng)]));
  (Wrd59.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [4]) = (Wrd59.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_20)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [5]);
  (Wrd84.Obj) = (Rsp [4]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

DEFLABEL (label_10)
  (Wrd59.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define OBJECT_3_1 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto ordered_vector_matches_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordered_vector_matches_5)
DEFLABEL (ordered_vector_matches_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define TAG_4_8 2
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define EXECUTE_CACHE_4_9 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_4_4);
      goto ordered_subvector_matches_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordered_subvector_matches_5)
DEFLABEL (ordered_subvector_matches_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto match_ordered_vector_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_ordered_vector_5)
DEFLABEL (match_ordered_vector_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_11 7
#define LABEL_6_12 9
#define LABEL_6_7 11
#define TAG_6_8 4
#define LABEL_6_14 13
#define LABEL_6_10 15
#define LABEL_6_15 17
#define TAG_6_16 7
#define LABEL_6_13 19
#define LABEL_6_17 21
#define TAG_6_18 9
#define LABEL_6_26 23
#define LABEL_6_27 25
#define LABEL_6_28 27
#define LABEL_6_19 29
#define TAG_6_20 13
#define LABEL_6_35 31
#define LABEL_6_23 33
#define LABEL_6_21 35
#define TAG_6_22 16
#define LABEL_6_24 37
#define LABEL_6_25 39
#define LABEL_6_33 41
#define TAG_6_34 19
#define LABEL_6_39 43
#define TAG_6_40 20
#define LABEL_6_41 45
#define TAG_6_42 21
#define LABEL_6_31 47
#define LABEL_6_29 49
#define TAG_6_30 23
#define LABEL_6_43 51
#define TAG_6_44 24
#define LABEL_6_38 53
#define LABEL_6_36 55
#define TAG_6_37 26
#define LABEL_6_45 57
#define TAG_6_46 27
#define ENVIRONMENT_LABEL_6_3 65
#define DEBUGGING_LABEL_6_2 64
#define OBJECT_6_0 63
#define EXECUTE_CACHE_6_32 59
#define EXECUTE_CACHE_6_9 61
#define FREE_REFERENCES_LABEL_6_0 58
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6_4);
      goto match_ordered_subvector_48;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_55;

    case 2:
      current_block = (Rpc - LABEL_6_11);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_43;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_56;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_22;

    case 7:
      current_block = (Rpc - LABEL_6_15);
      goto lambda_57;

    case 8:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_42;

    case 9:
      current_block = (Rpc - LABEL_6_17);
      goto lambda_58;

    case 10:
      current_block = (Rpc - LABEL_6_26);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_33;

    case 12:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_6_19);
      goto lambda_59;

    case 14:
      current_block = (Rpc - LABEL_6_35);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_6_23);
      goto continuation_37;

    case 16:
      current_block = (Rpc - LABEL_6_21);
      goto lambda_60;

    case 17:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_36;

    case 18:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_25;

    case 19:
      current_block = (Rpc - LABEL_6_33);
      goto lambda_62;

    case 20:
      current_block = (Rpc - LABEL_6_39);
      goto lambda_64;

    case 21:
      current_block = (Rpc - LABEL_6_41);
      goto lambda_65;

    case 22:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_6_29);
      goto lambda_61;

    case 24:
      current_block = (Rpc - LABEL_6_43);
      goto lambda_66;

    case 25:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_5;

    case 26:
      current_block = (Rpc - LABEL_6_36);
      goto lambda_63;

    case 27:
      current_block = (Rpc - LABEL_6_45);
      goto lambda_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_ordered_subvector_54)
DEFLABEL (match_ordered_subvector_48)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 5;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [6]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [6]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 6;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd29 = Wrd18;
  ((Wrd29.pObj) [2]) = (Wrd16.Obj);
  ((Wrd29.pObj) [3]) = (Wrd14.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  ((Wrd29.pObj) [5]) = (Wrd12.Obj);
  ((Wrd29.pObj) [6]) = (Wrd8.Obj);
  ((Wrd29.pObj) [7]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd38.pObj) = (& (Rsp [16]));
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [8]));
    SCHEME_OBJECT * MFUp2 = (Wrd38.pObj);
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
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
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [6]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_70;
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_70;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd43.Lng))))
    goto label_70;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd32.pObj) = (& ((Wrd41.pObj) [(Wrd27.Lng)]));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_69)
  (Wrd55.Obj) = (Rsp [5]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_17])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd19 = Wrd8;
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [6]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  ((Wrd19.pObj) [5]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_19])));
  Rhp += 3;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd29 = Wrd24;
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [5]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_21])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd39 = Wrd34;
  (Wrd42.Obj) = ((Wrd31.pObj) [4]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  ((Wrd39.pObj) [3]) = (Wrd28.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [4]) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  ((Wrd44.pObj) [0]) = (Wrd33.Obj);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  ((Wrd47.pObj) [0]) = (Wrd23.Obj);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  ((Wrd50.pObj) [0]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [5]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd7.Lng));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_6_23);
  (Wrd25.Obj) = Rvl;

DEFLABEL (label_68)
  (Rsp [3]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_41])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Rsp [4]) = (Wrd27.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_70)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [6]);
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_72;

DEFLABEL (label_71)
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_15])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  ((Wrd20.pObj) [2]) = (Wrd11.Obj);
  ((Wrd20.pObj) [3]) = (Wrd11.Obj);
  ((Wrd20.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd48.Obj) = ((Wrd8.pObj) [6]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_74;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_74;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_74;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd34.pObj) = (& ((Wrd43.pObj) [(Wrd29.Lng)]));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_73)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [7]);
  (Rsp [0]) = (Wrd62.Obj);
  goto lambda_39;

DEFLABEL (label_74)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [6]);
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_6_15);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_6_17);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd31.Obj) = ((Wrd6.pObj) [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_76;
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_76;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_76;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd17.pObj) = (& ((Wrd26.pObj) [(Wrd12.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_75)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_76)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [4]);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_6_19);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_80;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) - 1L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_28);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd40.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (Rsp [4]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_77)
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_29])));
  Rhp += 2;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  Wrd46 = Wrd43;
  (Wrd47.Obj) = (Rsp [1]);
  ((Wrd46.pObj) [2]) = (Wrd47.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  ((Wrd46.pObj) [3]) = (Wrd45.Obj);
  Wrd29 = Wrd42;

DEFLABEL (label_79)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_78)
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd30.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_33])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  Wrd29 = Wrd23;
  goto label_79;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_6_21);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_83;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_35);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd39.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_36])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  Wrd51 = Wrd48;
  (Wrd52.Obj) = (Rsp [1]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  Wrd25 = Wrd47;

DEFLABEL (label_82)
  Rsp = (& (Rsp [3]));
  goto label_68;

DEFLABEL (label_83)
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_39])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  Wrd25 = Wrd19;
  goto label_82;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_6_33);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_32;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_6_39);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_34;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_6_41);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_43])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = ((Wrd11.pObj) [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (Wrd29.Obj) = Rvl;
  goto label_78;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_6_29);

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
  goto lambda_32;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_6_43);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_45])));
  Rhp += 4;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd22 = Wrd15;
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  ((Wrd22.pObj) [3]) = (Wrd6.Obj);
  ((Wrd22.pObj) [4]) = (Wrd10.Obj);
  ((Wrd22.pObj) [5]) = (Wrd5.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_6_36);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_34;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_6_45);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define OBJECT_7_1 10
#define OBJECT_7_0 9
#define EXECUTE_CACHE_7_6 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto search_ordered_vector_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (search_ordered_vector_5)
DEFLABEL (search_ordered_vector_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_8 7
#define LABEL_8_6 9
#define LABEL_8_7 11
#define ENVIRONMENT_LABEL_8_3 16
#define DEBUGGING_LABEL_8_2 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ordvec_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto search_ordered_subvector_14;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (search_ordered_subvector_18)
DEFLABEL (search_ordered_subvector_14)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (loop_19)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_20;
  (Wrd9.Obj) = (Rsp [9]);
  (Rsp [8]) = (Wrd9.Obj);
  (Rsp [9]) = (Wrd5.Obj);
  Rsp = (& (Rsp [8]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_20)
  (Wrd18.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd21.Lng) = (((Wrd18.Lng) < 0) ? (RIGHT_SHIFT (((Wrd18.Lng) + 1), 1)) : (RIGHT_SHIFT ((Wrd18.Lng), 1)));
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_25;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_25;
  Wrd38 = Wrd21;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_25;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd33.pObj) = (& ((Wrd40.pObj) [(Wrd30.Lng)]));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_24)
  (Wrd50.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd50.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_8_1]))
    goto label_23;
  if (Rvl == (current_block [OBJECT_8_2]))
    goto label_21;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [11]) = (Wrd9.Obj);
  Rsp = (& (Rsp [10]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_21)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [2]) = (Wrd11.Obj);

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd16.Obj);
  goto label_22;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
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
ordvec_so_990d3afe9f5ecf01 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 8)
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

static const struct liarc_code_S arr_decl_ordvec_so_990d3afe9f5ecf01 [8] =
  {
    { "ordvec_so_code_1", 2, ordvec_so_code_1 },
    { "ordvec_so_code_2", 6, ordvec_so_code_2 },
    { "ordvec_so_code_3", 2, ordvec_so_code_3 },
    { "ordvec_so_code_4", 3, ordvec_so_code_4 },
    { "ordvec_so_code_5", 2, ordvec_so_code_5 },
    { "ordvec_so_code_6", 28, ordvec_so_code_6 },
    { "ordvec_so_code_7", 2, ordvec_so_code_7 },
    { "ordvec_so_code_8", 5, ordvec_so_code_8 }
  };

int
decl_ordvec_so_990d3afe9f5ecf01 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ordvec_so_990d3afe9f5ecf01);
  return (0);
}

DECLARE_COMPILED_CODE ("ordvec.so", 3, decl_ordvec_so_990d3afe9f5ecf01, ordvec_so_990d3afe9f5ecf01)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ordvec_so_data_990d3afe9f5ecf01 [960] =
  "\x4a\x0e\x81\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x80\x28"
  "\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\xc2"
  "\xbc\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\xb1\x80\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28\xb5"
  "\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85"
  "\x88\xb1\x80\x28\xb5\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\xb4\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x0d\x0d\xb4\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x9f\xb8\x88\xb0\xb4"
  "\x2a\xb1\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\xb7\x2a\xb3\x2a\x9f"
  "\x1b\x0d\xb5\x0d\x1b\x0d\xb2\x0d\x9f\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x6f\x72\x64\x76\x65\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x0c\x20"
  "\x6f\x72\x64\x65\x72\x65\x64\x2d\x73\x75\x62\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6d\x69\x6e\x69\x6d\x75\x6d\x2d\x6d\x61\x74\x63\x68\x02"
  "\x05\x06\x81\x95\x02\x04\x04\x8a\x12\x05\x0d\x02\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x09\x18\x6d\x61\x74\x63\x68\x2d\x6f"
  "\x72\x64\x65\x72\x65\x64\x2d\x73\x75\x62\x76\x65\x63\x74\x6f\x72"
  "\x05\x0a\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x03\x0b\x0e\x81\x83"
  "\x02\x0a\x0c\x81\x95\x02\x09\x0a\x81\x8d\x02\x08\x08\x81\x8b\x02"
  "\x07\x06\x81\x8b\x02\x06\x04\x8c\x16\x0d\x16\x02\x09\x1a\x6f\x72"
  "\x64\x65\x72\x65\x64\x2d\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6d\x61\x74\x63\x68\x65\x73\x09\x02\x0d\x06\x81\x8f\x02\x0c\x04"
  "\x87\x0c\x05\x0d\x0a\x02\x09\x05\x03\x10\x08\x81\x8b\x02\x0f\x06"
  "\x81\x8f\x02\x0e\x04\x89\x10\x07\x0f\x02\x09\x02\x12\x06\x81\x8f"
  "\x02\x11\x04\x87\x0c\x05\x0d\x0b\x02\x0a\x19\x73\x65\x61\x72\x63"
  "\x68\x2d\x6f\x72\x64\x65\x72\x65\x64\x2d\x73\x75\x62\x76\x65\x63"
  "\x74\x6f\x72\x0c\x04\x04\x6d\x69\x6e\x03\x2e\x3a\x81\x85\x02\x2d"
  "\x38\x81\x85\x02\x2c\x36\x81\x89\x02\x2b\x34\x81\x87\x02\x2a\x32"
  "\x81\x85\x02\x29\x30\x81\x8b\x02\x28\x2e\x81\x87\x02\x27\x2c\x81"
  "\x85\x02\x26\x2a\x81\x85\x02\x25\x28\x81\x87\x02\x24\x26\x81\x8d"
  "\x02\x23\x24\x81\x87\x02\x22\x22\x81\x8b\x02\x21\x20\x81\x87\x02"
  "\x20\x1e\x81\x87\x02\x1f\x1c\x81\x89\x02\x1e\x1a\x81\x89\x02\x1d"
  "\x18\x81\x89\x02\x1c\x16\x81\x85\x02\x1b\x14\x81\x87\x02\x1a\x12"
  "\x81\x85\x02\x19\x10\x81\x8b\x02\x18\x0e\x81\x89\x02\x17\x0c\x81"
  "\x85\x02\x16\x0a\x81\x85\x02\x15\x08\x81\x8d\x02\x14\x06\x81\x85"
  "\x02\x13\x04\x89\x10\x39\x42\x0d\x02\x08\x0a\x0c\x02\x30\x06\x81"
  "\x91\x02\x2f\x04\x88\x0e\x05\x0d\x02\x09\x08\x67\x72\x65\x61\x74"
  "\x65\x72\x05\x6c\x65\x73\x73\x35\x0c\x81\x99\x02\x34\x0a\x81\x97"
  "\x02\x33\x08\x81\x9b\x02\x32\x06\x81\x95\x02\x31\x04\x8a\x12\x0b"
  "\x11\x04\x04\x0d\x04\x0b\x04\x04\x0a\x04\x04\x04\x0c\x16\x73\x65"
  "\x61\x72\x63\x68\x2d\x6f\x72\x64\x65\x72\x65\x64\x2d\x76\x65\x63"
  "\x74\x6f\x72\x15\x6d\x61\x74\x63\x68\x2d\x6f\x72\x64\x65\x72\x65"
  "\x64\x2d\x76\x65\x63\x74\x6f\x72\x09\x17\x6f\x72\x64\x65\x72\x65"
  "\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61\x74\x63\x68\x65\x73"
  "\x1d\x6f\x72\x64\x65\x72\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6d\x69\x6e\x69\x6d\x75\x6d\x2d\x6d\x61\x74\x63\x68\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
ordvec_so_data_990d3afe9f5ecf01 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ordvec_so_data_990d3afe9f5ecf01 [0]))), (sizeof (prog_ordvec_so_data_990d3afe9f5ecf01)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("ordvec.so", ordvec_so_data_990d3afe9f5ecf01)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ordvec.so", "99b1bbf4258f0e0b")
