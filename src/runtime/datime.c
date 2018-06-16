/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:29-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_12 13
#define LABEL_1_11 15
#define LABEL_1_14 17
#define LABEL_1_17 19
#define LABEL_1_18 21
#define LABEL_1_15 23
#define LABEL_1_19 25
#define LABEL_1_20 27
#define LABEL_1_22 29
#define ENVIRONMENT_LABEL_1_3 47
#define DEBUGGING_LABEL_1_2 46
#define OBJECT_1_0 45
#define EXECUTE_CACHE_1_24 31
#define EXECUTE_CACHE_1_23 33
#define EXECUTE_CACHE_1_21 35
#define EXECUTE_CACHE_1_16 37
#define EXECUTE_CACHE_1_13 39
#define EXECUTE_CACHE_1_8 41
#define FREE_REFERENCE_1_0 44
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      goto number_parser_17;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto loop_12;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_5;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (number_parser_24)
DEFLABEL (number_parser_17)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
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

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (loop_26)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_38;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_38;
  if (! ((Wrd5.Obj) == (Wrd9.Obj)))
    goto label_29;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_29)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_37;
  Wrd22 = Wrd26;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_31;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_31;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_12;

DEFLABEL (label_31)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_35;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_35;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd38.Lng) < (Wrd42.Lng))
    goto label_34;

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_34)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_15);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [5]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd23.pObj));

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [4]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (lambda_27)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd14.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  goto label_39;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
DEFLABEL (label_41)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 9
#define DEBUGGING_LABEL_2_2 8
#define FREE_REFERENCE_2_0 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__make_decoded_time_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_decoded_time_4)
DEFLABEL (Z__make_decoded_time_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd25.Obj) = (MAKE_OBJECT (0, 10));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd14.pObj) = (& (Rhp [-11]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_3_4);
      goto allocate_decoded_time_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_decoded_time_4)
DEFLABEL (allocate_decoded_time_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd24.Obj) = (MAKE_OBJECT (0, 10));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = (& (Rhp [-11]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd13.pObj)));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto decoded_time_second_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_second_3)
DEFLABEL (decoded_time_second_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto decoded_time_minute_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_minute_3)
DEFLABEL (decoded_time_minute_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto decoded_time_hour_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_hour_3)
DEFLABEL (decoded_time_hour_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto decoded_time_day_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_day_3)
DEFLABEL (decoded_time_day_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto decoded_time_month_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_month_3)
DEFLABEL (decoded_time_month_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto decoded_time_year_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_year_3)
DEFLABEL (decoded_time_year_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
datime_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto decoded_time_day_of_week_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_day_of_week_3)
DEFLABEL (decoded_time_day_of_week_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
datime_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto decoded_time_daylight_savings_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_daylight_savings_time_3)
DEFLABEL (decoded_time_daylight_savings_time_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
datime_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto decoded_time_zone_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_zone_3)
DEFLABEL (decoded_time_zone_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 8
#define DEBUGGING_LABEL_13_2 7
#define OBJECT_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto set_decoded_time_day_of_weekB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_decoded_time_day_of_weekB_3)
DEFLABEL (set_decoded_time_day_of_weekB_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [3]));
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
datime_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_decoded_time_zoneB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_decoded_time_zoneB_3)
DEFLABEL (set_decoded_time_zoneB_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_3 17
#define OBJECT_15_2 16
#define OBJECT_15_1 15
#define OBJECT_15_0 14
#define FREE_REFERENCE_15_0 13
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd52;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto decoded_timeP_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_timeP_11)
DEFLABEL (decoded_timeP_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 10))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_21)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_20;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd52.Lng) == 0)
    goto label_13;

DEFLABEL (label_19)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_18;
  Wrd26 = Wrd30;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_16;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_16;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_15)
  (Wrd48.Obj) = (* (Rsp++));
  if (! ((Wrd32.Obj) == (Wrd48.Obj)))
    goto label_13;
  Rvl = (current_block [OBJECT_15_3]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_15_1]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_9)
  (Wrd32.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_7])), (Wrd27.pObj));

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_13;

DEFLABEL (label_22)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto guarantee_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_decoded_time_4)
DEFLABEL (guarantee_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_2 9
#define OBJECT_17_1 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto error_not_decoded_time_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_decoded_time_5)
DEFLABEL (error_not_decoded_time_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_17_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_17_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define LABEL_18_5 7
#define LABEL_18_10 9
#define LABEL_18_8 11
#define LABEL_18_18 13
#define LABEL_18_19 15
#define LABEL_18_20 17
#define LABEL_18_13 19
#define LABEL_18_21 21
#define LABEL_18_22 23
#define LABEL_18_14 25
#define LABEL_18_15 27
#define TAG_18_16 12
#define LABEL_18_23 29
#define ENVIRONMENT_LABEL_18_3 55
#define DEBUGGING_LABEL_18_2 54
#define OBJECT_18_10 53
#define OBJECT_18_9 52
#define OBJECT_18_8 51
#define OBJECT_18_7 50
#define OBJECT_18_6 49
#define OBJECT_18_5 48
#define OBJECT_18_4 47
#define OBJECT_18_3 46
#define OBJECT_18_2 45
#define OBJECT_18_1 44
#define OBJECT_18_0 43
#define EXECUTE_CACHE_18_24 31
#define EXECUTE_CACHE_18_17 33
#define EXECUTE_CACHE_18_12 35
#define EXECUTE_CACHE_18_11 37
#define EXECUTE_CACHE_18_9 39
#define EXECUTE_CACHE_18_6 41
#define FREE_REFERENCES_LABEL_18_0 30
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_18_4);
      goto make_decoded_time_18;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_18_20);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_18_21);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_18_22);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_18_15);
      goto lambda_25;

    case 13:
      current_block = (Rpc - LABEL_18_23);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decoded_time_24)
DEFLABEL (make_decoded_time_18)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd5.Obj) = (Rsp [6]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18_1]))
    goto label_27;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
DEFLABEL (label_40)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_7);

DEFLABEL (label_39)
  (Wrd15.Obj) = (Rsp [0]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [8]) = (Wrd15.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [7]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd9.Obj);
  (Rsp [6]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_28)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd30.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_15])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_9]), 2);

DEFLABEL (label_29)
  (Wrd7.Obj) = (current_block [OBJECT_18_10]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (Rsp [2]) = Rvl;
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_4]), 3);

DEFLABEL (label_31)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd72.Lng))))
    goto label_30;
  ((Wrd70.pObj) [8]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_38)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_37;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd36.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd34.pObj) [10]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_36;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_36;
  (Wrd17.Obj) = ((Wrd21.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_35)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_13)
  (Wrd45.Obj) = Rvl;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_34;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd53.Lng))))
    goto label_34;
  ((Wrd51.pObj) [10]) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_18_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_4]), 3);

DEFLABEL (label_22)
  goto label_32;

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_18_5]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_6]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_18_5]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_6]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_13);
  goto label_38;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_18_15);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_8]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_11 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define LABEL_19_12 15
#define LABEL_19_13 17
#define LABEL_19_14 19
#define LABEL_19_16 21
#define ENVIRONMENT_LABEL_19_3 39
#define DEBUGGING_LABEL_19_2 38
#define OBJECT_19_6 37
#define OBJECT_19_5 36
#define OBJECT_19_4 35
#define OBJECT_19_3 34
#define OBJECT_19_2 33
#define OBJECT_19_1 32
#define OBJECT_19_0 31
#define EXECUTE_CACHE_19_17 23
#define EXECUTE_CACHE_19_15 25
#define EXECUTE_CACHE_19_10 27
#define EXECUTE_CACHE_19_6 29
#define FREE_REFERENCES_LABEL_19_0 22
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto check_decoded_time_args_10;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_19_11);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_decoded_time_args_13)
DEFLABEL (check_decoded_time_args_10)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [11]));
  goto lambda_2;

DEFLABEL (lambda_14)
DEFLABEL (lambda_2)
  DLINK_INTERRUPT_CHECK (25, LABEL_19_11);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_19_5]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_8 5
#define LABEL_20_5 7
#define LABEL_20_10 9
#define LABEL_20_11 11
#define LABEL_20_6 13
#define LABEL_20_7 15
#define LABEL_20_16 17
#define LABEL_20_17 19
#define LABEL_20_18 21
#define LABEL_20_19 23
#define LABEL_20_12 25
#define LABEL_20_13 27
#define LABEL_20_14 29
#define LABEL_20_15 31
#define LABEL_20_25 33
#define LABEL_20_20 35
#define LABEL_20_21 37
#define LABEL_20_22 39
#define LABEL_20_28 41
#define LABEL_20_29 43
#define LABEL_20_30 45
#define LABEL_20_31 47
#define LABEL_20_23 49
#define LABEL_20_32 51
#define LABEL_20_27 53
#define LABEL_20_33 55
#define ENVIRONMENT_LABEL_20_3 75
#define DEBUGGING_LABEL_20_2 74
#define OBJECT_20_10 73
#define OBJECT_20_9 72
#define OBJECT_20_8 71
#define OBJECT_20_7 70
#define OBJECT_20_6 69
#define OBJECT_20_5 68
#define OBJECT_20_4 67
#define OBJECT_20_3 66
#define OBJECT_20_2 65
#define OBJECT_20_1 64
#define OBJECT_20_0 63
#define EXECUTE_CACHE_20_26 57
#define EXECUTE_CACHE_20_24 59
#define EXECUTE_CACHE_20_9 61
#define FREE_REFERENCES_LABEL_20_0 56
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_20_4);
      goto compute_day_of_week_30;

    case 1:
      current_block = (Rpc - LABEL_20_8);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_29;

    case 3:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_20_16);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_20_19);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_20_25);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_20_20);
      goto continuation_1;

    case 17:
      current_block = (Rpc - LABEL_20_21);
      goto continuation_0;

    case 18:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_20_28);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_20_29);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_20_30);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_20_31);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_20_32);
      goto label_36;

    case 25:
      current_block = (Rpc - LABEL_20_27);
      goto continuation_2;

    case 26:
      current_block = (Rpc - LABEL_20_33);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_day_of_week_41)
DEFLABEL (compute_day_of_week_30)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_65;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_65;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 26))
    goto label_63;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd24.Lng), 13, (& (Wrd20.Lng))))
    goto label_63;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_62)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_61;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd30.Lng) = ((Wrd31.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_61;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_60)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_16)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_20)
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_59;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd26.Lng) == 0)
    goto label_57;

DEFLABEL (label_56)
  (Wrd12.Obj) = (current_block [OBJECT_20_9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_20_10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_18)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd14.Obj) = Rvl;
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_54;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_54;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd24.Lng), (Wrd25.Lng), (& (Wrd23.Lng))))
    goto label_54;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_53)
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_43;

DEFLABEL (label_42)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_42;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_42;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_52)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_5)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_7)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_18);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_51;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (multiply_with_overflow ((Wrd25.Lng), 2, (& (Wrd21.Lng))))
    goto label_51;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_45)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_44;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_44;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_49)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_0)
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_25);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 26)
    goto label_47;

DEFLABEL (label_46)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_47)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_46;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_46;
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_48)
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_26]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_20_3]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (label_51)
  (Wrd13.Obj) = (current_block [OBJECT_20_2]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_35)
  (Wrd18.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_37)
  (Wrd20.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_58)
  (Wrd39.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_59)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_61)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd12.Obj) = (current_block [OBJECT_20_6]);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_33)
  (Wrd17.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (current_block [OBJECT_20_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_20);
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (continuation_22)
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 26))
    goto label_68;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd40.Lng) == 0)
    goto label_67;

DEFLABEL (label_66)
  (Wrd34.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_55;

DEFLABEL (label_67)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_20_8]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_58;

DEFLABEL (label_68)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_31]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_24)
  (Wrd42.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd42.uLng) == 26))
    goto label_69;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd48.Lng) == 0)
    goto label_66;
  goto label_56;

DEFLABEL (label_69)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_8 7
#define LABEL_21_9 9
#define LABEL_21_10 11
#define LABEL_21_11 13
#define LABEL_21_7 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define ENVIRONMENT_LABEL_21_3 31
#define DEBUGGING_LABEL_21_2 30
#define OBJECT_21_4 29
#define OBJECT_21_3 28
#define OBJECT_21_2 27
#define OBJECT_21_1 26
#define OBJECT_21_0 25
#define EXECUTE_CACHE_21_6 21
#define FREE_REFERENCE_21_0 24
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_21_4);
      goto universal_time__local_decoded_time_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_21_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__local_decoded_time_16)
DEFLABEL (universal_time__local_decoded_time_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  Wrd8 = Wrd9;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_24;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_24;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_24;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_23)
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd36.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd34.pObj) [10]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_21;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_21;
  (Wrd17.Obj) = ((Wrd21.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_20)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_5)
  (Wrd45.Obj) = Rvl;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_19;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd53.Lng))))
    goto label_19;
  ((Wrd51.pObj) [10]) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_21_1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_14)
  goto label_17;

DEFLABEL (label_21)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_21_1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_21_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_8 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define LABEL_22_11 13
#define LABEL_22_7 15
#define LABEL_22_12 17
#define LABEL_22_13 19
#define ENVIRONMENT_LABEL_22_3 31
#define DEBUGGING_LABEL_22_2 30
#define OBJECT_22_4 29
#define OBJECT_22_3 28
#define OBJECT_22_2 27
#define OBJECT_22_1 26
#define OBJECT_22_0 25
#define EXECUTE_CACHE_22_6 21
#define FREE_REFERENCE_22_0 24
#define FREE_REFERENCES_LABEL_22_0 20
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_22_4);
      goto universal_time__global_decoded_time_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_22_12);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_22_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__global_decoded_time_16)
DEFLABEL (universal_time__global_decoded_time_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  Wrd8 = Wrd9;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_24;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_24;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_24;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_23)
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd36.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd34.pObj) [10]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_21;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_21;
  (Wrd17.Obj) = ((Wrd21.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_20)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_5)
  (Wrd45.Obj) = Rvl;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_19;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd53.Lng))))
    goto label_19;
  ((Wrd51.pObj) [10]) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_22_1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_14)
  goto label_17;

DEFLABEL (label_21)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_22_1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_22_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define LABEL_23_4 11
#define LABEL_23_10 13
#define LABEL_23_9 15
#define LABEL_23_12 17
#define ENVIRONMENT_LABEL_23_3 29
#define DEBUGGING_LABEL_23_2 28
#define OBJECT_23_4 27
#define OBJECT_23_3 26
#define OBJECT_23_2 25
#define OBJECT_23_1 24
#define OBJECT_23_0 23
#define EXECUTE_CACHE_23_11 19
#define FREE_REFERENCE_23_0 22
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd59;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_23_4);
      goto decoded_time__universal_time_8;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_23_12);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__universal_time_16)
DEFLABEL (decoded_time__universal_time_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd22.Lng))))
    goto label_30;
  (Wrd10.Obj) = ((Wrd20.pObj) [10]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd41.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd41.uLng) == 10))
    goto label_27;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd39.Lng))))
    goto label_27;
  (Wrd31.Obj) = ((Wrd37.pObj) [10]);

DEFLABEL (label_26)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_25;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (multiply_with_overflow ((Wrd55.Lng), 3600, (& (Wrd54.Lng))))
    goto label_25;
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));

DEFLABEL (label_24)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_23;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd67.Lng))))
    goto label_23;
  ((Wrd65.pObj) [10]) = (Wrd52.Obj);

DEFLABEL (label_22)
  (Wrd59.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 26)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_17;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_17;
  Rvl = (LONG_TO_FIXNUM (Wrd17.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_12])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_23_0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 3);

DEFLABEL (label_14)
  goto label_22;

DEFLABEL (label_25)
  (Wrd48.Obj) = (current_block [OBJECT_23_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_13)
  (Wrd52.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_23_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_12)
  (Wrd31.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_21;

DEFLABEL (label_30)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_23_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define ENVIRONMENT_LABEL_24_3 12
#define DEBUGGING_LABEL_24_2 11
#define OBJECT_24_0 10
#define FREE_REFERENCE_24_0 9
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto get_universal_time_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_universal_time_5)
DEFLABEL (get_universal_time_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd13.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_6;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_6;
  Rvl = (LONG_TO_FIXNUM (Wrd16.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_7 7
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto local_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_decoded_time_4)
DEFLABEL (local_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto global_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (global_decoded_time_4)
DEFLABEL (global_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_4 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define LABEL_27_8 11
#define LABEL_27_9 13
#define LABEL_27_10 15
#define LABEL_27_12 17
#define LABEL_27_14 19
#define ENVIRONMENT_LABEL_27_3 39
#define DEBUGGING_LABEL_27_2 38
#define OBJECT_27_10 37
#define OBJECT_27_9 36
#define OBJECT_27_8 35
#define OBJECT_27_7 34
#define OBJECT_27_6 33
#define OBJECT_27_5 32
#define OBJECT_27_4 31
#define OBJECT_27_3 30
#define OBJECT_27_2 29
#define OBJECT_27_1 28
#define OBJECT_27_0 27
#define EXECUTE_CACHE_27_15 21
#define EXECUTE_CACHE_27_13 23
#define EXECUTE_CACHE_27_11 25
#define FREE_REFERENCES_LABEL_27_0 20
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd82;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd77;
  machine_word Wrd74;
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
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_27_4);
      goto time_zoneP_9;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_27_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_27_14);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (time_zoneP_17)
DEFLABEL (time_zoneP_9)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_27_0]);
  (Wrd77.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd77.Lng))))
    goto label_36;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd74.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_29;

DEFLABEL (label_35)
  (Wrd64.Obj) = (current_block [OBJECT_27_2]);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd67.Lng))))
    goto label_34;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_29;

DEFLABEL (label_33)
  (Wrd54.Obj) = (current_block [OBJECT_27_3]);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd57.Lng))))
    goto label_32;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_29;

DEFLABEL (label_31)
  (Wrd44.Obj) = (current_block [OBJECT_27_4]);
  (Wrd47.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd47.Lng))))
    goto label_30;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_29;

DEFLABEL (label_28)
  (Wrd25.Obj) = (current_block [OBJECT_27_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_18;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_18)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_20;
  (Wrd27.Obj) = (current_block [OBJECT_27_7]);
  goto label_19;

DEFLABEL (label_20)
  (Wrd27.Obj) = (current_block [OBJECT_27_6]);

DEFLABEL (label_19)
DEFLABEL (label_27)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd27.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_27_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_26;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd19.Lng), 3600, (& (Wrd15.Lng))))
    goto label_26;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (label_26)
  (Wrd7.Obj) = (current_block [OBJECT_27_10]);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto label_22;

DEFLABEL (label_30)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_32)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_29;

DEFLABEL (label_34)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_29;

DEFLABEL (label_36)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_29;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto guarantee_time_zone_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_time_zone_4)
DEFLABEL (guarantee_time_zone_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_28_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 11
#define DEBUGGING_LABEL_29_2 10
#define OBJECT_29_2 9
#define OBJECT_29_1 8
#define OBJECT_29_0 7
#define EXECUTE_CACHE_29_5 5
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_29_4);
      goto error_not_time_zone_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_time_zone_5)
DEFLABEL (error_not_time_zone_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_29_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_29_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 10
#define DEBUGGING_LABEL_30_2 9
#define OBJECT_30_2 8
#define OBJECT_30_1 7
#define OBJECT_30_0 6
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_30_4);
      goto decoded_time_daylight_savings_timeP_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_daylight_savings_timeP_5)
DEFLABEL (decoded_time_daylight_savings_timeP_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [9]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_6;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_6)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) > 0)
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_30_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_4 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 19
#define DEBUGGING_LABEL_31_2 18
#define OBJECT_31_2 17
#define OBJECT_31_1 16
#define OBJECT_31_0 15
#define EXECUTE_CACHE_31_9 11
#define EXECUTE_CACHE_31_8 13
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd46;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_31_4);
      goto decoded_time__utc_6;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__utc_10)
DEFLABEL (decoded_time__utc_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_22;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_21)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  (Wrd46.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_11)
DEFLABEL (label_20)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 26)
    goto label_16;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_16)
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if ((Wrd43.Lng) == 0)
    goto label_18;
  (Wrd39.Obj) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  (Wrd39.Obj) = (current_block [OBJECT_31_2]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_31_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_11 11
#define LABEL_32_8 13
#define LABEL_32_12 15
#define LABEL_32_14 17
#define LABEL_32_15 19
#define LABEL_32_13 21
#define ENVIRONMENT_LABEL_32_3 42
#define DEBUGGING_LABEL_32_2 41
#define OBJECT_32_7 40
#define OBJECT_32_6 39
#define OBJECT_32_5 38
#define OBJECT_32_4 37
#define OBJECT_32_3 36
#define OBJECT_32_2 35
#define OBJECT_32_1 34
#define OBJECT_32_0 33
#define EXECUTE_CACHE_32_18 23
#define EXECUTE_CACHE_32_17 25
#define EXECUTE_CACHE_32_16 27
#define EXECUTE_CACHE_32_10 29
#define EXECUTE_CACHE_32_7 31
#define FREE_REFERENCES_LABEL_32_0 22
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_32_4);
      goto decoded_time_date_string_10;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_32_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_date_string_17)
DEFLABEL (decoded_time_date_string_10)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_27;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_27;
  (Wrd11.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_3]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_17]));

DEFLABEL (label_18)
  (Wrd31.Obj) = (current_block [OBJECT_32_6]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_21)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [6]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_20;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd43.Lng))))
    goto label_20;
  (Wrd37.Obj) = ((Wrd41.pObj) [7]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_13);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (label_20)
  (Wrd46.Obj) = (Rsp [6]);
  (Wrd47.Obj) = (current_block [OBJECT_32_7]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_32_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_32_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_32_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_11);
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_8 11
#define LABEL_33_11 13
#define LABEL_33_9 15
#define LABEL_33_12 17
#define LABEL_33_14 19
#define LABEL_33_15 21
#define LABEL_33_16 23
#define LABEL_33_13 25
#define LABEL_33_17 27
#define LABEL_33_18 29
#define ENVIRONMENT_LABEL_33_3 48
#define DEBUGGING_LABEL_33_2 47
#define OBJECT_33_11 46
#define OBJECT_33_10 45
#define OBJECT_33_9 44
#define OBJECT_33_8 43
#define OBJECT_33_7 42
#define OBJECT_33_6 41
#define OBJECT_33_5 40
#define OBJECT_33_4 39
#define OBJECT_33_3 38
#define OBJECT_33_2 37
#define OBJECT_33_1 36
#define OBJECT_33_0 35
#define EXECUTE_CACHE_33_19 31
#define EXECUTE_CACHE_33_10 33
#define FREE_REFERENCES_LABEL_33_0 30
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd51;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd57;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_33_4);
      goto decoded_time_time_string_16;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_33_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_33_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_33_18);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time_time_string_28)
DEFLABEL (decoded_time_time_string_16)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_57)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_56;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_56;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_55)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_54;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_54;
  (Wrd37.Obj) = ((Wrd43.pObj) [4]);

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_52;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd56.Lng) < 10L)
    goto label_30;

DEFLABEL (label_31)
  (Wrd59.Obj) = (current_block [OBJECT_33_5]);
  (* (--Rsp)) = (Wrd59.Obj);
  goto label_29;

DEFLABEL (label_30)
  (Wrd64.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_29)
DEFLABEL (label_51)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_50;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 10L)
    goto label_33;

DEFLABEL (label_34)
  (Wrd11.Obj) = (current_block [OBJECT_33_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_32;

DEFLABEL (label_33)
  (Wrd57.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_32)
DEFLABEL (label_49)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_48;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd56.Lng) == 0)
    goto label_47;

DEFLABEL (label_46)
  (Wrd25.Obj) = (Rsp [7]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_45;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd28.Lng) < 13L)
    goto label_44;

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [7]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_42;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) - 12L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_42;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_33_9]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_39;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) < 12L)
    goto label_36;

DEFLABEL (label_37)
  (Wrd13.Obj) = (current_block [OBJECT_33_10]);
  goto label_35;

DEFLABEL (label_36)
  (Wrd13.Obj) = (current_block [OBJECT_33_11]);

DEFLABEL (label_35)
DEFLABEL (label_38)
  (Rsp [6]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_19]));

DEFLABEL (label_39)
  (Wrd15.Obj) = (current_block [OBJECT_33_8]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_42)
  (Wrd33.Obj) = (Rsp [7]);
  (Wrd34.Obj) = (current_block [OBJECT_33_8]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (Wrd32.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd46.Obj) = (Rsp [7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_40;

DEFLABEL (label_45)
  (Wrd48.Obj) = (current_block [OBJECT_33_7]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  (Wrd54.Obj) = (current_block [OBJECT_33_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_40;

DEFLABEL (label_48)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (label_50)
  (Wrd59.Obj) = (current_block [OBJECT_33_4]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_52)
  (Wrd66.Obj) = (current_block [OBJECT_33_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

DEFLABEL (label_54)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_33_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_20)
  (Wrd37.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_33_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_33_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define EXECUTE_CACHE_34_7 7
#define EXECUTE_CACHE_34_6 9
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto universal_time__local_rfc2822_string_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__local_rfc2822_string_4)
DEFLABEL (universal_time__local_rfc2822_string_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 12
#define DEBUGGING_LABEL_35_2 11
#define EXECUTE_CACHE_35_7 7
#define EXECUTE_CACHE_35_6 9
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto universal_time__global_rfc2822_string_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__global_rfc2822_string_4)
DEFLABEL (universal_time__global_rfc2822_string_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define EXECUTE_CACHE_36_7 7
#define EXECUTE_CACHE_36_6 9
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_36_4);
      goto file_time__local_rfc2822_string_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_rfc2822_string_4)
DEFLABEL (file_time__local_rfc2822_string_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 12
#define DEBUGGING_LABEL_37_2 11
#define EXECUTE_CACHE_37_7 7
#define EXECUTE_CACHE_37_6 9
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_37_4);
      goto file_time__global_rfc2822_string_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_rfc2822_string_4)
DEFLABEL (file_time__global_rfc2822_string_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define TAG_38_6 1
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_8 7
#define EXECUTE_CACHE_38_7 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_38_4);
      goto decoded_time__rfc2822_string_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__rfc2822_string_4)
DEFLABEL (decoded_time__rfc2822_string_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_38_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_11 11
#define LABEL_39_13 13
#define LABEL_39_10 15
#define ENVIRONMENT_LABEL_39_3 30
#define DEBUGGING_LABEL_39_2 29
#define OBJECT_39_3 28
#define OBJECT_39_2 27
#define OBJECT_39_1 26
#define OBJECT_39_0 25
#define EXECUTE_CACHE_39_14 17
#define EXECUTE_CACHE_39_12 19
#define EXECUTE_CACHE_39_9 21
#define EXECUTE_CACHE_39_6 23
#define FREE_REFERENCES_LABEL_39_0 16
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_39_4);
      goto write_decoded_time_as_rfc2822_6;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_13);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_rfc2822_11)
DEFLABEL (write_decoded_time_as_rfc2822_6)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (current_block [OBJECT_39_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_15;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_15;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd5.Obj) = (Rsp [1]);
  goto label_14;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_39_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define ENVIRONMENT_LABEL_40_3 17
#define DEBUGGING_LABEL_40_2 16
#define OBJECT_40_0 15
#define EXECUTE_CACHE_40_9 9
#define EXECUTE_CACHE_40_8 11
#define EXECUTE_CACHE_40_7 13
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_40_4);
      goto write_decoded_time_as_http_2;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_http_5)
DEFLABEL (write_decoded_time_as_http_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd5.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define LABEL_41_6 7
#define LABEL_41_8 9
#define LABEL_41_10 11
#define LABEL_41_11 13
#define LABEL_41_7 15
#define LABEL_41_14 17
#define LABEL_41_18 19
#define LABEL_41_16 21
#define LABEL_41_17 23
#define LABEL_41_20 25
#define LABEL_41_22 27
#define LABEL_41_21 29
#define LABEL_41_23 31
#define LABEL_41_25 33
#define LABEL_41_24 35
#define LABEL_41_27 37
#define LABEL_41_29 39
#define LABEL_41_28 41
#define LABEL_41_30 43
#define LABEL_41_31 45
#define ENVIRONMENT_LABEL_41_3 71
#define DEBUGGING_LABEL_41_2 70
#define OBJECT_41_10 69
#define OBJECT_41_9 68
#define OBJECT_41_8 67
#define OBJECT_41_7 66
#define OBJECT_41_6 65
#define OBJECT_41_5 64
#define OBJECT_41_4 63
#define OBJECT_41_3 62
#define OBJECT_41_2 61
#define OBJECT_41_1 60
#define OBJECT_41_0 59
#define EXECUTE_CACHE_41_26 47
#define EXECUTE_CACHE_41_19 49
#define EXECUTE_CACHE_41_15 51
#define EXECUTE_CACHE_41_13 53
#define EXECUTE_CACHE_41_12 55
#define EXECUTE_CACHE_41_9 57
#define FREE_REFERENCES_LABEL_41_0 46
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto Z__write_decoded_time_1_22;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_41_18);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_41_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_41_20);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_41_22);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_41_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_41_23);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_41_25);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_41_24);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_41_27);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_41_29);
      goto label_29;

    case 19:
      current_block = (Rpc - LABEL_41_28);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_41_30);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_41_31);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__write_decoded_time_1_32)
DEFLABEL (Z__write_decoded_time_1_22)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_48;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd5.Obj) = (current_block [OBJECT_41_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_46)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_45;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd47.Lng))))
    goto label_45;
  (Wrd41.Obj) = ((Wrd45.pObj) [5]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_43;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_43;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_41_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_41;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_41;
  (Wrd11.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_41_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_41_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_39;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_39;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_41_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_41_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_37;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_37;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_41_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_41_30);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_26]));

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_41_9]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_41_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_41_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_41_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (current_block [OBJECT_41_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_48)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_41_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_6 5
#define LABEL_42_8 7
#define LABEL_42_5 9
#define ENVIRONMENT_LABEL_42_3 21
#define DEBUGGING_LABEL_42_2 20
#define OBJECT_42_2 19
#define OBJECT_42_1 18
#define OBJECT_42_0 17
#define EXECUTE_CACHE_42_9 11
#define EXECUTE_CACHE_42_7 13
#define FREE_REFERENCE_42_0 16
#define FREE_REFERENCES_LABEL_42_0 10
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_4);
      goto rfc2822_string__decoded_time_3;

    case 1:
      current_block = (Rpc - LABEL_42_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rfc2822_string__decoded_time_7)
DEFLABEL (rfc2822_string__decoded_time_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_8);

DEFLABEL (label_10)
  (Wrd7.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_9)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  Rvl = ((Wrd15.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define EXECUTE_CACHE_43_7 7
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto string__universal_time_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__universal_time_4)
DEFLABEL (string__universal_time_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 12
#define DEBUGGING_LABEL_44_2 11
#define EXECUTE_CACHE_44_7 7
#define EXECUTE_CACHE_44_6 9
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_44_4);
      goto string__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__file_time_4)
