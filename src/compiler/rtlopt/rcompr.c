/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_9 7
#define TAG_1_10 2
#define LABEL_1_12 9
#define LABEL_1_13 11
#define LABEL_1_7 13
#define TAG_1_8 5
#define LABEL_1_14 15
#define LABEL_1_15 17
#define LABEL_1_16 19
#define ENVIRONMENT_LABEL_1_3 34
#define DEBUGGING_LABEL_1_2 33
#define OBJECT_1_2 32
#define OBJECT_1_1 31
#define OBJECT_1_0 30
#define EXECUTE_CACHE_1_11 21
#define EXECUTE_CACHE_1_6 23
#define FREE_REFERENCE_1_1 26
#define FREE_REFERENCE_1_0 27
#define FREE_ASSIGNMENT_1_0 29
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto code_compression_11;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_22;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_1_13);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_1_7);
      goto swapB_21;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (code_compression_19)
DEFLABEL (code_compression_11)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_20)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd8.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_24;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_24;
  (Wrd11.Obj) = ((Wrd21.pObj) [3]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_24)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_1_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_17)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_16)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_14])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_7 13
#define LABEL_2_8 15
#define LABEL_2_13 17
#define LABEL_2_12 19
#define LABEL_2_15 21
#define TAG_2_16 9
#define LABEL_2_18 23
#define LABEL_2_19 25
#define LABEL_2_20 27
#define LABEL_2_22 29
#define LABEL_2_23 31
#define LABEL_2_26 33
#define LABEL_2_25 35
#define LABEL_2_27 37
#define TAG_2_28 17
#define ENVIRONMENT_LABEL_2_3 65
#define DEBUGGING_LABEL_2_2 64
#define OBJECT_2_10 63
#define OBJECT_2_9 62
#define OBJECT_2_8 61
#define OBJECT_2_7 60
#define OBJECT_2_6 59
#define OBJECT_2_5 58
#define OBJECT_2_4 57
#define OBJECT_2_3 56
#define OBJECT_2_2 55
#define OBJECT_2_1 54
#define OBJECT_2_0 53
#define EXECUTE_CACHE_2_29 39
#define EXECUTE_CACHE_2_24 41
#define EXECUTE_CACHE_2_21 43
#define EXECUTE_CACHE_2_17 45
#define EXECUTE_CACHE_2_14 47
#define EXECUTE_CACHE_2_11 49
#define FREE_REFERENCE_2_0 52
#define FREE_REFERENCES_LABEL_2_0 38
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd22;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
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
      goto walk_bblock_18;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto lambda_30;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_2_19);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_2_26);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_2_27);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_bblock_29)
DEFLABEL (walk_bblock_18)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd5.Obj) = ((Wrd11.pObj) [9]);

DEFLABEL (label_41)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_40;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd57.Lng))))
    goto label_40;
  (Wrd22.Obj) = ((Wrd55.pObj) [3]);
  if (! ((Wrd22.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_39;
  Wrd34 = Wrd38;

DEFLABEL (label_38)
  Wrd33 = Wrd34;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_37;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_37;
  (Wrd41.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_15])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_2_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd49.Obj) = (current_block [OBJECT_2_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd35.pObj));

DEFLABEL (label_21)
  (Wrd34.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd60.Obj) = (current_block [OBJECT_2_2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_2_15);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_49;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_49;
  (Wrd7.Obj) = ((Wrd41.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_48;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_48;
  (Wrd13.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_47)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_46;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_27])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [4]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 2);

DEFLABEL (label_46)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_2_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_2_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_2_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_2_27);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_10]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_8 7
#define LABEL_3_4 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_13 19
#define LABEL_3_14 21
#define LABEL_3_15 23
#define LABEL_3_16 25
#define LABEL_3_17 27
#define LABEL_3_18 29
#define LABEL_3_20 31
#define LABEL_3_19 33
#define LABEL_3_25 35
#define LABEL_3_27 37
#define LABEL_3_22 39
#define TAG_3_23 18
#define LABEL_3_26 41
#define LABEL_3_24 43
#define LABEL_3_31 45
#define TAG_3_32 21
#define ENVIRONMENT_LABEL_3_3 73
#define DEBUGGING_LABEL_3_2 72
#define OBJECT_3_11 71
#define OBJECT_3_10 70
#define OBJECT_3_9 69
#define OBJECT_3_8 68
#define OBJECT_3_7 67
#define OBJECT_3_6 66
#define OBJECT_3_5 65
#define OBJECT_3_4 64
#define OBJECT_3_3 63
#define OBJECT_3_2 62
#define OBJECT_3_1 61
#define OBJECT_3_0 60
#define EXECUTE_CACHE_3_30 47
#define EXECUTE_CACHE_3_29 49
#define EXECUTE_CACHE_3_28 51
#define EXECUTE_CACHE_3_21 53
#define EXECUTE_CACHE_3_7 55
#define FREE_REFERENCE_3_1 58
#define FREE_REFERENCE_3_0 59
#define FREE_REFERENCES_LABEL_3_0 46
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd101;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd60;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd135;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_4);
      goto optimize_rtl_26;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_3_16);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_3_20);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_3_25);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_3_27);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_3_22);
      goto lambda_43;

    case 19:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_3_31);
      goto lambda_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_rtl_42)
DEFLABEL (optimize_rtl_26)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_68;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_67)
  if ((Wrd8.Obj) == (current_block [OBJECT_3_3]))
    goto label_66;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_65)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
  (Wrd20.Obj) = (Rsp [0]);
  if (! ((Wrd20.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_3_10]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_63;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if ((Wrd25.Lng) < 5L)
    goto label_45;

DEFLABEL (label_62)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_61;
  Wrd29 = Wrd33;

DEFLABEL (label_60)
  Wrd28 = Wrd29;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_59;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_59;
  (Wrd35.Obj) = ((Wrd39.pObj) [4]);

DEFLABEL (label_58)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_57;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_57;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) (Wrd56.Lng)) < ((unsigned long) (Wrd59.Lng))))
    goto label_57;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd52.pObj) = (& ((Wrd57.pObj) [(Wrd50.Lng)]));
  (Wrd48.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_56)
  (Wrd66.Obj) = (Rsp [1]);
  if (! ((Wrd48.Obj) == (Wrd66.Obj)))
    goto label_45;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_55;
  Wrd70 = Wrd74;

DEFLABEL (label_54)
  Wrd69 = Wrd70;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_53;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_53;
  (Wrd76.Obj) = ((Wrd80.pObj) [5]);

DEFLABEL (label_52)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd101.uLng) == 10))
    goto label_51;
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_51;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) (Wrd97.Lng)) < ((unsigned long) (Wrd100.Lng))))
    goto label_51;
  (Wrd91.uLng) = (OBJECT_DATUM (Wrd94.Obj));
  (Wrd93.pObj) = (& ((Wrd98.pObj) [(Wrd91.Lng)]));
  (Wrd89.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_50)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd107.uLng) == 26))
    goto label_49;
  if (! ((Wrd89.Obj) == (current_block [OBJECT_3_8])))
    goto label_45;

DEFLABEL (label_48)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_47)
  (Wrd118.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd118.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_49)
  (Wrd108.Obj) = (current_block [OBJECT_3_8]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_48;

DEFLABEL (label_51)
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_34)
  (Wrd89.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd85.Obj) = (current_block [OBJECT_3_7]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_33)
  (Wrd76.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd71.pObj));

DEFLABEL (label_32)
  (Wrd70.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_31)
  (Wrd48.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd44.Obj) = (current_block [OBJECT_3_5]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_30)
  (Wrd35.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd30.pObj));

DEFLABEL (label_29)
  (Wrd29.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd121.Obj) = (current_block [OBJECT_3_4]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_45;

DEFLABEL (label_66)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd129.Obj);
  goto label_47;

DEFLABEL (label_68)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_67;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_77;
  Wrd8 = Wrd12;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  Rvl = (current_block [OBJECT_3_10]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_69)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_22])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_75;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_75;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_74)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_73;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_73;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_72)
  (Wrd56.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_28]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (label_70)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_31])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  ((Wrd16.pObj) [3]) = (Wrd9.Obj);
  Wrd5 = Wrd12;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_71)
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_73)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_3_11]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.Obj) = (current_block [OBJECT_3_8]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_20])), (Wrd9.pObj));

DEFLABEL (label_37)
  (Wrd8.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd135.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd135.uLng) == 1))
    goto label_80;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd131.Obj) = ((Wrd133.pObj) [0]);

