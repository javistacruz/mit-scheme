/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_12 13
#define LABEL_1_10 15
#define TAG_1_11 6
#define LABEL_1_14 17
#define TAG_1_15 7
#define LABEL_1_16 19
#define TAG_1_17 8
#define LABEL_1_23 21
#define LABEL_1_18 23
#define TAG_1_19 10
#define LABEL_1_27 25
#define LABEL_1_22 27
#define LABEL_1_30 29
#define LABEL_1_25 31
#define TAG_1_26 14
#define LABEL_1_33 33
#define LABEL_1_31 35
#define TAG_1_32 16
#define LABEL_1_34 37
#define TAG_1_35 17
#define LABEL_1_36 39
#define TAG_1_37 18
#define LABEL_1_39 41
#define LABEL_1_40 43
#define ENVIRONMENT_LABEL_1_3 78
#define DEBUGGING_LABEL_1_2 77
#define OBJECT_1_7 76
#define OBJECT_1_6 75
#define OBJECT_1_5 74
#define OBJECT_1_4 73
#define OBJECT_1_3 72
#define OBJECT_1_2 71
#define OBJECT_1_1 70
#define OBJECT_1_0 69
#define EXECUTE_CACHE_1_43 45
#define EXECUTE_CACHE_1_42 47
#define EXECUTE_CACHE_1_41 49
#define EXECUTE_CACHE_1_38 51
#define EXECUTE_CACHE_1_29 53
#define EXECUTE_CACHE_1_28 55
#define EXECUTE_CACHE_1_24 57
#define EXECUTE_CACHE_1_21 59
#define EXECUTE_CACHE_1_20 61
#define EXECUTE_CACHE_1_13 63
#define EXECUTE_CACHE_1_9 65
#define FREE_REFERENCE_1_0 68
#define FREE_REFERENCES_LABEL_1_0 44
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_assignment_19;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_31;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_32;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_33;

    case 9:
      current_block = (Rpc - LABEL_1_23);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_34;

    case 11:
      current_block = (Rpc - LABEL_1_27);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_1_30);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_1_25);
      goto lambda_35;

    case 15:
      current_block = (Rpc - LABEL_1_33);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_1_31);
      goto lambda_36;

    case 17:
      current_block = (Rpc - LABEL_1_34);
      goto lambda_37;

    case 18:
      current_block = (Rpc - LABEL_1_36);
      goto lambda_38;

    case 19:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_assignment_30)
DEFLABEL (generate_assignment_19)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_45;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd29.Lng))))
    goto label_45;
  (Wrd23.Obj) = ((Wrd27.pObj) [8]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_44)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_43;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd45.Lng))))
    goto label_43;
  (Wrd37.Obj) = ((Wrd43.pObj) [10]);

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_41;
  Wrd16 = Wrd20;

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd17.pObj));

DEFLABEL (label_24)
  (Wrd16.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_1_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_23)
  (Wrd37.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_1_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_16])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd24 = Wrd17;
  ((Wrd24.pObj) [2]) = (Wrd11.Obj);
  ((Wrd24.pObj) [3]) = (Wrd14.Obj);
  ((Wrd24.pObj) [4]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 2;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd33 = Wrd30;
  ((Wrd33.pObj) [2]) = (Wrd14.Obj);
  ((Wrd33.pObj) [3]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd29.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_1_16);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_52;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd20.Lng))))
    goto label_52;
  (Wrd12.Obj) = ((Wrd18.pObj) [20]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  (Wrd32.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = ((Wrd30.pObj) [4]);
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (label_48)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_50;
  Wrd7 = Wrd11;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_31])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd8.pObj));

DEFLABEL (label_27)
  (Wrd7.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_1_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_25])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_54;
  Wrd19 = Wrd23;

DEFLABEL (label_53)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd20.pObj));

DEFLABEL (label_26)
  (Wrd19.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_1_25);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;
  Wrd5 = Wrd9;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_34])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd24.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd6.pObj));

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_1_31);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_1_34);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_36])));
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
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_1_36);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define TAG_2_6 2
#define LABEL_2_9 9
#define LABEL_2_10 11
#define TAG_2_11 4
#define LABEL_2_12 13
#define LABEL_2_14 15
#define LABEL_2_16 17
#define LABEL_2_18 19
#define LABEL_2_19 21
#define LABEL_2_24 23
#define LABEL_2_25 25
#define LABEL_2_20 27
#define TAG_2_21 12
#define LABEL_2_23 29
#define LABEL_2_29 31
#define LABEL_2_30 33
#define LABEL_2_28 35
#define LABEL_2_32 37
#define LABEL_2_33 39
#define LABEL_2_31 41
#define LABEL_2_35 43
#define LABEL_2_36 45
#define LABEL_2_34 47
#define LABEL_2_39 49
#define LABEL_2_40 51
#define LABEL_2_37 53
#define LABEL_2_42 55
#define LABEL_2_38 57
#define LABEL_2_43 59
#define ENVIRONMENT_LABEL_2_3 90
#define DEBUGGING_LABEL_2_2 89
#define OBJECT_2_9 88
#define OBJECT_2_8 87
#define OBJECT_2_7 86
#define OBJECT_2_6 85
#define OBJECT_2_5 84
#define OBJECT_2_4 83
#define OBJECT_2_3 82
#define OBJECT_2_2 81
#define OBJECT_2_1 80
#define OBJECT_2_0 79
#define EXECUTE_CACHE_2_41 61
#define EXECUTE_CACHE_2_27 63
#define EXECUTE_CACHE_2_26 65
#define EXECUTE_CACHE_2_22 67
#define EXECUTE_CACHE_2_17 69
#define EXECUTE_CACHE_2_15 71
#define EXECUTE_CACHE_2_13 73
#define EXECUTE_CACHE_2_8 75
#define FREE_REFERENCE_2_0 78
#define FREE_REFERENCES_LABEL_2_0 60
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd39;
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
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto generate_cached_assignment_34;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_52;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_53;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_2_24);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_2_25);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto lambda_54;

    case 13:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_2_29);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_2_30);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_2_32);
      goto label_42;

    case 18:
      current_block = (Rpc - LABEL_2_33);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_2_35);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_2_36);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_2_39);
      goto label_46;

    case 24:
      current_block = (Rpc - LABEL_2_40);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_2_42);
      goto label_48;

    case 27:
      current_block = (Rpc - LABEL_2_38);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_2_43);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_cached_assignment_51)
DEFLABEL (generate_cached_assignment_34)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_56;
  Wrd22 = Wrd26;

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_58;
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_20])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_82;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_82;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_81)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_80;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_80;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_78;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_78;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_77)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_76;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_76;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_74;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_74;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_73)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_72;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_72;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_70;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_70;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_69)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_68;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_68;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_66;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_66;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_65)
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_64;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_64;
  (Wrd29.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_38);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_59)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (current_block [OBJECT_2_9]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_2_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.Obj) = (current_block [OBJECT_2_7]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_2_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_2_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_2_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_2_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_2_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_2_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_2_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_2_7]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_2_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_2_20);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_10 11