DEFLABEL (string__file_time_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_11 9
#define TAG_45_12 3
#define LABEL_45_13 11
#define LABEL_45_9 13
#define LABEL_45_20 15
#define LABEL_45_14 17
#define LABEL_45_16 19
#define TAG_45_17 8
#define LABEL_45_25 21
#define LABEL_45_26 23
#define LABEL_45_18 25
#define LABEL_45_24 27
#define LABEL_45_30 29
#define LABEL_45_21 31
#define LABEL_45_28 33
#define TAG_45_29 15
#define LABEL_45_34 35
#define LABEL_45_31 37
#define TAG_45_32 17
#define LABEL_45_33 39
#define LABEL_45_35 41
#define LABEL_45_36 43
#define TAG_45_37 20
#define LABEL_45_38 45
#define LABEL_45_43 47
#define LABEL_45_46 49
#define LABEL_45_47 51
#define LABEL_45_40 53
#define LABEL_45_42 55
#define LABEL_45_48 57
#define LABEL_45_44 59
#define LABEL_45_50 61
#define TAG_45_51 29
#define LABEL_45_52 63
#define LABEL_45_53 65
#define LABEL_45_54 67
#define TAG_45_55 32
#define LABEL_45_61 69
#define LABEL_45_56 71
#define LABEL_45_57 73
#define TAG_45_58 35
#define LABEL_45_59 75
#define LABEL_45_60 77
#define LABEL_45_64 79
#define LABEL_45_65 81
#define TAG_45_66 39
#define LABEL_45_67 83
#define LABEL_45_62 85
#define LABEL_45_69 87
#define LABEL_45_70 89
#define LABEL_45_73 91
#define LABEL_45_74 93
#define LABEL_45_75 95
#define LABEL_45_76 97
#define LABEL_45_77 99
#define LABEL_45_78 101
#define LABEL_45_79 103
#define LABEL_45_72 105
#define LABEL_45_81 107
#define TAG_45_82 52
#define LABEL_45_83 109
#define LABEL_45_85 111
#define LABEL_45_86 113
#define LABEL_45_88 115
#define LABEL_45_89 117
#define ENVIRONMENT_LABEL_45_3 169
#define DEBUGGING_LABEL_45_2 168
#define OBJECT_45_10 167
#define OBJECT_45_9 166
#define OBJECT_45_8 165
#define OBJECT_45_7 164
#define OBJECT_45_6 163
#define OBJECT_45_5 162
#define OBJECT_45_4 161
#define OBJECT_45_3 160
#define OBJECT_45_2 159
#define OBJECT_45_1 158
#define OBJECT_45_0 157
#define EXECUTE_CACHE_45_90 119
#define EXECUTE_CACHE_45_87 121
#define EXECUTE_CACHE_45_84 123
#define EXECUTE_CACHE_45_80 125
#define EXECUTE_CACHE_45_71 127
#define EXECUTE_CACHE_45_68 129
#define EXECUTE_CACHE_45_63 131
#define EXECUTE_CACHE_45_49 133
#define EXECUTE_CACHE_45_45 135
#define EXECUTE_CACHE_45_41 137
#define EXECUTE_CACHE_45_39 139
#define EXECUTE_CACHE_45_27 141
#define EXECUTE_CACHE_45_23 143
#define EXECUTE_CACHE_45_22 145
#define EXECUTE_CACHE_45_19 147
#define EXECUTE_CACHE_45_15 149
#define EXECUTE_CACHE_45_10 151
#define EXECUTE_CACHE_45_8 153
#define EXECUTE_CACHE_45_6 155
#define FREE_REFERENCES_LABEL_45_0 118
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd101;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_45_4);
      goto parser_rfc2822_time_85;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_11);
      goto lambda_70;

    case 4:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_71;

    case 5:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_45_16);
      goto lambda_97;

    case 9:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_79;

    case 10:
      current_block = (Rpc - LABEL_45_26);
      goto continuation_78;

    case 11:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_77;

    case 12:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_72;

    case 13:
      current_block = (Rpc - LABEL_45_30);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_45_28);
      goto lambda_98;

    case 16:
      current_block = (Rpc - LABEL_45_34);
      goto continuation_74;

    case 17:
      current_block = (Rpc - LABEL_45_31);
      goto lambda_57;

    case 18:
      current_block = (Rpc - LABEL_45_33);
      goto continuation_58;

    case 19:
      current_block = (Rpc - LABEL_45_35);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_45_36);
      goto lambda_100;

    case 21:
      current_block = (Rpc - LABEL_45_38);
      goto continuation_63;

    case 22:
      current_block = (Rpc - LABEL_45_43);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_45_46);
      goto continuation_10;

    case 24:
      current_block = (Rpc - LABEL_45_47);
      goto continuation_9;

    case 25:
      current_block = (Rpc - LABEL_45_40);
      goto continuation_8;

    case 26:
      current_block = (Rpc - LABEL_45_42);
      goto continuation_59;

    case 27:
      current_block = (Rpc - LABEL_45_48);
      goto continuation_60;

    case 28:
      current_block = (Rpc - LABEL_45_44);
      goto continuation_12;

    case 29:
      current_block = (Rpc - LABEL_45_50);
      goto lambda_43;

    case 30:
      current_block = (Rpc - LABEL_45_52);
      goto continuation_44;

    case 31:
      current_block = (Rpc - LABEL_45_53);
      goto continuation_13;

    case 32:
      current_block = (Rpc - LABEL_45_54);
      goto lambda_102;

    case 33:
      current_block = (Rpc - LABEL_45_61);
      goto continuation_49;

    case 34:
      current_block = (Rpc - LABEL_45_56);
      goto continuation_48;

    case 35:
      current_block = (Rpc - LABEL_45_57);
      goto lambda_25;

    case 36:
      current_block = (Rpc - LABEL_45_59);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_45_60);
      goto continuation_45;

    case 38:
      current_block = (Rpc - LABEL_45_64);
      goto continuation_14;

    case 39:
      current_block = (Rpc - LABEL_45_65);
      goto lambda_104;

    case 40:
      current_block = (Rpc - LABEL_45_67);
      goto continuation_38;

    case 41:
      current_block = (Rpc - LABEL_45_62);
      goto continuation_50;

    case 42:
      current_block = (Rpc - LABEL_45_69);
      goto continuation_16;

    case 43:
      current_block = (Rpc - LABEL_45_70);
      goto continuation_15;

    case 44:
      current_block = (Rpc - LABEL_45_73);
      goto label_87;

    case 45:
      current_block = (Rpc - LABEL_45_74);
      goto label_88;

    case 46:
      current_block = (Rpc - LABEL_45_75);
      goto label_89;

    case 47:
      current_block = (Rpc - LABEL_45_76);
      goto label_90;

    case 48:
      current_block = (Rpc - LABEL_45_77);
      goto label_91;

    case 49:
      current_block = (Rpc - LABEL_45_78);
      goto label_92;

    case 50:
      current_block = (Rpc - LABEL_45_79);
      goto label_93;

    case 51:
      current_block = (Rpc - LABEL_45_72);
      goto continuation_27;

    case 52:
      current_block = (Rpc - LABEL_45_81);
      goto lambda_105;

    case 53:
      current_block = (Rpc - LABEL_45_83);
      goto continuation_34;

    case 54:
      current_block = (Rpc - LABEL_45_85);
      goto continuation_28;

    case 55:
      current_block = (Rpc - LABEL_45_86);
      goto continuation_29;

    case 56:
      current_block = (Rpc - LABEL_45_88);
      goto continuation_31;

    case 57:
      current_block = (Rpc - LABEL_45_89);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_rfc2822_time_95)
DEFLABEL (parser_rfc2822_time_85)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_45_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_16])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_108;

DEFLABEL (label_107)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_76;

DEFLABEL (label_108)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_45_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_45_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_70;

DEFLABEL (label_109)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_96)
DEFLABEL (lambda_70)
  INTERRUPT_CHECK (26, LABEL_45_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_14);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_111;

DEFLABEL (label_110)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_113;

DEFLABEL (label_112)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_45_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_31])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [5]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_33]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_45_33);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_36])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_39]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_45_38);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_57;

DEFLABEL (label_114)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_62;

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_45_16);

DEFLABEL (lambda_76)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_45_24);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_28])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd25.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  goto lambda_70;

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_45_28);

DEFLABEL (lambda_75)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_45_34);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_99)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_45_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_115;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_45_40);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_117;

DEFLABEL (label_116)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_47]))));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_118)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_46]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_43]))));
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_118;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_44]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_45]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_44);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_119;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_119)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_50])));
  Rhp += 7;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd28 = Wrd9;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = ((Wrd30.pObj) [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd30.pObj) [4]);
  ((Wrd28.pObj) [4]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd30.pObj) [5]);
  ((Wrd28.pObj) [5]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [6]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [7]) = (Wrd13.Obj);
  ((Wrd28.pObj) [8]) = Rvl;
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_52]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_45_52);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_55);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_54])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_45_56);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_121;

DEFLABEL (label_120)
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_47;

DEFLABEL (label_121)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_61]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_45_61);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_62]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_63]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_45_62);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_43;

DEFLABEL (label_122)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_47;

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_45_36);

DEFLABEL (lambda_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_45_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_49]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_45_48);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd10.Obj);
  goto lambda_57;

DEFLABEL (label_123)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [3]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_101)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_45_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_53);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_124;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_124)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_58);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_57])));
  Rhp += 8;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd35 = Wrd8;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  ((Wrd35.pObj) [2]) = (Wrd38.Obj);
  (Wrd34.Obj) = ((Wrd37.pObj) [3]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  (Wrd30.Obj) = ((Wrd37.pObj) [4]);
  ((Wrd35.pObj) [4]) = (Wrd30.Obj);
  (Wrd26.Obj) = ((Wrd37.pObj) [5]);
  ((Wrd35.pObj) [5]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd37.pObj) [6]);
  ((Wrd35.pObj) [6]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd37.pObj) [7]);
  ((Wrd35.pObj) [7]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd37.pObj) [8]);
  ((Wrd35.pObj) [8]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [9]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_59]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_45_59);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_65])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_67]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_68]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45_67);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_25;

DEFLABEL (label_125)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_37;

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_45_54);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_45_60);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd11.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_43;

DEFLABEL (lambda_103)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_45_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_45_64);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_126;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_69]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_70]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd15.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_71]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_70);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_140;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_140;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_139)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_138;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_138;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_137)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_136;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_136;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_135)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_134;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd61.Lng))))
    goto label_134;
  (Wrd55.Obj) = ((Wrd59.pObj) [5]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_133)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_132;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd77.Lng))))
    goto label_132;
  (Wrd71.Obj) = ((Wrd75.pObj) [6]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_131)
  (Wrd94.Obj) = (Rsp [5]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_130;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd93.Lng))))
    goto label_130;
  (Wrd87.Obj) = ((Wrd91.pObj) [7]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_129)
  (Wrd110.Obj) = (Rsp [6]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_128;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd109.Lng))))
    goto label_128;
  (Wrd101.Obj) = ((Wrd107.pObj) [8]);

DEFLABEL (label_127)
  (Rsp [6]) = (Wrd101.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_80]));

DEFLABEL (label_128)
  (Wrd112.Obj) = (Rsp [6]);
  (Wrd113.Obj) = (current_block [OBJECT_45_10]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_79]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_93)
  (Wrd101.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.Obj) = (current_block [OBJECT_45_9]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_78]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.Obj) = (current_block [OBJECT_45_8]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_77]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_45_7]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_76]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_45_6]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_75]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_45_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_74]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_45_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_73]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_45_69);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_45_65);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_45_72);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_82);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_81])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_83]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_84]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_45_83);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_25;

DEFLABEL (label_141)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_33;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_45_81);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_45_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_87]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_45_86);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_142;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_88]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_89]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_90]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_45_88);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  goto lambda_25;

DEFLABEL (lambda_106)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_45_89);
  Rvl = (current_block [OBJECT_45_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_8 7
#define LABEL_46_10 9
#define LABEL_46_7 11
#define LABEL_46_15 13
#define LABEL_46_13 15
#define LABEL_46_11 17
#define LABEL_46_16 19
#define LABEL_46_18 21
#define LABEL_46_20 23
#define ENVIRONMENT_LABEL_46_3 43
#define DEBUGGING_LABEL_46_2 42
#define OBJECT_46_2 41
#define OBJECT_46_1 40
#define OBJECT_46_0 39
#define EXECUTE_CACHE_46_19 25
#define EXECUTE_CACHE_46_17 27
#define EXECUTE_CACHE_46_14 29
#define EXECUTE_CACHE_46_12 31
#define EXECUTE_CACHE_46_9 33
#define EXECUTE_CACHE_46_6 35
#define FREE_REFERENCE_46_0 38
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_46_4);
      goto parse_rfc2822_obs_year_13;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_46_15);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_46_16);
      goto lambda_10;

    case 9:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_46_20);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_rfc2822_obs_year_19)
DEFLABEL (parse_rfc2822_obs_year_13)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_13);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;
  Wrd10 = Wrd14;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_15])), (Wrd11.pObj));

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_8])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_20)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_46_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_33;
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd9.Lng) < 50L)
    goto label_28;

DEFLABEL (label_29)
  (Wrd12.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_27;

DEFLABEL (label_28)
  (Wrd24.Obj) = (current_block [OBJECT_46_2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_27)
DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_30;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_30;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd26.Obj) = (current_block [OBJECT_46_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_8 7
#define LABEL_47_7 9
#define LABEL_47_12 11
#define LABEL_47_10 13
#define LABEL_47_13 15
#define LABEL_47_15 17
#define LABEL_47_14 19
#define LABEL_47_16 21
#define ENVIRONMENT_LABEL_47_3 33
#define DEBUGGING_LABEL_47_2 32
#define OBJECT_47_0 31
#define EXECUTE_CACHE_47_11 23
#define EXECUTE_CACHE_47_9 25
#define EXECUTE_CACHE_47_6 27
#define FREE_REFERENCE_47_0 30
#define FREE_REFERENCES_LABEL_47_0 22
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto match_lws_11;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_47_12);
      goto Z___ks2__8;

    case 5:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_47_15);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_47_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_lws_16)
DEFLABEL (match_lws_11)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rsp = (& (Rsp [1]));
  goto Z___ks2__8;

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_10);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_8])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_19;

DEFLABEL (Z___ks2__17)
DEFLABEL (Z___ks2__8)
  INTERRUPT_CHECK (26, LABEL_47_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_23;
  Wrd8 = Wrd12;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rsp = (& (Rsp [1]));
  goto Z___ks2__8;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_16);
  Rvl = (current_block [OBJECT_47_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_15])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_9 9
#define LABEL_48_8 11
#define LABEL_48_11 13
#define ENVIRONMENT_LABEL_48_3 25
#define DEBUGGING_LABEL_48_2 24
#define OBJECT_48_0 23
#define EXECUTE_CACHE_48_12 15
#define EXECUTE_CACHE_48_10 17
#define EXECUTE_CACHE_48_7 19
#define FREE_REFERENCE_48_0 22
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_48_4);
      goto match_lws__7;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto Z___ks2__5;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_lws__11)
DEFLABEL (match_lws__7)
  INTERRUPT_CHECK (26, LABEL_48_4);
  goto Z___ks2__5;

DEFLABEL (Z___ks2__12)
DEFLABEL (Z___ks2__5)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  goto Z___ks2__5;

DEFLABEL (label_13)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_11);
  Rvl = (current_block [OBJECT_48_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define EXECUTE_CACHE_49_8 7
#define EXECUTE_CACHE_49_7 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_49_4);
      goto time_zone__string_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (time_zone__string_4)
DEFLABEL (time_zone__string_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_8 7
#define LABEL_50_9 9
#define LABEL_50_7 11
#define LABEL_50_11 13
#define LABEL_50_15 15
#define LABEL_50_12 17
#define LABEL_50_14 19
#define LABEL_50_18 21
#define LABEL_50_19 23
#define LABEL_50_21 25
#define ENVIRONMENT_LABEL_50_3 49
#define DEBUGGING_LABEL_50_2 48
#define OBJECT_50_4 47
#define OBJECT_50_3 46
#define OBJECT_50_2 45
#define OBJECT_50_1 44
#define OBJECT_50_0 43
#define EXECUTE_CACHE_50_23 27
#define EXECUTE_CACHE_50_22 29
#define EXECUTE_CACHE_50_20 31
#define EXECUTE_CACHE_50_17 33
#define EXECUTE_CACHE_50_16 35
#define EXECUTE_CACHE_50_13 37
#define EXECUTE_CACHE_50_10 39
#define EXECUTE_CACHE_50_6 41
#define FREE_REFERENCES_LABEL_50_0 26
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_50_4);
      goto write_time_zone_14;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_50_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_50_18);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_50_19);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_50_21);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_time_zone_20)
DEFLABEL (write_time_zone_14)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_29;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = (0 - (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_29;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_28)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd30.Lng), 60, (& (Wrd27.Lng))))
    goto label_27;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_25;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd19.Lng) < 0)
    goto label_22;

DEFLABEL (label_23)
  (Wrd16.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd17.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_21)
DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_50_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_23]));

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (label_27)
  (Wrd21.Obj) = (current_block [OBJECT_50_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd8.Obj) = (current_block [OBJECT_50_1]);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (Wrd13.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_8 7
#define LABEL_51_5 9
#define ENVIRONMENT_LABEL_51_3 21
#define DEBUGGING_LABEL_51_2 20
#define OBJECT_51_2 19
#define OBJECT_51_1 18
#define OBJECT_51_0 17
#define EXECUTE_CACHE_51_9 11
#define EXECUTE_CACHE_51_7 13
#define FREE_REFERENCE_51_0 16
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_51_4);
      goto string__time_zone_3;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__time_zone_7)
DEFLABEL (string__time_zone_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_8);

DEFLABEL (label_10)
  (Wrd7.Obj) = (current_block [OBJECT_51_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_9)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  Rvl = ((Wrd15.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_9 9
#define LABEL_52_11 11
#define LABEL_52_13 13
#define LABEL_52_14 15
#define LABEL_52_16 17
#define ENVIRONMENT_LABEL_52_3 30
#define DEBUGGING_LABEL_52_2 29
#define EXECUTE_CACHE_52_15 19
#define EXECUTE_CACHE_52_12 21
#define EXECUTE_CACHE_52_10 23
#define EXECUTE_CACHE_52_8 25
#define EXECUTE_CACHE_52_6 27
#define FREE_REFERENCES_LABEL_52_0 18
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_52_4);
      goto parser_time_zone_11;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_52_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_52_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_52_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_52_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_time_zone_14)
DEFLABEL (parser_time_zone_11)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_14);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_52_16);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_9 9
#define LABEL_53_12 11
#define LABEL_53_10 13
#define LABEL_53_13 15
#define LABEL_53_15 17
#define LABEL_53_16 19
#define LABEL_53_19 21
#define LABEL_53_18 23
#define LABEL_53_20 25
#define LABEL_53_22 27
#define LABEL_53_26 29
#define LABEL_53_23 31
#define LABEL_53_24 33
#define LABEL_53_28 35
#define LABEL_53_27 37
#define LABEL_53_29 39
#define LABEL_53_30 41
#define LABEL_53_31 43
#define ENVIRONMENT_LABEL_53_3 70
#define DEBUGGING_LABEL_53_2 69
#define OBJECT_53_7 68
#define OBJECT_53_6 67
#define OBJECT_53_5 66
#define OBJECT_53_4 65
#define OBJECT_53_3 64
#define OBJECT_53_2 63
#define OBJECT_53_1 62
#define OBJECT_53_0 61
#define EXECUTE_CACHE_53_32 45
#define EXECUTE_CACHE_53_25 47
#define EXECUTE_CACHE_53_21 49
#define EXECUTE_CACHE_53_17 51
#define EXECUTE_CACHE_53_14 53
#define EXECUTE_CACHE_53_11 55
#define EXECUTE_CACHE_53_8 57
#define EXECUTE_CACHE_53_6 59
#define FREE_REFERENCES_LABEL_53_0 44
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_53_4);
      goto parser_numeric_time_zone_29;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_25;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_53_12);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_53_15);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_53_16);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_53_19);
      goto lambda_23;

    case 10:
      current_block = (Rpc - LABEL_53_18);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_53_20);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_53_22);
      goto continuation_22;

    case 13:
      current_block = (Rpc - LABEL_53_26);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_53_23);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_53_24);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_53_28);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_53_27);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_53_29);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_53_30);
      goto label_33;

    case 20:
      current_block = (Rpc - LABEL_53_31);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_numeric_time_zone_36)
DEFLABEL (parser_numeric_time_zone_29)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_53_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_18;

DEFLABEL (label_40)
  goto lambda_24;

DEFLABEL (lambda_37)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_53_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_53_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_18;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_53_18);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_38)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_53_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_13);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_20);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_53_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_56;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_56;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_55)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_9)
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_53)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_52;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_52;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd29.Lng) = ((Wrd30.Lng) + (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_52;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_51)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_26]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_53_7]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_50;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_50;
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_53_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_2]);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_45)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.Lng) = (0 - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_44;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_47)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_46)
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd5.Obj) = (Rsp [0]);
  goto label_47;

DEFLABEL (label_50)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_53_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_31]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_30]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_53_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 2);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_53_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_28]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_23);
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_39)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_53_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_53_22);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define LABEL_54_9 9
#define LABEL_54_12 11
#define LABEL_54_10 13
#define LABEL_54_16 15
#define LABEL_54_13 17
#define LABEL_54_19 19
#define LABEL_54_22 21
#define LABEL_54_24 23
#define LABEL_54_26 25
#define LABEL_54_27 27
#define LABEL_54_15 29
#define LABEL_54_29 31
#define LABEL_54_18 33
#define LABEL_54_30 35
#define LABEL_54_31 37
#define LABEL_54_20 39
#define TAG_54_21 18
#define LABEL_54_32 41
#define LABEL_54_28 43
#define LABEL_54_25 45
#define LABEL_54_34 47
#define ENVIRONMENT_LABEL_54_3 72
#define DEBUGGING_LABEL_54_2 71
#define OBJECT_54_4 70
#define OBJECT_54_3 69
#define OBJECT_54_2 68
#define OBJECT_54_1 67
#define OBJECT_54_0 66
#define EXECUTE_CACHE_54_33 49
#define EXECUTE_CACHE_54_23 51
#define EXECUTE_CACHE_54_17 53
#define EXECUTE_CACHE_54_14 55
#define EXECUTE_CACHE_54_11 57
#define EXECUTE_CACHE_54_8 59
#define EXECUTE_CACHE_54_6 61
#define FREE_REFERENCE_54_1 64
#define FREE_REFERENCE_54_0 65
#define FREE_REFERENCES_LABEL_54_0 48
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_54_4);
      goto parser_named_time_zone_28;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_24;

    case 3:
      current_block = (Rpc - LABEL_54_9);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_54_12);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_54_16);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_54_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_54_19);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_54_22);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_54_24);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_54_26);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_54_27);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_54_15);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_54_29);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_54_18);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_54_30);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_54_31);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_54_20);
      goto lambda_42;

    case 19:
      current_block = (Rpc - LABEL_54_32);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_54_28);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_54_25);
      goto lambda_22;

    case 22:
      current_block = (Rpc - LABEL_54_34);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_named_time_zone_39)
DEFLABEL (parser_named_time_zone_28)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_54_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_15;

DEFLABEL (label_44)
  goto lambda_23;

DEFLABEL (lambda_40)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_54_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_51;
  Wrd8 = Wrd12;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_54_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_54_28);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;
  Wrd10 = Wrd14;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_17]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_29])), (Wrd11.pObj));

DEFLABEL (label_33)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_16])), (Wrd9.pObj));

DEFLABEL (label_30)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_54_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_53;
  Wrd27 = Wrd31;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_47;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_27])), (Wrd28.pObj));

DEFLABEL (label_37)
  (Wrd27.Obj) = Rvl;
  goto label_52;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_54_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_25]))));
  (* (--Rsp)) = (Wrd37.Obj);
  goto lambda_15;

DEFLABEL (lambda_41)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_54_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_13);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd26.Obj) = ((SCHEME_OBJECT) 10);
  if (! ((Wrd26.uLng) == 10))
    goto label_57;
  Wrd22 = Wrd7;
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_57;
  (Wrd18.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_56)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_20])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_55;
  Wrd37 = Wrd41;

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_23]));

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_22])), (Wrd38.pObj));

DEFLABEL (label_32)
  (Wrd37.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_54_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_18);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_63;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_62)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_60)
  (Wrd30.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd27.pObj)));

DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd25.Obj);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_4]), 1);

DEFLABEL (label_35)
  (Wrd17.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 1);

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd25.Obj) = ((SCHEME_OBJECT) 0);
  goto label_59;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_54_20);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_66;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_33]));

DEFLABEL (label_66)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_4]), 1);

DEFLABEL (label_36)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_43)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_54_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_54_34);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_8 7
#define LABEL_55_7 9
#define LABEL_55_12 11
#define LABEL_55_15 13
#define LABEL_55_16 15
#define LABEL_55_10 17
#define LABEL_55_18 19
#define LABEL_55_19 21
#define LABEL_55_20 23
#define LABEL_55_21 25
#define LABEL_55_22 27
#define LABEL_55_23 29
#define LABEL_55_24 31
#define LABEL_55_25 33
#define LABEL_55_26 35
#define LABEL_55_27 37
#define LABEL_55_28 39
#define LABEL_55_29 41
#define LABEL_55_30 43
#define LABEL_55_31 45
#define LABEL_55_32 47
#define LABEL_55_33 49
#define LABEL_55_34 51
#define LABEL_55_14 53
#define LABEL_55_37 55
#define ENVIRONMENT_LABEL_55_3 90
#define DEBUGGING_LABEL_55_2 89
#define OBJECT_55_15 88
#define OBJECT_55_14 87
#define OBJECT_55_13 86
#define OBJECT_55_12 85
#define OBJECT_55_11 84
#define OBJECT_55_10 83
#define OBJECT_55_9 82
#define OBJECT_55_8 81
#define OBJECT_55_7 80
#define OBJECT_55_6 79
#define OBJECT_55_5 78
#define OBJECT_55_4 77
#define OBJECT_55_3 76
#define OBJECT_55_2 75
#define OBJECT_55_1 74
#define OBJECT_55_0 73
#define EXECUTE_CACHE_55_36 57
#define EXECUTE_CACHE_55_35 59
#define EXECUTE_CACHE_55_17 61
#define EXECUTE_CACHE_55_13 63
#define EXECUTE_CACHE_55_11 65
#define EXECUTE_CACHE_55_9 67
#define EXECUTE_CACHE_55_6 69
#define FREE_REFERENCE_55_0 72
#define FREE_REFERENCES_LABEL_55_0 56
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd159;
  machine_word Wrd101;
  machine_word Wrd89;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd152;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd146;
  machine_word Wrd142;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd197;
  machine_word Wrd187;
  machine_word Wrd188;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd189;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd181;
  machine_word Wrd179;
  machine_word Wrd172;
  machine_word Wrd165;
  machine_word Wrd168;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_55_4);
      goto parser_military_time_zone_33;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_8);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_55_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_55_15);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_55_16);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_55_10);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_55_18);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_55_19);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_55_20);
      goto label_47;

    case 11:
      current_block = (Rpc - LABEL_55_21);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_55_22);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_55_23);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_55_24);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_55_25);
      goto label_43;

    case 16:
      current_block = (Rpc - LABEL_55_26);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_55_27);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_55_28);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_55_29);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_55_30);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_55_31);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_55_32);
      goto label_40;

    case 23:
      current_block = (Rpc - LABEL_55_33);
      goto label_41;

    case 24:
      current_block = (Rpc - LABEL_55_34);
      goto continuation_10;

    case 25:
      current_block = (Rpc - LABEL_55_14);
      goto continuation_8;

    case 26:
      current_block = (Rpc - LABEL_55_37);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_military_time_zone_50)
DEFLABEL (parser_military_time_zone_33)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_64;
  Wrd8 = Wrd12;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_12);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd26.Obj) = ((SCHEME_OBJECT) 10);
  if (! ((Wrd26.uLng) == 10))
    goto label_61;
  Wrd22 = Wrd7;
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_61;
  (Wrd16.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_60)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_59;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_59;
  (Wrd34.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd35.Obj) = (MAKE_OBJECT (2, (Wrd34.uLng)));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_55_14);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_55_14]))
    goto label_54;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_35]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_55_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_29]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_55_13]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_51)
  (Wrd159.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd159.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_36]));

DEFLABEL (label_52)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_28]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_55_12]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_53)
  (Wrd101.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd101.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_35]));

DEFLABEL (label_54)
  (Wrd19.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd20.Obj) = (current_block [OBJECT_55_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);

DEFLABEL (label_57)
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd16.pObj)));

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd14.Obj);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_37]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_55_37);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd43.Obj) = (current_block [OBJECT_55_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_55_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_36)
  (Wrd16.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_10);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_8])), (Wrd9.pObj));

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_55_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 2))
    goto label_72;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd46.Obj) = (MAKE_OBJECT (26, (Wrd49.uLng)));

DEFLABEL (label_71)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_70;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd61.Lng) = ((Wrd62.Lng) - 65L);
  if (! (LONG_TO_FIXNUM_P (Wrd61.Lng)))
    goto label_70;
  (Wrd59.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));

DEFLABEL (label_69)
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_68;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd71.Lng) = ((Wrd72.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd71.Lng)))
    goto label_68;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));

DEFLABEL (label_67)
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_66;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd80.Lng) = (0 - (Wrd83.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd80.Lng)))
    goto label_66;
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));

DEFLABEL (label_65)
  (Wrd89.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  goto label_57;

DEFLABEL (label_66)
  (Wrd73.Obj) = (current_block [OBJECT_55_0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_33]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_41)
  (Wrd78.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_32]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_40)
  (Wrd69.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd55.Obj) = (current_block [OBJECT_55_11]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_31]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_39)
  (Wrd59.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_30]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 1);

DEFLABEL (label_38)
  (Wrd46.Obj) = Rvl;
  goto label_71;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_55_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_23]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (current_block [OBJECT_55_10]);
  (* (--Rsp)) = (Wrd95.Obj);
  goto label_51;

DEFLABEL (label_73)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_22]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_55_9]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto label_53;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_55_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 2))
    goto label_81;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd104.Obj));
  (Wrd106.Obj) = (MAKE_OBJECT (26, (Wrd109.uLng)));

DEFLABEL (label_80)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd120.uLng) == 26))
    goto label_79;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd121.Lng) = ((Wrd122.Lng) - 75L);
  if (! (LONG_TO_FIXNUM_P (Wrd121.Lng)))
    goto label_79;
  (Wrd119.Obj) = (LONG_TO_FIXNUM (Wrd121.Lng));

DEFLABEL (label_78)
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd131.uLng) == 26))
    goto label_77;
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  (Wrd132.Lng) = ((Wrd133.Lng) + 10L);
  if (! (LONG_TO_FIXNUM_P (Wrd132.Lng)))
    goto label_77;
  (Wrd130.Obj) = (LONG_TO_FIXNUM (Wrd132.Lng));

DEFLABEL (label_76)
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd142.uLng) == 26))
    goto label_75;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  (Wrd143.Lng) = (0 - (Wrd146.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd143.Lng)))
    goto label_75;
  (Wrd141.Obj) = (LONG_TO_FIXNUM (Wrd143.Lng));

DEFLABEL (label_74)
  (Wrd152.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  goto label_57;

DEFLABEL (label_75)
  (Wrd136.Obj) = (current_block [OBJECT_55_0]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_27]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_45)
  (Wrd141.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd126.Obj) = (current_block [OBJECT_55_8]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_26]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_44)
  (Wrd130.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd115.Obj) = (current_block [OBJECT_55_7]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_25]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (Wrd119.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_24]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 1);

DEFLABEL (label_42)
  (Wrd106.Obj) = Rvl;
  goto label_80;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_55_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_18]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd158.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd158.Obj);
  goto label_51;

DEFLABEL (label_82)
  (Wrd14.Obj) = (current_block [OBJECT_55_5]);
  goto label_56;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_55_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd163.Obj) = (Rsp [0]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 2))
    goto label_88;
  (Wrd168.uLng) = (OBJECT_DATUM (Wrd163.Obj));
  (Wrd165.Obj) = (MAKE_OBJECT (26, (Wrd168.uLng)));

DEFLABEL (label_87)
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd179.uLng) == 26))
    goto label_86;
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  (Wrd180.Lng) = ((Wrd181.Lng) - 78L);
  if (! (LONG_TO_FIXNUM_P (Wrd180.Lng)))
    goto label_86;
  (Wrd178.Obj) = (LONG_TO_FIXNUM (Wrd180.Lng));

DEFLABEL (label_85)
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd189.uLng) == 26))
    goto label_84;
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd178.Obj));
  (Wrd190.Lng) = ((Wrd191.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd190.Lng)))
    goto label_84;
  (Wrd188.Obj) = (LONG_TO_FIXNUM (Wrd190.Lng));

DEFLABEL (label_83)
  (Wrd197.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  goto label_57;

DEFLABEL (label_84)
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_21]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_48)
  (Wrd188.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd174.Obj) = (current_block [OBJECT_55_4]);
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_20]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_47)
  (Wrd178.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_19]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 1);

DEFLABEL (label_46)
  (Wrd165.Obj) = Rvl;
  goto label_87;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define TAG_56_6 1
#define ENVIRONMENT_LABEL_56_3 12
#define DEBUGGING_LABEL_56_2 11
#define EXECUTE_CACHE_56_8 7
#define EXECUTE_CACHE_56_7 9
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_56_4);
      goto decoded_time__ctime_string_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__ctime_string_4)
DEFLABEL (decoded_time__ctime_string_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_56_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_7 5
#define LABEL_57_5 7
#define LABEL_57_6 9
#define LABEL_57_9 11
#define LABEL_57_14 13
#define LABEL_57_12 15
#define LABEL_57_13 17
#define LABEL_57_17 19
#define LABEL_57_16 21
#define LABEL_57_19 23
#define LABEL_57_20 25
#define LABEL_57_18 27
#define LABEL_57_22 29
#define LABEL_57_24 31
#define LABEL_57_23 33
#define LABEL_57_26 35
#define LABEL_57_28 37
#define LABEL_57_27 39
#define LABEL_57_29 41
#define LABEL_57_31 43
#define LABEL_57_30 45
#define LABEL_57_32 47
#define LABEL_57_33 49
#define ENVIRONMENT_LABEL_57_3 75
#define DEBUGGING_LABEL_57_2 74
#define OBJECT_57_10 73
#define OBJECT_57_9 72
#define OBJECT_57_8 71
#define OBJECT_57_7 70
#define OBJECT_57_6 69
#define OBJECT_57_5 68
#define OBJECT_57_4 67
#define OBJECT_57_3 66
#define OBJECT_57_2 65
#define OBJECT_57_1 64
#define OBJECT_57_0 63
#define EXECUTE_CACHE_57_25 51
#define EXECUTE_CACHE_57_21 53
#define EXECUTE_CACHE_57_15 55
#define EXECUTE_CACHE_57_11 57
#define EXECUTE_CACHE_57_10 59
#define EXECUTE_CACHE_57_8 61
#define FREE_REFERENCES_LABEL_57_0 50
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_57_4);
      goto write_decoded_time_as_ctime_24;

    case 1:
      current_block = (Rpc - LABEL_57_7);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_57_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_57_14);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_57_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_57_17);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_57_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_57_19);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_57_20);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_57_18);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_57_22);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_57_24);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_57_23);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_57_26);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_57_28);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_57_27);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_57_29);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_57_31);
      goto label_32;

    case 21:
      current_block = (Rpc - LABEL_57_30);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_57_32);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_57_33);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_ctime_35)
DEFLABEL (write_decoded_time_as_ctime_24)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_44;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_44;
  (Wrd14.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_42;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_42;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_57_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_38;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd27.Lng) < 10L)
    goto label_37;

DEFLABEL (label_36)
  (Wrd30.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_21]));

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_57_17);
  goto label_36;

DEFLABEL (label_38)
  (Wrd38.Obj) = (current_block [OBJECT_57_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_57_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_57_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_57_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_57_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_57_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_52;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_52;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_57_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_57_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_50;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_50;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_57_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_57_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_48;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_57_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_57_32);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_21]));

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_57_9]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_31]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_57_8]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_28]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_57_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_8 5
#define LABEL_58_5 7
#define LABEL_58_6 9
#define ENVIRONMENT_LABEL_58_3 22
#define DEBUGGING_LABEL_58_2 21
#define OBJECT_58_3 20
#define OBJECT_58_2 19
#define OBJECT_58_1 18
#define OBJECT_58_0 17
#define EXECUTE_CACHE_58_10 11
#define EXECUTE_CACHE_58_9 13
#define EXECUTE_CACHE_58_7 15
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_58_4);
      goto ctime_string__decoded_time_6;

    case 1:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ctime_string__decoded_time_9)
DEFLABEL (ctime_string__decoded_time_6)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  if ((Wrd12.Obj) == (current_block [OBJECT_58_0]))
    goto label_11;
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_10;

DEFLABEL (label_11)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_8);

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_13)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 12
#define DEBUGGING_LABEL_59_2 11
#define EXECUTE_CACHE_59_7 7
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_59_4);
      goto universal_time__local_ctime_string_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__local_ctime_string_4)
