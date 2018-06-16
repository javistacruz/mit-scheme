/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:13-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_10 13
#define LABEL_1_14 15
#define LABEL_1_16 17
#define LABEL_1_15 19
#define LABEL_1_20 21
#define LABEL_1_12 23
#define TAG_1_13 10
#define LABEL_1_21 25
#define LABEL_1_18 27
#define TAG_1_19 12
#define LABEL_1_22 29
#define LABEL_1_23 31
#define ENVIRONMENT_LABEL_1_3 43
#define DEBUGGING_LABEL_1_2 42
#define OBJECT_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_17 33
#define EXECUTE_CACHE_1_8 35
#define EXECUTE_CACHE_1_6 37
#define FREE_REFERENCES_LABEL_1_0 32
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_1_4);
      goto three_way_sort_20;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto loop_18;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_32;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_33;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_1_23);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (three_way_sort_30)
DEFLABEL (three_way_sort_20)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_18;

DEFLABEL (loop_31)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_34;
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd24.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 1))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_36)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_12])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_41;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_41)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_24)
  (Wrd27.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_1_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [0]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_49;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_48)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_47;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_46)
  (Wrd35.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd42.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [2]);
  (Rsp [0]) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_47)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_28)
  (Wrd20.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define LABEL_2_8 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_6 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define TAG_2_16 10
#define ENVIRONMENT_LABEL_2_3 31
#define DEBUGGING_LABEL_2_2 30
#define OBJECT_2_2 29
#define OBJECT_2_1 28
#define OBJECT_2_0 27
#define EXECUTE_CACHE_2_7 25
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto discriminate_items_16;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_14;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discriminate_items_24)
DEFLABEL (discriminate_items_16)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_14;

DEFLABEL (loop_25)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_0])))
    goto label_27;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_15])));
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

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_30)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_14;

DEFLABEL (label_29)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_36;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_34;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd42.Obj);
  goto loop_14;

DEFLABEL (label_34)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_22)
  (Wrd42.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_21)
  (Wrd29.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_2_15);

DEFLABEL (lambda_12)
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

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_13 11
#define LABEL_3_14 13
#define LABEL_3_8 15
#define LABEL_3_12 17
#define ENVIRONMENT_LABEL_3_3 42
#define DEBUGGING_LABEL_3_2 41
#define OBJECT_3_6 40
#define OBJECT_3_5 39
#define OBJECT_3_4 38
#define OBJECT_3_3 37
#define OBJECT_3_2 36
#define OBJECT_3_1 35
#define OBJECT_3_0 34
#define EXECUTE_CACHE_3_17 19
#define EXECUTE_CACHE_3_16 21
#define EXECUTE_CACHE_3_15 23
#define EXECUTE_CACHE_3_11 25
#define EXECUTE_CACHE_3_10 27
#define EXECUTE_CACHE_3_9 29
#define FREE_REFERENCE_3_1 32
#define FREE_REFERENCE_3_0 33
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd38;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
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
      goto generate_label_10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_label_15)
DEFLABEL (generate_label_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd27.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (Rsp [0]) = (Wrd26.Obj);
  Wrd6 = Wrd25;
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_3_0])))
    goto label_25;
  (Wrd23.Obj) = (current_block [OBJECT_3_1]);
  ((Wrd6.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == (current_block [OBJECT_3_3]))
    goto label_24;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_23;
  Wrd14 = Wrd18;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  if ((Wrd22.Obj) == (Wrd14.Obj))
    goto label_21;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_20;
  Wrd24 = Wrd28;

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  if ((Wrd32.Obj) == (Wrd24.Obj))
    goto label_17;
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_16;

DEFLABEL (label_17)
  (Wrd36.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_16)
DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd25.pObj));

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd37.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_18;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd15.pObj));

DEFLABEL (label_12)
  (Wrd14.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd38.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define FREE_REFERENCE_4_0 13
#define FREE_ASSIGNMENT_4_0 15
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_label_number_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_label_number_9)
DEFLABEL (generate_label_number_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_16;
  Wrd12 = Wrd16;

DEFLABEL (label_15)
  Wrd11 = Wrd12;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_14;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_14;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_13)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd34.Obj) = ((Wrd26.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd26.pObj) [0]) = (Wrd22.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_8])), (Wrd26.pObj), (Wrd22.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_14)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_10 21
#define LABEL_5_14 23
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_3 27
#define OBJECT_5_2 26
#define OBJECT_5_1 25
#define OBJECT_5_0 24
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto list_filter_indices_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_5_14);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_filter_indices_24)
DEFLABEL (list_filter_indices_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_11;

DEFLABEL (loop_25)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_5_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_26;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_40)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_39;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_39;
  if ((Wrd7.Obj) == (Wrd17.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_31;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_29;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd43.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_29;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd38.Obj);

DEFLABEL (label_27)
  goto loop_11;

DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (Wrd38.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_38;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd53.Lng) = ((Wrd55.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd53.Lng)))
    goto label_38;
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_37)
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_36;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [1]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_35)
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_34;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (* (--Rsp)) = (Wrd68.Obj);
  goto label_27;

DEFLABEL (label_34)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_36)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_41)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_40;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_43;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_42)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define TAG_6_11 5
#define ENVIRONMENT_LABEL_6_3 25
#define DEBUGGING_LABEL_6_2 24
#define OBJECT_6_4 23
#define OBJECT_6_3 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_12 15
#define EXECUTE_CACHE_6_6 17
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd46;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto all_eqP_9;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_eqP_15)
DEFLABEL (all_eqP_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_0])))
    goto label_24;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_22)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_6_0])))
    goto label_17;
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_21;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_20)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_10])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [0]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_19)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_6_10);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (Wrd9.Obj))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_25;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_3]);

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_7 11
#define LABEL_7_11 13
#define LABEL_7_16 15
#define LABEL_7_14 17
#define TAG_7_15 7
#define LABEL_7_12 19
#define TAG_7_13 8
#define LABEL_7_10 21
#define LABEL_7_18 23
#define ENVIRONMENT_LABEL_7_3 35
#define DEBUGGING_LABEL_7_2 34
#define OBJECT_7_4 33
#define OBJECT_7_3 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_17 25
#define EXECUTE_CACHE_7_6 27
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto all_eq_mapP_15;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_7_10);
      goto lambda_10;

    case 10:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_eq_mapP_21)
DEFLABEL (all_eq_mapP_15)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_0])))
    goto label_33;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_0])))
    goto label_26;

DEFLABEL (label_25)
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_12])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_14])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_28;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_7_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
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

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  if ((Wrd9.Obj) == Rvl)
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_7_4]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_7_12);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_24)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_7_10);
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

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 19
#define DEBUGGING_LABEL_8_2 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_6 13
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      goto eq_set_union__7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eq_set_union__12)
DEFLABEL (eq_set_union__7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_0])))
    goto label_14;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_18;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_5;

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_5 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_9 15
#define ENVIRONMENT_LABEL_9_3 28
#define DEBUGGING_LABEL_9_2 27
#define OBJECT_9_5 26
#define OBJECT_9_4 25
#define OBJECT_9_3 24
#define OBJECT_9_2 23
#define OBJECT_9_1 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_12 17
#define EXECUTE_CACHE_9_8 19
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_24)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_23;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_21;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_20)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_18)
  (Wrd37.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_9_5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define OBJECT_10_5 16
#define OBJECT_10_4 15
#define OBJECT_10_3 14
#define OBJECT_10_2 13
#define OBJECT_10_1 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd28;
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
      goto scode_procedure_type_code_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_procedure_type_code_7)
DEFLABEL (scode_procedure_type_code_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd28.Obj) = (current_block [OBJECT_10_0]);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd31.Lng))))
    goto label_14;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_13;

DEFLABEL (label_12)
  (Wrd16.Obj) = (current_block [OBJECT_10_2]);
  (Wrd19.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_9;

DEFLABEL (label_8)
  (Wrd13.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_10_4]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_10_5]);
  goto label_10;

DEFLABEL (label_14)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto primitive_procedureP_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_procedureP_5)
DEFLABEL (primitive_procedureP_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd6;
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
      goto primitive_arity_correctP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_arity_correctP_9)
DEFLABEL (primitive_arity_correctP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_18;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_17;
  if (! (Rvl == (current_block [OBJECT_12_2])))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_12;
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_12_0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd23.Obj) = (current_block [OBJECT_12_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_19;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_19)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd21.Lng) > 0)
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_12_0]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_4 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_14 23
#define ENVIRONMENT_LABEL_13_3 37
#define DEBUGGING_LABEL_13_2 36
#define OBJECT_13_8 35
#define OBJECT_13_7 34
#define OBJECT_13_6 33
#define OBJECT_13_5 32
#define OBJECT_13_4 31
#define OBJECT_13_3 30
#define OBJECT_13_2 29
#define OBJECT_13_1 28
#define OBJECT_13_0 27
#define FREE_REFERENCE_13_1 25
#define FREE_REFERENCE_13_0 26
#define FREE_REFERENCES_LABEL_13_0 24
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd20;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd136;
  machine_word Wrd133;
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_13_4);
      goto non_pointer_objectP_9;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto label_12;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_pointer_objectP_21)
DEFLABEL (non_pointer_objectP_9)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd133.Obj) = (current_block [OBJECT_13_0]);
  (Wrd136.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd136.Lng))))
    goto label_50;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd133.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_13_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd123.Obj) = (current_block [OBJECT_13_2]);
  (Wrd126.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd126.Lng))))
    goto label_49;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd123.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_22;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 26)
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Wrd20.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd70.Obj) = (current_block [OBJECT_13_5]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd73.Lng))))
    goto label_34;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_28;

DEFLABEL (label_33)
  (Wrd60.Obj) = (current_block [OBJECT_13_6]);
  (Wrd63.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 50L) < ((unsigned long) (Wrd63.Lng))))
    goto label_32;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_28;

DEFLABEL (label_31)
  (Wrd50.Obj) = (current_block [OBJECT_13_7]);
  (Wrd53.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 45L) < ((unsigned long) (Wrd53.Lng))))
    goto label_30;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_28;

DEFLABEL (label_29)
  (Wrd36.Obj) = (current_block [OBJECT_13_8]);
  (Rsp [0]) = (Wrd36.Obj);
  (Wrd47.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 39L) < ((unsigned long) (Wrd47.Lng)))
    goto label_26;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_26)
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd39.Obj) == (Wrd41.Obj))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_13_3]);

DEFLABEL (label_27)
  goto label_24;

DEFLABEL (label_30)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (label_32)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_28;

DEFLABEL (label_34)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_28;

DEFLABEL (label_37)
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_47;
  Wrd81 = Wrd85;

DEFLABEL (label_46)
  Wrd80 = Wrd81;
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 26))
    goto label_45;
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_45;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if ((Wrd119.Lng) < (Wrd120.Lng))
    goto label_36;

DEFLABEL (label_44)
  (Wrd98.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd101.Obj) = ((Wrd98.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_43;
  Wrd97 = Wrd101;

DEFLABEL (label_42)
  Wrd96 = Wrd97;
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 26))
    goto label_41;
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd107.uLng) == 26))
    goto label_41;
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if ((Wrd114.Lng) < (Wrd115.Lng))
    goto label_39;
  (Wrd104.Obj) = (current_block [OBJECT_13_4]);
  goto label_38;