#define LABEL_3_8 13
#define TAG_3_9 5
#define LABEL_3_12 15
#define TAG_3_13 6
#define LABEL_3_18 17
#define LABEL_3_14 19
#define LABEL_3_16 21
#define TAG_3_17 9
#define LABEL_3_20 23
#define LABEL_3_21 25
#define TAG_3_22 11
#define LABEL_3_23 27
#define TAG_3_24 12
#define ENVIRONMENT_LABEL_3_3 46
#define DEBUGGING_LABEL_3_2 45
#define OBJECT_3_3 44
#define OBJECT_3_2 43
#define OBJECT_3_1 42
#define OBJECT_3_0 41
#define EXECUTE_CACHE_3_26 29
#define EXECUTE_CACHE_3_25 31
#define EXECUTE_CACHE_3_19 33
#define EXECUTE_CACHE_3_15 35
#define EXECUTE_CACHE_3_11 37
#define FREE_REFERENCE_3_0 40
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_3_4);
      goto generate_definition_10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto lambda_21;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_22;

    case 10:
      current_block = (Rpc - LABEL_3_20);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto lambda_23;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto lambda_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_definition_19)
DEFLABEL (generate_definition_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_30;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd29.Lng))))
    goto label_30;
  (Wrd23.Obj) = ((Wrd27.pObj) [8]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_29)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_28;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd45.Lng))))
    goto label_28;
  (Wrd37.Obj) = ((Wrd43.pObj) [10]);

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_8])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  (Wrd58.Obj) = (Rsp [1]);
  ((Wrd57.pObj) [2]) = (Wrd58.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  ((Wrd57.pObj) [3]) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_26;
  Wrd60 = Wrd64;

DEFLABEL (label_25)
  (Rsp [2]) = (Wrd60.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd67.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_10])), (Wrd61.pObj));

DEFLABEL (label_15)
  (Wrd60.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_3_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_14)
  (Wrd37.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_3_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_3_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_3_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_16])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_34;
  Wrd19 = Wrd23;

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_18])), (Wrd20.pObj));

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_3_16);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_21])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd24.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_20])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_3_21);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_23])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_3_23);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define LABEL_4_11 15
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_14 21
#define LABEL_4_17 23
#define LABEL_4_18 25
#define LABEL_4_19 27
#define LABEL_4_21 29
#define LABEL_4_26 31
#define LABEL_4_20 33
#define LABEL_4_30 35
#define LABEL_4_32 37
#define LABEL_4_15 39
#define LABEL_4_34 41
#define LABEL_4_35 43
#define LABEL_4_25 45
#define LABEL_4_38 47
#define LABEL_4_39 49
#define LABEL_4_40 51
#define LABEL_4_41 53
#define LABEL_4_42 55
#define LABEL_4_24 57
#define LABEL_4_46 59
#define LABEL_4_31 61
#define LABEL_4_48 63
#define LABEL_4_49 65
#define LABEL_4_36 67
#define LABEL_4_45 69
#define ENVIRONMENT_LABEL_4_3 123
#define DEBUGGING_LABEL_4_2 122
#define OBJECT_4_14 121
#define OBJECT_4_13 120
#define OBJECT_4_12 119
#define OBJECT_4_11 118
#define OBJECT_4_10 117
#define OBJECT_4_9 116
#define OBJECT_4_8 115
#define OBJECT_4_7 114
#define OBJECT_4_6 113
#define OBJECT_4_5 112
#define OBJECT_4_4 111
#define OBJECT_4_3 110
#define OBJECT_4_2 109
#define OBJECT_4_1 108
#define OBJECT_4_0 107
#define EXECUTE_CACHE_4_50 71
#define EXECUTE_CACHE_4_47 73
#define EXECUTE_CACHE_4_44 75
#define EXECUTE_CACHE_4_43 77
#define EXECUTE_CACHE_4_37 79
#define EXECUTE_CACHE_4_33 81
#define EXECUTE_CACHE_4_29 83
#define EXECUTE_CACHE_4_28 85
#define EXECUTE_CACHE_4_27 87
#define EXECUTE_CACHE_4_23 89
#define EXECUTE_CACHE_4_22 91
#define EXECUTE_CACHE_4_16 93
#define EXECUTE_CACHE_4_10 95
#define FREE_REFERENCE_4_8 98
#define FREE_REFERENCE_4_7 99
#define FREE_REFERENCE_4_6 100
#define FREE_REFERENCE_4_5 101
#define FREE_REFERENCE_4_4 102
#define FREE_REFERENCE_4_3 103
#define FREE_REFERENCE_4_2 104
#define FREE_REFERENCE_4_1 105
#define FREE_REFERENCE_4_0 106
#define FREE_REFERENCES_LABEL_4_0 70
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd78;
  machine_word Wrd62;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd123;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd131;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd39;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_virtual_return_41;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_43;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_54;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_45;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_4_17);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_4_18);
      goto label_52;

    case 12:
      current_block = (Rpc - LABEL_4_19);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_4_26);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_30;

    case 16:
      current_block = (Rpc - LABEL_4_30);
      goto lambda_9;

    case 17:
      current_block = (Rpc - LABEL_4_32);
      goto label_56;

    case 18:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_4_34);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_4_35);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_4_38);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_4_39);
      goto label_60;

    case 24:
      current_block = (Rpc - LABEL_4_40);
      goto label_61;

    case 25:
      current_block = (Rpc - LABEL_4_41);
      goto label_62;

    case 26:
      current_block = (Rpc - LABEL_4_42);
      goto label_63;

    case 27:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_4_46);
      goto label_59;

    case 29:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_4;

    case 30:
      current_block = (Rpc - LABEL_4_48);
      goto label_65;

    case 31:
      current_block = (Rpc - LABEL_4_49);
      goto label_66;

    case 32:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_4_45);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_virtual_return_68)
DEFLABEL (generate_virtual_return_41)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_120;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_120;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_119)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_118;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_118;
  (Wrd23.Obj) = ((Wrd27.pObj) [9]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_117)
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_116;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd169.Lng))))
    goto label_116;
  (Wrd39.Obj) = ((Wrd167.pObj) [4]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_111;

DEFLABEL (label_110)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_109;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd83.Lng))))
    goto label_109;
  (Wrd77.Obj) = ((Wrd81.pObj) [4]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_108)
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd96.Obj) = ((Wrd93.pObj) [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd97.uLng) == 50)
    goto label_107;
  Wrd92 = Wrd96;

DEFLABEL (label_106)
  (Wrd98.Obj) = (Rsp [0]);
  if (! ((Wrd98.Obj) == (Wrd92.Obj)))
    goto label_71;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_105;
  Wrd100 = Wrd104;