DEFLABEL (universal_time__local_ctime_string_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 12
#define DEBUGGING_LABEL_60_2 11
#define EXECUTE_CACHE_60_7 7
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_60_4);
      goto universal_time__global_ctime_string_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__global_ctime_string_4)
DEFLABEL (universal_time__global_ctime_string_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 12
#define DEBUGGING_LABEL_61_2 11
#define EXECUTE_CACHE_61_7 7
#define EXECUTE_CACHE_61_6 9
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_61_4);
      goto ctime_string__universal_time_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ctime_string__universal_time_4)
DEFLABEL (ctime_string__universal_time_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 12
#define DEBUGGING_LABEL_62_2 11
#define EXECUTE_CACHE_62_7 7
#define EXECUTE_CACHE_62_6 9
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_62_4);
      goto file_time__local_ctime_string_1;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_ctime_string_4)
DEFLABEL (file_time__local_ctime_string_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 12
#define DEBUGGING_LABEL_63_2 11
#define EXECUTE_CACHE_63_7 7
#define EXECUTE_CACHE_63_6 9
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_63_4);
      goto file_time__global_ctime_string_1;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_ctime_string_4)
DEFLABEL (file_time__global_ctime_string_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 12
#define DEBUGGING_LABEL_64_2 11
#define EXECUTE_CACHE_64_7 7
#define EXECUTE_CACHE_64_6 9
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_64_4);
      goto ctime_string__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ctime_string__file_time_4)
DEFLABEL (ctime_string__file_time_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_5 3
#define LABEL_65_4 5
#define LABEL_65_6 7
#define TAG_65_7 2
#define LABEL_65_9 9
#define LABEL_65_13 11
#define LABEL_65_11 13
#define LABEL_65_16 15
#define LABEL_65_19 17
#define LABEL_65_14 19
#define LABEL_65_23 21
#define LABEL_65_20 23
#define TAG_65_21 10
#define LABEL_65_22 25
#define LABEL_65_24 27
#define LABEL_65_25 29
#define TAG_65_26 13
#define LABEL_65_27 31
#define LABEL_65_33 33
#define LABEL_65_28 35
#define LABEL_65_30 37
#define LABEL_65_31 39
#define LABEL_65_36 41
#define LABEL_65_41 43
#define LABEL_65_34 45
#define LABEL_65_39 47
#define TAG_65_40 22
#define LABEL_65_38 49
#define LABEL_65_44 51
#define LABEL_65_45 53
#define LABEL_65_42 55
#define LABEL_65_46 57
#define LABEL_65_48 59
#define LABEL_65_49 61
#define LABEL_65_51 63
#define LABEL_65_52 65
#define LABEL_65_53 67
#define LABEL_65_54 69
#define LABEL_65_55 71
#define LABEL_65_56 73
#define ENVIRONMENT_LABEL_65_3 114
#define DEBUGGING_LABEL_65_2 113
#define OBJECT_65_9 112
#define OBJECT_65_8 111
#define OBJECT_65_7 110
#define OBJECT_65_6 109
#define OBJECT_65_5 108
#define OBJECT_65_4 107
#define OBJECT_65_3 106
#define OBJECT_65_2 105
#define OBJECT_65_1 104
#define OBJECT_65_0 103
#define EXECUTE_CACHE_65_57 75
#define EXECUTE_CACHE_65_50 77
#define EXECUTE_CACHE_65_47 79
#define EXECUTE_CACHE_65_43 81
#define EXECUTE_CACHE_65_37 83
#define EXECUTE_CACHE_65_35 85
#define EXECUTE_CACHE_65_32 87
#define EXECUTE_CACHE_65_29 89
#define EXECUTE_CACHE_65_18 91
#define EXECUTE_CACHE_65_17 93
#define EXECUTE_CACHE_65_15 95
#define EXECUTE_CACHE_65_12 97
#define EXECUTE_CACHE_65_10 99
#define EXECUTE_CACHE_65_8 101
#define FREE_REFERENCES_LABEL_65_0 74
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_65_4);
      goto parser_ctime_48;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto lambda_58;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_65_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_65_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_65_19);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_65_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_65_23);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_65_20);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_65_22);
      goto continuation_30;

    case 12:
      current_block = (Rpc - LABEL_65_24);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_65_25);
      goto lambda_60;

    case 14:
      current_block = (Rpc - LABEL_65_27);
      goto continuation_38;

    case 15:
      current_block = (Rpc - LABEL_65_33);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_65_28);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_65_30);
      goto continuation_31;

    case 18:
      current_block = (Rpc - LABEL_65_31);
      goto continuation_39;

    case 19:
      current_block = (Rpc - LABEL_65_36);
      goto continuation_32;

    case 20:
      current_block = (Rpc - LABEL_65_41);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_65_34);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_65_39);
      goto lambda_61;

    case 23:
      current_block = (Rpc - LABEL_65_38);
      goto continuation_33;

    case 24:
      current_block = (Rpc - LABEL_65_44);
      goto continuation_34;

    case 25:
      current_block = (Rpc - LABEL_65_45);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_65_42);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_65_46);
      goto continuation_15;

    case 28:
      current_block = (Rpc - LABEL_65_48);
      goto continuation_17;

    case 29:
      current_block = (Rpc - LABEL_65_49);
      goto continuation_16;

    case 30:
      current_block = (Rpc - LABEL_65_51);
      goto label_50;

    case 31:
      current_block = (Rpc - LABEL_65_52);
      goto label_51;

    case 32:
      current_block = (Rpc - LABEL_65_53);
      goto label_52;

    case 33:
      current_block = (Rpc - LABEL_65_54);
      goto label_53;

    case 34:
      current_block = (Rpc - LABEL_65_55);
      goto label_54;

    case 35:
      current_block = (Rpc - LABEL_65_56);
      goto label_55;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_ctime_57)
DEFLABEL (parser_ctime_48)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_63;

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_6])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  goto label_62;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_65_6);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_65_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_20])));
  Rhp += 4;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd28 = Wrd21;
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [5]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_65_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_25])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_65_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_37;

DEFLABEL (label_64)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_32]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_65_31);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_29;

DEFLABEL (label_65)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_37;

DEFLABEL (label_66)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_23);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_16);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_59)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_65_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_65_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_65_28);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;

DEFLABEL (label_69)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_65_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_35]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_34);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_72;

DEFLABEL (label_71)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_65_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_42]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_43]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_65_42);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;

DEFLABEL (label_73)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_65_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_46]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_47]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_65_46);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_75;
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_48]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_49]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [11]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_50]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_65_49);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_87;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_87;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_85;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_85;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_84)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_83;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_83;
  (Wrd39.Obj) = ((Wrd43.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_82)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_81;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_81;
  (Wrd55.Obj) = ((Wrd59.pObj) [4]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_80)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_79;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd77.Lng))))
    goto label_79;
  (Wrd71.Obj) = ((Wrd75.pObj) [5]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_78)
  (Wrd94.Obj) = (Rsp [5]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_77;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd93.Lng))))
    goto label_77;
  (Wrd87.Obj) = ((Wrd91.pObj) [6]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_76)
  (Wrd102.Obj) = (Rsp [12]);
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd101.Obj) = ((Wrd103.pObj) [2]);
  (Rsp [6]) = (Wrd101.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_57]));

DEFLABEL (label_77)
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.Obj) = (current_block [OBJECT_65_9]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_56]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.Obj) = (current_block [OBJECT_65_8]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_55]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_65_7]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_54]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_65_6]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_53]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_65_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_52]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_51]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_65_48);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_65_25);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_65_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_37]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_65_36);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_39])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd20.Obj) = ((Wrd8.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  goto lambda_29;

DEFLABEL (label_88)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_38]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_65_38);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_65_39);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_65_44);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_6 5
#define LABEL_66_8 7
#define LABEL_66_5 9
#define ENVIRONMENT_LABEL_66_3 21
#define DEBUGGING_LABEL_66_2 20
#define OBJECT_66_2 19
#define OBJECT_66_1 18
#define OBJECT_66_0 17
#define EXECUTE_CACHE_66_9 11
#define EXECUTE_CACHE_66_7 13
#define FREE_REFERENCE_66_0 16
#define FREE_REFERENCES_LABEL_66_0 10
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_66_4);
      goto iso8601_string__decoded_time_3;

    case 1:
      current_block = (Rpc - LABEL_66_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iso8601_string__decoded_time_7)
DEFLABEL (iso8601_string__decoded_time_3)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_8);

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_9)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_6])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_6 5
#define LABEL_67_8 7
#define LABEL_67_5 9
#define ENVIRONMENT_LABEL_67_3 21
#define DEBUGGING_LABEL_67_2 20
#define OBJECT_67_2 19
#define OBJECT_67_1 18
#define OBJECT_67_0 17
#define EXECUTE_CACHE_67_9 11
#define EXECUTE_CACHE_67_7 13
#define FREE_REFERENCE_67_0 16
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_67_4);
      goto xml_rpc_iso8601_string__decoded_time_3;

    case 1:
      current_block = (Rpc - LABEL_67_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (xml_rpc_iso8601_string__decoded_time_7)
DEFLABEL (xml_rpc_iso8601_string__decoded_time_3)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_8);

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_9)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define TAG_68_6 1
#define ENVIRONMENT_LABEL_68_3 12
#define DEBUGGING_LABEL_68_2 11
#define EXECUTE_CACHE_68_8 7
#define EXECUTE_CACHE_68_7 9
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_68_4);
      goto decoded_time__iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__iso8601_string_4)
DEFLABEL (decoded_time__iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_68_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define TAG_69_6 1
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define EXECUTE_CACHE_69_8 7
#define EXECUTE_CACHE_69_7 9
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_69_4);
      goto decoded_time__xml_rpc_iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__xml_rpc_iso8601_string_4)
DEFLABEL (decoded_time__xml_rpc_iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_69_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_69_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_7 7
#define LABEL_70_9 9
#define ENVIRONMENT_LABEL_70_3 21
#define DEBUGGING_LABEL_70_2 20
#define OBJECT_70_0 19
#define EXECUTE_CACHE_70_11 11
#define EXECUTE_CACHE_70_10 13
#define EXECUTE_CACHE_70_8 15
#define EXECUTE_CACHE_70_6 17
#define FREE_REFERENCES_LABEL_70_0 10
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_70_4);
      goto write_decoded_time_as_iso8601_basic_3;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_70_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_iso8601_basic_6)
DEFLABEL (write_decoded_time_as_iso8601_basic_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define LABEL_71_9 9
#define ENVIRONMENT_LABEL_71_3 21
#define DEBUGGING_LABEL_71_2 20
#define OBJECT_71_0 19
#define EXECUTE_CACHE_71_11 11
#define EXECUTE_CACHE_71_10 13
#define EXECUTE_CACHE_71_8 15
#define EXECUTE_CACHE_71_6 17
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_71_4);
      goto write_decoded_time_as_iso8601_extended_3;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_71_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_iso8601_extended_6)
DEFLABEL (write_decoded_time_as_iso8601_extended_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_71_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_7 7
#define ENVIRONMENT_LABEL_72_3 17
#define DEBUGGING_LABEL_72_2 16
#define OBJECT_72_0 15
#define EXECUTE_CACHE_72_9 9
#define EXECUTE_CACHE_72_8 11
#define EXECUTE_CACHE_72_6 13
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_72_4);
      goto write_decoded_time_as_xml_rpc_iso8601_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_as_xml_rpc_iso8601_5)
DEFLABEL (write_decoded_time_as_xml_rpc_iso8601_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_5 7
#define LABEL_73_9 9
#define LABEL_73_8 11
#define LABEL_73_11 13
#define ENVIRONMENT_LABEL_73_3 24
#define DEBUGGING_LABEL_73_2 23
#define OBJECT_73_3 22
#define OBJECT_73_2 21
#define OBJECT_73_1 20
#define OBJECT_73_0 19
#define EXECUTE_CACHE_73_10 15
#define EXECUTE_CACHE_73_7 17
#define FREE_REFERENCES_LABEL_73_0 14
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_73_4);
      goto write_decoded_time_iso8601_basic_date_5;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_73_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_73_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_iso8601_basic_date_11)
DEFLABEL (write_decoded_time_iso8601_basic_date_5)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_15;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_15;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_73_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_73_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_73_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_6 5
#define LABEL_74_5 7
#define LABEL_74_8 9
#define LABEL_74_11 11
#define LABEL_74_10 13
#define LABEL_74_13 15
#define LABEL_74_14 17
#define ENVIRONMENT_LABEL_74_3 31
#define DEBUGGING_LABEL_74_2 30
#define OBJECT_74_4 29
#define OBJECT_74_3 28
#define OBJECT_74_2 27
#define OBJECT_74_1 26
#define OBJECT_74_0 25
#define EXECUTE_CACHE_74_12 19
#define EXECUTE_CACHE_74_9 21
#define EXECUTE_CACHE_74_7 23
#define FREE_REFERENCES_LABEL_74_0 18
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_74_4);
      goto write_decoded_time_iso8601_extended_date_7;

    case 1:
      current_block = (Rpc - LABEL_74_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_74_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_74_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_74_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_74_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_74_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_iso8601_extended_date_13)
DEFLABEL (write_decoded_time_iso8601_extended_date_7)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_74_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_74_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_12]));

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_74_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_74_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_74_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_6 5
#define LABEL_75_5 7
#define LABEL_75_9 9
#define LABEL_75_8 11
#define LABEL_75_10 13
#define ENVIRONMENT_LABEL_75_3 22
#define DEBUGGING_LABEL_75_2 21
#define OBJECT_75_3 20
#define OBJECT_75_2 19
#define OBJECT_75_1 18
#define OBJECT_75_0 17
#define EXECUTE_CACHE_75_7 15
#define FREE_REFERENCES_LABEL_75_0 14
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_75_4);
      goto write_decoded_time_iso8601_basic_time_5;

    case 1:
      current_block = (Rpc - LABEL_75_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_75_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_iso8601_basic_time_11)
DEFLABEL (write_decoded_time_iso8601_basic_time_5)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_15;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_15;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_75_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_75_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_75_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_6 5
#define LABEL_76_5 7
#define LABEL_76_8 9
#define LABEL_76_11 11
#define LABEL_76_10 13
#define LABEL_76_12 15
#define LABEL_76_13 17
#define ENVIRONMENT_LABEL_76_3 29
#define DEBUGGING_LABEL_76_2 28
#define OBJECT_76_4 27
#define OBJECT_76_3 26
#define OBJECT_76_2 25
#define OBJECT_76_1 24
#define OBJECT_76_0 23
#define EXECUTE_CACHE_76_9 19
#define EXECUTE_CACHE_76_7 21
#define FREE_REFERENCES_LABEL_76_0 18
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_76_4);
      goto write_decoded_time_iso8601_extended_time_7;

    case 1:
      current_block = (Rpc - LABEL_76_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_76_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_76_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_76_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_76_13);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_iso8601_extended_time_13)
DEFLABEL (write_decoded_time_iso8601_extended_time_7)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_76_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_76_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_76_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_76_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_76_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_10 9
#define LABEL_77_8 11
#define LABEL_77_15 13
#define LABEL_77_7 15
#define LABEL_77_16 17
#define LABEL_77_17 19
#define LABEL_77_11 21
#define LABEL_77_20 23
#define LABEL_77_12 25
#define LABEL_77_19 27
#define LABEL_77_22 29
#define LABEL_77_23 31
#define LABEL_77_25 33
#define LABEL_77_28 35
#define LABEL_77_29 37
#define LABEL_77_30 39
#define ENVIRONMENT_LABEL_77_3 67
#define DEBUGGING_LABEL_77_2 66
#define OBJECT_77_8 65
#define OBJECT_77_7 64
#define OBJECT_77_6 63
#define OBJECT_77_5 62
#define OBJECT_77_4 61
#define OBJECT_77_3 60
#define OBJECT_77_2 59
#define OBJECT_77_1 58
#define OBJECT_77_0 57
#define EXECUTE_CACHE_77_27 41
#define EXECUTE_CACHE_77_26 43
#define EXECUTE_CACHE_77_24 45
#define EXECUTE_CACHE_77_21 47
#define EXECUTE_CACHE_77_18 49
#define EXECUTE_CACHE_77_14 51
#define EXECUTE_CACHE_77_13 53
#define EXECUTE_CACHE_77_9 55
#define FREE_REFERENCES_LABEL_77_0 40
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_77_4);
      goto write_decoded_time_iso8601_zone_21;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_77_10);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_77_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_77_15);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_77_16);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_77_17);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_77_11);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_77_20);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_77_12);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_77_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_77_22);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_77_23);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_77_25);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_77_28);
      goto label_29;

    case 17:
      current_block = (Rpc - LABEL_77_29);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_77_30);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_decoded_time_iso8601_zone_31)
DEFLABEL (write_decoded_time_iso8601_zone_21)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rvl = (current_block [OBJECT_77_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_50;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_50;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_48)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_47;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_47;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_46)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_45;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd26.Lng), 60, (& (Wrd23.Lng))))
    goto label_45;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_77_6);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_43;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd24.Lng) == 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd21.Obj) = (current_block [OBJECT_77_4]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_77_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_77_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_77_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_42;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd19.Lng) < 0)
    goto label_36;

DEFLABEL (label_37)
  (Wrd16.Obj) = (current_block [OBJECT_77_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_35;

DEFLABEL (label_36)
  (Wrd17.Obj) = (current_block [OBJECT_77_7]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_35)
DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_77_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_77_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_77_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_77_25);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_40;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd19.Lng) == 0))
    goto label_39;

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_77_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_29]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_77_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_77_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_77_30);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_27]));

DEFLABEL (label_40)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_42)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_43)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_45)
  (Wrd17.Obj) = (current_block [OBJECT_77_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd6.Obj) = (current_block [OBJECT_77_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd5.Obj) = (Rsp [2]);
  goto label_49;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_77_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_7);
  (Wrd5.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define ENVIRONMENT_LABEL_78_3 12
#define DEBUGGING_LABEL_78_2 11
#define EXECUTE_CACHE_78_7 7
#define EXECUTE_CACHE_78_6 9
#define FREE_REFERENCES_LABEL_78_0 6
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_78_4);
      goto universal_time__local_iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__local_iso8601_string_4)
DEFLABEL (universal_time__local_iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define ENVIRONMENT_LABEL_79_3 12
#define DEBUGGING_LABEL_79_2 11
#define EXECUTE_CACHE_79_7 7
#define EXECUTE_CACHE_79_6 9
#define FREE_REFERENCES_LABEL_79_0 6
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_79_4);
      goto universal_time__global_iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__global_iso8601_string_4)
DEFLABEL (universal_time__global_iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 12
#define DEBUGGING_LABEL_80_2 11
#define EXECUTE_CACHE_80_7 7
#define EXECUTE_CACHE_80_6 9
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_80_4);
      goto iso8601_string__universal_time_1;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iso8601_string__universal_time_4)
DEFLABEL (iso8601_string__universal_time_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 12
#define DEBUGGING_LABEL_81_2 11
#define EXECUTE_CACHE_81_7 7
#define EXECUTE_CACHE_81_6 9
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_81_4);
      goto file_time__local_iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_iso8601_string_4)
DEFLABEL (file_time__local_iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define ENVIRONMENT_LABEL_82_3 12
#define DEBUGGING_LABEL_82_2 11
#define EXECUTE_CACHE_82_7 7
#define EXECUTE_CACHE_82_6 9
#define FREE_REFERENCES_LABEL_82_0 6
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_82_4);
      goto file_time__global_iso8601_string_1;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_iso8601_string_4)
DEFLABEL (file_time__global_iso8601_string_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 12
#define DEBUGGING_LABEL_83_2 11
#define EXECUTE_CACHE_83_7 7
#define EXECUTE_CACHE_83_6 9
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_83_4);
      goto iso8601_string__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iso8601_string__file_time_4)
DEFLABEL (iso8601_string__file_time_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_7 7
#define LABEL_84_8 9
#define TAG_84_9 3
#define LABEL_84_10 11
#define LABEL_84_12 13
#define LABEL_84_14 15
#define TAG_84_15 6
#define LABEL_84_16 17
#define LABEL_84_17 19
#define LABEL_84_19 21
#define LABEL_84_21 23
#define TAG_84_22 10
#define LABEL_84_23 25
#define LABEL_84_26 27
#define TAG_84_27 12
#define LABEL_84_28 29
#define LABEL_84_25 31
#define LABEL_84_29 33
#define LABEL_84_31 35
#define LABEL_84_32 37
#define LABEL_84_34 39
#define TAG_84_35 18
#define LABEL_84_36 41
#define LABEL_84_37 43
#define LABEL_84_39 45
#define LABEL_84_40 47
#define LABEL_84_42 49
#define LABEL_84_45 51
#define LABEL_84_43 53
#define LABEL_84_44 55
#define LABEL_84_46 57
#define LABEL_84_49 59
#define TAG_84_50 28
#define LABEL_84_48 61
#define LABEL_84_51 63
#define ENVIRONMENT_LABEL_84_3 90
#define DEBUGGING_LABEL_84_2 89
#define OBJECT_84_1 88
#define OBJECT_84_0 87
#define EXECUTE_CACHE_84_47 65
#define EXECUTE_CACHE_84_41 67
#define EXECUTE_CACHE_84_38 69
#define EXECUTE_CACHE_84_33 71
#define EXECUTE_CACHE_84_30 73
#define EXECUTE_CACHE_84_24 75
#define EXECUTE_CACHE_84_20 77
#define EXECUTE_CACHE_84_18 79
#define EXECUTE_CACHE_84_13 81
#define EXECUTE_CACHE_84_11 83
#define EXECUTE_CACHE_84_6 85
#define FREE_REFERENCES_LABEL_84_0 64
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_84_4);
      goto parser_iso8601_date_time_50;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_84_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_84_8);
      goto lambda_54;

    case 4:
      current_block = (Rpc - LABEL_84_10);
      goto continuation_28;

    case 5:
      current_block = (Rpc - LABEL_84_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_84_14);
      goto lambda_34;

    case 7:
      current_block = (Rpc - LABEL_84_16);
      goto continuation_35;

    case 8:
      current_block = (Rpc - LABEL_84_17);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_84_19);
      goto continuation_29;

    case 10:
      current_block = (Rpc - LABEL_84_21);
      goto lambda_56;

    case 11:
      current_block = (Rpc - LABEL_84_23);
      goto continuation_40;

    case 12:
      current_block = (Rpc - LABEL_84_26);
      goto lambda_12;

    case 13:
      current_block = (Rpc - LABEL_84_28);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_84_25);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_84_29);
      goto continuation_30;

    case 16:
      current_block = (Rpc - LABEL_84_31);
      goto continuation_36;

    case 17:
      current_block = (Rpc - LABEL_84_32);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_84_34);
      goto lambda_58;

    case 19:
      current_block = (Rpc - LABEL_84_36);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_84_37);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_84_39);
      goto continuation_37;

    case 22:
      current_block = (Rpc - LABEL_84_40);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_84_42);
      goto continuation_14;

    case 24:
      current_block = (Rpc - LABEL_84_45);
      goto lambda_2;

    case 25:
      current_block = (Rpc - LABEL_84_43);
      goto continuation_9;

    case 26:
      current_block = (Rpc - LABEL_84_44);
      goto continuation_15;

    case 27:
      current_block = (Rpc - LABEL_84_46);
      goto continuation_1;

    case 28:
      current_block = (Rpc - LABEL_84_49);
      goto lambda_60;

    case 29:
      current_block = (Rpc - LABEL_84_48);
      goto continuation_16;

    case 30:
      current_block = (Rpc - LABEL_84_51);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_iso8601_date_time_53)
DEFLABEL (parser_iso8601_date_time_50)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_84_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_8])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_11]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_84_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_61;
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_27;

DEFLABEL (label_61)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_84_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_21])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_24]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_84_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (Rsp [0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_34;

DEFLABEL (label_62)
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_39;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_84_8);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_84_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_84_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_26])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_28]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_84_28);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_34])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  ((Wrd16.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_84_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd11.pObj)));
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_12;

DEFLABEL (label_63)
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_20;

DEFLABEL (label_64)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_84_25);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_55)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_84_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_20]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_84_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_65;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_30]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_84_29);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_66;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_84_37);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_84_21);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_84_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_24]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_84_39);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  goto lambda_34;

DEFLABEL (label_67)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [3]);
  (Rsp [0]) = (Wrd19.Obj);
  goto lambda_27;

DEFLABEL (lambda_57)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_84_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_33]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_84_32);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_84_40);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_38]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_84_43);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto lambda_2;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_84_34);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_84_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_84_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_84_49])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd26.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  goto lambda_12;

DEFLABEL (label_70)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_48]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_84_48);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_59)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_84_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_47]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_46);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_84_49);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_84_51);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_7 7
#define TAG_85_8 2
#define LABEL_85_9 9
#define LABEL_85_10 11
#define LABEL_85_12 13
#define TAG_85_13 5
#define LABEL_85_14 15
#define LABEL_85_16 17
#define TAG_85_17 7
#define LABEL_85_18 19
#define LABEL_85_19 21
#define LABEL_85_21 23
#define LABEL_85_22 25
#define TAG_85_23 11
#define LABEL_85_24 27
#define LABEL_85_26 29
#define LABEL_85_28 31
#define LABEL_85_30 33
#define LABEL_85_32 35
#define TAG_85_33 16
#define LABEL_85_31 37
#define LABEL_85_38 39
#define LABEL_85_34 41
#define LABEL_85_35 43
#define LABEL_85_37 45
#define LABEL_85_39 47
#define LABEL_85_40 49
#define LABEL_85_42 51
#define ENVIRONMENT_LABEL_85_3 77
#define DEBUGGING_LABEL_85_2 76
#define OBJECT_85_0 75
#define EXECUTE_CACHE_85_44 53
#define EXECUTE_CACHE_85_43 55
#define EXECUTE_CACHE_85_41 57
#define EXECUTE_CACHE_85_36 59
#define EXECUTE_CACHE_85_29 61
#define EXECUTE_CACHE_85_27 63
#define EXECUTE_CACHE_85_25 65
#define EXECUTE_CACHE_85_20 67
#define EXECUTE_CACHE_85_15 69
#define EXECUTE_CACHE_85_11 71
#define EXECUTE_CACHE_85_6 73
#define FREE_REFERENCES_LABEL_85_0 52
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_85_4);
      goto parser_xml_rpc_iso8601_date_time_39;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_85_9);
      goto continuation_25;

    case 4:
      current_block = (Rpc - LABEL_85_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_85_12);
      goto lambda_44;

    case 6:
      current_block = (Rpc - LABEL_85_14);
      goto continuation_33;

    case 7:
      current_block = (Rpc - LABEL_85_16);
      goto lambda_13;

    case 8:
      current_block = (Rpc - LABEL_85_18);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_85_19);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_85_21);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_85_22);
      goto lambda_46;

    case 12:
      current_block = (Rpc - LABEL_85_24);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_85_26);
      goto continuation_27;

    case 14:
      current_block = (Rpc - LABEL_85_28);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_85_30);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_85_32);
      goto lambda_47;

    case 17:
      current_block = (Rpc - LABEL_85_31);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_85_38);
      goto lambda_4;

    case 19:
      current_block = (Rpc - LABEL_85_34);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_85_35);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_85_37);
      goto continuation_29;

    case 22:
      current_block = (Rpc - LABEL_85_39);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_85_40);
      goto continuation_2;

    case 24:
      current_block = (Rpc - LABEL_85_42);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_xml_rpc_iso8601_date_time_42)
DEFLABEL (parser_xml_rpc_iso8601_date_time_39)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_85_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_12])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_15]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_85_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = Rvl;
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_24;

DEFLABEL (label_49)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_32;

DEFLABEL (lambda_43)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_85_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_16])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_85_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_22])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_85_24);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_13;

DEFLABEL (label_51)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_18;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_85_12);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_20]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_85_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_27]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_85_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_32])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd20.Obj) = ((Wrd8.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd8.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  goto lambda_24;

DEFLABEL (label_52)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_20]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_85_31);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_45)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_85_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_85_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_85_28);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_85_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_43]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_85_42);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto lambda_4;

DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_85_22);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_85_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_36]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_85_35);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd10.Obj);
  goto lambda_13;

DEFLABEL (label_55)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [3]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_85_32);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_20]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_85_37);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_48)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_85_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_41]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_44]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_39);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_7 9
#define LABEL_86_8 11
#define LABEL_86_9 13
#define LABEL_86_10 15
#define LABEL_86_11 17
#define LABEL_86_12 19
#define LABEL_86_13 21
#define LABEL_86_14 23
#define LABEL_86_16 25
#define LABEL_86_17 27
#define LABEL_86_18 29
#define LABEL_86_22 31
#define LABEL_86_19 33
#define LABEL_86_20 35
#define LABEL_86_25 37
#define LABEL_86_26 39
#define LABEL_86_27 41
#define LABEL_86_28 43
#define LABEL_86_29 45
#define LABEL_86_30 47
#define ENVIRONMENT_LABEL_86_3 70
#define DEBUGGING_LABEL_86_2 69
#define OBJECT_86_11 68
#define OBJECT_86_10 67
#define OBJECT_86_9 66
#define OBJECT_86_8 65
#define OBJECT_86_7 64
#define OBJECT_86_6 63
#define OBJECT_86_5 62
#define OBJECT_86_4 61
#define OBJECT_86_3 60
#define OBJECT_86_2 59
#define OBJECT_86_1 58
#define OBJECT_86_0 57
#define EXECUTE_CACHE_86_24 49
#define EXECUTE_CACHE_86_23 51
#define EXECUTE_CACHE_86_21 53
#define EXECUTE_CACHE_86_15 55
#define FREE_REFERENCES_LABEL_86_0 48
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd89;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd73;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd148;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd117;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_86_4);
      goto convert_8601_date_time_25;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_86_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_86_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_86_9);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_86_10);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_86_11);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_86_12);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_86_13);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_86_14);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_86_16);
      goto lambda_20;

    case 12:
      current_block = (Rpc - LABEL_86_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_86_18);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_86_22);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_86_19);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_86_20);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_86_25);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_86_26);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_86_27);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_86_28);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_86_29);
      goto label_42;

    case 22:
      current_block = (Rpc - LABEL_86_30);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (convert_8601_date_time_45)
DEFLABEL (convert_8601_date_time_25)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_65)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_64;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_64;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_63)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_62;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_62;
  (Wrd39.Obj) = ((Wrd43.pObj) [5]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_61)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_60;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_60;
  (Wrd55.Obj) = ((Wrd59.pObj) [4]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_59)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_58;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_58;
  (Wrd71.Obj) = ((Wrd75.pObj) [3]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_57)
  (Wrd94.Obj) = (Rsp [5]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_56;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd93.Lng))))
    goto label_56;
  (Wrd87.Obj) = ((Wrd91.pObj) [2]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_55)
  (Wrd110.Obj) = (Rsp [6]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_54;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd109.Lng))))
    goto label_54;
  (Wrd103.Obj) = ((Wrd107.pObj) [1]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_53)
  (Wrd126.Obj) = (Rsp [7]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_52;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd125.Lng))))
    goto label_52;
  (Wrd117.Obj) = ((Wrd123.pObj) [8]);

DEFLABEL (label_51)
  (Rsp [7]) = (Wrd117.Obj);
  (Wrd135.Obj) = (Rsp [6]);
  (Wrd136.Obj) = (current_block [OBJECT_86_9]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_13]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_35)
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (Wrd141.Obj) = (current_block [OBJECT_86_6]);
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd142.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd144.Obj);
  goto lambda_20;

DEFLABEL (label_47)
  (Wrd145.Obj) = (Rsp [3]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 26))
    goto label_50;
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if ((Wrd148.Lng) < 24L)
    goto label_49;

DEFLABEL (label_48)
  (Wrd151.Obj) = (current_block [OBJECT_86_11]);
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd152.Obj) = (current_block [OBJECT_86_7]);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  goto lambda_20;

DEFLABEL (label_49)
  (Wrd155.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd155.Obj);
  (Wrd156.Obj) = (Rsp [5]);
  (Wrd157.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd157.Obj);
  (Wrd158.Obj) = (Rsp [2]);
  (Wrd159.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd159.Obj);
  (Rsp [4]) = (Wrd158.Obj);
  (Rsp [1]) = (Wrd156.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (label_50)
  (Wrd162.Obj) = (current_block [OBJECT_86_10]);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_14]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_52)
  (Wrd128.Obj) = (Rsp [7]);
  (Wrd129.Obj) = (current_block [OBJECT_86_8]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_12]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_34)
  (Wrd117.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd112.Obj) = (Rsp [6]);
  (Wrd113.Obj) = (current_block [OBJECT_86_7]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_11]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.Obj) = (current_block [OBJECT_86_6]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.Obj) = (current_block [OBJECT_86_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_86_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_86_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_86_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_86_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (lambda_46)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_86_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_86_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_86_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_86_18);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_81;
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_81;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_81;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_86_17);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_86_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_79;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_79;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_78)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_77;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_77;
  (Wrd25.Obj) = ((Wrd31.pObj) [3]);

DEFLABEL (label_76)
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_75;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd49.Lng))))
    goto label_75;
  (Wrd41.Obj) = ((Wrd47.pObj) [4]);

DEFLABEL (label_74)
  (Rsp [4]) = (Wrd41.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_73;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_73;
  (Wrd57.Obj) = ((Wrd63.pObj) [5]);

DEFLABEL (label_72)
  (Rsp [5]) = (Wrd57.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_71;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd81.Lng))))
    goto label_71;
  (Wrd73.Obj) = ((Wrd79.pObj) [6]);

DEFLABEL (label_70)
  (Rsp [6]) = (Wrd73.Obj);
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_69;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd97.Lng))))
    goto label_69;
  (Wrd89.Obj) = ((Wrd95.pObj) [7]);

