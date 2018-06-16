/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:20-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_13 15
#define LABEL_1_14 17
#define TAG_1_15 7
#define LABEL_1_17 19
#define TAG_1_18 8
#define LABEL_1_19 21
#define LABEL_1_20 23
#define LABEL_1_21 25
#define TAG_1_22 11
#define LABEL_1_25 27
#define ENVIRONMENT_LABEL_1_3 48
#define DEBUGGING_LABEL_1_2 47
#define EXECUTE_CACHE_1_29 29
#define EXECUTE_CACHE_1_28 31
#define EXECUTE_CACHE_1_27 33
#define EXECUTE_CACHE_1_26 35
#define EXECUTE_CACHE_1_24 37
#define EXECUTE_CACHE_1_23 39
#define EXECUTE_CACHE_1_16 41
#define EXECUTE_CACHE_1_10 43
#define EXECUTE_CACHE_1_6 45
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      goto Z___constructors_14;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto lambda_21;

    case 12:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___constructors_17)
DEFLABEL (Z___constructors_14)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd25.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_21])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_17])));
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

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_1_17);

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

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_1_21);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_10 7
#define LABEL_2_6 9
#define LABEL_2_7 11
#define LABEL_2_12 13
#define LABEL_2_13 15
#define LABEL_2_14 17
#define LABEL_2_15 19
#define LABEL_2_8 21
#define LABEL_2_9 23
#define LABEL_2_20 25
#define LABEL_2_22 27
#define LABEL_2_16 29
#define LABEL_2_21 31
#define LABEL_2_27 33
#define LABEL_2_26 35
#define LABEL_2_25 37
#define LABEL_2_30 39
#define LABEL_2_31 41
#define LABEL_2_28 43
#define LABEL_2_32 45
#define ENVIRONMENT_LABEL_2_3 69
#define DEBUGGING_LABEL_2_2 68
#define OBJECT_2_4 67
#define OBJECT_2_3 66
#define OBJECT_2_2 65
#define OBJECT_2_1 64
#define OBJECT_2_0 63
#define EXECUTE_CACHE_2_29 47
#define EXECUTE_CACHE_2_24 49
#define EXECUTE_CACHE_2_23 51
#define EXECUTE_CACHE_2_19 53
#define EXECUTE_CACHE_2_18 55
#define EXECUTE_CACHE_2_17 57
#define EXECUTE_CACHE_2_11 59
#define FREE_REFERENCE_2_0 62
#define FREE_REFERENCES_LABEL_2_0 46
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
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
      goto build_table_24;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_2_10);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_23;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_22;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto loop_6;

    case 12:
      current_block = (Rpc - LABEL_2_22);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_2_30);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_2_31);
      goto label_35;

    case 20:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_table_37)
DEFLABEL (build_table_24)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_41;
  Wrd22 = Wrd26;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto loop_6;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd23.pObj));

DEFLABEL (label_27)
  (Wrd22.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (lambda_38)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_53)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_52;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_51)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_50;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_49)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_48;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_47)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_44;

DEFLABEL (label_45)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_44)
DEFLABEL (label_46)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (label_48)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_30)
  (Wrd21.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_57)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_56;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_58;

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_2_4]);

DEFLABEL (label_58)
DEFLABEL (label_60)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_70;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_69)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_68;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_67)
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_63;

DEFLABEL (label_62)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_62;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if ((Wrd33.Lng) < (Wrd35.Lng))
    goto label_65;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_64;

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_2_4]);

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_35)
  (Wrd18.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (loop_39)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_2_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_71;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (label_71)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_75;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_73;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_6;

DEFLABEL (label_73)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_33)
  (Wrd6.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto table_find_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_find_3)
DEFLABEL (table_find_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_14 13
#define LABEL_4_16 15
#define TAG_4_17 6
#define LABEL_4_11 17
#define TAG_4_12 7
#define LABEL_4_13 19
#define LABEL_4_18 21
#define LABEL_4_20 23
#define LABEL_4_21 25
#define ENVIRONMENT_LABEL_4_3 38
#define DEBUGGING_LABEL_4_2 37
#define OBJECT_4_1 36
#define OBJECT_4_0 35
#define EXECUTE_CACHE_4_15 27
#define EXECUTE_CACHE_4_8 29
#define EXECUTE_CACHE_4_19 31
#define EXECUTE_CACHE_4_6 33
#define FREE_REFERENCES_LABEL_4_0 26
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto top_level_constructors_15;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_4_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_4_11);
      goto lambda_22;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_4_21);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_constructors_20)
DEFLABEL (top_level_constructors_15)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [2]) = Rvl;
  goto loop_13;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_4_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_16])));
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

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_11])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  ((Wrd22.pObj) [4]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_26;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_4_16);

DEFLABEL (lambda_5)
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

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_4_11);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [2]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_28;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_13;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_9 9
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_7 15
#define LABEL_5_15 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define LABEL_5_11 23
#define LABEL_5_19 25
#define LABEL_5_20 27
#define LABEL_5_22 29
#define LABEL_5_27 31
#define LABEL_5_28 33
#define LABEL_5_25 35
#define LABEL_5_37 37
#define LABEL_5_40 39
#define LABEL_5_30 41
#define TAG_5_31 19
#define LABEL_5_32 43
#define TAG_5_33 20
#define LABEL_5_34 45
#define LABEL_5_48 47
#define LABEL_5_44 49
#define LABEL_5_41 51
#define LABEL_5_42 53
#define LABEL_5_38 55
#define LABEL_5_39 57
#define LABEL_5_35 59
#define LABEL_5_36 61
#define LABEL_5_46 63
#define TAG_5_47 30
#define LABEL_5_50 65
#define LABEL_5_51 67
#define LABEL_5_52 69
#define LABEL_5_53 71
#define LABEL_5_54 73
#define LABEL_5_55 75
#define LABEL_5_56 77
#define TAG_5_57 37
#define LABEL_5_58 79
#define TAG_5_59 38
#define LABEL_5_60 81
#define TAG_5_61 39
#define LABEL_5_62 83
#define TAG_5_63 40
#define ENVIRONMENT_LABEL_5_3 123
#define DEBUGGING_LABEL_5_2 122
#define OBJECT_5_8 121
#define OBJECT_5_7 120
#define OBJECT_5_6 119
#define OBJECT_5_5 118
#define OBJECT_5_4 117
#define OBJECT_5_3 116
#define OBJECT_5_2 115
#define OBJECT_5_1 114
#define OBJECT_5_0 113
#define EXECUTE_CACHE_5_49 85
#define EXECUTE_CACHE_5_45 87
#define EXECUTE_CACHE_5_43 89
#define EXECUTE_CACHE_5_29 91
#define EXECUTE_CACHE_5_26 93
#define EXECUTE_CACHE_5_23 95
#define EXECUTE_CACHE_5_24 97
#define EXECUTE_CACHE_5_21 99
#define EXECUTE_CACHE_5_18 101
#define EXECUTE_CACHE_5_12 103
#define EXECUTE_CACHE_5_10 105
#define EXECUTE_CACHE_5_8 107
#define FREE_REFERENCE_5_0 110
#define FREE_ASSIGNMENT_5_0 112
#define FREE_REFERENCES_LABEL_5_0 84
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd30;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto top_level_constructor_50;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_52;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_53;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_44;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_40;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_39;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_38;

    case 10:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_46;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_45;

    case 13:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_41;

    case 14:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_34;

    case 15:
      current_block = (Rpc - LABEL_5_28);
      goto continuation_33;

    case 16:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_5_37);
      goto label_57;

    case 18:
      current_block = (Rpc - LABEL_5_40);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_5_30);
      goto lambda_60;

    case 20:
      current_block = (Rpc - LABEL_5_32);
      goto lambda_61;

    case 21:
      current_block = (Rpc - LABEL_5_34);
      goto continuation_32;

    case 22:
      current_block = (Rpc - LABEL_5_48);
      goto continuation_26;

    case 23:
      current_block = (Rpc - LABEL_5_44);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_5_41);
      goto continuation_10;

    case 25:
      current_block = (Rpc - LABEL_5_42);
      goto continuation_9;

    case 26:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_5_39);
      goto continuation_15;

    case 28:
      current_block = (Rpc - LABEL_5_35);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_5_36);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_5_46);
      goto lambda_62;

    case 31:
      current_block = (Rpc - LABEL_5_50);
      goto continuation_29;

    case 32:
      current_block = (Rpc - LABEL_5_51);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_5_52);
      goto continuation_8;

    case 34:
      current_block = (Rpc - LABEL_5_53);
      goto continuation_13;

    case 35:
      current_block = (Rpc - LABEL_5_54);
      goto continuation_19;

    case 36:
      current_block = (Rpc - LABEL_5_55);
      goto continuation_27;

    case 37:
      current_block = (Rpc - LABEL_5_56);
      goto lambda_63;

    case 38:
      current_block = (Rpc - LABEL_5_58);
      goto lambda_64;

    case 39:
      current_block = (Rpc - LABEL_5_60);
      goto lambda_65;

    case 40:
      current_block = (Rpc - LABEL_5_62);
      goto lambda_66;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_constructor_59)
