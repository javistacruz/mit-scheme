/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:38-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_14 15
#define LABEL_1_16 17
#define LABEL_1_19 19
#define LABEL_1_21 21
#define ENVIRONMENT_LABEL_1_3 44
#define DEBUGGING_LABEL_1_2 43
#define OBJECT_1_3 42
#define OBJECT_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_20 23
#define EXECUTE_CACHE_1_18 25
#define EXECUTE_CACHE_1_17 27
#define EXECUTE_CACHE_1_15 29
#define EXECUTE_CACHE_1_13 31
#define EXECUTE_CACHE_1_10 33
#define EXECUTE_CACHE_1_8 35
#define EXECUTE_CACHE_1_6 37
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto decode_www_form_urlencoded_16;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_www_form_urlencoded_19)
DEFLABEL (decode_www_form_urlencoded_16)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (loop_20)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_10 7
#define LABEL_2_9 9
#define LABEL_2_11 11
#define LABEL_2_14 13
#define LABEL_2_8 15
#define LABEL_2_15 17
#define LABEL_2_17 19
#define LABEL_2_19 21
#define LABEL_2_26 23
#define LABEL_2_23 25
#define LABEL_2_24 27
#define LABEL_2_29 29
#define LABEL_2_22 31
#define LABEL_2_27 33
#define LABEL_2_28 35
#define LABEL_2_31 37
#define LABEL_2_32 39
#define LABEL_2_30 41
#define LABEL_2_34 43
#define LABEL_2_33 45
#define LABEL_2_35 47
#define ENVIRONMENT_LABEL_2_3 84
#define DEBUGGING_LABEL_2_2 83
#define OBJECT_2_15 82
#define OBJECT_2_14 81
#define OBJECT_2_13 80
#define OBJECT_2_12 79
#define OBJECT_2_11 78
#define OBJECT_2_10 77
#define OBJECT_2_9 76
#define OBJECT_2_8 75
#define OBJECT_2_7 74
#define OBJECT_2_6 73
#define OBJECT_2_5 72
#define OBJECT_2_4 71
#define OBJECT_2_3 70
#define OBJECT_2_2 69
#define OBJECT_2_1 68
#define OBJECT_2_0 67
#define EXECUTE_CACHE_2_36 49
#define EXECUTE_CACHE_2_25 51
#define EXECUTE_CACHE_2_21 53
#define EXECUTE_CACHE_2_20 55
#define EXECUTE_CACHE_2_18 57
#define EXECUTE_CACHE_2_16 59
#define EXECUTE_CACHE_2_13 61
#define EXECUTE_CACHE_2_12 63
#define EXECUTE_CACHE_2_7 65
#define FREE_REFERENCES_LABEL_2_0 48
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto decode_segment_37;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_44;

    case 2:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_2_14);
      goto loop_33;

    case 6:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_31;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_2_29);
      goto lambda_12;

    case 14:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_30;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_26;

    case 17:
      current_block = (Rpc - LABEL_2_31);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_2_32);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_7;

    case 22:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_segment_43)
DEFLABEL (decode_segment_37)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_49;

DEFLABEL (label_50)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_49)
DEFLABEL (label_51)
  goto loop_33;

DEFLABEL (lambda_45)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 2))
    goto label_55;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_54)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (! ((Wrd18.Lng) < 128L))
    goto label_53;
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (label_53)
  (Wrd22.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_52;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_39)
  (Wrd10.Obj) = Rvl;
  goto label_54;

DEFLABEL (loop_46)
DEFLABEL (loop_33)
  INTERRUPT_CHECK (26, LABEL_2_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_71;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [3]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_56)
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto pop_return;

