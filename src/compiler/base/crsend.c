/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define TAG_1_11 4
#define LABEL_1_14 13
#define LABEL_1_22 15
#define LABEL_1_19 17
#define LABEL_1_20 19
#define LABEL_1_17 21
#define LABEL_1_16 23
#define LABEL_1_25 25
#define LABEL_1_24 27
#define ENVIRONMENT_LABEL_1_3 54
#define DEBUGGING_LABEL_1_2 53
#define OBJECT_1_5 52
#define OBJECT_1_4 51
#define OBJECT_1_3 50
#define OBJECT_1_2 49
#define OBJECT_1_1 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_27 29
#define EXECUTE_CACHE_1_26 31
#define EXECUTE_CACHE_1_23 33
#define EXECUTE_CACHE_1_21 35
#define EXECUTE_CACHE_1_18 37
#define EXECUTE_CACHE_1_15 39
#define EXECUTE_CACHE_1_13 41
#define EXECUTE_CACHE_1_12 43
#define EXECUTE_CACHE_1_9 45
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_4);
      goto finish_cross_compilation_directory_23;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto loop_20;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_28;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_cross_compilation_directory_26)
DEFLABEL (finish_cross_compilation_directory_23)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_30;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_29;

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
DEFLABEL (label_31)
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd13 = Wrd15;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_20;

DEFLABEL (loop_27)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_20;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 30))
    goto label_36;
  (* (--Rsp)) = Rvl;
  (Wrd22.Obj) = (current_block [OBJECT_1_4]);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 30))
    goto label_37;
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (current_block [OBJECT_1_5]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define LABEL_2_7 9
#define LABEL_2_11 11
#define TAG_2_12 4
#define LABEL_2_13 13
#define TAG_2_14 5
#define LABEL_2_16 15
#define LABEL_2_18 17
#define LABEL_2_20 19
#define LABEL_2_21 21
#define LABEL_2_23 23
#define LABEL_2_24 25
#define LABEL_2_25 27
#define LABEL_2_27 29
#define LABEL_2_29 31
#define TAG_2_30 14
#define LABEL_2_32 33
#define LABEL_2_33 35
#define ENVIRONMENT_LABEL_2_3 72
#define DEBUGGING_LABEL_2_2 71
#define OBJECT_2_9 70
#define OBJECT_2_8 69
#define OBJECT_2_7 68
#define OBJECT_2_6 67
#define OBJECT_2_5 66
#define OBJECT_2_4 65
#define OBJECT_2_3 64
#define OBJECT_2_2 63
#define OBJECT_2_1 62
#define OBJECT_2_0 61
#define EXECUTE_CACHE_2_35 37
#define EXECUTE_CACHE_2_34 39
#define EXECUTE_CACHE_2_31 41
#define EXECUTE_CACHE_2_28 43
#define EXECUTE_CACHE_2_26 45
#define EXECUTE_CACHE_2_22 47
#define EXECUTE_CACHE_2_19 49
#define EXECUTE_CACHE_2_17 51
#define EXECUTE_CACHE_2_15 53
#define EXECUTE_CACHE_2_10 55
#define EXECUTE_CACHE_2_8 57
#define EXECUTE_CACHE_2_6 59
#define FREE_REFERENCES_LABEL_2_0 36
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto finish_cross_compilation_info_file_20;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_24;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_2_29);
      goto lambda_26;

    case 15:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_cross_compilation_info_file_23)
DEFLABEL (finish_cross_compilation_info_file_20)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_3])))
    goto label_28;

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  ((Wrd21.pObj) [2]) = (Wrd15.Obj);
  ((Wrd21.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (label_28)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_29])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_2_29);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_33);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_7 9
#define LABEL_3_11 11
#define TAG_3_12 4
#define LABEL_3_13 13
#define TAG_3_14 5
#define LABEL_3_16 15
#define LABEL_3_18 17
#define LABEL_3_19 19
#define LABEL_3_21 21
#define LABEL_3_22 23
#define LABEL_3_26 25
#define LABEL_3_28 27
#define ENVIRONMENT_LABEL_3_3 57
#define DEBUGGING_LABEL_3_2 56
#define OBJECT_3_6 55
#define OBJECT_3_5 54
#define OBJECT_3_4 53
#define OBJECT_3_3 52
#define OBJECT_3_2 51
#define OBJECT_3_1 50
#define OBJECT_3_0 49
#define EXECUTE_CACHE_3_27 29
#define EXECUTE_CACHE_3_25 31
#define EXECUTE_CACHE_3_24 33
#define EXECUTE_CACHE_3_23 35
#define EXECUTE_CACHE_3_20 37
#define EXECUTE_CACHE_3_17 39
#define EXECUTE_CACHE_3_15 41
#define EXECUTE_CACHE_3_10 43
#define EXECUTE_CACHE_3_8 45
#define EXECUTE_CACHE_3_6 47
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_3_4);
      goto finish_cross_compilation_file_15;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_cross_compilation_file_18)