DEFLABEL (label_68)
  (Rsp [7]) = (Wrd89.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (label_69)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (current_block [OBJECT_86_0]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_30]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_43)
  (Wrd89.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (current_block [OBJECT_86_2]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_29]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_42)
  (Wrd73.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (current_block [OBJECT_86_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_28]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_41)
  (Wrd57.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_86_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_27]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_40)
  (Wrd41.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_86_5]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_26]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_39)
  (Wrd25.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_86_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_80;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_7 7
#define LABEL_87_9 9
#define LABEL_87_13 11
#define LABEL_87_11 13
#define LABEL_87_14 15
#define LABEL_87_18 17
#define LABEL_87_17 19
#define LABEL_87_22 21
#define LABEL_87_19 23
#define LABEL_87_23 25
#define LABEL_87_27 27
#define LABEL_87_24 29
#define LABEL_87_26 31
#define LABEL_87_28 33
#define LABEL_87_33 35
#define LABEL_87_30 37
#define LABEL_87_29 39
#define LABEL_87_35 41
#define LABEL_87_34 43
#define ENVIRONMENT_LABEL_87_3 73
#define DEBUGGING_LABEL_87_2 72
#define OBJECT_87_0 71
#define EXECUTE_CACHE_87_37 45
#define EXECUTE_CACHE_87_32 47
#define EXECUTE_CACHE_87_31 49
#define EXECUTE_CACHE_87_25 51
#define EXECUTE_CACHE_87_21 53
#define EXECUTE_CACHE_87_20 55
#define EXECUTE_CACHE_87_36 57
#define EXECUTE_CACHE_87_16 59
#define EXECUTE_CACHE_87_15 61
#define EXECUTE_CACHE_87_12 63
#define EXECUTE_CACHE_87_10 65
#define EXECUTE_CACHE_87_8 67
#define EXECUTE_CACHE_87_6 69
#define FREE_REFERENCES_LABEL_87_0 44
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_87_4);
      goto parse_basic_8601_date_33;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_7);
      goto continuation_25;

    case 3:
      current_block = (Rpc - LABEL_87_9);
      goto continuation_26;

    case 4:
      current_block = (Rpc - LABEL_87_13);
      goto lambda_24;

    case 5:
      current_block = (Rpc - LABEL_87_11);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_87_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_87_18);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_87_17);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_87_22);
      goto lambda_12;

    case 10:
      current_block = (Rpc - LABEL_87_19);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_87_23);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_87_27);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_87_24);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_87_26);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_87_28);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_87_33);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_87_30);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_87_29);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_87_35);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_87_34);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_basic_8601_date_36)
DEFLABEL (parse_basic_8601_date_33)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_87_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  Rsp = (& (Rsp [1]));
  goto lambda_24;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_87_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rsp = (& (Rsp [2]));
  goto lambda_24;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_87_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (label_41)
  Rsp = (& (Rsp [3]));
  goto lambda_24;

DEFLABEL (lambda_37)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_87_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_87_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  goto lambda_12;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_87_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_87_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  Rsp = (& (Rsp [2]));
  goto lambda_12;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_87_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_87_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_32]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_87_27);
  (Wrd17.Obj) = Rvl;

DEFLABEL (label_46)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto lambda_12;

DEFLABEL (label_47)
  (Wrd17.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_46;

DEFLABEL (lambda_38)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_87_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_87_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_31]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_87_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_36]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_87_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_37]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_87_33);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [0]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_34]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_87_34);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd16.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_49;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_87_29);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_9 7
#define LABEL_88_7 9
#define LABEL_88_13 11
#define LABEL_88_16 13
#define LABEL_88_10 15
#define LABEL_88_14 17
#define LABEL_88_20 19
#define LABEL_88_19 21
#define LABEL_88_17 23
#define LABEL_88_25 25
#define LABEL_88_27 27
#define LABEL_88_21 29
#define LABEL_88_26 31
#define LABEL_88_31 33
#define LABEL_88_30 35
#define LABEL_88_35 37
#define LABEL_88_28 39
#define LABEL_88_34 41
#define LABEL_88_36 43
#define LABEL_88_38 45
#define LABEL_88_32 47
#define LABEL_88_40 49
#define LABEL_88_39 51
#define ENVIRONMENT_LABEL_88_3 84
#define DEBUGGING_LABEL_88_2 83
#define OBJECT_88_1 82
#define OBJECT_88_0 81
#define EXECUTE_CACHE_88_42 53
#define EXECUTE_CACHE_88_37 55
#define EXECUTE_CACHE_88_33 57
#define EXECUTE_CACHE_88_29 59
#define EXECUTE_CACHE_88_41 61
#define EXECUTE_CACHE_88_24 63
#define EXECUTE_CACHE_88_23 65
#define EXECUTE_CACHE_88_22 67
#define EXECUTE_CACHE_88_18 69
#define EXECUTE_CACHE_88_15 71
#define EXECUTE_CACHE_88_12 73
#define EXECUTE_CACHE_88_11 75
#define EXECUTE_CACHE_88_8 77
#define EXECUTE_CACHE_88_6 79
#define FREE_REFERENCES_LABEL_88_0 52
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_88_4);
      goto parse_extended_8601_date_37;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_88_9);
      goto continuation_28;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto continuation_27;

    case 4:
      current_block = (Rpc - LABEL_88_13);
      goto lambda_26;

    case 5:
      current_block = (Rpc - LABEL_88_16);
      goto continuation_30;

    case 6:
      current_block = (Rpc - LABEL_88_10);
      goto continuation_29;

    case 7:
      current_block = (Rpc - LABEL_88_14);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_88_20);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_88_19);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_88_17);
      goto continuation_31;

    case 11:
      current_block = (Rpc - LABEL_88_25);
      goto lambda_13;

    case 12:
      current_block = (Rpc - LABEL_88_27);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_88_21);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_88_26);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_88_31);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_88_30);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_88_35);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_88_28);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_88_34);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_88_36);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_88_38);
      goto continuation_7;

    case 22:
      current_block = (Rpc - LABEL_88_32);
      goto continuation_6;

    case 23:
      current_block = (Rpc - LABEL_88_40);
      goto continuation_8;

    case 24:
      current_block = (Rpc - LABEL_88_39);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_extended_8601_date_40)
DEFLABEL (parse_extended_8601_date_37)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_88_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  goto lambda_26;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_88_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_88_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto lambda_26;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_88_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_18]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_88_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_24]));

DEFLABEL (label_47)
  Rsp = (& (Rsp [3]));
  goto lambda_26;

DEFLABEL (lambda_41)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_88_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_88_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  goto lambda_13;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_88_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_88_21);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (label_51)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_88_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_88_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_88_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_37]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_88_35);
  (Wrd17.Obj) = Rvl;

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  goto lambda_13;

DEFLABEL (label_54)
  (Wrd17.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_53;

DEFLABEL (lambda_42)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_88_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_30);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_88_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_33]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_88_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_88_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_42]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_88_38);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_56)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [0]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_39]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_88_39);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_56;

DEFLABEL (label_58)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_88_34);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_7 9
#define LABEL_89_8 11
#define LABEL_89_11 13
#define LABEL_89_12 15
#define LABEL_89_13 17
#define LABEL_89_14 19
#define LABEL_89_9 21
#define LABEL_89_15 23
#define LABEL_89_16 25
#define LABEL_89_17 27
#define LABEL_89_18 29
#define LABEL_89_19 31
#define LABEL_89_20 33
#define LABEL_89_21 35
#define LABEL_89_22 37
#define LABEL_89_24 39
#define ENVIRONMENT_LABEL_89_3 57
#define DEBUGGING_LABEL_89_2 56
#define OBJECT_89_8 55
#define OBJECT_89_7 54
#define OBJECT_89_6 53
#define OBJECT_89_5 52
#define OBJECT_89_4 51
#define OBJECT_89_3 50
#define OBJECT_89_2 49
#define OBJECT_89_1 48
#define OBJECT_89_0 47
#define EXECUTE_CACHE_89_25 41
#define EXECUTE_CACHE_89_23 43
#define EXECUTE_CACHE_89_10 45
#define FREE_REFERENCES_LABEL_89_0 40
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd57;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_89_4);
      goto week_date__month_date_22;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_89_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_89_12);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_89_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_89_14);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_89_9);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_89_15);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_89_16);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_89_17);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_89_18);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_89_19);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_89_20);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_89_21);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_89_22);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_89_24);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (week_date__month_date_40)
DEFLABEL (week_date__month_date_22)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_61)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_60;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_60;
  (Wrd23.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_59)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_58;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_58;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_89_2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_89_9);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_55)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_54;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_54;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_53)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_52;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_52;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) - (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_52;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_51)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_50;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd51.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_50;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));

DEFLABEL (label_49)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_48;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (multiply_with_overflow ((Wrd62.Lng), 7, (& (Wrd59.Lng))))
    goto label_48;
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));

DEFLABEL (label_47)
  (Wrd63.Obj) = (* (Rsp++));
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_46;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_46;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd72.Lng) = ((Wrd73.Lng) + (Wrd74.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd72.Lng)))
    goto label_46;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));

DEFLABEL (label_45)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_44;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (multiply_with_overflow ((Wrd82.Lng), 86400, (& (Wrd81.Lng))))
    goto label_44;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_43)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_22]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_89_22);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_42;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_42;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_42;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_25]));

DEFLABEL (label_42)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_38)
  (Wrd12.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd76.Obj) = (current_block [OBJECT_89_8]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_21]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_20]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_36)
  (Wrd69.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd52.Obj) = (current_block [OBJECT_89_7]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_19]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_35)
  (Wrd57.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_34)
  (Wrd46.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_32)
  (Wrd25.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_89_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_89_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_26)
  (Wrd37.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_89_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_89_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_89_8);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_72;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_71)
  (Wrd21.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd21.Obj))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_63)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_70;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng))))
    goto label_70;
  (Wrd26.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_69)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_68;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd48.Lng))))
    goto label_68;
  (Wrd42.Obj) = ((Wrd46.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_67)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_66;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd64.Lng))))
    goto label_66;
  (Wrd56.Obj) = ((Wrd62.pObj) [7]);

DEFLABEL (label_65)
  (Wrd72.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (* (Rsp++));
  (Wrd80.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd76.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd76.pObj)));
  goto label_63;

DEFLABEL (label_66)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_89_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_14]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_30)
  (Wrd56.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_89_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_89_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_89_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_71;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define LABEL_90_10 11
#define LABEL_90_11 13
#define LABEL_90_12 15
#define LABEL_90_13 17
#define LABEL_90_8 19
#define LABEL_90_14 21
#define LABEL_90_15 23
#define LABEL_90_16 25
#define LABEL_90_18 27
#define ENVIRONMENT_LABEL_90_3 43
#define DEBUGGING_LABEL_90_2 42
#define OBJECT_90_6 41
#define OBJECT_90_5 40
#define OBJECT_90_4 39
#define OBJECT_90_3 38
#define OBJECT_90_2 37
#define OBJECT_90_1 36
#define OBJECT_90_0 35
#define EXECUTE_CACHE_90_19 29
#define EXECUTE_CACHE_90_17 31
#define EXECUTE_CACHE_90_9 33
#define FREE_REFERENCES_LABEL_90_0 28
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_90_4);
      goto ordinal_date__month_date_16;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_90_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_90_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_90_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_90_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_90_8);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_90_14);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_90_15);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_90_16);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_90_18);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordinal_date__month_date_28)
DEFLABEL (ordinal_date__month_date_16)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_36;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_90_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_34;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_33)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_32;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (multiply_with_overflow ((Wrd22.Lng), 86400, (& (Wrd21.Lng))))
    goto label_32;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_31)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_90_16);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_30;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_30;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_30;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_19]));

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (Wrd12.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (current_block [OBJECT_90_6]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_90_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_90_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_47)
  (Wrd21.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd21.Obj))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_46;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng))))
    goto label_46;
  (Wrd26.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_45)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_44;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd48.Lng))))
    goto label_44;
  (Wrd42.Obj) = ((Wrd46.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_43)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_42;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd64.Lng))))
    goto label_42;
  (Wrd56.Obj) = ((Wrd62.pObj) [7]);

DEFLABEL (label_41)
  (Wrd72.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (* (Rsp++));
  (Wrd80.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd76.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd76.pObj)));
  goto label_39;

DEFLABEL (label_42)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_90_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_23)
  (Wrd56.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_90_5]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_90_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_90_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define LABEL_91_9 9
#define LABEL_91_11 11
#define TAG_91_12 4
#define LABEL_91_13 13
#define LABEL_91_15 15
#define LABEL_91_16 17
#define LABEL_91_18 19
#define TAG_91_19 8
#define LABEL_91_20 21
#define LABEL_91_21 23
#define LABEL_91_22 25
#define LABEL_91_24 27
#define TAG_91_25 12
#define LABEL_91_26 29
#define LABEL_91_29 31
#define ENVIRONMENT_LABEL_91_3 52
#define DEBUGGING_LABEL_91_2 51
#define OBJECT_91_1 50
#define OBJECT_91_0 49
#define EXECUTE_CACHE_91_28 33
#define EXECUTE_CACHE_91_27 35
#define EXECUTE_CACHE_91_23 37
#define EXECUTE_CACHE_91_17 39
#define EXECUTE_CACHE_91_14 41
#define EXECUTE_CACHE_91_10 43
#define EXECUTE_CACHE_91_8 45
#define EXECUTE_CACHE_91_6 47
#define FREE_REFERENCES_LABEL_91_0 32
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_91_4);
      goto parse_basic_8601_zone_25;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_91_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_91_11);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_91_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_91_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_91_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_91_18);
      goto lambda_10;

    case 9:
      current_block = (Rpc - LABEL_91_20);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_91_21);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_91_22);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_91_24);
      goto lambda_31;

    case 13:
      current_block = (Rpc - LABEL_91_26);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_91_29);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_basic_8601_zone_28)
DEFLABEL (parse_basic_8601_zone_25)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd14.Obj) = (current_block [OBJECT_91_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_91_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_4;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_91_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_4;

DEFLABEL (label_34)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_18])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_91_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_24])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_91_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto lambda_10;

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_14;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_91_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_91_15);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_30)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_91_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_91_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_91_21);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_91_24);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_91_29);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd11.Obj) = (current_block [OBJECT_91_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define LABEL_92_9 9
#define LABEL_92_11 11
#define TAG_92_12 4
#define LABEL_92_13 13
#define LABEL_92_15 15
#define LABEL_92_16 17
#define LABEL_92_18 19
#define TAG_92_19 8
#define LABEL_92_20 21
#define LABEL_92_21 23
#define LABEL_92_22 25
#define LABEL_92_24 27
#define TAG_92_25 12
#define LABEL_92_26 29
#define TAG_92_27 13
#define LABEL_92_28 31
#define LABEL_92_30 33
#define LABEL_92_32 35
#define LABEL_92_33 37
#define LABEL_92_35 39
#define TAG_92_36 18
#define LABEL_92_37 41
#define ENVIRONMENT_LABEL_92_3 65
#define DEBUGGING_LABEL_92_2 64
#define OBJECT_92_2 63
#define OBJECT_92_1 62
#define OBJECT_92_0 61
#define EXECUTE_CACHE_92_31 43
#define EXECUTE_CACHE_92_29 45
#define EXECUTE_CACHE_92_34 47
#define EXECUTE_CACHE_92_23 49
#define EXECUTE_CACHE_92_17 51
#define EXECUTE_CACHE_92_14 53
#define EXECUTE_CACHE_92_10 55
#define EXECUTE_CACHE_92_8 57
#define EXECUTE_CACHE_92_6 59
#define FREE_REFERENCES_LABEL_92_0 42
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_92_4);
      goto parse_extended_8601_zone_33;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_92_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_92_11);
      goto lambda_37;

    case 5:
      current_block = (Rpc - LABEL_92_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_92_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_92_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_92_18);
      goto lambda_10;

    case 9:
      current_block = (Rpc - LABEL_92_20);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_92_21);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_92_22);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_92_24);
      goto lambda_15;

    case 13:
      current_block = (Rpc - LABEL_92_26);
      goto lambda_40;

    case 14:
      current_block = (Rpc - LABEL_92_28);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_92_30);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_92_32);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_92_33);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_92_35);
      goto lambda_41;

    case 19:
      current_block = (Rpc - LABEL_92_37);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_extended_8601_zone_36)
DEFLABEL (parse_extended_8601_zone_33)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd14.Obj) = (current_block [OBJECT_92_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_92_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_4;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_92_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_4;

DEFLABEL (label_44)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_18])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_92_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_24])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_26])));
  Rhp += 5;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd21 = Wrd12;
  ((Wrd21.pObj) [2]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  ((Wrd21.pObj) [4]) = (Wrd8.Obj);
  ((Wrd21.pObj) [5]) = Rvl;
  ((Wrd21.pObj) [6]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_28]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_92_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_92_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd7.Obj) = (Rsp [0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_15;

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd16.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_21;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_92_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_92_15);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_38)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_92_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_29]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_92_21);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_39)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_92_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_92_30);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_92_33);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_10;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_92_26);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_92_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_35])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd29 = Wrd16;
  (Wrd32.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd24.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd29.pObj) [4]) = (Wrd24.Obj);
  (Wrd20.Obj) = ((Wrd12.pObj) [5]);
  ((Wrd29.pObj) [5]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_15;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_92_35);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_92_37);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd11.Obj) = (current_block [OBJECT_92_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_6 5
#define LABEL_93_5 7
#define LABEL_93_7 9
#define LABEL_93_8 11
#define LABEL_93_9 13
#define LABEL_93_10 15
#define LABEL_93_11 17
#define LABEL_93_12 19
#define ENVIRONMENT_LABEL_93_3 27
#define DEBUGGING_LABEL_93_2 26
#define OBJECT_93_5 25
#define OBJECT_93_4 24
#define OBJECT_93_3 23
#define OBJECT_93_2 22
#define OBJECT_93_1 21
#define OBJECT_93_0 20
#define FREE_REFERENCES_LABEL_93_0 20
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_93_4);
      goto transform_8601_zone_9;

    case 1:
      current_block = (Rpc - LABEL_93_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_93_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_93_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_93_10);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_93_11);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_93_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_8601_zone_19)
DEFLABEL (transform_8601_zone_9)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_35;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_35;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_34)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_32)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_31;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_31;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd29.Lng) = ((Wrd30.Lng) + (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_31;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_29;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd36.Lng) > 24L)
    goto label_28;

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_26;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd47.Lng))))
    goto label_26;
  (Wrd39.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_25)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_24;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd62.Lng) = (0 - (Wrd65.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_24;
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));

DEFLABEL (label_23)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_22;
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_22;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (multiply_with_overflow ((Wrd76.Lng), (Wrd78.Lng), (& (Wrd75.Lng))))
    goto label_22;
  (Wrd71.Obj) = (LONG_TO_FIXNUM (Wrd75.Lng));

DEFLABEL (label_21)
  (Wrd85.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd81.pObj)));

DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (Wrd71.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd55.Obj) = (current_block [OBJECT_93_5]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (Wrd60.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_93_5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 2);

DEFLABEL (label_14)
  (Wrd39.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_29)
  (Wrd89.Obj) = (current_block [OBJECT_93_4]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_93_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_93_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_7 7
#define LABEL_94_11 9
#define TAG_94_12 3
#define LABEL_94_13 11
#define LABEL_94_9 13
#define LABEL_94_14 15
#define LABEL_94_15 17
#define LABEL_94_17 19
#define TAG_94_18 8
#define LABEL_94_19 21
#define LABEL_94_22 23
#define LABEL_94_23 25
#define TAG_94_24 11
#define LABEL_94_25 27
#define LABEL_94_26 29
#define TAG_94_27 13
#define LABEL_94_28 31
#define LABEL_94_30 33
#define LABEL_94_31 35
#define TAG_94_32 16
#define LABEL_94_33 37
#define LABEL_94_35 39
#define LABEL_94_36 41
#define LABEL_94_38 43
#define LABEL_94_39 45
#define TAG_94_40 21
#define LABEL_94_41 47
#define LABEL_94_42 49
#define TAG_94_43 23
#define LABEL_94_44 51
#define TAG_94_45 24
#define LABEL_94_46 53
#define LABEL_94_47 55
#define LABEL_94_48 57
#define TAG_94_49 27
#define LABEL_94_50 59
#define LABEL_94_51 61
#define LABEL_94_52 63
#define LABEL_94_53 65
#define LABEL_94_55 67
#define ENVIRONMENT_LABEL_94_3 91
#define DEBUGGING_LABEL_94_2 90
#define OBJECT_94_0 89
#define EXECUTE_CACHE_94_54 69
#define EXECUTE_CACHE_94_37 71
#define EXECUTE_CACHE_94_34 73
#define EXECUTE_CACHE_94_29 75
#define EXECUTE_CACHE_94_21 77
#define EXECUTE_CACHE_94_20 79
#define EXECUTE_CACHE_94_16 81
#define EXECUTE_CACHE_94_10 83
#define EXECUTE_CACHE_94_8 85
#define EXECUTE_CACHE_94_6 87
#define FREE_REFERENCES_LABEL_94_0 68
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_94_4);
      goto parse_basic_8601_time_56;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_94_11);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_94_13);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_94_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_94_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_94_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_94_17);
      goto lambda_61;

    case 9:
      current_block = (Rpc - LABEL_94_19);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_94_22);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_94_23);
      goto lambda_22;

    case 12:
      current_block = (Rpc - LABEL_94_25);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_94_26);
      goto lambda_63;

    case 14:
      current_block = (Rpc - LABEL_94_28);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_94_30);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_94_31);
      goto lambda_64;

    case 17:
      current_block = (Rpc - LABEL_94_33);
      goto continuation_34;

    case 18:
      current_block = (Rpc - LABEL_94_35);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_94_36);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_94_38);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_94_39);
      goto lambda_36;

    case 22:
      current_block = (Rpc - LABEL_94_41);
      goto continuation_37;

    case 23:
      current_block = (Rpc - LABEL_94_42);
      goto lambda_66;

    case 24:
      current_block = (Rpc - LABEL_94_44);
      goto lambda_67;

    case 25:
      current_block = (Rpc - LABEL_94_46);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_94_47);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_94_48);
      goto lambda_68;

    case 28:
      current_block = (Rpc - LABEL_94_50);
      goto continuation_41;

    case 29:
      current_block = (Rpc - LABEL_94_51);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_94_52);
      goto continuation_25;

    case 31:
      current_block = (Rpc - LABEL_94_53);
      goto continuation_29;

    case 32:
      current_block = (Rpc - LABEL_94_55);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_basic_8601_time_59)
DEFLABEL (parse_basic_8601_time_56)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_11])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_94_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_94_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_19;

DEFLABEL (label_69)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_23])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_94_25);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_31])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_34]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_94_33);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd18.Obj);
  Rsp = (& (Rsp [6]));
  goto lambda_33;

DEFLABEL (label_70)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_39])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_41]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_94_41);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_48])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [7]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_50]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_29]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_94_50);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd7.Obj);
  (Rsp [7]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd9.Obj);
  Rsp = (& (Rsp [6]));
  goto lambda_36;

DEFLABEL (label_71)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd11.Obj);
  Rsp = (& (Rsp [8]));
  goto lambda_40;

DEFLABEL (label_72)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_60)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_94_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_94_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_94_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_73)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_94_17);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_94_22);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_26])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_28]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_94_28);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_37]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_94_36);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_6;

DEFLABEL (label_75)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (lambda_62)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_94_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_94_30);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_6;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_94_26);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_94_35);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd11.Obj) = (current_block [OBJECT_94_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_42])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  (Wrd27.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  goto lambda_6;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_94_31);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_94_38);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_44])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_46]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_94_46);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_76;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_27;

DEFLABEL (label_76)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_54]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_94_53);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_22;

DEFLABEL (label_77)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_27;

DEFLABEL (lambda_65)
DEFLABEL (lambda_36)
  INTERRUPT_CHECK (26, LABEL_94_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_16]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_94_47);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_22;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_94_42);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_94_51);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_94_44);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_94_52);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd11.Obj) = (current_block [OBJECT_94_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-3]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  goto lambda_22;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_94_48);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_94_55);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd11.Obj) = (current_block [OBJECT_94_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_11 9
#define TAG_95_12 3
#define LABEL_95_13 11
#define LABEL_95_9 13
#define LABEL_95_14 15
#define LABEL_95_15 17
#define LABEL_95_17 19
#define TAG_95_18 8
#define LABEL_95_19 21
#define LABEL_95_22 23
#define LABEL_95_23 25
#define LABEL_95_25 27
#define TAG_95_26 12
#define LABEL_95_27 29
#define LABEL_95_29 31
#define TAG_95_30 14
#define LABEL_95_31 33
#define LABEL_95_32 35
#define LABEL_95_33 37
#define LABEL_95_35 39
#define LABEL_95_36 41
#define TAG_95_37 19
#define LABEL_95_38 43
#define LABEL_95_39 45
#define TAG_95_40 21
#define LABEL_95_41 47
#define LABEL_95_42 49
#define LABEL_95_44 51
#define LABEL_95_45 53
#define TAG_95_46 25
#define LABEL_95_47 55
#define LABEL_95_48 57
#define TAG_95_49 27
#define LABEL_95_50 59
#define LABEL_95_51 61
#define LABEL_95_52 63
#define LABEL_95_54 65
#define LABEL_95_55 67
#define TAG_95_56 32
#define LABEL_95_57 69
#define LABEL_95_58 71
#define ENVIRONMENT_LABEL_95_3 98
#define DEBUGGING_LABEL_95_2 97
#define OBJECT_95_1 96
#define OBJECT_95_0 95
#define EXECUTE_CACHE_95_53 73
#define EXECUTE_CACHE_95_43 75
#define EXECUTE_CACHE_95_34 77
#define EXECUTE_CACHE_95_28 79
#define EXECUTE_CACHE_95_24 81
#define EXECUTE_CACHE_95_21 83
#define EXECUTE_CACHE_95_20 85
#define EXECUTE_CACHE_95_16 87
#define EXECUTE_CACHE_95_10 89
#define EXECUTE_CACHE_95_8 91
#define EXECUTE_CACHE_95_6 93
#define FREE_REFERENCES_LABEL_95_0 72
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_95_4);
      goto parse_extended_8601_time_58;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_95_11);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_95_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_95_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_95_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_95_17);
      goto lambda_63;

    case 9:
      current_block = (Rpc - LABEL_95_19);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_95_22);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_95_23);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_95_25);
      goto lambda_64;

    case 13:
      current_block = (Rpc - LABEL_95_27);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_95_29);
      goto lambda_23;

    case 15:
      current_block = (Rpc - LABEL_95_31);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_95_32);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_95_33);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_95_35);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_95_36);
      goto lambda_66;

    case 20:
      current_block = (Rpc - LABEL_95_38);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_95_39);
      goto lambda_67;

    case 22:
      current_block = (Rpc - LABEL_95_41);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_95_42);
      goto continuation_36;

    case 24:
      current_block = (Rpc - LABEL_95_44);
      goto continuation_11;

    case 25:
      current_block = (Rpc - LABEL_95_45);
      goto lambda_68;

    case 26:
      current_block = (Rpc - LABEL_95_47);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_95_48);
      goto lambda_38;

    case 28:
      current_block = (Rpc - LABEL_95_50);
      goto continuation_39;

    case 29:
      current_block = (Rpc - LABEL_95_51);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_95_52);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_95_54);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_95_55);
      goto lambda_70;

    case 33:
      current_block = (Rpc - LABEL_95_57);
      goto continuation_43;

    case 34:
      current_block = (Rpc - LABEL_95_58);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_extended_8601_time_61)
DEFLABEL (parse_extended_8601_time_58)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_11])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_95_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_95_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_71;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_19;

DEFLABEL (label_71)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_95_23);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_72;
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_19;

DEFLABEL (label_72)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_29])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_95_31);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_36])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_38]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_20]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_95_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_73;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_34;

DEFLABEL (label_73)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_43]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_95_42);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd18.Obj);
  Rsp = (& (Rsp [6]));
  goto lambda_34;

DEFLABEL (label_74)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_48])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_50]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_95_50);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_55])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [7]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_57]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_28]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_95_57);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd7.Obj);
  (Rsp [7]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd9.Obj);
  Rsp = (& (Rsp [6]));
  goto lambda_38;

DEFLABEL (label_75)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd11.Obj);
  Rsp = (& (Rsp [8]));
  goto lambda_42;

DEFLABEL (label_76)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_62)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_95_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_95_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_77)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_95_17);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_95_22);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_25])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_27]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_95_27);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_78;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (label_78)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_95_33);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_6;

DEFLABEL (label_79)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_95_25);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_95_32);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd11.Obj) = (current_block [OBJECT_95_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_39])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  (Wrd27.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  goto lambda_6;

DEFLABEL (lambda_65)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_95_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_95_35);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_6;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_95_36);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_95_41);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_45])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_47]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_28]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_95_47);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_28;

DEFLABEL (label_80)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_53]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_95_52);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [4]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_23;

DEFLABEL (label_81)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_28;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_95_39);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_95_44);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_95_45);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_95_51);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd11.Obj) = (current_block [OBJECT_95_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-3]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  goto lambda_23;

DEFLABEL (lambda_69)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_95_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_95_54);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_23;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_95_55);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_95_58);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd11.Obj) = (current_block [OBJECT_95_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd15.Obj);
  goto lambda_38;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_9 7
#define LABEL_96_7 9
#define LABEL_96_13 11
#define LABEL_96_11 13
#define LABEL_96_14 15
#define LABEL_96_15 17
#define LABEL_96_17 19
#define LABEL_96_10 21
#define LABEL_96_16 23
#define LABEL_96_19 25
#define LABEL_96_20 27
#define LABEL_96_22 29
#define LABEL_96_24 31
#define LABEL_96_27 33
#define LABEL_96_26 35
#define ENVIRONMENT_LABEL_96_3 60
#define DEBUGGING_LABEL_96_2 59
#define OBJECT_96_3 58
#define OBJECT_96_2 57
#define OBJECT_96_1 56
#define OBJECT_96_0 55
#define EXECUTE_CACHE_96_28 37
#define EXECUTE_CACHE_96_25 39
#define EXECUTE_CACHE_96_23 41
#define EXECUTE_CACHE_96_21 43
#define EXECUTE_CACHE_96_18 45
#define EXECUTE_CACHE_96_12 47
#define EXECUTE_CACHE_96_8 49
#define EXECUTE_CACHE_96_6 51
#define FREE_REFERENCE_96_0 54
#define FREE_REFERENCES_LABEL_96_0 36
#define NUMBER_OF_LINKER_SECTIONS_96_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_96_4);
      goto parse_8601_fraction_22;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_96_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_96_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_96_13);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_96_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_96_14);
      goto Z___ks5__18;

    case 7:
      current_block = (Rpc - LABEL_96_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_96_17);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_96_10);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_96_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_96_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_96_20);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_96_22);
      goto lambda_15;

    case 14:
      current_block = (Rpc - LABEL_96_24);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_96_27);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_96_26);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_8601_fraction_27)
DEFLABEL (parse_8601_fraction_22)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_96_13);
  (Rsp [0]) = Rvl;
  goto Z___ks5__18;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_11]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_32)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_96_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_96_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_32;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_96_10);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (Z___ks5__28)
DEFLABEL (Z___ks5__18)
  INTERRUPT_CHECK (26, LABEL_96_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_96_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_96_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rsp = (& (Rsp [1]));
  goto Z___ks5__18;

DEFLABEL (label_33)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_96_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_96_20);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_23]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_17])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_96_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_96_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_37;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (Wrd19.Obj) = (current_block [OBJECT_96_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_96_26);
  (Rsp [1]) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_6 7
#define LABEL_97_7 9
#define LABEL_97_9 11
#define LABEL_97_10 13
#define LABEL_97_11 15
#define LABEL_97_12 17
#define ENVIRONMENT_LABEL_97_3 25
#define DEBUGGING_LABEL_97_2 24
#define OBJECT_97_2 23
#define OBJECT_97_1 22
#define OBJECT_97_0 21
#define EXECUTE_CACHE_97_8 19
#define FREE_REFERENCES_LABEL_97_0 18
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_97_4);
      goto transform_8601_hour_fraction_11;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_97_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_97_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_97_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_97_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_97_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_97_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_8601_hour_fraction_19)
DEFLABEL (transform_8601_hour_fraction_11)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_28)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_27;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd29.Lng), 60, (& (Wrd28.Lng))))
    goto label_27;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_97_7);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_25;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_25;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_24)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_23;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (multiply_with_overflow ((Wrd27.Lng), 60, (& (Wrd26.Lng))))
    goto label_23;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_22)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_97_11);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_21;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_21;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_20)
  (Wrd26.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd22.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd21.Obj) = (current_block [OBJECT_97_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (current_block [OBJECT_97_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_14)
  (Wrd26.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_97_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_6 7
#define LABEL_98_7 9
#define LABEL_98_9 11
#define ENVIRONMENT_LABEL_98_3 19
#define DEBUGGING_LABEL_98_2 18
#define OBJECT_98_2 17
#define OBJECT_98_1 16
#define OBJECT_98_0 15
#define EXECUTE_CACHE_98_8 13
#define FREE_REFERENCES_LABEL_98_0 12
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_98_4);
      goto transform_8601_minute_fraction_6;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_98_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_98_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_98_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transform_8601_minute_fraction_12)
DEFLABEL (transform_8601_minute_fraction_6)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_16;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd29.Lng), 60, (& (Wrd28.Lng))))
    goto label_16;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_98_7);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_14;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_14;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_14;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_13)
  (Wrd26.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd27.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd22.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (current_block [OBJECT_98_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_98_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_6 7
#define LABEL_99_7 9
#define LABEL_99_8 11
#define LABEL_99_9 13
#define LABEL_99_10 15
#define LABEL_99_11 17
#define LABEL_99_12 19
#define ENVIRONMENT_LABEL_99_3 27
#define DEBUGGING_LABEL_99_2 26
#define OBJECT_99_5 25
#define OBJECT_99_4 24
#define OBJECT_99_3 23
#define OBJECT_99_2 22
#define OBJECT_99_1 21
#define OBJECT_99_0 20
#define FREE_REFERENCES_LABEL_99_0 20
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd98;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd47;
  machine_word Wrd99;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd24;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_99_4);
      goto qualify_8601_time_9;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_99_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_99_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_99_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_99_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_99_10);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_99_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_99_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qualify_8601_time_20)