DEFLABEL (label_58)
  (Wrd15.Obj) = (Rsp [0]);
  if ((Wrd15.Obj) == (current_block [OBJECT_2_3]))
    goto label_57;
  if ((Wrd15.Obj) == (current_block [OBJECT_2_4]))
    goto label_70;
  if ((Wrd15.Obj) == (current_block [OBJECT_2_6]))
    goto label_67;
  if ((Wrd15.Obj) == (current_block [OBJECT_2_7]))
    goto label_67;
  if ((Wrd15.Obj) == (current_block [OBJECT_2_8]))
    goto label_66;
  if (! ((Wrd15.Obj) == (current_block [OBJECT_2_10])))
    goto label_63;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.pObj) = (& (Rsp [4]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  goto lambda_12;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [6]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_12;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_62;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), 16, (& (Wrd13.Lng))))
    goto label_62;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_61)
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_60;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_60;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = ((Wrd27.Lng) + (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_60;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_13]), 1);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = (& (Rsp [6]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (label_60)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd5.Obj) = (current_block [OBJECT_2_12]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_40)
  (Wrd10.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd27.Obj) = (current_block [OBJECT_2_11]);
  (Rsp [2]) = (Wrd27.Obj);

DEFLABEL (label_65)
  (Rsp [3]) = (Wrd15.Obj);

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (label_66)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.pObj) = (& (Rsp [3]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto label_56;

DEFLABEL (label_67)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  if (! ((Wrd49.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd51.Obj) = (current_block [OBJECT_2_5]);
  (Rsp [2]) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd52.Obj);
  goto label_64;

DEFLABEL (label_70)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [2]);
  if (! ((Wrd58.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_68;
  (Wrd60.Obj) = (current_block [OBJECT_2_5]);
  (Rsp [2]) = (Wrd60.Obj);
  goto label_65;

DEFLABEL (label_71)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd11.Obj) = (current_block [OBJECT_2_2]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (label_72)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_26);
  Rsp = (& (Rsp [1]));
  goto loop_33;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_23);
  Rsp = (& (Rsp [1]));
  goto loop_33;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_22);
  Rsp = (& (Rsp [1]));
  goto loop_33;

DEFLABEL (lambda_47)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_8);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (lambda_48)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_2_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_34);

DEFLABEL (label_74)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd9.Obj) = (current_block [OBJECT_2_15]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_12 9
#define LABEL_3_8 11
#define TAG_3_9 4
#define LABEL_3_11 13
#define LABEL_3_16 15
#define LABEL_3_14 17
#define LABEL_3_17 19
#define LABEL_3_20 21
#define LABEL_3_19 23
#define LABEL_3_21 25
#define LABEL_3_22 27
#define LABEL_3_25 29
#define LABEL_3_27 31
#define LABEL_3_23 33
#define LABEL_3_24 35
#define LABEL_3_28 37
#define LABEL_3_33 39
#define LABEL_3_30 41
#define LABEL_3_34 43
#define LABEL_3_32 45
#define LABEL_3_35 47
#define ENVIRONMENT_LABEL_3_3 76
#define DEBUGGING_LABEL_3_2 75
#define OBJECT_3_9 74
#define OBJECT_3_8 73
#define OBJECT_3_7 72
#define OBJECT_3_6 71
#define OBJECT_3_5 70
#define OBJECT_3_4 69
#define OBJECT_3_3 68
#define OBJECT_3_2 67
#define OBJECT_3_1 66
#define OBJECT_3_0 65
#define EXECUTE_CACHE_3_31 49
#define EXECUTE_CACHE_3_29 51
#define EXECUTE_CACHE_3_26 53
#define EXECUTE_CACHE_3_18 55
#define EXECUTE_CACHE_3_15 57
#define EXECUTE_CACHE_3_13 59
#define EXECUTE_CACHE_3_10 61
#define EXECUTE_CACHE_3_7 63
#define FREE_REFERENCES_LABEL_3_0 48
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto encode_www_form_urlencoded_30;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto lambda_42;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_3_20);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto lambda_13;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_3_27);
      goto do_loop_26;

    case 15:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_3_33);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_3_34);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_3_35);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_www_form_urlencoded_41)
DEFLABEL (encode_www_form_urlencoded_30)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (lambda_43)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_54;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_52;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_51)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd17.uLng) == 30)
    goto label_48;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_3_5]);

DEFLABEL (label_47)
DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_3_8);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_55;
  Rvl = (current_block [OBJECT_3_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_59;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_58)
  goto lambda_13;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_57;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_56)
  goto do_loop_26;

