/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:21-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_10 9
#define LABEL_1_11 11
#define LABEL_1_13 13
#define TAG_1_14 5
#define LABEL_1_23 15
#define LABEL_1_15 17
#define TAG_1_16 7
#define LABEL_1_17 19
#define LABEL_1_18 21
#define LABEL_1_19 23
#define LABEL_1_21 25
#define TAG_1_22 11
#define LABEL_1_25 27
#define LABEL_1_27 29
#define LABEL_1_29 31
#define LABEL_1_32 33
#define LABEL_1_33 35
#define LABEL_1_34 37
#define LABEL_1_35 39
#define LABEL_1_36 41
#define TAG_1_37 19
#define LABEL_1_41 43
#define LABEL_1_42 45
#define ENVIRONMENT_LABEL_1_3 74
#define DEBUGGING_LABEL_1_2 73
#define OBJECT_1_3 72
#define OBJECT_1_2 71
#define OBJECT_1_1 70
#define OBJECT_1_0 69
#define EXECUTE_CACHE_1_40 47
#define EXECUTE_CACHE_1_39 49
#define EXECUTE_CACHE_1_38 51
#define EXECUTE_CACHE_1_31 53
#define EXECUTE_CACHE_1_30 55
#define EXECUTE_CACHE_1_28 57
#define EXECUTE_CACHE_1_26 59
#define EXECUTE_CACHE_1_24 61
#define EXECUTE_CACHE_1_20 63
#define EXECUTE_CACHE_1_12 65
#define EXECUTE_CACHE_1_9 67
#define FREE_REFERENCES_LABEL_1_0 46
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtline_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_linearizer_26;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_31;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_32;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_33;

    case 6:
      current_block = (Rpc - LABEL_1_23);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_34;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto lambda_35;

    case 12:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_1_36);
      goto lambda_36;

    case 20:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_linearizer_30)
DEFLABEL (make_linearizer_26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd24 = Wrd7;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd26.pObj) [4]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd26.pObj) [5]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [6]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [7]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (Wrd39.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-1]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd37.pObj)));
  (Rsp [1]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  ((Wrd6.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_15])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd20 = Wrd11;
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [5]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  ((Wrd20.pObj) [4]) = (Wrd38.Obj);
  ((Wrd20.pObj) [5]) = (Wrd5.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd22.pObj) [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_36])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_37)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (label_38)
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_21])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_40;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd20.Lng))))
    goto label_40;
  (Wrd12.Obj) = ((Wrd18.pObj) [14]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (label_40)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_1_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_28)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_1_15);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_1_21);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_40]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_1_36);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_11;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_15 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define TAG_2_13 7
#define LABEL_2_22 19
#define LABEL_2_23 21
#define LABEL_2_16 23
#define LABEL_2_25 25
#define LABEL_2_18 27
#define LABEL_2_20 29
#define TAG_2_21 13
#define LABEL_2_29 31
#define LABEL_2_30 33
#define LABEL_2_31 35
#define LABEL_2_33 37
#define LABEL_2_34 39
#define LABEL_2_36 41
#define LABEL_2_37 43
#define LABEL_2_24 45
#define LABEL_2_38 47
#define LABEL_2_27 49
#define LABEL_2_32 51
#define LABEL_2_42 53
#define LABEL_2_43 55
#define LABEL_2_39 57
#define LABEL_2_44 59
#define LABEL_2_45 61
#define LABEL_2_46 63
#define LABEL_2_47 65
#define LABEL_2_48 67
#define ENVIRONMENT_LABEL_2_3 102
#define DEBUGGING_LABEL_2_2 101
#define OBJECT_2_11 100
#define OBJECT_2_10 99
#define OBJECT_2_9 98
#define OBJECT_2_8 97
#define OBJECT_2_7 96
#define OBJECT_2_6 95
#define OBJECT_2_5 94
#define OBJECT_2_4 93
#define OBJECT_2_3 92
#define OBJECT_2_2 91
#define OBJECT_2_1 90
#define OBJECT_2_0 89
#define EXECUTE_CACHE_2_41 69
#define EXECUTE_CACHE_2_40 71
#define EXECUTE_CACHE_2_35 73
#define EXECUTE_CACHE_2_28 75
#define EXECUTE_CACHE_2_26 77
#define EXECUTE_CACHE_2_19 79
#define EXECUTE_CACHE_2_17 81
#define EXECUTE_CACHE_2_14 83
#define EXECUTE_CACHE_2_9 85
#define EXECUTE_CACHE_2_6 87
#define FREE_REFERENCES_LABEL_2_0 68
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtline_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd7;
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
      goto setup_bblock_continuationsB_47;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_46;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_44;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_45;

    case 4:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_30;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_69;

    case 8:
      current_block = (Rpc - LABEL_2_22);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_2_23);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_32;

    case 11:
      current_block = (Rpc - LABEL_2_25);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto lambda_29;

    case 13:
      current_block = (Rpc - LABEL_2_20);
      goto loop_70;

    case 14:
      current_block = (Rpc - LABEL_2_29);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_2_30);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_2_31);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_2_33);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_2_34);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_2_36);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_2_37);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_34;

    case 22:
      current_block = (Rpc - LABEL_2_38);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_28;

    case 24:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_13;

    case 25:
      current_block = (Rpc - LABEL_2_42);
      goto label_60;

    case 26:
      current_block = (Rpc - LABEL_2_43);
      goto label_61;

    case 27:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_36;

    case 28:
      current_block = (Rpc - LABEL_2_44);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_2_45);
      goto label_63;

    case 30:
      current_block = (Rpc - LABEL_2_46);
      goto label_64;

    case 31:
      current_block = (Rpc - LABEL_2_47);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_2_48);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_bblock_continuationsB_66)