DEFLABEL (label_79)
  if (! ((Wrd131.Obj) == (current_block [OBJECT_3_1])))
    goto label_78;
  (Wrd143.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (current_block [OBJECT_3_2]);
  (Rsp [1]) = (Wrd144.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_80)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_38)
  (Wrd131.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd5.Obj) = Rvl;
  goto label_71;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_3_22);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_81)
  Rvl = (current_block [OBJECT_3_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_3_31);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_16;

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
#define TAG_4_10 3
#define LABEL_4_15 11
#define LABEL_4_16 13
#define LABEL_4_20 15
#define LABEL_4_21 17
#define LABEL_4_22 19
#define LABEL_4_11 21
#define LABEL_4_23 23
#define LABEL_4_25 25
#define LABEL_4_13 27
#define LABEL_4_14 29
#define LABEL_4_32 31
#define LABEL_4_34 33
#define LABEL_4_35 35
#define LABEL_4_36 37
#define LABEL_4_37 39
#define LABEL_4_38 41
#define LABEL_4_33 43
#define LABEL_4_29 45
#define LABEL_4_42 47
#define LABEL_4_44 49
#define LABEL_4_46 51
#define LABEL_4_48 53
#define LABEL_4_49 55
#define LABEL_4_52 57
#define LABEL_4_53 59
#define LABEL_4_54 61
#define LABEL_4_57 63
#define LABEL_4_27 65
#define LABEL_4_58 67
#define LABEL_4_59 69
#define LABEL_4_60 71
#define LABEL_4_61 73
#define LABEL_4_62 75
#define LABEL_4_63 77
#define LABEL_4_64 79
#define LABEL_4_65 81
#define LABEL_4_66 83
#define LABEL_4_67 85
#define LABEL_4_68 87
#define LABEL_4_69 89
#define LABEL_4_70 91
#define LABEL_4_71 93
#define LABEL_4_72 95
#define LABEL_4_73 97
#define LABEL_4_74 99
#define LABEL_4_75 101
#define LABEL_4_76 103
#define LABEL_4_77 105
#define LABEL_4_79 107
#define LABEL_4_26 109
#define LABEL_4_24 111
#define LABEL_4_30 113
#define TAG_4_31 55
#define LABEL_4_45 115
#define LABEL_4_43 117
#define LABEL_4_80 119
#define TAG_4_81 58
#define LABEL_4_88 121
#define LABEL_4_78 123
#define LABEL_4_89 125
#define LABEL_4_91 127
#define LABEL_4_92 129
#define LABEL_4_84 131
#define LABEL_4_83 133
#define LABEL_4_41 135
#define LABEL_4_85 137
#define TAG_4_86 67
#define LABEL_4_87 139
#define LABEL_4_95 141
#define LABEL_4_90 143
#define LABEL_4_55 145
#define TAG_4_56 71
#define LABEL_4_50 147
#define TAG_4_51 72
#define LABEL_4_39 149
#define LABEL_4_100 151
#define LABEL_4_17 153
#define LABEL_4_18 155
#define LABEL_4_93 157
#define TAG_4_94 77
#define LABEL_4_96 159
#define TAG_4_97 78
#define LABEL_4_98 161
#define TAG_4_99 79
#define LABEL_4_103 163
#define LABEL_4_104 165
#define LABEL_4_101 167
#define TAG_4_102 82
#define LABEL_4_107 169
#define LABEL_4_108 171
#define LABEL_4_109 173
#define LABEL_4_105 175
#define LABEL_4_111 177
#define LABEL_4_113 179
#define LABEL_4_114 181
#define LABEL_4_115 183
#define LABEL_4_117 185
#define LABEL_4_112 187
#define LABEL_4_116 189
#define LABEL_4_110 191
#define LABEL_4_119 193
#define LABEL_4_120 195
#define TAG_4_121 96
#define ENVIRONMENT_LABEL_4_3 250
#define DEBUGGING_LABEL_4_2 249
#define OBJECT_4_21 248
#define OBJECT_4_20 247
#define OBJECT_4_19 246
#define OBJECT_4_18 245
#define OBJECT_4_17 244
#define OBJECT_4_16 243
#define OBJECT_4_15 242
#define OBJECT_4_14 241
#define OBJECT_4_13 240
#define OBJECT_4_12 239
#define OBJECT_4_11 238
#define OBJECT_4_10 237
#define OBJECT_4_9 236
#define OBJECT_4_8 235
#define OBJECT_4_7 234
#define OBJECT_4_6 233
#define OBJECT_4_5 232
#define OBJECT_4_4 231
#define OBJECT_4_3 230
#define OBJECT_4_2 229
#define OBJECT_4_1 228
#define OBJECT_4_0 227
#define EXECUTE_CACHE_4_118 197
#define EXECUTE_CACHE_4_106 199
#define EXECUTE_CACHE_4_82 201
#define EXECUTE_CACHE_4_47 203
#define EXECUTE_CACHE_4_40 205
#define EXECUTE_CACHE_4_28 207
#define EXECUTE_CACHE_4_19 209
#define EXECUTE_CACHE_4_12 211
#define FREE_REFERENCE_4_12 214
#define FREE_REFERENCE_4_11 215
#define FREE_REFERENCE_4_10 216
#define FREE_REFERENCE_4_9 217
#define FREE_REFERENCE_4_8 218
#define FREE_REFERENCE_4_7 219
#define FREE_REFERENCE_4_6 220
#define FREE_REFERENCE_4_5 221
#define FREE_REFERENCE_4_4 222
#define FREE_REFERENCE_4_3 223
#define FREE_REFERENCE_4_2 224
#define FREE_REFERENCE_4_1 225
#define FREE_REFERENCE_4_0 226
#define FREE_REFERENCES_LABEL_4_0 196
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd21;
  machine_word Wrd156;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd143;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd171;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd164;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd184;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd178;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd123;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd196;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd190;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd210;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd211;
  machine_word Wrd203;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd93;
  machine_word Wrd224;
  machine_word Wrd77;
  machine_word Wrd230;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd247;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd248;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd242;
  machine_word Wrd243;
  machine_word Wrd239;
  machine_word Wrd233;
  machine_word Wrd234;
  machine_word Wrd235;
  machine_word Wrd269;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd270;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd256;
  machine_word Wrd257;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd58;
  machine_word Wrd79;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto find_reference_instruction_129;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_127;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_21;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_33;

    case 5:
      current_block = (Rpc - LABEL_4_16);
      goto label_165;

    case 6:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_32;

    case 7:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_39;

    case 8:
      current_block = (Rpc - LABEL_4_22);
      goto label_158;

    case 9:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_28;

    case 10:
      current_block = (Rpc - LABEL_4_23);
      goto label_131;

    case 11:
      current_block = (Rpc - LABEL_4_25);
      goto label_132;

    case 12:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_4_32);
      goto phi_1_6;

    case 15:
      current_block = (Rpc - LABEL_4_34);
      goto label_133;

    case 16:
      current_block = (Rpc - LABEL_4_35);
      goto lambda_22;

    case 17:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_79;

    case 18:
      current_block = (Rpc - LABEL_4_37);
      goto lambda_83;

    case 19:
      current_block = (Rpc - LABEL_4_38);
      goto label_164;

    case 20:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_2;

    case 21:
      current_block = (Rpc - LABEL_4_29);
      goto lambda_124;

    case 22:
      current_block = (Rpc - LABEL_4_42);
      goto label_134;

    case 23:
      current_block = (Rpc - LABEL_4_44);
      goto label_135;

    case 24:
      current_block = (Rpc - LABEL_4_46);
      goto label_136;

    case 25:
      current_block = (Rpc - LABEL_4_48);
      goto continuation_49;

    case 26:
      current_block = (Rpc - LABEL_4_49);
      goto label_162;

    case 27:
      current_block = (Rpc - LABEL_4_52);
      goto label_163;

    case 28:
      current_block = (Rpc - LABEL_4_53);
      goto continuation_54;

    case 29:
      current_block = (Rpc - LABEL_4_54);
      goto label_160;

    case 30:
      current_block = (Rpc - LABEL_4_57);
      goto label_161;

    case 31:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_40;

    case 32:
      current_block = (Rpc - LABEL_4_58);
      goto label_138;

    case 33:
      current_block = (Rpc - LABEL_4_59);
      goto label_139;

    case 34:
      current_block = (Rpc - LABEL_4_60);
      goto label_140;

    case 35:
      current_block = (Rpc - LABEL_4_61);
      goto label_141;

    case 36:
      current_block = (Rpc - LABEL_4_62);
      goto label_142;

    case 37:
      current_block = (Rpc - LABEL_4_63);
      goto label_143;

    case 38:
      current_block = (Rpc - LABEL_4_64);
      goto label_156;

    case 39:
      current_block = (Rpc - LABEL_4_65);
      goto label_157;

    case 40:
      current_block = (Rpc - LABEL_4_66);
      goto label_144;

    case 41:
      current_block = (Rpc - LABEL_4_67);
      goto label_154;

    case 42:
      current_block = (Rpc - LABEL_4_68);
      goto label_155;

    case 43:
      current_block = (Rpc - LABEL_4_69);
      goto label_145;

    case 44:
      current_block = (Rpc - LABEL_4_70);
      goto label_152;

    case 45:
      current_block = (Rpc - LABEL_4_71);
      goto label_153;

    case 46:
      current_block = (Rpc - LABEL_4_72);
      goto label_146;

    case 47:
      current_block = (Rpc - LABEL_4_73);
      goto label_150;

    case 48:
      current_block = (Rpc - LABEL_4_74);
      goto label_151;

    case 49:
      current_block = (Rpc - LABEL_4_75);
      goto label_147;

    case 50:
      current_block = (Rpc - LABEL_4_76);
      goto label_148;

    case 51:
      current_block = (Rpc - LABEL_4_77);
      goto label_149;

    case 52:
      current_block = (Rpc - LABEL_4_79);
      goto label_137;

    case 53:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_38;

    case 54:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_31;

    case 55:
      current_block = (Rpc - LABEL_4_30);
      goto lambda_179;

    case 56:
      current_block = (Rpc - LABEL_4_45);
      goto continuation_8;

    case 57:
      current_block = (Rpc - LABEL_4_43);
      goto continuation_123;

    case 58:
      current_block = (Rpc - LABEL_4_80);
      goto loop_91;

    case 59:
      current_block = (Rpc - LABEL_4_88);
      goto label_159;

    case 60:
      current_block = (Rpc - LABEL_4_78);
      goto lambda_67;

    case 61:
      current_block = (Rpc - LABEL_4_89);
      goto lambda_27;

    case 62:
      current_block = (Rpc - LABEL_4_91);
      goto continuation_73;

    case 63:
      current_block = (Rpc - LABEL_4_92);
      goto continuation_69;

    case 64:
      current_block = (Rpc - LABEL_4_84);
      goto continuation_15;

    case 65:
      current_block = (Rpc - LABEL_4_83);
      goto lambda_13;

    case 66:
      current_block = (Rpc - LABEL_4_41);
      goto lambda_4;

    case 67:
      current_block = (Rpc - LABEL_4_85);
      goto lambda_187;

    case 68:
      current_block = (Rpc - LABEL_4_87);
      goto continuation_87;

    case 69:
      current_block = (Rpc - LABEL_4_95);
      goto label_166;

    case 70:
      current_block = (Rpc - LABEL_4_90);
      goto continuation_26;

    case 71:
      current_block = (Rpc - LABEL_4_55);
      goto lambda_185;

    case 72:
      current_block = (Rpc - LABEL_4_50);
      goto lambda_184;

    case 73:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_80;

    case 74:
      current_block = (Rpc - LABEL_4_100);
      goto label_167;

    case 75:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_94;

    case 76:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_93;

    case 77:
      current_block = (Rpc - LABEL_4_93);
      goto lambda_190;

    case 78:
      current_block = (Rpc - LABEL_4_96);
      goto lambda_193;

    case 79:
      current_block = (Rpc - LABEL_4_98);
      goto lambda_194;

    case 80:
      current_block = (Rpc - LABEL_4_103);
      goto phi_1_108;

    case 81:
      current_block = (Rpc - LABEL_4_104);
      goto label_168;

    case 82:
      current_block = (Rpc - LABEL_4_101);
      goto lambda_195;

    case 83:
      current_block = (Rpc - LABEL_4_107);
      goto continuation_100;

    case 84:
      current_block = (Rpc - LABEL_4_108);
      goto continuation_101;

    case 85:
      current_block = (Rpc - LABEL_4_109);
      goto label_173;

    case 86:
      current_block = (Rpc - LABEL_4_105);
      goto continuation_96;

    case 87:
      current_block = (Rpc - LABEL_4_111);
      goto label_171;

    case 88:
      current_block = (Rpc - LABEL_4_113);
      goto label_169;

    case 89:
      current_block = (Rpc - LABEL_4_114);
      goto label_170;

    case 90:
      current_block = (Rpc - LABEL_4_115);
      goto phi_2_119;

    case 91:
      current_block = (Rpc - LABEL_4_117);
      goto label_172;

    case 92:
      current_block = (Rpc - LABEL_4_112);
      goto continuation_99;

    case 93:
      current_block = (Rpc - LABEL_4_116);
      goto continuation_110;

    case 94:
      current_block = (Rpc - LABEL_4_110);
      goto lambda_103;

    case 95:
      current_block = (Rpc - LABEL_4_119);
      goto continuation_111;

    case 96:
      current_block = (Rpc - LABEL_4_120);
      goto lambda_199;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_reference_instruction_175)