DEFLABEL (finish_cross_compilation_file_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_3_3])))
    goto label_22;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_11])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  ((Wrd21.pObj) [2]) = (Wrd15.Obj);
  ((Wrd21.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_22)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_3_11);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_10 11
#define LABEL_4_11 13
#define LABEL_4_9 15
#define LABEL_4_13 17
#define LABEL_4_17 19
#define LABEL_4_14 21
#define LABEL_4_15 23
#define ENVIRONMENT_LABEL_4_3 45
#define DEBUGGING_LABEL_4_2 44
#define OBJECT_4_6 43
#define OBJECT_4_5 42
#define OBJECT_4_4 41
#define OBJECT_4_3 40
#define OBJECT_4_2 39
#define OBJECT_4_1 38
#define OBJECT_4_0 37
#define EXECUTE_CACHE_4_19 25
#define EXECUTE_CACHE_4_18 27
#define EXECUTE_CACHE_4_16 29
#define EXECUTE_CACHE_4_12 31
#define EXECUTE_CACHE_4_7 33
#define FREE_REFERENCE_4_0 36
#define FREE_REFERENCES_LABEL_4_0 24
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_4_4);
      goto finish_cross_compilation_scode_16;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_cross_compilation_scode_23)
DEFLABEL (finish_cross_compilation_scode_16)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_30;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_30;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_29)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_28;
  Wrd40 = Wrd44;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [2]) = Rvl;
  if (! (Rvl == (current_block [OBJECT_4_4])))
    goto label_24;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Wrd9.Obj) = (Rsp [5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd17.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd41.pObj));

DEFLABEL (label_21)
  (Wrd40.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_4_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_4_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define LABEL_5_6 9
#define LABEL_5_9 11
#define LABEL_5_13 13
#define LABEL_5_14 15
#define LABEL_5_15 17
#define LABEL_5_12 19
#define LABEL_5_17 21
#define ENVIRONMENT_LABEL_5_3 39
#define DEBUGGING_LABEL_5_2 38
#define OBJECT_5_4 37
#define OBJECT_5_3 36
#define OBJECT_5_2 35
#define OBJECT_5_1 34
#define OBJECT_5_0 33
#define EXECUTE_CACHE_5_18 23
#define EXECUTE_CACHE_5_16 25
#define EXECUTE_CACHE_5_11 27
#define EXECUTE_CACHE_5_10 29
#define EXECUTE_CACHE_5_7 31
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
  machine_word Wrd18;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto cross_link_end_12;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cross_link_end_20)
DEFLABEL (cross_link_end_12)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_27;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_27;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_26)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_25;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_25;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Wrd7.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_5_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_5_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_5_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_5_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd7.Obj) = (Rsp [0]);
  goto label_21;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_9 7
#define LABEL_6_5 9
#define LABEL_6_14 11
#define LABEL_6_7 13
#define TAG_6_8 5
#define LABEL_6_11 15
#define TAG_6_12 6
#define LABEL_6_13 17
#define LABEL_6_22 19
#define LABEL_6_15 21
#define LABEL_6_17 23
#define LABEL_6_16 25
#define LABEL_6_27 27
#define LABEL_6_20 29
#define LABEL_6_19 31
#define LABEL_6_21 33
#define LABEL_6_23 35
#define TAG_6_24 16
#define LABEL_6_32 37
#define LABEL_6_28 39
#define TAG_6_29 18
#define LABEL_6_31 41
#define LABEL_6_35 43
#define LABEL_6_33 45
#define LABEL_6_34 47
#define LABEL_6_37 49
#define ENVIRONMENT_LABEL_6_3 77
#define DEBUGGING_LABEL_6_2 76
#define OBJECT_6_12 75
#define OBJECT_6_11 74
#define OBJECT_6_10 73
#define OBJECT_6_9 72
#define OBJECT_6_8 71
#define OBJECT_6_7 70
#define OBJECT_6_6 69
#define OBJECT_6_5 68
#define OBJECT_6_4 67
#define OBJECT_6_3 66
#define OBJECT_6_2 65
#define OBJECT_6_1 64
#define OBJECT_6_0 63
#define EXECUTE_CACHE_6_36 51
#define EXECUTE_CACHE_6_30 53
#define EXECUTE_CACHE_6_26 55
#define EXECUTE_CACHE_6_25 57
#define EXECUTE_CACHE_6_18 59
#define EXECUTE_CACHE_6_10 61
#define FREE_REFERENCES_LABEL_6_0 50
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_6_4);
      goto cross_link_process_code_vector_30;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_14);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_42;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_18;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_6_22);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_6_27);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_26;

    case 16:
      current_block = (Rpc - LABEL_6_23);
      goto lambda_44;

    case 17:
      current_block = (Rpc - LABEL_6_32);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_6_28);
      goto lambda_45;

    case 19:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_6_35);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_6_33);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_6_34);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_6_37);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cross_link_process_code_vector_41)
