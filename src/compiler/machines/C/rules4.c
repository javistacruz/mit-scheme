/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:19-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_11 13
#define LABEL_1_13 15
#define ENVIRONMENT_LABEL_1_3 36
#define DEBUGGING_LABEL_1_2 35
#define OBJECT_1_5 34
#define OBJECT_1_4 33
#define OBJECT_1_3 32
#define OBJECT_1_2 31
#define OBJECT_1_1 30
#define OBJECT_1_0 29
#define EXECUTE_CACHE_1_17 17
#define EXECUTE_CACHE_1_16 19
#define EXECUTE_CACHE_1_15 21
#define EXECUTE_CACHE_1_14 23
#define EXECUTE_CACHE_1_12 25
#define EXECUTE_CACHE_1_8 27
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_40;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_44;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_27;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_26;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_25;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_46;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_1_0])))
    goto label_45;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_45;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_1_1])))
    goto label_48;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_48;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_1_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = ((Wrd63.pObj) [1]);
  if ((Wrd65.Obj) == (Wrd52.Obj))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd76.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 3;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd76.pObj)));
  Wrd81 = Wrd76;
  ((Wrd81.pObj) [2]) = (Wrd22.Obj);
  ((Wrd81.pObj) [3]) = (Wrd48.Obj);
  ((Wrd81.pObj) [4]) = (Wrd64.Obj);
  Rvl = (Wrd75.Obj);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd9.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_53;

DEFLABEL (label_54)
  (Wrd10.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_53)
DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_14 17
#define ENVIRONMENT_LABEL_2_3 38
#define DEBUGGING_LABEL_2_2 37
#define OBJECT_2_5 36
#define OBJECT_2_4 35
#define OBJECT_2_3 34
#define OBJECT_2_2 33
#define OBJECT_2_1 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_18 19
#define EXECUTE_CACHE_2_17 21
#define EXECUTE_CACHE_2_16 23
#define EXECUTE_CACHE_2_15 25
#define EXECUTE_CACHE_2_13 27
#define EXECUTE_CACHE_2_8 29
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_50;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_54;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_31;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_35;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_34;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_33;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_53)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_0])))
    goto label_55;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_55;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_2_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_58;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_58;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_2_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_60;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd66.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  if (! ((Wrd69.Obj) == (Wrd40.Obj)))
    goto label_62;
  (Wrd73.Obj) = ((Wrd71.pObj) [1]);
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_62;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = ((Wrd79.pObj) [1]);
  if ((Wrd81.Obj) == (Wrd52.Obj))
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd87.Obj) = ((Wrd63.pObj) [1]);
  if (! ((Wrd87.Obj) == (Wrd52.Obj)))
    goto label_64;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 3;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  Wrd101 = Wrd96;
  ((Wrd101.pObj) [2]) = (Wrd22.Obj);
  ((Wrd101.pObj) [3]) = (Wrd48.Obj);
  ((Wrd101.pObj) [4]) = (Wrd80.Obj);
  Rvl = (Wrd95.Obj);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_13 15
#define ENVIRONMENT_LABEL_3_3 35
#define DEBUGGING_LABEL_3_2 34
#define OBJECT_3_4 33
#define OBJECT_3_3 32
#define OBJECT_3_2 31
#define OBJECT_3_1 30
#define OBJECT_3_0 29
#define EXECUTE_CACHE_3_17 17
#define EXECUTE_CACHE_3_16 19
#define EXECUTE_CACHE_3_15 21
#define EXECUTE_CACHE_3_14 23
#define EXECUTE_CACHE_3_12 25
#define EXECUTE_CACHE_3_8 27
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_38;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_23;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_3_1])))
    goto label_42;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_42;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_3_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd55.Obj) = ((Wrd31.pObj) [1]);
  if (! ((Wrd55.Obj) == (Wrd52.Obj)))
    goto label_44;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 2;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  Wrd66 = Wrd63;
  ((Wrd66.pObj) [2]) = (Wrd22.Obj);
  ((Wrd66.pObj) [3]) = (Wrd48.Obj);
  Rvl = (Wrd62.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define OBJECT_4_3 12
#define OBJECT_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_7 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_32;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_0])))
    goto label_37;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_37;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_41;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_4_1])))
    goto label_40;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_40;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_4_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = ((Wrd63.pObj) [1]);
  if ((Wrd65.Obj) == (Wrd52.Obj))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd76.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 3;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd76.pObj)));
  Wrd81 = Wrd76;
  ((Wrd81.pObj) [2]) = (Wrd22.Obj);
  ((Wrd81.pObj) [3]) = (Wrd48.Obj);
  ((Wrd81.pObj) [4]) = (Wrd64.Obj);
  Rvl = (Wrd75.Obj);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_4 13