DEFLABEL (find_reference_instruction_129)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Wrd12 = Wrd14;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_127;

DEFLABEL (loop_176)
DEFLABEL (loop_127)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_201;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd8.Obj);

DEFLABEL (label_200)
  Rsp = (& (Rsp [1]));
  goto lambda_12;

DEFLABEL (label_201)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_266;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_265)
  if ((Wrd12.Obj) == (current_block [OBJECT_4_4]))
    goto label_264;

DEFLABEL (label_263)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_262;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_261)
  if ((Wrd22.Obj) == (current_block [OBJECT_4_5]))
    goto label_259;

DEFLABEL (label_258)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_4_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_204;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_203;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_203;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_202)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_81);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_80])));
  Rhp += 2;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  Wrd39 = Wrd43;
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  ((Wrd39.pObj) [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd44.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_91;

DEFLABEL (label_203)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [3]);
  (Wrd27.Obj) = (current_block [OBJECT_4_10]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_79]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (label_204)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_257;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_256)
  if (! ((Wrd45.Obj) == (current_block [OBJECT_4_4])))
    goto label_206;

DEFLABEL (label_205)
  (Wrd227.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd227.Obj);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (Wrd230.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd230.Obj);
  (Rsp [3]) = (Wrd228.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_12;

DEFLABEL (label_206)
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_255;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_254)
  if ((Wrd55.Obj) == (current_block [OBJECT_4_12]))
    goto label_205;
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_253;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [0]);

DEFLABEL (label_252)
  if ((Wrd65.Obj) == (current_block [OBJECT_4_13]))
    goto label_205;
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_251;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_250)
  if ((Wrd75.Obj) == (current_block [OBJECT_4_14]))
    goto label_249;

DEFLABEL (label_248)
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_247;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);

DEFLABEL (label_246)
  if ((Wrd85.Obj) == (current_block [OBJECT_4_15]))
    goto label_244;

DEFLABEL (label_243)
  (Wrd98.Obj) = (Rsp [3]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_242;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [0]);

DEFLABEL (label_241)
  if ((Wrd95.Obj) == (current_block [OBJECT_4_16]))
    goto label_236;
  (Wrd108.Obj) = (Rsp [3]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_235;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [0]);

DEFLABEL (label_234)
  if ((Wrd105.Obj) == (current_block [OBJECT_4_17]))
    goto label_229;
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_228;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd115.Obj) = ((Wrd117.pObj) [0]);

DEFLABEL (label_227)
  if ((Wrd115.Obj) == (current_block [OBJECT_4_18]))
    goto label_222;
  (Wrd128.Obj) = (Rsp [3]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_221;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [0]);

DEFLABEL (label_220)
  if ((Wrd125.Obj) == (current_block [OBJECT_4_19]))
    goto label_215;
  (Wrd138.Obj) = (Rsp [3]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_214;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd135.Obj) = ((Wrd137.pObj) [0]);

DEFLABEL (label_213)
  if ((Wrd135.Obj) == (current_block [OBJECT_4_20]))
    goto label_207;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_78]))));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd150.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_11]));
  (Wrd153.Obj) = ((Wrd150.pObj) [0]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if ((Wrd154.uLng) == 50)
    goto label_212;
  Wrd149 = Wrd153;

DEFLABEL (label_211)
  (Rsp [3]) = (Wrd149.Obj);
  (Wrd157.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_12]));
  (Wrd160.Obj) = ((Wrd157.pObj) [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if ((Wrd161.uLng) == 50)
    goto label_210;
  Wrd156 = Wrd160;

DEFLABEL (label_209)
  (Rsp [2]) = (Wrd156.Obj);

DEFLABEL (label_208)
  Rsp = (& (Rsp [1]));
  goto lambda_21;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_77])), (Wrd157.pObj));

DEFLABEL (label_149)
  (Wrd156.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_76])), (Wrd150.pObj));

DEFLABEL (label_148)
  (Wrd149.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_75]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_147)
  (Wrd135.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_215)
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_9]));
  (Wrd168.Obj) = ((Wrd165.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_219;
  Wrd164 = Wrd168;

DEFLABEL (label_218)
  (Rsp [3]) = (Wrd164.Obj);
  (Wrd172.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_10]));
  (Wrd175.Obj) = ((Wrd172.pObj) [0]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if ((Wrd176.uLng) == 50)
    goto label_217;
  Wrd171 = Wrd175;

DEFLABEL (label_216)
  (Rsp [2]) = (Wrd171.Obj);
  goto label_208;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_74])), (Wrd172.pObj));

DEFLABEL (label_151)
  (Wrd171.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_73])), (Wrd165.pObj));

