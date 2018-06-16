/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_9 5
#define LABEL_1_5 7
#define LABEL_1_12 9
#define LABEL_1_6 11
#define LABEL_1_14 13
#define LABEL_1_7 15
#define LABEL_1_11 17
#define LABEL_1_17 19
#define ENVIRONMENT_LABEL_1_3 42
#define DEBUGGING_LABEL_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_19 21
#define EXECUTE_CACHE_1_18 23
#define EXECUTE_CACHE_1_16 25
#define EXECUTE_CACHE_1_15 27
#define EXECUTE_CACHE_1_13 29
#define EXECUTE_CACHE_1_10 31
#define EXECUTE_CACHE_1_8 33
#define FREE_REFERENCE_1_2 36
#define FREE_REFERENCE_1_1 37
#define FREE_REFERENCE_1_0 38
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_1_4);
      goto merge_register_maps_6;

    case 1:
      current_block = (Rpc - LABEL_1_9);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_register_maps_12)
DEFLABEL (merge_register_maps_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;
  Wrd10 = Wrd14;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd11.pObj));

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_20;
  Wrd15 = Wrd19;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd16.pObj));

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_13)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_10 9
#define LABEL_2_7 11
#define LABEL_2_12 13
#define LABEL_2_13 15
#define LABEL_2_8 17
#define LABEL_2_9 19
#define LABEL_2_19 21
#define LABEL_2_14 23
#define LABEL_2_15 25
#define TAG_2_16 11
#define LABEL_2_20 27
#define LABEL_2_21 29
#define LABEL_2_23 31
#define LABEL_2_22 33
#define LABEL_2_25 35
#define ENVIRONMENT_LABEL_2_3 62
#define DEBUGGING_LABEL_2_2 61
#define OBJECT_2_10 60
#define OBJECT_2_9 59
#define OBJECT_2_8 58
#define OBJECT_2_7 57
#define OBJECT_2_6 56
#define OBJECT_2_5 55
#define OBJECT_2_4 54
#define OBJECT_2_3 53
#define OBJECT_2_2 52
#define OBJECT_2_1 51
#define OBJECT_2_0 50
#define EXECUTE_CACHE_2_26 37
#define EXECUTE_CACHE_2_24 39
#define EXECUTE_CACHE_2_18 41
#define EXECUTE_CACHE_2_17 43
#define EXECUTE_CACHE_2_11 45
#define FREE_REFERENCE_2_1 48
#define FREE_REFERENCE_2_0 49
#define FREE_REFERENCES_LABEL_2_0 36
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_2_4);
      goto eliminate_unlikely_aliasesB_20;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_2_15);
      goto lambda_33;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_2_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eliminate_unlikely_aliasesB_32)
DEFLABEL (eliminate_unlikely_aliasesB_20)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_45;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_45;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_44)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_43;
  Wrd47 = Wrd51;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;
  Wrd5 = Wrd9;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_39;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_39;
  if (! ((Wrd5.Obj) == Rvl))
    goto label_37;

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_2_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_15])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  (Wrd30.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  ((Wrd29.pObj) [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_35)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_2_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_38;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_38;
  (Wrd34.Obj) = (current_block [OBJECT_2_3]);
  ((Wrd38.pObj) [2]) = (Wrd34.Obj);
  goto label_36;

DEFLABEL (label_38)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_2_2]);
  (Wrd45.Obj) = (current_block [OBJECT_2_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd48.pObj));

DEFLABEL (label_24)
  (Wrd47.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_2_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_2_15);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_56)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_55;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_55;
  if ((Wrd5.Obj) == (Wrd17.Obj))
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_54;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (label_51)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  ((Wrd16.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_2_10]);