DEFLABEL (label_39)
  (Wrd104.Obj) = (current_block [OBJECT_13_3]);

DEFLABEL (label_38)
DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd104.Obj);
  goto label_35;

DEFLABEL (label_41)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  (Wrd104.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd98.pObj));

DEFLABEL (label_16)
  (Wrd97.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_36;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_8])), (Wrd82.pObj));

DEFLABEL (label_14)
  (Wrd81.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd128.Obj) = (Rsp [0]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_22;

DEFLABEL (label_50)
  (Wrd138.Obj) = (Rsp [0]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_8 7
#define LABEL_14_5 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_11 15
#define LABEL_14_12 17
#define LABEL_14_13 19
#define LABEL_14_14 21
#define LABEL_14_16 23
#define ENVIRONMENT_LABEL_14_3 42
#define DEBUGGING_LABEL_14_2 41
#define OBJECT_14_9 40
#define OBJECT_14_8 39
#define OBJECT_14_7 38
#define OBJECT_14_6 37
#define OBJECT_14_5 36
#define OBJECT_14_4 35
#define OBJECT_14_3 34
#define OBJECT_14_2 33
#define OBJECT_14_1 32
#define OBJECT_14_0 31
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_6 27
#define FREE_REFERENCE_14_0 30
#define FREE_REFERENCES_LABEL_14_0 24
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd80;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd121;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd35;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_14_4);
      goto object_immutableP_15;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_14_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_14_16);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_immutableP_24)
DEFLABEL (object_immutableP_15)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = Rvl;

DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_14_0]);
  (Wrd116.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd116.Lng))))
    goto label_56;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_49;

DEFLABEL (label_55)
  (Wrd103.Obj) = (current_block [OBJECT_14_2]);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd106.Lng))))
    goto label_54;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd103.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_49;

DEFLABEL (label_53)
  (Wrd93.Obj) = (current_block [OBJECT_14_3]);
  (Wrd96.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd96.Lng))))
    goto label_52;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_49;

DEFLABEL (label_51)
  (Wrd83.Obj) = (current_block [OBJECT_14_4]);
  (Wrd86.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd86.Lng))))
    goto label_50;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_49;

DEFLABEL (label_48)
  (Wrd29.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd39.Lng)))
    goto label_28;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_28)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_30;
  (Wrd35.Obj) = (current_block [OBJECT_14_7]);
  goto label_29;

DEFLABEL (label_30)
  (Wrd35.Obj) = (current_block [OBJECT_14_6]);

DEFLABEL (label_29)
DEFLABEL (label_47)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_46)
  (Rsp [0]) = (Wrd35.Obj);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (Wrd35.Obj);
  goto label_25;

DEFLABEL (label_31)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd72.Obj) = (current_block [OBJECT_14_8]);
  (Wrd75.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd75.Lng))))
    goto label_45;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.Obj) == (Wrd51.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd52.Obj) = (current_block [OBJECT_14_9]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd62.Lng))))
    goto label_27;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd55.Obj) == (Wrd57.Obj))
    goto label_33;
  (Wrd58.Obj) = (current_block [OBJECT_14_7]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd58.Obj) = (current_block [OBJECT_14_6]);

DEFLABEL (label_32)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd58.Obj);
  if (! ((Wrd58.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = Rvl;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [1]);
  if ((Wrd18.Obj) == (Wrd11.Obj))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_36;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_14_6]);

DEFLABEL (label_36)
  goto label_34;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_16])), (Wrd12.pObj));

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = (Wrd58.Obj);
  goto label_25;

DEFLABEL (label_44)
  (Wrd58.Obj) = (current_block [OBJECT_14_6]);
  Rsp = (& (Rsp [2]));
  goto label_41;

DEFLABEL (label_45)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_49)
  (Wrd35.Obj) = (current_block [OBJECT_14_6]);
  Rsp = (& (Rsp [2]));
  goto label_46;

DEFLABEL (label_50)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_52)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_49;

DEFLABEL (label_54)
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_49;

DEFLABEL (label_56)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_49;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd58.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Wrd35.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_15_4);
      goto boolean_valued_function_variableP_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_valued_function_variableP_4)
DEFLABEL (boolean_valued_function_variableP_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_16_4);
      goto constant_foldable_variableP_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_foldable_variableP_4)
DEFLABEL (constant_foldable_variableP_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCE_17_0 10
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto side_effect_free_variableP_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (side_effect_free_variableP_4)
DEFLABEL (side_effect_free_variableP_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_7 9
#define FREE_REFERENCE_18_0 12
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_18_4);
      goto variable_usual_definition_2;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_usual_definition_6)
DEFLABEL (variable_usual_definition_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_7)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCE_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_19_4);
      goto boolean_valued_function_primitiveP_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_valued_function_primitiveP_4)
DEFLABEL (boolean_valued_function_primitiveP_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCE_20_0 10
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_20_4);
      goto constant_foldable_primitiveP_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_foldable_primitiveP_4)
DEFLABEL (constant_foldable_primitiveP_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCE_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_21_4);
      goto side_effect_free_primitiveP_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (side_effect_free_primitiveP_4)
DEFLABEL (side_effect_free_primitiveP_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define OBJECT_22_0 10
#define FREE_REFERENCE_22_0 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
utils_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_22_4);
      goto careful_object_datum_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (careful_object_datum_7)
DEFLABEL (careful_object_datum_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd34.Lng) < 0))
    goto label_8;