#define OBJECT_5_3 12
#define OBJECT_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_7 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_38;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_41)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
    goto label_43;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_43;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_5_1])))
    goto label_46;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_46;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_5_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_49;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = ((Wrd63.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd69.uLng) == 1)
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = ((Wrd73.pObj) [1]);
  if ((Wrd75.Obj) == (Wrd52.Obj))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd87.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 4;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd87.pObj)));
  Wrd94 = Wrd87;
  ((Wrd94.pObj) [2]) = (Wrd22.Obj);
  ((Wrd94.pObj) [3]) = (Wrd48.Obj);
  ((Wrd94.pObj) [4]) = (Wrd64.Obj);
  ((Wrd94.pObj) [5]) = (Wrd74.Obj);
  Rvl = (Wrd86.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd15.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_52;

DEFLABEL (label_53)
  (Wrd19.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_52)
DEFLABEL (label_54)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [4]);
  (Rsp [3]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define ENVIRONMENT_LABEL_6_3 14
#define DEBUGGING_LABEL_6_2 13
#define OBJECT_6_3 12
#define OBJECT_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_7 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_32;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
    goto label_37;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_37;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_41;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_6_1])))
    goto label_40;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_40;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_6_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = ((Wrd63.pObj) [1]);
  if ((Wrd65.Obj) == (Wrd52.Obj))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd76.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 3;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd76.pObj)));
  Wrd81 = Wrd76;
  ((Wrd81.pObj) [2]) = (Wrd22.Obj);
  ((Wrd81.pObj) [3]) = (Wrd48.Obj);
  ((Wrd81.pObj) [4]) = (Wrd64.Obj);
  Rvl = (Wrd75.Obj);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_3 12
#define OBJECT_7_2 11
#define OBJECT_7_1 10
#define OBJECT_7_0 9
#define EXECUTE_CACHE_7_7 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_27;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_7_0])))
    goto label_32;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_32;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_35;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_7_1])))
    goto label_34;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_34;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_7_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_38;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  Wrd68 = Wrd65;
  ((Wrd68.pObj) [2]) = (Wrd38.Obj);
  ((Wrd68.pObj) [3]) = (Wrd54.Obj);
  Rvl = (Wrd64.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_14 15
#define LABEL_8_15 17
#define ENVIRONMENT_LABEL_8_3 38
#define DEBUGGING_LABEL_8_2 37
#define OBJECT_8_1 36
#define OBJECT_8_0 35
#define EXECUTE_CACHE_8_19 19
#define EXECUTE_CACHE_8_18 21
#define EXECUTE_CACHE_8_17 23
#define EXECUTE_CACHE_8_16 25
#define EXECUTE_CACHE_8_13 27
#define EXECUTE_CACHE_8_12 29
#define EXECUTE_CACHE_8_8 31
#define EXECUTE_CACHE_8_6 33
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_4);
      goto lookup_call_9;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_call_12)