DEFLABEL (label_50)
DEFLABEL (label_52)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_9 7
#define LABEL_3_12 9
#define LABEL_3_7 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_19 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define TAG_3_17 9
#define LABEL_3_22 23
#define LABEL_3_20 25
#define TAG_3_21 11
#define LABEL_3_24 27
#define LABEL_3_23 29
#define LABEL_3_27 31
#define LABEL_3_28 33
#define LABEL_3_26 35
#define ENVIRONMENT_LABEL_3_3 61
#define DEBUGGING_LABEL_3_2 60
#define OBJECT_3_7 59
#define OBJECT_3_6 58
#define OBJECT_3_5 57
#define OBJECT_3_4 56
#define OBJECT_3_3 55
#define OBJECT_3_2 54
#define OBJECT_3_1 53
#define OBJECT_3_0 52
#define EXECUTE_CACHE_3_29 37
#define EXECUTE_CACHE_3_25 39
#define EXECUTE_CACHE_3_18 41
#define EXECUTE_CACHE_3_14 43
#define EXECUTE_CACHE_3_13 45
#define EXECUTE_CACHE_3_8 47
#define FREE_REFERENCE_3_1 50
#define FREE_REFERENCE_3_0 51
#define FREE_REFERENCES_LABEL_3_0 36
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_3_4);
      goto eliminate_conflicting_aliasesB_19;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_3_19);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_31;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_3_24);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_3_27);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_3_28);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eliminate_conflicting_aliasesB_29)
DEFLABEL (eliminate_conflicting_aliasesB_19)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_36;
  Wrd21 = Wrd25;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_20])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  ((Wrd13.pObj) [4]) = Rvl;
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_19])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd22.pObj));

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_16);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_45;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd20.uLng) == 26)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_40)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_39;
  if ((Wrd8.Obj) == (Wrd17.Obj))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_3_2]);

DEFLABEL (label_41)
DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_3_20);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  if (! ((Wrd5.Obj) == (Wrd8.Obj)))
    goto label_46;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_52;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_52;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_26);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_48;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 3);

DEFLABEL (label_48)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_47;
  ((Wrd15.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_3_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define TAG_4_7 2
#define LABEL_4_11 9
#define LABEL_4_14 11
#define LABEL_4_9 13
#define LABEL_4_15 15
#define LABEL_4_16 17
#define LABEL_4_12 19
#define TAG_4_13 8
#define LABEL_4_17 21
#define LABEL_4_19 23
#define LABEL_4_18 25
#define LABEL_4_21 27
#define LABEL_4_22 29
#define ENVIRONMENT_LABEL_4_3 47
#define DEBUGGING_LABEL_4_2 46
#define OBJECT_4_8 45
#define OBJECT_4_7 44
#define OBJECT_4_6 43
#define OBJECT_4_5 42
#define OBJECT_4_4 41
#define OBJECT_4_3 40
#define OBJECT_4_2 39
#define OBJECT_4_1 38
#define OBJECT_4_0 37
#define EXECUTE_CACHE_4_20 31
#define EXECUTE_CACHE_4_10 33
#define EXECUTE_CACHE_4_8 35
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto conflicting_aliases_23;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_18;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_35;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_4_14);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_36;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_4_21);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_4_22);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (conflicting_aliases_34)
DEFLABEL (conflicting_aliases_23)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_6])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_4_6);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_12])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_39;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_39;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_38)
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_39)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_4_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_26)
  (Wrd30.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (lambda_37)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_4_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_47)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_45)
  if ((Wrd14.Obj) == (current_block [OBJECT_4_0]))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_42;

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_4_5]);

DEFLABEL (label_42)
DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_28)
  (Wrd14.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_4_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_58;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_57)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd18.pObj) [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_56;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Rsp [2]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_50)
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_49;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [1]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 2);

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_54;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_53)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [1]) = (Wrd46.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [2]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  ((Wrd57.pObj) [0]) = (Wrd63.Obj);
  Rvl = (Wrd58.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_32)
  (Wrd29.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define TAG_5_7 2
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_10 13
#define LABEL_5_14 15
#define LABEL_5_15 17
#define LABEL_5_12 19
#define TAG_5_13 8
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define OBJECT_5_5 28
#define OBJECT_5_4 27
#define OBJECT_5_3 26
#define OBJECT_5_2 25
#define OBJECT_5_1 24
#define OBJECT_5_0 23
#define EXECUTE_CACHE_5_8 21
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_5_4);
      goto map__weighted_entries_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map__weighted_entries_17)