DEFLABEL (top_level_constructor_50)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_87;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_85;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_83;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_77;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_5_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_5_27);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_5_34);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_46])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_45]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_51]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_5_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_5_50);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_55);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_63);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_62])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_48]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_5_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_49]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_5_48);
  goto label_68;

DEFLABEL (label_70)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 62)
    goto label_74;
  if ((Wrd12.uLng) == 10)
    goto label_71;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_43]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_41);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_52]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_52);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_57);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_56])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd27.Obj);
  if (! ((Wrd12.uLng) == 10))
    goto label_73;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_72)
  (Wrd39.Obj) = (current_block [OBJECT_5_7]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_38);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_53]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_53);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_58])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_6]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd45.Obj);
  if (! ((Wrd12.uLng) == 62))
    goto label_76;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_75)
  (Wrd58.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_5_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_35);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_54]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_54);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_60])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_82;
  Wrd8 = Wrd12;

DEFLABEL (label_81)
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd18.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_78)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_32])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_80)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_14])), (Wrd18.pObj), (Wrd14.Obj));

DEFLABEL (label_55)
  goto label_78;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd14.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_30])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_53)
  (Wrd14.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_5_30);

DEFLABEL (lambda_47)
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

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_5_32);

DEFLABEL (lambda_42)
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

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_5_46);

DEFLABEL (lambda_35)
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

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_5_56);

DEFLABEL (lambda_11)
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

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_5_58);

DEFLABEL (lambda_17)
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

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_5_60);

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

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_5_62);

DEFLABEL (lambda_30)
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

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_9 9
#define LABEL_6_13 11
#define LABEL_6_17 13
#define LABEL_6_11 15
#define LABEL_6_7 17
#define LABEL_6_22 19
#define LABEL_6_8 21
#define LABEL_6_20 23
#define LABEL_6_21 25
#define LABEL_6_16 27
#define LABEL_6_25 29
#define LABEL_6_14 31
#define LABEL_6_26 33
#define LABEL_6_27 35
#define LABEL_6_28 37
#define LABEL_6_29 39
#define LABEL_6_33 41
#define LABEL_6_34 43
#define LABEL_6_35 45
#define LABEL_6_36 47
#define LABEL_6_40 49
#define LABEL_6_30 51
#define LABEL_6_31 53
#define LABEL_6_32 55
#define LABEL_6_37 57
#define LABEL_6_38 59
#define LABEL_6_39 61
#define ENVIRONMENT_LABEL_6_3 90
#define DEBUGGING_LABEL_6_2 89
#define OBJECT_6_9 88
#define OBJECT_6_8 87
#define OBJECT_6_7 86
#define OBJECT_6_6 85
#define OBJECT_6_5 84
#define OBJECT_6_4 83
#define OBJECT_6_3 82
#define OBJECT_6_2 81
#define OBJECT_6_1 80
#define OBJECT_6_0 79
#define EXECUTE_CACHE_6_41 63
#define EXECUTE_CACHE_6_23 65
#define EXECUTE_CACHE_6_19 67
#define EXECUTE_CACHE_6_18 69
#define EXECUTE_CACHE_6_24 71
#define EXECUTE_CACHE_6_15 73
#define EXECUTE_CACHE_6_12 75
#define EXECUTE_CACHE_6_10 77
#define FREE_REFERENCES_LABEL_6_0 62
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto top_level_updater_52;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_54;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_55;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_34;

    case 8:
      current_block = (Rpc - LABEL_6_22);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_33;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_37;

    case 11:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_36;

    case 12:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_6_25);
      goto label_58;

    case 14:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_6_26);
      goto label_59;

    case 16:
      current_block = (Rpc - LABEL_6_27);
      goto loop_18;

    case 17:
      current_block = (Rpc - LABEL_6_28);
      goto label_60;

    case 18:
      current_block = (Rpc - LABEL_6_29);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_6_33);
      goto label_62;

    case 20:
      current_block = (Rpc - LABEL_6_34);
      goto loop_30;

    case 21:
      current_block = (Rpc - LABEL_6_35);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_6_36);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_6_40);
      goto label_65;

    case 24:
      current_block = (Rpc - LABEL_6_30);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_15;

    case 26:
      current_block = (Rpc - LABEL_6_32);
      goto continuation_14;

    case 27:
      current_block = (Rpc - LABEL_6_37);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_6_39);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_updater_67)
DEFLABEL (top_level_updater_52)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_85;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_84)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_83;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_82)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_77;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_71)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_74;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 62))
    goto label_73;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_72)
  goto loop_30;

DEFLABEL (label_73)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  if (! ((Wrd21.uLng) == 10))
    goto label_70;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_76;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_75)
  goto loop_18;

DEFLABEL (label_76)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  if (! ((Wrd24.uLng) == 1))
    goto label_81;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_79;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (label_79)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (loop_68)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_6_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_92;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd58.Lng) == 0))
    goto label_87;

DEFLABEL (label_86)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_91;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_91;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_90)
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd48.Obj) = (Rsp [8]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_89;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_89;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd47.Lng))))
    goto label_89;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd38.pObj) = (& ((Wrd45.pObj) [(Wrd35.Lng)]));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_88)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_30);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_89)
  (Wrd50.Obj) = (Rsp [8]);
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_86;

DEFLABEL (loop_69)
DEFLABEL (loop_30)
  INTERRUPT_CHECK (26, LABEL_6_34);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_99;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd58.Lng) == 0))
    goto label_94;

DEFLABEL (label_93)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_98;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_98;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_97)
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd48.Obj) = (Rsp [8]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_96;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_96;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd47.Lng))))
    goto label_96;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd38.pObj) = (& ((Wrd45.pObj) [(Wrd35.Lng)]));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_6_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6_9]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_6_37);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_30;

DEFLABEL (label_96)
  (Wrd50.Obj) = (Rsp [8]);
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_93;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_8 13
#define LABEL_7_15 15
#define LABEL_7_12 17
#define LABEL_7_19 19
#define LABEL_7_21 21
#define LABEL_7_22 23
#define LABEL_7_16 25
#define LABEL_7_23 27
#define LABEL_7_26 29
#define LABEL_7_27 31
#define LABEL_7_28 33
#define LABEL_7_30 35
#define LABEL_7_20 37
#define LABEL_7_31 39
#define ENVIRONMENT_LABEL_7_3 70
#define DEBUGGING_LABEL_7_2 69
#define OBJECT_7_7 68
#define OBJECT_7_6 67
#define OBJECT_7_5 66
#define OBJECT_7_4 65
#define OBJECT_7_3 64
#define OBJECT_7_2 63
#define OBJECT_7_1 62
#define OBJECT_7_0 61
#define EXECUTE_CACHE_7_29 41
#define EXECUTE_CACHE_7_25 43
#define EXECUTE_CACHE_7_24 45
#define EXECUTE_CACHE_7_18 47
#define EXECUTE_CACHE_7_17 49
#define EXECUTE_CACHE_7_14 51
#define EXECUTE_CACHE_7_13 53
#define EXECUTE_CACHE_7_11 55
#define EXECUTE_CACHE_7_7 57
#define FREE_REFERENCE_7_0 60
#define FREE_REFERENCES_LABEL_7_0 40
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd40;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto constructor_35;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto process_33;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_7_21);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_7_22);
      goto loop_21;

    case 11:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_7_26);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_7_27);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_7_28);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_7_30);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_7_31);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constructor_46)
DEFLABEL (constructor_35)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto process_33;

DEFLABEL (process_47)
DEFLABEL (process_33)
  DLINK_INTERRUPT_CHECK (25, LABEL_7_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_49;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  Rvl = ((Wrd12.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_55;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_51)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_52)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;

DEFLABEL (label_53)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (label_54)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 10)
    goto label_53;
  if ((Wrd12.uLng) == 62)
    goto label_53;
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_55)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  if (! ((Wrd17.uLng) == 1))
    goto label_59;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_58)
  Rdl = (& (Rsp [2]));
  goto process_33;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_57;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_56)
  goto loop_21;

DEFLABEL (label_57)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_38)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_37)
  (Wrd40.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd40.Obj));
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (loop_48)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_7_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_75;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd35.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [3]));
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_69)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_24]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_7_4]))
    goto label_62;
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_61;
  Wrd17 = Wrd21;