DEFLABEL (label_150)
  (Wrd164.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_72]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_146)
  (Wrd125.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_222)
  (Wrd179.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_7]));
  (Wrd182.Obj) = ((Wrd179.pObj) [0]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if ((Wrd183.uLng) == 50)
    goto label_226;
  Wrd178 = Wrd182;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd185.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_8]));
  (Wrd188.Obj) = ((Wrd185.pObj) [0]);
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd188.Obj));
  if ((Wrd189.uLng) == 50)
    goto label_224;
  Wrd184 = Wrd188;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd184.Obj);
  goto lambda_27;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_71])), (Wrd185.pObj));

DEFLABEL (label_153)
  (Wrd184.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_70])), (Wrd179.pObj));

DEFLABEL (label_152)
  (Wrd178.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_69]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_145)
  (Wrd115.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_229)
  (Wrd191.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_5]));
  (Wrd194.Obj) = ((Wrd191.pObj) [0]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if ((Wrd195.uLng) == 50)
    goto label_233;
  Wrd190 = Wrd194;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd190.Obj);
  (Wrd197.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_6]));
  (Wrd200.Obj) = ((Wrd197.pObj) [0]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if ((Wrd201.uLng) == 50)
    goto label_231;
  Wrd196 = Wrd200;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd196.Obj);
  goto lambda_27;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_68])), (Wrd197.pObj));

DEFLABEL (label_155)
  (Wrd196.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_67])), (Wrd191.pObj));

DEFLABEL (label_154)
  (Wrd190.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_66]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_144)
  (Wrd105.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_236)
  (Wrd204.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_3]));
  (Wrd207.Obj) = ((Wrd204.pObj) [0]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if ((Wrd208.uLng) == 50)
    goto label_240;
  Wrd203 = Wrd207;

DEFLABEL (label_239)
  (Rsp [3]) = (Wrd203.Obj);
  (Wrd211.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_4]));
  (Wrd214.Obj) = ((Wrd211.pObj) [0]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if ((Wrd215.uLng) == 50)
    goto label_238;
  Wrd210 = Wrd214;

DEFLABEL (label_237)
  (Rsp [2]) = (Wrd210.Obj);
  goto label_208;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_65])), (Wrd211.pObj));

DEFLABEL (label_157)
  (Wrd210.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_64])), (Wrd204.pObj));

DEFLABEL (label_156)
  (Wrd203.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_63]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_143)
  (Wrd95.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_53]))));
  (* (--Rsp)) = (Wrd219.Obj);

DEFLABEL (label_245)
  (Wrd220.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd220.Obj);
  (Wrd221.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd221.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (label_247)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_62]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_142)
  (Wrd85.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_48]))));
  (* (--Rsp)) = (Wrd224.Obj);
  goto label_245;

DEFLABEL (label_251)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_61]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_141)
  (Wrd75.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_60]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_140)
  (Wrd65.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_59]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_139)
  (Wrd55.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_58]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_138)
  (Wrd45.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_260)
  (Wrd42.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (label_262)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_132)
  (Wrd22.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_264)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_260;

DEFLABEL (label_266)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_131)
  (Wrd12.Obj) = Rvl;
  goto label_265;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_4_53);
  (Wrd235.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd235.uLng) == 1))
    goto label_270;
  (Wrd234.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd233.Obj) = ((Wrd234.pObj) [0]);

DEFLABEL (label_269)
  if (! ((Wrd233.Obj) == (current_block [OBJECT_4_1])))
    goto label_243;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd243.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_55])));
  Rhp += 1;
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd243.pObj)));
  Wrd244 = Wrd243;
  (Wrd245.Obj) = (Rsp [3]);
  ((Wrd244.pObj) [2]) = (Wrd245.Obj);
  (Rsp [3]) = (Wrd242.Obj);
  (Wrd248.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd251.Obj) = ((Wrd248.pObj) [0]);
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd251.Obj));
  if ((Wrd252.uLng) == 50)
    goto label_268;
  Wrd247 = Wrd251;

DEFLABEL (label_267)
  (Rsp [2]) = (Wrd247.Obj);
  goto label_208;

DEFLABEL (label_268)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_57])), (Wrd248.pObj));

DEFLABEL (label_161)
  (Wrd247.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_270)
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_54]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_160)
  (Wrd233.Obj) = Rvl;
  goto label_269;

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_4_48);
  (Wrd257.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd257.uLng) == 1))
    goto label_274;
  (Wrd256.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd255.Obj) = ((Wrd256.pObj) [0]);

DEFLABEL (label_273)
  if (! ((Wrd255.Obj) == (current_block [OBJECT_4_1])))
    goto label_248;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd265.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_50])));
  Rhp += 1;
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd265.pObj)));
  Wrd266 = Wrd265;
  (Wrd267.Obj) = (Rsp [3]);
  ((Wrd266.pObj) [2]) = (Wrd267.Obj);
  (Rsp [3]) = (Wrd264.Obj);
  (Wrd270.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd273.Obj) = ((Wrd270.pObj) [0]);
  (Wrd274.uLng) = (OBJECT_TYPE (Wrd273.Obj));
  if ((Wrd274.uLng) == 50)
    goto label_272;
  Wrd269 = Wrd273;

DEFLABEL (label_271)
  (Rsp [2]) = (Wrd269.Obj);
  goto label_208;

DEFLABEL (label_272)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_52])), (Wrd270.pObj));

DEFLABEL (label_163)
  (Wrd269.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_49]))));
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_162)
  (Wrd255.Obj) = Rvl;
  goto label_273;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_82]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_4_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_258;
  (Wrd54.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_276;
  Wrd56 = Wrd60;

DEFLABEL (label_275)
  (Wrd62.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd62.Obj);
  (Rsp [3]) = (Wrd56.Obj);
  goto label_200;

DEFLABEL (label_276)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_22])), (Wrd57.pObj));

DEFLABEL (label_158)
  (Wrd56.Obj) = Rvl;
  goto label_275;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_82]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_4_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_263;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Wrd74.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd74.uLng) == 1))
    goto label_278;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_277)
  if (! ((Wrd72.Obj) == (current_block [OBJECT_4_1])))
    goto label_263;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto phi_1_108;

DEFLABEL (label_278)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_165)
  (Wrd72.Obj) = Rvl;
  goto label_277;

DEFLABEL (lambda_177)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_127;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_30])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_178)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_4_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto phi_1_6;

DEFLABEL (phi_1_180)
DEFLABEL (phi_1_6)
  INTERRUPT_CHECK (26, LABEL_4_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_287;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_287;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_286)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_280;

DEFLABEL (label_279)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_280)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_285;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_285;
  (Wrd16.Obj) = ((Wrd22.pObj) [3]);

DEFLABEL (label_284)
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_283;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_283;
  (Wrd37.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_282)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_47]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_281;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_86);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_85])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_281)
  goto phi_1_6;

DEFLABEL (label_283)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_4_11]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_46]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_136)
  (* (--Rsp)) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_4_10]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_44]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_135)
  (Wrd16.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_133)
  (* (--Rsp)) = Rvl;
  goto label_286;

DEFLABEL (lambda_183)
DEFLABEL (lambda_124)
  INTERRUPT_CHECK (26, LABEL_4_29);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_290;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_289)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_8])))
    goto label_288;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_4_43);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_288)
  Rsp = (& (Rsp [2]));
  goto label_280;

DEFLABEL (label_290)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_134)
  (Wrd5.Obj) = Rvl;
  goto label_289;

DEFLABEL (lambda_179)
  CLOSURE_HEADER (LABEL_4_30);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_291;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_83]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_291)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_84]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_84);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_292)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_94);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_93])));
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

DEFLABEL (loop_186)
DEFLABEL (loop_91)
  INTERRUPT_CHECK (26, LABEL_4_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_297;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_297;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_296)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_47]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_4_87);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_293;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_97);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_96])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd7.Obj);
  ((Wrd16.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_293)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_295;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_295;
  (Wrd19.Obj) = ((Wrd25.pObj) [3]);

DEFLABEL (label_294)
  (Rsp [1]) = (Wrd19.Obj);
  goto loop_91;

DEFLABEL (label_295)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_4_10]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_95]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_166)
  (Wrd19.Obj) = Rvl;
  goto label_294;

DEFLABEL (label_297)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_4_11]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_88]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_159)
  (* (--Rsp)) = Rvl;
  goto label_296;

DEFLABEL (lambda_188)
DEFLABEL (lambda_67)
  INTERRUPT_CHECK (26, LABEL_4_78);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_189)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_4_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_21;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_90);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_99);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_98])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_182)
DEFLABEL (lambda_83)
  INTERRUPT_CHECK (26, LABEL_4_37);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_304;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [0]);