DEFLABEL (map__weighted_entries_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_20)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_6])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [0]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_5_6);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_32;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd41.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_24)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_22;

DEFLABEL (label_23)
  (Wrd9.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
DEFLABEL (label_31)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_30;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_12])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  ((Wrd31.pObj) [2]) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_25)
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

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_5_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_5_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_5_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_5_1]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_6 9
#define LABEL_6_13 11
#define LABEL_6_14 13
#define LABEL_6_9 15
#define TAG_6_10 6
#define LABEL_6_16 17
#define LABEL_6_12 19
#define LABEL_6_21 21
#define LABEL_6_22 23
#define LABEL_6_18 25
#define LABEL_6_25 27
#define LABEL_6_26 29
#define LABEL_6_19 31
#define LABEL_6_27 33
#define LABEL_6_28 35
#define LABEL_6_29 37
#define LABEL_6_30 39
#define LABEL_6_20 41
#define LABEL_6_31 43
#define LABEL_6_24 45
#define LABEL_6_33 47
#define LABEL_6_23 49
#define LABEL_6_34 51
#define ENVIRONMENT_LABEL_6_3 71
#define DEBUGGING_LABEL_6_2 70
#define OBJECT_6_6 69
#define OBJECT_6_5 68
#define OBJECT_6_4 67
#define OBJECT_6_3 66
#define OBJECT_6_2 65
#define OBJECT_6_1 64
#define OBJECT_6_0 63
#define EXECUTE_CACHE_6_32 53
#define EXECUTE_CACHE_6_17 55
#define EXECUTE_CACHE_6_15 57
#define EXECUTE_CACHE_6_11 59
#define EXECUTE_CACHE_6_7 61
#define FREE_REFERENCES_LABEL_6_0 52
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto add_weighted_entries_25;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_5;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_45;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_6_21);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_6_22);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_19;

    case 12:
      current_block = (Rpc - LABEL_6_25);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_6_26);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_6_19);
      goto lambda_18;

    case 15:
      current_block = (Rpc - LABEL_6_27);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_6_28);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_6_29);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_6_30);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_6_20);
      goto lambda_13;

    case 20:
      current_block = (Rpc - LABEL_6_31);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_6_33);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_6_23);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_6_34);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_weighted_entries_43)
DEFLABEL (add_weighted_entries_25)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_44)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_6_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd27.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (lambda_46)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_68;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_68;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_66;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_66;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_64;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_64;
  (Wrd14.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_63)
  (Wrd37.Obj) = (Rsp [5]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_62;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_62;
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_60;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_60;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_59)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_58;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_58;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_55;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_55;
  (Wrd34.Obj) = ((Wrd40.pObj) [4]);

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_53)
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_52;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_51)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd23.Obj) = (* (Rsp++));
  (Wrd30.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd26.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_6_4]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_41)
  (Wrd34.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_58)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.Obj) = (current_block [OBJECT_6_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Obj) = (current_block [OBJECT_6_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.Obj) = (current_block [OBJECT_6_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_6_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_6_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_6_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_23);
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_70;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_70;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (label_70)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_30)
  (Wrd8.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_47)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_6_19);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_78;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_77)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_76;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_75)
  (Wrd23.Obj) = (* (Rsp++));
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_74;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_74;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd31.Lng) = ((Wrd32.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_74;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_73)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_72;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_71)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_38)
  (Wrd35.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_36)
  (Wrd14.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (lambda_48)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_6_20);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_80;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_79)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (label_80)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_79;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_12 13
#define LABEL_7_8 15
#define LABEL_7_13 17
#define LABEL_7_16 19
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_15 21
#define EXECUTE_CACHE_7_14 23
#define EXECUTE_CACHE_7_9 25
#define EXECUTE_CACHE_7_6 27
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_7_4);
      goto merge_entries_15;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_entries_20)