DEFLABEL (label_60)
  (Rsp [0]) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_7]), 2);

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_30])), (Wrd18.pObj));

DEFLABEL (label_39)
  (Wrd17.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd23.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_68;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_67)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_66;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_64;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_63)
  (Rsp [2]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (label_64)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_42)
  (Wrd40.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_41)
  (Wrd33.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_40)
  (Wrd24.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [7]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_74;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_73)
  Rdl = (& (Rsp [2]));
  goto process_33;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_72;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_71)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_72)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_44)
  (Wrd10.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_69;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_9 9
#define EXECUTE_CACHE_8_8 11
#define EXECUTE_CACHE_8_6 13
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
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
      goto compiled_procedure_constructor_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedure_constructor_5)
DEFLABEL (compiled_procedure_constructor_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_4 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_12 13
#define LABEL_9_13 15
#define LABEL_9_14 17
#define LABEL_9_15 19
#define LABEL_9_16 21
#define LABEL_9_28 23
#define LABEL_9_9 25
#define LABEL_9_10 27
#define LABEL_9_18 29
#define LABEL_9_34 31
#define LABEL_9_37 33
#define LABEL_9_27 35
#define LABEL_9_38 37
#define LABEL_9_25 39
#define LABEL_9_23 41
#define LABEL_9_45 43
#define LABEL_9_24 45
#define LABEL_9_20 47
#define LABEL_9_21 49
#define LABEL_9_54 51
#define LABEL_9_55 53
#define LABEL_9_30 55
#define LABEL_9_56 57
#define LABEL_9_60 59
#define LABEL_9_61 61
#define LABEL_9_35 63
#define LABEL_9_36 65
#define LABEL_9_39 67
#define LABEL_9_40 69
#define LABEL_9_43 71
#define LABEL_9_46 73
#define LABEL_9_63 75
#define LABEL_9_47 77
#define LABEL_9_50 79
#define LABEL_9_51 81
#define LABEL_9_65 83
#define LABEL_9_69 85
#define LABEL_9_70 87
#define LABEL_9_57 89
#define LABEL_9_74 91
#define LABEL_9_75 93
#define LABEL_9_76 95
#define LABEL_9_77 97
#define LABEL_9_59 99
#define LABEL_9_80 101
#define LABEL_9_81 103
#define LABEL_9_62 105
#define LABEL_9_82 107
#define LABEL_9_83 109
#define LABEL_9_71 111
#define LABEL_9_72 113
#define LABEL_9_66 115
#define LABEL_9_67 117
#define LABEL_9_85 119
#define LABEL_9_86 121
#define LABEL_9_88 123
#define LABEL_9_89 125
#define ENVIRONMENT_LABEL_9_3 216
#define DEBUGGING_LABEL_9_2 215
#define OBJECT_9_37 214
#define OBJECT_9_36 213
#define OBJECT_9_35 212
#define OBJECT_9_34 211
#define OBJECT_9_33 210
#define OBJECT_9_32 209
#define OBJECT_9_31 208
#define OBJECT_9_30 207
#define OBJECT_9_29 206
#define OBJECT_9_28 205
#define OBJECT_9_27 204
#define OBJECT_9_26 203
#define OBJECT_9_25 202
#define OBJECT_9_24 201
#define OBJECT_9_23 200
#define OBJECT_9_22 199
#define OBJECT_9_21 198
#define OBJECT_9_20 197
#define OBJECT_9_19 196
#define OBJECT_9_18 195
#define OBJECT_9_17 194
#define OBJECT_9_16 193
#define OBJECT_9_15 192
#define OBJECT_9_14 191
#define OBJECT_9_13 190
#define OBJECT_9_12 189
#define OBJECT_9_11 188
#define OBJECT_9_10 187
#define OBJECT_9_9 186
#define OBJECT_9_8 185
#define OBJECT_9_7 184
#define OBJECT_9_6 183
#define OBJECT_9_5 182
#define OBJECT_9_4 181
#define OBJECT_9_3 180
#define OBJECT_9_2 179
#define OBJECT_9_1 178
#define OBJECT_9_0 177
#define EXECUTE_CACHE_9_90 127
#define EXECUTE_CACHE_9_87 129
#define EXECUTE_CACHE_9_84 131
#define EXECUTE_CACHE_9_79 133
#define EXECUTE_CACHE_9_78 135
#define EXECUTE_CACHE_9_73 137
#define EXECUTE_CACHE_9_68 139
#define EXECUTE_CACHE_9_58 141
#define EXECUTE_CACHE_9_53 143
#define EXECUTE_CACHE_9_52 145
#define EXECUTE_CACHE_9_49 147
#define EXECUTE_CACHE_9_48 149
#define EXECUTE_CACHE_9_44 151
#define EXECUTE_CACHE_9_42 153
#define EXECUTE_CACHE_9_41 155
#define EXECUTE_CACHE_9_33 157
#define EXECUTE_CACHE_9_31 159
#define EXECUTE_CACHE_9_64 161
#define EXECUTE_CACHE_9_32 163
#define EXECUTE_CACHE_9_29 165
#define EXECUTE_CACHE_9_26 167
#define EXECUTE_CACHE_9_22 169
#define EXECUTE_CACHE_9_19 171
#define EXECUTE_CACHE_9_17 173
#define EXECUTE_CACHE_9_11 175
#define FREE_REFERENCES_LABEL_9_0 126
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd14;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd118;
  machine_word Wrd32;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd29;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd152;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd147;
  machine_word Wrd144;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_4);
      goto Z___simple_c_object_78;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_85;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_84;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_83;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto label_82;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_81;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_80;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_9_28);
      goto process_68;

    case 11:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_72;

    case 12:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_71;

    case 13:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_73;

    case 14:
      current_block = (Rpc - LABEL_9_34);
      goto label_86;

    case 15:
      current_block = (Rpc - LABEL_9_37);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_9_27);
      goto continuation_33;

    case 17:
      current_block = (Rpc - LABEL_9_38);
      goto label_87;

    case 18:
      current_block = (Rpc - LABEL_9_25);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_9_45);
      goto label_88;

    case 21:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_30;

    case 23:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_9_54);
      goto continuation_63;

    case 25:
      current_block = (Rpc - LABEL_9_55);
      goto continuation_42;

    case 26:
      current_block = (Rpc - LABEL_9_30);
      goto continuation_41;

    case 27:
      current_block = (Rpc - LABEL_9_56);
      goto label_91;

    case 28:
      current_block = (Rpc - LABEL_9_60);
      goto label_89;

    case 29:
      current_block = (Rpc - LABEL_9_61);
      goto label_90;

    case 30:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_76;

    case 31:
      current_block = (Rpc - LABEL_9_36);
      goto continuation_75;

    case 32:
      current_block = (Rpc - LABEL_9_39);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_9_40);
      goto continuation_36;

    case 34:
      current_block = (Rpc - LABEL_9_43);
      goto continuation_17;

    case 35:
      current_block = (Rpc - LABEL_9_46);
      goto continuation_27;

    case 36:
      current_block = (Rpc - LABEL_9_63);
      goto label_92;

    case 37:
      current_block = (Rpc - LABEL_9_47);
      goto continuation_26;

    case 38:
      current_block = (Rpc - LABEL_9_50);
      goto continuation_32;

    case 39:
      current_block = (Rpc - LABEL_9_51);
      goto continuation_31;

    case 40:
      current_block = (Rpc - LABEL_9_65);
      goto continuation_53;

    case 41:
      current_block = (Rpc - LABEL_9_69);
      goto continuation_47;

    case 42:
      current_block = (Rpc - LABEL_9_70);
      goto continuation_46;

    case 43:
      current_block = (Rpc - LABEL_9_57);
      goto continuation_45;

    case 44:
      current_block = (Rpc - LABEL_9_74);
      goto label_96;

    case 45:
      current_block = (Rpc - LABEL_9_75);
      goto label_95;

    case 46:
      current_block = (Rpc - LABEL_9_76);
      goto label_94;

    case 47:
      current_block = (Rpc - LABEL_9_77);
      goto label_93;

    case 48:
      current_block = (Rpc - LABEL_9_59);
      goto continuation_64;

    case 49:
      current_block = (Rpc - LABEL_9_80);
      goto label_97;

    case 50:
      current_block = (Rpc - LABEL_9_81);
      goto label_98;

    case 51:
      current_block = (Rpc - LABEL_9_62);
      goto continuation_19;

    case 52:
      current_block = (Rpc - LABEL_9_82);
      goto continuation_21;

    case 53:
      current_block = (Rpc - LABEL_9_83);
      goto continuation_20;

    case 54:
      current_block = (Rpc - LABEL_9_71);
      goto continuation_59;

    case 55:
      current_block = (Rpc - LABEL_9_72);
      goto continuation_58;

    case 56:
      current_block = (Rpc - LABEL_9_66);
      goto continuation_55;

    case 57:
      current_block = (Rpc - LABEL_9_67);
      goto continuation_54;

    case 58:
      current_block = (Rpc - LABEL_9_85);
      goto continuation_61;

    case 59:
      current_block = (Rpc - LABEL_9_86);
      goto continuation_60;

    case 60:
      current_block = (Rpc - LABEL_9_88);
      goto continuation_57;

    case 61:
      current_block = (Rpc - LABEL_9_89);
      goto continuation_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___simple_c_object_100)