DEFLABEL (cross_link_process_code_vector_30)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_49;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_49;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_48)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_47;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_47;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_47)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_6_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_33)
  (Wrd30.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_53;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_53;
  (Wrd15.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_52)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto lambda_18;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_51;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_51;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_23])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_6_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_6_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_6_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd25.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_57)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 1))
    goto label_56;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_28])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (label_56)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_43)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd16.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_60)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_59;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_6_23);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_64;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_63)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_18;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_62;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_36]));

DEFLABEL (label_62)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_10]), 1);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_6_28);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_9]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_34);
  (Wrd5.Obj) = Rvl;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_66;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 26))
    goto label_66;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = ((Wrd22.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_66;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_65)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_12]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_33);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 2);

DEFLABEL (label_66)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_7 9
#define LABEL_7_9 11
#define LABEL_7_8 13
#define LABEL_7_10 15
#define LABEL_7_16 17
#define LABEL_7_12 19
#define LABEL_7_19 21
#define LABEL_7_13 23
#define TAG_7_14 10
#define LABEL_7_18 25
#define LABEL_7_22 27
#define LABEL_7_20 29
#define LABEL_7_21 31
#define ENVIRONMENT_LABEL_7_3 53
#define DEBUGGING_LABEL_7_2 52
#define OBJECT_7_10 51
#define OBJECT_7_9 50
#define OBJECT_7_8 49
#define OBJECT_7_7 48
#define OBJECT_7_6 47
#define OBJECT_7_5 46
#define OBJECT_7_4 45
#define OBJECT_7_3 44
#define OBJECT_7_2 43
#define OBJECT_7_1 42
#define OBJECT_7_0 41
#define EXECUTE_CACHE_7_23 33
#define EXECUTE_CACHE_7_17 35
#define EXECUTE_CACHE_7_15 37
#define EXECUTE_CACHE_7_11 39
#define FREE_REFERENCES_LABEL_7_0 32
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto cross_link_finish_assembly_17;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_7_19);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_26;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_7_22);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cross_link_finish_assembly_25)
DEFLABEL (cross_link_finish_assembly_17)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 47))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_35)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_34;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_34;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_32;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_32;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_32;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_30;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (multiply_with_overflow ((Wrd18.Lng), 2, (& (Wrd16.Lng))))
    goto label_30;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_29)
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_28;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_28;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (Wrd5.Obj) = (current_block [OBJECT_7_9]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_10]), 2);

DEFLABEL (label_28)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (current_block [OBJECT_7_2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_8]), 3);

DEFLABEL (label_38)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_37;
  ((Wrd14.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_7_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_9 13
#define LABEL_8_10 15
#define LABEL_8_11 17
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_4 22
#define OBJECT_8_3 21
#define OBJECT_8_2 20
#define OBJECT_8_1 19
#define OBJECT_8_0 18
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_8_4);
      goto insert_objectsB_12;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto do_loop_9;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_8_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_8_11);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_objectsB_21)
DEFLABEL (insert_objectsB_12)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto do_loop_9;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (do_loop_22)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_8_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_25;
  Rvl = (current_block [OBJECT_8_4]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_35;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_34)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_32)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_31;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_30)
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_29;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_29;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd59.Lng))))
    goto label_29;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd51.pObj) = (& ((Wrd57.pObj) [(Wrd48.Lng)]));
  ((Wrd51.pObj) [1]) = (Wrd27.Obj);

DEFLABEL (label_28)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_27;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Rsp [1]) = (Wrd43.Obj);
  goto do_loop_9;

DEFLABEL (label_27)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_18)
  (Wrd34.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 3);

DEFLABEL (label_19)
  goto label_28;

DEFLABEL (label_31)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_17)
  (Wrd27.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto make_cc_code_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cc_code_block_3)
DEFLABEL (make_cc_code_block_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto cc_code_block_debugging_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_code_block_debugging_info_3)
DEFLABEL (cc_code_block_debugging_info_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto cc_code_block_bit_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_code_block_bit_string_3)
DEFLABEL (cc_code_block_bit_string_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto cc_code_block_objects_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_code_block_objects_3)
DEFLABEL (cc_code_block_objects_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto cc_code_block_object_width_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_code_block_object_width_3)
DEFLABEL (cc_code_block_object_width_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define OBJECT_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_14_4);
      goto set_cc_code_block_debugging_infoB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_cc_code_block_debugging_infoB_3)
