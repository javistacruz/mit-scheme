/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_10 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_13 15
#define LABEL_1_14 17
#define LABEL_1_12 19
#define LABEL_1_18 21
#define LABEL_1_19 23
#define LABEL_1_15 25
#define LABEL_1_17 27
#define ENVIRONMENT_LABEL_1_3 50
#define DEBUGGING_LABEL_1_2 49
#define OBJECT_1_7 48
#define OBJECT_1_6 47
#define OBJECT_1_5 46
#define OBJECT_1_4 45
#define OBJECT_1_3 44
#define OBJECT_1_2 43
#define OBJECT_1_1 42
#define OBJECT_1_0 41
#define EXECUTE_CACHE_1_21 29
#define EXECUTE_CACHE_1_20 31
#define EXECUTE_CACHE_1_16 33
#define EXECUTE_CACHE_1_11 35
#define EXECUTE_CACHE_1_7 37
#define FREE_REFERENCE_1_0 40
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      goto operator_analysis_13;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_7;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_12;

    case 9:
      current_block = (Rpc - LABEL_1_18);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operator_analysis_21)
DEFLABEL (operator_analysis_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_22)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_26)
  if ((Wrd5.Obj) == (current_block [OBJECT_1_2]))
    goto label_25;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_23)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_32;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_32;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_31)
  (Wrd27.Obj) = (* (Rsp++));
  if (! ((Wrd11.Obj) == (Wrd27.Obj)))
    goto label_28;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd28.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 3);

DEFLABEL (label_30)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  ((Wrd14.pObj) [2]) = Rvl;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd5.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;
  Wrd10 = Wrd14;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_39;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_39;
  (Wrd16.Obj) = ((Wrd22.pObj) [3]);

DEFLABEL (label_38)
  (Wrd32.Obj) = (* (Rsp++));
  if ((Wrd16.Obj) == (Wrd32.Obj))
    goto label_37;
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 3);

DEFLABEL (label_36)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  ((Wrd14.pObj) [17]) = Rvl;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_39)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (current_block [OBJECT_1_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_19)
  (Wrd16.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd11.pObj));

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_8 5
#define LABEL_2_9 7
#define LABEL_2_5 9
#define TAG_2_6 3
#define LABEL_2_11 11
#define LABEL_2_7 13
#define ENVIRONMENT_LABEL_2_3 26
#define DEBUGGING_LABEL_2_2 25
#define OBJECT_2_5 24
#define OBJECT_2_4 23
#define OBJECT_2_3 22
#define OBJECT_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_12 15
#define EXECUTE_CACHE_2_10 17
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_2_4);
      goto analyze_combination_6;

    case 1:
      current_block = (Rpc - LABEL_2_8);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_combination_12)
DEFLABEL (analyze_combination_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_17;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_17;
  (Wrd12.Obj) = ((Wrd18.pObj) [11]);

DEFLABEL (label_16)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_15;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_15)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_2_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_21;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd14.Lng))))
    goto label_21;
  (Wrd6.Obj) = ((Wrd12.pObj) [14]);

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 3);

DEFLABEL (label_19)
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd39.Lng))))
    goto label_18;
  ((Wrd37.pObj) [14]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_2_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_13 15
#define LABEL_3_15 17
#define LABEL_3_16 19
#define LABEL_3_17 21
#define ENVIRONMENT_LABEL_3_3 39
#define DEBUGGING_LABEL_3_2 38
#define OBJECT_3_4 37
#define OBJECT_3_3 36
#define OBJECT_3_2 35
#define OBJECT_3_1 34
#define OBJECT_3_0 33
#define EXECUTE_CACHE_3_14 23
#define EXECUTE_CACHE_3_12 25
#define EXECUTE_CACHE_3_9 27
#define EXECUTE_CACHE_3_7 29
#define FREE_REFERENCE_3_0 32
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd21;
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
      goto continuation_passed_outP_11;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_7;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_passed_outP_18)
DEFLABEL (continuation_passed_outP_11)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [14]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_26;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_3_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_20)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_3_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_30)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_28;
  Rvl = (current_block [OBJECT_3_4]);
  goto label_27;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_3_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_12 11
#define LABEL_4_8 13
#define LABEL_4_9 15
#define TAG_4_10 6
#define LABEL_4_18 17
#define LABEL_4_19 19
#define LABEL_4_14 21
#define LABEL_4_15 23
#define TAG_4_16 10
#define LABEL_4_22 25
#define LABEL_4_17 27
#define LABEL_4_21 29
#define ENVIRONMENT_LABEL_4_3 49
#define DEBUGGING_LABEL_4_2 48
#define OBJECT_4_10 47
#define OBJECT_4_9 46
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
#define EXECUTE_CACHE_4_13 33
#define EXECUTE_CACHE_4_11 35
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd37;
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
      goto analyze_continuation_17;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_4_18);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_4_19);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_4_22);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_continuation_26)