DEFLABEL (Z___simple_c_object_78)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd144.Obj) = (current_block [OBJECT_9_0]);
  (Wrd147.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd147.Lng))))
    goto label_147;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd144.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_146;

DEFLABEL (label_145)
  (Wrd13.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_103;

DEFLABEL (label_102)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_103)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_105;
  (Wrd15.Obj) = (current_block [OBJECT_9_4]);
  goto label_104;

DEFLABEL (label_105)
  (Wrd15.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_104)
DEFLABEL (label_144)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;

DEFLABEL (label_108)
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd142.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Rsp [0]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 30))
    goto label_107;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_106)
  (Wrd17.Obj) = (current_block [OBJECT_9_22]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_9_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_33]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_107)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 30)
    goto label_141;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd110.Obj) = (current_block [OBJECT_9_7]);
  (Wrd113.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd113.Lng))))
    goto label_140;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  if ((Wrd32.Obj) == (Wrd26.Obj))
    goto label_133;

DEFLABEL (label_139)
  (Wrd100.Obj) = (current_block [OBJECT_9_8]);
  (Wrd103.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd103.Lng))))
    goto label_138;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd100.Obj));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd36.Obj) == (Wrd38.Obj))
    goto label_133;

DEFLABEL (label_137)
  (Wrd90.Obj) = (current_block [OBJECT_9_9]);
  (Wrd93.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd93.Lng))))
    goto label_136;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd90.Obj));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd40.Obj) == (Wrd42.Obj))
    goto label_133;

DEFLABEL (label_135)
  (Wrd80.Obj) = (current_block [OBJECT_9_10]);
  (Wrd83.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd83.Lng))))
    goto label_134;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_133;

DEFLABEL (label_132)
  (Wrd47.Obj) = (current_block [OBJECT_9_11]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd57.Lng))))
    goto label_102;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd51.Obj) == (Wrd53.Obj))
    goto label_111;
  (Wrd49.Obj) = (current_block [OBJECT_9_4]);
  goto label_110;

DEFLABEL (label_111)
  (Wrd49.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_110)
DEFLABEL (label_131)
  Rsp = (& (Rsp [3]));
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;

DEFLABEL (label_112)
  goto process_68;

DEFLABEL (label_113)
  (Wrd59.Obj) = (Rsp [0]);
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_130;
  if ((Wrd59.Obj) == (current_block [OBJECT_9_3]))
    goto label_129;
  if ((Wrd59.Obj) == (current_block [OBJECT_9_14]))
    goto label_128;
  if ((Wrd59.Obj) == (current_block [OBJECT_9_16]))
    goto label_126;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_20]), 1);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_9_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_116;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) < (-1L))
    goto label_115;

DEFLABEL (label_114)
  (Wrd11.Obj) = (current_block [OBJECT_9_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_39]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_40]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_41]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_9_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_33]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_9_39);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_115)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_37]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_9_25]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_42]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_9_37);
  goto label_114;

DEFLABEL (label_116)
  (Wrd26.Obj) = (current_block [OBJECT_9_23]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_38]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_87)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  goto label_115;

DEFLABEL (label_117)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 2))
    goto label_118;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_9_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_53]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_50]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_51]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_52]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_9_51);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_53]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_9_50);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_118)
  if ((Wrd12.uLng) == 47)
    goto label_121;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  Rvl = (current_block [OBJECT_9_26]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_44]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_43);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_120;
  (Wrd14.Obj) = (current_block [OBJECT_9_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_42]));

DEFLABEL (label_120)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_62]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_53]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_62);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_83]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_35]), 1);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_83);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_53]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_9_82);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_84]));

DEFLABEL (label_121)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_9_18]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_19]), 1);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_49]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_125;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_124)
  (Wrd16.Obj) = (current_block [OBJECT_9_28]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_46]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_48]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_9_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_33]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_9_46);
  (Rsp [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_123;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_122)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_64]));

DEFLABEL (label_123)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_63]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_92)
  (Wrd6.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_45]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_27]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  Rvl = (current_block [OBJECT_9_17]);

DEFLABEL (label_127)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_128)
  Rvl = (current_block [OBJECT_9_15]);
  goto label_127;

DEFLABEL (label_129)
  Rvl = (current_block [OBJECT_9_13]);
  goto label_127;

DEFLABEL (label_130)
  Rvl = (current_block [OBJECT_9_12]);
  goto label_127;

DEFLABEL (label_133)
  Rsp = (& (Rsp [2]));
  goto label_112;

DEFLABEL (label_134)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_80)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  goto label_133;

DEFLABEL (label_136)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_81)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  goto label_133;

DEFLABEL (label_138)
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_133;

DEFLABEL (label_140)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_83)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  goto label_133;

DEFLABEL (label_141)
  if (! ((Wrd26.uLng) == 30))
    goto label_143;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [1]);
  (Wrd124.Obj) = (MAKE_OBJECT (26, (Wrd123.uLng)));
  (* (--Rsp)) = (Wrd124.Obj);

DEFLABEL (label_142)
  (Wrd131.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd138.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd138.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_33]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_143)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_146)
  Rsp = (& (Rsp [2]));
  goto label_108;

DEFLABEL (label_147)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_85)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  goto label_146;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  goto label_112;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_108;

DEFLABEL (process_101)
DEFLABEL (process_68)
  INTERRUPT_CHECK (26, LABEL_9_28);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 6))
    goto label_148;
  (Wrd11.Obj) = (current_block [OBJECT_9_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_29]));

DEFLABEL (label_148)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_31]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_9_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  (Wrd7.Obj) = (current_block [OBJECT_9_31]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_29]));

DEFLABEL (label_149)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_55]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_9_7]);
  (Wrd68.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd68.Lng))))
    goto label_186;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_185;

DEFLABEL (label_184)
  (Wrd16.Obj) = (current_block [OBJECT_9_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd26.Lng)))
    goto label_150;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_150)
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_152;
  (Wrd18.Obj) = (current_block [OBJECT_9_4]);
  goto label_151;

DEFLABEL (label_152)
  (Wrd18.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_151)
DEFLABEL (label_183)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_170;

DEFLABEL (label_169)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_57]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_58]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_9_57);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_70]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_79]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_9_70);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_71]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_72]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_73]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_9_72);
  (* (--Rsp)) = Rvl;
  goto process_68;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_9_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_85]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_86]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_87]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_9_86);
  (* (--Rsp)) = Rvl;
  goto process_68;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_9_85);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_153)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_69]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_9_7]);
  (Wrd82.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd82.Lng))))
    goto label_168;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd79.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_161;

DEFLABEL (label_167)
  (Wrd69.Obj) = (current_block [OBJECT_9_8]);
  (Wrd72.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd72.Lng))))
    goto label_166;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd69.Obj));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_161;

DEFLABEL (label_165)
  (Wrd59.Obj) = (current_block [OBJECT_9_9]);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd62.Lng))))
    goto label_164;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_161;

DEFLABEL (label_163)
  (Wrd49.Obj) = (current_block [OBJECT_9_10]);
  (Wrd52.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd52.Lng))))
    goto label_162;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_161;

DEFLABEL (label_160)
  (Wrd31.Obj) = (current_block [OBJECT_9_11]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd41.Lng)))
    goto label_154;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_154)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_156;
  (Wrd33.Obj) = (current_block [OBJECT_9_4]);
  goto label_155;

DEFLABEL (label_156)
  (Wrd33.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_155)
DEFLABEL (label_159)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd33.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_158;

DEFLABEL (label_157)
  (Wrd43.Obj) = (current_block [OBJECT_9_33]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_42]));

DEFLABEL (label_158)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_65]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_78]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_9_65);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_157;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_66]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_67]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_68]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_9_67);
  (* (--Rsp)) = Rvl;
  goto process_68;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_9_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_88]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_89]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_90]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_9_89);
  (* (--Rsp)) = Rvl;
  goto process_68;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_9_88);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (label_161)
  Rsp = (& (Rsp [2]));
  goto label_158;

DEFLABEL (label_162)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_77]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_93)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_160;
  goto label_161;