DEFLABEL (set_cc_code_block_debugging_infoB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [1]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 5
#define DEBUGGING_LABEL_15_2 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto cc_vector_make_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_make_3)
DEFLABEL (cc_vector_make_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto cc_vector_code_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_code_vector_3)
DEFLABEL (cc_vector_code_vector_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cc_vector_entry_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_entry_label_3)
DEFLABEL (cc_vector_entry_label_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
crsend_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cc_vector_entry_points_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_entry_points_3)
DEFLABEL (cc_vector_entry_points_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
crsend_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cc_vector_label_bindings_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_label_bindings_3)
DEFLABEL (cc_vector_label_bindings_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
crsend_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cc_vector_ic_procedure_headers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cc_vector_ic_procedure_headers_3)
DEFLABEL (cc_vector_ic_procedure_headers_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 13
#define DEBUGGING_LABEL_21_2 12
#define OBJECT_21_1 11
#define OBJECT_21_0 10
#define FREE_REFERENCE_21_0 9
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 13
#define DEBUGGING_LABEL_22_2 12
#define OBJECT_22_1 11
#define OBJECT_22_0 10
#define FREE_REFERENCE_22_0 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crsend_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_31 53
#define LABEL_32 55
#define LABEL_33 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_37 63
#define LABEL_38 65
#define LABEL_39 67
#define ENVIRONMENT_LABEL_3 139
#define DEBUGGING_LABEL_2 138
#define PURIFICATION_ROOT 137
#define OBJECT_60 136
#define OBJECT_59 135
#define OBJECT_58 134
#define OBJECT_57 133
#define OBJECT_56 132
#define OBJECT_55 131
#define OBJECT_54 130
#define OBJECT_53 129
#define OBJECT_52 128
#define OBJECT_51 127
#define OBJECT_50 126
#define OBJECT_49 125
#define OBJECT_48 124
#define OBJECT_47 123
#define OBJECT_46 122
#define OBJECT_45 121
#define OBJECT_44 120
#define OBJECT_43 119
#define OBJECT_42 118
#define OBJECT_41 117
#define OBJECT_40 116
#define OBJECT_39 115
#define OBJECT_38 114
#define OBJECT_37 113
#define OBJECT_36 112
#define OBJECT_35 111
#define OBJECT_34 110
#define OBJECT_33 109
#define OBJECT_32 108
#define OBJECT_31 107
#define OBJECT_30 106
#define OBJECT_29 105
#define OBJECT_28 104
#define OBJECT_27 103
#define OBJECT_26 102
#define OBJECT_25 101
#define OBJECT_24 100
#define OBJECT_23 99
#define OBJECT_22 98
#define OBJECT_21 97
#define OBJECT_20 96
#define OBJECT_19 95
#define OBJECT_18 94
#define OBJECT_17 93
#define OBJECT_16 92
#define OBJECT_15 91
#define OBJECT_14 90
#define OBJECT_13 89
#define OBJECT_12 88
#define OBJECT_11 87
#define OBJECT_10 86
#define OBJECT_9 85
#define OBJECT_8 84
#define OBJECT_7 83
#define OBJECT_6 82
#define OBJECT_5 81
#define OBJECT_4 80
#define OBJECT_3 79
#define OBJECT_2 78
#define OBJECT_1 77
#define OBJECT_0 76
#define EXECUTE_CACHE_5 69
#define GLOBAL_EXECUTE_CACHE_34 72
#define GLOBAL_EXECUTE_CACHE_16 74
#define FREE_REFERENCES_LABEL_0 68
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
crsend_so_a363ff55476bc782 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto continuation_30;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_33;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto label_38;

    case 31:
      current_block = (Rpc - LABEL_38);
      goto label_39;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto expression_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_35)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_39)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_38)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 22)
      goto label_37;
    blocks = (current_block [OBJECT_60]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_37])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_37)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

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
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-5]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 5));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-6]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_16]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_34]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59]), 2);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_34]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59]), 2);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_35);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_crsend_so_a363ff55476bc782 [22] =
  {
    { "crsend_so_code_1", 13, crsend_so_code_1 },
    { "crsend_so_code_2", 17, crsend_so_code_2 },
    { "crsend_so_code_3", 13, crsend_so_code_3 },
    { "crsend_so_code_4", 11, crsend_so_code_4 },
    { "crsend_so_code_5", 10, crsend_so_code_5 },
    { "crsend_so_code_6", 24, crsend_so_code_6 },
    { "crsend_so_code_7", 15, crsend_so_code_7 },
    { "crsend_so_code_8", 8, crsend_so_code_8 },
    { "crsend_so_code_9", 1, crsend_so_code_9 },
    { "crsend_so_code_10", 1, crsend_so_code_10 },
    { "crsend_so_code_11", 1, crsend_so_code_11 },
    { "crsend_so_code_12", 1, crsend_so_code_12 },
    { "crsend_so_code_13", 1, crsend_so_code_13 },
    { "crsend_so_code_14", 1, crsend_so_code_14 },
    { "crsend_so_code_15", 1, crsend_so_code_15 },
    { "crsend_so_code_16", 1, crsend_so_code_16 },
    { "crsend_so_code_17", 1, crsend_so_code_17 },
    { "crsend_so_code_18", 1, crsend_so_code_18 },
    { "crsend_so_code_19", 1, crsend_so_code_19 },
    { "crsend_so_code_20", 1, crsend_so_code_20 },
    { "crsend_so_code_21", 3, crsend_so_code_21 },
    { "crsend_so_code_22", 3, crsend_so_code_22 }
  };