DEFLABEL (label_57)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (lambda_44)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_3_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_63;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_31]));

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (do_loop_45)
DEFLABEL (do_loop_26)
  INTERRUPT_CHECK (26, LABEL_3_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_65;
  (Wrd7.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_64;

DEFLABEL (label_65)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
DEFLABEL (label_71)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_70;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_69)
  goto lambda_13;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_68;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_26;

DEFLABEL (label_68)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define LABEL_4_7 11
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_3 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_9 13
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto encode_segment_11;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto do_loop_8;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_segment_16)
DEFLABEL (encode_segment_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_18)
  (Wrd16.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto do_loop_8;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (do_loop_17)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_4_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_21;
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_20;

DEFLABEL (label_21)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_24;
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_24;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_24;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd23.pChr) = (& ((Wrd31.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd25.Obj) = (MAKE_OBJECT (2, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_8;

DEFLABEL (label_24)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define LABEL_5_9 9
#define LABEL_5_7 11
#define LABEL_5_11 13
#define LABEL_5_12 15
#define LABEL_5_14 17
#define ENVIRONMENT_LABEL_5_3 33
#define DEBUGGING_LABEL_5_2 32
#define OBJECT_5_6 31
#define OBJECT_5_5 30
#define OBJECT_5_4 29
#define OBJECT_5_3 28
#define OBJECT_5_2 27
#define OBJECT_5_1 26
#define OBJECT_5_0 25
#define EXECUTE_CACHE_5_13 19
#define EXECUTE_CACHE_5_10 21
#define EXECUTE_CACHE_5_6 23
#define FREE_REFERENCES_LABEL_5_0 18
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_5_4);
      goto encode_octet_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_octet_17)
DEFLABEL (encode_octet_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_19)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_5_0]))
    goto label_23;
  if ((Wrd7.Obj) == (current_block [OBJECT_5_2]))
    goto label_22;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 2))
    goto label_21;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd31.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [0]) = (Wrd31.Obj);
  goto label_18;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd19.Lng) = ((Wrd15.Lng) & 240L);
  (Wrd22.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd19.Lng)), 4)));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) & 15L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd5.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCE_6_0 10
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto char_unreservedP_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_unreservedP_4)
DEFLABEL (char_unreservedP_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_6 9
#define LABEL_7_10 11
#define LABEL_7_7 13
#define LABEL_7_12 15
#define ENVIRONMENT_LABEL_7_3 31
#define DEBUGGING_LABEL_7_2 30
#define OBJECT_7_1 29
#define OBJECT_7_0 28
#define EXECUTE_CACHE_7_13 17
#define EXECUTE_CACHE_7_11 19
#define EXECUTE_CACHE_7_8 21
#define FREE_REFERENCE_7_1 24
#define FREE_REFERENCE_7_0 25
#define FREE_ASSIGNMENT_7_0 27
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
html_form_codec_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto initialize_packageB_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_9)
DEFLABEL (initialize_packageB_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_7_1]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
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
html_form_codec_so_a32cad70df17f784 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
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
    if (counter > 7)
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

static const struct liarc_code_S arr_decl_html_form_codec_so_a32cad70df17f784 [7] =
  {
    { "html_form_codec_so_code_1", 10, html_form_codec_so_code_1 },
    { "html_form_codec_so_code_2", 23, html_form_codec_so_code_2 },
    { "html_form_codec_so_code_3", 23, html_form_codec_so_code_3 },
    { "html_form_codec_so_code_4", 5, html_form_codec_so_code_4 },
    { "html_form_codec_so_code_5", 8, html_form_codec_so_code_5 },
    { "html_form_codec_so_code_6", 2, html_form_codec_so_code_6 },
    { "html_form_codec_so_code_7", 7, html_form_codec_so_code_7 }
  };

int
decl_html_form_codec_so_a32cad70df17f784 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_html_form_codec_so_a32cad70df17f784);
  return (0);
}