DEFLABEL (label_14)
  (Wrd14.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_13;
  Wrd16 = Wrd20;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_10;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) + (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_10;
  Rvl = (LONG_TO_FIXNUM (Wrd27.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_6])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_14;

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
#define TAG_19 14
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_24 39
#define LABEL_35 41
#define LABEL_25 43
#define TAG_26 20
#define LABEL_37 45
#define LABEL_29 47
#define TAG_30 22
#define LABEL_27 49
#define TAG_28 23
#define LABEL_32 51
#define LABEL_33 53
#define TAG_34 25
#define LABEL_41 55
#define LABEL_43 57
#define LABEL_44 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_42 65
#define LABEL_45 67
#define LABEL_46 69
#define LABEL_47 71
#define LABEL_48 73
#define LABEL_49 75
#define LABEL_50 77
#define LABEL_51 79
#define LABEL_52 81
#define LABEL_53 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_56 89
#define LABEL_57 91
#define LABEL_58 93
#define LABEL_59 95
#define LABEL_60 97
#define LABEL_61 99
#define LABEL_62 101
#define LABEL_63 103
#define LABEL_64 105
#define LABEL_65 107
#define LABEL_66 109
#define LABEL_67 111
#define LABEL_70 113
#define LABEL_68 115
#define LABEL_73 117
#define LABEL_69 119
#define LABEL_77 121
#define LABEL_71 123
#define LABEL_82 125
#define LABEL_72 127
#define LABEL_74 129
#define LABEL_85 131
#define LABEL_75 133
#define LABEL_78 135
#define LABEL_80 137
#define LABEL_89 139
#define LABEL_90 141
#define LABEL_81 143
#define LABEL_83 145
#define LABEL_94 147
#define LABEL_95 149
#define LABEL_84 151
#define LABEL_87 153
#define LABEL_99 155
#define LABEL_100 157
#define LABEL_88 159
#define LABEL_92 161
#define LABEL_102 163
#define LABEL_103 165
#define LABEL_93 167
#define LABEL_97 169
#define LABEL_98 171
#define LABEL_101 173
#define LABEL_104 175
#define LABEL_105 177
#define LABEL_106 179
#define LABEL_107 181
#define LABEL_108 183
#define LABEL_109 185
#define LABEL_110 187
#define LABEL_111 189
#define LABEL_112 191
#define LABEL_113 193
#define LABEL_114 195
#define LABEL_115 197
#define ENVIRONMENT_LABEL_3 445
#define DEBUGGING_LABEL_2 444
#define PURIFICATION_ROOT 443
#define OBJECT_213 442
#define OBJECT_212 441
#define OBJECT_211 440
#define OBJECT_210 439
#define OBJECT_209 438
#define OBJECT_208 437
#define OBJECT_207 436
#define OBJECT_206 435
#define OBJECT_205 434
#define OBJECT_204 433
#define OBJECT_203 432
#define OBJECT_202 431
#define OBJECT_201 430
#define OBJECT_200 429
#define OBJECT_199 428
#define OBJECT_198 427
#define OBJECT_197 426
#define OBJECT_196 425
#define OBJECT_195 424
#define OBJECT_194 423
#define OBJECT_193 422
#define OBJECT_192 421
#define OBJECT_191 420
#define OBJECT_190 419
#define OBJECT_189 418
#define OBJECT_188 417
#define OBJECT_187 416
#define OBJECT_186 415
#define OBJECT_185 414
#define OBJECT_184 413
#define OBJECT_183 412
#define OBJECT_182 411
#define OBJECT_181 410
#define OBJECT_180 409
#define OBJECT_179 408
#define OBJECT_178 407
#define OBJECT_177 406
#define OBJECT_176 405
#define OBJECT_175 404
#define OBJECT_174 403
#define OBJECT_173 402
#define OBJECT_172 401
#define OBJECT_171 400
#define OBJECT_170 399
#define OBJECT_169 398
#define OBJECT_168 397
#define OBJECT_167 396
#define OBJECT_166 395
#define OBJECT_165 394
#define OBJECT_164 393
#define OBJECT_163 392
#define OBJECT_162 391
#define OBJECT_161 390
#define OBJECT_160 389
#define OBJECT_159 388
#define OBJECT_158 387
#define OBJECT_157 386
#define OBJECT_156 385
#define OBJECT_155 384
#define OBJECT_154 383
#define OBJECT_153 382
#define OBJECT_152 381
#define OBJECT_151 380
#define OBJECT_150 379
#define OBJECT_149 378
#define OBJECT_148 377
#define OBJECT_147 376
#define OBJECT_146 375
#define OBJECT_145 374
#define OBJECT_144 373
#define OBJECT_143 372
#define OBJECT_142 371
#define OBJECT_141 370
#define OBJECT_140 369
#define OBJECT_139 368
#define OBJECT_138 367
#define OBJECT_137 366
#define OBJECT_136 365
#define OBJECT_135 364
#define OBJECT_134 363
#define OBJECT_133 362
#define OBJECT_132 361
#define OBJECT_131 360
#define OBJECT_130 359
#define OBJECT_129 358
#define OBJECT_128 357
#define OBJECT_127 356
#define OBJECT_126 355
#define OBJECT_125 354
#define OBJECT_124 353
#define OBJECT_123 352
#define OBJECT_122 351
#define OBJECT_121 350
#define OBJECT_120 349
#define OBJECT_119 348
#define OBJECT_118 347
#define OBJECT_117 346
#define OBJECT_116 345
#define OBJECT_115 344
#define OBJECT_114 343
#define OBJECT_113 342
#define OBJECT_112 341
#define OBJECT_111 340
#define OBJECT_110 339
#define OBJECT_109 338
#define OBJECT_108 337
#define OBJECT_107 336
#define OBJECT_106 335
#define OBJECT_105 334
#define OBJECT_104 333
#define OBJECT_103 332
#define OBJECT_102 331
#define OBJECT_101 330
#define OBJECT_100 329
#define OBJECT_99 328
#define OBJECT_98 327
#define OBJECT_97 326
#define OBJECT_96 325
#define OBJECT_95 324
#define OBJECT_94 323
#define OBJECT_93 322
#define OBJECT_92 321
#define OBJECT_91 320
#define OBJECT_90 319
#define OBJECT_89 318
#define OBJECT_88 317
#define OBJECT_87 316
#define OBJECT_86 315
#define OBJECT_85 314
#define OBJECT_84 313
#define OBJECT_83 312
#define OBJECT_82 311
#define OBJECT_81 310
#define OBJECT_80 309
#define OBJECT_79 308
#define OBJECT_78 307
#define OBJECT_77 306
#define OBJECT_76 305
#define OBJECT_75 304
#define OBJECT_74 303
#define OBJECT_73 302
#define OBJECT_72 301
#define OBJECT_71 300
#define OBJECT_70 299
#define OBJECT_69 298
#define OBJECT_68 297
#define OBJECT_67 296
#define OBJECT_66 295
#define OBJECT_65 294
#define OBJECT_64 293
#define OBJECT_63 292
#define OBJECT_62 291
#define OBJECT_61 290
#define OBJECT_60 289
#define OBJECT_59 288
#define OBJECT_58 287
#define OBJECT_57 286
#define OBJECT_56 285
#define OBJECT_55 284
#define OBJECT_54 283
#define OBJECT_53 282
#define OBJECT_52 281
#define OBJECT_51 280
#define OBJECT_50 279
#define OBJECT_49 278
#define OBJECT_48 277
#define OBJECT_47 276
#define OBJECT_46 275
#define OBJECT_45 274
#define OBJECT_44 273
#define OBJECT_43 272
#define OBJECT_42 271
#define OBJECT_41 270
#define OBJECT_40 269
#define OBJECT_39 268
#define OBJECT_38 267
#define OBJECT_37 266
#define OBJECT_36 265
#define OBJECT_35 264
#define OBJECT_34 263
#define OBJECT_33 262
#define OBJECT_32 261
#define OBJECT_31 260
#define OBJECT_30 259
#define OBJECT_29 258
#define OBJECT_28 257
#define OBJECT_27 256
#define OBJECT_26 255
#define OBJECT_25 254
#define OBJECT_24 253
#define OBJECT_23 252
#define OBJECT_22 251
#define OBJECT_21 250
#define OBJECT_20 249
#define OBJECT_19 248
#define OBJECT_18 247
#define OBJECT_17 246
#define OBJECT_16 245
#define OBJECT_15 244
#define OBJECT_14 243
#define OBJECT_13 242
#define OBJECT_12 241
#define OBJECT_11 240
#define OBJECT_10 239
#define OBJECT_9 238
#define OBJECT_8 237
#define OBJECT_7 236
#define OBJECT_6 235
#define OBJECT_5 234
#define OBJECT_4 233
#define OBJECT_3 232
#define OBJECT_2 231
#define OBJECT_1 230
#define OBJECT_0 229
#define EXECUTE_CACHE_96 199
#define EXECUTE_CACHE_91 201
#define EXECUTE_CACHE_79 203
#define EXECUTE_CACHE_86 205
#define EXECUTE_CACHE_76 207
#define EXECUTE_CACHE_40 209
#define EXECUTE_CACHE_36 211
#define EXECUTE_CACHE_31 213
#define FREE_REFERENCE_9 216
#define FREE_REFERENCE_8 217
#define FREE_REFERENCE_7 218
#define FREE_REFERENCE_6 219
#define FREE_REFERENCE_5 220
#define FREE_REFERENCE_4 221
#define FREE_REFERENCE_3 222
#define FREE_REFERENCE_2 223
#define FREE_REFERENCE_1 224
#define FREE_REFERENCE_0 225
#define GLOBAL_EXECUTE_CACHE_23 227
#define FREE_REFERENCES_LABEL_0 198
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
utils_so_c801ec88371670a4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd303;
  machine_word Wrd302;
  machine_word Wrd304;
  machine_word Wrd297;
  machine_word Wrd299;
  machine_word Wrd300;
  machine_word Wrd293;
  machine_word Wrd295;
  machine_word Wrd296;
  machine_word Wrd289;
  machine_word Wrd291;
  machine_word Wrd292;
  machine_word Wrd285;
  machine_word Wrd287;
  machine_word Wrd288;
  machine_word Wrd281;
  machine_word Wrd283;
  machine_word Wrd284;
  machine_word Wrd277;
  machine_word Wrd279;
  machine_word Wrd280;
  machine_word Wrd273;
  machine_word Wrd275;
  machine_word Wrd276;
  machine_word Wrd269;
  machine_word Wrd271;
  machine_word Wrd272;
  machine_word Wrd265;
  machine_word Wrd267;
  machine_word Wrd268;
  machine_word Wrd261;
  machine_word Wrd263;
  machine_word Wrd264;
  machine_word Wrd257;
  machine_word Wrd259;
  machine_word Wrd260;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd256;
  machine_word Wrd249;
  machine_word Wrd251;
  machine_word Wrd252;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd248;
  machine_word Wrd241;
  machine_word Wrd243;
  machine_word Wrd244;
  machine_word Wrd237;
  machine_word Wrd239;
  machine_word Wrd240;
  machine_word Wrd233;
  machine_word Wrd235;
  machine_word Wrd236;
  machine_word Wrd229;
  machine_word Wrd231;
  machine_word Wrd232;
  machine_word Wrd225;
  machine_word Wrd227;
  machine_word Wrd228;
  machine_word Wrd221;
  machine_word Wrd223;
  machine_word Wrd224;
  machine_word Wrd217;
  machine_word Wrd219;
  machine_word Wrd220;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd216;
  machine_word Wrd209;
  machine_word Wrd211;
  machine_word Wrd212;
  machine_word Wrd205;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd201;
  machine_word Wrd203;
  machine_word Wrd204;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd200;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd188;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd184;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd180;
  machine_word Wrd173;
  machine_word Wrd175;
  machine_word Wrd176;
  machine_word Wrd169;
  machine_word Wrd171;
  machine_word Wrd172;
  machine_word Wrd165;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd157;
  machine_word Wrd159;
  machine_word Wrd160;
  machine_word Wrd155;
  machine_word Wrd156;
  machine_word Wrd149;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd145;
  machine_word Wrd147;
  machine_word Wrd148;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd144;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd124;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd12;
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
      goto continuation_32;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto transitive_closure_247;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_49;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_48;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_46;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_39;

    case 19:
      current_block = (Rpc - LABEL_35);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto enqueue_nodeB_248;

    case 21:
      current_block = (Rpc - LABEL_37);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto lambda_250;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto swapB_249;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_50;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto enqueue_nodesB_251;

    case 26:
      current_block = (Rpc - LABEL_41);
      goto loop_20;

    case 27:
      current_block = (Rpc - LABEL_43);
      goto label_232;

    case 28:
      current_block = (Rpc - LABEL_44);
      goto label_233;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_51;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_41;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_45);
      goto continuation_52;

    case 33:
      current_block = (Rpc - LABEL_46);
      goto continuation_53;

    case 34:
      current_block = (Rpc - LABEL_47);
      goto continuation_54;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto continuation_55;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto continuation_56;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto continuation_57;

    case 38:
      current_block = (Rpc - LABEL_51);
      goto continuation_58;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto continuation_59;

    case 40:
      current_block = (Rpc - LABEL_53);
      goto continuation_60;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto continuation_61;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto continuation_62;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto continuation_63;

    case 44:
      current_block = (Rpc - LABEL_57);
      goto continuation_64;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto continuation_65;

    case 46:
      current_block = (Rpc - LABEL_59);
      goto continuation_66;

    case 47:
      current_block = (Rpc - LABEL_60);
      goto continuation_67;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto continuation_68;

    case 49:
      current_block = (Rpc - LABEL_62);
      goto continuation_105;

    case 50:
      current_block = (Rpc - LABEL_63);
      goto continuation_115;

    case 51:
      current_block = (Rpc - LABEL_64);
      goto continuation_190;

    case 52:
      current_block = (Rpc - LABEL_65);
      goto continuation_191;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto continuation_192;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto continuation_193;

    case 55:
      current_block = (Rpc - LABEL_70);
      goto label_234;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_199;

    case 57:
      current_block = (Rpc - LABEL_73);
      goto label_235;

    case 58:
      current_block = (Rpc - LABEL_69);
      goto continuation_198;

    case 59:
      current_block = (Rpc - LABEL_77);
      goto lambda_195;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_205;

    case 61:
      current_block = (Rpc - LABEL_82);
      goto label_236;

    case 62:
      current_block = (Rpc - LABEL_72);
      goto continuation_204;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto continuation_200;

    case 64:
      current_block = (Rpc - LABEL_85);
      goto label_237;

    case 65:
      current_block = (Rpc - LABEL_75);
      goto lambda_196;

    case 66:
      current_block = (Rpc - LABEL_78);
      goto lambda_194;

    case 67:
      current_block = (Rpc - LABEL_80);
      goto continuation_211;

    case 68:
      current_block = (Rpc - LABEL_89);
      goto label_238;

    case 69:
      current_block = (Rpc - LABEL_90);
      goto label_239;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_210;

    case 71:
      current_block = (Rpc - LABEL_83);
      goto continuation_206;

    case 72:
      current_block = (Rpc - LABEL_94);
      goto label_240;

    case 73:
      current_block = (Rpc - LABEL_95);
      goto label_241;

    case 74:
      current_block = (Rpc - LABEL_84);
      goto continuation_201;

    case 75:
      current_block = (Rpc - LABEL_87);
      goto continuation_218;

    case 76:
      current_block = (Rpc - LABEL_99);
      goto label_242;

    case 77:
      current_block = (Rpc - LABEL_100);
      goto label_243;

    case 78:
      current_block = (Rpc - LABEL_88);
      goto continuation_217;

    case 79:
      current_block = (Rpc - LABEL_92);
      goto continuation_212;

    case 80:
      current_block = (Rpc - LABEL_102);
      goto label_244;

    case 81:
      current_block = (Rpc - LABEL_103);
      goto label_245;

    case 82:
      current_block = (Rpc - LABEL_93);
      goto continuation_207;

    case 83:
      current_block = (Rpc - LABEL_97);
      goto continuation_220;

    case 84:
      current_block = (Rpc - LABEL_98);
      goto continuation_219;

    case 85:
      current_block = (Rpc - LABEL_101);
      goto continuation_213;

    case 86:
      current_block = (Rpc - LABEL_104);
      goto continuation_221;

    case 87:
      current_block = (Rpc - LABEL_105);
      goto continuation_222;

    case 88:
      current_block = (Rpc - LABEL_106);
      goto continuation_223;

    case 89:
      current_block = (Rpc - LABEL_107);
      goto continuation_224;

    case 90:
      current_block = (Rpc - LABEL_108);
      goto continuation_225;

    case 91:
      current_block = (Rpc - LABEL_109);
      goto continuation_226;

    case 92:
      current_block = (Rpc - LABEL_110);
      goto continuation_227;

    case 93:
      current_block = (Rpc - LABEL_111);
      goto continuation_229;

    case 94:
      current_block = (Rpc - LABEL_112);
      goto continuation_228;

    case 95:
      current_block = (Rpc - LABEL_113);
      goto label_257;

    case 96:
      current_block = (Rpc - LABEL_114);
      goto label_258;

    case 97:
      current_block = (Rpc - LABEL_115);
      goto expression_231;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_231)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_114])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_258)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_257)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
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
	0,
	2,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 22)
      goto label_256;
    blocks = (current_block [OBJECT_213]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_113])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_256)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29]), 2);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_70]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_71]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_72]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_73]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_74]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_76]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_77]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_78]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_79]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_80]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd64.Obj) = (current_block [OBJECT_81]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_82]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_83]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd76.Obj) = (current_block [OBJECT_84]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd80.Obj) = (current_block [OBJECT_85]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_86]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_87]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd92.Obj) = (current_block [OBJECT_88]);
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd96.Obj) = (current_block [OBJECT_89]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_90]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd104.Obj) = (current_block [OBJECT_91]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_92]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_93]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd116.Obj) = (current_block [OBJECT_94]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd120.Obj) = (current_block [OBJECT_95]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd124.Obj) = (current_block [OBJECT_96]);
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (Wrd128.Obj) = (current_block [OBJECT_97]);
  (* (Rhp++)) = (Wrd128.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (Wrd132.Obj) = (current_block [OBJECT_98]);
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_99]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_100]);
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (Wrd144.Obj) = (current_block [OBJECT_101]);
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (Wrd148.Obj) = (current_block [OBJECT_102]);
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd147.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd147.pObj)));
  (Wrd152.Obj) = (current_block [OBJECT_103]);
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd145.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd153.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd154.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_105]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_106]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_107]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_108]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_109]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_110]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_111]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_112]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_113]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_115]);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_116]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_117]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_118]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_119]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_120]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_121]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_122]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_123]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_124]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_125]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_126]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_127]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd64.Obj) = (current_block [OBJECT_128]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_129]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_130]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd76.Obj) = (current_block [OBJECT_131]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd80.Obj) = (current_block [OBJECT_132]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_133]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_134]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd92.Obj) = (current_block [OBJECT_135]);
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd96.Obj) = (current_block [OBJECT_136]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_137]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd104.Obj) = (current_block [OBJECT_138]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_139]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_140]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd116.Obj) = (current_block [OBJECT_141]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd120.Obj) = (current_block [OBJECT_142]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd124.Obj) = (current_block [OBJECT_143]);
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (Wrd128.Obj) = (current_block [OBJECT_144]);
  (* (Rhp++)) = (Wrd128.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (Wrd132.Obj) = (current_block [OBJECT_145]);
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_146]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_147]);
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (Wrd144.Obj) = (current_block [OBJECT_148]);
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (Wrd148.Obj) = (current_block [OBJECT_149]);
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd147.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd147.pObj)));
  (Wrd152.Obj) = (current_block [OBJECT_150]);
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd145.Obj);
  (Wrd151.pObj) = (& (Rhp [-2]));
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd151.pObj)));
  (Wrd156.Obj) = (current_block [OBJECT_151]);
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd149.Obj);
  (Wrd155.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd155.pObj)));
  (Wrd160.Obj) = (current_block [OBJECT_152]);
  (* (Rhp++)) = (Wrd160.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd159.pObj) = (& (Rhp [-2]));
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd159.pObj)));
  (Wrd164.Obj) = (current_block [OBJECT_153]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd157.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd168.Obj) = (current_block [OBJECT_154]);
  (* (Rhp++)) = (Wrd168.Obj);
  (* (Rhp++)) = (Wrd161.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (Wrd172.Obj) = (current_block [OBJECT_155]);
  (* (Rhp++)) = (Wrd172.Obj);
  (* (Rhp++)) = (Wrd165.Obj);
  (Wrd171.pObj) = (& (Rhp [-2]));
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd171.pObj)));
  (Wrd176.Obj) = (current_block [OBJECT_156]);
  (* (Rhp++)) = (Wrd176.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd175.pObj) = (& (Rhp [-2]));
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd175.pObj)));
  (Wrd180.Obj) = (current_block [OBJECT_157]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd173.Obj);
  (Wrd179.pObj) = (& (Rhp [-2]));
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd179.pObj)));
  (Wrd184.Obj) = (current_block [OBJECT_158]);
  (* (Rhp++)) = (Wrd184.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (Wrd188.Obj) = (current_block [OBJECT_159]);
  (* (Rhp++)) = (Wrd188.Obj);
  (* (Rhp++)) = (Wrd181.Obj);
  (Wrd187.pObj) = (& (Rhp [-2]));
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd187.pObj)));
  (Wrd192.Obj) = (current_block [OBJECT_160]);
  (* (Rhp++)) = (Wrd192.Obj);
  (* (Rhp++)) = (Wrd185.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_161]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd200.Obj) = (current_block [OBJECT_162]);
  (* (Rhp++)) = (Wrd200.Obj);
  (* (Rhp++)) = (Wrd193.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (Wrd204.Obj) = (current_block [OBJECT_163]);
  (* (Rhp++)) = (Wrd204.Obj);
  (* (Rhp++)) = (Wrd197.Obj);
  (Wrd203.pObj) = (& (Rhp [-2]));
  (Wrd201.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd203.pObj)));
  (Wrd208.Obj) = (current_block [OBJECT_164]);
  (* (Rhp++)) = (Wrd208.Obj);
  (* (Rhp++)) = (Wrd201.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_165]);
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd205.Obj);
  (Wrd211.pObj) = (& (Rhp [-2]));
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd211.pObj)));
  (Wrd216.Obj) = (current_block [OBJECT_166]);
  (* (Rhp++)) = (Wrd216.Obj);
  (* (Rhp++)) = (Wrd209.Obj);
  (Wrd215.pObj) = (& (Rhp [-2]));
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd215.pObj)));
  (Wrd220.Obj) = (current_block [OBJECT_167]);
  (* (Rhp++)) = (Wrd220.Obj);
  (* (Rhp++)) = (Wrd213.Obj);
  (Wrd219.pObj) = (& (Rhp [-2]));
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd219.pObj)));
  (Wrd224.Obj) = (current_block [OBJECT_168]);
  (* (Rhp++)) = (Wrd224.Obj);
  (* (Rhp++)) = (Wrd217.Obj);
  (Wrd223.pObj) = (& (Rhp [-2]));
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd223.pObj)));
  (Wrd228.Obj) = (current_block [OBJECT_169]);
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd221.Obj);
  (Wrd227.pObj) = (& (Rhp [-2]));
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd227.pObj)));
  (Wrd232.Obj) = (current_block [OBJECT_170]);
  (* (Rhp++)) = (Wrd232.Obj);
  (* (Rhp++)) = (Wrd225.Obj);
  (Wrd231.pObj) = (& (Rhp [-2]));
  (Wrd229.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd231.pObj)));
  (Wrd236.Obj) = (current_block [OBJECT_171]);
  (* (Rhp++)) = (Wrd236.Obj);
  (* (Rhp++)) = (Wrd229.Obj);
  (Wrd235.pObj) = (& (Rhp [-2]));
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd235.pObj)));
  (Wrd240.Obj) = (current_block [OBJECT_172]);
  (* (Rhp++)) = (Wrd240.Obj);
  (* (Rhp++)) = (Wrd233.Obj);
  (Wrd239.pObj) = (& (Rhp [-2]));
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd239.pObj)));
  (Wrd244.Obj) = (current_block [OBJECT_173]);
  (* (Rhp++)) = (Wrd244.Obj);
  (* (Rhp++)) = (Wrd237.Obj);
  (Wrd243.pObj) = (& (Rhp [-2]));
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd243.pObj)));
  (Wrd248.Obj) = (current_block [OBJECT_174]);
  (* (Rhp++)) = (Wrd248.Obj);
  (* (Rhp++)) = (Wrd241.Obj);
  (Wrd247.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd247.pObj)));
  (Wrd252.Obj) = (current_block [OBJECT_175]);
  (* (Rhp++)) = (Wrd252.Obj);
  (* (Rhp++)) = (Wrd245.Obj);
  (Wrd251.pObj) = (& (Rhp [-2]));
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd251.pObj)));
  (Wrd256.Obj) = (current_block [OBJECT_176]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd249.Obj);
  (Wrd255.pObj) = (& (Rhp [-2]));
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd255.pObj)));
  (Wrd260.Obj) = (current_block [OBJECT_177]);
  (* (Rhp++)) = (Wrd260.Obj);
  (* (Rhp++)) = (Wrd253.Obj);
  (Wrd259.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd259.pObj)));
  (Wrd264.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd264.Obj);
  (* (Rhp++)) = (Wrd257.Obj);
  (Wrd263.pObj) = (& (Rhp [-2]));
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd263.pObj)));
  (Wrd268.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd268.Obj);
  (* (Rhp++)) = (Wrd261.Obj);
  (Wrd267.pObj) = (& (Rhp [-2]));
  (Wrd265.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd267.pObj)));
  (Wrd272.Obj) = (current_block [OBJECT_178]);
  (* (Rhp++)) = (Wrd272.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd271.pObj) = (& (Rhp [-2]));
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd271.pObj)));
  (Wrd276.Obj) = (current_block [OBJECT_179]);
  (* (Rhp++)) = (Wrd276.Obj);
  (* (Rhp++)) = (Wrd269.Obj);
  (Wrd275.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd275.pObj)));
  (Wrd280.Obj) = (current_block [OBJECT_180]);
  (* (Rhp++)) = (Wrd280.Obj);
  (* (Rhp++)) = (Wrd273.Obj);
  (Wrd279.pObj) = (& (Rhp [-2]));
  (Wrd277.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd279.pObj)));
  (Wrd284.Obj) = (current_block [OBJECT_181]);
  (* (Rhp++)) = (Wrd284.Obj);
  (* (Rhp++)) = (Wrd277.Obj);
  (Wrd283.pObj) = (& (Rhp [-2]));
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd283.pObj)));
  (Wrd288.Obj) = (current_block [OBJECT_182]);
  (* (Rhp++)) = (Wrd288.Obj);
  (* (Rhp++)) = (Wrd281.Obj);
  (Wrd287.pObj) = (& (Rhp [-2]));
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd287.pObj)));
  (Wrd292.Obj) = (current_block [OBJECT_183]);
  (* (Rhp++)) = (Wrd292.Obj);
  (* (Rhp++)) = (Wrd285.Obj);
  (Wrd291.pObj) = (& (Rhp [-2]));
  (Wrd289.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd291.pObj)));
  (Wrd296.Obj) = (current_block [OBJECT_184]);
  (* (Rhp++)) = (Wrd296.Obj);
  (* (Rhp++)) = (Wrd289.Obj);
  (Wrd295.pObj) = (& (Rhp [-2]));
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd295.pObj)));
  (Wrd300.Obj) = (current_block [OBJECT_185]);
  (* (Rhp++)) = (Wrd300.Obj);
  (* (Rhp++)) = (Wrd293.Obj);
  (Wrd299.pObj) = (& (Rhp [-2]));
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd299.pObj)));
  (Wrd304.Obj) = (current_block [OBJECT_186]);
  (* (Rhp++)) = (Wrd304.Obj);
  (* (Rhp++)) = (Wrd297.Obj);
  (Wrd302.pObj) = (& (Rhp [-2]));
  (Wrd303.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd302.pObj)));
  (* (--Rsp)) = (Wrd303.Obj);
  (Wrd305.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd305.Obj);
  (Wrd306.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd306.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_190)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_191)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_192)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_193)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_262;
  Wrd11 = Wrd15;