DEFLABEL (merge_entries_15)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_7_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_0])))
    goto label_22;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_22)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_24)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [5]) = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_13;

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (Wrd9.Obj) = (Rsp [5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_13;

DEFLABEL (label_25)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

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
mermap_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_9 15
#define LABEL_9_14 17
#define LABEL_9_15 19
#define LABEL_9_16 21
#define LABEL_9_17 23
#define LABEL_9_18 25
#define LABEL_9_19 27
#define LABEL_9_20 29
#define LABEL_9_21 31
#define LABEL_9_7 33
#define LABEL_9_22 35
#define LABEL_9_26 37
#define LABEL_9_24 39
#define ENVIRONMENT_LABEL_9_3 62
#define DEBUGGING_LABEL_9_2 61
#define OBJECT_9_8 60
#define OBJECT_9_7 59
#define OBJECT_9_6 58
#define OBJECT_9_5 57
#define OBJECT_9_4 56
#define OBJECT_9_3 55
#define OBJECT_9_2 54
#define OBJECT_9_1 53
#define OBJECT_9_0 52
#define EXECUTE_CACHE_9_25 41
#define EXECUTE_CACHE_9_23 43
#define EXECUTE_CACHE_9_13 45
#define EXECUTE_CACHE_9_8 47
#define FREE_REFERENCE_9_1 50
#define FREE_REFERENCE_9_0 51
#define FREE_REFERENCES_LABEL_9_0 40
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mermap_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd107;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto weighted_entries__map_23;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto loop_21;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_9_17);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_9_18);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_9_19);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_9_20);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_9_21);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_9_26);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (weighted_entries__map_39)
DEFLABEL (weighted_entries__map_23)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_42;
  Wrd8 = Wrd12;

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd8.Obj);
  goto loop_21;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_41;

DEFLABEL (loop_40)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_9_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_9_0])))
    goto label_43;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_70;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_69)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_68;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_68;
  (Wrd20.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_67)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_66;
  Wrd32 = Wrd36;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_9_0]))
    goto label_62;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_61;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_60)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_59;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_59;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_58)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_57;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd34.Lng) > 0)
    goto label_45;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  (Wrd36.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_44)
DEFLABEL (label_56)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_55;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_54)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_53;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd52.Lng))))
    goto label_53;
  (Wrd47.Obj) = ((Wrd50.pObj) [4]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_52)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_51;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_50)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_49;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd74.Lng))))
    goto label_49;
  (Wrd68.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_48)
  (Wrd81.Obj) = (* (Rsp++));
  (Wrd82.Obj) = (* (Rsp++));
  (Wrd88.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd89.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd85.pObj) = (& (Rhp [-5]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd85.pObj)));
  (Wrd93.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (Rsp [2]) = (Wrd90.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd98.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd98.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_22);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_47;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_47)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_37)
  (Wrd6.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd77.Obj) = (current_block [OBJECT_9_8]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_35)
  (Wrd68.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_34)
  (Wrd59.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd55.Obj) = (current_block [OBJECT_9_7]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_32)
  (Wrd37.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd25.Obj) = (current_block [OBJECT_9_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_64;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd99.Obj) = ((Wrd101.pObj) [1]);

DEFLABEL (label_63)
  (Rsp [1]) = (Wrd99.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_64)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_36)
  (Wrd99.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_12])), (Wrd33.pObj));