DEFLABEL (lookup_call_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define OBJECT_9_3 12
#define OBJECT_9_2 11
#define OBJECT_9_1 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_7 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_51;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_50)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_0])))
    goto label_52;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_52;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_9_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_55;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_9_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = ((Wrd63.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd69.uLng) == 1)
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd76.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [0]);
  if (! ((Wrd79.Obj) == (Wrd40.Obj)))
    goto label_60;
  (Wrd83.Obj) = ((Wrd81.pObj) [1]);
  (Rsp [0]) = (Wrd83.Obj);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_60;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = ((Wrd89.pObj) [1]);
  if ((Wrd91.Obj) == (Wrd52.Obj))
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd97.Obj) = ((Wrd73.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd52.Obj)))
    goto label_62;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd107.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 4;
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd107.pObj)));
  Wrd114 = Wrd107;
  ((Wrd114.pObj) [2]) = (Wrd22.Obj);
  ((Wrd114.pObj) [3]) = (Wrd48.Obj);
  ((Wrd114.pObj) [4]) = (Wrd64.Obj);
  ((Wrd114.pObj) [5]) = (Wrd90.Obj);
  Rvl = (Wrd106.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define OBJECT_10_3 12
#define OBJECT_10_2 11
#define OBJECT_10_1 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_7 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_51;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_50)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_10_0])))
    goto label_52;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_52;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_10_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_55;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_10_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = ((Wrd63.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd69.uLng) == 1)
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd76.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [0]);
  if (! ((Wrd79.Obj) == (Wrd40.Obj)))
    goto label_60;
  (Wrd83.Obj) = ((Wrd81.pObj) [1]);
  (Rsp [0]) = (Wrd83.Obj);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_60;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = ((Wrd89.pObj) [1]);
  if ((Wrd91.Obj) == (Wrd52.Obj))
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd97.Obj) = ((Wrd73.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd52.Obj)))
    goto label_62;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd107.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 4;
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd107.pObj)));
  Wrd114 = Wrd107;
  ((Wrd114.pObj) [2]) = (Wrd22.Obj);
  ((Wrd114.pObj) [3]) = (Wrd48.Obj);
  ((Wrd114.pObj) [4]) = (Wrd64.Obj);
  ((Wrd114.pObj) [5]) = (Wrd90.Obj);
  Rvl = (Wrd106.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define LABEL_11_12 15
#define LABEL_11_14 17
#define LABEL_11_15 19
#define ENVIRONMENT_LABEL_11_3 40
#define DEBUGGING_LABEL_11_2 39
#define OBJECT_11_1 38
#define OBJECT_11_0 37
#define EXECUTE_CACHE_11_20 21
#define EXECUTE_CACHE_11_19 23
#define EXECUTE_CACHE_11_18 25
#define EXECUTE_CACHE_11_17 27
#define EXECUTE_CACHE_11_16 29
#define EXECUTE_CACHE_11_13 31
#define EXECUTE_CACHE_11_11 33
#define EXECUTE_CACHE_11_6 35
#define FREE_REFERENCES_LABEL_11_0 20
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules4_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto assignment_call_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assignment_call_13)
DEFLABEL (assignment_call_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define ENVIRONMENT_LABEL_3 57
#define DEBUGGING_LABEL_2 56
#define PURIFICATION_ROOT 55
#define OBJECT_23 54
#define OBJECT_22 53
#define OBJECT_21 52
#define OBJECT_20 51
#define OBJECT_19 50
#define OBJECT_18 49
#define OBJECT_17 48
#define OBJECT_16 47
#define OBJECT_15 46
#define OBJECT_14 45
#define OBJECT_13 44
#define OBJECT_12 43
#define OBJECT_11 42
#define OBJECT_10 41
#define OBJECT_9 40
#define OBJECT_8 39
#define OBJECT_7 38
#define OBJECT_6 37
#define OBJECT_5 36
#define OBJECT_4 35
#define OBJECT_3 34
#define OBJECT_2 33
#define OBJECT_1 32
#define OBJECT_0 31
#define EXECUTE_CACHE_5 29
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rules4_so_d1ecf5b419704008 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto expression_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_11)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_16])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_15)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_14)
  {
    static const short sections [] =
      {
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
      goto label_13;
    blocks = (current_block [OBJECT_23]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_15])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_13)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_22]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rules4_so_d1ecf5b419704008 [11] =
  {
    { "rules4_so_code_1", 7, rules4_so_code_1 },
    { "rules4_so_code_2", 8, rules4_so_code_2 },
    { "rules4_so_code_3", 7, rules4_so_code_3 },
    { "rules4_so_code_4", 2, rules4_so_code_4 },
    { "rules4_so_code_5", 2, rules4_so_code_5 },
    { "rules4_so_code_6", 2, rules4_so_code_6 },
    { "rules4_so_code_7", 2, rules4_so_code_7 },
    { "rules4_so_code_8", 8, rules4_so_code_8 },
    { "rules4_so_code_9", 2, rules4_so_code_9 },
    { "rules4_so_code_10", 2, rules4_so_code_10 },
    { "rules4_so_code_11", 9, rules4_so_code_11 }
  };

int
decl_rules4_so_d1ecf5b419704008 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rules4_so_d1ecf5b419704008);
  return (0);
}