DEFLABEL (label_261)
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_195;

DEFLABEL (continuation_198)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_260;
  Wrd11 = Wrd15;

DEFLABEL (label_259)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86]));

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_84);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_188]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (label_260)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd12.pObj));

DEFLABEL (label_237)
  (Wrd11.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd12.pObj));

DEFLABEL (label_234)
  (Wrd11.Obj) = Rvl;
  goto label_261;

DEFLABEL (continuation_199)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_268;
  Wrd11 = Wrd15;

DEFLABEL (label_267)
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_195;

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_266;
  Wrd11 = Wrd15;

DEFLABEL (label_265)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_264;
  Wrd17 = Wrd21;

DEFLABEL (label_263)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_207)
  INTERRUPT_CHECK (27, LABEL_93);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_189]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (label_264)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd18.pObj));

DEFLABEL (label_241)
  (Wrd17.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd12.pObj));

DEFLABEL (label_240)
  (Wrd11.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd12.pObj));

DEFLABEL (label_235)
  (Wrd11.Obj) = Rvl;
  goto label_267;

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_274;
  Wrd11 = Wrd15;

DEFLABEL (label_273)
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_195;

DEFLABEL (continuation_210)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_212)
  INTERRUPT_CHECK (27, LABEL_92);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_272;
  Wrd11 = Wrd15;