DEFLABEL (label_28)
  (Wrd32.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd28.Obj) = (current_block [OBJECT_9_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_26)
  (Wrd10.Obj) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define ENVIRONMENT_LABEL_3 34
#define DEBUGGING_LABEL_2 33
#define PURIFICATION_ROOT 32
#define OBJECT_7 31
#define OBJECT_6 30
#define OBJECT_5 29
#define OBJECT_4 28
#define OBJECT_3 27
#define OBJECT_2 26
#define OBJECT_1 25
#define OBJECT_0 24
#define EXECUTE_CACHE_9 17
#define FREE_REFERENCE_0 20
#define GLOBAL_EXECUTE_CACHE_5 22
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
mermap_so_17a064133ce263ed (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
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
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	1,
	1,
	1,
	1,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
      goto label_7;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_7)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_mermap_so_17a064133ce263ed [9] =
  {
    { "mermap_so_code_1", 9, mermap_so_code_1 },
    { "mermap_so_code_2", 17, mermap_so_code_2 },
    { "mermap_so_code_3", 17, mermap_so_code_3 },
    { "mermap_so_code_4", 14, mermap_so_code_4 },
    { "mermap_so_code_5", 9, mermap_so_code_5 },
    { "mermap_so_code_6", 25, mermap_so_code_6 },
    { "mermap_so_code_7", 9, mermap_so_code_7 },
    { "mermap_so_code_8", 1, mermap_so_code_8 },
    { "mermap_so_code_9", 19, mermap_so_code_9 }
  };

int
decl_mermap_so_17a064133ce263ed (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_mermap_so_17a064133ce263ed);
  return (0);
}