DEFLABEL (analyze_continuation_17)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd11.pObj) [14]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_38)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd23.Obj) = ((Wrd27.pObj) [16]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_4_3]);
  if ((Wrd37.Obj) == (Wrd38.Obj))
    goto label_35;

DEFLABEL (label_34)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd47 = Wrd46;
  (Wrd48.Obj) = (Rsp [4]);
  ((Wrd47.pObj) [2]) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_33;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd15.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_31)
  (Wrd9.Obj) = (current_block [OBJECT_4_6]);
  goto label_29;

DEFLABEL (label_30)
  (Wrd9.Obj) = (current_block [OBJECT_4_5]);

DEFLABEL (label_29)
DEFLABEL (label_32)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_33)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_4_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_35)
  (Wrd50.Obj) = (Rsp [1]);
  if (! ((Wrd50.Obj) == (Wrd38.Obj)))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_4_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_46;
  (Wrd8.Obj) = ((Wrd14.pObj) [11]);

DEFLABEL (label_45)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_44;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_4_10]);

DEFLABEL (label_40)
DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_4_7]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_51;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_51;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_4_10]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_4_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_6 9
#define LABEL_5_8 11
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_4 16
#define OBJECT_5_3 15
#define OBJECT_5_2 14
#define OBJECT_5_1 13
#define OBJECT_5_0 12
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto for_someP_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_someP_12)
DEFLABEL (for_someP_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_0])))
    goto label_14;
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_5;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd15;
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
      goto Z_3_logic_and_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_3_logic_and_5)
DEFLABEL (Z_3_logic_and_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_10;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_6_1]);

DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (Rsp [1]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [1]);
  if (! ((Wrd15.Obj) == (Wrd6.Obj)))
    goto label_9;
  Rvl = (Wrd6.Obj);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define TAG_7_8 3
#define LABEL_7_11 11
#define LABEL_7_10 13
#define ENVIRONMENT_LABEL_7_3 26
#define DEBUGGING_LABEL_7_2 25
#define OBJECT_7_5 24
#define OBJECT_7_4 23
#define OBJECT_7_3 22
#define OBJECT_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_9 17
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
operan_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
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
      goto analyze_procedure_7;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_procedure_13)
DEFLABEL (analyze_procedure_7)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_20;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd39.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd15.pObj) [16]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd25.Obj) == (current_block [OBJECT_7_3]))
    goto label_17;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_7])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_7_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (current_block [OBJECT_7_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_7_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_7_5]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_7_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

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
operan_so_ec3b4ca2900cac07 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	1,
	2,
	1,
	2
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

static const struct liarc_code_S arr_decl_operan_so_ec3b4ca2900cac07 [7] =
  {
    { "operan_so_code_1", 13, operan_so_code_1 },
    { "operan_so_code_2", 6, operan_so_code_2 },
    { "operan_so_code_3", 10, operan_so_code_3 },
    { "operan_so_code_4", 14, operan_so_code_4 },
    { "operan_so_code_5", 5, operan_so_code_5 },
    { "operan_so_code_6", 1, operan_so_code_6 },
    { "operan_so_code_7", 6, operan_so_code_7 }
  };

int
decl_operan_so_ec3b4ca2900cac07 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_operan_so_ec3b4ca2900cac07);
  return (0);
}