DEFLABEL (label_104)
  (Wrd106.Obj) = (Rsp [0]);
  if (! ((Wrd106.Obj) == (Wrd100.Obj)))
    goto label_78;

DEFLABEL (label_77)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd161.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_76;
  Wrd6 = Wrd10;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_74;
  (Wrd12.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_73)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd12.Obj) == (Wrd28.Obj))
    goto label_72;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (label_72)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.pObj) = (& (Rsp [2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  goto lambda_9;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_50]));

DEFLABEL (label_74)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_4_7]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_58)
  (Wrd12.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_34])), (Wrd7.pObj));

DEFLABEL (label_57)
  (Wrd6.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_103;
  Wrd108 = Wrd112;

DEFLABEL (label_102)
  (Wrd114.Obj) = (Rsp [0]);
  if ((Wrd114.Obj) == (Wrd108.Obj))
    goto label_77;
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_3]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_101;
  Wrd116 = Wrd120;

DEFLABEL (label_100)
  (Wrd122.Obj) = (Rsp [0]);
  if ((Wrd122.Obj) == (Wrd116.Obj))
    goto label_79;
  (Wrd123.Obj) = (current_block [OBJECT_4_8]);
  (Rsp [2]) = (Wrd123.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (label_79)
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_4]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_99;
  Wrd125 = Wrd129;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd140.Obj) = (Rsp [3]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 10))
    goto label_97;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd139.Lng))))
    goto label_97;
  (Wrd131.Obj) = ((Wrd137.pObj) [1]);

DEFLABEL (label_96)
  (Wrd147.Obj) = (* (Rsp++));
  if ((Wrd131.Obj) == (Wrd147.Obj))
    goto label_95;
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd151.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd151.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (label_80)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_5]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_94;
  Wrd15 = Wrd19;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd87.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd87.uLng) == 10))
    goto label_92;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd85.Lng))))
    goto label_92;
  (Wrd24.Obj) = ((Wrd83.pObj) [18]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_91)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_90;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd35.Lng))))
    goto label_90;
  (Wrd27.Obj) = ((Wrd33.pObj) [15]);

DEFLABEL (label_89)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_88;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd49.Lng))))
    goto label_88;
  (Wrd43.Obj) = ((Wrd47.pObj) [8]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd43.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_6]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_86;
  Wrd56 = Wrd60;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_84;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd70.Lng))))
    goto label_84;
  (Wrd62.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_83)
  (Wrd78.Obj) = (* (Rsp++));
  if (! ((Wrd62.Obj) == (Wrd78.Obj)))
    goto label_81;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_43]));

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_82)
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_44]));

DEFLABEL (label_84)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (current_block [OBJECT_4_7]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_63)
  (Wrd62.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_41])), (Wrd57.pObj));

DEFLABEL (label_62)
  (Wrd56.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd52.Obj) = (current_block [OBJECT_4_5]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_61)
  (Wrd43.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_4_10]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_60)
  (Wrd27.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (current_block [OBJECT_4_9]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_26])), (Wrd16.pObj));

DEFLABEL (label_55)
  (Wrd15.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd155.pObj) = (& (Rsp [2]));
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd155.pObj)));
  (* (--Rsp)) = (Wrd157.Obj);
  goto lambda_9;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (label_97)
  (Wrd142.Obj) = (Rsp [3]);
  (Wrd143.Obj) = (current_block [OBJECT_4_7]);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_53)
  (Wrd131.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_18])), (Wrd126.pObj));

DEFLABEL (label_52)
  (Wrd125.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_17])), (Wrd117.pObj));

DEFLABEL (label_51)
  (Wrd116.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_14])), (Wrd109.pObj));

DEFLABEL (label_50)
  (Wrd108.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd101.pObj));

DEFLABEL (label_49)
  (Wrd100.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd93.pObj));

DEFLABEL (label_48)
  (Wrd92.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (current_block [OBJECT_4_3]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_115;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd49.Lng))))
    goto label_115;
  (Wrd43.Obj) = ((Wrd47.pObj) [8]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_114)
  (Wrd57.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd57.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_113;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_113;
  (Wrd58.Obj) = ((Wrd64.pObj) [2]);

DEFLABEL (label_112)
  (Rsp [2]) = (Wrd58.Obj);
  (Wrd74.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_113)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_4_6]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_46)
  (Wrd58.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (current_block [OBJECT_4_5]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.Obj) = (current_block [OBJECT_4_3]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  goto label_110;

DEFLABEL (label_118)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_122;
  Wrd11 = Wrd15;

DEFLABEL (label_121)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_47]));

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_46])), (Wrd12.pObj));

DEFLABEL (label_59)
  (Wrd11.Obj) = Rvl;
  goto label_121;

DEFLABEL (lambda_69)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_4_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd28.Obj) = ((Wrd11.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_131;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_131;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_130)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_33]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_31);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_129;
  Wrd5 = Wrd9;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_127;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_127;
  (Wrd11.Obj) = ((Wrd21.pObj) [3]);

DEFLABEL (label_126)
  (Wrd35.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd35.Obj))
    goto label_124;
  Rvl = (Rsp [0]);
  goto label_123;

DEFLABEL (label_124)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_4_12]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_4_13]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));

DEFLABEL (label_123)
DEFLABEL (label_125)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_127)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);
  (Wrd31.Obj) = (current_block [OBJECT_4_11]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_49]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_66)
  (Wrd11.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_48])), (Wrd6.pObj));

DEFLABEL (label_65)
  (Wrd5.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);
  (Wrd33.Obj) = (current_block [OBJECT_4_6]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (lambda_70)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_4_45);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_12]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCE_5_1 12
#define FREE_REFERENCE_5_0 13
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto operand__push_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operand__push_5)
DEFLABEL (operand__push_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define TAG_6_7 2
#define ENVIRONMENT_LABEL_6_3 16
#define DEBUGGING_LABEL_6_2 15
#define EXECUTE_CACHE_6_9 9
#define EXECUTE_CACHE_6_8 11
#define FREE_REFERENCE_6_0 14
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6_4);
      goto operand__register_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operand__register_5)
DEFLABEL (operand__register_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_6_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto load_temporary_register_7;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_temporary_register_10)
DEFLABEL (load_temporary_register_7)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_7 7
#define LABEL_8_5 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_13 15
#define LABEL_8_12 17
#define ENVIRONMENT_LABEL_8_3 33
#define DEBUGGING_LABEL_8_2 32
#define OBJECT_8_4 31
#define OBJECT_8_3 30
#define OBJECT_8_2 29
#define OBJECT_8_1 28
#define OBJECT_8_0 27
#define EXECUTE_CACHE_8_15 19
#define EXECUTE_CACHE_8_14 21
#define EXECUTE_CACHE_8_11 23
#define EXECUTE_CACHE_8_8 25
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto generate_continuation_cons_9;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_continuation_cons_16)
DEFLABEL (generate_continuation_cons_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_24)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_23;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_23;
  (Wrd25.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [17]);