DECLARE_COMPILED_CODE ("mermap.so", 7, decl_mermap_so_17a064133ce263ed, mermap_so_17a064133ce263ed)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_mermap_so_data_17a064133ce263ed [1983] =
  "\x50\x18\x9f\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x81\x08\x0d\xb9"
  "\x0d\xba\x0d\xbb\x24\x28\x0d\xbc\x28\xb4\x28\x0d\xbd\x28\x0d\x28"
  "\xb1\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x82\x88\x07\xc1\x1c\xc1\x1c\x1d\xc2\x1c\x08\xc3\x1c\x80\x81\xc2"
  "\x1c\x82\x0d\x1c\x0d\x1c\x24\x28\xb4\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\x1b\x82\x1b"
  "\x1d\x07\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\xb4\x28\xb5\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\xc2\x1d\x1b\x07\x1b\x82\x1b\x80\x08\x28\xb5\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x85\x88\x83\x82\x80\x1b\x81\x1b\x28\xb4\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x1b\x83\x82\x81\x1b\x80\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80\x83\x07\x81\x1b\x1b\x82"
  "\x1b\x08\x0d\x0d\x24\x28\x0d\x28\xb4\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\xc3\x1b\x2a"
  "\xb7\x1b\x2a\x1b\xb3\xb1\x1b\xb6\xb2\x0d\x9e\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x28\x0d\x26\x1b\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x63"
  "\x6b\x2f\x6d\x65\x72\x6d\x61\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x16\x6d\x61\x70\x2d\x3e\x77\x65\x69\x67\x68\x74\x65\x64"
  "\x2d\x65\x6e\x74\x72\x69\x65\x73\x1c\x65\x6c\x69\x6d\x69\x6e\x61"
  "\x74\x65\x2d\x75\x6e\x6c\x69\x6b\x65\x6c\x79\x2d\x61\x6c\x69\x61"
  "\x73\x65\x73\x21\x15\x61\x64\x64\x2d\x77\x65\x69\x67\x68\x74\x65"
  "\x64\x2d\x65\x6e\x74\x72\x69\x65\x73\x04\x04\x04\x6d\x61\x70\x05"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x05\x07\x72\x65\x64\x75"
  "\x63\x65\x04\x03\x1f\x65\x6c\x69\x6d\x69\x6e\x61\x74\x65\x2d\x63"
  "\x6f\x6e\x66\x6c\x69\x63\x74\x69\x6e\x67\x2d\x61\x6c\x69\x61\x73"
  "\x65\x73\x21\x03\x16\x77\x65\x69\x67\x68\x74\x65\x64\x2d\x65\x6e"
  "\x74\x72\x69\x65\x73\x2d\x3e\x6d\x61\x70\x08\x10\x14\x81\x83\x02"
  "\x0f\x12\x81\x83\x02\x0e\x10\x83\x04\x0d\x0e\x81\x8b\x02\x0c\x0c"
  "\x81\x87\x02\x0b\x0a\x81\x87\x02\x0a\x08\x81\x85\x02\x09\x06\x81"
  "\x8d\x02\x08\x04\x84\x06\x13\x2b\x09\x02\x04\x63\x61\x72\x0a\x04"
  "\x63\x64\x72\x0b\x02\x06\x61\x70\x70\x6c\x79\x0c\x0c\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x0e\x04\x63\x64\x72\x0f\x04\x6d\x61\x78\x10\x03"
  "\x04\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x10\x03\x0e\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x04\x05\x6d\x65\x6d"
  "\x71\x06\x21\x24\x81\x87\x02\x20\x22\x81\x85\x02\x1f\x20\x81\x87"
  "\x02\x1e\x1e\x81\x85\x02\x1d\x1c\x81\x85\x02\x1c\x1a\x81\x85\x02"
  "\x1b\x18\x81\x89\x02\x1a\x16\x81\x8d\x02\x19\x14\x81\x8b\x02\x18"
  "\x12\x81\x89\x02\x17\x10\x81\x89\x02\x16\x0e\x81\x89\x02\x15\x0c"
  "\x81\x87\x02\x14\x0a\x81\x8f\x02\x13\x08\x81\x85\x02\x12\x06\x81"
  "\x83\x02\x11\x04\x83\x04\x23\x3f\x11\x02\x0d\x0e\x0a\x02\x0c\x0b"
  "\x0f\x10\x03\x03\x14\x63\x6f\x6e\x66\x6c\x69\x63\x74\x69\x6e\x67"
  "\x2d\x61\x6c\x69\x61\x73\x65\x73\x10\x04\x04\x04\x15\x6c\x69\x73"
  "\x74\x2d\x73\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x0f\x04\x14\x66\x69\x6e\x64\x2d\x77\x65\x69\x67\x68\x74\x65"
  "\x64\x2d\x65\x6e\x74\x72\x79\x0d\x04\x0a\x64\x65\x6c\x2d\x61\x73"
  "\x73\x76\x21\x07\x32\x24\x81\x87\x02\x31\x22\x81\x8b\x02\x30\x20"
  "\x81\x89\x02\x2f\x1e\x81\x85\x02\x2e\x1c\x81\x89\x02\x2d\x1a\x81"
  "\x85\x02\x2c\x18\x81\x87\x02\x2b\x16\x81\x85\x02\x2a\x14\x81\x89"
  "\x02\x29\x12\x81\x8b\x02\x28\x10\x81\x89\x02\x27\x0e\x81\x87\x02"
  "\x26\x0c\x81\x85\x02\x25\x0a\x81\x8d\x02\x24\x08\x81\x85\x02\x23"
  "\x06\x81\x85\x02\x22\x04\x83\x04\x23\x3e\x0c\x02\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x02\x0a\x0b\x0e\x04\x04\x18\x6c\x69\x73\x74"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x04\x05\x61\x73\x73\x76\x04\x40\x1e\x81\x89\x02\x3f"
  "\x1c\x81\x89\x02\x3e\x1a\x81\x87\x02\x3d\x18\x81\x8b\x02\x3c\x16"
  "\x81\x85\x02\x3b\x14\x81\x85\x02\x3a\x12\x81\x83\x02\x39\x10\x81"
  "\x83\x02\x38\x0e\x83\x04\x37\x0c\x81\x87\x02\x36\x0a\x81\x85\x02"
  "\x35\x08\x81\x85\x02\x34\x06\x81\x85\x02\x33\x04\x83\x04\x1d\x30"
  "\x02\x0e\x0a\x04\x02\x49\x14\x81\x85\x02\x48\x12\x81\x8b\x02\x47"
  "\x10\x81\x89\x02\x46\x0e\x81\x87\x02\x45\x0c\x81\x89\x02\x44\x0a"
  "\x81\x85\x02\x43\x08\x81\x85\x02\x42\x06\x81\x85\x02\x41\x04\x84"
  "\x06\x13\x1f\x12\x02\x0a\x0b\x0e\x06\x0e\x6d\x65\x72\x67\x65\x2d"
  "\x65\x6e\x74\x72\x69\x65\x73\x13\x04\x0f\x04\x04\x6d\x69\x6e\x04"
  "\x05\x65\x71\x76\x3f\x0f\x04\x05\x61\x73\x73\x71\x06\x62\x34\x81"
  "\x8b\x02\x61\x32\x81\x89\x02\x60\x30\x81\x8b\x02\x5f\x2e\x81\x8b"
  "\x02\x5e\x2c\x81\x85\x02\x5d\x2a\x84\x06\x5c\x28\x81\x87\x02\x5b"
  "\x26\x81\x85\x02\x5a\x24\x81\x87\x02\x59\x22\x81\x85\x02\x58\x20"
  "\x84\x06\x57\x1e\x81\x8f\x02\x56\x1c\x81\x8d\x02\x55\x1a\x81\x87"
  "\x02\x54\x18\x81\x8f\x02\x53\x16\x81\x8d\x02\x52\x14\x81\x85\x02"
  "\x51\x12\x81\x85\x02\x50\x10\x81\x85\x02\x4f\x0e\x81\x89\x02\x4e"
  "\x0c\x81\x87\x02\x4d\x0a\x84\x06\x4c\x08\x81\x85\x02\x4b\x06\x84"
  "\x06\x4a\x04\x84\x06\x33\x48\x14\x02\x08\x0a\x0b\x03\x0a\x6c\x69"
  "\x73\x74\x2d\x63\x6f\x70\x79\x03\x09\x72\x65\x76\x65\x72\x73\x65"
  "\x21\x15\x04\x06\x64\x65\x6c\x71\x21\x04\x08\x61\x70\x70\x65\x6e"
  "\x64\x21\x05\x6b\x14\x81\x95\x02\x6a\x12\x81\x95\x02\x69\x10\x81"
  "\x8f\x02\x68\x0e\x81\x93\x02\x67\x0c\x81\x91\x02\x66\x0a\x81\x8f"
  "\x02\x65\x08\x81\x8f\x02\x64\x06\x81\x8b\x02\x63\x04\x86\x0a\x13"
  "\x22\x16\x02\x09\x0e\x6c\x04\x83\x04\x03\x17\x02\x0a\x0b\x0e\x0a"
  "\x1c\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x2d\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x04\x63\x61\x72"
  "\x03\x03\x17\x73\x6f\x72\x74\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x04\x04\x13\x65\x71\x76\x2d"
  "\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x03\x15"
  "\x05\x7f\x28\x81\x89\x02\x7e\x26\x81\x89\x02\x7d\x24\x81\x89\x02"
  "\x7c\x22\x81\x87\x02\x7b\x20\x81\x8d\x02\x7a\x1e\x81\x8d\x02\x79"
  "\x1c\x81\x8b\x02\x78\x1a\x81\x8b\x02\x77\x18\x81\x89\x02\x76\x16"
  "\x81\x89\x02\x75\x14\x81\x89\x02\x74\x12\x81\x89\x02\x73\x10\x81"
  "\x87\x02\x72\x0e\x81\x8b\x02\x71\x0c\x81\x89\x02\x70\x0a\x81\x89"
  "\x02\x6f\x08\x81\x87\x02\x6e\x06\x81\x87\x02\x6d\x04\x83\x04\x27"
  "\x3f\x15\x0a\x0e\x0e\x0d\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x15\x04\x17\x04\x13\x10\x14\x6d\x65"
  "\x72\x67\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70"
  "\x73\x16\x04\x14\x04\x12\x04\x04\x0c\x04\x11\x04\x09\x04\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x0f\x02\x04\x16\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x07\x10\x80\x80\x04\x06"
  "\x0e\x81\x81\x02\x05\x0c\x81\x81\x02\x04\x0a\x81\x85\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\x0f\x23";

SCHEME_OBJECT *
mermap_so_data_17a064133ce263ed (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_mermap_so_data_17a064133ce263ed [0]))), (sizeof (prog_mermap_so_data_17a064133ce263ed)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("mermap.so", mermap_so_data_17a064133ce263ed)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("mermap.so", "b139ecebb933b9ec")