DEFLABEL (setup_bblock_continuationsB_47)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_67)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_68)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd5.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Rsp [2]) = Rvl;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_73;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 3);

DEFLABEL (label_73)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd19.Lng))))
    goto label_72;
  ((Wrd17.pObj) [14]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_89)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_2_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_88;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_88;
  (Wrd12.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_86;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd12.Lng))))
    goto label_86;
  (Wrd7.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_2_39);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_76;

DEFLABEL (label_75)
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_83)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_82;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_81)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_80;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_79)
  (Rsp [0]) = (Wrd23.Obj);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_47]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_48]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_2_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_2_47);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_11]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_78;

DEFLABEL (label_77)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 3);

DEFLABEL (label_78)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_77;
  ((Wrd15.pObj) [15]) = Rvl;
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_64)
  (Wrd23.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_63)
  (Wrd16.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_62)
  (Wrd7.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd15.Obj) = (current_block [OBJECT_2_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_2_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_10);
  goto label_89;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_20])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  Wrd31 = Wrd35;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  ((Wrd31.pObj) [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd36.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_93;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_93;
  (Wrd7.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_92)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_91;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_90)
  (Rsp [1]) = (Wrd23.Obj);
  goto loop_24;

DEFLABEL (label_91)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_50)
  (Wrd23.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_2_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_71)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_2_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (loop_70)
  CLOSURE_HEADER (LABEL_2_20);

DEFLABEL (loop_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_95;

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_95)
  if (! ((Wrd6.uLng) == 1))
    goto label_116;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_115)
  if ((Wrd9.Obj) == (current_block [OBJECT_2_9]))
    goto label_100;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_99;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_98)
  if ((Wrd19.Obj) == (current_block [OBJECT_2_10]))
    goto label_94;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_97;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_96)
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_97)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_54)
  (Wrd30.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_53)
  (Wrd19.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  if ((Wrd45.Obj) == (current_block [OBJECT_2_0]))
    goto label_110;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_109;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_108)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_107;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_105;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_104)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_103;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_102)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  ((Wrd31.pObj) [0]) = (Wrd27.Obj);
  Rvl = (Wrd32.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_61)
  (Wrd18.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_60)
  (Wrd9.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_55)
  (Wrd55.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_114;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_113)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_112;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd80.Obj) = ((Wrd81.pObj) [0]);