DEFLABEL (qualify_8601_time_9)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_36;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd24.Lng) < 24L)
    goto label_24;

DEFLABEL (label_35)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_34;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_34;
  (Wrd27.Obj) = ((Wrd33.pObj) [2]);

DEFLABEL (label_33)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_32;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if ((Wrd99.Lng) == 0)
    goto label_23;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_31;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_31;
  (Wrd51.Obj) = ((Wrd57.pObj) [3]);

DEFLABEL (label_30)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_29;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! ((Wrd98.Lng) == 0))
    goto label_22;

DEFLABEL (label_28)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_27;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd81.Lng))))
    goto label_27;
  (Wrd73.Obj) = ((Wrd79.pObj) [4]);

DEFLABEL (label_26)
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_25;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! ((Wrd97.Lng) == 0))
    goto label_22;

DEFLABEL (label_24)
  Rvl = (Rsp [1]);
  goto label_21;

DEFLABEL (label_25)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_12]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_24;

DEFLABEL (label_27)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.Obj) = (current_block [OBJECT_99_5]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_11]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_16)
  (Wrd73.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_10]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_28;

DEFLABEL (label_31)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (current_block [OBJECT_99_4]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_14)
  (Wrd51.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_34)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_99_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_12)
  (Wrd27.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd101.Obj) = (current_block [OBJECT_99_2]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_24;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_99_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_7 7
#define LABEL_100_11 9
#define LABEL_100_9 11
#define LABEL_100_13 13
#define LABEL_100_15 15
#define LABEL_100_17 17
#define LABEL_100_16 19
#define LABEL_100_18 21
#define ENVIRONMENT_LABEL_100_3 38
#define DEBUGGING_LABEL_100_2 37
#define OBJECT_100_3 36
#define OBJECT_100_2 35
#define OBJECT_100_1 34
#define OBJECT_100_0 33
#define EXECUTE_CACHE_100_14 23
#define EXECUTE_CACHE_100_12 25
#define EXECUTE_CACHE_100_10 27
#define EXECUTE_CACHE_100_8 29
#define EXECUTE_CACHE_100_6 31
#define FREE_REFERENCES_LABEL_100_0 22
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_100_4);
      goto parse_8601_sign_14;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_100_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_100_11);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_100_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_100_13);
      goto lambda_11;

    case 6:
      current_block = (Rpc - LABEL_100_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_100_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_100_16);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_100_18);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_8601_sign_17)
DEFLABEL (parse_8601_sign_14)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_100_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_100_11);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_14]));

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_100_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_100_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_100_17);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_14]));

DEFLABEL (label_21)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_100_16);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_100_13);
  Rvl = (current_block [OBJECT_100_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_19)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_100_18);
  Rvl = (current_block [OBJECT_100_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_9 7
#define LABEL_101_7 9
#define LABEL_101_12 11
#define LABEL_101_15 13
#define LABEL_101_10 15
#define LABEL_101_18 17
#define LABEL_101_20 19
#define LABEL_101_16 21
#define LABEL_101_23 23
#define LABEL_101_24 25
#define LABEL_101_21 27
#define LABEL_101_27 29
#define LABEL_101_28 31
#define LABEL_101_25 33
#define LABEL_101_31 35
#define LABEL_101_32 37
#define LABEL_101_29 39
#define LABEL_101_35 41
#define LABEL_101_36 43
#define LABEL_101_33 45
#define LABEL_101_40 47
#define LABEL_101_37 49
#define LABEL_101_38 51
#define LABEL_101_41 53
#define LABEL_101_42 55
#define LABEL_101_43 57
#define LABEL_101_44 59
#define LABEL_101_45 61
#define LABEL_101_46 63
#define ENVIRONMENT_LABEL_101_3 104
#define DEBUGGING_LABEL_101_2 103
#define OBJECT_101_11 102
#define OBJECT_101_10 101
#define OBJECT_101_9 100
#define OBJECT_101_8 99
#define OBJECT_101_7 98
#define OBJECT_101_6 97
#define OBJECT_101_5 96
#define OBJECT_101_4 95
#define OBJECT_101_3 94
#define OBJECT_101_2 93
#define OBJECT_101_1 92
#define OBJECT_101_0 91
#define EXECUTE_CACHE_101_47 65
#define EXECUTE_CACHE_101_39 67
#define EXECUTE_CACHE_101_34 69
#define EXECUTE_CACHE_101_30 71
#define EXECUTE_CACHE_101_26 73
#define EXECUTE_CACHE_101_22 75
#define EXECUTE_CACHE_101_19 77
#define EXECUTE_CACHE_101_17 79
#define EXECUTE_CACHE_101_14 81
#define EXECUTE_CACHE_101_13 83
#define EXECUTE_CACHE_101_11 85
#define EXECUTE_CACHE_101_8 87
#define EXECUTE_CACHE_101_6 89
#define FREE_REFERENCES_LABEL_101_0 64
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_101_4);
      goto parser_rfc850_time_39;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_101_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_101_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_101_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_101_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_101_18);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_101_20);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_101_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_101_23);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_101_24);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_101_21);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_101_27);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_101_28);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_101_25);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_101_31);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_101_32);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_101_29);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_101_35);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_101_36);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_101_33);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_101_40);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_101_37);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_101_38);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_101_41);
      goto label_41;

    case 26:
      current_block = (Rpc - LABEL_101_42);
      goto label_42;

    case 27:
      current_block = (Rpc - LABEL_101_43);
      goto label_43;

    case 28:
      current_block = (Rpc - LABEL_101_44);
      goto label_44;

    case 29:
      current_block = (Rpc - LABEL_101_45);
      goto label_45;

    case 30:
      current_block = (Rpc - LABEL_101_46);
      goto label_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_rfc850_time_48)
DEFLABEL (parser_rfc850_time_39)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_101_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_101_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_101_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_101_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_101_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_101_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_101_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_101_21);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_101_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_25]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_101_25);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_101_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_29]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_101_29);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_101_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_33]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_34]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_101_33);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_101_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_101_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_37]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_38]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_101_38);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_58;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_58;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_57)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_56;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_56;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_55)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_54;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd61.Lng))))
    goto label_54;
  (Wrd55.Obj) = ((Wrd59.pObj) [5]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_53)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_52;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd77.Lng))))
    goto label_52;
  (Wrd71.Obj) = ((Wrd75.pObj) [6]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_51)
  (Wrd94.Obj) = (Rsp [5]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_50;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd93.Lng))))
    goto label_50;
  (Wrd87.Obj) = ((Wrd91.pObj) [7]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_49)
  (Wrd101.Obj) = (current_block [OBJECT_101_11]);
  (Rsp [6]) = (Wrd101.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_47]));

DEFLABEL (label_50)
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.Obj) = (current_block [OBJECT_101_10]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_46]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.Obj) = (current_block [OBJECT_101_9]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_45]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_101_8]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_44]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_101_7]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_43]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_101_6]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_42]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_101_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_41]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_5]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_40]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_101_40);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_35]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_101_35);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_31]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_101_31);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_101_27);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_101_23);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_101_18);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_101_12);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_101_37);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_7 7
#define ENVIRONMENT_LABEL_102_3 15
#define DEBUGGING_LABEL_102_2 14
#define OBJECT_102_2 13
#define OBJECT_102_1 12
#define OBJECT_102_0 11
#define EXECUTE_CACHE_102_6 9
#define FREE_REFERENCES_LABEL_102_0 8
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_102_4);
      goto month_max_days_2;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_102_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (month_max_days_6)
DEFLABEL (month_max_days_2)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Wrd5.Obj) = (current_block [OBJECT_102_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_10;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_10;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd24.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd27.Obj) = (current_block [OBJECT_102_1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_7;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd21.pObj) = (& ((Wrd28.pObj) [(Wrd18.Lng)]));
  Rvl = ((Wrd21.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_7 7
#define LABEL_103_8 9
#define ENVIRONMENT_LABEL_103_3 18
#define DEBUGGING_LABEL_103_2 17
#define OBJECT_103_1 16
#define OBJECT_103_0 15
#define EXECUTE_CACHE_103_6 11
#define FREE_REFERENCE_103_0 14
#define FREE_REFERENCES_LABEL_103_0 10
#define NUMBER_OF_LINKER_SECTIONS_103_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_103_4);
      goto month_short_string_2;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_103_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_103_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (month_short_string_7)
DEFLABEL (month_short_string_2)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_11;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_11;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_9)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_8;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_8;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd26.pObj) = (& ((Wrd33.pObj) [(Wrd23.Lng)]));
  Rvl = ((Wrd26.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_7 7
#define LABEL_104_8 9
#define ENVIRONMENT_LABEL_104_3 18
#define DEBUGGING_LABEL_104_2 17
#define OBJECT_104_1 16
#define OBJECT_104_0 15
#define EXECUTE_CACHE_104_6 11
#define FREE_REFERENCE_104_0 14
#define FREE_REFERENCES_LABEL_104_0 10
#define NUMBER_OF_LINKER_SECTIONS_104_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_104_4);
      goto month_long_string_2;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_104_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (month_long_string_7)
DEFLABEL (month_long_string_2)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_104_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_11;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_11;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_9)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_8;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_8;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd26.pObj) = (& ((Wrd33.pObj) [(Wrd23.Lng)]));
  Rvl = ((Wrd26.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_5 3
#define LABEL_105_6 5
#define LABEL_105_4 7
#define LABEL_105_7 9
#define LABEL_105_9 11
#define ENVIRONMENT_LABEL_105_3 29
#define DEBUGGING_LABEL_105_2 28
#define OBJECT_105_8 27
#define OBJECT_105_7 26
#define OBJECT_105_6 25
#define OBJECT_105_5 24
#define OBJECT_105_4 23
#define OBJECT_105_3 22
#define OBJECT_105_2 21
#define OBJECT_105_1 20
#define OBJECT_105_0 19
#define EXECUTE_CACHE_105_11 13
#define EXECUTE_CACHE_105_10 15
#define EXECUTE_CACHE_105_8 17
#define FREE_REFERENCES_LABEL_105_0 12
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd46;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_105_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_105_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_105_4);
      goto guarantee_month_5;

    case 3:
      current_block = (Rpc - LABEL_105_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_105_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_month_9)
DEFLABEL (guarantee_month_5)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_105_0]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd41.Lng))))
    goto label_19;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd13.Obj) = (current_block [OBJECT_105_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_10)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_12;
  (Wrd15.Obj) = (current_block [OBJECT_105_4]);
  goto label_11;

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_105_3]);

DEFLABEL (label_11)
DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_105_6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_105_7]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_105_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_105_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_11]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_105_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_105_5);
  goto label_14;

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_19)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_105_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_7 5
#define LABEL_106_9 7
#define LABEL_106_6 9
#define LABEL_106_11 11
#define LABEL_106_5 13
#define ENVIRONMENT_LABEL_106_3 24
#define DEBUGGING_LABEL_106_2 23
#define OBJECT_106_0 22
#define EXECUTE_CACHE_106_10 15
#define EXECUTE_CACHE_106_8 17
#define FREE_REFERENCE_106_1 20
#define FREE_REFERENCE_106_0 21
#define FREE_REFERENCES_LABEL_106_0 14
#define NUMBER_OF_LINKER_SECTIONS_106_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_106_4);
      goto string__month_5;

    case 1:
      current_block = (Rpc - LABEL_106_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_106_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_106_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_106_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__month_10)
DEFLABEL (string__month_5)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_106_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_15;
  Wrd17 = Wrd21;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_106_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd27.Obj) = (current_block [OBJECT_106_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_10]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_11])), (Wrd18.pObj));

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_7])), (Wrd13.pObj));

DEFLABEL (label_7)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_7 7
#define ENVIRONMENT_LABEL_107_3 16
#define DEBUGGING_LABEL_107_2 15
#define OBJECT_107_1 14
#define OBJECT_107_0 13
#define EXECUTE_CACHE_107_6 9
#define FREE_REFERENCE_107_0 12
#define FREE_REFERENCES_LABEL_107_0 8
#define NUMBER_OF_LINKER_SECTIONS_107_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_107_4);
      goto day_of_week_short_string_1;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_107_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (day_of_week_short_string_5)
DEFLABEL (day_of_week_short_string_1)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_107_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_107_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_6;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_6;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_7 7
#define ENVIRONMENT_LABEL_108_3 16
#define DEBUGGING_LABEL_108_2 15
#define OBJECT_108_1 14
#define OBJECT_108_0 13
#define EXECUTE_CACHE_108_6 9
#define FREE_REFERENCE_108_0 12
#define FREE_REFERENCES_LABEL_108_0 8
#define NUMBER_OF_LINKER_SECTIONS_108_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_108_4);
      goto day_of_week_long_string_1;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_108_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (day_of_week_long_string_5)
DEFLABEL (day_of_week_long_string_1)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_108_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_108_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_6;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_6;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_5 3
#define LABEL_109_6 5
#define LABEL_109_4 7
#define LABEL_109_7 9
#define LABEL_109_9 11
#define ENVIRONMENT_LABEL_109_3 29
#define DEBUGGING_LABEL_109_2 28
#define OBJECT_109_8 27
#define OBJECT_109_7 26
#define OBJECT_109_6 25
#define OBJECT_109_5 24
#define OBJECT_109_4 23
#define OBJECT_109_3 22
#define OBJECT_109_2 21
#define OBJECT_109_1 20
#define OBJECT_109_0 19
#define EXECUTE_CACHE_109_11 13
#define EXECUTE_CACHE_109_10 15
#define EXECUTE_CACHE_109_8 17
#define FREE_REFERENCES_LABEL_109_0 12
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd46;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_109_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_109_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_109_4);
      goto guarantee_day_of_week_5;

    case 3:
      current_block = (Rpc - LABEL_109_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_109_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_day_of_week_9)
DEFLABEL (guarantee_day_of_week_5)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_109_0]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd41.Lng))))
    goto label_19;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd13.Obj) = (current_block [OBJECT_109_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_10)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_12;
  (Wrd15.Obj) = (current_block [OBJECT_109_4]);
  goto label_11;

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_109_3]);

DEFLABEL (label_11)
DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_109_6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_109_7]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_109_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_109_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_11]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_109_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_109_5);
  goto label_14;

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_19)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_6 5
#define LABEL_110_5 7
#define LABEL_110_9 9
#define LABEL_110_8 11
#define ENVIRONMENT_LABEL_110_3 22
#define DEBUGGING_LABEL_110_2 21
#define OBJECT_110_0 20
#define EXECUTE_CACHE_110_10 13
#define EXECUTE_CACHE_110_7 15
#define FREE_REFERENCE_110_1 18
#define FREE_REFERENCE_110_0 19
#define FREE_REFERENCES_LABEL_110_0 12
#define NUMBER_OF_LINKER_SECTIONS_110_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_110_4);
      goto string__day_of_week_4;

    case 1:
      current_block = (Rpc - LABEL_110_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_110_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_110_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_110_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__day_of_week_9)
DEFLABEL (string__day_of_week_4)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;
  Wrd9 = Wrd13;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_110_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_13;
  Wrd13 = Wrd17;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_110_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd10.Obj) = (current_block [OBJECT_110_0]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_10]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110_9])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define LABEL_111_6 7
#define LABEL_111_8 9
#define LABEL_111_7 11
#define ENVIRONMENT_LABEL_111_3 19
#define DEBUGGING_LABEL_111_2 18
#define OBJECT_111_2 17
#define OBJECT_111_1 16
#define OBJECT_111_0 15
#define EXECUTE_CACHE_111_9 13
#define FREE_REFERENCES_LABEL_111_0 12
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_111_4);
      goto string_ci__index_9;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_111_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_111_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_111_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_ci__index_14)
DEFLABEL (string_ci__index_9)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (current_block [OBJECT_111_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_111_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_21;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_21;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_21;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_111_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_6;

DEFLABEL (label_21)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define LABEL_112_5 5
#define LABEL_112_9 7
#define LABEL_112_7 9
#define LABEL_112_11 11
#define LABEL_112_12 13
#define ENVIRONMENT_LABEL_112_3 27
#define DEBUGGING_LABEL_112_2 26
#define OBJECT_112_4 25
#define OBJECT_112_3 24
#define OBJECT_112_2 23
#define OBJECT_112_1 22
#define OBJECT_112_0 21
#define EXECUTE_CACHE_112_10 15
#define EXECUTE_CACHE_112_8 17
#define EXECUTE_CACHE_112_6 19
#define FREE_REFERENCES_LABEL_112_0 14
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd10;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_112_4);
      goto string__year_6;

    case 1:
      current_block = (Rpc - LABEL_112_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_112_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_112_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_112_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_112_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__year_11)
DEFLABEL (string__year_6)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_112_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_112_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_112_0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_112_9);

DEFLABEL (label_21)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_20;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) < 70L)
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd16.Lng) < 100L)
    goto label_14;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_112_3]);
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.Lng) = ((Wrd30.Lng) + 1900L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_15;
  Rvl = (LONG_TO_FIXNUM (Wrd26.Lng));
  goto label_12;

DEFLABEL (label_17)
  (Wrd33.Obj) = (current_block [OBJECT_112_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_112_4]);
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_15;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd43.Lng) = ((Wrd47.Lng) + 2000L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_15;
  Rvl = (LONG_TO_FIXNUM (Wrd43.Lng));
  goto label_12;

DEFLABEL (label_20)
  (Wrd50.Obj) = (current_block [OBJECT_112_1]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_5 5
#define ENVIRONMENT_LABEL_113_3 14
#define DEBUGGING_LABEL_113_2 13
#define OBJECT_113_1 12
#define OBJECT_113_0 11
#define EXECUTE_CACHE_113_7 7
#define EXECUTE_CACHE_113_6 9
#define FREE_REFERENCES_LABEL_113_0 6
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_113_4);
      goto d2_1;

    case 1:
      current_block = (Rpc - LABEL_113_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (d2_4)
DEFLABEL (d2_1)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (Wrd5.Obj) = (current_block [OBJECT_113_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_113_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_113_1]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_5 3
#define LABEL_114_4 5
#define LABEL_114_6 7
#define ENVIRONMENT_LABEL_114_3 16
#define DEBUGGING_LABEL_114_2 15
#define OBJECT_114_1 14
#define OBJECT_114_0 13
#define EXECUTE_CACHE_114_8 9
#define EXECUTE_CACHE_114_7 11
#define FREE_REFERENCES_LABEL_114_0 8
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_114_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_114_4);
      goto write_d2_2;

    case 2:
      current_block = (Rpc - LABEL_114_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_d2_6)
DEFLABEL (write_d2_2)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_9;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 10L)
    goto label_8;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_7]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_114_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_114_5);
  goto label_7;

DEFLABEL (label_9)
  (Wrd17.Obj) = (current_block [OBJECT_114_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define LABEL_115_5 5
#define LABEL_115_6 7
#define TAG_115_7 2
#define LABEL_115_8 9
#define LABEL_115_9 11
#define LABEL_115_11 13
#define LABEL_115_10 15
#define LABEL_115_13 17
#define LABEL_115_14 19
#define ENVIRONMENT_LABEL_115_3 27
#define DEBUGGING_LABEL_115_2 26
#define OBJECT_115_2 25
#define OBJECT_115_1 24
#define OBJECT_115_0 23
#define EXECUTE_CACHE_115_12 21
#define FREE_REFERENCES_LABEL_115_0 20
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
datime_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_115_4);
      goto string_vector_parser_11;

    case 1:
      current_block = (Rpc - LABEL_115_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_115_6);
      goto lambda_20;

    case 3:
      current_block = (Rpc - LABEL_115_8);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_115_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_115_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_115_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_115_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_115_14);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_vector_parser_19)
DEFLABEL (string_vector_parser_11)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_23;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_115_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_115_6])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_115_6);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_115_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_21)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_115_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_33;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_33;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd55.Lng) < (Wrd59.Lng))
    goto label_25;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_32;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_32;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_32;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd39.pObj) [(Wrd25.Lng)]));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_31)
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_115_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_27;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + (Wrd27.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_27;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_26)
  (Wrd34.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd30.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_30;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_30;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd39.Obj);
  goto loop_7;

DEFLABEL (label_30)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd39.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [3]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [4]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_13 11
#define LABEL_7 13
#define LABEL_9 15
#define LABEL_11 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_29 43
#define LABEL_30 45
#define LABEL_31 47
#define LABEL_32 49
#define LABEL_33 51
#define LABEL_34 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_49 83
#define LABEL_50 85
#define LABEL_51 87
#define LABEL_52 89
#define LABEL_53 91
#define LABEL_54 93
#define LABEL_55 95
#define LABEL_56 97
#define LABEL_57 99
#define LABEL_58 101
#define LABEL_59 103
#define LABEL_60 105
#define LABEL_61 107
#define LABEL_62 109
#define LABEL_63 111
#define LABEL_64 113
#define LABEL_65 115
#define LABEL_66 117
#define LABEL_67 119
#define LABEL_68 121
#define LABEL_69 123
#define LABEL_70 125
#define LABEL_71 127
#define LABEL_72 129
#define LABEL_73 131
#define LABEL_74 133
#define LABEL_75 135
#define LABEL_76 137
#define LABEL_77 139
#define LABEL_78 141
#define LABEL_81 143
#define LABEL_79 145
#define LABEL_85 147
#define LABEL_80 149
#define LABEL_83 151
#define LABEL_88 153
#define LABEL_84 155
#define LABEL_86 157
#define LABEL_90 159
#define LABEL_87 161
#define LABEL_89 163
#define LABEL_91 165
#define LABEL_92 167
#define LABEL_93 169
#define ENVIRONMENT_LABEL_3 268
#define DEBUGGING_LABEL_2 267
#define PURIFICATION_ROOT 266
#define OBJECT_74 265
#define OBJECT_73 264
#define OBJECT_72 263
#define OBJECT_71 262
#define OBJECT_70 261
#define OBJECT_69 260
#define OBJECT_68 259
#define OBJECT_67 258
#define OBJECT_66 257
#define OBJECT_65 256
#define OBJECT_64 255
#define OBJECT_63 254
#define OBJECT_62 253
#define OBJECT_61 252
#define OBJECT_60 251
#define OBJECT_59 250
#define OBJECT_58 249
#define OBJECT_57 248
#define OBJECT_56 247
#define OBJECT_55 246
#define OBJECT_54 245
#define OBJECT_53 244
#define OBJECT_52 243
#define OBJECT_51 242
#define OBJECT_50 241
#define OBJECT_49 240
#define OBJECT_48 239
#define OBJECT_47 238
#define OBJECT_46 237
#define OBJECT_45 236
#define OBJECT_44 235
#define OBJECT_43 234
#define OBJECT_42 233
#define OBJECT_41 232
#define OBJECT_40 231
#define OBJECT_39 230
#define OBJECT_38 229
#define OBJECT_37 228
#define OBJECT_36 227
#define OBJECT_35 226
#define OBJECT_34 225
#define OBJECT_33 224
#define OBJECT_32 223
#define OBJECT_31 222
#define OBJECT_30 221
#define OBJECT_29 220
#define OBJECT_28 219
#define OBJECT_27 218
#define OBJECT_26 217
#define OBJECT_25 216
#define OBJECT_24 215
#define OBJECT_23 214
#define OBJECT_22 213
#define OBJECT_21 212
#define OBJECT_20 211
#define OBJECT_19 210
#define OBJECT_18 209
#define OBJECT_17 208
#define OBJECT_16 207
#define OBJECT_15 206
#define OBJECT_14 205
#define OBJECT_13 204
#define OBJECT_12 203
#define OBJECT_11 202
#define OBJECT_10 201
#define OBJECT_9 200
#define OBJECT_8 199
#define OBJECT_7 198
#define OBJECT_6 197
#define OBJECT_5 196
#define OBJECT_4 195
#define OBJECT_3 194
#define OBJECT_2 193
#define OBJECT_1 192
#define OBJECT_0 191
#define EXECUTE_CACHE_82 171
#define EXECUTE_CACHE_21 173
#define FREE_REFERENCE_5 176
#define FREE_REFERENCE_4 177
#define FREE_REFERENCE_3 178
#define FREE_REFERENCE_2 179
#define FREE_REFERENCE_1 180
#define FREE_REFERENCE_0 181
#define GLOBAL_EXECUTE_CACHE_15 183
#define GLOBAL_EXECUTE_CACHE_14 185
#define GLOBAL_EXECUTE_CACHE_10 187
#define GLOBAL_EXECUTE_CACHE_5 189
#define FREE_REFERENCES_LABEL_0 170
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
datime_so_056e91583a52419f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd20;
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
      goto label_77;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_78;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_79;

    case 5:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_23;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_24;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_26;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_28;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_27;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_30;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_31;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_33;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_36;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_35;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_37;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_39;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_38;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_41;

    case 43:
      current_block = (Rpc - LABEL_52);
      goto continuation_40;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_43;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto continuation_42;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_45;

    case 47:
      current_block = (Rpc - LABEL_56);
      goto continuation_44;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto continuation_47;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto continuation_46;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto continuation_49;

    case 51:
      current_block = (Rpc - LABEL_60);
      goto continuation_48;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_51;

    case 53:
      current_block = (Rpc - LABEL_62);
      goto continuation_50;

    case 54:
      current_block = (Rpc - LABEL_63);
      goto continuation_53;

    case 55:
      current_block = (Rpc - LABEL_64);
      goto continuation_52;

    case 56:
      current_block = (Rpc - LABEL_65);
      goto continuation_55;

    case 57:
      current_block = (Rpc - LABEL_66);
      goto continuation_54;

    case 58:
      current_block = (Rpc - LABEL_67);
      goto continuation_57;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto continuation_56;

    case 60:
      current_block = (Rpc - LABEL_69);
      goto continuation_58;

    case 61:
      current_block = (Rpc - LABEL_70);
      goto continuation_60;

    case 62:
      current_block = (Rpc - LABEL_71);
      goto continuation_59;

    case 63:
      current_block = (Rpc - LABEL_72);
      goto continuation_62;

    case 64:
      current_block = (Rpc - LABEL_73);
      goto continuation_61;

    case 65:
      current_block = (Rpc - LABEL_74);
      goto continuation_64;

    case 66:
      current_block = (Rpc - LABEL_75);
      goto continuation_63;

    case 67:
      current_block = (Rpc - LABEL_76);
      goto continuation_66;

    case 68:
      current_block = (Rpc - LABEL_77);
      goto continuation_65;

    case 69:
      current_block = (Rpc - LABEL_78);
      goto continuation_67;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto label_80;

    case 71:
      current_block = (Rpc - LABEL_79);
      goto continuation_69;

    case 72:
      current_block = (Rpc - LABEL_85);
      goto label_81;

    case 73:
      current_block = (Rpc - LABEL_80);
      goto continuation_68;

    case 74:
      current_block = (Rpc - LABEL_83);
      goto continuation_71;

    case 75:
      current_block = (Rpc - LABEL_88);
      goto label_82;

    case 76:
      current_block = (Rpc - LABEL_84);
      goto continuation_70;

    case 77:
      current_block = (Rpc - LABEL_86);
      goto continuation_73;

    case 78:
      current_block = (Rpc - LABEL_90);
      goto label_83;

    case 79:
      current_block = (Rpc - LABEL_87);
      goto continuation_72;

    case 80:
      current_block = (Rpc - LABEL_89);
      goto continuation_74;

    case 81:
      current_block = (Rpc - LABEL_91);
      goto label_86;

    case 82:
      current_block = (Rpc - LABEL_92);
      goto label_87;

    case 83:
      current_block = (Rpc - LABEL_93);
      goto expression_76;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_76)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_92])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_87)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_86)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
	2,
	1,
	2,
	2,
	1,
	1,
	1,
	0,
	1,
	1,
	2,
	1,
	1,
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
	1,
	1,
	1,
	1,
	1,
	2,
	2,
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
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
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
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
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
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 115)
      goto label_85;
    blocks = (current_block [OBJECT_74]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_91])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_85)
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
    goto label_101;
  Wrd12 = Wrd16;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (MAKE_OBJECT (0, 9));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-10]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_99;
  Wrd8 = Wrd12;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_97;
  Wrd14 = Wrd18;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_95;
  Wrd12 = Wrd16;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_93;
  Wrd12 = Wrd16;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_91;
  Wrd12 = Wrd16;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_87);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd5.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_89);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd12.pObj));

DEFLABEL (label_83)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd13.pObj));

DEFLABEL (label_82)
  (Wrd12.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd13.pObj));

DEFLABEL (label_81)
  (Wrd12.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd13.pObj));

DEFLABEL (label_80)
  (Wrd12.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd15.pObj));

DEFLABEL (label_79)
  (Wrd14.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_77)
  (Wrd12.Obj) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_datime_so_056e91583a52419f [115] =
  {
    { "datime_so_code_1", 14, datime_so_code_1 },
    { "datime_so_code_2", 2, datime_so_code_2 },
    { "datime_so_code_3", 2, datime_so_code_3 },
    { "datime_so_code_4", 1, datime_so_code_4 },
    { "datime_so_code_5", 1, datime_so_code_5 },
    { "datime_so_code_6", 1, datime_so_code_6 },
    { "datime_so_code_7", 1, datime_so_code_7 },
    { "datime_so_code_8", 1, datime_so_code_8 },
    { "datime_so_code_9", 1, datime_so_code_9 },
    { "datime_so_code_10", 1, datime_so_code_10 },
    { "datime_so_code_11", 1, datime_so_code_11 },
    { "datime_so_code_12", 1, datime_so_code_12 },
    { "datime_so_code_13", 1, datime_so_code_13 },
    { "datime_so_code_14", 1, datime_so_code_14 },
    { "datime_so_code_15", 5, datime_so_code_15 },
    { "datime_so_code_16", 2, datime_so_code_16 },
    { "datime_so_code_17", 1, datime_so_code_17 },
    { "datime_so_code_18", 14, datime_so_code_18 },
    { "datime_so_code_19", 10, datime_so_code_19 },
    { "datime_so_code_20", 27, datime_so_code_20 },
    { "datime_so_code_21", 9, datime_so_code_21 },
    { "datime_so_code_22", 9, datime_so_code_22 },
    { "datime_so_code_23", 8, datime_so_code_23 },
    { "datime_so_code_24", 3, datime_so_code_24 },
    { "datime_so_code_25", 2, datime_so_code_25 },
    { "datime_so_code_26", 2, datime_so_code_26 },
    { "datime_so_code_27", 9, datime_so_code_27 },
    { "datime_so_code_28", 2, datime_so_code_28 },
    { "datime_so_code_29", 1, datime_so_code_29 },
    { "datime_so_code_30", 2, datime_so_code_30 },
    { "datime_so_code_31", 4, datime_so_code_31 },
    { "datime_so_code_32", 10, datime_so_code_32 },
    { "datime_so_code_33", 14, datime_so_code_33 },
    { "datime_so_code_34", 2, datime_so_code_34 },
    { "datime_so_code_35", 2, datime_so_code_35 },
    { "datime_so_code_36", 2, datime_so_code_36 },
    { "datime_so_code_37", 2, datime_so_code_37 },
    { "datime_so_code_38", 2, datime_so_code_38 },
    { "datime_so_code_39", 7, datime_so_code_39 },
    { "datime_so_code_40", 3, datime_so_code_40 },
    { "datime_so_code_41", 22, datime_so_code_41 },
    { "datime_so_code_42", 4, datime_so_code_42 },
    { "datime_so_code_43", 2, datime_so_code_43 },
    { "datime_so_code_44", 2, datime_so_code_44 },
    { "datime_so_code_45", 58, datime_so_code_45 },
    { "datime_so_code_46", 11, datime_so_code_46 },
    { "datime_so_code_47", 10, datime_so_code_47 },
    { "datime_so_code_48", 6, datime_so_code_48 },
    { "datime_so_code_49", 2, datime_so_code_49 },
    { "datime_so_code_50", 12, datime_so_code_50 },
    { "datime_so_code_51", 4, datime_so_code_51 },
    { "datime_so_code_52", 8, datime_so_code_52 },
    { "datime_so_code_53", 21, datime_so_code_53 },
    { "datime_so_code_54", 23, datime_so_code_54 },
    { "datime_so_code_55", 27, datime_so_code_55 },
    { "datime_so_code_56", 2, datime_so_code_56 },
    { "datime_so_code_57", 24, datime_so_code_57 },
    { "datime_so_code_58", 4, datime_so_code_58 },
    { "datime_so_code_59", 2, datime_so_code_59 },
    { "datime_so_code_60", 2, datime_so_code_60 },
    { "datime_so_code_61", 2, datime_so_code_61 },
    { "datime_so_code_62", 2, datime_so_code_62 },
    { "datime_so_code_63", 2, datime_so_code_63 },
    { "datime_so_code_64", 2, datime_so_code_64 },
    { "datime_so_code_65", 36, datime_so_code_65 },
    { "datime_so_code_66", 4, datime_so_code_66 },
    { "datime_so_code_67", 4, datime_so_code_67 },
    { "datime_so_code_68", 2, datime_so_code_68 },
    { "datime_so_code_69", 2, datime_so_code_69 },
    { "datime_so_code_70", 4, datime_so_code_70 },
    { "datime_so_code_71", 4, datime_so_code_71 },
    { "datime_so_code_72", 3, datime_so_code_72 },
    { "datime_so_code_73", 6, datime_so_code_73 },
    { "datime_so_code_74", 8, datime_so_code_74 },
    { "datime_so_code_75", 6, datime_so_code_75 },
    { "datime_so_code_76", 8, datime_so_code_76 },
    { "datime_so_code_77", 19, datime_so_code_77 },
    { "datime_so_code_78", 2, datime_so_code_78 },
    { "datime_so_code_79", 2, datime_so_code_79 },
    { "datime_so_code_80", 2, datime_so_code_80 },
    { "datime_so_code_81", 2, datime_so_code_81 },
    { "datime_so_code_82", 2, datime_so_code_82 },
    { "datime_so_code_83", 2, datime_so_code_83 },
    { "datime_so_code_84", 31, datime_so_code_84 },
    { "datime_so_code_85", 25, datime_so_code_85 },
    { "datime_so_code_86", 23, datime_so_code_86 },
    { "datime_so_code_87", 21, datime_so_code_87 },
    { "datime_so_code_88", 25, datime_so_code_88 },
    { "datime_so_code_89", 19, datime_so_code_89 },
    { "datime_so_code_90", 13, datime_so_code_90 },
    { "datime_so_code_91", 15, datime_so_code_91 },
    { "datime_so_code_92", 20, datime_so_code_92 },
    { "datime_so_code_93", 9, datime_so_code_93 },
    { "datime_so_code_94", 33, datime_so_code_94 },
    { "datime_so_code_95", 35, datime_so_code_95 },
    { "datime_so_code_96", 17, datime_so_code_96 },
    { "datime_so_code_97", 8, datime_so_code_97 },
    { "datime_so_code_98", 5, datime_so_code_98 },
    { "datime_so_code_99", 9, datime_so_code_99 },
    { "datime_so_code_100", 10, datime_so_code_100 },
    { "datime_so_code_101", 31, datime_so_code_101 },
    { "datime_so_code_102", 3, datime_so_code_102 },
    { "datime_so_code_103", 4, datime_so_code_103 },
    { "datime_so_code_104", 4, datime_so_code_104 },
    { "datime_so_code_105", 5, datime_so_code_105 },
    { "datime_so_code_106", 6, datime_so_code_106 },
    { "datime_so_code_107", 3, datime_so_code_107 },
    { "datime_so_code_108", 3, datime_so_code_108 },
    { "datime_so_code_109", 5, datime_so_code_109 },
    { "datime_so_code_110", 5, datime_so_code_110 },
    { "datime_so_code_111", 5, datime_so_code_111 },
    { "datime_so_code_112", 6, datime_so_code_112 },
    { "datime_so_code_113", 2, datime_so_code_113 },
    { "datime_so_code_114", 3, datime_so_code_114 },
    { "datime_so_code_115", 9, datime_so_code_115 }
  };