DECLARE_COMPILED_CODE ("html-form-codec.so", 3, decl_html_form_codec_so_a32cad70df17f784, html_form_codec_so_a32cad70df17f784)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_html_form_codec_so_data_a32cad70df17f784 [1859] =
  "\x59\x0f\x8b\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x08\x0d\xb9"
  "\x0d\xba\x28\x0d\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe"
  "\x28\x0d\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x0c\x0c\xc1\x02\x0c\x0f\x0f\x0f\x0f\x0f\x0c\x0f"
  "\x0f\x0c\x1d\xc1\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb5\x28\xb6"
  "\x28\x0d\xbe\x28\x0d\xbd\x28\xb5\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83"
  "\x88\x0f\x0f\x1d\xb1\x07\xc1\xb2\xc1\x0c\x0d\xba\x28\x0d\x28\x0d"
  "\x28\x0d\x28\xb3\x28\xb4\x28\x0d\x28\x1b\x28\x0d\xbc\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x84\x88\xc2\x07\x80\xc1\x28\x0d\xb9\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02\x0f"
  "\x1b\x0f\x0f\x0f\x0f\x28\xb6\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x25\x0d\x0d\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb8\x9e\x1c\x88\x1b\xb0\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb3\x2a\xb5\x2a\x1b\x2a\x9f\x0d\x1b\xb6\xb1\xb4\xb2"
  "\xb7\x0d\x9f\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5e"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x68\x74\x6d\x6c\x2d\x66"
  "\x6f\x72\x6d\x2d\x63\x6f\x64\x65\x63\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x05\x63\x72\x6c\x66\x09\x75\x73\x2d\x61\x73\x63\x69"
  "\x69\x05\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x6f\x63"
  "\x74\x65\x74\x73\x04\x10\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x63"
  "\x6f\x64\x69\x6e\x67\x04\x15\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d"
  "\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x03\x0a\x72\x65\x61"
  "\x64\x2d\x63\x68\x61\x72\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x3f\x04\x0c\x75\x6e\x72\x65\x61\x64\x2d\x63\x68\x61\x72"
  "\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x04\x0f\x64\x65\x63\x6f"
  "\x64\x65\x2d\x73\x65\x67\x6d\x65\x6e\x74\x09\x0d\x16\x81\x87\x02"
  "\x0c\x14\x81\x87\x02\x0b\x12\x81\x87\x02\x0a\x10\x81\x87\x02\x09"
  "\x0e\x81\x85\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02\x06\x08"
  "\x81\x83\x02\x05\x06\x81\x87\x02\x04\x04\x85\x08\x15\x2d\x09\x02"
  "\x1f\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x68\x61\x72\x61\x63\x74"
  "\x65\x72\x20\x69\x6e\x20\x25\x20\x65\x73\x63\x61\x70\x65\x3a\x27"
  "\x49\x6e\x63\x6f\x6d\x70\x6c\x65\x74\x65\x20\x25\x2d\x65\x73\x63"
  "\x61\x70\x65\x20\x69\x6e\x20\x48\x54\x4d\x4c\x20\x66\x6f\x72\x6d"
  "\x20\x64\x61\x74\x61\x2e\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e"
  "\x63\x68\x61\x72\x11\x25\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x68"
  "\x61\x72\x61\x63\x74\x65\x72\x20\x69\x6e\x20\x48\x54\x4d\x4c\x20"
  "\x66\x6f\x72\x6d\x20\x64\x61\x74\x61\x3a\x01\x26\x01\x21\x01\x2c"
  "\x01\x3c\x01\x27\x2c\x43\x68\x61\x72\x20\x69\x6e\x20\x69\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x20\x69\x6e"
  "\x20\x48\x54\x4d\x4c\x20\x66\x6f\x72\x6d\x20\x64\x61\x74\x61\x3a"
  "\x01\x3e\x01\x0b\x2e\x49\x6d\x70\x72\x6f\x70\x65\x72\x6c\x79\x20"
  "\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x6e\x61\x6d\x65\x20"
  "\x69\x6e\x20\x48\x54\x4d\x4c\x20\x66\x6f\x72\x6d\x20\x64\x61\x74"
  "\x61\x2e\x02\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65"
  "\x72\x0a\x03\x18\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x03\x0e\x63\x68\x61"
  "\x72\x2d\x64\x6f\x77\x6e\x63\x61\x73\x65\x04\x0b\x77\x72\x69\x74"
  "\x65\x2d\x63\x68\x61\x72\x0b\x03\x03\x03\x11\x63\x68\x61\x72\x2d"
  "\x75\x6e\x72\x65\x73\x65\x72\x76\x65\x64\x3f\x03\x06\x65\x72\x72"
  "\x6f\x72\x04\x04\x0c\x63\x68\x61\x72\x2d\x3e\x64\x69\x67\x69\x74"
  "\x0a\x24\x30\x81\x83\x02\x23\x2e\x81\x83\x02\x22\x2c\x81\x83\x02"
  "\x21\x2a\x81\x83\x02\x20\x28\x81\x85\x02\x1f\x26\x81\x87\x02\x1e"
  "\x24\x81\x85\x02\x1d\x22\x81\x83\x02\x1c\x20\x81\x89\x02\x1b\x1e"
  "\x81\x83\x02\x1a\x1c\x81\x8b\x02\x19\x1a\x81\x89\x02\x18\x18\x81"
  "\x89\x02\x17\x16\x81\x89\x02\x16\x14\x81\x89\x02\x15\x12\x81\x87"
  "\x02\x14\x10\x81\x85\x02\x13\x0e\x81\x87\x02\x12\x0c\x81\x87\x02"
  "\x11\x0a\x81\x85\x02\x10\x08\x81\x85\x02\x0f\x06\x81\x85\x02\x0e"
  "\x04\x84\x06\x2f\x55\x02\x01\x3e\x01\x27\x02\x04\x63\x64\x72\x04"
  "\x63\x61\x72\x15\x48\x54\x4d\x4c\x20\x66\x6f\x72\x6d\x20\x64\x61"
  "\x74\x61\x20\x61\x6c\x69\x73\x74\x1b\x65\x6e\x63\x6f\x64\x65\x2d"
  "\x77\x77\x77\x2d\x66\x6f\x72\x6d\x2d\x75\x72\x6c\x65\x6e\x63\x6f"
  "\x64\x65\x64\x06\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c"
  "\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x03\x18\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63"
  "\x74\x65\x74\x73\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x3f\x04\x04\x03\x0c\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x6e\x61\x6d\x65\x04\x0b\x04\x0f\x65\x6e\x63\x6f\x64\x65\x2d"
  "\x73\x65\x67\x6d\x65\x6e\x74\x09\x3b\x30\x81\x89\x02\x3a\x2e\x81"
  "\x89\x02\x39\x2c\x81\x85\x02\x38\x2a\x81\x85\x02\x37\x28\x81\x8d"
  "\x02\x36\x26\x81\x89\x02\x35\x24\x81\x89\x02\x34\x22\x81\x85\x02"
  "\x33\x20\x81\x87\x02\x32\x1e\x81\x8b\x02\x31\x1c\x81\x85\x02\x30"
  "\x1a\x81\x85\x02\x2f\x18\x81\x85\x02\x2e\x16\x81\x89\x02\x2d\x14"
  "\x81\x85\x02\x2c\x12\x81\x85\x02\x2b\x10\x81\x83\x02\x2a\x0e\x81"
  "\x83\x02\x29\x0c\x81\x85\x02\x28\x0a\x81\x85\x02\x27\x08\x83\x04"
  "\x26\x06\x81\x83\x02\x25\x04\x83\x04\x2f\x4d\x02\x0b\x73\x74\x72"
  "\x69\x6e\x67\x2d\x72\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x04\x0d\x65\x6e\x63\x6f\x64\x65\x2d\x6f\x63"
  "\x74\x65\x74\x02\x40\x0c\x81\x8b\x02\x3f\x0a\x81\x8f\x02\x3e\x08"
  "\x81\x89\x02\x3d\x06\x81\x85\x02\x3c\x04\x84\x06\x0b\x15\x0c\x02"
  "\x11\x01\x26\x0a\x01\x0e\x01\x0b\x01\x2c\x01\x21\x03\x04\x0b\x04"
  "\x0c\x64\x69\x67\x69\x74\x2d\x3e\x63\x68\x61\x72\x04\x48\x12\x81"
  "\x87\x02\x47\x10\x81\x8b\x02\x46\x0e\x81\x87\x02\x45\x0c\x81\x85"
  "\x02\x44\x0a\x81\x87\x02\x43\x08\x81\x85\x02\x42\x06\x81\x85\x02"
  "\x41\x04\x84\x06\x11\x22\x0b\x02\x14\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x3a\x75\x6e\x72\x65\x73\x65\x72\x76\x65\x64\x0a\x02\x04\x11"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f"
  "\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04\x05\x0d\x0d\x02\x08\x02"
  "\x07\x20\x2b\x25\x3d\x26\x3b\x0a\x02\x0f\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x3a\x61\x73\x63\x69\x69\x0e\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x3a\x63\x74\x6c\x73\x03\x03\x11\x73\x74\x72\x69\x6e\x67\x2d"
  "\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x04\x14\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x04\x0f"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x04\x51"
  "\x10\x81\x87\x02\x50\x0e\x81\x85\x02\x4f\x0c\x81\x85\x02\x4e\x0a"
  "\x81\x83\x02\x4d\x08\x81\x81\x02\x4c\x06\x81\x81\x02\x4b\x04\x82"
  "\x02\x0f\x20\x0e\x0e\x04\x0d\x04\x0b\x04\x0c\x04\x04\x04\x09\x04"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x21\x0a\x1b\x64\x65\x63\x6f\x64\x65\x2d\x77\x77\x77"
  "\x2d\x66\x6f\x72\x6d\x2d\x75\x72\x6c\x65\x6e\x63\x6f\x64\x65\x64"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
html_form_codec_so_data_a32cad70df17f784 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_html_form_codec_so_data_a32cad70df17f784 [0]))), (sizeof (prog_html_form_codec_so_data_a32cad70df17f784)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("html-form-codec.so", html_form_codec_so_data_a32cad70df17f784)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("html-form-codec.so", "ee79fb57667f77db")