DEFLABEL (label_111)
  (Wrd90.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [2]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (* (--Rsp)) = (Wrd95.Obj);
  ((Wrd94.pObj) [0]) = (Wrd89.Obj);
  Rvl = (Wrd95.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_58)
  (Wrd80.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_57)
  (Wrd71.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_52)
  (Wrd9.Obj) = Rvl;
  goto label_115;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_9 5
#define TAG_3_10 1
#define LABEL_3_7 7
#define TAG_3_8 2
#define LABEL_3_5 9
#define TAG_3_6 3
#define LABEL_3_11 11
#define LABEL_3_17 13
#define LABEL_3_18 15
#define LABEL_3_19 17
#define LABEL_3_20 19
#define LABEL_3_13 21
#define LABEL_3_21 23
#define LABEL_3_22 25
#define LABEL_3_15 27
#define LABEL_3_25 29
#define LABEL_3_26 31
#define LABEL_3_16 33
#define LABEL_3_28 35
#define LABEL_3_29 37
#define LABEL_3_31 39
#define LABEL_3_24 41
#define LABEL_3_23 43
#define LABEL_3_38 45
#define LABEL_3_39 47
#define LABEL_3_32 49
#define LABEL_3_40 51
#define LABEL_3_34 53
#define LABEL_3_41 55
#define LABEL_3_42 57
#define LABEL_3_43 59
#define LABEL_3_45 61
#define LABEL_3_33 63
#define LABEL_3_47 65
#define LABEL_3_37 67
#define LABEL_3_48 69
#define LABEL_3_35 71
#define TAG_3_36 34
#define LABEL_3_50 73
#define LABEL_3_51 75
#define LABEL_3_55 77
#define LABEL_3_44 79
#define LABEL_3_49 81
#define LABEL_3_52 83
#define LABEL_3_58 85
#define LABEL_3_59 87
#define LABEL_3_54 89
#define LABEL_3_61 91
#define LABEL_3_56 93
#define LABEL_3_57 95
#define LABEL_3_66 97
#define LABEL_3_62 99
#define LABEL_3_64 101
#define LABEL_3_63 103
#define LABEL_3_65 105
#define LABEL_3_68 107
#define ENVIRONMENT_LABEL_3_3 143
#define DEBUGGING_LABEL_3_2 142
#define OBJECT_3_14 141
#define OBJECT_3_13 140
#define OBJECT_3_12 139
#define OBJECT_3_11 138
#define OBJECT_3_10 137
#define OBJECT_3_9 136
#define OBJECT_3_8 135
#define OBJECT_3_7 134
#define OBJECT_3_6 133
#define OBJECT_3_5 132
#define OBJECT_3_4 131
#define OBJECT_3_3 130
#define OBJECT_3_2 129
#define OBJECT_3_1 128
#define OBJECT_3_0 127
#define EXECUTE_CACHE_3_67 109
#define EXECUTE_CACHE_3_60 111
#define EXECUTE_CACHE_3_53 113
#define EXECUTE_CACHE_3_46 115
#define EXECUTE_CACHE_3_30 117
#define EXECUTE_CACHE_3_27 119
#define EXECUTE_CACHE_3_14 121
#define EXECUTE_CACHE_3_12 123
#define FREE_REFERENCE_3_0 126
#define FREE_REFERENCES_LABEL_3_0 108
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtline_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd79;
  machine_word Wrd66;
  machine_word Wrd35;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd76;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd67;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto bblock_linearize_rtl_82;

    case 1:
      current_block = (Rpc - LABEL_3_9);
      goto linearize_bblock_35;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto linearize_sblock_next_40;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto linearize_pblock_81;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_3_19);
      goto label_101;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_36;

    case 10:
      current_block = (Rpc - LABEL_3_21);
      goto label_84;

    case 11:
      current_block = (Rpc - LABEL_3_22);
      goto label_85;

    case 12:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_46;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_3_28);
      goto label_88;

    case 17:
      current_block = (Rpc - LABEL_3_29);
      goto label_86;

    case 18:
      current_block = (Rpc - LABEL_3_31);
      goto label_87;

    case 19:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_65;

    case 20:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_47;

    case 21:
      current_block = (Rpc - LABEL_3_38);
      goto lambda_28;

    case 22:
      current_block = (Rpc - LABEL_3_39);
      goto label_89;

    case 23:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_33;

    case 24:
      current_block = (Rpc - LABEL_3_40);
      goto label_90;

    case 25:
      current_block = (Rpc - LABEL_3_34);
      goto lambda_79;

    case 26:
      current_block = (Rpc - LABEL_3_41);
      goto label_91;

    case 27:
      current_block = (Rpc - LABEL_3_42);
      goto label_92;

    case 28:
      current_block = (Rpc - LABEL_3_43);
      goto lambda_45;

    case 29:
      current_block = (Rpc - LABEL_3_45);
      goto label_93;

    case 30:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_70;

    case 31:
      current_block = (Rpc - LABEL_3_47);
      goto label_94;

    case 32:
      current_block = (Rpc - LABEL_3_37);
      goto continuation_64;

    case 33:
      current_block = (Rpc - LABEL_3_48);
      goto label_95;

    case 34:
      current_block = (Rpc - LABEL_3_35);
      goto lambda_109;

    case 35:
      current_block = (Rpc - LABEL_3_50);
      goto loop_26;

    case 36:
      current_block = (Rpc - LABEL_3_51);
      goto label_97;

    case 37:
      current_block = (Rpc - LABEL_3_55);
      goto label_96;

    case 38:
      current_block = (Rpc - LABEL_3_44);
      goto continuation_41;

    case 39:
      current_block = (Rpc - LABEL_3_49);
      goto continuation_49;

    case 40:
      current_block = (Rpc - LABEL_3_52);
      goto continuation_9;

    case 41:
      current_block = (Rpc - LABEL_3_58);
      goto label_99;

    case 42:
      current_block = (Rpc - LABEL_3_59);
      goto label_98;

    case 43:
      current_block = (Rpc - LABEL_3_54);
      goto continuation_25;

    case 44:
      current_block = (Rpc - LABEL_3_61);
      goto label_100;

    case 45:
      current_block = (Rpc - LABEL_3_56);
      goto continuation_48;

    case 46:
      current_block = (Rpc - LABEL_3_57);
      goto continuation_14;

    case 47:
      current_block = (Rpc - LABEL_3_66);
      goto label_102;

    case 48:
      current_block = (Rpc - LABEL_3_62);
      goto continuation_55;

    case 49:
      current_block = (Rpc - LABEL_3_64);
      goto continuation_53;

    case 50:
      current_block = (Rpc - LABEL_3_63);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_3_65);
      goto continuation_12;

    case 52:
      current_block = (Rpc - LABEL_3_68);
      goto label_103;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_linearize_rtl_105)