DEFLABEL (label_303)
  if (! ((Wrd67.Obj) == (current_block [OBJECT_4_8])))
    goto label_302;
  (Wrd85.Obj) = (current_block [OBJECT_4_9]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_4_39);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_301;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_300)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_47]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_299)
  (Wrd79.Obj) = (Rsp [0]);
  if (! ((Wrd79.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_298;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

DEFLABEL (label_298)
  Rsp = (& (Rsp [3]));
  if ((Wrd79.Obj) == ((SCHEME_OBJECT) 0))
    goto label_280;
  goto label_279;

DEFLABEL (label_301)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_100]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_167)
  (* (--Rsp)) = Rvl;
  goto label_300;

DEFLABEL (label_302)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_299;

DEFLABEL (label_304)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_164)
  (Wrd67.Obj) = Rvl;
  goto label_303;

DEFLABEL (lambda_191)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_4_83);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_192)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_4_41);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_187)
  CLOSURE_HEADER (LABEL_4_85);

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

DEFLABEL (lambda_185)
  CLOSURE_HEADER (LABEL_4_55);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_4_92);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_4_21]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_4_15]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd20.Obj);

DEFLABEL (label_305)
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [3]));
  goto label_292;

DEFLABEL (lambda_184)
  CLOSURE_HEADER (LABEL_4_50);

DEFLABEL (lambda_76)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_4_91);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_4_21]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  goto label_305;

DEFLABEL (lambda_190)
  CLOSURE_HEADER (LABEL_4_93);

DEFLABEL (lambda_16)
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

DEFLABEL (lambda_193)
  CLOSURE_HEADER (LABEL_4_96);

DEFLABEL (lambda_89)
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

DEFLABEL (lambda_194)
  CLOSURE_HEADER (LABEL_4_98);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_306;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_102);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_101])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_306)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd20.Obj) = ((Wrd17.pObj) [3]);
  (Rsp [0]) = (Wrd20.Obj);
  goto lambda_12;

DEFLABEL (phi_1_196)
DEFLABEL (phi_1_108)
  INTERRUPT_CHECK (26, LABEL_4_103);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_322;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_322;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_321)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_105]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_106]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_4_105);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_312;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_311;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_311;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_310)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_309;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_309;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_308)
  (Rsp [2]) = (Wrd27.Obj);

DEFLABEL (label_307)
  Rsp = (& (Rsp [1]));
  goto phi_2_119;

DEFLABEL (label_309)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_114]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_170)
  (Wrd27.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_311)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_4_10]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_113]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_169)
  (Wrd7.Obj) = Rvl;
  goto label_310;

DEFLABEL (label_312)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_320;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_319)
  if ((Wrd34.Obj) == (current_block [OBJECT_4_8]))
    goto label_318;

DEFLABEL (label_317)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_108]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_4_108);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_314;

DEFLABEL (label_313)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_110]))));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_314)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_316;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd70.Lng))))
    goto label_316;
  (Wrd62.Obj) = ((Wrd68.pObj) [3]);

DEFLABEL (label_315)
  (Rsp [1]) = (Wrd62.Obj);
  goto label_307;

DEFLABEL (label_316)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (current_block [OBJECT_4_10]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_109]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_173)
  (Wrd62.Obj) = Rvl;
  goto label_315;

DEFLABEL (label_318)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_107]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_112]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_4_112);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_118]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_4_107);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_317;
  goto label_313;

DEFLABEL (label_320)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_111]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_171)
  (Wrd34.Obj) = Rvl;
  goto label_319;

DEFLABEL (label_322)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_104]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_168)
  (* (--Rsp)) = Rvl;
  goto label_321;

DEFLABEL (lambda_195)
  CLOSURE_HEADER (LABEL_4_101);

DEFLABEL (lambda_23)
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

DEFLABEL (lambda_181)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_4_35);
  goto label_288;

DEFLABEL (phi_2_197)
DEFLABEL (phi_2_119)
  INTERRUPT_CHECK (26, LABEL_4_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_325;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_325;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_324)
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_47]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_4_116);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_323;
  goto phi_1_108;

DEFLABEL (label_323)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_119]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_4_119);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_4_21]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [5]) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd26.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_121);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_120])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  Rvl = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_325)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_11]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_117]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 2);

DEFLABEL (label_172)
  (* (--Rsp)) = Rvl;
  goto label_324;

DEFLABEL (lambda_198)
DEFLABEL (lambda_103)
  INTERRUPT_CHECK (26, LABEL_4_110);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_199)
  CLOSURE_HEADER (LABEL_4_120);

DEFLABEL (lambda_117)
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

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_8 7
#define LABEL_5_4 9
#define LABEL_5_9 11
#define LABEL_5_11 13
#define LABEL_5_13 15
#define LABEL_5_7 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define LABEL_5_19 23
#define LABEL_5_21 25
#define LABEL_5_22 27
#define LABEL_5_20 29
#define ENVIRONMENT_LABEL_5_3 48
#define DEBUGGING_LABEL_5_2 47
#define OBJECT_5_5 46
#define OBJECT_5_4 45
#define OBJECT_5_3 44
#define OBJECT_5_2 43
#define OBJECT_5_1 42
#define OBJECT_5_0 41
#define EXECUTE_CACHE_5_18 31
#define EXECUTE_CACHE_5_15 33
#define EXECUTE_CACHE_5_14 35
#define EXECUTE_CACHE_5_12 37
#define EXECUTE_CACHE_5_10 39
#define FREE_REFERENCES_LABEL_5_0 30
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_5_4);
      goto expression_clobbers_stack_pointerP_22;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto loop_17;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto lambda_16;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_5_21);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_clobbers_stack_pointerP_29)
DEFLABEL (expression_clobbers_stack_pointerP_22)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_39)
  if ((Wrd8.Obj) == (current_block [OBJECT_5_2]))
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_37)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_38)
  (Wrd47.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_40)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd36.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd36.uLng) == 1))
    goto label_42;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd34.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_41)
  if (! ((Wrd34.Obj) == (current_block [OBJECT_5_1])))
    goto label_36;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_38;

DEFLABEL (label_42)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_25)
  (Wrd34.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (loop_30)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_5_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (lambda_31)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_5_17);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_49;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_48)
  if ((Wrd5.Obj) == (current_block [OBJECT_5_4]))
    goto label_47;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_45)
  if ((Wrd15.Obj) == (current_block [OBJECT_5_5]))
    goto label_43;
  goto loop_17;

DEFLABEL (label_43)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_44)
  (Wrd33.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_27)
  (Wrd15.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_44;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_11 15
#define ENVIRONMENT_LABEL_6_3 29
#define DEBUGGING_LABEL_6_2 28
#define OBJECT_6_6 27
#define OBJECT_6_5 26
#define OBJECT_6_4 25
#define OBJECT_6_3 24
#define OBJECT_6_2 23
#define OBJECT_6_1 22
#define OBJECT_6_0 21
#define EXECUTE_CACHE_6_12 17
#define EXECUTE_CACHE_6_7 19
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_6_4);
      goto expression_is_stack_pushP_9;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_is_stack_pushP_14)
DEFLABEL (expression_is_stack_pushP_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_24)
  if ((Wrd5.Obj) == (current_block [OBJECT_6_1]))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Rsp [0]) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_22)
  if ((Wrd6.Obj) == (current_block [OBJECT_6_3]))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd7.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Rsp [1]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_18;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_18)
  if (Rvl == (current_block [OBJECT_6_4]))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_6_6]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define LABEL_7_15 17
#define LABEL_7_14 19
#define LABEL_7_21 21
#define LABEL_7_17 23
#define LABEL_7_22 25
#define LABEL_7_23 27
#define LABEL_7_24 29
#define LABEL_7_25 31
#define LABEL_7_26 33
#define LABEL_7_27 35
#define LABEL_7_28 37
#define LABEL_7_29 39
#define LABEL_7_30 41
#define LABEL_7_31 43
#define LABEL_7_32 45
#define LABEL_7_18 47
#define LABEL_7_34 49
#define LABEL_7_19 51
#define LABEL_7_36 53
#define LABEL_7_37 55
#define LABEL_7_33 57
#define ENVIRONMENT_LABEL_7_3 89
#define DEBUGGING_LABEL_7_2 88
#define OBJECT_7_9 87
#define OBJECT_7_8 86
#define OBJECT_7_7 85
#define OBJECT_7_6 84
#define OBJECT_7_5 83
#define OBJECT_7_4 82
#define OBJECT_7_3 81
#define OBJECT_7_2 80
#define OBJECT_7_1 79
#define OBJECT_7_0 78
#define EXECUTE_CACHE_7_39 59
#define EXECUTE_CACHE_7_38 61
#define EXECUTE_CACHE_7_35 63
#define EXECUTE_CACHE_7_20 65
#define EXECUTE_CACHE_7_16 67
#define EXECUTE_CACHE_7_11 69
#define EXECUTE_CACHE_7_9 71
#define EXECUTE_CACHE_7_7 73
#define FREE_REFERENCE_7_1 76
#define FREE_REFERENCE_7_0 77
#define FREE_REFERENCES_LABEL_7_0 58
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd117;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd136;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd144;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd155;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto fold_instructionsB_25;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_7_22);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_7_23);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_7_24);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_7_25);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_7_26);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_7_27);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_7_28);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_7_29);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_7_30);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_7_31);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_7_32);
      goto label_38;

    case 22:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_10;

    case 23:
      current_block = (Rpc - LABEL_7_34);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_9;

    case 25:
      current_block = (Rpc - LABEL_7_36);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_7_37);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_7_33);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fold_instructionsB_46)