DEFLABEL (label_164)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_76]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_94)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_163;
  goto label_161;

DEFLABEL (label_166)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_75]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_95)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_165;
  goto label_161;

DEFLABEL (label_168)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_74]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_96)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_167;
  goto label_161;

DEFLABEL (label_170)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_59]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_9_18]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_54]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_182;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if ((Wrd63.Lng) < 0)
    goto label_179;

DEFLABEL (label_178)
  (Wrd47.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_177)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_49]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_9_59);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 30))
    goto label_176;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_175)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_174;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd32.Lng) < 0)
    goto label_172;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_171;

DEFLABEL (label_172)
  (Wrd34.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_171)
DEFLABEL (label_173)
  (Wrd35.Obj) = (current_block [OBJECT_9_34]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_64]));

DEFLABEL (label_174)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_81]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_98)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_80]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_97)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (label_179)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_181;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd57.Lng) = (0 - (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_181;
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));

DEFLABEL (label_180)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_177;

DEFLABEL (label_181)
  (Wrd50.Obj) = (current_block [OBJECT_9_30]);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_61]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_90)
  (Wrd49.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_182)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_60]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_89)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_178;
  goto label_179;

DEFLABEL (label_185)
  Rsp = (& (Rsp [2]));
  goto label_170;

DEFLABEL (label_186)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_56]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_91)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  goto label_185;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_9_69);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_157;
  goto label_158;

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_9_54);
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_9_55);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_169;
  goto label_170;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto sort_enumerate_9;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_enumerate_15)
DEFLABEL (sort_enumerate_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10_1]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_1])))
    goto label_17;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_21;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_19;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_19;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd37.Obj);
  goto loop_7;

DEFLABEL (label_19)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd37.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_12)
  (Wrd24.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_8 5
#define LABEL_11_4 7
#define LABEL_11_11 9
#define LABEL_11_12 11
#define LABEL_11_6 13
#define LABEL_11_15 15
#define LABEL_11_17 17
#define LABEL_11_13 19
#define LABEL_11_18 21
#define LABEL_11_20 23
#define LABEL_11_22 25
#define LABEL_11_25 27
#define LABEL_11_26 29
#define LABEL_11_23 31
#define LABEL_11_28 33
#define LABEL_11_30 35
#define LABEL_11_19 37
#define LABEL_11_31 39
#define LABEL_11_29 41
#define LABEL_11_32 43
#define LABEL_11_34 45
#define LABEL_11_33 47
#define ENVIRONMENT_LABEL_11_3 77
#define DEBUGGING_LABEL_11_2 76
#define OBJECT_11_10 75
#define OBJECT_11_9 74
#define OBJECT_11_8 73
#define OBJECT_11_7 72
#define OBJECT_11_6 71
#define OBJECT_11_5 70
#define OBJECT_11_4 69
#define OBJECT_11_3 68
#define OBJECT_11_2 67
#define OBJECT_11_1 66
#define OBJECT_11_0 65
#define EXECUTE_CACHE_11_27 49
#define EXECUTE_CACHE_11_24 51
#define EXECUTE_CACHE_11_21 53
#define EXECUTE_CACHE_11_16 55
#define EXECUTE_CACHE_11_14 57
#define EXECUTE_CACHE_11_10 59
#define EXECUTE_CACHE_11_9 61
#define EXECUTE_CACHE_11_7 63
#define FREE_REFERENCES_LABEL_11_0 48
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd58;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_11_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11_4);
      goto insert_in_table_55;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_51;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_58;

    case 5:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_11_18);
      goto label_61;

    case 10:
      current_block = (Rpc - LABEL_11_20);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_11_22);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_11_26);
      goto label_64;

    case 14:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_11_28);
      goto loop_31;

    case 16:
      current_block = (Rpc - LABEL_11_30);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_36;

    case 18:
      current_block = (Rpc - LABEL_11_31);
      goto label_63;

    case 19:
      current_block = (Rpc - LABEL_11_29);
      goto continuation_29;

    case 20:
      current_block = (Rpc - LABEL_11_32);
      goto loop_22;

    case 21:
      current_block = (Rpc - LABEL_11_34);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_in_table_67)
DEFLABEL (insert_in_table_55)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_70)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  if ((Wrd5.Obj) == (current_block [OBJECT_11_0]))
    goto label_70;
  if ((Wrd5.Obj) == (current_block [OBJECT_11_1]))
    goto label_70;
  if ((Wrd5.Obj) == (current_block [OBJECT_11_2]))
    goto label_70;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_91;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd12.Obj) = (current_block [OBJECT_11_5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd23.uLng) == 1)
    goto label_79;
  if ((Wrd23.uLng) == 10)
    goto label_76;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;

DEFLABEL (label_72)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_25);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_72;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_72;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd16.uLng) == 62))
    goto label_75;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd20.Obj);
  goto loop_22;

DEFLABEL (label_75)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_7]), 1);

DEFLABEL (label_64)
  (Wrd20.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd20.Obj);
  if (! ((Wrd23.uLng) == 10))
    goto label_78;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_77)
  (Rsp [1]) = (Wrd31.Obj);
  goto loop_31;

DEFLABEL (label_78)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 1);

DEFLABEL (label_59)
  (Wrd31.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd48.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_80;

DEFLABEL (label_81)
  (Wrd58.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_80)
DEFLABEL (label_86)
  (Wrd52.Obj) = (Rsp [6]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_85;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Rsp [5]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_83;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_82)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (label_83)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_9]), 1);

DEFLABEL (label_63)
  (Wrd6.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_90;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd67.Lng) = ((Wrd69.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd67.Lng)))
    goto label_90;
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd67.Lng));

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd60.Obj);
  goto label_87;

DEFLABEL (label_90)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_61)
  (Wrd60.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_95;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;

DEFLABEL (label_92)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_94;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  ((Wrd30.pObj) [1]) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_58)
  goto label_92;

DEFLABEL (label_95)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_92;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (loop_68)
DEFLABEL (loop_31)
  INTERRUPT_CHECK (26, LABEL_11_28);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_96;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd29.Obj) = (Rsp [7]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_98;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_98;
  Wrd24 = Wrd17;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_98;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd21.pObj) = (& ((Wrd26.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_97)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_11_29);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) - 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_31;

DEFLABEL (label_98)
  (Wrd31.Obj) = (Rsp [7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (loop_69)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_11_32);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_99;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd29.Obj) = (Rsp [7]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_101;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_101;
  Wrd24 = Wrd17;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_101;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd21.pObj) = (& ((Wrd26.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_100)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) - 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_22;

DEFLABEL (label_101)
  (Wrd31.Obj) = (Rsp [7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_10]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_7 5
#define LABEL_12_5 7
#define LABEL_12_9 9
#define LABEL_12_10 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define LABEL_12_13 17
#define LABEL_12_6 19
#define ENVIRONMENT_LABEL_12_3 33
#define DEBUGGING_LABEL_12_2 32
#define OBJECT_12_0 31
#define EXECUTE_CACHE_12_14 21
#define EXECUTE_CACHE_12_8 23
#define FREE_REFERENCE_12_1 26
#define FREE_REFERENCE_12_0 27
#define FREE_ASSIGNMENT_12_1 29
#define FREE_ASSIGNMENT_12_0 30
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto generate_variable_name_5;

    case 1:
      current_block = (Rpc - LABEL_12_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_variable_name_14)
DEFLABEL (generate_variable_name_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_26;
  Wrd6 = Wrd10;

DEFLABEL (label_25)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_22)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_21;
  Wrd29 = Wrd33;

DEFLABEL (label_20)
  Wrd28 = Wrd29;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_19;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd41.Lng) = ((Wrd42.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_19;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));

DEFLABEL (label_18)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_1]));
  (Wrd51.Obj) = ((Wrd43.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd43.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_13])), (Wrd43.pObj), (Wrd39.Obj));

DEFLABEL (label_12)
  goto label_15;

DEFLABEL (label_19)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd39.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_11])), (Wrd30.pObj));

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_10])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_9)
  goto label_22;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_9])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_10 11
#define LABEL_13_12 13
#define LABEL_13_13 15
#define ENVIRONMENT_LABEL_13_3 29
#define DEBUGGING_LABEL_13_2 28
#define EXECUTE_CACHE_13_11 17
#define EXECUTE_CACHE_13_9 19
#define EXECUTE_CACHE_13_6 21
#define FREE_REFERENCE_13_1 24
#define FREE_REFERENCE_13_0 25
#define FREE_ASSIGNMENT_13_0 27
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
traditional_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_13_4);
      goto name_if_complicated_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_13_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (name_if_complicated_14)
DEFLABEL (name_if_complicated_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_19;
  Wrd7 = Wrd11;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd17.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_13])), (Wrd17.pObj), (Wrd13.Obj));