DEFLABEL (bblock_linearize_rtl_82)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  Wrd15 = Wrd23;
  ((Wrd15.pObj) [2]) = (Wrd28.Obj);
  ((Wrd15.pObj) [3]) = (Wrd26.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  ((Wrd25.pObj) [2]) = (Wrd24.Obj);
  ((Wrd27.pObj) [2]) = (Wrd24.Obj);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd24.Obj);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  goto linearize_bblock_35;

DEFLABEL (linearize_bblock_108)
DEFLABEL (linearize_bblock_35)
  INTERRUPT_CHECK (26, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_123;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd61.Lng))))
    goto label_123;
  (Wrd7.Obj) = ((Wrd59.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_120;

DEFLABEL (label_119)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_118;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd47.Lng))))
    goto label_118;
  (Wrd30.Obj) = ((Wrd45.pObj) [13]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_115;

DEFLABEL (label_114)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd33.Obj);
  Rdl = (& (Rsp [3]));
  goto lambda_28;

DEFLABEL (label_115)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.pObj) = (& (Rsp [1]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_28;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_117;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_117;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_116)
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_3_8]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_3_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_118)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_3_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_87)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  goto label_115;

DEFLABEL (label_120)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_122;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_122;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_25);
  goto label_119;

DEFLABEL (label_122)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_3_6]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_3_3]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  goto label_119;

DEFLABEL (linearize_sblock_next_107)
DEFLABEL (linearize_sblock_next_40)
  INTERRUPT_CHECK (26, LABEL_3_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_3_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_124;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [2]);
  (Rsp [0]) = (Wrd62.Obj);
  goto linearize_bblock_35;

DEFLABEL (label_124)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_129;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd15.Lng))))
    goto label_129;
  (Wrd7.Obj) = ((Wrd13.pObj) [13]);

DEFLABEL (label_128)
  (Wrd26.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [3]));
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_127)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_126;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_126;
  (Wrd38.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_125)
  (Wrd58.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_126)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_3_5]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_85)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd38.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_129)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_3_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_84)
  (Wrd7.Obj) = Rvl;
  goto label_128;

DEFLABEL (linearize_pblock_106)
DEFLABEL (linearize_pblock_81)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_130;

DEFLABEL (label_131)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_130)
DEFLABEL (label_132)
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_3_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_45;