DEFLABEL (label_20)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_3])))
    goto label_17;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [15]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_8_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd33.Obj) = (current_block [OBJECT_8_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define OBJECT_9_1 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 9
#define EXECUTE_CACHE_9_7 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto generate_pop_2;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_pop_6)
DEFLABEL (generate_pop_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_7 7
#define LABEL_10_5 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_12 15
#define LABEL_10_15 17
#define LABEL_10_13 19
#define LABEL_10_18 21
#define LABEL_10_19 23
#define LABEL_10_20 25
#define LABEL_10_22 27
#define LABEL_10_25 29
#define LABEL_10_27 31
#define LABEL_10_23 33
#define TAG_10_24 15
#define LABEL_10_28 35
#define ENVIRONMENT_LABEL_10_3 69
#define DEBUGGING_LABEL_10_2 68
#define OBJECT_10_8 67
#define OBJECT_10_7 66
#define OBJECT_10_6 65
#define OBJECT_10_5 64
#define OBJECT_10_4 63
#define OBJECT_10_3 62
#define OBJECT_10_2 61
#define OBJECT_10_1 60
#define OBJECT_10_0 59
#define EXECUTE_CACHE_10_30 37
#define EXECUTE_CACHE_10_29 39
#define EXECUTE_CACHE_10_26 41
#define EXECUTE_CACHE_10_21 43
#define EXECUTE_CACHE_10_17 45
#define EXECUTE_CACHE_10_16 47
#define EXECUTE_CACHE_10_14 49
#define EXECUTE_CACHE_10_11 51
#define EXECUTE_CACHE_10_8 53
#define FREE_REFERENCE_10_2 56
#define FREE_REFERENCE_10_1 57
#define FREE_REFERENCE_10_0 58
#define FREE_REFERENCES_LABEL_10_0 36
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_10_4);
      goto generate_stack_overwrite_21;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_10_18);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_10_22);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_10_25);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_10_27);
      goto lambda_10;

    case 15:
      current_block = (Rpc - LABEL_10_23);
      goto lambda_34;

    case 16:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_stack_overwrite_33)
DEFLABEL (generate_stack_overwrite_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_57;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_57;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_55;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_55;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd5.Obj) = ((Wrd11.pObj) [10]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_51;
  Wrd6 = Wrd10;

DEFLABEL (label_50)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_46;
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  goto lambda_10;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_45;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd15.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd13.pObj) [12]);

DEFLABEL (label_44)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_43;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_42)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rsp = (& (Rsp [1]));
  goto lambda_10;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_41;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_23])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_39;
  Wrd29 = Wrd33;

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_25])), (Wrd30.pObj));

DEFLABEL (label_31)
  (Wrd29.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_10_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_30)
  (Wrd7.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_10_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_28)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_49;
  Wrd14 = Wrd18;

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_47;
  (Wrd21.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (label_47)
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_15])), (Wrd15.pObj));

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_12])), (Wrd7.pObj));

DEFLABEL (label_26)
  (Wrd6.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_10_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_10_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (lambda_35)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_10_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (Wrd9.Obj) = (current_block [OBJECT_10_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_30]));

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_10_23);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_12 9
#define LABEL_11_13 11
#define LABEL_11_15 13
#define LABEL_11_11 15
#define ENVIRONMENT_LABEL_11_3 36
#define DEBUGGING_LABEL_11_2 35
#define OBJECT_11_5 34
#define OBJECT_11_4 33
#define OBJECT_11_3 32
#define OBJECT_11_2 31
#define OBJECT_11_1 30
#define OBJECT_11_0 29
#define EXECUTE_CACHE_11_16 17
#define EXECUTE_CACHE_11_14 19
#define EXECUTE_CACHE_11_10 21
#define EXECUTE_CACHE_11_9 23
#define EXECUTE_CACHE_11_8 25
#define EXECUTE_CACHE_11_6 27
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_11_4);
      goto stack_overwrite_locative_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_15);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_overwrite_locative_12)
DEFLABEL (stack_overwrite_locative_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd33.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_24;
  (Wrd15.Obj) = ((Wrd19.pObj) [8]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_23)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_5]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_16)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd18.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd16.pObj) [20]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_17)
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [7]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_20)
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_19;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  Rsp = (& (Rsp [2]));
  goto label_17;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.Obj) = (current_block [OBJECT_11_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_11_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_10 11
#define LABEL_12_9 13
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define OBJECT_12_3 22
#define OBJECT_12_2 21
#define OBJECT_12_1 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_11 15
#define EXECUTE_CACHE_12_7 17
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto generate_true_test_5;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_true_test_11)
DEFLABEL (generate_true_test_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_13;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_13;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (label_13)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_12_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_11 11
#define LABEL_13_12 13
#define LABEL_13_10 15
#define LABEL_13_15 17
#define LABEL_13_17 19
#define ENVIRONMENT_LABEL_13_3 40
#define DEBUGGING_LABEL_13_2 39
#define OBJECT_13_1 38
#define OBJECT_13_0 37
#define EXECUTE_CACHE_13_18 21
#define EXECUTE_CACHE_13_16 23
#define EXECUTE_CACHE_13_14 25
#define EXECUTE_CACHE_13_13 27
#define EXECUTE_CACHE_13_9 29
#define EXECUTE_CACHE_13_7 31
#define FREE_REFERENCE_13_2 34
#define FREE_REFERENCE_13_1 35
#define FREE_REFERENCE_13_0 36
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_13_4);
      goto generate_predicate_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_predicate_14)
DEFLABEL (generate_predicate_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_22;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_21)
  (Wrd27.Obj) = (* (Rsp++));
  if (! ((Wrd11.Obj) == (Wrd27.Obj)))
    goto label_15;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_15)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_20;
  Wrd12 = Wrd16;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_18;
  Wrd18 = Wrd22;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_15);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_12])), (Wrd19.pObj));

DEFLABEL (label_12)
  (Wrd18.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_11])), (Wrd13.pObj));

DEFLABEL (label_11)
  (Wrd12.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_13_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto generate_known_predicate_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_known_predicate_7)
DEFLABEL (generate_known_predicate_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_12;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd16.pObj) [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_10)
  (Wrd11.Obj) = (Rsp [1]);
  goto label_8;

DEFLABEL (label_9)
  (Wrd11.Obj) = (Rsp [2]);