DEFLABEL (fold_instructionsB_25)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_87;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_87;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_85;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_85;
  ((Wrd40.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_84)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_83;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd25.Lng))))
    goto label_83;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_82)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_81;
  Wrd10 = Wrd14;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_79;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_79;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_78)
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_77;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_77;
  (Wrd24.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_38]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_75;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_75;
  (Wrd15.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_74)
  (Wrd29.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (Rsp [2]) = Rvl;
  (Wrd173.Obj) = (Rsp [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if ((Wrd174.uLng) == 10)
    goto label_50;

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_50)
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [0]);
  (Wrd172.Lng) = (FIXNUM_TO_LONG (Wrd171.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd172.Lng))))
    goto label_49;
  ((Wrd170.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_73)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_72;
  Wrd6 = Wrd10;

DEFLABEL (label_71)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_70;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_70;
  (Wrd12.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_69)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_68;
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 26))
    goto label_68;
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) (Wrd151.Lng)) < ((unsigned long) (Wrd154.Lng))))
    goto label_68;
  (Wrd144.uLng) = (OBJECT_DATUM (Wrd148.Obj));
  (Wrd146.pObj) = (& ((Wrd152.pObj) [(Wrd144.Lng)]));
  (Wrd147.Obj) = (current_block [OBJECT_7_0]);
  ((Wrd146.pObj) [1]) = (Wrd147.Obj);

DEFLABEL (label_67)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_66;
  Wrd26 = Wrd30;

DEFLABEL (label_65)
  Wrd25 = Wrd26;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_64;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng))))
    goto label_64;
  (Wrd32.Obj) = ((Wrd36.pObj) [6]);

DEFLABEL (label_63)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_62;
  (Wrd129.Obj) = (Rsp [4]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 26))
    goto label_62;
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) (Wrd132.Lng)) < ((unsigned long) (Wrd135.Lng))))
    goto label_62;
  (Wrd125.uLng) = (OBJECT_DATUM (Wrd129.Obj));
  (Wrd127.pObj) = (& ((Wrd133.pObj) [(Wrd125.Lng)]));
  (Wrd128.Obj) = (current_block [OBJECT_7_0]);
  ((Wrd127.pObj) [1]) = (Wrd128.Obj);

DEFLABEL (label_61)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_60;
  Wrd46 = Wrd50;

DEFLABEL (label_59)
  Wrd45 = Wrd46;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_58;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd58.Lng))))
    goto label_58;
  (Wrd52.Obj) = ((Wrd56.pObj) [7]);

DEFLABEL (label_57)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_56;
  (Wrd110.Obj) = (Rsp [4]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_56;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) (Wrd113.Lng)) < ((unsigned long) (Wrd116.Lng))))
    goto label_56;
  (Wrd106.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  (Wrd108.pObj) = (& ((Wrd114.pObj) [(Wrd106.Lng)]));
  (Wrd109.Obj) = (current_block [OBJECT_7_0]);
  ((Wrd108.pObj) [1]) = (Wrd109.Obj);

DEFLABEL (label_55)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_54;
  Wrd66 = Wrd70;

DEFLABEL (label_53)
  Wrd65 = Wrd66;
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_52;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd78.Lng))))
    goto label_52;
  (Wrd72.Obj) = ((Wrd76.pObj) [4]);

DEFLABEL (label_51)
  (Rsp [3]) = (Wrd72.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 10))
    goto label_49;
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_49;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) (Wrd97.Lng)) < ((unsigned long) (Wrd101.Lng))))
    goto label_49;
  (Wrd88.uLng) = (OBJECT_DATUM (Wrd94.Obj));
  (Wrd91.pObj) = (& ((Wrd99.pObj) [(Wrd88.Lng)]));
  ((Wrd91.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd81.Obj) = (current_block [OBJECT_7_7]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_38)
  (Wrd72.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_31])), (Wrd67.pObj));

DEFLABEL (label_37)
  (Wrd66.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd119.Obj) = (Rsp [4]);
  (Wrd120.Obj) = (current_block [OBJECT_7_0]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_39)
  goto label_55;

DEFLABEL (label_58)
  (Wrd61.Obj) = (current_block [OBJECT_7_6]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_36)
  (Wrd52.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_28])), (Wrd47.pObj));

DEFLABEL (label_35)
  (Wrd46.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd138.Obj) = (Rsp [4]);
  (Wrd139.Obj) = (current_block [OBJECT_7_0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_40)
  goto label_61;

DEFLABEL (label_64)
  (Wrd41.Obj) = (current_block [OBJECT_7_5]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_34)
  (Wrd32.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_25])), (Wrd27.pObj));

DEFLABEL (label_33)
  (Wrd26.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd157.Obj) = (Rsp [4]);
  (Wrd158.Obj) = (current_block [OBJECT_7_0]);
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_41)
  goto label_67;

DEFLABEL (label_70)
  (Wrd21.Obj) = (current_block [OBJECT_7_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_32)
  (Wrd12.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_22])), (Wrd7.pObj));

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_75)
  (Wrd24.Obj) = (Rsp [9]);
  (Wrd25.Obj) = (current_block [OBJECT_7_8]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd33.Obj) = (Rsp [7]);
  (Wrd34.Obj) = (current_block [OBJECT_7_9]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_7_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd11.pObj));

DEFLABEL (label_28)
  (Wrd10.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_7_0]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_29)
  goto label_82;

DEFLABEL (label_85)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_7_0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (label_30)
  goto label_84;

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_17);
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_6 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define LABEL_8_15 19
#define LABEL_8_16 21
#define LABEL_8_17 23
#define ENVIRONMENT_LABEL_8_3 41
#define DEBUGGING_LABEL_8_2 40
#define OBJECT_8_4 39
#define OBJECT_8_3 38
#define OBJECT_8_2 37
#define OBJECT_8_1 36
#define OBJECT_8_0 35
#define EXECUTE_CACHE_8_18 25
#define EXECUTE_CACHE_8_14 27
#define EXECUTE_CACHE_8_11 29
#define EXECUTE_CACHE_8_8 31
#define FREE_REFERENCE_8_0 34
#define FREE_REFERENCES_LABEL_8_0 24
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto new_dead_registers_15;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto loop_13;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_dead_registers_23)
DEFLABEL (new_dead_registers_15)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_13;

DEFLABEL (loop_24)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_36;
  Wrd9 = Wrd13;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_25;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_33)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_8_2]))
    goto label_30;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (Wrd5.Obj) = Rvl;
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_29;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_29;
  ((Wrd32.pObj) [2]) = Rvl;

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_27;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_27;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_8_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_8_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 3);