DEFLABEL (label_133)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto linearize_bblock_35;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_135;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_135;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_134)
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_3_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_134;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_3_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_136;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_35])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_45;

DEFLABEL (label_136)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto linearize_bblock_35;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_3_37);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_138;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_138;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_137)
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_138)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_3_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_48]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_95)
  (Wrd5.Obj) = Rvl;
  goto label_137;

DEFLABEL (lambda_110)
DEFLABEL (lambda_28)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_38);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_140;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_140;
  (Wrd9.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_139)
  goto loop_26;

DEFLABEL (label_140)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);
  (Wrd29.Obj) = (current_block [OBJECT_3_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_89)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (lambda_111)
DEFLABEL (lambda_79)
  INTERRUPT_CHECK (26, LABEL_3_34);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_144;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_144;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_143)
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_142;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd41.Lng))))
    goto label_142;
  (Wrd33.Obj) = ((Wrd39.pObj) [13]);

DEFLABEL (label_141)
  (Wrd52.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_3_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_92)
  (Wrd33.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_3_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_91)
  (Wrd5.Obj) = Rvl;
  goto label_143;

DEFLABEL (lambda_112)
DEFLABEL (lambda_45)
  INTERRUPT_CHECK (26, LABEL_3_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_149;
  Wrd8 = Wrd12;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_3_44);
  if (Rvl == (current_block [OBJECT_3_12]))
    goto label_146;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto label_145;

DEFLABEL (label_146)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd20.Obj);
  (Rsp [5]) = (Wrd19.Obj);

DEFLABEL (label_145)
DEFLABEL (label_147)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_45])), (Wrd9.pObj));

DEFLABEL (label_93)
  (Wrd8.Obj) = Rvl;
  goto label_148;

DEFLABEL (lambda_109)
  CLOSURE_HEADER (LABEL_3_35);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto linearize_bblock_35;

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_3_49);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_3_56);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_64]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_3_64);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_151;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto linearize_bblock_35;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_3_63);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_150)
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_67]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_3_62);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_151)
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_150;

DEFLABEL (loop_113)
DEFLABEL (loop_26)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_50);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_163;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_163;
  (Wrd7.Obj) = ((Wrd50.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_158;

DEFLABEL (label_157)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_53]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_52);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_153;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd31.Lng))))
    goto label_153;
  (Wrd23.Obj) = ((Wrd29.pObj) [7]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_152)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_60]));

DEFLABEL (label_153)
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);
  (Wrd43.Obj) = (current_block [OBJECT_3_14]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_59]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_98)
DEFLABEL (label_154)
  (Wrd69.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd69.Obj));
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_57]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_156;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd64.Lng))))
    goto label_156;
  (Wrd56.Obj) = ((Wrd62.pObj) [8]);
  (* (--Rsp)) = (Wrd56.Obj);
  goto label_152;

DEFLABEL (label_156)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);
  (Wrd76.Obj) = (current_block [OBJECT_3_13]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_58]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_99)
  goto label_154;

DEFLABEL (label_158)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_162;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_162;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_161)
  Rdl = (& (Rsp [2]));
  goto loop_26;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_3_54);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_160;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_160;
  (Wrd7.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_159)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_160)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_3_5]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_61]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_100)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (current_block [OBJECT_3_11]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_55]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_96)
  (Wrd37.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd37.Obj));
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (label_163)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_3_11]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_51]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_97)
  (Wrd55.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd55.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_157;
  goto label_158;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (Wrd67.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd67.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_164;
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [3]);
  (* (--Rsp)) = (Wrd75.Obj);
  goto linearize_sblock_next_40;

DEFLABEL (label_164)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 10))
    goto label_167;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd88.Lng))))
    goto label_167;
  (Wrd76.Obj) = ((Wrd86.pObj) [15]);

DEFLABEL (label_166)
  (Rsp [0]) = (Wrd76.Obj);
  if ((Wrd76.Obj) == ((SCHEME_OBJECT) 0))
    goto label_165;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_165;
  (Wrd112.Obj) = (Rsp [4]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (* (--Rsp)) = (Wrd114.Obj);
  goto linearize_bblock_35;

DEFLABEL (label_165)
  (Wrd109.Obj) = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [2]));
  (Wrd106.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd106.Obj));
  (* (--Rsp)) = (Wrd109.Obj);
  goto label_127;