DEFLABEL (label_8)
DEFLABEL (label_11)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_12)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_14_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define LABEL_15_14 13
#define LABEL_15_16 15
#define LABEL_15_17 17
#define LABEL_15_18 19
#define LABEL_15_9 21
#define LABEL_15_10 23
#define TAG_15_11 10
#define LABEL_15_12 25
#define TAG_15_13 11
#define LABEL_15_26 27
#define LABEL_15_21 29
#define LABEL_15_23 31
#define LABEL_15_24 33
#define TAG_15_25 15
#define LABEL_15_28 35
#define LABEL_15_29 37
#define LABEL_15_31 39
#define TAG_15_32 18
#define ENVIRONMENT_LABEL_15_3 74
#define DEBUGGING_LABEL_15_2 73
#define OBJECT_15_7 72
#define OBJECT_15_6 71
#define OBJECT_15_5 70
#define OBJECT_15_4 69
#define OBJECT_15_3 68
#define OBJECT_15_2 67
#define OBJECT_15_1 66
#define OBJECT_15_0 65
#define EXECUTE_CACHE_15_36 41
#define EXECUTE_CACHE_15_35 43
#define EXECUTE_CACHE_15_34 45
#define EXECUTE_CACHE_15_33 47
#define EXECUTE_CACHE_15_30 49
#define EXECUTE_CACHE_15_27 51
#define EXECUTE_CACHE_15_22 53
#define EXECUTE_CACHE_15_20 55
#define EXECUTE_CACHE_15_19 57
#define EXECUTE_CACHE_15_15 59
#define FREE_REFERENCE_15_2 62
#define FREE_REFERENCE_15_1 63
#define FREE_REFERENCE_15_0 64
#define FREE_REFERENCES_LABEL_15_0 40
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
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
  machine_word Wrd119;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto generate_unassigned_test_20;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_15_14);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_15_16);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_15_17);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_15_18);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_15_10);
      goto lambda_32;

    case 11:
      current_block = (Rpc - LABEL_15_12);
      goto lambda_33;

    case 12:
      current_block = (Rpc - LABEL_15_26);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_15_24);
      goto lambda_34;

    case 16:
      current_block = (Rpc - LABEL_15_28);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_15_31);
      goto lambda_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_unassigned_test_31)
DEFLABEL (generate_unassigned_test_20)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_52;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_51)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_50;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_49)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_48;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd45.Lng))))
    goto label_48;
  (Wrd39.Obj) = ((Wrd43.pObj) [10]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_47)
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_43;
  Wrd55 = Wrd59;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_41;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_41;
  (Wrd61.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_40)
  (Wrd77.Obj) = (* (Rsp++));
  if ((Wrd61.Obj) == (Wrd77.Obj))
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (label_37)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 10))
    goto label_39;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd90.Lng))))
    goto label_39;
  (Wrd84.Obj) = ((Wrd88.pObj) [3]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd119.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd119.Obj);
  goto label_36;

DEFLABEL (label_39)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (current_block [OBJECT_15_2]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_15_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_26)
  (Wrd61.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_16])), (Wrd56.pObj));

DEFLABEL (label_25)
  (Wrd55.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd102.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_10])));
  Rhp += 1;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd102.pObj)));
  Wrd103 = Wrd102;
  (Wrd104.Obj) = (Rsp [2]);
  ((Wrd103.pObj) [2]) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd106.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_12])));
  Rhp += 1;
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd106.pObj)));
  ((Wrd106.pObj) [2]) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_46;
  Wrd109 = Wrd113;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd115.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd116.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_21);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15_28);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_34]));

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_14])), (Wrd110.pObj));

DEFLABEL (label_28)
  (Wrd109.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_15_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_15_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_15_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_15_12);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_24])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_54;
  Wrd17 = Wrd21;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_23);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_5]);
  (Wrd13.Obj) = (current_block [OBJECT_15_6]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_15_7]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_29);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_35]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_26])), (Wrd18.pObj));

DEFLABEL (label_29)
  (Wrd17.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_15_24);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_31])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_33]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_15_31);

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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_36]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define TAG_16_7 2
#define LABEL_16_9 9
#define LABEL_16_11 11
#define LABEL_16_13 13
#define LABEL_16_15 15
#define LABEL_16_20 17
#define LABEL_16_21 19
#define LABEL_16_16 21
#define TAG_16_17 9
#define LABEL_16_19 23
#define LABEL_16_25 25
#define LABEL_16_26 27
#define LABEL_16_24 29
#define LABEL_16_28 31
#define LABEL_16_29 33
#define LABEL_16_27 35
#define LABEL_16_31 37
#define LABEL_16_32 39
#define LABEL_16_30 41
#define LABEL_16_35 43
#define LABEL_16_36 45
#define LABEL_16_34 47
#define LABEL_16_37 49
#define ENVIRONMENT_LABEL_16_3 81
#define DEBUGGING_LABEL_16_2 80
#define OBJECT_16_10 79
#define OBJECT_16_9 78
#define OBJECT_16_8 77
#define OBJECT_16_7 76
#define OBJECT_16_6 75
#define OBJECT_16_5 74
#define OBJECT_16_4 73
#define OBJECT_16_3 72
#define OBJECT_16_2 71
#define OBJECT_16_1 70
#define OBJECT_16_0 69
#define EXECUTE_CACHE_16_33 51
#define EXECUTE_CACHE_16_23 53
#define EXECUTE_CACHE_16_22 55
#define EXECUTE_CACHE_16_18 57
#define EXECUTE_CACHE_16_14 59
#define EXECUTE_CACHE_16_12 61
#define EXECUTE_CACHE_16_10 63
#define EXECUTE_CACHE_16_8 65
#define FREE_REFERENCE_16_0 68
#define FREE_REFERENCES_LABEL_16_0 50
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgstmt_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd39;
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
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto generate_cached_unassignedP_32;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_16_20);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_16_21);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_16_16);
      goto lambda_49;

    case 10:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_16_25);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_16_26);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_16_24);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_16_28);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_16_29);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_16_31);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_16_32);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_16_35);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_16_36);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_16_34);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_16_37);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_cached_unassignedP_47)
DEFLABEL (generate_cached_unassignedP_32)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_51;
  Wrd5 = Wrd9;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_16_6);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16_5]);
  (Wrd13.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_73;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_73;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_72)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_71;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_71;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_69;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_69;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_68)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_67;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_67;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_16_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_63;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_63;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_61;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_61;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_60)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_59;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_59;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_57;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_57;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_55;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_55;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_33]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_16_34);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_52)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd29.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd30.Obj) = (current_block [OBJECT_16_10]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd25.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd25.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_16_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_16_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_36]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_16_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_35]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_16_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_16_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_16_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_16_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_16_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_16_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_16_8]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_16_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_16_16);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

INVOKE_INTERFACE_TARGET_0
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
rgstmt_so_42d33a74098a9ea1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 16)
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