DEFLABEL (label_271)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_270;
  Wrd17 = Wrd21;

DEFLABEL (label_269)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_213)
  INTERRUPT_CHECK (27, LABEL_101);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_190]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 3);

DEFLABEL (label_270)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd18.pObj));

DEFLABEL (label_245)
  (Wrd17.Obj) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd12.pObj));

DEFLABEL (label_244)
  (Wrd11.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd12.pObj));

DEFLABEL (label_236)
  (Wrd11.Obj) = Rvl;
  goto label_273;

DEFLABEL (continuation_211)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_282;
  Wrd11 = Wrd15;

DEFLABEL (label_281)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_280;
  Wrd17 = Wrd21;

DEFLABEL (label_279)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91]));

DEFLABEL (continuation_217)
  INTERRUPT_CHECK (27, LABEL_88);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_218)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_278;
  Wrd11 = Wrd15;

DEFLABEL (label_277)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_276;
  Wrd17 = Wrd21;

DEFLABEL (label_275)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91]));

DEFLABEL (continuation_219)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_220)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_221)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_222)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_223)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_224)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_225)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_226)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_227)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_191]), 2);

DEFLABEL (continuation_228)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_229)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd5.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_211]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_276)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd18.pObj));

DEFLABEL (label_243)
  (Wrd17.Obj) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd12.pObj));

DEFLABEL (label_242)
  (Wrd11.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_280)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd18.pObj));

DEFLABEL (label_239)
  (Wrd17.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd12.pObj));

DEFLABEL (label_238)
  (Wrd11.Obj) = Rvl;
  goto label_281;

DEFLABEL (transitive_closure_247)
  CLOSURE_HEADER (LABEL_18);

DEFLABEL (transitive_closure_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  Wrd29 = Wrd33;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  ((Wrd29.pObj) [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd18 = Wrd11;
  ((Wrd18.pObj) [2]) = (Wrd32.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd34.Obj);
  (Rsp [5]) = (Wrd34.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (enqueue_nodeB_248)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (enqueue_nodeB_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23])))
    goto label_284;

DEFLABEL (label_283)
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_284)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_283;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  ((Wrd31.pObj) [0]) = (Wrd26.Obj);
  Rvl = (Wrd32.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_250)
  CLOSURE_HEADER (LABEL_29);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_286;

DEFLABEL (label_285)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd21.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd18.pObj) [0]) = (Wrd21.Obj);
  goto loop_20;

DEFLABEL (label_286)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_37);
  goto label_285;

DEFLABEL (swapB_249)
  CLOSURE_HEADER (LABEL_27);

DEFLABEL (swapB_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [0]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  ((Wrd34.pObj) [0]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (enqueue_nodesB_251)
  CLOSURE_HEADER (LABEL_33);

DEFLABEL (enqueue_nodesB_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23])))
    goto label_287;
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_287)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_252)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_41);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_33])))
    goto label_288;
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_288)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_292;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_291)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_290;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd35.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_289)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [2]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  ((Wrd59.pObj) [0]) = (Wrd35.Obj);
  (Wrd62.Obj) = ((Wrd57.pObj) [4]);
  (* (--Rsp)) = (Wrd62.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_290)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_233)
  (Wrd35.Obj) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34]), 1);

DEFLABEL (label_232)
  (* (--Rsp)) = Rvl;
  goto label_291;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42);
  goto loop_20;

DEFLABEL (lambda_253)
DEFLABEL (lambda_195)
  INTERRUPT_CHECK (26, LABEL_77);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (lambda_254)
DEFLABEL (lambda_196)
  INTERRUPT_CHECK (26, LABEL_75);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_191]), 2);

DEFLABEL (lambda_255)
DEFLABEL (lambda_194)
  INTERRUPT_CHECK (26, LABEL_78);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_192]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_utils_so_c801ec88371670a4 [22] =
  {
    { "utils_so_code_1", 15, utils_so_code_1 },
    { "utils_so_code_2", 11, utils_so_code_2 },
    { "utils_so_code_3", 8, utils_so_code_3 },
    { "utils_so_code_4", 5, utils_so_code_4 },
    { "utils_so_code_5", 11, utils_so_code_5 },
    { "utils_so_code_6", 6, utils_so_code_6 },
    { "utils_so_code_7", 11, utils_so_code_7 },
    { "utils_so_code_8", 5, utils_so_code_8 },
    { "utils_so_code_9", 7, utils_so_code_9 },
    { "utils_so_code_10", 3, utils_so_code_10 },
    { "utils_so_code_11", 2, utils_so_code_11 },
    { "utils_so_code_12", 4, utils_so_code_12 },
    { "utils_so_code_13", 11, utils_so_code_13 },
    { "utils_so_code_14", 11, utils_so_code_14 },
    { "utils_so_code_15", 2, utils_so_code_15 },
    { "utils_so_code_16", 2, utils_so_code_16 },
    { "utils_so_code_17", 2, utils_so_code_17 },
    { "utils_so_code_18", 3, utils_so_code_18 },
    { "utils_so_code_19", 2, utils_so_code_19 },
    { "utils_so_code_20", 2, utils_so_code_20 },
    { "utils_so_code_21", 2, utils_so_code_21 },
    { "utils_so_code_22", 3, utils_so_code_22 }
  };

int
decl_utils_so_c801ec88371670a4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_utils_so_c801ec88371670a4);
  return (0);
}