DEFLABEL (label_167)
  (Wrd94.Obj) = (Rsp [4]);
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);
  (Wrd96.Obj) = (current_block [OBJECT_3_0]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_101)
  (Wrd76.Obj) = Rvl;
  goto label_166;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Wrd65.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd65.Obj));
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_57);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_65]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_171;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd24.Lng))))
    goto label_171;
  (Wrd16.Obj) = ((Wrd22.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_170)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_60]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_65);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_169;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_169;
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_168)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd28.pObj) [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [5]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  goto linearize_pblock_81;

DEFLABEL (label_169)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_3_5]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_68]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_103)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);
  (Wrd36.Obj) = (current_block [OBJECT_3_14]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_66]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_102)
  (Wrd29.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd29.Obj));
  (* (--Rsp)) = Rvl;
  goto label_170;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtline_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd9;
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
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_9 11
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_1 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_8 13
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtline_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_15)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_14;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd9.pObj) [1]) = Rvl;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_7)
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_8 7
#define LABEL_6 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define ENVIRONMENT_LABEL_3 34
#define DEBUGGING_LABEL_2 33
#define PURIFICATION_ROOT 32
#define OBJECT_6 31
#define OBJECT_5 30
#define OBJECT_4 29
#define OBJECT_3 28
#define OBJECT_2 27
#define OBJECT_1 26
#define OBJECT_0 25
#define EXECUTE_CACHE_9 17
#define FREE_REFERENCE_1 20
#define FREE_REFERENCE_0 21
#define GLOBAL_EXECUTE_CACHE_5 23
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rtline_so_9efabbb6a3276923 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
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
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
  {
    static const short sections [] =
      {
	0,
	1,
	0,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
      goto label_7;
    blocks = (current_block [OBJECT_6]);
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
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;
  Wrd10 = Wrd14;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_11;
  Wrd18 = Wrd22;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd19.pObj));

DEFLABEL (label_5)
  (Wrd18.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd11.pObj));

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rtline_so_9efabbb6a3276923 [5] =
  {
    { "rtline_so_code_1", 22, rtline_so_code_1 },
    { "rtline_so_code_2", 33, rtline_so_code_2 },
    { "rtline_so_code_3", 53, rtline_so_code_3 },
    { "rtline_so_code_4", 1, rtline_so_code_4 },
    { "rtline_so_code_5", 5, rtline_so_code_5 }
  };

int
decl_rtline_so_9efabbb6a3276923 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtline_so_9efabbb6a3276923);
  return (0);
}