int
decl_crsend_so_a363ff55476bc782 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_crsend_so_a363ff55476bc782);
  return (0);
}

DECLARE_COMPILED_CODE ("crsend.so", 33, decl_crsend_so_a363ff55476bc782, crsend_so_a363ff55476bc782)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_crsend_so_data_a363ff55476bc782 [3814] =
  "\x8c\x01\x22\xd5\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x0c"
  "\x1d\x0c\x1d\x28\x0d\x28\x0d\xb9\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\xc2\x0c\x0d\x0d\x08"
  "\x89\x0d\x07\x0c\x1d\x1d\x0c\x0c\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x83\x88\x0c\x07\x0c\x1d\x1d\x0c\x0c\x28\xb5\x28\xb6"
  "\x28\xb7\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x84\x88\x0d\xc1\x08\x82\x80\xc2\x1c\x81\x0d\x1c\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x81\x82\x83\x1b\x80\x28\x0d"
  "\x28\x0d\x28\x0d\xbf\x28\x0d\xbe\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x1d\xb0\x86\x88\xc1\x1c\xc2\x1c\xc1\x1c\xc1\x02\x0c"
  "\xc1\x1c\x0c\x84\x81\x82\x1b\x83\x28\x1b\x28\x0d\x28\xb1\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\xc2\x02"
  "\xc3\x1c\x1d\x1b\x02\x80\xc3\x82\x1b\xc1\x28\x0d\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x1b\xc1\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x80\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x1c\x1b\x0d\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x02\x02\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x0d\x1b\x2a\x0c\x0d\x0d\x0d\x0d\x0d\x9c\x84\x83\x82\x81"
  "\x80\x9c\x85\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x0c\x0d\x0d\x0d\x0d\x9b\x83\x82\x81"
  "\x80\x9b\x84\x1b\x1b\x2a\xb6\x1b\x2a\xb7\xb1\x2a\x1b\xb5\x2a\x1b"
  "\x1b\x2a\xb3\x1b\x2a\xb2\x1b\x2a\xc3\x0d\xb4\x2a\x1b\x28\x0d\x28"
  "\x0d\x26\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x63\x72\x73\x65\x6e\x64\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x6d\x6f\x63\x04\x66\x6e"
  "\x69\x02\x2e\x02\x03\x2e\x2e\x08\x03\x16\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x04"
  "\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x0f\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x72\x65\x61\x64\x03\x10\x66\x69\x6c\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x03\x0e\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x03\x10\x66\x69\x6c\x65\x2d"
  "\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x04\x09\x73\x74\x72\x69"
  "\x6e\x67\x3d\x3f\x04\x23\x66\x69\x6e\x69\x73\x68\x2d\x63\x72\x6f"
  "\x73\x73\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x3a\x69"
  "\x6e\x66\x6f\x2d\x66\x69\x6c\x65\x04\x1e\x66\x69\x6e\x69\x73\x68"
  "\x2d\x63\x72\x6f\x73\x73\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69"
  "\x6f\x6e\x3a\x66\x69\x6c\x65\x0a\x2e\x1c\x81\x85\x02\x2d\x1a\x81"
  "\x87\x02\x2c\x18\x81\x85\x02\x2b\x16\x81\x87\x02\x2a\x14\x81\x87"
  "\x02\x29\x12\x81\x85\x02\x28\x10\x81\x83\x02\x27\x0e\x81\x85\x02"
  "\x26\x0c\x81\x85\x02\x25\x0a\x81\x87\x02\x24\x08\x81\x85\x02\x23"
  "\x06\x81\x85\x02\x22\x04\x84\x04\x1b\x37\x02\x12\x6c\x65\x78\x69"
  "\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x05\x20\x3d"
  "\x3e\x20\x08\x72\x75\x6e\x74\x69\x6d\x65\x0e\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x15\x73\x70\x6c\x69\x74\x2d\x69"
  "\x6e\x66\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x21\x13\x43\x6f"
  "\x6d\x70\x72\x65\x73\x73\x69\x6e\x67\x20\x69\x6e\x66\x6f\x3a\x20"
  "\x08\x02\x04\x62\x63\x69\x04\x66\x6e\x69\x04\x16\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70"
  "\x65\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d"
  "\x74\x79\x70\x65\x04\x19\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x3c\x3f\x04\x12"
  "\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x09\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x0a\x04\x08\x66\x61\x73\x6c\x6f\x61\x64\x0b\x03\x12\x65\x6e\x6f"
  "\x75\x67\x68\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x0c\x03"
  "\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x06"
  "\x77\x72\x69\x74\x65\x0d\x03\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65"
  "\x6e\x61\x6d\x65\x05\x08\x66\x61\x73\x64\x75\x6d\x70\x0e\x04\x09"
  "\x63\x6f\x6d\x70\x72\x65\x73\x73\x0f\x0d\x3f\x24\x81\x85\x02\x3e"
  "\x22\x81\x85\x02\x3d\x20\x81\x85\x02\x3c\x1e\x81\x85\x02\x3b\x1c"
  "\x81\x8f\x02\x3a\x1a\x81\x8b\x02\x39\x18\x81\x85\x02\x38\x16\x81"
  "\x89\x02\x37\x14\x81\x85\x02\x36\x12\x81\x83\x02\x35\x10\x81\x85"
  "\x02\x34\x0e\x81\x83\x02\x33\x0c\x81\x85\x02\x32\x0a\x81\x87\x02"
  "\x31\x08\x81\x89\x02\x30\x06\x81\x85\x02\x2f\x04\x84\x04\x23\x49"
  "\x10\x02\x05\x20\x3d\x3e\x20\x11\x43\x6f\x6d\x70\x69\x6c\x69\x6e"
  "\x67\x20\x66\x69\x6c\x65\x3a\x20\x08\x02\x04\x63\x6f\x6d\x04\x6d"
  "\x6f\x63\x04\x04\x04\x04\x09\x04\x0a\x04\x0b\x03\x0c\x05\x0e\x03"
  "\x1f\x66\x69\x6e\x69\x73\x68\x2d\x63\x72\x6f\x73\x73\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x3a\x73\x63\x6f\x64\x65\x0e"
  "\x04\x0d\x0b\x4c\x1c\x81\x85\x02\x4b\x1a\x81\x85\x02\x4a\x18\x81"
  "\x89\x02\x49\x16\x81\x85\x02\x48\x14\x81\x87\x02\x47\x12\x81\x85"
  "\x02\x46\x10\x81\x85\x02\x45\x0e\x81\x83\x02\x44\x0c\x81\x85\x02"
  "\x43\x0a\x81\x87\x02\x42\x08\x81\x89\x02\x41\x06\x81\x85\x02\x40"
  "\x04\x84\x04\x1b\x3a\x0d\x02\x17\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x62\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x1d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x0c\x0f\x63\x72\x6f\x73\x73\x2d\x6c\x69"
  "\x6e\x6b\x2d\x65\x6e\x64\x0b\x02\x03\x0b\x04\x04\x6d\x61\x70\x0a"
  "\x04\x13\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x03\x15\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x69"
  "\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x03\x0d\x6c\x69\x73\x74"
  "\x2d\x3e\x76\x65\x63\x74\x6f\x72\x06\x57\x18\x81\x8d\x02\x56\x16"
  "\x81\x8b\x02\x55\x14\x81\x8d\x02\x54\x12\x81\x89\x02\x53\x10\x81"
  "\x87\x02\x52\x0e\x81\x8b\x02\x51\x0c\x81\x89\x02\x50\x0a\x81\x85"
  "\x02\x4f\x08\x81\x83\x02\x4e\x06\x81\x85\x02\x4d\x04\x83\x04\x17"
  "\x2e\x09\x02\x0c\x03\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x3f\x04\x11\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x1f\x63\x72"
  "\x6f\x73\x73\x2d\x6c\x69\x6e\x6b\x2f\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x63\x6f\x64\x65\x2d\x76\x65\x63\x74\x6f\x72\x05\x1b\x63\x72"
  "\x6f\x73\x73\x2d\x6c\x69\x6e\x6b\x2f\x66\x69\x6e\x69\x73\x68\x2d"
  "\x61\x73\x73\x65\x6d\x62\x6c\x79\x04\x28\x73\x65\x74\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f"
  "\x21\x06\x61\x16\x81\x89\x02\x60\x14\x81\x85\x02\x5f\x12\x81\x8b"
  "\x02\x5e\x10\x81\x89\x02\x5d\x0e\x81\x87\x02\x5c\x0c\x81\x85\x02"
  "\x5b\x0a\x81\x85\x02\x5a\x08\x81\x87\x02\x59\x06\x81\x83\x02\x58"
  "\x04\x83\x04\x15\x28\x02\x18\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x11\x1a"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x12\x04\x63\x61\x72\x13\x0d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x29\x22\x4c\x61"
  "\x62\x65\x6c\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x64\x20"
  "\x61\x73\x20\x65\x6e\x74\x72\x79\x20\x70\x6f\x69\x6e\x74\x3a\x04"
  "\x63\x64\x72\x14\x14\x4d\x69\x73\x73\x69\x6e\x67\x20\x65\x6e\x74"
  "\x72\x79\x20\x70\x6f\x69\x6e\x74\x0c\x04\x0a\x04\x05\x61\x73\x73"
  "\x71\x04\x04\x06\x65\x72\x72\x6f\x72\x03\x1e\x77\x69\x74\x68\x2d"
  "\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c\x79\x2d\x6e\x6f\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x73\x0a\x04\x11\x73\x65\x74\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x62\x6f\x64\x79\x21\x07\x79\x32\x81\x87"
  "\x02\x78\x30\x81\x87\x02\x77\x2e\x81\x85\x02\x76\x2c\x81\x87\x02"
  "\x75\x2a\x81\x85\x02\x74\x28\x81\x83\x02\x73\x26\x81\x87\x02\x72"
  "\x24\x81\x85\x02\x71\x22\x81\x89\x02\x70\x20\x81\x85\x02\x6f\x1e"
  "\x81\x87\x02\x6e\x1c\x81\x87\x02\x6d\x1a\x81\x87\x02\x6c\x18\x81"
  "\x89\x02\x6b\x16\x81\x85\x02\x6a\x14\x81\x8b\x02\x69\x12\x81\x87"
  "\x02\x68\x10\x81\x85\x02\x67\x0e\x81\x85\x02\x66\x0c\x81\x89\x02"
  "\x65\x0a\x81\x85\x02\x64\x08\x81\x85\x02\x63\x06\x81\x87\x02\x62"
  "\x04\x84\x06\x31\x4e\x02\x08\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x3e\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x15\x02\x12\x28\x0c\x77\x72\x69\x74\x65\x2d\x62"
  "\x69\x74\x73\x21\x11\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x03\x07\x6c\x65\x6e\x67\x74\x68\x03"
  "\x0a\x03\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x05\x10"
  "\x69\x6e\x73\x65\x72\x74\x2d\x6f\x62\x6a\x65\x63\x74\x73\x21\x11"
  "\x05\x88\x01\x20\x81\x8d\x02\x87\x01\x1e\x81\x87\x02\x86\x01\x1c"
  "\x81\x8f\x02\x85\x01\x1a\x81\x8d\x02\x84\x01\x18\x81\x83\x02\x83"
  "\x01\x16\x81\x91\x02\x82\x01\x14\x81\x8d\x02\x81\x01\x12\x81\x8d"
  "\x02\x80\x01\x10\x81\x8f\x02\x7f\x0e\x81\x8b\x02\x7e\x0c\x81\x8d"
  "\x02\x7d\x0a\x81\x89\x02\x7c\x08\x81\x87\x02\x7b\x06\x81\x8b\x02"
  "\x7a\x04\x85\x08\x1f\x36\x0a\x02\x09\x02\x15\x14\x13\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x90\x01\x12\x81\x8d"
  "\x02\x8f\x01\x10\x81\x8d\x02\x8e\x01\x0e\x81\x8d\x02\x8d\x01\x0c"
  "\x81\x8d\x02\x8c\x01\x0a\x81\x8d\x02\x8b\x01\x08\x81\x8d\x02\x8a"
  "\x01\x06\x81\x87\x02\x89\x01\x04\x85\x08\x11\x19\x13\x02\x0a\x91"
  "\x01\x04\x86\x0a\x03\x16\x02\x0b\x0c\x92\x01\x04\x83\x04\x03\x17"
  "\x02\x0c\x0c\x93\x01\x04\x83\x04\x03\x18\x02\x0d\x0c\x94\x01\x04"
  "\x83\x04\x03\x19\x02\x0e\x0c\x95\x01\x04\x83\x04\x03\x1a\x02\x0f"
  "\x15\x02\x96\x01\x04\x84\x06\x03\x15\x02\x10\x97\x01\x04\x87\x0c"
  "\x03\x1b\x02\x11\x0c\x98\x01\x04\x83\x04\x03\x1c\x02\x12\x0c\x99"
  "\x01\x04\x83\x04\x03\x1d\x02\x13\x0c\x9a\x01\x04\x83\x04\x03\x1e"
  "\x02\x14\x0c\x9b\x01\x04\x83\x04\x03\x1f\x02\x15\x0c\x9c\x01\x04"
  "\x83\x04\x03\x0c\x02\x16\x06\x61\x70\x70\x6c\x79\x20\x14\x19\x6d"
  "\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x02\x9f\x01\x08\x81\x85\x02\x9e\x01"
  "\x06\x81\x85\x02\x9d\x01\x04\x84\x06\x07\x0e\x21\x02\x17\x20\x14"
  "\x0f\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x02"
  "\xa2\x01\x08\x81\x85\x02\xa1\x01\x06\x81\x85\x02\xa0\x01\x04\x84"
  "\x06\x07\x0e\x20\x17\x14\x14\x12\x33\x10\x10\x75\x63\x6f\x64\x65"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x20\x04\x0b\x75\x63\x6f"
  "\x64\x65\x2d\x74\x79\x70\x65\x21\x04\x1f\x63\x63\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2f\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x73\x0c\x04\x19\x63\x63\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2f\x6c\x61\x62\x65\x6c\x2d\x62\x69\x6e\x64\x69"
  "\x6e\x67\x73\x1f\x04\x17\x63\x63\x2d\x76\x65\x63\x74\x6f\x72\x2f"
  "\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x73\x1e\x04\x16\x63"
  "\x63\x2d\x76\x65\x63\x74\x6f\x72\x2f\x65\x6e\x74\x72\x79\x2d\x6c"
  "\x61\x62\x65\x6c\x1d\x04\x16\x63\x63\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2f\x63\x6f\x64\x65\x2d\x76\x65\x63\x74\x6f\x72\x1c\x04\x0e\x72"
  "\x74\x64\x3a\x63\x63\x2d\x76\x65\x63\x74\x6f\x72\x0f\x63\x63\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2f\x6d\x61\x6b\x65\x1b\x04\x0a\x63\x63"
  "\x2d\x76\x65\x63\x74\x6f\x72\x15\x69\x63\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x73\x0f\x6c\x61\x62"
  "\x65\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x0d\x65\x6e\x74\x72"
  "\x79\x2d\x70\x6f\x69\x6e\x74\x73\x0c\x65\x6e\x74\x72\x79\x2d\x6c"
  "\x61\x62\x65\x6c\x0c\x63\x6f\x64\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x22\x73\x65\x74\x2d\x63\x63\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x21\x15\x04\x1b\x63\x63\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x6f\x62\x6a\x65\x63\x74\x2d\x77\x69\x64\x74\x68\x1a"
  "\x04\x16\x63\x63\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x6f\x62\x6a\x65\x63\x74\x73\x19\x04\x19\x63\x63\x2d\x63\x6f\x64"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x18\x04\x1d\x63\x63\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x17\x04\x12\x72\x74\x64\x3a\x63\x63\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x13\x6d\x61\x6b\x65\x2d\x63\x63\x2d\x63\x6f"
  "\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x16\x04\x07\x76\x65\x63\x74\x6f"
  "\x72\x0e\x63\x63\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x0d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x77\x69\x64\x74\x68\x08\x6f\x62\x6a"
  "\x65\x63\x74\x73\x0b\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x0f"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x11\x13"
  "\x04\x0a\x04\x04\x0b\x04\x0e\x09\x04\x0d\x04\x10\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x23\x66"
  "\x69\x6e\x69\x73\x68\x2d\x63\x72\x6f\x73\x73\x2d\x63\x6f\x6d\x70"
  "\x69\x6c\x61\x74\x69\x6f\x6e\x3a\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x04\x0f\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65"
  "\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x04"
  "\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x03"
  "\x03\x0c\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x02\x21\x44"
  "\x80\x80\x04\x20\x42\x81\x81\x02\x1f\x40\x81\x81\x02\x1e\x3e\x81"
  "\x89\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x87\x02\x1b\x38\x81\x85"
  "\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04"
  "\x81\x83\x02\x43\x8c\x01";

SCHEME_OBJECT *
crsend_so_data_a363ff55476bc782 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_crsend_so_data_a363ff55476bc782 [0]))), (sizeof (prog_crsend_so_data_a363ff55476bc782)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_39]));
}

DECLARE_COMPILED_DATA_NS ("crsend.so", crsend_so_data_a363ff55476bc782)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("crsend.so", "f901ee978ef5936a")