DEFLABEL (label_12)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_12])), (Wrd8.pObj));

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 62))
    goto label_22;

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_22)
  if ((Wrd12.uLng) == 10)
    goto label_21;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_26;
  Wrd16 = Wrd20;

DEFLABEL (label_25)
  Wrd15 = Wrd16;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_24;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_24;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd35.Lng) > (Wrd36.Lng))
    goto label_21;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_21;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd17.pObj));

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_25;

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
traditional_so_dea0e5e38daa7666 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	1,
	0,
	1,
	1,
	2,
	1,
	3,
	1,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
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

static const struct liarc_code_S arr_decl_traditional_so_dea0e5e38daa7666 [13] =
  {
    { "traditional_so_code_1", 13, traditional_so_code_1 },
    { "traditional_so_code_2", 22, traditional_so_code_2 },
    { "traditional_so_code_3", 1, traditional_so_code_3 },
    { "traditional_so_code_4", 12, traditional_so_code_4 },
    { "traditional_so_code_5", 41, traditional_so_code_5 },
    { "traditional_so_code_6", 30, traditional_so_code_6 },
    { "traditional_so_code_7", 19, traditional_so_code_7 },
    { "traditional_so_code_8", 3, traditional_so_code_8 },
    { "traditional_so_code_9", 62, traditional_so_code_9 },
    { "traditional_so_code_10", 5, traditional_so_code_10 },
    { "traditional_so_code_11", 23, traditional_so_code_11 },
    { "traditional_so_code_12", 9, traditional_so_code_12 },
    { "traditional_so_code_13", 7, traditional_so_code_13 }
  };

int
decl_traditional_so_dea0e5e38daa7666 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_traditional_so_dea0e5e38daa7666);
  return (0);
}