DECLARE_COMPILED_CODE ("rules4.so", 13, decl_rules4_so_d1ecf5b419704008, rules4_so_d1ecf5b419704008)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rules4_so_data_d1ecf5b419704008 [1824] =
  "\x3a\x20\xb9\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x02\x0d\xb9"
  "\x08\x0d\xba\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\xbf\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x02\x0d"
  "\x1c\xb1\x08\xb2\x0d\x1c\x28\xb4\x28\xb5\x28\xb6\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x02\xb1\x08\xb2"
  "\x0d\xb9\x28\xb4\x28\xb5\x28\xb6\x28\xb7\x28\x0d\xbf\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x02\x08\xb2\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02\x02\x08\xb2\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x02\x08\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x08\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x28\xb4\x28\xb6\x28\x0d"
  "\x1c\x28\x1b\x28\xb5\x28\xb7\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x08\xb2\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xb2\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x28"
  "\xb4\x28\x1b\x28\xb6\x28\xb5\x28\xb7\x28\x1b\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x88\xb2\x1b\x0d\x1c\x88\x08\x89\x1b\x0d\x1c\x88\xb2\x1b"
  "\x0d\x1c\x88\x08\x89\x08\x8c\x1b\x2a\x1b\x1b\x1b\x88\xb2\x1b\x1b"
  "\x88\x08\x89\x1b\x1b\x88\xb2\x1b\x1b\x88\x08\x89\x08\x8c\x1b\x2a"
  "\xc3\x1b\x1b\x2a\x1b\xb2\x1b\x1b\x88\x08\x89\x1b\x1b\x88\x08\x8a"
  "\x1b\x2a\x1b\x1b\x1b\x88\xb2\x1b\x1b\x88\x08\x89\x1b\x1b\x88\x08"
  "\x8b\x1b\x2a\x1b\x1b\x1b\x88\xb2\x1b\x1b\x88\x08\x89\x1b\x1b\x88"
  "\x1b\x0d\x1c\x88\x08\x8c\x1b\x2a\x1b\x1b\x1b\x88\xb2\x1b\x1b\x88"
  "\x08\x89\x1b\x1b\x88\x08\x8b\x1b\x2a\xb1\x1b\x1b\x88\xb2\x1b\x0d"
  "\x1c\x88\x08\x89\x08\x8a\x1b\x2a\x1b\x1b\x1b\x88\xb2\x1b\x1b\x88"
  "\x08\x89\xb2\x1b\x1b\x88\x08\x89\x08\x8b\x1b\x2a\xb3\x1b\x1b\x88"
  "\xb2\x1b\x1b\x88\x08\x89\x1b\x1b\x88\x08\x8b\x1b\x2a\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f"
  "\x43\x2f\x72\x75\x6c\x65\x73\x34\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x21\x20\x0f\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65"
  "\x63\x74\x2a\x09\x72\x65\x67\x69\x73\x74\x65\x72\x21\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61"
  "\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x04\x11\x73"
  "\x74\x61\x6e\x64\x61\x72\x64\x2d\x73\x6f\x75\x72\x63\x65\x21\x03"
  "\x0e\x6c\x61\x62\x65\x6c\x2d\x3e\x6f\x66\x66\x73\x65\x74\x02\x0b"
  "\x63\x6c\x65\x61\x72\x2d\x6d\x61\x70\x21\x05\x15\x63\x3a\x69\x6e"
  "\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x32"
  "\x03\x07\x63\x3a\x63\x70\x74\x72\x09\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x0a\x07\x14\x10\x81\x87\x02\x13\x0e\x81\x8b\x02\x12\x0c\x81"
  "\x89\x02\x11\x0a\x81\x85\x02\x10\x08\x81\x83\x02\x0f\x06\x81\x83"
  "\x02\x0e\x04\x83\x04\x0f\x25\x0b\x02\x1e\x0e\x73\x63\x68\x65\x6d"
  "\x65\x5f\x6f\x62\x6a\x65\x63\x74\x0c\x22\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0d\x04\x03\x02\x06"
  "\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66"
  "\x61\x63\x65\x2d\x33\x0e\x03\x09\x04\x0a\x07\x1c\x12\x81\x89\x02"
  "\x1b\x10\x81\x8f\x02\x1a\x0e\x81\x8d\x02\x19\x0c\x81\x87\x02\x18"
  "\x0a\x81\x85\x02\x17\x08\x81\x83\x02\x16\x06\x81\x83\x02\x15\x04"
  "\x83\x04\x11\x27\x0f\x02\x22\x23\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x04\x03\x02\x05\x03\x07"
  "\x63\x3a\x63\x72\x65\x66\x04\x0a\x07\x23\x10\x81\x87\x02\x22\x0e"
  "\x81\x8b\x02\x21\x0c\x81\x89\x02\x20\x0a\x81\x85\x02\x1f\x08\x81"
  "\x83\x02\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x0f\x24\x10\x02\x2f"
  "\x18\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c"
  "\x6c\x3a\x61\x63\x63\x65\x73\x73\x11\x06\x0c\x6c\x6f\x6f\x6b\x75"
  "\x70\x2d\x63\x61\x6c\x6c\x12\x02\x25\x06\x81\x83\x02\x24\x04\x83"
  "\x04\x05\x0f\x13\x02\x31\x30\x18\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x14"
  "\x06\x12\x02\x27\x06\x81\x83\x02\x26\x04\x83\x04\x05\x10\x15\x02"
  "\x32\x1d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x16\x06"
  "\x12\x02\x29\x06\x81\x83\x02\x28\x04\x83\x04\x05\x0f\x17\x02\x08"
  "\x33\x1a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x18\x05\x12\x02\x2b"
  "\x06\x81\x83\x02\x2a\x04\x83\x04\x05\x0f\x19\x02\x09\x0c\x04\x02"
  "\x03\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x6f\x66\x66\x73\x65\x74"
  "\x1a\x04\x0a\x03\x03\x06\x0e\x03\x09\x09\x33\x12\x81\x93\x02\x32"
  "\x10\x81\x91\x02\x31\x0e\x81\x8f\x02\x30\x0c\x81\x8d\x02\x2f\x0a"
  "\x81\x8b\x02\x2e\x08\x81\x8b\x02\x2d\x06\x81\x89\x02\x2c\x04\x86"
  "\x0a\x11\x27\x0e\x02\x0a\x35\x18\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x1b"
  "\x07\x10\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x61\x6c"
  "\x6c\x1c\x02\x35\x06\x81\x83\x02\x34\x04\x83\x04\x05\x0f\x1d\x02"
  "\x0b\x34\x16\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x73\x65\x74\x21\x1e\x07\x1c\x02\x37\x06\x81\x83"
  "\x02\x36\x04\x83\x04\x05\x0f\x1f\x02\x0c\x0c\x04\x03\x1a\x02\x03"
  "\x03\x04\x0a\x07\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e"
  "\x74\x65\x72\x66\x61\x63\x65\x2d\x34\x03\x09\x09\x40\x14\x81\x99"
  "\x02\x3f\x12\x81\x97\x02\x3e\x10\x81\x8f\x02\x3d\x0e\x81\x95\x02"
  "\x3c\x0c\x81\x93\x02\x3b\x0a\x81\x8f\x02\x3a\x08\x81\x8d\x02\x39"
  "\x06\x81\x8b\x02\x38\x04\x87\x0c\x13\x29\x1a\x0c\x0c\x0c\x1a\x04"
  "\x1c\x1e\x35\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x70"
  "\x61\x74\x74\x65\x72\x6e\x2d\x6d\x61\x74\x63\x68\x65\x72\x2f\x6c"
  "\x6f\x6f\x6b\x75\x70\x29\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x5d\x1e\x05\x63\x6f\x6e\x74\x1c\x1e\x0c"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1a\x1e\x05\x6e\x61"
  "\x6d\x65\x0c\x1e\x06\x76\x61\x6c\x75\x65\x0a\x1f\x04\x1b\x1e\x1c"
  "\x1e\x1a\x1e\x0c\x1e\x0a\x1d\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x0e\x04\x18\x1e\x1a\x1e"
  "\x0c\x19\x04\x16\x1e\x1c\x1e\x1a\x1e\x0c\x17\x04\x14\x1e\x1c\x1e"
  "\x1a\x1e\x0c\x1e\x06\x73\x61\x66\x65\x3f\x1f\x15\x04\x11\x1e\x1c"
  "\x1e\x1a\x1e\x0c\x13\x04\x1e\x1c\x1e\x0a\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x1d\x10\x04\x0d\x1e\x1c\x1e\x1d\x1e\x0a\x0f\x04\x1e"
  "\x1c\x1e\x1d\x1e\x1f\x0b\x04\x04\x14\x61\x64\x64\x2d\x73\x74\x61"
  "\x74\x65\x6d\x65\x6e\x74\x2d\x72\x75\x6c\x65\x21\x02\x0d\x1c\x80"
  "\x80\x04\x0c\x1a\x81\x81\x02\x0b\x18\x81\x81\x02\x0a\x16\x81\x83"
  "\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02"
  "\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03"
  "\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1b\x3a";

SCHEME_OBJECT *
rules4_so_data_d1ecf5b419704008 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rules4_so_data_d1ecf5b419704008 [0]))), (sizeof (prog_rules4_so_data_d1ecf5b419704008)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_17]));
}

DECLARE_COMPILED_DATA_NS ("rules4.so", rules4_so_data_d1ecf5b419704008)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rules4.so", "2c3e9a20102d8626")