DECLARE_COMPILED_CODE ("operan.so", 3, decl_operan_so_ec3b4ca2900cac07, operan_so_ec3b4ca2900cac07)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_operan_so_data_ec3b4ca2900cac07 [1146] =
  "\x38\x11\xb3\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x02\x81"
  "\x82\x1d\x0d\xc2\xba\x02\x0d\x24\x28\x0d\xbb\x28\x0d\xbc\x28\x0d"
  "\xbd\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xb1\x1d\x02\xc1\xb9\xb2"
  "\x02\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x07\x80\x02\xb2\x02"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x07\x02\xb1\x02\x06\x0d\x1c\x81\x08"
  "\x02\xb2\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\x0d\x1c\xc1\xb1\x1b\x08\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x1d\xb0\x86\x88\x1b\x1b\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x02\x08\x02\xb2\x81\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x9e\x1c\x88\x1b\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\xb3\x2a"
  "\x1b\x2a\x9e\xb6\x1b\x1b\xb7\xb5\xb4\x0d\x9e\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x66\x67\x6f\x70\x74\x2f\x6f\x70\x65\x72\x61\x6e\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x74\x21\x11\x02\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x08\x1c\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x03\x14\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x03\x19\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f"
  "\x75\x74\x3f\x03\x12\x61\x6e\x61\x6c\x79\x7a\x65\x2f\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x03\x15\x61\x6e\x61\x6c\x79\x7a\x65\x2f"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x06\x10\x1c\x81"
  "\x87\x02\x0f\x1a\x81\x87\x02\x0e\x18\x81\x8b\x02\x0d\x16\x81\x89"
  "\x02\x0c\x14\x83\x04\x0b\x12\x81\x85\x02\x0a\x10\x81\x83\x02\x09"
  "\x0e\x83\x04\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02\x06\x08\x83"
  "\x04\x05\x06\x81\x85\x02\x04\x04\x84\x06\x1b\x33\x09\x02\x02\x0e"
  "\x04\x63\x61\x72\x0b\x03\x0e\x72\x76\x61\x6c\x75\x65\x2d\x76\x61"
  "\x6c\x75\x65\x73\x0a\x04\x03\x16\x0e\x81\x85\x02\x15\x0c\x81\x87"
  "\x02\x14\x0a\x81\x85\x02\x13\x08\x81\x87\x02\x12\x06\x81\x87\x02"
  "\x11\x04\x83\x04\x0d\x1b\x02\x0a\x0e\x0e\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x74\x61\x67\x02\x04\x0e\x74\x68\x65\x72\x65\x2d"
  "\x65\x78\x69\x73\x74\x73\x3f\x03\x1b\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x69\x6e\x6c\x69"
  "\x6e\x65\x3f\x03\x12\x72\x76\x61\x6c\x75\x65\x2d\x70\x61\x73\x73"
  "\x65\x64\x2d\x69\x6e\x3f\x03\x0a\x05\x20\x16\x81\x85\x02\x1f\x14"
  "\x81\x83\x02\x1e\x12\x83\x04\x1d\x10\x81\x85\x02\x1c\x0e\x81\x83"
  "\x02\x1b\x0c\x81\x83\x02\x1a\x0a\x81\x83\x02\x19\x08\x83\x04\x18"
  "\x06\x81\x83\x02\x17\x04\x83\x04\x15\x28\x0a\x02\x0a\x0b\x07\x61"
  "\x6c\x77\x61\x79\x73\x0b\x10\x0e\x04\x0a\x66\x6f\x72\x2d\x73\x6f"
  "\x6d\x65\x3f\x0c\x04\x0c\x33\x2d\x6c\x6f\x67\x69\x63\x2f\x61\x6e"
  "\x64\x0d\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e"
  "\x2d\x76\x61\x6c\x75\x65\x0e\x04\x2e\x1e\x81\x85\x02\x2d\x1c\x81"
  "\x85\x02\x2c\x1a\x81\x87\x02\x2b\x18\x81\x85\x02\x2a\x16\x81\x8b"
  "\x02\x29\x14\x81\x87\x02\x28\x12\x81\x87\x02\x27\x10\x81\x85\x02"
  "\x26\x0e\x81\x89\x02\x25\x0c\x81\x89\x02\x24\x0a\x81\x87\x02\x23"
  "\x08\x81\x85\x02\x22\x06\x81\x83\x02\x21\x04\x83\x04\x1d\x32\x0f"
  "\x02\x0a\x73\x6f\x6d\x65\x74\x69\x6d\x65\x73\x10\x04\x63\x64\x72"
  "\x0b\x33\x0c\x81\x89\x02\x32\x0a\x81\x89\x02\x31\x08\x81\x8b\x02"
  "\x30\x06\x81\x89\x02\x2f\x04\x84\x06\x0b\x13\x02\x10\x0b\x34\x04"
  "\x84\x06\x03\x10\x02\x08\x0a\x10\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x03\x0e\x03\x3a\x0e\x81\x85\x02\x39\x0c\x81\x87\x02\x38"
  "\x0a\x81\x85\x02\x37\x08\x81\x83\x02\x36\x06\x81\x83\x02\x35\x04"
  "\x83\x04\x0d\x1b\x0e\x0b\x0b\x0e\x04\x10\x04\x04\x0f\x04\x0a\x04"
  "\x04\x09\x04\x0d\x0c\x12\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x61"
  "\x6e\x61\x6c\x79\x73\x69\x73\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
operan_so_data_ec3b4ca2900cac07 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_operan_so_data_ec3b4ca2900cac07 [0]))), (sizeof (prog_operan_so_data_ec3b4ca2900cac07)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("operan.so", operan_so_data_ec3b4ca2900cac07)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("operan.so", "1487654e48335c22")