DECLARE_COMPILED_CODE ("traditional.so", 3, decl_traditional_so_dea0e5e38daa7666, traditional_so_dea0e5e38daa7666)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_traditional_so_data_dea0e5e38daa7666 [4403] =
  "\xe4\x01\x20\xe8\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x28\x0d\xbb\x28\xb3\x28\x0d\x28\x0d\xbc\x28\x0d\xbd"
  "\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x07\x80\xc1\x1c\xc1\x1c\x08"
  "\x0d\x24\x28\xb3\x28\x0d\xbb\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x84\x88\x1b\x1b\x28\xb5\x28\xb5\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x0c\x0c\xc1\x1c\x0c\xc1\x1c\x0d\x0c\x1b\x1b\x0d\x1c\x25"
  "\x1b\x24\x28\xb5\x28\xb3\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x28\xb7\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c\x0c\xc2\x1c"
  "\xc2\x1c\x1b\x1b\x0c\x0c\x1b\x1b\x28\xb4\x28\xb3\x28\xb5\x28\xb5"
  "\x28\xb7\x28\x1b\x28\x0d\xbd\x28\xb5\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\xc2\x0c"
  "\x0c\x82\x0c\x08\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\xb7\x28\x1b"
  "\x28\xb3\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\xc1\x0c\x0c\x0c\x0c\x80\x0c\x0c\xc1\x0c\x0c\x0c\x87\x0c\x0c"
  "\xc1\xc1\x02\x0c\x1d\x0c\x08\x0c\x0c\x02\x86\x02\x02\x02\x0c\xc1"
  "\x06\x07\x85\xc2\x02\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08"
  "\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x81\x1b\xc2\x1d\x08\x07\x28\x1b"
  "\x28\xb7\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x25\x0d\x1c\x1b\x24\x28\xb3\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x1b\x2a\x82\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb4\xb6\x1b\xb2\x0d\xb1\x0d"
  "\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x64\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f"
  "\x43\x2f\x74\x72\x61\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x0c\x62\x75\x69\x6c\x64\x2d\x74"
  "\x61\x62\x6c\x65\x03\x17\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d"
  "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x73\x05\x04\x6d\x61"
  "\x70\x04\x03\x09\x63\x3a\x67\x72\x6f\x75\x70\x2a\x04\x0c\x63\x6f"
  "\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x05\x08\x63\x3a\x67\x72\x6f"
  "\x75\x70\x04\x12\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x75\x70"
  "\x64\x61\x74\x65\x72\x04\x04\x63\x3a\x3d\x0a\x10\x1c\x81\x87\x02"
  "\x0f\x1a\x81\x85\x02\x0e\x18\x81\x8d\x02\x0d\x16\x81\x8b\x02\x0c"
  "\x14\x81\x85\x02\x0b\x12\x81\x87\x02\x0a\x10\x81\x8b\x02\x09\x0e"
  "\x81\x89\x02\x08\x0c\x81\x87\x02\x07\x0a\x81\x87\x02\x06\x08\x81"
  "\x87\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06\x1b\x31\x09\x02\x04"
  "\x63\x61\x72\x0a\x04\x63\x64\x72\x0b\x04\x63\x64\x72\x02\x04\x03"
  "\x15\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62"
  "\x6c\x6f\x63\x6b\x3f\x04\x05\x73\x6f\x72\x74\x03\x0f\x73\x6f\x72"
  "\x74\x2f\x65\x6e\x75\x6d\x65\x72\x61\x74\x65\x0c\x05\x10\x69\x6e"
  "\x73\x65\x72\x74\x2d\x69\x6e\x2d\x74\x61\x62\x6c\x65\x0d\x04\x14"
  "\x6b\x65\x65\x70\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74"
  "\x65\x6d\x73\x03\x11\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x69\x6e\x64\x65\x78\x08\x26\x2e\x81\x89\x02\x25\x2c\x81\x89\x02"
  "\x24\x2a\x81\x89\x02\x23\x28\x81\x89\x02\x22\x26\x81\x89\x02\x21"
  "\x24\x81\x89\x02\x20\x22\x81\x93\x02\x1f\x20\x81\x93\x02\x1e\x1e"
  "\x81\x89\x02\x1d\x1c\x81\x99\x02\x1c\x1a\x81\x93\x02\x1b\x18\x81"
  "\x8b\x02\x1a\x16\x81\x89\x02\x19\x14\x81\x87\x02\x18\x12\x81\x87"
  "\x02\x17\x10\x81\x85\x02\x16\x0e\x81\x85\x02\x15\x0c\x84\x06\x14"
  "\x0a\x81\x85\x02\x13\x08\x81\x8d\x02\x12\x06\x81\x83\x02\x11\x04"
  "\x83\x04\x2d\x46\x0e\x02\x04\x05\x61\x73\x73\x71\x0f\x02\x27\x04"
  "\x84\x06\x03\x10\x02\x0b\x0a\x02\x04\x03\x08\x72\x65\x76\x65\x72"
  "\x73\x65\x03\x16\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x63\x6f"
  "\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x11\x05\x33\x1a\x81\x87\x02"
  "\x32\x18\x81\x87\x02\x31\x16\x81\x87\x02\x30\x14\x81\x87\x02\x2f"
  "\x12\x81\x87\x02\x2e\x10\x81\x85\x02\x2d\x0e\x81\x89\x02\x2c\x0c"
  "\x81\x87\x02\x2b\x0a\x81\x87\x02\x2a\x08\x81\x85\x02\x29\x06\x81"
  "\x83\x02\x28\x04\x83\x04\x19\x27\x12\x02\x1b\x43\x61\x6e\x27\x74"
  "\x20\x64\x75\x6d\x70\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20"
  "\x74\x72\x61\x70\x3a\x10\x41\x4c\x4c\x4f\x43\x41\x54\x45\x5f\x56"
  "\x45\x43\x54\x4f\x52\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x13\x10\x41\x4c\x4c\x4f\x43\x41\x54\x45\x5f\x52\x45"
  "\x43\x4f\x52\x44\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x14\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x5f"
  "\x73\x75\x62\x62\x6c\x6f\x63\x6b\x05\x43\x4f\x4e\x53\x0b\x0a\x0c"
  "\x2a\x73\x75\x62\x62\x6c\x6f\x63\x6b\x73\x2a\x15\x02\x15\x02\x02"
  "\x03\x03\x19\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x15\x03\x12\x66\x61"
  "\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x63\x2d\x70\x72\x6f\x63\x05"
  "\x08\x63\x3a\x65\x63\x61\x6c\x6c\x16\x04\x16\x04\x03\x10\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x03\x1f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x17\x03\x12"
  "\x2d\x3e\x73\x69\x6d\x70\x6c\x65\x2d\x63\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x18\x03\x1b\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x19\x04"
  "\x06\x65\x72\x72\x6f\x72\x1a\x0d\x5c\x54\x81\x85\x02\x5b\x52\x81"
  "\x85\x02\x5a\x50\x81\x85\x02\x59\x4e\x81\x85\x02\x58\x4c\x81\x85"
  "\x02\x57\x4a\x81\x85\x02\x56\x48\x81\x85\x02\x55\x46\x81\x85\x02"
  "\x54\x44\x81\x87\x02\x53\x42\x81\x85\x02\x52\x40\x81\x85\x02\x51"
  "\x3e\x81\x87\x02\x50\x3c\x81\x85\x02\x4f\x3a\x81\x87\x02\x4e\x38"
  "\x81\x85\x02\x4d\x36\x81\x87\x02\x4c\x34\x81\x85\x02\x4b\x32\x81"
  "\x85\x02\x4a\x30\x81\x85\x02\x49\x2e\x81\x85\x02\x48\x2c\x81\x85"
  "\x02\x47\x2a\x81\x85\x02\x46\x28\x81\x89\x02\x45\x26\x81\x89\x02"
  "\x44\x24\x81\x85\x02\x43\x22\x81\x87\x02\x42\x20\x81\x85\x02\x41"
  "\x1e\x81\x85\x02\x40\x1c\x81\x87\x02\x3f\x1a\x81\x85\x02\x3e\x18"
  "\x81\x85\x02\x3d\x16\x81\x89\x02\x3c\x14\x81\x87\x02\x3b\x12\x81"
  "\x85\x02\x3a\x10\x81\x85\x02\x39\x0e\x81\x85\x02\x38\x0c\x81\x85"
  "\x02\x37\x0a\x81\x85\x02\x36\x08\x81\x85\x02\x35\x06\x81\x83\x02"
  "\x34\x04\x83\x04\x53\x7c\x1b\x02\x0b\x52\x45\x43\x4f\x52\x44\x5f"
  "\x53\x45\x54\x0b\x56\x45\x43\x54\x4f\x52\x5f\x53\x45\x54\x0c\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x1c\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x1d\x14\x13\x0d\x53\x45\x54\x5f\x50\x41"
  "\x49\x52\x5f\x43\x44\x52\x0d\x53\x45\x54\x5f\x50\x41\x49\x52\x5f"
  "\x43\x41\x52\x0a\x0b\x04\x03\x02\x04\x03\x03\x15\x05\x08\x63\x3a"
  "\x73\x63\x61\x6c\x6c\x06\x09\x7a\x3e\x81\x95\x02\x79\x3c\x81\x93"
  "\x02\x78\x3a\x81\x8f\x02\x77\x38\x81\x95\x02\x76\x36\x81\x93\x02"
  "\x75\x34\x81\x8f\x02\x74\x32\x81\x99\x02\x73\x30\x81\x8d\x02\x72"
  "\x2e\x81\x8d\x02\x71\x2c\x81\x8d\x02\x70\x2a\x81\x99\x02\x6f\x28"
  "\x81\x8d\x02\x6e\x26\x81\x8d\x02\x6d\x24\x81\x8d\x02\x6c\x22\x81"
  "\x8b\x02\x6b\x20\x81\x89\x02\x6a\x1e\x81\x8b\x02\x69\x1c\x81\x89"
  "\x02\x68\x1a\x81\x8b\x02\x67\x18\x81\x89\x02\x66\x16\x81\x8b\x02"
  "\x65\x14\x81\x8f\x02\x64\x12\x81\x89\x02\x63\x10\x81\x89\x02\x62"
  "\x0e\x81\x89\x02\x61\x0c\x81\x89\x02\x60\x0a\x81\x8f\x02\x5f\x08"
  "\x81\x87\x02\x5e\x06\x81\x85\x02\x5d\x04\x84\x06\x3d\x5b\x02\x08"
  "\x06\x61\x70\x70\x6c\x79\x07\x52\x43\x4f\x4e\x53\x4d\x05\x43\x4f"
  "\x4e\x53\x23\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x3a\x20"
  "\x43\x61\x6e\x27\x74\x20\x62\x75\x69\x6c\x64\x20\x64\x69\x72\x65"
  "\x63\x74\x6c\x79\x3a\x0b\x0a\x16\x02\x04\x0f\x03\x15\x03\x03\x17"
  "\x03\x03\x18\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x1a\x05\x16\x0a"
  "\x8d\x01\x28\xfd\xff\x03\x8c\x01\x26\xfd\xff\x03\x8b\x01\x24\x81"
  "\x85\x02\x8a\x01\x22\x81\x87\x02\x89\x01\x20\x81\x87\x02\x88\x01"
  "\x1e\x81\x87\x02\x87\x01\x1c\x81\x83\x02\x86\x01\x1a\xfd\xff\x03"
  "\x85\x01\x18\xff\xff\x03\x84\x01\x16\xfd\xff\x03\x83\x01\x14\xfd"
  "\xff\x03\x82\x01\x12\xfd\xff\x03\x81\x01\x10\xfd\xff\x03\x80\x01"
  "\x0e\xfd\xff\x03\x7f\x0c\xfd\xff\x03\x7e\x0a\xfd\xff\x03\x7d\x08"
  "\xfd\xff\x03\x7c\x06\xff\xff\x03\x7b\x04\x84\x06\x27\x47\x1e\x02"
  "\x09\x12\x43\x43\x5f\x42\x4c\x4f\x43\x4b\x5f\x54\x4f\x5f\x45\x4e"
  "\x54\x52\x59\x03\x1a\x66\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2f\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x03\x19"
  "\x66\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c"
  "\x61\x62\x65\x6c\x2d\x74\x61\x67\x05\x16\x04\x90\x01\x08\x81\x87"
  "\x02\x8f\x01\x06\x81\x83\x02\x8e\x01\x04\x83\x04\x07\x12\x1f\x02"
  "\x0a\x0e\x4d\x41\x4b\x45\x5f\x63\x6f\x6d\x70\x6c\x65\x78\x74\x0b"
  "\x4d\x41\x4b\x45\x5f\x52\x41\x54\x49\x4f\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x64\x61\x74\x75\x6d\x18\x44\x49\x47\x49\x54\x5f\x53\x54"
  "\x52\x49\x4e\x47\x5f\x54\x4f\x5f\x49\x4e\x54\x45\x47\x45\x52\x23"
  "\x2d\x3e\x73\x69\x6d\x70\x6c\x65\x2d\x43\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x75\x6d\x62\x65"
  "\x72\x3a\x28\x2d\x3e\x73\x69\x6d\x70\x6c\x65\x2d\x43\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x3a\x20\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a"
  "\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x3a\x10\x4c\x4f\x4e\x47\x5f"
  "\x54\x4f\x5f\x49\x4e\x54\x45\x47\x45\x52\x0a\x4d\x41\x4b\x45\x5f"
  "\x43\x48\x41\x52\x1b\x44\x49\x47\x49\x54\x5f\x53\x54\x52\x49\x4e"
  "\x47\x5f\x54\x4f\x5f\x42\x49\x54\x5f\x53\x54\x52\x49\x4e\x47\x12"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x12\x55\x4e\x41\x53\x53\x49\x47\x4e\x45\x44\x5f\x4f\x42\x4a"
  "\x45\x43\x54\x2c\x2d\x3e\x73\x69\x6d\x70\x6c\x65\x2d\x43\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x61"
  "\x72\x69\x74\x79\x20\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x3a\x19"
  "\x4d\x41\x4b\x45\x5f\x50\x52\x49\x4d\x49\x54\x49\x56\x45\x5f\x50"
  "\x52\x4f\x43\x45\x44\x55\x52\x45\x0d\x43\x5f\x53\x59\x4d\x5f\x49"
  "\x4e\x54\x45\x52\x4e\x11\x44\x4f\x55\x42\x4c\x45\x5f\x54\x4f\x5f"
  "\x46\x4c\x4f\x4e\x55\x4d\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79"
  "\x1d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x73"
  "\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x11\x0b\x55"
  "\x4e\x53\x50\x45\x43\x49\x46\x49\x43\x02\x0b\x45\x4d\x50\x54\x59"
  "\x5f\x4c\x49\x53\x54\x08\x53\x48\x41\x52\x50\x5f\x54\x08\x53\x48"
  "\x41\x52\x50\x5f\x46\x3d\x3b\x0f\x1b\x1a\x43\x5f\x53\x54\x52\x49"
  "\x4e\x47\x5f\x54\x4f\x5f\x53\x43\x48\x45\x4d\x45\x5f\x53\x54\x52"
  "\x49\x4e\x47\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x03"
  "\x11\x63\x2d\x71\x75\x6f\x74\x69\x66\x79\x2d\x73\x74\x72\x69\x6e"
  "\x67\x03\x1b\x73\x63\x6f\x64\x65\x2f\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x0f\x73"
  "\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x0a\x63"
  "\x68\x61\x72\x2d\x62\x69\x74\x73\x03\x19\x04\x16\x05\x16\x06\x16"
  "\x03\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64\x2d\x6c\x6f\x6e"
  "\x67\x3f\x03\x09\x63\x3a\x73\x74\x72\x69\x6e\x67\x03\x19\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x6e\x61\x6d\x65\x04\x1a\x03\x14\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x03\x0f\x73"
  "\x74\x72\x69\x6e\x67\x2d\x72\x65\x76\x65\x72\x73\x65\x04\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x1a\x03\x0a"
  "\x63\x68\x61\x72\x2d\x63\x6f\x64\x65\x03\x06\x63\x3a\x68\x65\x78"
  "\x03\x07\x65\x78\x61\x63\x74\x3f\x03\x0a\x72\x65\x61\x6c\x2d\x70"
  "\x61\x72\x74\x03\x0a\x6e\x75\x6d\x65\x72\x61\x74\x6f\x72\x03\x06"
  "\x72\x65\x61\x6c\x3f\x03\x0a\x72\x61\x74\x69\x6f\x6e\x61\x6c\x3f"
  "\x04\x0e\x63\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x03"
  "\x0c\x64\x65\x6e\x6f\x6d\x69\x6e\x61\x74\x6f\x72\x03\x0a\x69\x6d"
  "\x61\x67\x2d\x70\x61\x72\x74\x1a\xce\x01\x7e\x81\x89\x02\xcd\x01"
  "\x7c\x81\x87\x02\xcc\x01\x7a\x81\x89\x02\xcb\x01\x78\x81\x87\x02"
  "\xca\x01\x76\x81\x85\x02\xc9\x01\x74\x81\x83\x02\xc8\x01\x72\x81"
  "\x85\x02\xc7\x01\x70\x81\x83\x02\xc6\x01\x6e\x81\x87\x02\xc5\x01"
  "\x6c\x81\x85\x02\xc4\x01\x6a\x81\x83\x02\xc3\x01\x68\xfd\xff\x03"
  "\xc2\x01\x66\xfd\xff\x03\xc1\x01\x64\x81\x83\x02\xc0\x01\x62\x81"
  "\x83\x02\xbf\x01\x60\x81\x83\x02\xbe\x01\x5e\x81\x83\x02\xbd\x01"
  "\x5c\x81\x83\x02\xbc\x01\x5a\x81\x83\x02\xbb\x01\x58\x81\x83\x02"
  "\xba\x01\x56\x81\x83\x02\xb9\x01\x54\x81\x83\x02\xb8\x01\x52\x81"
  "\x89\x02\xb7\x01\x50\x81\x87\x02\xb6\x01\x4e\x81\x8b\x02\xb5\x01"
  "\x4c\x81\x89\x02\xb4\x01\x4a\x81\x89\x02\xb3\x01\x48\x81\x83\x02"
  "\xb2\x01\x46\x81\x8b\x02\xb1\x01\x44\x81\x89\x02\xb0\x01\x42\x81"
  "\x89\x02\xaf\x01\x40\x81\x87\x02\xae\x01\x3e\x81\x89\x02\xad\x01"
  "\x3c\x81\x89\x02\xac\x01\x3a\x81\x83\x02\xab\x01\x38\x81\x83\x02"
  "\xaa\x01\x36\x81\x83\x02\xa9\x01\x34\x81\x87\x02\xa8\x01\x32\x81"
  "\x85\x02\xa7\x01\x30\x81\x83\x02\xa6\x01\x2e\x81\x87\x02\xa5\x01"
  "\x2c\x81\x85\x02\xa4\x01\x2a\x81\x83\x02\xa3\x01\x28\x81\x83\x02"
  "\xa2\x01\x26\x81\x85\x02\xa1\x01\x24\x81\x83\x02\xa0\x01\x22\x81"
  "\x85\x02\x9f\x01\x20\x81\x83\x02\x9e\x01\x1e\x81\x83\x02\x9d\x01"
  "\x1c\x81\x89\x02\x9c\x01\x1a\x81\x87\x02\x9b\x01\x18\x81\x83\x02"
  "\x9a\x01\x16\x81\x83\x02\x99\x01\x14\x81\x83\x02\x98\x01\x12\x81"
  "\x83\x02\x97\x01\x10\x81\x83\x02\x96\x01\x0e\x81\x83\x02\x95\x01"
  "\x0c\x81\x83\x02\x94\x01\x0a\x81\x83\x02\x93\x01\x08\x83\x04\x92"
  "\x01\x06\x81\x83\x02\x91\x01\x04\x81\x83\x02\x7d\xd9\x01\x19\x02"
  "\x0b\x0b\x0a\xd3\x01\x0c\x81\x87\x02\xd2\x01\x0a\x81\x87\x02\xd1"
  "\x01\x08\x81\x87\x02\xd0\x01\x06\x81\x87\x02\xcf\x01\x04\x83\x04"
  "\x0b\x12\x16\x02\x0c\x1c\x0a\x1d\x14\x13\x0b\x09\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x02\x04\x0f\x03\x03\x13\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x04\x14\x6e\x61"
  "\x6d\x65\x2d\x69\x66\x2d\x63\x6f\x6d\x70\x6c\x69\x63\x61\x74\x65"
  "\x64\x1d\x02\x17\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x1c\x05\x0d\x03\x15\x03"
  "\x09\xea\x01\x30\x81\x8f\x02\xe9\x01\x2e\x81\x95\x02\xe8\x01\x2c"
  "\x81\x8f\x02\xe7\x01\x2a\x81\x8f\x02\xe6\x01\x28\x81\x8d\x02\xe5"
  "\x01\x26\x81\x8d\x02\xe4\x01\x24\x81\x95\x02\xe3\x01\x22\x81\x8f"
  "\x02\xe2\x01\x20\x81\x8d\x02\xe1\x01\x1e\x81\x8f\x02\xe0\x01\x1c"
  "\x81\x8d\x02\xdf\x01\x1a\x81\x8f\x02\xde\x01\x18\x81\x93\x02\xdd"
  "\x01\x16\x81\x8b\x02\xdc\x01\x14\x81\x89\x02\xdb\x01\x12\x81\x89"
  "\x02\xda\x01\x10\x81\x89\x02\xd9\x01\x0e\x81\x87\x02\xd8\x01\x0c"
  "\x81\x89\x02\xd7\x01\x0a\x81\x89\x02\xd6\x01\x08\x85\x08\xd5\x01"
  "\x06\x81\x87\x02\xd4\x01\x04\x81\x87\x02\x2f\x4e\x15\x02\x0d\x07"
  "\x74\x6d\x70\x4f\x62\x6a\x0e\x6e\x65\x77\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x14\x04\x6e\x75\x6d\x13\x03\x13\x14\x03\x03\x1a"
  "\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03"
  "\xf3\x01\x14\x81\x83\x02\xf2\x01\x12\x81\x83\x02\xf1\x01\x10\x81"
  "\x83\x02\xf0\x01\x0e\x81\x83\x02\xef\x01\x0c\x81\x83\x02\xee\x01"
  "\x0a\x81\x83\x02\xed\x01\x08\x81\x81\x02\xec\x01\x06\x81\x85\x02"
  "\xeb\x01\x04\x82\x02\x13\x22\x1a\x02\x0e\x14\x02\x0e\x2a\x64\x65"
  "\x70\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x0f\x14\x03\x03\x02\x1c"
  "\x03\x10\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x6e\x61\x6d"
  "\x65\x04\xfa\x01\x10\x81\x83\x02\xf9\x01\x0e\x81\x83\x02\xf8\x01"
  "\x0c\x81\x85\x02\xf7\x01\x0a\x81\x85\x02\xf6\x01\x08\x81\x85\x02"
  "\xf5\x01\x06\x81\x85\x02\xf4\x01\x04\x84\x06\x0f\x1e\x0b\x0e\x0a"
  "\x0a\x0b\x04\x1a\x04\x15\x08\x16\x04\x19\x08\x1f\x04\x1e\x04\x04"
  "\x1b\x04\x12\x04\x10\x04\x0e\x04\x09\x04\x11\x1d\x1c\x0f\x14\x13"
  "\x0d\x0c\x18\x17\x11\x0b\x74\x61\x62\x6c\x65\x2f\x66\x69\x6e\x64"
  "\x0f\x2d\x3e\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x73\x11"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
traditional_so_data_dea0e5e38daa7666 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_traditional_so_data_dea0e5e38daa7666 [0]))), (sizeof (prog_traditional_so_data_dea0e5e38daa7666)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("traditional.so", traditional_so_data_dea0e5e38daa7666)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("traditional.so", "1d028ecd55aceb25")