DECLARE_COMPILED_CODE ("utils.so", 98, decl_utils_so_c801ec88371670a4, utils_so_c801ec88371670a4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_utils_so_data_c801ec88371670a4 [8138] =
  "\xbe\x03\x28\x8b\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc1"
  "\xba\x08\x28\x0d\x28\x0d\xbb\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88"
  "\xb1\xb2\x08\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd"
  "\x1d\xb0\x83\x88\x0d\x0d\x0d\x0d\x0c\x0d\x1d\x0d\x0d\x24\x28\x0d"
  "\xbe\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x84\x88\x0d\x1c\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb1\xb2\x08\x80\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb2\x07\xb1"
  "\x0c\x08\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\xb2"
  "\x0c\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\xb2\x08\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x0d\x08\xb2\xb1\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x02\x0c\x02\xc2\x1c\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\xc1\x07\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x02\x02\x82\x06\x07\x02\x1b\x80\x0d\x0d\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x02\x06\x07\x02\x86"
  "\x02\x02\x1b\x02\x1b\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b\x0d\xb0\x2a"
  "\x0d\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x1b\xc2\xc2\x1b\x1b\x1b\x0d\x1c"
  "\xc1\xc2\xc2\xc2\xc2\xc2\xc1\xc1\xc1\xc1\xc2\xc2\xc2\xc2\xc1\xc2"
  "\xc2\xc2\xc2\xc1\xc2\xc1\xc1\xc2\xc1\xc1\xc2\xc1\xc1\xc2\xc1\xc1"
  "\xc1\xc2\xc1\xc1\xc1\xc1\xc2\xc1\xc1\xc2\xc1\xc2\xc1\xc2\xc2\xc2"
  "\xc2\xc1\xc2\xc1\xc2\xc1\xc1\xc2\xc2\xc1\xc2\xc2\xc1\xc2\xc1\xc1"
  "\xc1\xc1\xc1\xc2\xc1\xc2\xc1\xc2\x0d\x1c\x20\xc2\xc1\xc0\xc1\xc1"
  "\xc3\x20\xc2\x1b\xc1\xc2\xc2\xc2\xc1\xc1\xc2\xc2\xc1\xc2\xc2\xc2"
  "\xc1\xc1\xc1\xc1\xc2\xc1\xc2\xc2\xc2\xc1\xc1\xc1\xc2\xc1\xc1\xc1"
  "\x1b\xc1\xc1\xc1\xc1\xc1\xc1\xc1\x0d\x1c\x0d\x1c\x0d\x0d\x0d\x0d"
  "\x0d\xb3\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x0d\x1c\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x08\x14\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x0d\x1b\x2a"
  "\x1b\x1b\x2a\x0d\x0d\x1b\x0c\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x02\x0d\x02\x0d\x0d\x02\x0d\x02\x0d\x02\x0d\xb1\xb2\x08\x0d"
  "\x02\x1d\xc2\x02\x02\x0d\x0d\x02\x07\x1b\x2a\xc3\x0d\x0d\x0d\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\xb6\x1b\x2a\x1b\x0d"
  "\xb7\x2a\x0d\xb5\x2a\xc3\x0d\xb4\x2a\x28\x0d\x26\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x58\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x75"
  "\x74\x69\x6c\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63"
  "\x64\x72\x04\x63\x61\x72\x03\x11\x6d\x65\x6d\x62\x65\x72\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x0a\x6c\x69\x73\x74\x2d\x63"
  "\x6f\x70\x79\x04\x06\x64\x65\x6c\x71\x21\x04\x71\x20\x81\x8b\x02"
  "\x70\x1e\x81\x89\x02\x6f\x1c\x81\x89\x02\x6e\x1a\x81\x89\x02\x6d"
  "\x18\x81\x89\x02\x6c\x16\x81\x93\x02\x6b\x14\x81\x93\x02\x6a\x12"
  "\x81\x97\x02\x69\x10\x81\x93\x02\x68\x0e\x81\x91\x02\x67\x0c\x81"
  "\x95\x02\x66\x0a\x81\x91\x02\x65\x08\x81\x8d\x02\x64\x06\x81\x89"
  "\x02\x63\x04\x86\x0a\x1f\x2c\x02\x03\x09\x72\x65\x76\x65\x72\x73"
  "\x65\x21\x02\x7c\x18\x81\x85\x02\x7b\x16\x81\x8b\x02\x7a\x14\x81"
  "\x8b\x02\x79\x12\x81\x8b\x02\x78\x10\x81\x8b\x02\x77\x0e\x81\x8b"
  "\x02\x76\x0c\x81\x8b\x02\x75\x0a\x81\x8b\x02\x74\x08\x81\x8d\x02"
  "\x73\x06\x81\x8b\x02\x72\x04\x84\x06\x17\x20\x02\x0a\x66\x6c\x75"
  "\x69\x64\x2d\x6c\x65\x74\x04\x6c\x65\x74\x07\x6c\x61\x6d\x62\x64"
  "\x61\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x5d\x02\x2d\x06\x6c\x61\x62\x65\x6c\x08\x0f"
  "\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65\x74\x15\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x66\x6c\x75\x69\x64\x2d"
  "\x6c\x65\x74\x03\x02\x16\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c"
  "\x61\x62\x65\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x03\x1a\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d"
  "\x73\x79\x6d\x62\x6f\x6c\x03\x18\x63\x61\x6e\x6f\x6e\x69\x63\x61"
  "\x6c\x69\x7a\x65\x2d\x6c\x61\x62\x65\x6c\x2d\x6e\x61\x6d\x65\x03"
  "\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03"
  "\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x05"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x07\x84"
  "\x01\x12\x81\x8b\x02\x83\x01\x10\x81\x89\x02\x82\x01\x0e\x81\x8d"
  "\x02\x81\x01\x0c\x81\x8d\x02\x80\x01\x0a\x81\x87\x02\x7f\x08\x81"
  "\x85\x02\x7e\x06\x81\x83\x02\x7d\x04\x83\x02\x11\x2b\x02\x17\x2a"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x6c\x61\x62\x65\x6c\x2d\x6e\x75"
  "\x6d\x62\x65\x72\x2a\x09\x02\x09\x02\x89\x01\x0c\x81\x83\x02\x88"
  "\x01\x0a\x81\x83\x02\x87\x01\x08\x81\x83\x02\x86\x01\x06\x81\x81"
  "\x02\x85\x01\x04\x82\x02\x0b\x12\x0a\x02\x94\x01\x18\x81\x89\x02"
  "\x93\x01\x16\x81\x87\x02\x92\x01\x14\x81\x8d\x02\x91\x01\x12\x81"
  "\x8b\x02\x90\x01\x10\x81\x89\x02\x8f\x01\x0e\x81\x87\x02\x8e\x01"
  "\x0c\x81\x87\x02\x8d\x01\x0a\x81\x87\x02\x8c\x01\x08\x81\x87\x02"
  "\x8b\x01\x06\x81\x87\x02\x8a\x01\x04\x84\x06\x17\x1e\x0b\x02\x21"
  "\x41\x4c\x4c\x2d\x45\x51\x3f\x3a\x20\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x20\x66\x6f\x72\x20\x65\x6d\x70\x74\x79\x20\x73\x65\x74"
  "\x03\x06\x65\x72\x72\x6f\x72\x0c\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x0d\x03\x9a\x01\x0e\x81\x85\x02\x99\x01\x0c\x81\x85\x02"
  "\x98\x01\x0a\x81\x83\x02\x97\x01\x08\x81\x83\x02\x96\x01\x06\x83"
  "\x04\x95\x01\x04\x81\x83\x02\x0d\x1a\x0e\x02\x08\x25\x41\x4c\x4c"
  "\x2d\x45\x51\x2d\x4d\x41\x50\x3f\x3a\x20\x75\x6e\x64\x65\x66\x69"
  "\x6e\x65\x64\x20\x66\x6f\x72\x20\x65\x6d\x70\x74\x79\x20\x73\x65"
  "\x74\x03\x0c\x04\x0d\x03\xa5\x01\x18\x81\x85\x02\xa4\x01\x16\x83"
  "\x04\xa3\x01\x14\x81\x85\x02\xa2\x01\x12\x81\x85\x02\xa1\x01\x10"
  "\x81\x8b\x02\xa0\x01\x0e\x81\x87\x02\x9f\x01\x0c\x81\x85\x02\x9e"
  "\x01\x0a\x81\x87\x02\x9d\x01\x08\x81\x87\x02\x9c\x01\x06\x84\x06"
  "\x9b\x01\x04\x81\x85\x02\x17\x24\x0d\x02\x09\x04\x0d\x65\x71\x2d"
  "\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x0f\x02\xaa\x01\x0c\x81\x87"
  "\x02\xa9\x01\x0a\x81\x87\x02\xa8\x01\x08\x81\x87\x02\xa7\x01\x06"
  "\x81\x87\x02\xa6\x01\x04\x84\x06\x0b\x14\x10\x02\x0a\x12\x64\x65"
  "\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x0b"
  "\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x06\x71\x75\x6f\x74\x65"
  "\x03\x0f\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65"
  "\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64\x03"
  "\xb1\x01\x10\x81\x87\x02\xb0\x01\x0e\x81\x89\x02\xaf\x01\x0c\x81"
  "\x89\x02\xae\x01\x0a\x81\x85\x02\xad\x01\x08\x81\x87\x02\xac\x01"
  "\x06\x81\x87\x02\xab\x01\x04\x84\x06\x0f\x1d\x11\x02\x0b\x10\x0a"
  "\x2f\x53\x43\x4f\x44\x45\x2f\x50\x52\x4f\x43\x45\x44\x55\x52\x45"
  "\x2d\x54\x59\x50\x45\x2d\x43\x4f\x44\x45\x3a\x20\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x6c\x61\x6d\x62\x64\x61\x20\x74\x79\x70\x65\x15"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x12\x18\x04"
  "\x0c\x02\xb4\x01\x08\x81\x83\x02\xb3\x01\x06\x81\x83\x02\xb2\x01"
  "\x04\x83\x04\x07\x13\x0c\x02\x0c\x19\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x13\x02\x03\x1b\x73\x63\x6f\x64\x65\x2f\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x14"
  "\x02\xb6\x01\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x05\x0e\x15\x02"
  "\x0d\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x13\x02\xba\x01\x0a"
  "\x81\x87\x02\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x85\x02\xb7"
  "\x01\x04\x84\x06\x09\x11\x16\x02\x0e\x28\x2e\x33\x09\x12\x1a\x73"
  "\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x2f\x6c\x6f\x77"
  "\x65\x72\x2d\x6c\x69\x6d\x69\x74\x1a\x73\x69\x67\x6e\x65\x64\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x2f\x75\x70\x70\x65\x72\x2d\x6c\x69\x6d"
  "\x69\x74\x03\xc5\x01\x18\x81\x85\x02\xc4\x01\x16\x81\x85\x02\xc3"
  "\x01\x14\x81\x85\x02\xc2\x01\x12\x81\x85\x02\xc1\x01\x10\x81\x85"
  "\x02\xc0\x01\x0e\x81\x85\x02\xbf\x01\x0c\x81\x85\x02\xbe\x01\x0a"
  "\x81\x83\x02\xbd\x01\x08\x81\x83\x02\xbc\x01\x06\x83\x04\xbb\x01"
  "\x04\x81\x83\x02\x17\x26\x17\x02\x0f\x1e\x3d\x3b\x0f\x12\x1b\x13"
  "\x02\x03\x14\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x3f\x18\x03\x14\x03\xd0\x01\x18\x81\x85\x02"
  "\xcf\x01\x16\x81\x85\x02\xce\x01\x14\x81\x83\x02\xcd\x01\x12\x81"
  "\x83\x02\xcc\x01\x10\x81\x83\x02\xcb\x01\x0e\x81\x83\x02\xca\x01"
  "\x0c\x81\x83\x02\xc9\x01\x0a\x81\x83\x02\xc8\x01\x08\x81\x85\x02"
  "\xc7\x01\x06\x81\x85\x02\xc6\x01\x04\x83\x04\x17\x2b\x14\x02\x10"
  "\x22\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75\x65\x64\x2d"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x73\x19\x02\x04\x05\x61\x73\x73\x71\x1a\x02\xd2\x01\x06\x81"
  "\x85\x02\xd1\x01\x04\x83\x04\x05\x0d\x1b\x02\x11\x13\x66\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x1c"
  "\x02\x04\x1a\x02\xd4\x01\x06\x81\x85\x02\xd3\x01\x04\x83\x04\x05"
  "\x0d\x1d\x02\x12\x1b\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74"
  "\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x1e"
  "\x02\x04\x1a\x02\xd6\x01\x06\x81\x85\x02\xd5\x01\x04\x83\x04\x05"
  "\x0d\x1f\x02\x13\x1e\x02\x04\x1a\x02\xd9\x01\x08\x81\x83\x02\xd8"
  "\x01\x06\x81\x85\x02\xd7\x01\x04\x83\x04\x07\x10\x1a\x02\x14\x23"
  "\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75\x65\x64\x2d\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x73\x20\x02\x04\x05\x6d\x65\x6d\x71\x21\x02\xdb\x01\x06\x81"
  "\x85\x02\xda\x01\x04\x83\x04\x05\x0d\x22\x02\x15\x14\x66\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73"
  "\x23\x02\x04\x21\x02\xdd\x01\x06\x81\x85\x02\xdc\x01\x04\x83\x04"
  "\x05\x0d\x24\x02\x16\x1c\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63"
  "\x74\x2d\x66\x72\x65\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x73\x25\x02\x04\x21\x02\xdf\x01\x06\x81\x85\x02\xde\x01\x04\x83"
  "\x04\x05\x0d\x26\x02\x17\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61"
  "\x74\x75\x6d\x1c\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x2f\x75\x70\x70\x65\x72\x2d\x6c\x69\x6d\x69\x74\x02"
  "\xe2\x01\x08\x81\x85\x02\xe1\x01\x06\x81\x83\x02\xe0\x01\x04\x83"
  "\x04\x07\x0d\x17\x27\x27\x12\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x04\x15\x63\x61\x72\x65\x66\x75"
  "\x6c\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x0b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1c\x73\x69\x64\x65\x2d\x65"
  "\x66\x66\x65\x63\x74\x2d\x66\x72\x65\x65\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x3f\x26\x04\x1d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x66\x6f\x6c\x64\x61\x62\x6c\x65\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x3f\x24\x04\x23\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76"
  "\x61\x6c\x75\x65\x64\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x3f\x22\x04\x1a\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2d\x75\x73\x75\x61\x6c\x2d\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x1a\x04\x1b\x73\x69\x64\x65\x2d\x65\x66\x66"
  "\x65\x63\x74\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x3f\x1f\x04\x1c\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x66\x6f"
  "\x6c\x64\x61\x62\x6c\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3f"
  "\x1d\x04\x25\x22\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75"
  "\x65\x64\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x3f\x1b\x04\x23\x19\x6c\x65\x78\x69\x63\x61\x6c"
  "\x2d\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x61\x62\x6c\x65"
  "\x3f\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x1e\x1c\x19\x1f\x61\x64\x64\x69\x74\x69\x6f\x6e\x61"
  "\x6c\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x73\x27\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x03\x26\x2a\x03\x26\x2b\x03\x26\x2d\x03\x26\x2f\x04\x2d\x31"
  "\x2b\x03\x31\x2b\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74"
  "\x65\x67\x65\x72\x0e\x64\x69\x76\x69\x64\x65\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x61\x6e\x64\x0c\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x61\x6e\x64\x63\x0b\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x6c\x73\x68\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x6e\x6f\x74\x0a"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x6f\x72\x10\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x11\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x0b\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x78\x6f\x72\x17\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x14\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x62\x73\x0c\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x61\x63\x6f\x73\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61"
  "\x64\x64\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x73\x69\x6e\x0c\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x61\x74\x61\x6e\x32\x0f\x66\x6c\x6f\x6e\x75\x6d\x2d\x63"
  "\x65\x69\x6c\x69\x6e\x67\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x6f"
  "\x73\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76\x69\x64\x65\x0b"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x78\x70\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x66\x6c\x6f\x6f\x72\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c"
  "\x6f\x67\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x79\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x65"
  "\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x72\x6f\x75\x6e\x64\x0b\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x73\x69\x6e\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x73\x71\x72\x74\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x75\x62\x74"
  "\x72\x61\x63\x74\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x61\x6e\x10"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x72\x75\x6e\x63\x61\x74\x65\x0b"
  "\x67\x63\x64\x2d\x66\x69\x78\x6e\x75\x6d\x0e\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x3e\x63\x68\x61\x72\x0c\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x61\x64\x64\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x61\x64\x64"
  "\x2d\x31\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x79\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x71\x75\x6f\x74"
  "\x69\x65\x6e\x74\x12\x69\x6e\x74\x65\x67\x65\x72\x2d\x72\x65\x6d"
  "\x61\x69\x6e\x64\x65\x72\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x73"
  "\x75\x62\x74\x72\x61\x63\x74\x13\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x73\x75\x62\x74\x72\x61\x63\x74\x2d\x31\x0d\x6d\x69\x6e\x75\x73"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x16\x6d\x69\x6e\x75\x73\x2d\x6f\x6e"
  "\x65\x2d\x70\x6c\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\x10\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x79\x2d\x66\x69\x78\x6e\x75\x6d\x0c\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x10\x6f\x6e\x65\x2d\x70\x6c"
  "\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\x0c\x70\x6c\x75\x73\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x72\x65\x66\x16\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x0a\x72\x65\x6d\x61\x69\x6e"
  "\x64\x65\x72\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x12\x73\x79\x73"
  "\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x30\x12\x73"
  "\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x31"
  "\x12\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78"
  "\x72\x32\x10\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63"
  "\x61\x72\x10\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63"
  "\x64\x72\x12\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x13\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x69\x7a\x65\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38"
  "\x62\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x27\x61"
  "\x64\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x73\x69\x64\x65\x2d\x65"
  "\x66\x66\x65\x63\x74\x2d\x66\x72\x65\x65\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x73\x26\x08\x25\x72\x65\x63\x6f\x72\x64\x05\x63"
  "\x6f\x6e\x73\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x16\x67\x65\x74\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x10\x68"
  "\x65\x61\x70\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x10\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x11\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x07"
  "\x76\x65\x63\x74\x6f\x72\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f"
  "\x6e\x73\x20\x09\x25\x72\x65\x63\x6f\x72\x64\x3f\x03\x26\x3c\x03"
  "\x26\x3d\x03\x26\x3e\x0c\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x3f\x06\x63\x68\x61\x72\x3f\x04\x65\x71\x3f\x0e\x65\x71\x75\x61"
  "\x6c\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x08\x66\x69\x78\x6e\x75\x6d"
  "\x3f\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x71\x75\x61\x6c\x3f\x10"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x67\x72\x65\x61\x74\x65\x72\x3f\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x65\x73\x73\x3f\x11\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x11\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x0d\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65\x72\x6f\x3f\x08\x66\x6c\x6f\x6e"
  "\x75\x6d\x3f\x15\x67\x72\x65\x61\x74\x65\x72\x2d\x74\x68\x61\x6e"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x0e\x69\x6e\x64\x65\x78\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x3f\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x65"
  "\x71\x75\x61\x6c\x3f\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x67\x72"
  "\x65\x61\x74\x65\x72\x3f\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c"
  "\x65\x73\x73\x3f\x12\x69\x6e\x74\x65\x67\x65\x72\x2d\x6e\x65\x67"
  "\x61\x74\x69\x76\x65\x3f\x12\x69\x6e\x74\x65\x67\x65\x72\x2d\x70"
  "\x6f\x73\x69\x74\x69\x76\x65\x3f\x0e\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x7a\x65\x72\x6f\x3f\x12\x6c\x65\x73\x73\x2d\x74\x68\x61\x6e"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x11\x6e\x65\x67\x61\x74\x69\x76"
  "\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x0a\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x3f\x06\x6e\x75\x6c\x6c\x3f\x12\x06\x70\x61\x69\x72\x3f"
  "\x11\x70\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x3f\x0a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x08\x73\x74\x72\x69"
  "\x6e\x67\x3f\x08\x76\x65\x63\x74\x6f\x72\x3f\x0d\x7a\x65\x72\x6f"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x06\x7a\x65\x72\x6f\x3f\x22\x73"
  "\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74\x2d\x66\x72\x65\x65\x2d"
  "\x61\x64\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x6e\x61\x6d\x65\x73"
  "\x25\x05\x63\x6f\x6e\x73\x24\x05\x6c\x69\x73\x74\x06\x63\x6f\x6e"
  "\x73\x2a\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x07\x76"
  "\x65\x63\x74\x6f\x72\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f"
  "\x72\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70\x79\x0d\x6c\x69"
  "\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x0d\x76\x65\x63\x74\x6f"
  "\x72\x2d\x3e\x6c\x69\x73\x74\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x0a\x6d\x61\x6b\x65\x2d\x63\x65\x6c"
  "\x6c\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c"
  "\x0d\x1a\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x61\x64\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x2d\x6e\x61\x6d\x65\x73\x22\x04\x6d\x61\x78"
  "\x04\x6d\x69\x6e\x02\x2b\x02\x2d\x02\x2a\x02\x2f\x03\x31\x2b\x04"
  "\x2d\x31\x2b\x0a\x63\x6f\x6e\x6a\x75\x67\x61\x74\x65\x04\x61\x62"
  "\x73\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x0a\x72\x65\x6d\x61\x69"
  "\x6e\x64\x65\x72\x07\x6d\x6f\x64\x75\x6c\x6f\x0f\x69\x6e\x74\x65"
  "\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x04\x67\x63\x64\x04\x6c"
  "\x63\x6d\x0a\x6e\x75\x6d\x65\x72\x61\x74\x6f\x72\x0c\x64\x65\x6e"
  "\x6f\x6d\x69\x6e\x61\x74\x6f\x72\x06\x66\x6c\x6f\x6f\x72\x08\x63"
  "\x65\x69\x6c\x69\x6e\x67\x09\x74\x72\x75\x6e\x63\x61\x74\x65\x06"
  "\x72\x6f\x75\x6e\x64\x0d\x66\x6c\x6f\x6f\x72\x2d\x3e\x65\x78\x61"
  "\x63\x74\x0f\x63\x65\x69\x6c\x69\x6e\x67\x2d\x3e\x65\x78\x61\x63"
  "\x74\x10\x74\x72\x75\x6e\x63\x61\x74\x65\x2d\x3e\x65\x78\x61\x63"
  "\x74\x0d\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74\x0c\x72"
  "\x61\x74\x69\x6f\x6e\x61\x6c\x69\x7a\x65\x13\x72\x61\x74\x69\x6f"
  "\x6e\x61\x6c\x69\x7a\x65\x2d\x3e\x65\x78\x61\x63\x74\x12\x73\x69"
  "\x6d\x70\x6c\x65\x73\x74\x2d\x72\x61\x74\x69\x6f\x6e\x61\x6c\x18"
  "\x73\x69\x6d\x70\x6c\x65\x73\x74\x2d\x65\x78\x61\x63\x74\x2d\x72"
  "\x61\x74\x69\x6f\x6e\x61\x6c\x04\x65\x78\x70\x04\x6c\x6f\x67\x04"
  "\x73\x69\x6e\x04\x63\x6f\x73\x04\x74\x61\x6e\x05\x61\x73\x69\x6e"
  "\x05\x61\x63\x6f\x73\x05\x61\x74\x61\x6e\x05\x73\x71\x72\x74\x05"
  "\x65\x78\x70\x74\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x74\x61\x6e"
  "\x67\x75\x6c\x61\x72\x0b\x6d\x61\x6b\x65\x2d\x70\x6f\x6c\x61\x72"
  "\x0a\x72\x65\x61\x6c\x2d\x70\x61\x72\x74\x0a\x69\x6d\x61\x67\x2d"
  "\x70\x61\x72\x74\x0a\x6d\x61\x67\x6e\x69\x74\x75\x64\x65\x06\x61"
  "\x6e\x67\x6c\x65\x0f\x65\x78\x61\x63\x74\x2d\x3e\x69\x6e\x65\x78"
  "\x61\x63\x74\x0f\x69\x6e\x65\x78\x61\x63\x74\x2d\x3e\x65\x78\x61"
  "\x63\x74\x07\x66\x69\x78\x3a\x31\x2b\x08\x66\x69\x78\x3a\x2d\x31"
  "\x2b\x06\x66\x69\x78\x3a\x2b\x06\x66\x69\x78\x3a\x2d\x06\x66\x69"
  "\x78\x3a\x2a\x0b\x66\x69\x78\x3a\x64\x69\x76\x69\x64\x65\x08\x66"
  "\x69\x78\x3a\x67\x63\x64\x0d\x66\x69\x78\x3a\x71\x75\x6f\x74\x69"
  "\x65\x6e\x74\x0e\x66\x69\x78\x3a\x72\x65\x6d\x61\x69\x6e\x64\x65"
  "\x72\x08\x66\x69\x78\x3a\x61\x6e\x64\x09\x66\x69\x78\x3a\x61\x6e"
  "\x64\x63\x08\x66\x69\x78\x3a\x6e\x6f\x74\x07\x66\x69\x78\x3a\x6f"
  "\x72\x08\x66\x69\x78\x3a\x78\x6f\x72\x06\x69\x6e\x74\x3a\x2b\x06"
  "\x69\x6e\x74\x3a\x2d\x06\x69\x6e\x74\x3a\x2a\x0b\x69\x6e\x74\x3a"
  "\x64\x69\x76\x69\x64\x65\x0d\x69\x6e\x74\x3a\x71\x75\x6f\x74\x69"
  "\x65\x6e\x74\x0e\x69\x6e\x74\x3a\x72\x65\x6d\x61\x69\x6e\x64\x65"
  "\x72\x08\x69\x6e\x74\x3a\x61\x62\x73\x07\x69\x6e\x74\x3a\x31\x2b"
  "\x08\x69\x6e\x74\x3a\x2d\x31\x2b\x0b\x69\x6e\x74\x3a\x6e\x65\x67"
  "\x61\x74\x65\x06\x66\x6c\x6f\x3a\x2b\x06\x66\x6c\x6f\x3a\x2d\x06"
  "\x66\x6c\x6f\x3a\x2a\x06\x66\x6c\x6f\x3a\x2f\x0b\x66\x6c\x6f\x3a"
  "\x6e\x65\x67\x61\x74\x65\x08\x66\x6c\x6f\x3a\x61\x62\x73\x08\x66"
  "\x6c\x6f\x3a\x65\x78\x70\x0a\x66\x6c\x6f\x3a\x65\x78\x70\x6d\x31"
  "\x08\x66\x6c\x6f\x3a\x6c\x6f\x67\x0a\x66\x6c\x6f\x3a\x6c\x6f\x67"
  "\x31\x70\x08\x66\x6c\x6f\x3a\x73\x69\x6e\x08\x66\x6c\x6f\x3a\x63"
  "\x6f\x73\x08\x66\x6c\x6f\x3a\x74\x61\x6e\x09\x66\x6c\x6f\x3a\x61"
  "\x73\x69\x6e\x09\x66\x6c\x6f\x3a\x61\x63\x6f\x73\x09\x66\x6c\x6f"
  "\x3a\x61\x74\x61\x6e\x0a\x66\x6c\x6f\x3a\x61\x74\x61\x6e\x32\x09"
  "\x66\x6c\x6f\x3a\x73\x71\x72\x74\x09\x66\x6c\x6f\x3a\x65\x78\x70"
  "\x74\x0a\x66\x6c\x6f\x3a\x66\x6c\x6f\x6f\x72\x0c\x66\x6c\x6f\x3a"
  "\x63\x65\x69\x6c\x69\x6e\x67\x0d\x66\x6c\x6f\x3a\x74\x72\x75\x6e"
  "\x63\x61\x74\x65\x0a\x66\x6c\x6f\x3a\x72\x6f\x75\x6e\x64\x11\x66"
  "\x6c\x6f\x3a\x66\x6c\x6f\x6f\x72\x2d\x3e\x65\x78\x61\x63\x74\x13"
  "\x66\x6c\x6f\x3a\x63\x65\x69\x6c\x69\x6e\x67\x2d\x3e\x65\x78\x61"
  "\x63\x74\x14\x66\x6c\x6f\x3a\x74\x72\x75\x6e\x63\x61\x74\x65\x2d"
  "\x3e\x65\x78\x61\x63\x74\x11\x66\x6c\x6f\x3a\x72\x6f\x75\x6e\x64"
  "\x2d\x3e\x65\x78\x61\x63\x74\x0c\x6f\x62\x6a\x65\x63\x74\x2d\x74"
  "\x79\x70\x65\x0c\x63\x68\x61\x72\x2d\x61\x73\x63\x69\x69\x3f\x0c"
  "\x61\x73\x63\x69\x69\x2d\x3e\x63\x68\x61\x72\x0e\x63\x68\x61\x72"
  "\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x0a\x63\x68\x61\x72\x2d\x62"
  "\x69\x74\x73\x0a\x63\x68\x61\x72\x2d\x63\x6f\x64\x65\x0e\x63\x68"
  "\x61\x72\x2d\x64\x6f\x77\x6e\x63\x61\x73\x65\x0c\x63\x68\x61\x72"
  "\x2d\x75\x70\x63\x61\x73\x65\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x3e\x63\x68\x61\x72\x0a\x6d\x61\x6b\x65\x2d\x63\x68\x61\x72\x1a"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x04\x63\x61\x72\x04\x63\x64"
  "\x72\x07\x6c\x65\x6e\x67\x74\x68\x0b\x76\x65\x63\x74\x6f\x72\x2d"
  "\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x16\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6d\x61\x78\x69\x6d\x75\x6d\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x77\x1e\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75"
  "\x65\x64\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65"
  "\x73\x1f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x04"
  "\x65\x71\x3f\x07\x66\x61\x6c\x73\x65\x3f\x06\x6e\x75\x6c\x6c\x3f"
  "\x06\x70\x61\x69\x72\x3f\x08\x76\x65\x63\x74\x6f\x72\x3f\x08\x73"
  "\x79\x6d\x62\x6f\x6c\x3f\x08\x73\x74\x72\x69\x6e\x67\x3f\x08\x6e"
  "\x75\x6d\x62\x65\x72\x3f\x06\x63\x68\x61\x72\x3f\x09\x70\x72\x6f"
  "\x6d\x69\x73\x65\x3f\x0c\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x3f\x06\x63\x65\x6c\x6c\x3f\x09\x63\x6f\x6d\x70\x6c\x65\x78\x3f"
  "\x06\x72\x65\x61\x6c\x3f\x0a\x72\x61\x74\x69\x6f\x6e\x61\x6c\x3f"
  "\x09\x69\x6e\x74\x65\x67\x65\x72\x3f\x07\x65\x78\x61\x63\x74\x3f"
  "\x09\x69\x6e\x65\x78\x61\x63\x74\x3f\x06\x7a\x65\x72\x6f\x3f\x0a"
  "\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x0a\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x3f\x05\x6f\x64\x64\x3f\x06\x65\x76\x65\x6e\x3f\x02\x3d"
  "\x02\x3c\x02\x3e\x03\x3c\x3d\x03\x3e\x3d\x0c\x66\x69\x78\x3a\x66"
  "\x69\x78\x6e\x75\x6d\x3f\x0a\x66\x69\x78\x3a\x7a\x65\x72\x6f\x3f"
  "\x0e\x66\x69\x78\x3a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x0e\x66"
  "\x69\x78\x3a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x06\x66\x69\x78"
  "\x3a\x3d\x06\x66\x69\x78\x3a\x3c\x06\x66\x69\x78\x3a\x3e\x0c\x66"
  "\x6c\x6f\x3a\x66\x6c\x6f\x6e\x75\x6d\x3f\x0a\x66\x6c\x6f\x3a\x7a"
  "\x65\x72\x6f\x3f\x0e\x66\x6c\x6f\x3a\x6e\x65\x67\x61\x74\x69\x76"
  "\x65\x3f\x0e\x66\x6c\x6f\x3a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f"
  "\x06\x66\x6c\x6f\x3a\x3d\x06\x66\x6c\x6f\x3a\x3c\x06\x66\x6c\x6f"
  "\x3a\x3e\x0d\x69\x6e\x74\x3a\x69\x6e\x74\x65\x67\x65\x72\x3f\x0a"
  "\x69\x6e\x74\x3a\x7a\x65\x72\x6f\x3f\x0e\x69\x6e\x74\x3a\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x3f\x0e\x69\x6e\x74\x3a\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x3f\x06\x69\x6e\x74\x3a\x3d\x06\x69\x6e\x74\x3a"
  "\x3c\x06\x69\x6e\x74\x3a\x3e\x04\x6e\x6f\x74\x0f\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x34\x12\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x69\x6d\x6d\x75\x74\x61\x62\x6c\x65\x3f\x14\x04\x18"
  "\x17\x06\x11\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x64\x65"
  "\x6c\x61\x79\x10\x23\x5b\x64\x65\x6c\x61\x79\x2d\x6c\x61\x6d\x62"
  "\x64\x61\x5d\x13\x19\x43\x6f\x6d\x70\x69\x6c\x65\x64\x20\x65\x72"
  "\x72\x6f\x72\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x19\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x72\x69\x74\x79\x2d\x63\x6f"
  "\x72\x72\x65\x63\x74\x3f\x16\x04\x15\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x15\x04\x1a"
  "\x73\x63\x6f\x64\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x0c\x04\x19\x74\x79\x70\x65"
  "\x2d\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65"
  "\x6e\x74\x72\x79\x29\x1c\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a"
  "\x73\x74\x61\x63\x6b\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x3c\x15\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x16\x74\x79\x70\x65\x2d\x63\x6f\x64"
  "\x65\x3a\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x13\x0f\x74"
  "\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x63\x65\x6c\x6c\x37\x1d\x74"
  "\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x65\x78\x74\x65\x6e\x64\x65"
  "\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0a\x14\x74\x79\x70"
  "\x65\x2d\x63\x6f\x64\x65\x3a\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x1a\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x65\x78\x74\x65\x6e"
  "\x64\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x15\x02\x1a\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65"
  "\x74\x2d\x74\x79\x70\x65\x33\x10\x11\x64\x65\x66\x69\x6e\x65\x2d"
  "\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x11\x74\x79\x70\x65\x2d\x63"
  "\x6f\x64\x65\x3a\x6c\x61\x6d\x62\x64\x61\x18\x11\x04\x13\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x0f\x65\x6e\x71\x75\x65\x75\x65\x2d\x6e\x6f\x64\x65\x73\x21\x0e"
  "\x65\x6e\x71\x75\x65\x75\x65\x2d\x6e\x6f\x64\x65\x21\x13\x74\x72"
  "\x61\x6e\x73\x69\x74\x69\x76\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x0e\x65\x71\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x2a\x10\x04"
  "\x0c\x61\x6c\x6c\x2d\x65\x71\x2d\x6d\x61\x70\x3f\x0d\x06\x08\x61"
  "\x6c\x6c\x2d\x65\x71\x3f\x0e\x06\x14\x6c\x69\x73\x74\x2d\x66\x69"
  "\x6c\x74\x65\x72\x2d\x69\x6e\x64\x69\x63\x65\x73\x0b\x04\x0a\x04"
  "\x09\x0f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c"
  "\x04\x13\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74\x65\x2d\x69"
  "\x74\x65\x6d\x73\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x0f\x74\x68\x72\x65\x65\x2d\x77\x61\x79"
  "\x2d\x73\x6f\x72\x74\x04\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x02\x1f\x22\x25\x24\x20\x27\x19\x23\x26"
  "\x1c\x0b\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69"
  "\x64\x2d\x62\x69\x6e\x64\x04\x21\x04\x0f\x04\x04\x6d\x61\x70\x27"
  "\x05\x27\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x04\x07\x61\x70\x70"
  "\x65\x6e\x64\x06\x05\x6d\x61\x70\x2a\x09\x62\xc6\x01\x80\x80\x04"
  "\x61\xc4\x01\x81\x81\x02\x60\xc2\x01\x81\x81\x02\x5f\xc0\x01\x81"
  "\x85\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba"
  "\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81\x83\x02"
  "\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81"
  "\x83\x02\x56\xae\x01\x81\x87\x02\x55\xac\x01\x81\x85\x02\x54\xaa"
  "\x01\x81\x83\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01\x81\x8f\x02"
  "\x51\xa4\x01\x81\x8d\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81"
  "\x85\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x87\x02\x4c\x9a"
  "\x01\x81\x83\x02\x4b\x98\x01\x81\x87\x02\x4a\x96\x01\x81\x8f\x02"
  "\x49\x94\x01\x81\x8d\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81"
  "\x85\x02\x46\x8e\x01\x81\x89\x02\x45\x8c\x01\x81\x87\x02\x44\x8a"
  "\x01\x81\x83\x02\x43\x88\x01\x83\x04\x42\x86\x01\x83\x04\x41\x84"
  "\x01\x81\x8d\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x85\x02"
  "\x3e\x7e\x81\x87\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b"
  "\x78\x81\x85\x02\x3a\x76\x81\x87\x02\x39\x74\x81\x83\x02\x38\x72"
  "\x81\x87\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x83\x02\x35\x6c\x81"
  "\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83"
  "\x02\x31\x64\x81\x83\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02"
  "\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b"
  "\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52"
  "\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81"
  "\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83"
  "\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x85\x02"
  "\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b"
  "\x38\x81\x83\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x83\x02\x18\x32"
  "\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81"
  "\x85\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x83\x02\x12\x26\x81\x87"
  "\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x89\x02"
  "\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83"
  "\x02\x01\x04\x81\x83\x02\xc5\x01\xbe\x03";

SCHEME_OBJECT *
utils_so_data_c801ec88371670a4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_utils_so_data_c801ec88371670a4 [0]))), (sizeof (prog_utils_so_data_c801ec88371670a4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_115]));
}

DECLARE_COMPILED_DATA_NS ("utils.so", utils_so_data_c801ec88371670a4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("utils.so", "f0ad987d3abbd189")