int
decl_datime_so_056e91583a52419f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_datime_so_056e91583a52419f);
  return (0);
}

DECLARE_COMPILED_CODE ("datime.so", 84, decl_datime_so_056e91583a52419f, datime_so_056e91583a52419f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_datime_so_data_056e91583a52419f [18790] =
  "\x8d\x02\xe5\x01\xa3\x27\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x0d"
  "\xb9\x24\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d"
  "\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0d\x1c\x24\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x85\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b"
  "\x80\xc1\x1c\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc2\x1c\xc1"
  "\x1c\x02\x1b\x02\x1b\x80\x87\x1d\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x1d\x02\x80\x02\x81\x02\x28\x0d\x28\x0d\x1c\x28\xb6\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x81\x02"
  "\x84\x02\x85\x02\x02\x82\x02\x87\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1b\x1b"
  "\x02\x1b\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x1b\x1b\x02\xc2\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x02\x1b\x02\x1b\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x03\x02\x06\x07\x02\x86\x02\x02\xc2\x1c\x02\x28\x0d\x28\xb6"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x02\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x02\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x0c\x02\x85\x0c\x1b\x84"
  "\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x02"
  "\x02\x0c\x0c\x02\x83\x81\x1b\x82\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1d\x1b\x02\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x82\x0f\x83\x86\x85"
  "\x0f\x0c\x84\x1b\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x86\x85\x84\x81\x82"
  "\x1b\x83\x80\x0f\x0f\x28\xb2\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x02\xb1\x24\x28\xb2\x28"
  "\xb3\x28\xb5\x28\xb4\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x28\xb2\x28\xb3"
  "\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x24\x28\xb2\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f"
  "\x02\x80\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x0d\x1c\x0d\x1c\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\xb2\x28\x1b\x28\xb4\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x1b\x82\x02\x80\x0f\x0f"
  "\x28\xb2\x28\x1b\x28\xb4\x28\xb5\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\xc1\x1b\x80\x0c\x0d\x1c\x0d\x1c\x24\x28"
  "\xb2\x28\x0d\x1c\x28\xb4\x28\xb5\x28\xb3\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x0f\x0f\x02\x0f\x0f\x02\x02\x0f"
  "\x06\x02\xc1\xc2\x1b\x80\x1b\x24\x28\xb2\x28\xb3\x28\xb4\x28\xb5"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x81\x82\x0f\x83\x02\x84\x85\x0f"
  "\x1b\x02\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x0d\x1c\x1d\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x84\x83\x82\x81"
  "\x1b\x86\x0f\x0f\x1b\x28\x1b\x28\xb2\x28\x1b\x28\x1b\x28\xb4\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x0d\x1c\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x80\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x85\x1b\x86\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x84\x85\x0f\x1b\x86\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x82\x1b\x83\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x82\x0f\x1b\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x0f\x0f\x80\x0f\x02\x1d\x1b\x02\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0f\x0f\x28\xb2\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x28\xb2\x28\x1b\x28\x1b\x28\xb4\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x81\x82\x0a\x02\x80\x81"
  "\x82\x83\x84\x85\x1b\x86\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x28\xb2\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\xb4\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0f\x28\xb2\x28"
  "\x1b\x28\x1b\x28\x1b\x28\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x02\x84\x85\x86\x82\x80\x1b\x81\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\x84\x85\x86\x81\x1b\x80\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x0f\x28\xb2\x28\x1b\x28\xb4\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x80\x0f\x28\xb2\x28\x1b\x28\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x02\x81\x1b\x82\x02\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x28\xb2\x28\x0d\x1c\x28\xb4\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0f\x28\xb2\x28"
  "\x1b\x28\xb4\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\xc1\x0f\x0f\xb1\x24\x28\xb2\x28\x1b\x28\xb4\x28\xb3"
  "\x28\xb5\x28\x1b\x28\xb7\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x02\x88\x02\x1b\x80\x28\x0d\xb9\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\x1b\x80\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x83\x82\x81\x02\x1b\x80"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\x81\x0f\x0f\x28\xb2"
  "\x28\x1b\x28\xb4\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x86\x85\x84\x81\x82\x1b\x83\x0c\x0f\x0f"
  "\x0c\x28\xb2\x28\x0d\xbd\x28\x0d\xba\x28\xb4\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\xbc\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x02\x02\x02\x02\x02\x02\x02"
  "\x02\x02\x02\x02\x17\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x81\x02\x0c\x06\x07\x02\x1b"
  "\x02\x28\x1b\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x80\x86\x0c\x06\x07\x02\x1b\x02\x28"
  "\x1b\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x02\x02\x0d"
  "\x1c\x28\xb7\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x82\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x80\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\xb5\x0d\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x17\x1b\x2a\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x9e\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x9e\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x17\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\xb4\x1b\xb2\x1b\x0d\x1b\x99\x1b\x2a\x1b\x2a\x99"
  "\x1b\x1b\x1b\x1b\x1b\x83\x02\x1b\x02\x1b\x1b\x02\x1b\x02\x02\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x17\x1b\x2a\xb1\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x02\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x0c\x80\x08\x89\x0c\x80\x08\x89\x0c\x85\x08\x89\x0c"
  "\x84\x08\x89\x0c\x86\x08\x89\x0c\x85\x08\x89\x0c\x02\x08\x89\x0c"
  "\x86\x08\x89\x0c\x02\x08\x89\x0c\x02\x08\x89\x08\x14\x1b\x2a\x17"
  "\x1b\x02\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x9e\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x1b\x02\x1b\x02\x1b\x80"
  "\x02\x1b\x84\x02\x02\x82\x81\x02\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x04\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\xc2\x0d\x0d\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x02\x02\x02\x86\x85\x84\x83\x82\x81\x17\xc3\x0d\x1c\x0d"
  "\x02\x1b\x0d\x1c\x99\x0c\x1b\x2a\x99\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x64\x61\x74\x69\x6d\x65\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x75"
  "\x6d\x65\x72\x69\x63\x02\x03\x1a\x67\x65\x74\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x04\x20\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73"
  "\x65\x74\x04\x1b\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21\x04\x17"
  "\x67\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x74\x61\x69\x6c\x05\x03\x3c\x3d\x03\x0f\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x07\x62\x1e\x81\x87\x02"
  "\x61\x1c\x81\x89\x02\x60\x1a\x81\x87\x02\x5f\x18\x81\x89\x02\x5e"
  "\x16\x81\x87\x02\x5d\x14\x81\x89\x02\x5c\x12\x81\x89\x02\x5b\x10"
  "\x81\x89\x02\x5a\x0e\x81\x8b\x02\x59\x0c\x81\x89\x02\x58\x0a\x81"
  "\x89\x02\x57\x08\x81\x85\x02\x56\x06\x81\x85\x02\x55\x04\x86\x0a"
  "\x1d\x30\x09\x02\x1b\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x61\x67\x0a"
  "\x02\x64\x06\x81\x93\x02\x63\x04\x8b\x14\x05\x0a\x0b\x02\x0a\x02"
  "\x66\x06\x81\x81\x02\x65\x04\x82\x02\x05\x0a\x0c\x02\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x0d\x67\x04\x83\x04\x03\x0e\x02"
  "\x0d\x68\x04\x83\x04\x03\x0f\x02\x0d\x69\x04\x83\x04\x03\x10\x02"
  "\x08\x0d\x6a\x04\x83\x04\x03\x11\x02\x09\x0d\x6b\x04\x83\x04\x03"
  "\x12\x02\x0a\x0d\x6c\x04\x83\x04\x03\x13\x02\x0b\x0d\x08\x6d\x04"
  "\x83\x04\x03\x14\x02\x0c\x0d\x09\x6e\x04\x83\x04\x03\x15\x02\x0d"
  "\x0d\x0a\x6f\x04\x83\x04\x03\x16\x02\x0e\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x21\x17\x02\x08\x70\x04\x84\x06\x03\x18\x02"
  "\x0f\x17\x02\x0a\x71\x04\x84\x06\x03\x19\x02\x10\x0d\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x1a\x0a\x02\x76\x0c"
  "\x81\x85\x02\x75\x0a\x81\x83\x02\x74\x08\x81\x83\x02\x73\x06\x81"
  "\x83\x02\x72\x04\x83\x04\x0b\x14\x1b\x02\x11\x02\x03\x0e\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x3f\x1c\x04\x17\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x1d\x03\x78\x06\x81\x85\x02\x77\x04\x84\x04\x05"
  "\x0e\x1e\x02\x12\x08\x0d\x64\x65\x63\x6f\x64\x65\x64\x20\x74\x69"
  "\x6d\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x1f\x02\x79"
  "\x04\x84\x04\x03\x0c\x20\x02\x13\x08\x0c\x64\x65\x63\x6f\x64\x65"
  "\x2d\x74\x69\x6d\x65\x21\x0c\x65\x6e\x63\x6f\x64\x65\x2d\x74\x69"
  "\x6d\x65\x22\x91\x1c\x0d\x0a\x17\x08\x12\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x23\x09\x18\x63\x68"
  "\x65\x63\x6b\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65"
  "\x2d\x61\x72\x67\x73\x24\x0b\x13\x25\x6d\x61\x6b\x65\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x25\x05\x14\x63\x6f\x6d"
  "\x70\x75\x74\x65\x2d\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b"
  "\x26\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x74\x69\x6d"
  "\x65\x2d\x7a\x6f\x6e\x65\x27\x03\x0e\x69\x67\x6e\x6f\x72\x65\x2d"
  "\x65\x72\x72\x6f\x72\x73\x03\x0b\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x3f\x07\x87\x01\x1e\x81\x83\x02\x86\x01\x1c\x81\x83\x02\x85"
  "\x01\x1a\x81\x93\x02\x84\x01\x18\x81\x95\x02\x83\x01\x16\x81\x91"
  "\x02\x82\x01\x14\x81\x91\x02\x81\x01\x12\x81\x91\x02\x80\x01\x10"
  "\x81\x91\x02\x7f\x0e\x81\x87\x02\x7e\x0c\x81\x91\x02\x7d\x0a\x81"
  "\x93\x02\x7c\x08\x81\x8f\x02\x7b\x06\x81\x91\x02\x7a\x04\x89\x0e"
  "\x1d\x38\x28\x02\x14\x3d\x02\x3c\x18\x0d\x04\x24\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x03"
  "\x0f\x6d\x6f\x6e\x74\x68\x2f\x6d\x61\x78\x2d\x64\x61\x79\x73\x29"
  "\x05\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e"
  "\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2a\x05\x91\x01\x16"
  "\x81\x8f\x02\x90\x01\x14\xfd\xff\x03\x8f\x01\x12\x81\x8f\x02\x8e"
  "\x01\x10\xfd\xff\x03\x8d\x01\x0e\x81\x93\x02\x8c\x01\x0c\x81\x8f"
  "\x02\x8b\x01\x0a\xff\xff\x03\x8a\x01\x08\x81\x8f\x02\x89\x01\x06"
  "\x81\x8f\x02\x88\x01\x04\x89\x10\x15\x28\x2b\x02\x15\x0c\x91\x03"
  "\x0e\x65\x08\x0d\x04\x07\x6d\x6f\x64\x75\x6c\x6f\x03\x06\x66\x6c"
  "\x6f\x6f\x72\x07\x02\x2b\x04\xac\x01\x38\x81\x89\x02\xab\x01\x36"
  "\x81\x87\x02\xaa\x01\x34\x81\x85\x02\xa9\x01\x32\x81\x85\x02\xa8"
  "\x01\x30\x81\x85\x02\xa7\x01\x2e\x81\x85\x02\xa6\x01\x2c\x81\x85"
  "\x02\xa5\x01\x2a\x81\x85\x02\xa4\x01\x28\x81\x85\x02\xa3\x01\x26"
  "\x81\x91\x02\xa2\x01\x24\x81\x8f\x02\xa1\x01\x22\x81\x85\x02\xa0"
  "\x01\x20\x81\x85\x02\x9f\x01\x1e\x81\x83\x02\x9e\x01\x1c\x81\x8f"
  "\x02\x9d\x01\x1a\x81\x8d\x02\x9c\x01\x18\x81\x85\x02\x9b\x01\x16"
  "\x81\x83\x02\x9a\x01\x14\x81\x89\x02\x99\x01\x12\x81\x89\x02\x98"
  "\x01\x10\x81\x8d\x02\x97\x01\x0e\x81\x8b\x02\x96\x01\x0c\x81\x85"
  "\x02\x95\x01\x0a\x81\x87\x02\x94\x01\x08\x81\x87\x02\x93\x01\x06"
  "\x81\x91\x02\x92\x01\x04\x85\x08\x37\x4c\x2c\x02\x16\x91\x1c\x0d"
  "\x17\x0a\x21\x06\x65\x70\x6f\x63\x68\x21\x02\x02\x16\x61\x6c\x6c"
  "\x6f\x63\x61\x74\x65\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2d\x02\xb5\x01\x14\x81\x89\x02\xb4\x01\x12\x81\x85\x02"
  "\xb3\x01\x10\x81\x85\x02\xb2\x01\x0e\x81\x85\x02\xb1\x01\x0c\x81"
  "\x85\x02\xb0\x01\x0a\x81\x87\x02\xaf\x01\x08\x81\x87\x02\xae\x01"
  "\x06\x81\x83\x02\xad\x01\x04\x83\x04\x13\x20\x2e\x02\x17\x91\x1c"
  "\x0d\x17\x0a\x0b\x64\x65\x63\x6f\x64\x65\x2d\x75\x74\x63\x21\x02"
  "\x02\x2d\x02\xbe\x01\x14\x81\x89\x02\xbd\x01\x12\x81\x85\x02\xbc"
  "\x01\x10\x81\x85\x02\xbb\x01\x0e\x81\x85\x02\xba\x01\x0c\x81\x85"
  "\x02\xb9\x01\x0a\x81\x87\x02\xb8\x01\x08\x81\x87\x02\xb7\x01\x06"
  "\x81\x83\x02\xb6\x01\x04\x83\x04\x13\x20\x2f\x02\x18\x22\x17\x91"
  "\x1c\x0d\x0a\x21\x02\x03\x12\x63\x6f\x70\x79\x2d\x64\x65\x63\x6f"
  "\x64\x65\x64\x2d\x74\x69\x6d\x65\x22\x02\xc6\x01\x12\x81\x85\x02"
  "\xc5\x01\x10\x81\x83\x02\xc4\x01\x0e\x81\x85\x02\xc3\x01\x0c\x83"
  "\x04\xc2\x01\x0a\x81\x87\x02\xc1\x01\x08\x81\x87\x02\xc0\x01\x06"
  "\x81\x87\x02\xbf\x01\x04\x81\x85\x02\x11\x1e\x17\x02\x19\x0d\x65"
  "\x6e\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x21\x02\xc9\x01\x08"
  "\x81\x83\x02\xc8\x01\x06\x81\x81\x02\xc7\x01\x04\x82\x02\x07\x0d"
  "\x30\x02\x1a\x02\x13\x67\x65\x74\x2d\x75\x6e\x69\x76\x65\x72\x73"
  "\x61\x6c\x2d\x74\x69\x6d\x65\x31\x03\x23\x75\x6e\x69\x76\x65\x72"
  "\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x32\x03\xcb\x01"
  "\x06\x81\x81\x02\xca\x01\x04\x82\x02\x05\x0d\x33\x02\x1b\x02\x31"
  "\x03\x24\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65"
  "\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64"
  "\x2d\x74\x69\x6d\x65\x34\x03\xcd\x01\x06\x81\x81\x02\xcc\x01\x04"
  "\x82\x02\x05\x0d\x35\x02\x1c\x91\x1c\x19\x19\x3d\x3b\x0f\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x36\x1b\x03\x07\x65"
  "\x78\x61\x63\x74\x3f\x05\x03\x09\x69\x6e\x74\x65\x67\x65\x72\x3f"
  "\x04\xd6\x01\x14\x81\x83\x02\xd5\x01\x12\x81\x83\x02\xd4\x01\x10"
  "\x81\x83\x02\xd3\x01\x0e\x81\x83\x02\xd2\x01\x0c\x81\x83\x02\xd1"
  "\x01\x0a\x81\x83\x02\xd0\x01\x08\x81\x83\x02\xcf\x01\x06\x83\x04"
  "\xce\x01\x04\x81\x83\x02\x13\x28\x37\x02\x1d\x02\x03\x0b\x74\x69"
  "\x6d\x65\x2d\x7a\x6f\x6e\x65\x3f\x38\x04\x14\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x74\x69\x6d\x65\x2d\x7a\x6f\x6e\x65\x39\x03"
  "\xd8\x01\x06\x81\x85\x02\xd7\x01\x04\x84\x04\x05\x0e\x3a\x02\x1e"
  "\x08\x0a\x74\x69\x6d\x65\x20\x7a\x6f\x6e\x65\x05\x1f\x02\xd9\x01"
  "\x04\x84\x04\x03\x0c\x3b\x02\x1f\x0d\x09\xdb\x01\x06\x81\x83\x02"
  "\xda\x01\x04\x83\x04\x05\x0b\x3c\x02\x20\x0d\x0a\x03\x1d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69\x76"
  "\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x3d\x03\x34\x03\xdf\x01"
  "\x0a\x81\x83\x02\xde\x01\x08\x81\x85\x02\xdd\x01\x06\x83\x04\xdc"
  "\x01\x04\x81\x83\x02\x09\x14\x3e\x02\x21\x01\x08\x02\x20\x0d\x03"
  "\x2c\x20\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69"
  "\x6e\x67\x3f\x03\x12\x6d\x6f\x6e\x74\x68\x2f\x6c\x6f\x6e\x67\x2d"
  "\x73\x74\x72\x69\x6e\x67\x40\x03\x18\x64\x61\x79\x2d\x6f\x66\x2d"
  "\x77\x65\x65\x6b\x2f\x6c\x6f\x6e\x67\x2d\x73\x74\x72\x69\x6e\x67"
  "\x41\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x42\x08\x42\x06\xe9\x01\x16\x81\x8d\x02\xe8\x01\x14\x81\x83\x02"
  "\xe7\x01\x12\x81\x8f\x02\xe6\x01\x10\x81\x8d\x02\xe5\x01\x0e\x81"
  "\x89\x02\xe4\x01\x0c\x81\x8b\x02\xe3\x01\x0a\x81\x8b\x02\xe2\x01"
  "\x08\x81\x85\x02\xe1\x01\x06\x81\x87\x02\xe0\x01\x04\x83\x04\x15"
  "\x2b\x43\x02\x22\x03\x41\x4d\x03\x50\x4d\x02\x20\x0d\x0e\x03\x3a"
  "\x30\x02\x3a\x0b\x0d\x03\x3f\x09\x42\x03\xf7\x01\x1e\x81\x8f\x02"
  "\xf6\x01\x1c\x81\x8f\x02\xf5\x01\x1a\x81\x8d\x02\xf4\x01\x18\x81"
  "\x91\x02\xf3\x01\x16\x81\x91\x02\xf2\x01\x14\x81\x91\x02\xf1\x01"
  "\x12\x81\x8b\x02\xf0\x01\x10\x81\x89\x02\xef\x01\x0e\x81\x8f\x02"
  "\xee\x01\x0c\x81\x87\x02\xed\x01\x0a\x81\x87\x02\xec\x01\x08\x81"
  "\x85\x02\xeb\x01\x06\x81\x83\x02\xea\x01\x04\x83\x04\x1d\x31\x42"
  "\x02\x23\x03\x32\x03\x15\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2d\x3e\x73\x74\x72\x69\x6e\x67\x44\x03\xf9\x01\x06\x81"
  "\x83\x02\xf8\x01\x04\x83\x04\x05\x0d\x45\x02\x24\x03\x34\x03\x44"
  "\x03\xfb\x01\x06\x81\x83\x02\xfa\x01\x04\x83\x04\x05\x0d\x46\x02"
  "\x25\x03\x1e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f"
  "\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65"
  "\x47\x03\x44\x03\xfd\x01\x06\x81\x83\x02\xfc\x01\x04\x83\x04\x05"
  "\x0d\x48\x02\x26\x03\x1f\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d"
  "\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x49\x03\x44\x03\xff\x01\x06\x81\x83\x02\xfe\x01"
  "\x04\x83\x04\x05\x0d\x44\x02\x27\x03\x18\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x4a\x04\x1e\x77\x72\x69\x74\x65\x2d\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2d\x61\x73\x2d\x72\x66\x63\x32\x38\x32"
  "\x32\x4b\x03\x81\x02\x06\x81\x85\x02\x80\x02\x04\x83\x04\x05\x0d"
  "\x4c\x02\x28\x01\x21\x02\x0d\x0a\x04\x16\x25\x77\x72\x69\x74\x65"
  "\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x31\x4d"
  "\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x4e\x03\x24\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x79\x6c"
  "\x69\x67\x68\x74\x2d\x73\x61\x76\x69\x6e\x67\x73\x2d\x74\x69\x6d"
  "\x65\x3f\x4f\x04\x10\x77\x72\x69\x74\x65\x2d\x74\x69\x6d\x65\x2d"
  "\x7a\x6f\x6e\x65\x50\x05\x88\x02\x10\x81\x87\x02\x87\x02\x0e\x81"
  "\x89\x02\x86\x02\x0c\x81\x89\x02\x85\x02\x0a\x81\x87\x02\x84\x02"
  "\x08\x81\x85\x02\x83\x02\x06\x81\x85\x02\x82\x02\x04\x84\x06\x0f"
  "\x1f\x51\x02\x29\x05\x20\x47\x4d\x54\x03\x12\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x74\x63\x52\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x53\x04\x4d\x04\x8b"
  "\x02\x08\x81\x89\x02\x8a\x02\x06\x81\x85\x02\x89\x02\x04\x84\x06"
  "\x07\x12\x54\x02\x2a\x01\x3b\x01\x21\x03\x2c\x20\x0d\x08\x04\x06"
  "\x77\x72\x69\x74\x65\x55\x03\x19\x64\x61\x79\x2d\x6f\x66\x2d\x77"
  "\x65\x65\x6b\x2f\x73\x68\x6f\x72\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x56\x04\x53\x04\x4e\x03\x13\x6d\x6f\x6e\x74\x68\x2f\x73\x68\x6f"
  "\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x57\x04\x09\x77\x72\x69\x74"
  "\x65\x2d\x64\x32\x58\x07\xa1\x02\x2e\x81\x85\x02\xa0\x02\x2c\x81"
  "\x85\x02\x9f\x02\x2a\x81\x85\x02\x9e\x02\x28\x81\x89\x02\x9d\x02"
  "\x26\x81\x85\x02\x9c\x02\x24\x81\x85\x02\x9b\x02\x22\x81\x89\x02"
  "\x9a\x02\x20\x81\x85\x02\x99\x02\x1e\x81\x85\x02\x98\x02\x1c\x81"
  "\x89\x02\x97\x02\x1a\x81\x85\x02\x96\x02\x18\x81\x89\x02\x95\x02"
  "\x16\x81\x85\x02\x94\x02\x14\x81\x8b\x02\x93\x02\x12\x81\x85\x02"
  "\x92\x02\x10\x81\x85\x02\x91\x02\x0e\x81\x87\x02\x90\x02\x0c\x81"
  "\x83\x02\x8f\x02\x0a\x81\x89\x02\x8e\x02\x08\x81\x87\x02\x8d\x02"
  "\x06\x84\x06\x8c\x02\x04\x81\x85\x02\x2d\x48\x59\x02\x2b\x0d\x15"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x5a\x14\x70\x61\x72\x73\x65\x72\x3a\x72\x66\x63"
  "\x32\x38\x32\x32\x2d\x74\x69\x6d\x65\x5b\x02\x04\x0e\x2a\x70\x61"
  "\x72\x73\x65\x2d\x73\x74\x72\x69\x6e\x67\x5c\x04\x2a\x03\xa5\x02"
  "\x0a\x81\x83\x02\xa4\x02\x08\x81\x85\x02\xa3\x02\x06\x81\x87\x02"
  "\xa2\x02\x04\x83\x04\x09\x16\x5d\x02\x2c\x03\x5a\x03\x3d\x03\xa7"
  "\x02\x06\x81\x83\x02\xa6\x02\x04\x83\x04\x05\x0d\x5e\x02\x2d\x03"
  "\x5a\x03\x18\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d"
  "\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x5a\x03\xa9\x02\x06\x81"
  "\x83\x02\xa8\x02\x04\x83\x04\x05\x0d\x5f\x02\x2e\x08\x0d\x01\x3b"
  "\x01\x2d\x03\x03\x0b\x6d\x61\x74\x63\x68\x2d\x6c\x77\x73\x2a\x60"
  "\x04\x03\x12\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x32\x38\x32\x32"
  "\x2d\x64\x61\x79\x61\x03\x18\x70\x61\x72\x73\x65\x2d\x73\x68\x6f"
  "\x72\x74\x2d\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x62\x03"
  "\x12\x70\x61\x72\x73\x65\x2d\x73\x68\x6f\x72\x74\x2d\x6d\x6f\x6e"
  "\x74\x68\x63\x03\x0a\x6d\x61\x74\x63\x68\x2d\x6c\x77\x73\x64\x04"
  "\x19\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75"
  "\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x65\x03\x13\x70\x61\x72\x73"
  "\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x79\x65\x61\x72\x66\x03"
  "\x13\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x68"
  "\x6f\x75\x72\x67\x03\x15\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x32"
  "\x38\x32\x32\x2d\x6d\x69\x6e\x75\x74\x65\x68\x03\x17\x70\x61\x72"
  "\x73\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x6f\x62\x73\x2d\x79"
  "\x65\x61\x72\x69\x03\x15\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x32"
  "\x38\x32\x32\x2d\x73\x65\x63\x6f\x6e\x64\x6a\x03\x19\x70\x61\x72"
  "\x73\x65\x72\x3a\x6e\x75\x6d\x65\x72\x69\x63\x2d\x74\x69\x6d\x65"
  "\x2d\x7a\x6f\x6e\x65\x6b\x0a\x0e\x76\x65\x63\x74\x6f\x72\x2d\x61"
  "\x70\x70\x65\x6e\x64\x6c\x09\x23\x03\x17\x70\x61\x72\x73\x65\x72"
  "\x3a\x6e\x61\x6d\x65\x64\x2d\x74\x69\x6d\x65\x2d\x7a\x6f\x6e\x65"
  "\x6d\x03\x1a\x70\x61\x72\x73\x65\x72\x3a\x6d\x69\x6c\x69\x74\x61"
  "\x72\x79\x2d\x74\x69\x6d\x65\x2d\x7a\x6f\x6e\x65\x6e\x04\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6d\x61\x70\x6f\x14\xe3\x02\x76\x83\x04"
  "\xe2\x02\x74\x81\x87\x02\xe1\x02\x72\x81\x83\x02\xe0\x02\x70\x81"
  "\x83\x02\xdf\x02\x6e\x81\x85\x02\xde\x02\x6c\x81\x83\x02\xdd\x02"
  "\x6a\x81\x83\x02\xdc\x02\x68\x81\x8f\x02\xdb\x02\x66\x81\x8d\x02"
  "\xda\x02\x64\x81\x8b\x02\xd9\x02\x62\x81\x89\x02\xd8\x02\x60\x81"
  "\x87\x02\xd7\x02\x5e\x81\x85\x02\xd6\x02\x5c\x81\x83\x02\xd5\x02"
  "\x5a\x81\x89\x02\xd4\x02\x58\x81\x87\x02\xd3\x02\x56\x81\x8b\x02"
  "\xd2\x02\x54\x81\x8b\x02\xd1\x02\x52\x81\x83\x02\xd0\x02\x50\x81"
  "\x87\x02\xcf\x02\x4e\x81\x83\x02\xce\x02\x4c\x81\x89\x02\xcd\x02"
  "\x4a\x81\x87\x02\xcc\x02\x48\x81\x8b\x02\xcb\x02\x46\x81\x8b\x02"
  "\xca\x02\x44\x81\x83\x02\xc9\x02\x42\x81\x87\x02\xc8\x02\x40\x81"
  "\x89\x02\xc7\x02\x3e\x81\x87\x02\xc6\x02\x3c\x81\x89\x02\xc5\x02"
  "\x3a\x81\x83\x02\xc4\x02\x38\x81\x83\x02\xc3\x02\x36\x81\x87\x02"
  "\xc2\x02\x34\x81\x89\x02\xc1\x02\x32\x81\x89\x02\xc0\x02\x30\x81"
  "\x89\x02\xbf\x02\x2e\x81\x8b\x02\xbe\x02\x2c\x81\x83\x02\xbd\x02"
  "\x2a\x81\x87\x02\xbc\x02\x28\x81\x89\x02\xbb\x02\x26\x81\x87\x02"
  "\xba\x02\x24\x81\x83\x02\xb9\x02\x22\x81\x83\x02\xb8\x02\x20\x81"
  "\x89\x02\xb7\x02\x1e\x81\x8b\x02\xb6\x02\x1c\x81\x83\x02\xb5\x02"
  "\x1a\x81\x89\x02\xb4\x02\x18\x81\x8b\x02\xb3\x02\x16\x81\x8b\x02"
  "\xb2\x02\x14\x81\x83\x02\xb1\x02\x12\x81\x87\x02\xb0\x02\x10\x81"
  "\x89\x02\xaf\x02\x0e\x81\x85\x02\xae\x02\x0c\x81\x87\x02\xad\x02"
  "\x0a\x81\x87\x02\xac\x02\x08\x81\x85\x02\xab\x02\x06\x81\x83\x02"
  "\xaa\x02\x04\x83\x04\x75\xaa\x01\x70\x02\x2f\xd1\x0f\xed\x0e\x33"
  "\x02\x03\x04\x04\x04\x04\x6f\x03\x07\xee\x02\x18\x81\x83\x02\xed"
  "\x02\x16\x81\x83\x02\xec\x02\x14\x83\x04\xeb\x02\x12\x81\x85\x02"
  "\xea\x02\x10\x81\x85\x02\xe9\x02\x0e\x81\x87\x02\xe8\x02\x0c\x81"
  "\x85\x02\xe7\x02\x0a\x81\x85\x02\xe6\x02\x08\x81\x87\x02\xe5\x02"
  "\x06\x81\x83\x02\xe4\x02\x04\x83\x04\x17\x2c\x71\x02\x30\x0d\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x3a\x77\x73\x70\x72\x02\x03\x04\x04"
  "\x04\xf8\x02\x16\x81\x85\x02\xf7\x02\x14\x81\x85\x02\xf6\x02\x12"
  "\x81\x87\x02\xf5\x02\x10\x81\x83\x02\xf4\x02\x0e\x81\x85\x02\xf3"
  "\x02\x0c\x81\x83\x02\xf2\x02\x0a\x81\x85\x02\xf1\x02\x08\x81\x87"
  "\x02\xf0\x02\x06\x81\x83\x02\xef\x02\x04\x83\x04\x15\x22\x73\x02"
  "\x31\x72\x02\x03\x04\x04\x04\xfe\x02\x0e\x81\x85\x02\xfd\x02\x0c"
  "\x81\x85\x02\xfc\x02\x0a\x81\x87\x02\xfb\x02\x08\x81\x83\x02\xfa"
  "\x02\x06\x81\x83\x02\xf9\x02\x04\x83\x04\x0d\x1a\x72\x02\x32\x03"
  "\x4a\x04\x50\x03\x80\x03\x06\x81\x85\x02\xff\x02\x04\x83\x04\x05"
  "\x0d\x74\x02\x33\x01\x2e\x01\x2c\x3d\x50\x04\x27\x03\x06\x72\x6f"
  "\x75\x6e\x64\x75\x03\x04\x61\x62\x73\x76\x04\x4e\x04\x0f\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x77\x03\x18\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x71\x75"
  "\x6f\x74\x69\x65\x6e\x74\x78\x03\x19\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65"
  "\x72\x79\x04\x58\x09\x8c\x03\x1a\x81\x89\x02\x8b\x03\x18\x81\x8d"
  "\x02\x8a\x03\x16\x81\x89\x02\x89\x03\x14\x81\x89\x02\x88\x03\x12"
  "\x81\x8b\x02\x87\x03\x10\x81\x8d\x02\x86\x03\x0e\x81\x87\x02\x85"
  "\x03\x0c\x81\x85\x02\x84\x03\x0a\x81\x87\x02\x83\x03\x08\x81\x87"
  "\x02\x82\x03\x06\x81\x85\x02\x81\x03\x04\x84\x06\x19\x32\x7a\x02"
  "\x34\x0d\x12\x73\x74\x72\x69\x6e\x67\x2d\x3e\x74\x69\x6d\x65\x2d"
  "\x7a\x6f\x6e\x65\x7b\x11\x70\x61\x72\x73\x65\x72\x3a\x74\x69\x6d"
  "\x65\x2d\x7a\x6f\x6e\x65\x7c\x02\x04\x5c\x04\x2a\x03\x90\x03\x0a"
  "\x81\x83\x02\x8f\x03\x08\x81\x85\x02\x8e\x03\x06\x81\x87\x02\x8d"
  "\x03\x04\x83\x04\x09\x16\x7d\x02\x35\x03\x03\x6b\x04\x03\x6d\x03"
  "\x6e\x06\x98\x03\x12\x81\x87\x02\x97\x03\x10\x81\x87\x02\x96\x03"
  "\x0e\x81\x87\x02\x95\x03\x0c\x81\x87\x02\x94\x03\x0a\x81\x87\x02"
  "\x93\x03\x08\x81\x85\x02\x92\x03\x06\x81\x83\x02\x91\x03\x04\x83"
  "\x04\x11\x1f\x7e\x02\x36\x02\x2b\x0d\x3d\x01\x2e\x01\x2c\x03\x04"
  "\x65\x04\x04\x03\x15\x70\x61\x72\x73\x65\x2d\x74\x69\x6d\x65\x2d"
  "\x7a\x6f\x6e\x65\x2d\x68\x6f\x75\x72\x7f\x03\x17\x70\x61\x72\x73"
  "\x65\x2d\x74\x69\x6d\x65\x2d\x7a\x6f\x6e\x65\x2d\x6d\x69\x6e\x75"
  "\x74\x65\x80\x01\x05\x6c\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f"
  "\x09\xad\x03\x2c\x81\x89\x02\xac\x03\x2a\x81\x83\x02\xab\x03\x28"
  "\x81\x85\x02\xaa\x03\x26\x81\x83\x02\xa9\x03\x24\x81\x87\x02\xa8"
  "\x03\x22\x81\x8f\x02\xa7\x03\x20\x81\x8d\x02\xa6\x03\x1e\x81\x85"
  "\x02\xa5\x03\x1c\x81\x85\x02\xa4\x03\x1a\x81\x8b\x02\xa3\x03\x18"
  "\x81\x85\x02\xa2\x03\x16\x81\x85\x02\xa1\x03\x14\x81\x89\x02\xa0"
  "\x03\x12\x81\x85\x02\x9f\x03\x10\x81\x87\x02\x9e\x03\x0e\x81\x85"
  "\x02\x9d\x03\x0c\x81\x87\x02\x9c\x03\x0a\x81\x85\x02\x9b\x03\x08"
  "\x81\x85\x02\x9a\x03\x06\x81\x83\x02\x99\x03\x04\x83\x04\x2b\x47"
  "\x81\x01\x02\x37\x04\x63\x61\x72\x04\x63\x64\x72\x0d\x03\x55\x54"
  "\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x61\x6c\x70\x68\x61\x62"
  "\x65\x74\x69\x63\x82\x01\x11\x6e\x61\x6d\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x7a\x6f\x6e\x65\x73\x83\x01\x03\x03\x04\x1b\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x73\x74\x72\x69\x6e\x67\x84\x01\x04\x04\x04\x04\x05\x66\x69"
  "\x6e\x64\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x3d\x3f\x85"
  "\x01\x08\xc4\x03\x30\x81\x85\x02\xc3\x03\x2e\x81\x85\x02\xc2\x03"
  "\x2c\x81\x85\x02\xc1\x03\x2a\x81\x87\x02\xc0\x03\x28\x81\x85\x02"
  "\xbf\x03\x26\x81\x8b\x02\xbe\x03\x24\x81\x8b\x02\xbd\x03\x22\x81"
  "\x8b\x02\xbc\x03\x20\x81\x87\x02\xbb\x03\x1e\x81\x85\x02\xba\x03"
  "\x1c\x81\x87\x02\xb9\x03\x1a\x81\x85\x02\xb8\x03\x18\x81\x85\x02"
  "\xb7\x03\x16\x81\x85\x02\xb6\x03\x14\x81\x8d\x02\xb5\x03\x12\x81"
  "\x87\x02\xb4\x03\x10\x81\x87\x02\xb3\x03\x0e\x81\x85\x02\xb2\x03"
  "\x0c\x81\x87\x02\xb1\x03\x0a\x81\x85\x02\xb0\x03\x08\x81\x85\x02"
  "\xaf\x03\x06\x81\x83\x02\xae\x03\x04\x83\x04\x2f\x49\x86\x01\x02"
  "\x38\x01\x42\x01\x5b\x01\x4a\x01\x4c\x42\x01\x4e\x01\x4f\x0b\x4c"
  "\x01\x5a\x4f\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65"
  "\x72\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x0d\x82\x01\x02"
  "\x03\x04\x04\x04\x03\x0c\x63\x68\x61\x72\x2d\x75\x70\x63\x61\x73"
  "\x65\x04\x08\x63\x68\x61\x72\x3e\x3d\x3f\x04\x08\x63\x68\x61\x72"
  "\x3c\x3d\x3f\x08\xdf\x03\x38\x81\x87\x02\xde\x03\x36\x81\x89\x02"
  "\xdd\x03\x34\x81\x89\x02\xdc\x03\x32\x81\x89\x02\xdb\x03\x30\x81"
  "\x89\x02\xda\x03\x2e\x81\x89\x02\xd9\x03\x2c\x81\x89\x02\xd8\x03"
  "\x2a\x81\x89\x02\xd7\x03\x28\x81\x89\x02\xd6\x03\x26\x81\x89\x02"
  "\xd5\x03\x24\x81\x89\x02\xd4\x03\x22\x81\x89\x02\xd3\x03\x20\x81"
  "\x89\x02\xd2\x03\x1e\x81\x89\x02\xd1\x03\x1c\x81\x89\x02\xd0\x03"
  "\x1a\x81\x89\x02\xcf\x03\x18\x81\x89\x02\xce\x03\x16\x81\x89\x02"
  "\xcd\x03\x14\x81\x89\x02\xcc\x03\x12\x81\x85\x02\xcb\x03\x10\x81"
  "\x8b\x02\xca\x03\x0e\x81\x8b\x02\xc9\x03\x0c\x81\x85\x02\xc8\x03"
  "\x0a\x81\x85\x02\xc7\x03\x08\x81\x87\x02\xc6\x03\x06\x81\x83\x02"
  "\xc5\x03\x04\x83\x04\x37\x5b\x82\x01\x02\x39\x03\x4a\x04\x1c\x77"
  "\x72\x69\x74\x65\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x61\x73\x2d\x63\x74\x69\x6d\x65\x87\x01\x03\xe1\x03\x06"
  "\x81\x85\x02\xe0\x03\x04\x83\x04\x05\x0d\x88\x01\x02\x3a\x01\x3b"
  "\x0b\x01\x21\x0d\x08\x03\x56\x04\x4e\x04\x53\x03\x57\x04\x55\x04"
  "\x58\x07\xf9\x03\x32\x81\x85\x02\xf8\x03\x30\x81\x85\x02\xf7\x03"
  "\x2e\x81\x85\x02\xf6\x03\x2c\x81\x89\x02\xf5\x03\x2a\x81\x85\x02"
  "\xf4\x03\x28\x81\x85\x02\xf3\x03\x26\x81\x89\x02\xf2\x03\x24\x81"
  "\x85\x02\xf1\x03\x22\x81\x85\x02\xf0\x03\x20\x81\x89\x02\xef\x03"
  "\x1e\x81\x85\x02\xee\x03\x1c\x81\x85\x02\xed\x03\x1a\x81\x83\x02"
  "\xec\x03\x18\x81\x87\x02\xeb\x03\x16\x81\x85\x02\xea\x03\x14\x81"
  "\x83\x02\xe9\x03\x12\x81\x89\x02\xe8\x03\x10\x81\x85\x02\xe7\x03"
  "\x0e\x81\x8b\x02\xe6\x03\x0c\x81\x85\x02\xe5\x03\x0a\x81\x89\x02"
  "\xe4\x03\x08\x81\x85\x02\xe3\x03\x06\x81\x8b\x02\xe2\x03\x04\x84"
  "\x06\x31\x4c\x53\x02\x3b\x0d\x1b\x63\x74\x69\x6d\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x89\x01\x08\x03\x0d\x70\x61\x72\x73\x65\x72\x3a\x63\x74"
  "\x69\x6d\x65\x8a\x01\x04\x2a\x04\x5c\x04\xfd\x03\x0a\x81\x89\x02"
  "\xfc\x03\x08\x81\x85\x02\xfb\x03\x06\x81\x87\x02\xfa\x03\x04\x84"
  "\x04\x09\x17\x8b\x01\x02\x3c\x03\x32\x03\x1b\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x63\x74\x69\x6d\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x8c\x01\x03\xff\x03\x06\x81\x83\x02\xfe\x03"
  "\x04\x83\x04\x05\x0d\x8d\x01\x02\x3d\x03\x34\x03\x8c\x01\x03\x81"
  "\x04\x06\x81\x83\x02\x80\x04\x04\x83\x04\x05\x0d\x8e\x01\x02\x3e"
  "\x04\x89\x01\x03\x3d\x03\x83\x04\x06\x81\x85\x02\x82\x04\x04\x84"
  "\x04\x05\x0d\x8f\x01\x02\x3f\x03\x47\x03\x8c\x01\x03\x85\x04\x06"
  "\x81\x83\x02\x84\x04\x04\x83\x04\x05\x0d\x90\x01\x02\x40\x03\x49"
  "\x03\x8c\x01\x03\x87\x04\x06\x81\x83\x02\x86\x04\x04\x83\x04\x05"
  "\x0d\x91\x01\x02\x41\x04\x89\x01\x03\x5a\x03\x89\x04\x06\x81\x85"
  "\x02\x88\x04\x04\x84\x04\x05\x0d\x92\x01\x02\x42\x0d\x01\x3b\x01"
  "\x21\x8a\x01\x04\x27\x03\x03\x62\x03\x63\x04\x04\x65\x03\x11\x70"
  "\x61\x72\x73\x65\x2d\x63\x74\x69\x6d\x65\x2d\x68\x6f\x75\x72\x93"
  "\x01\x03\x11\x70\x61\x72\x73\x65\x2d\x63\x74\x69\x6d\x65\x2d\x64"
  "\x61\x79\x31\x94\x01\x03\x13\x70\x61\x72\x73\x65\x2d\x63\x74\x69"
  "\x6d\x65\x2d\x6d\x69\x6e\x75\x74\x65\x95\x01\x03\x11\x70\x61\x72"
  "\x73\x65\x2d\x63\x74\x69\x6d\x65\x2d\x64\x61\x79\x32\x96\x01\x03"
  "\x13\x70\x61\x72\x73\x65\x2d\x63\x74\x69\x6d\x65\x2d\x73\x65\x63"
  "\x6f\x6e\x64\x97\x01\x03\x11\x70\x61\x72\x73\x65\x2d\x63\x74\x69"
  "\x6d\x65\x2d\x79\x65\x61\x72\x98\x01\x09\x6c\x09\x23\x0f\xad\x04"
  "\x4a\x81\x8d\x02\xac\x04\x48\x81\x8b\x02\xab\x04\x46\x81\x89\x02"
  "\xaa\x04\x44\x81\x87\x02\xa9\x04\x42\x81\x85\x02\xa8\x04\x40\x81"
  "\x83\x02\xa7\x04\x3e\x81\x91\x02\xa6\x04\x3c\x81\x8f\x02\xa5\x04"
  "\x3a\x81\x8d\x02\xa4\x04\x38\x81\x8b\x02\xa3\x04\x36\x81\x8d\x02"
  "\xa2\x04\x34\x81\x83\x02\xa1\x04\x32\x81\x85\x02\xa0\x04\x30\x81"
  "\x83\x02\x9f\x04\x2e\x81\x89\x02\x9e\x04\x2c\x81\x8b\x02\x9d\x04"
  "\x2a\x81\x83\x02\x9c\x04\x28\x81\x8b\x02\x9b\x04\x26\x81\x83\x02"
  "\x9a\x04\x24\x81\x87\x02\x99\x04\x22\x81\x89\x02\x98\x04\x20\x81"
  "\x8b\x02\x97\x04\x1e\x81\x83\x02\x96\x04\x1c\x81\x87\x02\x95\x04"
  "\x1a\x81\x89\x02\x94\x04\x18\x81\x87\x02\x93\x04\x16\x81\x8b\x02"
  "\x92\x04\x14\x81\x89\x02\x91\x04\x12\x81\x8b\x02\x90\x04\x10\x81"
  "\x89\x02\x8f\x04\x0e\x81\x87\x02\x8e\x04\x0c\x81\x89\x02\x8d\x04"
  "\x0a\x81\x85\x02\x8c\x04\x08\x81\x85\x02\x8b\x04\x06\x83\x04\x8a"
  "\x04\x04\x81\x83\x02\x49\x73\x99\x01\x02\x43\x0d\x1d\x69\x73\x6f"
  "\x38\x36\x30\x31\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x64\x65\x63"
  "\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x9a\x01\x19\x70\x61\x72\x73"
  "\x65\x72\x3a\x69\x73\x6f\x38\x36\x30\x31\x2d\x64\x61\x74\x65\x2f"
  "\x74\x69\x6d\x65\x9b\x01\x02\x06\x5c\x04\x2a\x03\xb1\x04\x0a\x81"
  "\x87\x02\xb0\x04\x08\x81\x89\x02\xaf\x04\x06\x81\x8f\x02\xae\x04"
  "\x04\x85\x04\x09\x16\x9c\x01\x02\x44\x0d\x25\x78\x6d\x6c\x2d\x72"
  "\x70\x63\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x9d"
  "\x01\x21\x70\x61\x72\x73\x65\x72\x3a\x78\x6d\x6c\x2d\x72\x70\x63"
  "\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x64\x61\x74\x65\x2f\x74\x69"
  "\x6d\x65\x9e\x01\x02\x06\x5c\x04\x2a\x03\xb5\x04\x0a\x81\x87\x02"
  "\xb4\x04\x08\x81\x89\x02\xb3\x04\x06\x81\x8f\x02\xb2\x04\x04\x85"
  "\x04\x09\x16\x5c\x02\x45\x03\x4a\x04\x27\x77\x72\x69\x74\x65\x2d"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x61\x73\x2d"
  "\x69\x73\x6f\x38\x36\x30\x31\x2d\x65\x78\x74\x65\x6e\x64\x65\x64"
  "\x9f\x01\x03\xb7\x04\x06\x81\x85\x02\xb6\x04\x04\x83\x04\x05\x0d"
  "\xa0\x01\x02\x46\x03\x4a\x04\x26\x77\x72\x69\x74\x65\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x61\x73\x2d\x78\x6d"
  "\x6c\x2d\x72\x70\x63\x2d\x69\x73\x6f\x38\x36\x30\x31\x4a\x03\xb9"
  "\x04\x06\x81\x85\x02\xb8\x04\x04\x83\x04\x05\x0d\xa1\x01\x02\x47"
  "\x01\x55\x04\x26\x77\x72\x69\x74\x65\x2d\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x62"
  "\x61\x73\x69\x63\x2d\x64\x61\x74\x65\xa2\x01\x04\x4e\x04\x26\x77"
  "\x72\x69\x74\x65\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x62\x61\x73\x69\x63\x2d"
  "\x74\x69\x6d\x65\xa3\x01\x04\x20\x77\x72\x69\x74\x65\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x69\x73\x6f\x38\x36"
  "\x30\x31\x2d\x7a\x6f\x6e\x65\xa4\x01\x05\xbd\x04\x0a\x81\x85\x02"
  "\xbc\x04\x08\x81\x85\x02\xbb\x04\x06\x81\x85\x02\xba\x04\x04\x84"
  "\x06\x09\x16\xa5\x01\x02\x48\x01\x55\x04\x29\x77\x72\x69\x74\x65"
  "\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x69\x73"
  "\x6f\x38\x36\x30\x31\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x64"
  "\x61\x74\x65\xa6\x01\x04\x4e\x04\x29\x77\x72\x69\x74\x65\x2d\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x69\x73\x6f\x38"
  "\x36\x30\x31\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\xa7\x01\x04\xa4\x01\x05\xc1\x04\x0a\x81\x85\x02\xc0\x04\x08"
  "\x81\x85\x02\xbf\x04\x06\x81\x85\x02\xbe\x04\x04\x84\x06\x09\x16"
  "\xa8\x01\x02\x49\x01\x55\x04\xa2\x01\x04\x4e\x04\xa7\x01\x04\xc4"
  "\x04\x08\x81\x85\x02\xc3\x04\x06\x81\x85\x02\xc2\x04\x04\x84\x06"
  "\x07\x12\xa9\x01\x02\x4a\x0d\x04\x55\x04\x58\x03\xca\x04\x0e\x81"
  "\x85\x02\xc9\x04\x0c\x81\x85\x02\xc8\x04\x0a\x81\x89\x02\xc7\x04"
  "\x08\x81\x85\x02\xc6\x04\x06\x81\x89\x02\xc5\x04\x04\x84\x06\x0d"
  "\x19\xaa\x01\x02\x4b\x01\x2e\x0d\x04\x55\x04\x4e\x04\x58\x04\xd2"
  "\x04\x12\x81\x85\x02\xd1\x04\x10\x81\x85\x02\xd0\x04\x0e\x81\x85"
  "\x02\xcf\x04\x0c\x81\x89\x02\xce\x04\x0a\x81\x85\x02\xcd\x04\x08"
  "\x81\x85\x02\xcc\x04\x06\x81\x89\x02\xcb\x04\x04\x84\x06\x11\x20"
  "\xab\x01\x02\x4c\x0d\x04\x58\x02\xd8\x04\x0e\x81\x85\x02\xd7\x04"
  "\x0c\x81\x85\x02\xd6\x04\x0a\x81\x89\x02\xd5\x04\x08\x81\x85\x02"
  "\xd4\x04\x06\x81\x89\x02\xd3\x04\x04\x84\x06\x0d\x17\xac\x01\x02"
  "\x4d\x01\x3b\x0d\x04\x58\x04\x4e\x03\xe0\x04\x12\x81\x85\x02\xdf"
  "\x04\x10\x81\x85\x02\xde\x04\x0e\x81\x85\x02\xdd\x04\x0c\x81\x89"
  "\x02\xdc\x04\x0a\x81\x85\x02\xdb\x04\x08\x81\x85\x02\xda\x04\x06"
  "\x81\x89\x02\xd9\x04\x04\x84\x06\x11\x1e\xad\x01\x02\x4e\x01\x3b"
  "\x01\x2e\x01\x2c\x01\x5b\x3d\x02\x0d\x0a\x03\x4f\x03\x76\x04\x4e"
  "\x03\x75\x04\x77\x03\x78\x03\x79\x04\x58\x09\xf3\x04\x28\x81\x89"
  "\x02\xf2\x04\x26\x81\x89\x02\xf1\x04\x24\x81\x89\x02\xf0\x04\x22"
  "\x81\x89\x02\xef\x04\x20\x81\x8d\x02\xee\x04\x1e\x81\x89\x02\xed"
  "\x04\x1c\x81\x89\x02\xec\x04\x1a\x81\x8b\x02\xeb\x04\x18\x81\x8d"
  "\x02\xea\x04\x16\x81\x87\x02\xe9\x04\x14\x81\x89\x02\xe8\x04\x12"
  "\x81\x89\x02\xe7\x04\x10\x81\x89\x02\xe6\x04\x0e\x81\x8b\x02\xe5"
  "\x04\x0c\x81\x8b\x02\xe4\x04\x0a\x81\x87\x02\xe3\x04\x08\x81\x87"
  "\x02\xe2\x04\x06\x81\x85\x02\xe1\x04\x04\x84\x06\x27\x44\x79\x02"
  "\x4f\x03\x32\x03\x1d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x3e\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74\x72\x69\x6e"
  "\x67\x78\x03\xf5\x04\x06\x81\x83\x02\xf4\x04\x04\x83\x04\x05\x0d"
  "\x77\x02\x50\x03\x34\x03\x78\x03\xf7\x04\x06\x81\x83\x02\xf6\x04"
  "\x04\x83\x04\x05\x0d\x76\x02\x51\x03\x9a\x01\x03\x3d\x03\xf9\x04"
  "\x06\x81\x83\x02\xf8\x04\x04\x83\x04\x05\x0d\x75\x02\x52\x03\x47"
  "\x03\x78\x03\xfb\x04\x06\x81\x83\x02\xfa\x04\x04\x83\x04\x05\x0d"
  "\x47\x02\x53\x03\x49\x03\x78\x03\xfd\x04\x06\x81\x83\x02\xfc\x04"
  "\x04\x83\x04\x05\x0d\x49\x02\x54\x03\x9a\x01\x03\x5a\x03\xff\x04"
  "\x06\x81\x83\x02\xfe\x04\x04\x83\x04\x05\x0d\x5a\x02\x55\x01\x21"
  "\x01\x55\x03\x03\x16\x70\x61\x72\x73\x65\x2d\x62\x61\x73\x69\x63"
  "\x2d\x38\x36\x30\x31\x2d\x64\x61\x74\x65\xae\x01\x04\x03\x19\x70"
  "\x61\x72\x73\x65\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x38\x36"
  "\x30\x31\x2d\x64\x61\x74\x65\xaf\x01\x03\x16\x70\x61\x72\x73\x65"
  "\x2d\x62\x61\x73\x69\x63\x2d\x38\x36\x30\x31\x2d\x74\x69\x6d\x65"
  "\xb0\x01\x04\x65\x03\x16\x70\x61\x72\x73\x65\x2d\x62\x61\x73\x69"
  "\x63\x2d\x38\x36\x30\x31\x2d\x7a\x6f\x6e\x65\xb1\x01\x03\x19\x70"
  "\x61\x72\x73\x65\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x38\x36"
  "\x30\x31\x2d\x74\x69\x6d\x65\xb2\x01\x06\x6c\x03\x19\x70\x61\x72"
  "\x73\x65\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x38\x36\x30\x31"
  "\x2d\x7a\x6f\x6e\x65\xb3\x01\x03\x17\x63\x6f\x6e\x76\x65\x72\x74"
  "\x2d\x38\x36\x30\x31\x2d\x64\x61\x74\x65\x2f\x74\x69\x6d\x65\xb4"
  "\x01\x0c\x9e\x05\x40\x81\x83\x02\x9d\x05\x3e\x81\x83\x02\x9c\x05"
  "\x3c\x81\x83\x02\x9b\x05\x3a\x81\x83\x02\x9a\x05\x38\x81\x83\x02"
  "\x99\x05\x36\x81\x8b\x02\x98\x05\x34\x81\x83\x02\x97\x05\x32\x81"
  "\x83\x02\x96\x05\x30\x81\x89\x02\x95\x05\x2e\x81\x83\x02\x94\x05"
  "\x2c\x81\x8b\x02\x93\x05\x2a\x81\x87\x02\x92\x05\x28\x81\x83\x02"
  "\x91\x05\x26\x81\x87\x02\x90\x05\x24\x81\x83\x02\x8f\x05\x22\x81"
  "\x89\x02\x8e\x05\x20\x81\x85\x02\x8d\x05\x1e\x81\x85\x02\x8c\x05"
  "\x1c\x81\x87\x02\x8b\x05\x1a\x81\x89\x02\x8a\x05\x18\x81\x83\x02"
  "\x89\x05\x16\x81\x87\x02\x88\x05\x14\x81\x83\x02\x87\x05\x12\x81"
  "\x87\x02\x86\x05\x10\x81\x87\x02\x85\x05\x0e\x81\x83\x02\x84\x05"
  "\x0c\x81\x85\x02\x83\x05\x0a\x81\x83\x02\x82\x05\x08\x81\x85\x02"
  "\x81\x05\x06\x81\x83\x02\x80\x05\x04\x83\x04\x3f\x5b\xb5\x01\x02"
  "\x56\x01\x55\x03\x04\x65\x03\xaf\x01\x04\x03\xb2\x01\x03\xae\x01"
  "\x03\xb3\x01\x03\xb0\x01\x05\x6c\x03\xb1\x01\x03\xb4\x01\x0c\xb7"
  "\x05\x34\x81\x8b\x02\xb6\x05\x32\x81\x8b\x02\xb5\x05\x30\x81\x89"
  "\x02\xb4\x05\x2e\x81\x83\x02\xb3\x05\x2c\x81\x83\x02\xb2\x05\x2a"
  "\x81\x8b\x02\xb1\x05\x28\x81\x89\x02\xb0\x05\x26\x81\x85\x02\xaf"
  "\x05\x24\x81\x83\x02\xae\x05\x22\x81\x83\x02\xad\x05\x20\x81\x89"
  "\x02\xac\x05\x1e\x81\x83\x02\xab\x05\x1c\x81\x8b\x02\xaa\x05\x1a"
  "\x81\x83\x02\xa9\x05\x18\x81\x87\x02\xa8\x05\x16\x81\x83\x02\xa7"
  "\x05\x14\x81\x89\x02\xa6\x05\x12\x81\x87\x02\xa5\x05\x10\x81\x89"
  "\x02\xa4\x05\x0e\x81\x83\x02\xa3\x05\x0c\x81\x87\x02\xa2\x05\x0a"
  "\x81\x87\x02\xa1\x05\x08\x81\x87\x02\xa0\x05\x06\x81\x83\x02\x9f"
  "\x05\x04\x83\x04\x33\x4e\xb6\x01\x02\x57\x81\xa3\x05\x19\x08\x0d"
  "\x09\x23\x04\x05\x65\x71\x76\x3f\x03\x34\x03\x3d\x05\xce\x05\x30"
  "\x81\x93\x02\xcd\x05\x2e\x81\x93\x02\xcc\x05\x2c\x81\x93\x02\xcb"
  "\x05\x2a\x81\x93\x02\xca\x05\x28\x81\x93\x02\xc9\x05\x26\x81\x93"
  "\x02\xc8\x05\x24\x81\x93\x02\xc7\x05\x22\x81\x9d\x02\xc6\x05\x20"
  "\x81\x9b\x02\xc5\x05\x1e\x81\x9b\x02\xc4\x05\x1c\x81\x99\x02\xc3"
  "\x05\x1a\x81\x99\x02\xc2\x05\x18\x81\x91\x02\xc1\x05\x16\x81\x91"
  "\x02\xc0\x05\x14\x81\x91\x02\xbf\x05\x12\x81\x8f\x02\xbe\x05\x10"
  "\x81\x8d\x02\xbd\x05\x0e\x81\x8b\x02\xbc\x05\x0c\x81\x89\x02\xbb"
  "\x05\x0a\x81\x87\x02\xba\x05\x08\x81\x85\x02\xb9\x05\x06\x81\x83"
  "\x02\xb8\x05\x04\x83\x04\x2f\x47\xb7\x01\x02\x58\x01\x58\x03\x03"
  "\x10\x70\x61\x72\x73\x65\x2d\x38\x36\x30\x31\x2d\x79\x65\x61\x72"
  "\xb8\x01\x03\x11\x70\x61\x72\x73\x65\x2d\x38\x36\x30\x31\x2d\x6d"
  "\x6f\x6e\x74\x68\xb9\x01\x03\x0f\x70\x61\x72\x73\x65\x2d\x38\x36"
  "\x30\x31\x2d\x64\x61\x79\xba\x01\x04\x05\x6c\x04\x6c\x03\x10\x70"
  "\x61\x72\x73\x65\x2d\x38\x36\x30\x31\x2d\x77\x65\x65\x6b\xbb\x01"
  "\x04\x65\x03\x14\x70\x61\x72\x73\x65\x2d\x38\x36\x30\x31\x2d\x77"
  "\x65\x65\x6b\x2d\x64\x61\x79\xbc\x01\x03\x17\x70\x61\x72\x73\x65"
  "\x2d\x38\x36\x30\x31\x2d\x6f\x72\x64\x69\x6e\x61\x6c\x2d\x64\x61"
  "\x79\xbd\x01\x03\x16\x77\x65\x65\x6b\x2d\x64\x61\x74\x65\x2d\x3e"
  "\x6d\x6f\x6e\x74\x68\x2d\x64\x61\x74\x65\xbe\x01\x03\x19\x6f\x72"
  "\x64\x69\x6e\x61\x6c\x2d\x64\x61\x74\x65\x2d\x3e\x6d\x6f\x6e\x74"
  "\x68\x2d\x64\x61\x74\x65\xbf\x01\x0e\xe3\x05\x2c\x81\x87\x02\xe2"
  "\x05\x2a\x81\x8b\x02\xe1\x05\x28\x81\x87\x02\xe0\x05\x26\x81\x87"
  "\x02\xdf\x05\x24\x81\x89\x02\xde\x05\x22\x81\x8d\x02\xdd\x05\x20"
  "\x81\x85\x02\xdc\x05\x1e\x81\x89\x02\xdb\x05\x1c\x81\x8b\x02\xda"
  "\x05\x1a\x81\x85\x02\xd9\x05\x18\x81\x87\x02\xd8\x05\x16\x81\x85"
  "\x02\xd7\x05\x14\x81\x85\x02\xd6\x05\x12\x81\x87\x02\xd5\x05\x10"
  "\x81\x85\x02\xd4\x05\x0e\x81\x89\x02\xd3\x05\x0c\x81\x85\x02\xd2"
  "\x05\x0a\x81\x87\x02\xd1\x05\x08\x81\x85\x02\xd0\x05\x06\x81\x83"
  "\x02\xcf\x05\x04\x83\x04\x2b\x4a\xc0\x01\x02\x59\x03\x2d\x57\x01"
  "\x2e\x03\x03\xb8\x01\x03\xb9\x01\x04\x65\x04\x03\xba\x01\x03\xbb"
  "\x01\x04\x84\x01\x05\x6c\x04\x6c\x03\xbc\x01\x03\xbd\x01\x03\xbe"
  "\x01\x03\xbf\x01\x0f\xfc\x05\x34\x81\x87\x02\xfb\x05\x32\x81\x8b"
  "\x02\xfa\x05\x30\x81\x87\x02\xf9\x05\x2e\x81\x89\x02\xf8\x05\x2c"
  "\x81\x8d\x02\xf7\x05\x2a\x81\x87\x02\xf6\x05\x28\x81\x89\x02\xf5"
  "\x05\x26\x81\x8b\x02\xf4\x05\x24\x81\x85\x02\xf3\x05\x22\x81\x87"
  "\x02\xf2\x05\x20\x81\x85\x02\xf1\x05\x1e\x81\x87\x02\xf0\x05\x1c"
  "\x81\x89\x02\xef\x05\x1a\x81\x85\x02\xee\x05\x18\x81\x89\x02\xed"
  "\x05\x16\x81\x85\x02\xec\x05\x14\x81\x87\x02\xeb\x05\x12\x81\x85"
  "\x02\xea\x05\x10\x81\x87\x02\xe9\x05\x0e\x81\x89\x02\xe8\x05\x0c"
  "\x81\x85\x02\xe7\x05\x0a\x81\x85\x02\xe6\x05\x08\x81\x87\x02\xe5"
  "\x05\x06\x81\x83\x02\xe4\x05\x04\x83\x04\x33\x55\xc1\x01\x02\x5a"
  "\x81\xa3\x05\x08\x0d\x09\x23\x03\x3d\x03\x34\x04\x8f\x06\x28\x81"
  "\x83\x02\x8e\x06\x26\x81\x85\x02\x8d\x06\x24\x81\x83\x02\x8c\x06"
  "\x22\x81\x83\x02\x8b\x06\x20\x81\x85\x02\x8a\x06\x1e\x81\x85\x02"
  "\x89\x06\x1c\x81\x83\x02\x88\x06\x1a\x81\x83\x02\x87\x06\x18\x81"
  "\x83\x02\x86\x06\x16\x81\x89\x02\x85\x06\x14\x81\x8d\x02\x84\x06"
  "\x12\x81\x8b\x02\x83\x06\x10\x81\x89\x02\x82\x06\x0e\x81\x89\x02"
  "\x81\x06\x0c\x81\x87\x02\x80\x06\x0a\x81\x87\x02\xff\x05\x08\x81"
  "\x85\x02\xfe\x05\x06\x81\x83\x02\xfd\x05\x04\x83\x04\x27\x3a\xc2"
  "\x01\x02\x5b\x81\xa3\x05\x0d\x09\x23\x03\x3d\x03\x34\x04\x9c\x06"
  "\x1c\x81\x83\x02\x9b\x06\x1a\x81\x85\x02\x9a\x06\x18\x81\x83\x02"
  "\x99\x06\x16\x81\x83\x02\x98\x06\x14\x81\x87\x02\x97\x06\x12\x81"
  "\x8b\x02\x96\x06\x10\x81\x89\x02\x95\x06\x0e\x81\x87\x02\x94\x06"
  "\x0c\x81\x87\x02\x93\x06\x0a\x81\x85\x02\x92\x06\x08\x81\x85\x02"
  "\x91\x06\x06\x81\x83\x02\x90\x06\x04\x83\x04\x1b\x2c\xc3\x01\x02"
  "\x5c\x01\x5b\x03\x04\x65\x04\x03\x10\x70\x61\x72\x73\x65\x2d\x38"
  "\x36\x30\x31\x2d\x73\x69\x67\x6e\xc4\x01\x03\x15\x70\x61\x72\x73"
  "\x65\x2d\x38\x36\x30\x31\x2d\x7a\x6f\x6e\x65\x2d\x68\x6f\x75\x72"
  "\xc5\x01\x05\x6c\x03\x12\x70\x61\x72\x73\x65\x2d\x38\x36\x30\x31"
  "\x2d\x6d\x69\x6e\x75\x74\x65\xc6\x01\x03\x14\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x2d\x38\x36\x30\x31\x2d\x7a\x6f\x6e\x65\xc7\x01"
  "\x09\xab\x06\x20\x81\x83\x02\xaa\x06\x1e\x81\x89\x02\xa9\x06\x1c"
  "\x81\x83\x02\xa8\x06\x1a\x81\x89\x02\xa7\x06\x18\x81\x87\x02\xa6"
  "\x06\x16\x81\x87\x02\xa5\x06\x14\x81\x87\x02\xa4\x06\x12\x81\x87"
  "\x02\xa3\x06\x10\x81\x83\x02\xa2\x06\x0e\x81\x85\x02\xa1\x06\x0c"
  "\x81\x83\x02\xa0\x06\x0a\x81\x85\x02\x9f\x06\x08\x81\x85\x02\x9e"
  "\x06\x06\x81\x83\x02\x9d\x06\x04\x83\x04\x1f\x35\xc8\x01\x02\x5d"
  "\x01\x3b\x01\x5b\x03\x04\x65\x04\x03\xc4\x01\x03\xc5\x01\x05\x6c"
  "\x04\x6c\x03\xc7\x01\x03\xc6\x01\x0a\xbf\x06\x2a\x81\x83\x02\xbe"
  "\x06\x28\x81\x83\x02\xbd\x06\x26\x81\x89\x02\xbc\x06\x24\x81\x83"
  "\x02\xbb\x06\x22\x81\x87\x02\xba\x06\x20\x81\x8d\x02\xb9\x06\x1e"
  "\x81\x83\x02\xb8\x06\x1c\x81\x87\x02\xb7\x06\x1a\x81\x89\x02\xb6"
  "\x06\x18\x81\x87\x02\xb5\x06\x16\x81\x87\x02\xb4\x06\x14\x81\x87"
  "\x02\xb3\x06\x12\x81\x87\x02\xb2\x06\x10\x81\x83\x02\xb1\x06\x0e"
  "\x81\x85\x02\xb0\x06\x0c\x81\x83\x02\xaf\x06\x0a\x81\x85\x02\xae"
  "\x06\x08\x81\x85\x02\xad\x06\x06\x81\x83\x02\xac\x06\x04\x83\x04"
  "\x29\x42\xc9\x01\x02\x5e\x19\x0d\x3d\xc8\x06\x14\x81\x85\x02\xc7"
  "\x06\x12\x81\x85\x02\xc6\x06\x10\x81\x85\x02\xc5\x06\x0e\x81\x85"
  "\x02\xc4\x06\x0c\x81\x83\x02\xc3\x06\x0a\x81\x85\x02\xc2\x06\x08"
  "\x81\x83\x02\xc1\x06\x06\x81\x87\x02\xc0\x06\x04\x83\x04\x13\x1c"
  "\xca\x01\x02\x5f\x03\x03\x10\x70\x61\x72\x73\x65\x2d\x38\x36\x30"
  "\x31\x2d\x68\x6f\x75\x72\xcb\x01\x04\x04\x6c\x03\xc6\x01\x03\x12"
  "\x71\x75\x61\x6c\x69\x66\x79\x2d\x38\x36\x30\x31\x2d\x74\x69\x6d"
  "\x65\xcc\x01\x03\x14\x70\x61\x72\x73\x65\x2d\x38\x36\x30\x31\x2d"
  "\x66\x72\x61\x63\x74\x69\x6f\x6e\xcd\x01\x03\x12\x70\x61\x72\x73"
  "\x65\x2d\x38\x36\x30\x31\x2d\x73\x65\x63\x6f\x6e\x64\xce\x01\x03"
  "\x1d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x38\x36\x30\x31\x2d"
  "\x68\x6f\x75\x72\x2d\x66\x72\x61\x63\x74\x69\x6f\x6e\xcf\x01\x03"
  "\x1f\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x38\x36\x30\x31\x2d"
  "\x6d\x69\x6e\x75\x74\x65\x2d\x66\x72\x61\x63\x74\x69\x6f\x6e\xd0"
  "\x01\x0b\xe9\x06\x44\x81\x83\x02\xe8\x06\x42\x81\x87\x02\xe7\x06"
  "\x40\x81\x83\x02\xe6\x06\x3e\x81\x83\x02\xe5\x06\x3c\x81\x91\x02"
  "\xe4\x06\x3a\x81\x83\x02\xe3\x06\x38\x81\x87\x02\xe2\x06\x36\x81"
  "\x85\x02\xe1\x06\x34\x81\x83\x02\xe0\x06\x32\x81\x83\x02\xdf\x06"
  "\x30\x81\x8f\x02\xde\x06\x2e\x81\x87\x02\xdd\x06\x2c\x81\x83\x02"
  "\xdc\x06\x2a\x81\x87\x02\xdb\x06\x28\x81\x83\x02\xda\x06\x26\x81"
  "\x8d\x02\xd9\x06\x24\x81\x83\x02\xd8\x06\x22\x81\x87\x02\xd7\x06"
  "\x20\x81\x85\x02\xd6\x06\x1e\x81\x83\x02\xd5\x06\x1c\x81\x8b\x02"
  "\xd4\x06\x1a\x81\x87\x02\xd3\x06\x18\x81\x83\x02\xd2\x06\x16\x81"
  "\x89\x02\xd1\x06\x14\x81\x83\x02\xd0\x06\x12\x81\x89\x02\xcf\x06"
  "\x10\x81\x87\x02\xce\x06\x0e\x81\x87\x02\xcd\x06\x0c\x81\x87\x02"
  "\xcc\x06\x0a\x81\x87\x02\xcb\x06\x08\x81\x85\x02\xca\x06\x06\x81"
  "\x83\x02\xc9\x06\x04\x83\x04\x43\x5c\xd1\x01\x02\x60\x01\x3b\x03"
  "\x03\xcb\x01\x04\x04\x6c\x04\x65\x03\xcc\x01\x03\xc6\x01\x03\xcd"
  "\x01\x03\xcf\x01\x03\xce\x01\x03\xd0\x01\x0c\x8c\x07\x48\x81\x83"
  "\x02\x8b\x07\x46\x81\x91\x02\x8a\x07\x44\x81\x83\x02\x89\x07\x42"
  "\x81\x87\x02\x88\x07\x40\x81\x87\x02\x87\x07\x3e\x81\x83\x02\x86"
  "\x07\x3c\x81\x8f\x02\x85\x07\x3a\x81\x87\x02\x84\x07\x38\x81\x85"
  "\x02\x83\x07\x36\x81\x83\x02\x82\x07\x34\x81\x83\x02\x81\x07\x32"
  "\x81\x8d\x02\x80\x07\x30\x81\x83\x02\xff\x06\x2e\x81\x83\x02\xfe"
  "\x06\x2c\x81\x8d\x02\xfd\x06\x2a\x81\x83\x02\xfc\x06\x28\x81\x87"
  "\x02\xfb\x06\x26\x81\x87\x02\xfa\x06\x24\x81\x83\x02\xf9\x06\x22"
  "\x81\x8b\x02\xf8\x06\x20\x81\x87\x02\xf7\x06\x1e\x81\x85\x02\xf6"
  "\x06\x1c\x81\x83\x02\xf5\x06\x1a\x81\x89\x02\xf4\x06\x18\x81\x83"
  "\x02\xf3\x06\x16\x81\x89\x02\xf2\x06\x14\x81\x83\x02\xf1\x06\x12"
  "\x81\x89\x02\xf0\x06\x10\x81\x87\x02\xef\x06\x0e\x81\x87\x02\xee"
  "\x06\x0c\x81\x87\x02\xed\x06\x0a\x81\x87\x02\xec\x06\x08\x81\x85"
  "\x02\xeb\x06\x06\x81\x83\x02\xea\x06\x04\x83\x04\x47\x63\xd2\x01"
  "\x02\x61\x0b\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x01\x2f\x01\x2d\x02\x03\x04\x65\x04\x04\x04\x04\x6f\x03\x04"
  "\x05\x65\x78\x70\x74\x09\x9d\x07\x24\x81\x85\x02\x9c\x07\x22\x81"
  "\x87\x02\x9b\x07\x20\x81\x83\x02\x9a\x07\x1e\x83\x04\x99\x07\x1c"
  "\x81\x87\x02\x98\x07\x1a\x81\x87\x02\x97\x07\x18\x81\x87\x02\x96"
  "\x07\x16\x81\x85\x02\x95\x07\x14\x81\x89\x02\x94\x07\x12\x81\x85"
  "\x02\x93\x07\x10\x81\x85\x02\x92\x07\x0e\x81\x85\x02\x91\x07\x0c"
  "\x81\x85\x02\x90\x07\x0a\x81\x85\x02\x8f\x07\x08\x81\x85\x02\x8e"
  "\x07\x06\x81\x83\x02\x8d\x07\x04\x83\x04\x23\x3d\x02\x62\x3d\x0d"
  "\x03\x09\x74\x72\x75\x6e\x63\x61\x74\x65\x02\xa5\x07\x12\x81\x89"
  "\x02\xa4\x07\x10\x81\x87\x02\xa3\x07\x0e\x81\x85\x02\xa2\x07\x0c"
  "\x81\x85\x02\xa1\x07\x0a\x81\x83\x02\xa0\x07\x08\x81\x83\x02\x9f"
  "\x07\x06\x81\x83\x02\x9e\x07\x04\x83\x04\x11\x1a\xd3\x01\x02\x63"
  "\x3d\x0d\x03\x02\xaa\x07\x0c\x81\x85\x02\xa9\x07\x0a\x81\x83\x02"
  "\xa8\x07\x08\x81\x83\x02\xa7\x07\x06\x81\x83\x02\xa6\x07\x04\x83"
  "\x04\x0b\x14\x02\x64\x19\x0d\xb3\x07\x14\x81\x85\x02\xb2\x07\x12"
  "\x81\x85\x02\xb1\x07\x10\x81\x85\x02\xb0\x07\x0e\x81\x85\x02\xaf"
  "\x07\x0c\x81\x85\x02\xae\x07\x0a\x81\x85\x02\xad\x07\x08\x81\x85"
  "\x02\xac\x07\x06\x81\x83\x02\xab\x07\x04\x83\x04\x13\x1c\xd4\x01"
  "\x02\x65\x01\x2e\x01\x2c\x03\x04\x65\x04\x04\x04\x6f\x06\xbd\x07"
  "\x16\x83\x04\xbc\x07\x14\x81\x85\x02\xbb\x07\x12\x81\x85\x02\xba"
  "\x07\x10\x81\x85\x02\xb9\x07\x0e\x83\x04\xb8\x07\x0c\x81\x85\x02"
  "\xb7\x07\x0a\x81\x85\x02\xb6\x07\x08\x81\x85\x02\xb5\x07\x06\x81"
  "\x83\x02\xb4\x07\x04\x83\x04\x15\x27\x6f\x02\x66\x0d\x05\x20\x47"
  "\x4d\x54\x01\x3b\x01\x21\x03\x2c\x20\x03\x03\x17\x70\x61\x72\x73"
  "\x65\x2d\x6c\x6f\x6e\x67\x2d\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65"
  "\x65\x6b\x03\x11\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x38\x35\x30"
  "\x2d\x64\x61\x79\x04\x04\x84\x01\x03\x63\x04\x65\x03\x69\x03\x12"
  "\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x38\x35\x30\x2d\x68\x6f\x75"
  "\x72\x65\x03\x14\x70\x61\x72\x73\x65\x2d\x72\x66\x63\x38\x35\x30"
  "\x2d\x6d\x69\x6e\x75\x74\x65\x03\x14\x70\x61\x72\x73\x65\x2d\x72"
  "\x66\x63\x38\x35\x30\x2d\x73\x65\x63\x6f\x6e\x64\xd5\x01\x09\x6c"
  "\x09\x23\x0e\xdc\x07\x40\x81\x8d\x02\xdb\x07\x3e\x81\x8b\x02\xda"
  "\x07\x3c\x81\x89\x02\xd9\x07\x3a\x81\x87\x02\xd8\x07\x38\x81\x85"
  "\x02\xd7\x07\x36\x81\x83\x02\xd6\x07\x34\x81\x95\x02\xd5\x07\x32"
  "\x81\x93\x02\xd4\x07\x30\x81\x93\x02\xd3\x07\x2e\x81\x91\x02\xd2"
  "\x07\x2c\x81\x93\x02\xd1\x07\x2a\x81\x91\x02\xd0\x07\x28\x81\x8f"
  "\x02\xcf\x07\x26\x81\x91\x02\xce\x07\x24\x81\x8f\x02\xcd\x07\x22"
  "\x81\x8d\x02\xcc\x07\x20\x81\x8f\x02\xcb\x07\x1e\x81\x8d\x02\xca"
  "\x07\x1c\x81\x8b\x02\xc9\x07\x1a\x81\x8d\x02\xc8\x07\x18\x81\x8b"
  "\x02\xc7\x07\x16\x81\x89\x02\xc6\x07\x14\x81\x8b\x02\xc5\x07\x12"
  "\x81\x89\x02\xc4\x07\x10\x81\x87\x02\xc3\x07\x0e\x81\x89\x02\xc2"
  "\x07\x0c\x81\x87\x02\xc1\x07\x0a\x81\x85\x02\xc0\x07\x08\x81\x87"
  "\x02\xbf\x07\x06\x81\x83\x02\xbe\x07\x04\x83\x04\x3f\x69\x6c\x02"
  "\x67\x0d\x20\x1f\x20\x1f\x20\x20\x1f\x20\x1f\x20\x1e\x20\x0d\x29"
  "\x04\x10\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d\x6f\x6e\x74"
  "\x68\xd6\x01\x02\xdf\x07\x08\x81\x85\x02\xde\x07\x06\x81\x83\x02"
  "\xdd\x07\x04\x83\x04\x07\x10\xd7\x01\x02\x68\x0d\x57\x14\x6d\x6f"
  "\x6e\x74\x68\x2f\x73\x68\x6f\x72\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x73\xd8\x01\x02\x04\xd6\x01\x02\xe3\x07\x0a\x81\x85\x02\xe2\x07"
  "\x08\x81\x83\x02\xe1\x07\x06\x81\x83\x02\xe0\x07\x04\x83\x04\x09"
  "\x13\xd9\x01\x02\x69\x0d\x40\x13\x6d\x6f\x6e\x74\x68\x2f\x6c\x6f"
  "\x6e\x67\x2d\x73\x74\x72\x69\x6e\x67\x73\xda\x01\x02\x04\xd6\x01"
  "\x02\xe7\x07\x0a\x81\x85\x02\xe6\x07\x08\x81\x83\x02\xe5\x07\x06"
  "\x81\x83\x02\xe4\x07\x04\x83\x04\x09\x13\xdb\x01\x02\x6a\x02\x0d"
  "\x0e\x6d\x6f\x6e\x74\x68\x20\x69\x6e\x74\x65\x67\x65\x72\x0f\x36"
  "\x1b\x05\x1f\x05\x04\x2a\x04\xec\x07\x0c\x81\x85\x02\xeb\x07\x0a"
  "\x81\x83\x02\xea\x07\x08\x84\x06\xe9\x07\x06\x81\x85\x02\xe8\x07"
  "\x04\x81\x85\x02\x0b\x1e\xdc\x01\x02\x6b\x1b\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6d\x6f\x6e\x74\x68\x20\x64\x65\x73\x69\x67\x6e\x61"
  "\x74\x69\x6f\x6e\x3a\xd8\x01\xda\x01\x03\x04\x11\x73\x74\x72\x69"
  "\x6e\x67\x2d\x63\x69\x2d\x3e\x69\x6e\x64\x65\x78\xdd\x01\x04\x06"
  "\x65\x72\x72\x6f\x72\xde\x01\x03\xf2\x07\x0e\x81\x83\x02\xf1\x07"
  "\x0c\x81\x87\x02\xf0\x07\x0a\x81\x85\x02\xef\x07\x08\x81\x83\x02"
  "\xee\x07\x06\x81\x89\x02\xed\x07\x04\x83\x04\x0d\x19\xdf\x01\x02"
  "\x6c\x0d\x56\x1b\x64\x61\x79\x73\x2d\x6f\x66\x2d\x77\x65\x65\x6b"
  "\x2f\x73\x68\x6f\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x73\xe0\x01"
  "\x02\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x64\x61\x79"
  "\x2d\x6f\x66\x2d\x77\x65\x65\x6b\xe1\x01\x02\xf5\x07\x08\x81\x83"
  "\x02\xf4\x07\x06\x81\x83\x02\xf3\x07\x04\x83\x04\x07\x11\xe2\x01"
  "\x02\x6d\x0d\x41\x1a\x64\x61\x79\x73\x2d\x6f\x66\x2d\x77\x65\x65"
  "\x6b\x2f\x6c\x6f\x6e\x67\x2d\x73\x74\x72\x69\x6e\x67\x73\xe3\x01"
  "\x02\x04\xe1\x01\x02\xf8\x07\x08\x81\x83\x02\xf7\x07\x06\x81\x83"
  "\x02\xf6\x07\x04\x83\x04\x07\x11\xe4\x01\x02\x6e\x02\x14\x64\x61"
  "\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x20\x69\x6e\x74\x65\x67\x65"
  "\x72\x0f\x36\x1b\x05\x1f\x05\x04\x2a\x04\xfd\x07\x0c\x81\x85\x02"
  "\xfc\x07\x0a\x81\x83\x02\xfb\x07\x08\x84\x06\xfa\x07\x06\x81\x85"
  "\x02\xf9\x07\x04\x81\x85\x02\x0b\x1e\x36\x02\x6f\x21\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b"
  "\x20\x64\x65\x73\x69\x67\x6e\x61\x74\x69\x6f\x6e\x3a\xe0\x01\xe3"
  "\x01\x03\x04\xdd\x01\x04\xde\x01\x03\x82\x08\x0c\x81\x85\x02\x81"
  "\x08\x0a\x81\x89\x02\x80\x08\x08\x81\x83\x02\xff\x07\x06\x81\x87"
  "\x02\xfe\x07\x04\x83\x04\x0b\x17\xde\x01\x02\x70\x0d\x1a\x04\x85"
  "\x01\x02\x87\x08\x0c\x81\x89\x02\x86\x08\x0a\x81\x8b\x02\x85\x08"
  "\x08\x81\x89\x02\x84\x08\x06\x81\x85\x02\x83\x08\x04\x84\x06\x0b"
  "\x14\x85\x01\x02\x71\xd1\x0f\xed\x0e\x65\x47\x0d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x79\x65\x61\x72\x1f\x03\x03\x1b\x65\x78\x61\x63"
  "\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e"
  "\x74\x65\x67\x65\x72\x3f\x04\x2a\x04\x8d\x08\x0e\x81\x85\x02\x8c"
  "\x08\x0c\x81\x85\x02\x8b\x08\x0a\x81\x85\x02\x8a\x08\x08\x81\x85"
  "\x02\x89\x08\x06\x81\x83\x02\x88\x08\x04\x83\x04\x0d\x1c\x2a\x02"
  "\x72\x01\x31\x03\x3f\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61"
  "\x64\x2d\x6c\x65\x66\x74\x03\x8f\x08\x06\x81\x85\x02\x8e\x08\x04"
  "\x83\x04\x05\x0f\x3f\x02\x73\x01\x31\x0b\x04\x55\x04\x4e\x03\x92"
  "\x08\x08\x81\x85\x02\x91\x08\x06\x84\x06\x90\x08\x04\x81\x85\x02"
  "\x07\x11\x55\x02\x74\x0d\x1a\x04\x84\x01\x02\x9b\x08\x14\x81\x87"
  "\x02\x9a\x08\x12\x81\x87\x02\x99\x08\x10\x81\x87\x02\x98\x08\x0e"
  "\x81\x89\x02\x97\x08\x0c\x81\x87\x02\x96\x08\x0a\x81\x87\x02\x95"
  "\x08\x08\x81\x85\x02\x94\x08\x06\x81\x85\x02\x93\x08\x04\x84\x06"
  "\x13\x1c\x84\x01\x74\x4e\x4e\x62\x11\x70\x61\x72\x73\x65\x2d\x6c"
  "\x6f\x6e\x67\x2d\x6d\x6f\x6e\x74\x68\x63\xd5\x01\x15\x73\x74\x72"
  "\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x70\x61\x72\x73\x65"
  "\x72\xd5\x01\xe3\x01\xe0\x01\xda\x01\xd8\x01\x58\x03\x64\x32\x1f"
  "\xdd\x01\x14\x73\x74\x72\x69\x6e\x67\x2d\x3e\x64\x61\x79\x2d\x6f"
  "\x66\x2d\x77\x65\x65\x6b\xe1\x01\x41\x56\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x6d\x6f\x6e\x74\x68\xd6\x01\x40\x57\x29\x13\x84\x01"
  "\x04\x07\x53\x75\x6e\x64\x61\x79\x09\x53\x61\x74\x75\x72\x64\x61"
  "\x79\x07\x46\x72\x69\x64\x61\x79\x09\x54\x68\x75\x72\x73\x64\x61"
  "\x79\x0a\x57\x65\x64\x6e\x65\x73\x64\x61\x79\x08\x54\x75\x65\x73"
  "\x64\x61\x79\x07\x4d\x6f\x6e\x64\x61\x79\x04\x53\x75\x6e\x04\x53"
  "\x61\x74\x04\x46\x72\x69\x04\x54\x68\x75\x04\x57\x65\x64\x04\x54"
  "\x75\x65\x04\x4d\x6f\x6e\x09\x44\x65\x63\x65\x6d\x62\x65\x72\x09"
  "\x4e\x6f\x76\x65\x6d\x62\x65\x72\x08\x4f\x63\x74\x6f\x62\x65\x72"
  "\x0a\x53\x65\x70\x74\x65\x6d\x62\x65\x72\x07\x41\x75\x67\x75\x73"
  "\x74\x05\x4a\x75\x6c\x79\x05\x4a\x75\x6e\x65\x04\x4d\x61\x79\x06"
  "\x41\x70\x72\x69\x6c\x06\x4d\x61\x72\x63\x68\x09\x46\x65\x62\x72"
  "\x75\x61\x72\x79\x08\x4a\x61\x6e\x75\x61\x72\x79\x0d\x04\x44\x65"
  "\x63\x04\x4e\x6f\x76\x04\x4f\x63\x74\x04\x53\x65\x70\x04\x41\x75"
  "\x67\x04\x4a\x75\x6c\x04\x4a\x75\x6e\x04\x4d\x61\x79\x04\x41\x70"
  "\x72\x04\x4d\x61\x72\x04\x46\x65\x62\x04\x4a\x61\x6e\x0d\x55\x06"
  "\x3f\x04\x2a\x04\x85\x01\x04\xde\x01\x04\x36\x08\xe4\x01\x04\xe2"
  "\x01\x04\xdf\x01\x04\xdc\x01\x08\xdb\x01\x04\xd9\x01\x04\xd7\x01"
  "\x04\x13\x65\xce\x01\x13\x70\x61\x72\x73\x65\x72\x3a\x72\x66\x63"
  "\x38\x35\x30\x2d\x74\x69\x6d\x65\xc4\x01\x6c\x04\x6f\x04\xc6\x01"
  "\xc5\x01\xcb\x01\xbd\x01\xbc\x01\xef\x02\xba\x01\x08\xbb\x01\xb9"
  "\x01\x36\xb8\x01\x0d\xaf\x0c\x98\x01\xcc\x01\xd0\x01\xcf\x01\xcd"
  "\x01\xb2\x01\xb0\x01\xc7\x01\xb3\x01\xb1\x01\xbf\x01\xbe\x01\xaf"
  "\x01\xae\x01\xb4\x01\x9e\x01\x9b\x01\x1a\x69\x73\x6f\x38\x36\x30"
  "\x31\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x66\x69\x6c\x65\x2d\x74"
  "\x69\x6d\x65\x21\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x67"
  "\x6c\x6f\x62\x61\x6c\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74"
  "\x72\x69\x6e\x67\x20\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e"
  "\x6c\x6f\x63\x61\x6c\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74"
  "\x72\x69\x6e\x67\x1f\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74"
  "\x69\x6d\x65\x26\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69"
  "\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x69\x73\x6f\x38\x36"
  "\x30\x31\x2d\x73\x74\x72\x69\x6e\x67\x25\x75\x6e\x69\x76\x65\x72"
  "\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d"
  "\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74\x72\x69\x6e\x67\xa4\x01"
  "\xa7\x01\xa3\x01\xa6\x01\xa2\x01\x4a\x9f\x01\x24\x77\x72\x69\x74"
  "\x65\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x61"
  "\x73\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x62\x61\x73\x69\x63\x25"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x78\x6d"
  "\x6c\x2d\x72\x70\x63\x2d\x69\x73\x6f\x38\x36\x30\x31\x2d\x73\x74"
  "\x72\x69\x6e\x67\x78\x9d\x01\x9a\x01\x23\xd4\x01\x04\x04\xd3\x01"
  "\x04\x04\xd2\x01\x04\xd1\x01\x04\xca\x01\x04\xc9\x01\x04\xc8\x01"
  "\x04\xc3\x01\x04\xc2\x01\x04\xc1\x01\x04\xc0\x01\x04\xb7\x01\x04"
  "\xb6\x01\x04\xb5\x01\x04\x5a\x04\x49\x04\x47\x04\x75\x04\x76\x04"
  "\x77\x04\x79\x04\xad\x01\x04\xac\x01\x04\xab\x01\x04\xaa\x01\x04"
  "\xa9\x01\x04\xa8\x01\x04\xa5\x01\x04\xa1\x01\x04\xa0\x01\x04\x5c"
  "\x04\x9c\x01\x04\x23\x96\x01\x94\x01\x97\x01\x0a\x95\x01\x93\x01"
  "\x80\x01\x8a\x01\x18\x63\x74\x69\x6d\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x1f\x66\x69\x6c"
  "\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x63"
  "\x74\x69\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x1e\x66\x69\x6c\x65"
  "\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d\x63\x74\x69"
  "\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x1d\x63\x74\x69\x6d\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x24\x75\x6e\x69\x76\x65\x72\x73\x61\x6c"
  "\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x63\x74"
  "\x69\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x23\x75\x6e\x69\x76\x65"
  "\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c"
  "\x2d\x63\x74\x69\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x89\x01\x87"
  "\x01\x8c\x01\x6e\x83\x01\x6d\x0e\x99\x01\x06\x92\x01\x04\x91\x01"
  "\x04\x90\x01\x04\x8f\x01\x04\x8e\x01\x04\x8d\x01\x04\x8b\x01\x04"
  "\x53\x04\x88\x01\x04\x82\x01\x04\x03\x55\x54\x04\x47\x4d\x54\x04"
  "\x45\x53\x54\x04\x45\x44\x54\x04\x43\x53\x54\x04\x43\x44\x54\x04"
  "\x4d\x53\x54\x08\x04\x4d\x44\x54\x04\x50\x53\x54\x09\x04\x50\x44"
  "\x54\x08\x0a\x86\x01\x04\x0e\x7f\x19\x6a\x6b\x7c\x7b\x50\x12\x74"
  "\x69\x6d\x65\x2d\x7a\x6f\x6e\x65\x2d\x3e\x73\x74\x72\x69\x6e\x67"
  "\x60\x64\x81\x01\x04\x7e\x04\x7d\x04\x7a\x04\x74\x04\x72\x04\x73"
  "\x04\x68\x3d\x67\x3c\x66\x18\x61\xed\x0e\x90\x4e\x20\x22\x69\x5b"
  "\x12\x73\x74\x72\x69\x6e\x67\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69"
  "\x6d\x65\x17\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x76\x65"
  "\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x1d\x72\x66\x63\x32\x38\x32"
  "\x32\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x4d\x1b\x77\x72\x69\x74\x65\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x61\x73\x2d\x68\x74"
  "\x74\x70\x4b\x1d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65"
  "\x2d\x3e\x72\x66\x63\x32\x38\x32\x32\x2d\x73\x74\x72\x69\x6e\x67"
  "\x21\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x73\x74\x72\x69\x6e"
  "\x67\x20\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63"
  "\x61\x6c\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x73\x74\x72\x69\x6e"
  "\x67\x26\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65"
  "\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x72\x66\x63\x32\x38\x32\x32"
  "\x2d\x73\x74\x72\x69\x6e\x67\x25\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d\x72\x66"
  "\x63\x32\x38\x32\x32\x2d\x73\x74\x72\x69\x6e\x67\x19\x64\x65\x63"
  "\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x74\x69\x6d\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x19\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2f\x64\x61\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x52\x4f"
  "\x39\x27\x38\x14\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x13\x6c\x6f\x63\x61\x6c\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x21\x31\x3d\x34\x32\x26"
  "\x24\x23\x1d\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x1c\x17\x73\x65\x74\x2d"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x7a\x6f\x6e"
  "\x65\x21\x1e\x73\x65\x74\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74"
  "\x69\x6d\x65\x2f\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x21"
  "\x12\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x7a\x6f"
  "\x6e\x65\x23\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f"
  "\x64\x61\x79\x6c\x69\x67\x68\x74\x2d\x73\x61\x76\x69\x6e\x67\x73"
  "\x2d\x74\x69\x6d\x65\x19\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2f\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x12\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x79\x65\x61\x72"
  "\x13\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x6d\x6f"
  "\x6e\x74\x68\x11\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65"
  "\x2f\x64\x61\x79\x12\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2f\x68\x6f\x75\x72\x14\x64\x65\x63\x6f\x64\x65\x64\x2d\x74"
  "\x69\x6d\x65\x2f\x6d\x69\x6e\x75\x74\x65\x14\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x2f\x73\x65\x63\x6f\x6e\x64\x2d\x25"
  "\x2f\x71\x04\x70\x04\x5f\x04\x5e\x04\x5d\x04\x59\x06\x54\x04\x51"
  "\x04\x4c\x04\x44\x04\x48\x04\x46\x04\x45\x04\x42\x04\x43\x04\x3e"
  "\x06\x3c\x04\x3b\x04\x3a\x04\x37\x06\x35\x04\x33\x04\x09\x38\x33"
  "\x61\x61\x37\x65\x38\x30\x30\x04\x17\x0c\x2f\x04\x2e\x04\x2c\x04"
  "\x2b\x04\x28\x04\x20\x04\x1e\x04\x1b\x04\x19\x04\x18\x04\x16\x04"
  "\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x0c\x04\x0b\x04\x2f\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63"
  "\x6f\x70\x79\x07\x76\x65\x63\x74\x6f\x72\x0d\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x05\x7a\x6f\x6e\x65\x16\x64\x61\x79"
  "\x6c\x69\x67\x68\x74\x2d\x73\x61\x76\x69\x6e\x67\x73\x2d\x74\x69"
  "\x6d\x65\x0c\x64\x61\x79\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x05\x79"
  "\x65\x61\x72\x06\x6d\x6f\x6e\x74\x68\x04\x64\x61\x79\x05\x68\x6f"
  "\x75\x72\x07\x6d\x69\x6e\x75\x74\x65\x07\x73\x65\x63\x6f\x6e\x64"
  "\x0a\x0a\x09\x08\x0a\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x11\x72\x74\x64\x3a\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\xe4\x01\x0d\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x0b\x0a\x0e\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x70\x61\x72\x73\x65\x72\xe2\x01\x0d\x64\x65\x63\x6f\x64\x65\x64"
  "\x2d\x74\x69\x6d\x65\x09\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x19\x73\x74\x61\x6e\x64\x61"
  "\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74"
  "\x75\x72\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x21\x0a\x1b\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d"
  "\x74\x79\x70\x65\x05\x0a\xe4\x01\xd8\x01\xda\x01\xe0\x01\xe3\x01"
  "\x07\x06\xe2\x01\x04\xd5\x01\x03\x54\xaa\x01\x80\x80\x04\x53\xa8"
  "\x01\x81\x81\x02\x52\xa6\x01\x81\x81\x02\x51\xa4\x01\x81\x87\x02"
  "\x50\xa2\x01\x81\x85\x02\x4f\xa0\x01\x81\x8b\x02\x4e\x9e\x01\x81"
  "\x83\x02\x4d\x9c\x01\x81\x85\x02\x4c\x9a\x01\x81\x89\x02\x4b\x98"
  "\x01\x81\x83\x02\x4a\x96\x01\x81\x85\x02\x49\x94\x01\x81\x89\x02"
  "\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81\x89\x02\x46\x8e\x01\x81"
  "\x83\x02\x45\x8c\x01\x81\x85\x02\x44\x8a\x01\x81\x83\x02\x43\x88"
  "\x01\x81\x85\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x85\x02"
  "\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x85\x02\x3e\x7e\x81\x83"
  "\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x85\x02\x3b\x78\x81\x83\x02"
  "\x3a\x76\x81\x85\x02\x39\x74\x81\x83\x02\x38\x72\x81\x85\x02\x37"
  "\x70\x81\x83\x02\x36\x6e\x81\x85\x02\x35\x6c\x81\x83\x02\x34\x6a"
  "\x81\x85\x02\x33\x68\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81"
  "\x83\x02\x30\x62\x81\x85\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x85"
  "\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x83\x02"
  "\x2a\x56\x81\x85\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27"
  "\x50\x81\x85\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x85\x02\x24\x4a"
  "\x81\x83\x02\x23\x48\x81\x85\x02\x22\x46\x81\x83\x02\x21\x44\x81"
  "\x85\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x83"
  "\x02\x1d\x3c\x81\x85\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02"
  "\x1a\x36\x81\x85\x02\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17"
  "\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a"
  "\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81"
  "\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83"
  "\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07"
  "\x10\x81\x8b\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x87\x02\x04\x0a"
  "\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x89\x02\x01\x04\x81"
  "\x83\x02\xa9\x01\x8d\x02";

SCHEME_OBJECT *
datime_so_data_056e91583a52419f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_datime_so_data_056e91583a52419f [0]))), (sizeof (prog_datime_so_data_056e91583a52419f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_93]));
}

DECLARE_COMPILED_DATA_NS ("datime.so", datime_so_data_056e91583a52419f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("datime.so", "937aa1c30caeb33f")