DEFLABEL (label_21)
  goto label_28;

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_32;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_32;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (label_32)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_8_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_8_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define TAG_9_7 2
#define LABEL_9_8 9
#define LABEL_9_11 11
#define LABEL_9_13 13
#define ENVIRONMENT_LABEL_9_3 27
#define DEBUGGING_LABEL_9_2 26
#define OBJECT_9_2 25
#define OBJECT_9_1 24
#define OBJECT_9_0 23
#define EXECUTE_CACHE_9_14 15
#define EXECUTE_CACHE_9_12 17
#define EXECUTE_CACHE_9_10 19
#define EXECUTE_CACHE_9_9 21
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcompr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto rtl_expression_register_references_12;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto loop_16;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_expression_register_references_15)
DEFLABEL (rtl_expression_register_references_12)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_6])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  ((Wrd18.pObj) [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto loop_9;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_16)
  CLOSURE_HEADER (LABEL_9_6);

DEFLABEL (loop_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [0]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  ((Wrd16.pObj) [0]) = (Wrd9.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
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
rcompr_so_ab5f7bea21174313 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

static const struct liarc_code_S arr_decl_rcompr_so_ab5f7bea21174313 [9] =
  {
    { "rcompr_so_code_1", 9, rcompr_so_code_1 },
    { "rcompr_so_code_2", 18, rcompr_so_code_2 },
    { "rcompr_so_code_3", 22, rcompr_so_code_3 },
    { "rcompr_so_code_4", 97, rcompr_so_code_4 },
    { "rcompr_so_code_5", 14, rcompr_so_code_5 },
    { "rcompr_so_code_6", 7, rcompr_so_code_6 },
    { "rcompr_so_code_7", 28, rcompr_so_code_7 },
    { "rcompr_so_code_8", 11, rcompr_so_code_8 },
    { "rcompr_so_code_9", 6, rcompr_so_code_9 }
  };

int
decl_rcompr_so_ab5f7bea21174313 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcompr_so_ab5f7bea21174313);
  return (0);
}

DECLARE_COMPILED_CODE ("rcompr.so", 3, decl_rcompr_so_ab5f7bea21174313, rcompr_so_ab5f7bea21174313)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcompr_so_data_ab5f7bea21174313 [3763] =
  "\x81\x02\x16\x88\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\xc2\xb9"
  "\x82\x0d\xba\x25\x0d\xbb\xb2\x24\x28\x0d\xbc\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x82\x88\xc2\xc2\x81\xc2\x02\xc2\x80\x1d"
  "\x82\xb1\x02\xb2\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x28\x0d"
  "\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x81"
  "\x1d\x02\x82\x84\xb1\x83\x85\x0d\x1c\x86\x0d\x1c\xc1\x1c\xb2\x0d"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x84\x88\x08\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x81\x82"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x08\x8a\x1b\xb1\x80\x0d\x1b\x02\x86\x0d"
  "\x1b\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x1b\x86"
  "\x1b\x1b\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x07\x02\x87\x1b\x86\x1b\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\x81\x83\x86\x85\x84\xc3\x1c\x1d\xb1\x80\x0d"
  "\xb2\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xba\x1d\xb0\x02\x88\x1b\x82\x08\xb1\x81\x0d\x24\x28\xb4\x28"
  "\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x86\x08\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\xb2\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb7\x2a\xb5\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\xb6\xb3\x0d"
  "\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x63"
  "\x6f\x6d\x70\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x11\x2a\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x72\x67\x72\x61\x70\x68\x2a\x02\x0c\x77\x61\x6c"
  "\x6b\x2d\x62\x62\x6c\x6f\x63\x6b\x03\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x03\x0c\x14\x81\x83\x02\x0b\x12\x81"
  "\x85\x02\x0a\x10\x81\x83\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x85"
  "\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x83\x02\x05\x06\x83\x04\x04"
  "\x04\x83\x04\x13\x23\x02\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x63\x6c\x65\x61\x72\x21\x0f\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6f\x72\x21\x11\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x0a\x10\x6d\x61\x6b\x65\x2d\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x02\x09\x02\x03\x1a\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x70\x65\x72\x66\x6f\x72\x6d\x2d\x64\x65\x6c"
  "\x65\x74\x69\x6f\x6e\x73\x21\x03\x10\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x63\x6f\x70\x79\x04\x14\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x77\x61\x6c\x6b\x2d\x66\x6f\x72\x77\x61\x72\x64\x06\x0d\x6f"
  "\x70\x74\x69\x6d\x69\x7a\x65\x2d\x72\x74\x6c\x06\x14\x6d\x61\x72"
  "\x6b\x2d\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x21"
  "\x04\x07\x1e\x26\x81\x85\x02\x1d\x24\x81\x87\x02\x1c\x22\x81\x89"
  "\x02\x1b\x20\x81\x87\x02\x1a\x1e\x81\x87\x02\x19\x1c\x81\x87\x02"
  "\x18\x1a\x81\x85\x02\x17\x18\x81\x85\x02\x16\x16\x81\x85\x02\x15"
  "\x14\x81\x87\x02\x14\x12\x81\x89\x02\x13\x10\x81\x85\x02\x12\x0e"
  "\x81\x83\x02\x11\x0c\x81\x89\x02\x10\x0a\x81\x89\x02\x0f\x08\x81"
  "\x83\x02\x0e\x06\x81\x83\x02\x0d\x04\x83\x04\x25\x42\x02\x02\x0d"
  "\x07\x61\x73\x73\x69\x67\x6e\x09\x09\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x0a\x04\x63\x61\x72\x0b\x19\x72\x74\x6c\x3a\x76\x6f\x6c\x61"
  "\x74\x69\x6c\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f"
  "\x03\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63"
  "\x64\x72\x0c\x04\x19\x72\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x61\x69\x6e\x73\x3f\x04\x05\x6d"
  "\x65\x6d\x71\x0d\x07\x13\x66\x6f\x6c\x64\x2d\x69\x6e\x73\x74\x72"
  "\x75\x63\x74\x69\x6f\x6e\x73\x21\x0e\x05\x1b\x66\x69\x6e\x64\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x0f\x06\x34\x2e\x81\x85\x02\x33\x2c\x81\x8d"
  "\x02\x32\x2a\x81\x83\x02\x31\x28\x81\x87\x02\x30\x26\x81\x85\x02"
  "\x2f\x24\x81\x8f\x02\x2e\x22\x81\x8d\x02\x2d\x20\x81\x8f\x02\x2c"
  "\x1e\x81\x8b\x02\x2b\x1c\x81\x8b\x02\x2a\x1a\x81\x8b\x02\x29\x18"
  "\x81\x8b\x02\x28\x16\x81\x8b\x02\x27\x14\x81\x8b\x02\x26\x12\x81"
  "\x8b\x02\x25\x10\x81\x8b\x02\x24\x0e\x81\x8b\x02\x23\x0c\x81\x8b"
  "\x02\x22\x0a\x86\x0a\x21\x08\x81\x89\x02\x20\x06\x81\x83\x02\x1f"
  "\x04\x81\x8b\x02\x2d\x4a\x10\x02\x18\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x0f\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x0e\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x3e\x64\x61\x74\x75\x6d\x10\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x11\x63\x6f\x6e\x73\x2d"
  "\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x0d\x63\x6f\x6e\x73"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x0d\x66\x6c\x6f\x61\x74\x2d\x6f"
  "\x66\x66\x73\x65\x74\x0c\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65"
  "\x74\x07\x6f\x66\x66\x73\x65\x74\x11\x0f\x70\x6f\x73\x74\x2d\x69"
  "\x6e\x63\x72\x65\x6d\x65\x6e\x74\x12\x0e\x70\x72\x65\x2d\x69\x6e"
  "\x63\x72\x65\x6d\x65\x6e\x74\x13\x09\x0f\x6f\x66\x66\x73\x65\x74"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x11\x0d\x11\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0b\x23\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6c\x6f\x62\x62\x65\x72\x73"
  "\x2d\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x11"
  "\x17\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x64\x61\x74\x75\x6d\x1b\x72\x74\x6c\x3a\x63\x6f\x6e\x73"
  "\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x64\x61\x74"
  "\x75\x6d\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x1f\x72\x74\x6c\x3a"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x17\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x64\x61\x74\x75"
  "\x6d\x1d\x72\x74\x6c\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x64\x61"
  "\x74\x75\x6d\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x18\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x66\x69\x78\x6e\x75\x6d\x1e\x72\x74\x6c\x3a\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x16\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x1c\x72\x74\x6c\x3a\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x21\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x27\x72\x74\x6c\x3a\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x03"
  "\x1c\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x76\x61\x6c"
  "\x75\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x04\x0c\x03\x19"
  "\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x3f\x03\x11\x04\x0d\x03\x1b\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x73\x74\x61\x63\x6b\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x3f\x0d\x03\x1a\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x69\x73\x2d\x73\x74\x61\x63\x6b\x2d\x70"
  "\x75\x73\x68\x3f\x14\x04\x11\x72\x74\x6c\x3a\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x3d\x3f\x09\x95\x01\xc4\x01\x81\x85\x02\x94"
  "\x01\xc2\x01\x81\x8d\x02\x93\x01\xc0\x01\x83\x04\x92\x01\xbe\x01"
  "\x81\x8d\x02\x91\x01\xbc\x01\x81\x93\x02\x90\x01\xba\x01\x81\x8f"
  "\x02\x8f\x01\xb8\x01\x81\x8d\x02\x8e\x01\xb6\x01\x81\x8f\x02\x8d"
  "\x01\xb4\x01\x81\x8f\x02\x8c\x01\xb2\x01\x81\x8f\x02\x8b\x01\xb0"
  "\x01\x81\x8f\x02\x8a\x01\xae\x01\x81\x8f\x02\x89\x01\xac\x01\x81"
  "\x8f\x02\x88\x01\xaa\x01\x81\x8f\x02\x87\x01\xa8\x01\x81\x85\x02"
  "\x86\x01\xa6\x01\x81\x8d\x02\x85\x01\xa4\x01\x81\x8d\x02\x84\x01"
  "\xa2\x01\x81\x87\x02\x83\x01\xa0\x01\x81\x85\x02\x82\x01\x9e\x01"
  "\x81\x85\x02\x81\x01\x9c\x01\x81\x8d\x02\x80\x01\x9a\x01\x81\x89"
  "\x02\x7f\x98\x01\x81\x87\x02\x7e\x96\x01\x81\x87\x02\x7d\x94\x01"
  "\x81\x85\x02\x7c\x92\x01\x81\x85\x02\x7b\x90\x01\x81\x8d\x02\x7a"
  "\x8e\x01\x81\x85\x02\x79\x8c\x01\x81\x85\x02\x78\x8a\x01\x81\x85"
  "\x02\x77\x88\x01\x83\x04\x76\x86\x01\x83\x04\x75\x84\x01\x81\x87"
  "\x02\x74\x82\x01\x81\x85\x02\x73\x80\x01\x81\x85\x02\x72\x7e\x81"
  "\x8d\x02\x71\x7c\x83\x04\x70\x7a\x81\x87\x02\x6f\x78\x81\x85\x02"
  "\x6e\x76\x81\x83\x02\x6d\x74\x81\x89\x02\x6c\x72\x81\x87\x02\x6b"
  "\x70\x81\x8b\x02\x6a\x6e\x81\x8b\x02\x69\x6c\x81\x89\x02\x68\x6a"
  "\x81\x89\x02\x67\x68\x81\x89\x02\x66\x66\x81\x89\x02\x65\x64\x81"
  "\x89\x02\x64\x62\x81\x89\x02\x63\x60\x81\x89\x02\x62\x5e\x81\x8b"
  "\x02\x61\x5c\x81\x89\x02\x60\x5a\x81\x89\x02\x5f\x58\x81\x8b\x02"
  "\x5e\x56\x81\x89\x02\x5d\x54\x81\x89\x02\x5c\x52\x81\x89\x02\x5b"
  "\x50\x81\x89\x02\x5a\x4e\x81\x89\x02\x59\x4c\x81\x89\x02\x58\x4a"
  "\x81\x89\x02\x57\x48\x81\x89\x02\x56\x46\x81\x89\x02\x55\x44\x81"
  "\x89\x02\x54\x42\x81\x89\x02\x53\x40\x81\x89\x02\x52\x3e\x81\x89"
  "\x02\x51\x3c\x81\x89\x02\x50\x3a\x81\x89\x02\x4f\x38\x81\x89\x02"
  "\x4e\x36\x81\x89\x02\x4d\x34\x81\x8b\x02\x4c\x32\x81\x89\x02\x4b"
  "\x30\x81\x83\x02\x4a\x2e\x83\x04\x49\x2c\x81\x89\x02\x48\x2a\x81"
  "\x85\x02\x47\x28\x83\x04\x46\x26\x81\x83\x02\x45\x24\x83\x04\x44"
  "\x22\x81\x8b\x02\x43\x20\x81\x89\x02\x42\x1e\x81\x89\x02\x41\x1c"
  "\x81\x87\x02\x40\x1a\x81\x89\x02\x3f\x18\x81\x89\x02\x3e\x16\x81"
  "\x89\x02\x3d\x14\x81\x89\x02\x3c\x12\x81\x89\x02\x3b\x10\x81\x89"
  "\x02\x3a\x0e\x81\x89\x02\x39\x0c\x81\x89\x02\x38\x0a\x81\x87\x02"
  "\x37\x08\x81\x87\x02\x36\x06\x81\x85\x02\x35\x04\x85\x08\xc3\x01"
  "\xfb\x01\x15\x02\x12\x13\x09\x0a\x0b\x04\x0c\x03\x10\x72\x74\x6c"
  "\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3f\x03\x17\x72\x74"
  "\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65"
  "\x66\x69\x78\x3f\x03\x0d\x04\x17\x72\x74\x6c\x3a\x61\x6e\x79\x2d"
  "\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x06\xa3"
  "\x01\x1e\x81\x83\x02\xa2\x01\x1c\x81\x83\x02\xa1\x01\x1a\x81\x83"
  "\x02\xa0\x01\x18\x81\x83\x02\x9f\x01\x16\x83\x04\x9e\x01\x14\x81"
  "\x83\x02\x9d\x01\x12\x81\x85\x02\x9c\x01\x10\x81\x85\x02\x9b\x01"
  "\x0e\x81\x85\x02\x9a\x01\x0c\x81\x85\x02\x99\x01\x0a\x83\x04\x98"
  "\x01\x08\x81\x83\x02\x97\x01\x06\x81\x85\x02\x96\x01\x04\x81\x85"
  "\x02\x1d\x31\x12\x02\x0d\x13\x09\x0b\x04\x0c\x03\x0d\x03\xaa\x01"
  "\x10\x81\x85\x02\xa9\x01\x0e\x81\x85\x02\xa8\x01\x0c\x81\x83\x02"
  "\xa7\x01\x0a\x81\x83\x02\xa6\x01\x08\x81\x83\x02\xa5\x01\x06\x81"
  "\x83\x02\xa4\x01\x04\x83\x04\x0f\x1e\x13\x02\x08\x0c\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d\x02\x20\x64\x65\x63\x72\x65"
  "\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69"
  "\x76\x65\x2d\x6c\x65\x6e\x67\x74\x68\x21\x03\x04\x18\x72\x74\x6c"
  "\x3a\x72\x65\x66\x65\x72\x73\x2d\x74\x6f\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x3f\x05\x13\x72\x74\x6c\x3a\x73\x75\x62\x73\x74\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x03\x24\x6c\x61\x70\x2d\x67\x65"
  "\x6e\x65\x72\x61\x74\x6f\x72\x2f\x6d\x61\x74\x63\x68\x2d\x72\x74"
  "\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x04\x17\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x2d\x72\x65\x67\x73\x65\x74\x2d\x6d"
  "\x65\x6d\x62\x65\x72\x03\x23\x72\x74\x6c\x3a\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x0b\x04\x06\x64\x65\x6c\x76"
  "\x21\x06\x13\x6e\x65\x77\x2d\x64\x65\x61\x64\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x73\x0a\x04\x0e\x65\x71\x76\x2d\x73\x65\x74\x2d"
  "\x75\x6e\x69\x6f\x6e\x09\x09\xc6\x01\x3a\x81\x89\x02\xc5\x01\x38"
  "\x81\x97\x02\xc4\x01\x36\x81\x93\x02\xc3\x01\x34\x81\x91\x02\xc2"
  "\x01\x32\x81\x8b\x02\xc1\x01\x30\x81\x8f\x02\xc0\x01\x2e\x81\x8d"
  "\x02\xbf\x01\x2c\x81\x8d\x02\xbe\x01\x2a\x81\x8d\x02\xbd\x01\x28"
  "\x81\x8d\x02\xbc\x01\x26\x81\x8d\x02\xbb\x01\x24\x81\x8d\x02\xba"
  "\x01\x22\x81\x8d\x02\xb9\x01\x20\x81\x8d\x02\xb8\x01\x1e\x81\x8d"
  "\x02\xb7\x01\x1c\x81\x8d\x02\xb6\x01\x1a\x81\x8d\x02\xb5\x01\x18"
  "\x81\x8d\x02\xb4\x01\x16\x81\x87\x02\xb3\x01\x14\x81\x8d\x02\xb2"
  "\x01\x12\x81\x8f\x02\xb1\x01\x10\x81\x8d\x02\xb0\x01\x0e\x81\x8d"
  "\x02\xaf\x01\x0c\x81\x8d\x02\xae\x01\x0a\x81\x8d\x02\xad\x01\x08"
  "\x81\x8d\x02\xac\x01\x06\x81\x8b\x02\xab\x01\x04\x87\x0c\x39\x5a"
  "\x02\x09\x0d\x20\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x76\x65\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x21\x02\x04\x04\x15\x65\x71\x76\x2d\x73\x65\x74\x2d\x69"
  "\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x04\x13\x65\x71\x76"
  "\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x04"
  "\x09\x05\xd1\x01\x18\x81\x91\x02\xd0\x01\x16\x81\x91\x02\xcf\x01"
  "\x14\x81\x91\x02\xce\x01\x12\x81\x91\x02\xcd\x01\x10\x81\x91\x02"
  "\xcc\x01\x0e\x81\x8f\x02\xcb\x01\x0c\x81\x8d\x02\xca\x01\x0a\x81"
  "\x8d\x02\xc9\x01\x08\x81\x91\x02\xc8\x01\x06\x81\x8d\x02\xc7\x01"
  "\x04\x86\x0a\x17\x2a\x0d\x02\x0a\x02\x03\x20\x72\x74\x6c\x3a\x70"
  "\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x04\x1b\x72\x74\x6c\x3a"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x73\x75\x62\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x04\x0c\x04\x05\x6d\x65\x6d\x76\x05\xd7"
  "\x01\x0e\x81\x87\x02\xd6\x01\x0c\x81\x85\x02\xd5\x01\x0a\x81\x85"
  "\x02\xd4\x01\x08\x81\x85\x02\xd3\x01\x06\x81\x85\x02\xd2\x01\x04"
  "\x83\x04\x0d\x1c\x0c\x0a\x09\x09\x0c\x04\x0d\x04\x04\x13\x04\x12"
  "\x0a\x15\x04\x10\x0a\x04\x04\x0a\x0b\x0a\x0e\x14\x11\x0f\x11\x63"
  "\x6f\x64\x65\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x69\x6f\x6e\x0a"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
rcompr_so_data_ab5f7bea21174313 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcompr_so_data_ab5f7bea21174313 [0]))), (sizeof (prog_rcompr_so_data_ab5f7bea21174313)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rcompr.so", rcompr_so_data_ab5f7bea21174313)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcompr.so", "c1652def806f93eb")