DECLARE_COMPILED_CODE ("rtline.so", 7, decl_rtline_so_9efabbb6a3276923, rtline_so_9efabbb6a3276923)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtline_so_data_9efabbb6a3276923 [1841] =
  "\x95\x01\x08\xaa\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x1d\xc2"
  "\xb9\x02\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x02"
  "\x0d\x0d\xc1\x02\x1d\xc1\xbd\xb1\x80\x02\xc3\x08\x28\xb2\x28\x0d"
  "\x28\x0d\x28\x0d\xba\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x86\x02\x0d\x82"
  "\x0d\x0d\x0d\x02\x85\x80\x0d\x02\x08\xb1\x02\x0d\x24\x28\x0d\x28"
  "\xb3\x28\x0d\x28\x0d\x28\x0d\x28\xb2\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88"
  "\x08\x22\x29\x21\x9d\x2b\xba\x1d\xb0\x85\x88\xc2\xb5\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x9c\xb9"
  "\x88\xb1\xc3\xb2\x2a\xb5\x2a\x0d\x0d\xbd\x0d\x0d\xba\x9a\xb3\x2a"
  "\xb6\x2a\xb4\x2a\x9a\x28\x0d\x26\x0d\xb5\x24\x28\xb2\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5c"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x62\x61\x73\x65"
  "\x2f\x72\x74\x6c\x69\x6e\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x1b\x49\x6c\x6c\x65\x67\x61\x6c\x20\x6c\x69\x6e\x65\x61\x72"
  "\x69\x7a\x61\x74\x69\x6f\x6e\x20\x72\x6f\x6f\x74\x02\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x03\x14\x77\x69\x74\x68\x2d"
  "\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73\x02\x0b"
  "\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x03\x0a\x72\x74\x6c\x2d"
  "\x65\x78\x70\x72\x3f\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03"
  "\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x04\x12\x71"
  "\x75\x65\x75\x65\x2d\x6d\x61\x70\x21\x2f\x75\x6e\x73\x61\x66\x65"
  "\x03\x0f\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x03\x14\x72\x74\x6c\x2d\x65\x78\x70\x72\x2f\x65\x6e\x74\x72\x79"
  "\x2d\x6e\x6f\x64\x65\x04\x06\x65\x72\x72\x6f\x72\x03\x19\x72\x74"
  "\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x6e\x74\x72"
  "\x79\x2d\x6e\x6f\x64\x65\x04\x10\x65\x6e\x71\x75\x65\x75\x65\x21"
  "\x2f\x75\x6e\x73\x61\x66\x65\x0c\x1d\x2e\x81\x87\x02\x1c\x2c\x81"
  "\x85\x02\x1b\x2a\x81\x85\x02\x1a\x28\x81\x89\x02\x19\x26\x81\x87"
  "\x02\x18\x24\x81\x85\x02\x17\x22\x81\x85\x02\x16\x20\x81\x8d\x02"
  "\x15\x1e\x81\x89\x02\x14\x1c\x81\x85\x02\x13\x1a\x81\x85\x02\x12"
  "\x18\x81\x8d\x02\x11\x16\x81\x8b\x02\x10\x14\x81\x89\x02\x0f\x12"
  "\x81\x85\x02\x0e\x10\x81\x85\x02\x0d\x0e\x81\x85\x02\x0c\x0c\x81"
  "\x85\x02\x0b\x0a\x81\x83\x02\x0a\x08\x81\x83\x02\x09\x06\x81\x89"
  "\x02\x08\x04\x86\x0a\x2d\x4b\x02\x0f\x09\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x13\x65\x6e\x74\x72\x79\x3a\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x04\x63\x61\x72\x09\x02\x04\x63\x64\x72\x0e"
  "\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x04\x03\x0f\x72"
  "\x67\x72\x61\x70\x68\x2d\x62\x62\x6c\x6f\x63\x6b\x73\x04\x14\x62"
  "\x62\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d\x66\x6f\x72\x77\x61"
  "\x72\x64\x03\x08\x73\x62\x6c\x6f\x63\x6b\x3f\x04\x04\x6d\x61\x70"
  "\x03\x0b\x72\x69\x6e\x73\x74\x2d\x6c\x61\x73\x74\x03\x0e\x6c\x61"
  "\x62\x65\x6c\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x04\x05\x6d\x65\x6d"
  "\x71\x03\x10\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3f\x03\x1c\x72\x74\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2f\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x0b"
  "\x3e\x44\x81\x89\x02\x3d\x42\x81\x87\x02\x3c\x40\x81\x85\x02\x3b"
  "\x3e\x81\x85\x02\x3a\x3c\x81\x85\x02\x39\x3a\x81\x85\x02\x38\x38"
  "\x81\x85\x02\x37\x36\x81\x85\x02\x36\x34\x81\x85\x02\x35\x32\x81"
  "\x83\x02\x34\x30\x81\x83\x02\x33\x2e\x81\x83\x02\x32\x2c\x81\x85"
  "\x02\x31\x2a\x81\x85\x02\x30\x28\x81\x89\x02\x2f\x26\x81\x89\x02"
  "\x2e\x24\x81\x85\x02\x2d\x22\x81\x85\x02\x2c\x20\x81\x85\x02\x2b"
  "\x1e\x81\x85\x02\x2a\x1c\x83\x04\x29\x1a\x81\x85\x02\x28\x18\x81"
  "\x83\x02\x27\x16\x81\x85\x02\x26\x14\x81\x85\x02\x25\x12\x81\x85"
  "\x02\x24\x10\x81\x83\x02\x23\x0e\x81\x83\x02\x22\x0c\x81\x87\x02"
  "\x21\x0a\x81\x85\x02\x20\x08\x83\x04\x1f\x06\x83\x04\x1e\x04\x83"
  "\x04\x43\x67\x02\x08\x0b\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74"
  "\x04\x6e\x6f\x74\x06\x6a\x75\x6d\x70\x63\x06\x6c\x61\x62\x65\x6c"
  "\x09\x05\x6a\x75\x6d\x70\x0d\x0f\x16\x63\x66\x67\x2f\x70\x72\x65"
  "\x66\x65\x72\x2d\x62\x72\x61\x6e\x63\x68\x2f\x74\x61\x67\x02\x03"
  "\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x03\x03\x0e\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x6c\x61\x62\x65\x6c\x21\x03\x09\x65\x64\x67"
  "\x65\x73\x3e\x31\x3f\x04\x0d\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d"
  "\x67\x65\x74\x03\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d"
  "\x6e\x6f\x64\x65\x04\x07\x61\x70\x70\x65\x6e\x64\x09\x73\x6c\xfd"
  "\xff\x03\x72\x6a\xfd\xff\x03\x71\x68\x81\x8f\x02\x70\x66\x81\x91"
  "\x02\x6f\x64\x81\x8d\x02\x6e\x62\xfd\xff\x03\x6d\x60\xfd\xff\x03"
  "\x6c\x5e\x81\x8b\x02\x6b\x5c\xfd\xff\x03\x6a\x5a\xfd\xff\x03\x69"
  "\x58\xfd\xff\x03\x68\x56\xfd\xff\x03\x67\x54\xfd\xff\x03\x66\x52"
  "\x81\x89\x02\x65\x50\x81\x8d\x02\x64\x4e\xfd\xff\x03\x63\x4c\xfd"
  "\xff\x03\x62\x4a\xff\xff\x03\x61\x48\x81\x89\x02\x60\x46\x81\x8d"
  "\x02\x5f\x44\x81\x8b\x02\x5e\x42\x81\x8d\x02\x5d\x40\x81\x8b\x02"
  "\x5c\x3e\x81\x8f\x02\x5b\x3c\x81\x8d\x02\x5a\x3a\x81\x89\x02\x59"
  "\x38\x81\x87\x02\x58\x36\x85\x08\x57\x34\x81\x87\x02\x56\x32\x81"
  "\x85\x02\x55\x30\xfd\xff\x03\x54\x2e\xff\xff\x03\x53\x2c\x81\x8b"
  "\x02\x52\x2a\x81\x8b\x02\x51\x28\x81\x85\x02\x50\x26\x81\x87\x02"
  "\x4f\x24\x81\x85\x02\x4e\x22\x81\x85\x02\x4d\x20\x81\x85\x02\x4c"
  "\x1e\x81\x85\x02\x4b\x1c\x81\x8b\x02\x4a\x1a\xfd\xff\x03\x49\x18"
  "\x81\x85\x02\x48\x16\x81\x85\x02\x47\x14\xfd\xff\x03\x46\x12\x81"
  "\x83\x02\x45\x10\xfd\xff\x03\x44\x0e\x81\x83\x02\x43\x0c\x81\x85"
  "\x02\x42\x0a\x81\x8b\x02\x41\x08\x81\x85\x02\x40\x06\x81\x85\x02"
  "\x3f\x04\x84\x06\x6b\x90\x01\x02\x74\x04\x82\x02\x03\x02\x09\x73"
  "\x65\x74\x2d\x63\x64\x72\x21\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61"
  "\x69\x72\x02\x79\x0c\x81\x85\x02\x78\x0a\x81\x85\x02\x77\x08\x81"
  "\x85\x02\x76\x06\x81\x85\x02\x75\x04\x84\x06\x0b\x13\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x04\x04"
  "\x0e\x6c\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d\x72\x74\x6c\x15\x62"
  "\x62\x6c\x6f\x63\x6b\x2d\x6c\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d"
  "\x72\x74\x6c\x1c\x73\x65\x74\x75\x70\x2d\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x21\x10"
  "\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x65\x61\x72\x69\x7a\x65\x72\x04"
  "\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x05\x63\x64\x61\x72\x03\x06\x02\x07\x10\x80\x80"
  "\x04\x06\x0e\x81\x81\x02\x05\x0c\x81\x81\x02\x04\x0a\x81\x87\x02"
  "\x03\x08\x81\x8f\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\x0f"
  "\x23";

SCHEME_OBJECT *
rtline_so_data_9efabbb6a3276923 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtline_so_data_9efabbb6a3276923 [0]))), (sizeof (prog_rtline_so_data_9efabbb6a3276923)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("rtline.so", rtline_so_data_9efabbb6a3276923)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtline.so", "e8d413164bffc01a")