static const struct liarc_code_S arr_decl_rgstmt_so_42d33a74098a9ea1 [16] =
  {
    { "rgstmt_so_code_1", 21, rgstmt_so_code_1 },
    { "rgstmt_so_code_2", 29, rgstmt_so_code_2 },
    { "rgstmt_so_code_3", 13, rgstmt_so_code_3 },
    { "rgstmt_so_code_4", 34, rgstmt_so_code_4 },
    { "rgstmt_so_code_5", 3, rgstmt_so_code_5 },
    { "rgstmt_so_code_6", 3, rgstmt_so_code_6 },
    { "rgstmt_so_code_7", 4, rgstmt_so_code_7 },
    { "rgstmt_so_code_8", 8, rgstmt_so_code_8 },
    { "rgstmt_so_code_9", 3, rgstmt_so_code_9 },
    { "rgstmt_so_code_10", 17, rgstmt_so_code_10 },
    { "rgstmt_so_code_11", 7, rgstmt_so_code_11 },
    { "rgstmt_so_code_12", 6, rgstmt_so_code_12 },
    { "rgstmt_so_code_13", 9, rgstmt_so_code_13 },
    { "rgstmt_so_code_14", 3, rgstmt_so_code_14 },
    { "rgstmt_so_code_15", 19, rgstmt_so_code_15 },
    { "rgstmt_so_code_16", 24, rgstmt_so_code_16 }
  };

int
decl_rgstmt_so_42d33a74098a9ea1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgstmt_so_42d33a74098a9ea1);
  return (0);
}

DECLARE_COMPILED_CODE ("rgstmt.so", 3, decl_rgstmt_so_42d33a74098a9ea1, rgstmt_so_42d33a74098a9ea1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgstmt_so_data_42d33a74098a9ea1 [4364] =
  "\x82\x01\x26\xbf\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x08"
  "\x0d\x02\x02\x02\xc2\xba\x02\x0d\xbb\x24\x28\x0d\xbc\x28\x0d\xbd"
  "\x28\x0d\x28\x0d\xbe\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0d\x83\x82\xb2\x81\x0d\x1c"
  "\x02\x0d\x1c\xb1\x08\xb3\x24\x28\xb7\x28\x0d\xb9\x28\x0d\x1c\x28"
  "\xb6\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x02\x02"
  "\xb2\x02\xb3\x24\x28\xb5\x28\x0d\x28\xb7\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x0d\x0d\x08\x82\x02\x02\x0c\x80\x81\x02\xc2\x83\x02\xb2\x02"
  "\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x0d\x0d\xb3\x0d\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\xb5\x28\xb6\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb3\x1b\x24\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb3\x24\x28"
  "\xb5\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\x28\x0d\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x02\xb2\x83\x28\x0d"
  "\x28\x0d\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2"
  "\x02\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xc1\x02\x0c\x02\x02\xb2\x02\x1b"
  "\x1b\xb3\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\xb4"
  "\x28\xb5\x28\x1b\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x86\xb2\x02\x80\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\xb2\x86\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x80\x0d\x0d\x1c\x0d\xbe\x24"
  "\x28\x0d\xbc\x28\x0d\x28\xb5\x28\x0d\xbd\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x82\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\x0d\x80\x02\x82\xb2\x83\xb1\x0d\xb3\x24\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\xb7\x28\x1b\x28\x1b\x28\x1b\x28\xb6\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x83\x82\xb2\x81\x0d\x1b\x02\x1b\x0d\x08\xb6\x24\x28\xb7\x28"
  "\x1b\x28\xb1\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\xb4\xb5\x1b\x0d\x1b\x0d\x0d\x1b"
  "\xb7\x1b\x1b\x0d\x0d\x1b\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74"
  "\x6c\x67\x65\x6e\x2f\x72\x67\x73\x74\x6d\x74\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x11\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x2d\x63\x61\x63\x68\x65\x18\x69\x67\x6e\x6f\x72\x65\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x72\x61\x70\x73\x14\x0a"
  "\x08\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x11\x73\x63"
  "\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x02\x03"
  "\x13\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x64\x3f\x05\x10\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x76"
  "\x61\x6c\x75\x65\x07\x17\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2f\x6c\x6f\x63\x61\x74\x69\x76\x65\x04\x14\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x04\x05\x6d\x65\x6d\x71\x05\x18\x6c\x6f\x61\x64\x2d\x74\x65"
  "\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x05\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x61\x63\x68\x65"
  "\x64\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09\x04\x1d\x77"
  "\x72\x61\x70\x2d\x77\x69\x74\x68\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x0a\x03\x18\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f"
  "\x62\x6c\x6f\x63\x6b\x06\x1f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x73\x65\x74\x21\x04\x17\x69\x6e\x74\x65\x72\x6e\x2d\x73\x63"
  "\x6f\x64\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x0c\x18\x2c"
  "\x81\x8d\x02\x17\x2a\x81\x89\x02\x16\x28\x81\x85\x02\x15\x26\x81"
  "\x85\x02\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81\x85"
  "\x02\x11\x1e\x81\x85\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81\x87\x02"
  "\x0e\x18\x81\x87\x02\x0d\x16\x81\x87\x02\x0c\x14\x81\x85\x02\x0b"
  "\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x89\x02\x08\x0c"
  "\x81\x87\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x85\x02\x05\x06\x81"
  "\x83\x02\x04\x04\x83\x04\x2b\x4f\x0b\x02\x0a\x73\x6e\x6f\x64\x65"
  "\x2d\x63\x66\x67\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70"
  "\x65\x0c\x33\x06\x66\x65\x74\x63\x68\x0d\x02\x05\x03\x19\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x2d\x74\x65\x73\x74\x04\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x0e\x04\x04\x0a\x04\x0f"
  "\x68\x6f\x6f\x6b\x73\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x21\x0f\x05"
  "\x2b\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x04\x0c\x68\x6f\x6f"
  "\x6b\x73\x2d\x75\x6e\x69\x6f\x6e\x10\x09\x35\x3c\x81\x8f\x02\x34"
  "\x3a\x81\x8d\x02\x33\x38\x81\x8d\x02\x32\x36\x81\x8b\x02\x31\x34"
  "\x81\x91\x02\x30\x32\x81\x8f\x02\x2f\x30\x81\x8b\x02\x2e\x2e\x81"
  "\x8f\x02\x2d\x2c\x81\x8d\x02\x2c\x2a\x81\x8b\x02\x2b\x28\x81\x8f"
  "\x02\x2a\x26\x81\x8d\x02\x29\x24\x81\x8b\x02\x28\x22\x81\x8f\x02"
  "\x27\x20\x81\x8d\x02\x26\x1e\x81\x8b\x02\x25\x1c\x81\x85\x02\x24"
  "\x1a\x81\x8f\x02\x23\x18\x81\x8d\x02\x22\x16\x81\x8d\x02\x21\x14"
  "\x81\x8b\x02\x20\x12\x81\x8b\x02\x1f\x10\x81\x89\x02\x1e\x0e\x81"
  "\x87\x02\x1d\x0c\x81\x85\x02\x1c\x0a\x81\x85\x02\x1b\x08\x81\x85"
  "\x02\x1a\x06\x81\x87\x02\x19\x04\x85\x08\x3b\x5b\x11\x02\x0a\x08"
  "\x09\x02\x05\x04\x19\x66\x69\x6e\x64\x2d\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x05\x04\x0a"
  "\x06\x21\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69"
  "\x6e\x65\x06\x42\x1c\x81\x85\x02\x41\x1a\x81\x85\x02\x40\x18\x81"
  "\x85\x02\x3f\x16\x81\x85\x02\x3e\x14\x81\x85\x02\x3d\x12\x81\x87"
  "\x02\x3c\x10\x81\x87\x02\x3b\x0e\x81\x85\x02\x3a\x0c\x81\x89\x02"
  "\x39\x0a\x81\x87\x02\x38\x08\x81\x85\x02\x37\x06\x81\x83\x02\x36"
  "\x04\x83\x04\x1b\x2f\x12\x02\x0a\x63\x65\x6c\x6c\x2d\x63\x6f\x6e"
  "\x73\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0f\x12\x1a"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x08\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x09\x0a\x19\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x65\x66\x66\x65\x63"
  "\x74\x1b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x13\x18\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f"
  "\x76\x61\x6c\x75\x65\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x75\x73\x68\x14\x0a\x62\x6c"
  "\x6f\x63\x6b\x2d\x74\x61\x67\x21\x76\x69\x72\x74\x75\x61\x6c\x2d"
  "\x72\x65\x74\x75\x72\x6e\x2f\x74\x61\x72\x67\x65\x74\x2d\x6c\x76"
  "\x61\x6c\x75\x65\x2f\x74\x61\x67\x0e\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x74\x61\x67\x11\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70"
  "\x65\x2f\x73\x74\x61\x63\x6b\x0a\x05\x18\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x72\x65\x74\x75\x72"
  "\x6e\x03\x1e\x76\x69\x72\x74\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x03\x15\x72\x76\x61\x6c\x75\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x3f\x04\x06\x65\x72\x72\x6f\x72\x15\x04\x0d"
  "\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x67\x65\x74\x03\x1b\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2d\x63\x6f\x6e\x73\x16\x03\x0e\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x70\x75\x73\x68\x17\x06\x21\x62\x6c\x6f\x63\x6b"
  "\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d\x73\x65\x6c"
  "\x66\x2d\x3e\x6c\x6f\x63\x61\x74\x69\x76\x65\x18\x04\x12\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x3e\x72\x65\x67\x69\x73\x74\x65\x72\x19"
  "\x03\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69"
  "\x6e\x65\x2d\x63\x6f\x64\x65\x3f\x03\x0e\x6f\x70\x65\x72\x61\x6e"
  "\x64\x2d\x3e\x70\x75\x73\x68\x1a\x05\x04\x0e\x64\x46\x83\x04\x63"
  "\x44\x81\x89\x02\x62\x42\x81\x87\x02\x61\x40\x81\x85\x02\x60\x3e"
  "\x81\x83\x02\x5f\x3c\x81\x89\x02\x5e\x3a\x81\x89\x02\x5d\x38\x81"
  "\x85\x02\x5c\x36\x81\x83\x02\x5b\x34\x81\x83\x02\x5a\x32\x81\x83"
  "\x02\x59\x30\x81\x83\x02\x58\x2e\x81\x8b\x02\x57\x2c\x81\x8b\x02"
  "\x56\x2a\x81\x89\x02\x55\x28\x81\x89\x02\x54\x26\x81\x8b\x02\x53"
  "\x24\x81\x83\x02\x52\x22\x81\x89\x02\x51\x20\x81\x8d\x02\x50\x1e"
  "\x81\x89\x02\x4f\x1c\x81\x8b\x02\x4e\x1a\x81\x89\x02\x4d\x18\x81"
  "\x89\x02\x4c\x16\x81\x89\x02\x4b\x14\x81\x89\x02\x4a\x12\x81\x89"
  "\x02\x49\x10\x81\x87\x02\x48\x0e\x81\x89\x02\x47\x0c\x81\x87\x02"
  "\x46\x0a\x81\x87\x02\x45\x08\x81\x85\x02\x44\x06\x81\x83\x02\x43"
  "\x04\x83\x04\x45\x7c\x1b\x02\x17\x03\x05\x02\x67\x08\x81\x87\x02"
  "\x66\x06\x81\x83\x02\x65\x04\x83\x04\x07\x10\x17\x02\x02\x05\x04"
  "\x03\x6a\x08\x81\x85\x02\x69\x06\x81\x87\x02\x68\x04\x84\x06\x07"
  "\x11\x1c\x02\x08\x0d\x02\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x04"
  "\x03\x6e\x0a\x81\x8b\x02\x6d\x08\x81\x89\x02\x6c\x06\x81\x87\x02"
  "\x6b\x04\x85\x08\x09\x13\x1d\x02\x09\x0f\x07\x61\x6c\x77\x61\x79"
  "\x73\x11\x03\x18\x70\x75\x73\x68\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x65\x78\x74\x72\x61\x03\x16\x65\x6e\x71"
  "\x75\x65\x75\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x21\x03\x15\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73"
  "\x68\x2d\x72\x65\x74\x75\x72\x6e\x04\x05\x76\x12\x81\x85\x02\x75"
  "\x10\x81\x87\x02\x74\x0e\x81\x85\x02\x73\x0c\x81\x85\x02\x72\x0a"
  "\x81\x83\x02\x71\x08\x81\x85\x02\x70\x06\x81\x85\x02\x6f\x04\x83"
  "\x04\x11\x22\x1e\x02\x0a\x08\x03\x17\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2a\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x1f"
  "\x03\x0d\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x20\x03"
  "\x79\x08\x81\x83\x02\x78\x06\x81\x85\x02\x77\x04\x83\x04\x07\x11"
  "\x21\x02\x0b\x0d\x04\x63\x61\x72\x0c\x1a\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x74"
  "\x79\x70\x65\x0a\x08\x09\x13\x14\x04\x04\x19\x73\x74\x61\x63\x6b"
  "\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x2d\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x14\x03\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2a\x2f\x74\x79\x70\x65\x03\x0b\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x03\x20\x04\x15\x03\x05\x03\x1f\x04\x0a\x8a\x01"
  "\x24\x81\x85\x02\x89\x01\x22\x81\x85\x02\x88\x01\x20\x81\x85\x02"
  "\x87\x01\x1e\x81\x87\x02\x86\x01\x1c\x81\x87\x02\x85\x01\x1a\x81"
  "\x87\x02\x84\x01\x18\x81\x85\x02\x83\x01\x16\x81\x85\x02\x82\x01"
  "\x14\x81\x85\x02\x81\x01\x12\x81\x87\x02\x80\x01\x10\x81\x87\x02"
  "\x7f\x0e\x81\x85\x02\x7e\x0c\x81\x85\x02\x7d\x0a\x81\x83\x02\x7c"
  "\x08\x81\x87\x02\x7b\x06\x81\x85\x02\x7a\x04\x83\x04\x23\x46\x20"
  "\x02\x0c\x14\x08\x14\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x61\x72"
  "\x67\x65\x74\x20\x74\x79\x70\x65\x03\x0a\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x3f\x03\x07\x62\x6c\x6f\x63\x6b\x3f\x04\x1e\x66\x69\x6e"
  "\x64\x2d\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69\x74"
  "\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x04\x15\x03\x13\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f"
  "\x06\x18\x07\x91\x01\x10\x81\x89\x02\x90\x01\x0e\x81\x83\x02\x8f"
  "\x01\x0c\x81\x83\x02\x8e\x01\x0a\x81\x8b\x02\x8d\x01\x08\x81\x85"
  "\x02\x8c\x01\x06\x81\x85\x02\x8b\x01\x04\x84\x06\x0f\x25\x1f\x02"
  "\x0d\x08\x0a\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e"
  "\x6f\x64\x65\x05\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\x18\x03\x97\x01\x0e\x81\x87\x02\x96"
  "\x01\x0c\x81\x89\x02\x95\x01\x0a\x81\x85\x02\x94\x01\x08\x81\x83"
  "\x02\x93\x01\x06\x81\x85\x02\x92\x01\x04\x83\x04\x0d\x19\x15\x02"
  "\x0e\x14\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73"
  "\x74\x2d\x74\x61\x67\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74"
  "\x72\x75\x65\x2d\x74\x65\x73\x74\x13\x11\x73\x63\x66\x67\x2a\x70"
  "\x63\x66\x67\x2d\x3e\x70\x63\x66\x67\x21\x04\x05\x19\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x2d\x74\x65\x73\x74\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e"
  "\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x05\x05\x19\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x6b\x6e\x6f\x77\x6e\x2d\x70\x72\x65\x64\x69"
  "\x63\x61\x74\x65\x03\x0e\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6e"
  "\x6f\x64\x65\x22\x05\x11\x70\x63\x66\x67\x2a\x73\x63\x66\x67\x2d"
  "\x3e\x73\x63\x66\x67\x21\x23\x07\xa0\x01\x14\x81\x89\x02\x9f\x01"
  "\x12\x81\x89\x02\x9e\x01\x10\x81\x89\x02\x9d\x01\x0e\x81\x8d\x02"
  "\x9c\x01\x0c\x81\x8b\x02\x9b\x01\x0a\x81\x87\x02\x9a\x01\x08\x81"
  "\x89\x02\x99\x01\x06\x81\x87\x02\x98\x01\x04\x85\x08\x13\x29\x24"
  "\x02\x0f\x03\x0a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x03\x22\x03"
  "\xa3\x01\x08\x81\x87\x02\xa2\x01\x06\x81\x87\x02\xa1\x01\x04\x85"
  "\x08\x07\x11\x25\x02\x10\x0d\x24\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a"
  "\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x0a\x0d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x04\x07\x14\x66\x69\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x03"
  "\x1b\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x03\x22\x04\x1c\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x61\x63\x68\x65\x64\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x22\x05\x03\x13\x04\x0a"
  "\x05\x23\x04\x05\x26\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x0b\xb6\x01\x28\x81\x85"
  "\x02\xb5\x01\x26\x81\x87\x02\xb4\x01\x24\x81\x8d\x02\xb3\x01\x22"
  "\x81\x85\x02\xb2\x01\x20\x81\x87\x02\xb1\x01\x1e\x81\x8d\x02\xb0"
  "\x01\x1c\x81\x8d\x02\xaf\x01\x1a\x81\x87\x02\xae\x01\x18\x81\x85"
  "\x02\xad\x01\x16\x81\x8d\x02\xac\x01\x14\x81\x8f\x02\xab\x01\x12"
  "\x81\x8f\x02\xaa\x01\x10\x81\x8d\x02\xa9\x01\x0e\x81\x93\x02\xa8"
  "\x01\x0c\x81\x8b\x02\xa7\x01\x0a\x81\x89\x02\xa6\x01\x08\x81\x87"
  "\x02\xa5\x01\x06\x85\x08\xa4\x01\x04\x81\x8d\x02\x27\x4b\x23\x02"
  "\x11\x0a\x70\x6e\x6f\x64\x65\x2d\x63\x66\x67\x2a\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73"
  "\x75\x6c\x74\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x3f\x0c\x33\x0d\x0f\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x63\x61\x63\x68\x65\x02\x05\x04\x0e\x03\x03\x13\x04\x0a"
  "\x04\x0f\x04\x2c\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61"
  "\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x04"
  "\x10\x09\xce\x01\x32\x81\x8d\x02\xcd\x01\x30\x81\x8b\x02\xcc\x01"
  "\x2e\x81\x8f\x02\xcb\x01\x2c\x81\x8d\x02\xca\x01\x2a\x81\x89\x02"
  "\xc9\x01\x28\x81\x8d\x02\xc8\x01\x26\x81\x8b\x02\xc7\x01\x24\x81"
  "\x89\x02\xc6\x01\x22\x81\x8d\x02\xc5\x01\x20\x81\x8b\x02\xc4\x01"
  "\x1e\x81\x89\x02\xc3\x01\x1c\x81\x8d\x02\xc2\x01\x1a\x81\x8b\x02"
  "\xc1\x01\x18\x81\x89\x02\xc0\x01\x16\x81\x85\x02\xbf\x01\x14\x81"
  "\x8d\x02\xbe\x01\x12\x81\x8b\x02\xbd\x01\x10\x81\x8b\x02\xbc\x01"
  "\x0e\x81\x89\x02\xbb\x01\x0c\x81\x89\x02\xba\x01\x0a\x81\x87\x02"
  "\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x85\x02\xb7\x01\x04\x84"
  "\x06\x31\x52\x13\x11\x10\x10\x13\x04\x23\x06\x25\x04\x24\x04\x15"
  "\x04\x1f\x04\x20\x04\x21\x04\x1e\x04\x1d\x04\x1c\x04\x17\x04\x1b"
  "\x04\x12\x04\x11\x04\x0b\x04\x11\x22\x18\x13\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2f\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x14\x19\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x73\x74\x61\x63\x6b\x2d\x6f\x76"
  "\x65\x72\x77\x72\x69\x74\x65\x0d\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2f\x70\x6f\x70\x16\x19\x1a\x18\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2f\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x14"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x09\x14\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rgstmt_so_data_42d33a74098a9ea1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgstmt_so_data_42d33a74098a9ea1 [0]))), (sizeof (prog_rgstmt_so_data_42d33a74098a9ea1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rgstmt.so", rgstmt_so_data_42d33a74098a9ea1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgstmt.so", "80531aa8b9608080")
