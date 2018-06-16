/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 17
#define DEBUGGING_LABEL_1_2 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_6 11
#define FREE_REFERENCE_1_0 14
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd9;
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
      goto blowfish_availableP_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (blowfish_availableP_5)
DEFLABEL (blowfish_availableP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define TAG_2_11 5
#define LABEL_2_12 15
#define TAG_2_13 6
#define LABEL_2_17 17
#define LABEL_2_15 19
#define LABEL_2_18 21
#define LABEL_2_20 23
#define LABEL_2_22 25
#define ENVIRONMENT_LABEL_2_3 45
#define DEBUGGING_LABEL_2_2 44
#define OBJECT_2_4 43
#define OBJECT_2_3 42
#define OBJECT_2_2 41
#define OBJECT_2_1 40
#define OBJECT_2_0 39
#define EXECUTE_CACHE_2_23 27
#define EXECUTE_CACHE_2_21 29
#define EXECUTE_CACHE_2_19 31
#define EXECUTE_CACHE_2_16 33
#define EXECUTE_CACHE_2_14 35
#define EXECUTE_CACHE_2_8 37
#define FREE_REFERENCES_LABEL_2_0 26
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_2_4);
      goto blowfish_encrypt_port_17;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_22;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto loop_11;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (blowfish_encrypt_port_20)
DEFLABEL (blowfish_encrypt_port_17)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (Rsp [5]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 7;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd22 = Wrd9;
  (Wrd23.Obj) = (Rsp [7]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [6]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [7]) = (Wrd13.Obj);
  ((Wrd22.pObj) [8]) = Rvl;
  (Rsp [6]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  ((Wrd29.pObj) [2]) = (Wrd15.Obj);
  ((Wrd29.pObj) [3]) = (Wrd13.Obj);
  (Rsp [7]) = (Wrd25.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_2_9);
  Rvl = (current_block [OBJECT_2_2]);
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_11;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (loop_24)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_2_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_3]);
  if (! ((Wrd5.Obj) == Rvl))
    goto label_25;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd23.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_11 13
#define LABEL_3_13 15
#define LABEL_3_14 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define LABEL_3_17 23
#define LABEL_3_18 25
#define LABEL_3_19 27
#define LABEL_3_20 29
#define ENVIRONMENT_LABEL_3_3 45
#define DEBUGGING_LABEL_3_2 44
#define OBJECT_3_6 43
#define OBJECT_3_5 42
#define OBJECT_3_4 41
#define OBJECT_3_3 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_12 31
#define EXECUTE_CACHE_3_10 33
#define EXECUTE_CACHE_3_7 35
#define FREE_REFERENCES_LABEL_3_0 30
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_3_4);
      goto compute_blowfish_init_vector_19;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_3_17);
      goto do_loop_16;

    case 11:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_3_19);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_blowfish_init_vector_27)
DEFLABEL (compute_blowfish_init_vector_19)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_4)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_36;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd14.Lng), 1000, (& (Wrd13.Lng))))
    goto label_36;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_35)
  (Wrd17.Obj) = (* (Rsp++));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_34;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_34;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd26.Lng) = ((Wrd27.Lng) + (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_34;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_33)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_32;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (multiply_with_overflow ((Wrd37.Lng), 1048576, (& (Wrd36.Lng))))
    goto label_32;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));

DEFLABEL (label_31)
  (Wrd40.Obj) = (* (Rsp++));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_30;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_30;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd48.Lng) = ((Wrd49.Lng) + (Wrd50.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd48.Lng)))
    goto label_30;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_29)
  (Wrd52.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd52.Obj);
  goto do_loop_16;

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd30.Obj) = (current_block [OBJECT_3_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_23)
  (Wrd34.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd7.Obj) = (current_block [OBJECT_3_3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_35;

DEFLABEL (do_loop_28)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_3_17);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == (current_block [OBJECT_3_0])))
    goto label_37;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_12)
  (Wrd5.Obj) = Rvl;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 30))
    goto label_39;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_39;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_39;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 26))
    goto label_39;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd19.pChr) = (& ((Wrd26.pChr) [(Wrd16.Lng)]));
  ((Wrd19.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) ((unsigned long) Rvl));

DEFLABEL (label_38)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_15)
  (Rsp [1]) = Rvl;
  goto do_loop_16;

DEFLABEL (label_39)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 3);

DEFLABEL (label_25)
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_10 11
#define LABEL_4_12 13
#define ENVIRONMENT_LABEL_4_3 24
#define DEBUGGING_LABEL_4_2 23
#define EXECUTE_CACHE_4_11 15
#define EXECUTE_CACHE_4_9 17
#define EXECUTE_CACHE_4_7 19
#define FREE_REFERENCE_4_0 22
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto write_blowfish_file_header_5;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_blowfish_file_header_9)
DEFLABEL (write_blowfish_file_header_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define LABEL_5_7 9
#define LABEL_5_11 11
#define LABEL_5_10 13
#define LABEL_5_14 15
#define LABEL_5_17 17
#define LABEL_5_15 19
#define LABEL_5_18 21
#define ENVIRONMENT_LABEL_5_3 45
#define DEBUGGING_LABEL_5_2 44
#define OBJECT_5_5 43
#define OBJECT_5_4 42
#define OBJECT_5_3 41
#define OBJECT_5_2 40
#define OBJECT_5_1 39
#define OBJECT_5_0 38
#define EXECUTE_CACHE_5_19 23
#define EXECUTE_CACHE_5_16 25
#define EXECUTE_CACHE_5_13 27
#define EXECUTE_CACHE_5_12 29
#define EXECUTE_CACHE_5_9 31
#define EXECUTE_CACHE_5_6 33
#define FREE_REFERENCE_5_1 36
#define FREE_REFERENCE_5_0 37
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
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
      goto read_blowfish_file_header_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_5_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_blowfish_file_header_15)
DEFLABEL (read_blowfish_file_header_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_24;
  Wrd9 = Wrd13;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_22;
  Wrd13 = Wrd17;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_20;
  if (! (Rvl == (current_block [OBJECT_5_0])))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_17);
  goto label_18;

DEFLABEL (label_20)
  (Wrd7.Obj) = (current_block [OBJECT_5_0]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd14.pObj));

DEFLABEL (label_12)
  (Wrd13.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define LABEL_6_11 11
#define LABEL_6_10 13
#define LABEL_6_13 15
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define EXECUTE_CACHE_6_12 17
#define EXECUTE_CACHE_6_9 19
#define EXECUTE_CACHE_6_7 21
#define FREE_REFERENCE_6_2 24
#define FREE_REFERENCE_6_1 25
#define FREE_REFERENCE_6_0 26
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blowfish_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto blowfish_fileP_5;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (blowfish_fileP_11)
DEFLABEL (blowfish_fileP_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_13])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_11])), (Wrd13.pObj));

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_18;

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
blowfish_so_0fd891ee4a3a0d98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
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

static const struct liarc_code_S arr_decl_blowfish_so_0fd891ee4a3a0d98 [6] =
  {
    { "blowfish_so_code_1", 3, blowfish_so_code_1 },
    { "blowfish_so_code_2", 12, blowfish_so_code_2 },
    { "blowfish_so_code_3", 14, blowfish_so_code_3 },
    { "blowfish_so_code_4", 6, blowfish_so_code_4 },
    { "blowfish_so_code_5", 10, blowfish_so_code_5 },
    { "blowfish_so_code_6", 7, blowfish_so_code_6 }
  };

int
decl_blowfish_so_0fd891ee4a3a0d98 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_blowfish_so_0fd891ee4a3a0d98);
  return (0);
}

DECLARE_COMPILED_CODE ("blowfish.so", 3, decl_blowfish_so_0fd891ee4a3a0d98, blowfish_so_0fd891ee4a3a0d98)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_blowfish_so_data_0fd891ee4a3a0d98 [1583] =
  "\x35\x0f\xa9\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\xb9\x24"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x82\x88\x0f\x80\x1d\xc1\xbb\x02\x28\x0d\xbc\x28\x0d\x28\x0d"
  "\x28\x0d\x28\xb1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x1d\xb0\x83\x88\xc3\x02\x80\x02\x02\xb3\x02\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x0d\xbf\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x80\xb3\x0d\xbb\x0f\x02\x0d"
  "\x1c\xb7\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x1b"
  "\xb7\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9d\x1c\x88\x1b\x0c"
  "\x0c\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb5\x2a\xb2\x2a\x1f\x1f\xc5"
  "\xc4\xc1\x17\xb7\x1b\x0d\xb3\x0d\x1b\x0d\x0d\x0d\xb1\x0d\x0d\xb4"
  "\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x57\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x62\x6c\x6f\x77\x66\x69\x73\x68"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08\x70\x72\x62\x66\x69"
  "\x73\x68\x0f\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x63\x66\x62\x36"
  "\x34\x02\x04\x19\x6c\x6f\x61\x64\x2d\x6c\x69\x62\x72\x61\x72\x79"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x03\x21\x69\x6d"
  "\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x06"
  "\x08\x81\x81\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x07\x12\x02"
  "\x01\x01\x02\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x65\x81\x20\x03\x11\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d"
  "\x73\x65\x74\x2d\x6b\x65\x79\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x77\x69\x6e\x64\x04\x0d\x73\x74\x72\x69\x6e\x67\x2d\x66\x69"
  "\x6c\x6c\x21\x04\x18\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x72\x65\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x0b\x06\x10\x77"
  "\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x07\x12"
  "\x1a\x81\x89\x02\x11\x18\x81\x87\x02\x10\x16\x81\x85\x02\x0f\x14"
  "\x81\x83\x02\x0e\x12\x81\x85\x02\x0d\x10\x81\x83\x02\x0c\x0e\x81"
  "\x83\x02\x0b\x0c\x82\x02\x0a\x0a\x81\x8f\x02\x09\x08\x81\x8d\x02"
  "\x08\x06\x81\x8b\x02\x07\x04\x87\x0c\x19\x2e\x02\x0f\x76\x65\x63"
  "\x74\x6f\x72\x2d\x38\x62\x2d\x73\x65\x74\x21\x81\x02\xe9\x07\x81"
  "\x80\x40\x09\x03\x07\x72\x61\x6e\x64\x6f\x6d\x02\x10\x72\x65\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x02\x13\x67\x65"
  "\x74\x2d\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65"
  "\x04\x20\x1e\x81\x87\x02\x1f\x1c\x81\x87\x02\x1e\x1a\x81\x87\x02"
  "\x1d\x18\x81\x87\x02\x1c\x16\x81\x83\x02\x1b\x14\x81\x85\x02\x1a"
  "\x12\x81\x85\x02\x19\x10\x81\x87\x02\x18\x0e\x81\x87\x02\x17\x0c"
  "\x81\x89\x02\x16\x0a\x81\x85\x02\x15\x08\x81\x83\x02\x14\x06\x81"
  "\x81\x02\x13\x04\x82\x02\x1d\x2e\x02\x18\x62\x6c\x6f\x77\x66\x69"
  "\x73\x68\x2d\x66\x69\x6c\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x76"
  "\x32\x02\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x02\x1d\x63\x6f\x6d\x70\x75"
  "\x74\x65\x2d\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x69\x6e\x69\x74"
  "\x2d\x76\x65\x63\x74\x6f\x72\x09\x04\x26\x0e\x81\x85\x02\x25\x0c"
  "\x81\x83\x02\x24\x0a\x81\x83\x02\x23\x08\x81\x83\x02\x22\x06\x81"
  "\x87\x02\x21\x04\x83\x04\x0d\x19\x0a\x02\x26\x53\x68\x6f\x72\x74"
  "\x20\x72\x65\x61\x64\x20\x77\x68\x69\x6c\x65\x20\x67\x65\x74\x74"
  "\x69\x6e\x67\x20\x69\x6e\x69\x74\x2d\x76\x65\x63\x74\x6f\x72\x3a"
  "\x1a\x72\x65\x61\x64\x2d\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x66"
  "\x69\x6c\x65\x2d\x68\x65\x61\x64\x65\x72\x01\x01\x09\x18\x62\x6c"
  "\x6f\x77\x66\x69\x73\x68\x2d\x66\x69\x6c\x65\x2d\x68\x65\x61\x64"
  "\x65\x72\x2d\x76\x31\x0b\x03\x03\x0a\x72\x65\x61\x64\x2d\x6c\x69"
  "\x6e\x65\x0c\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x0d\x04\x0c"
  "\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x19\x65\x72\x72"
  "\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x06\x10\x72\x65\x61\x64\x2d\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x21\x04\x06\x65\x72\x72\x6f\x72\x07\x30\x16"
  "\x81\x85\x02\x2f\x14\x81\x85\x02\x2e\x12\x81\x85\x02\x2d\x10\x81"
  "\x85\x02\x2c\x0e\x81\x85\x02\x2b\x0c\x81\x89\x02\x2a\x0a\x81\x85"
  "\x02\x29\x08\x81\x89\x02\x28\x06\x81\x83\x02\x27\x04\x83\x04\x15"
  "\x2e\x0e\x02\x0c\x0b\x04\x04\x1c\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x69\x6e\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x04\x0d\x04\x37\x10\x81\x85\x02\x36\x0e\x81\x83\x02\x35\x0c\x81"
  "\x85\x02\x34\x0a\x81\x83\x02\x33\x08\x81\x83\x02\x32\x06\x81\x85"
  "\x02\x31\x04\x83\x04\x0f\x1d\x0d\x0c\x0c\x1f\x42\x6c\x6f\x77\x66"
  "\x69\x73\x68\x2c\x20\x31\x36\x20\x72\x6f\x75\x6e\x64\x73\x2c\x20"
  "\x76\x65\x72\x73\x69\x6f\x6e\x20\x32\x14\x42\x6c\x6f\x77\x66\x69"
  "\x73\x68\x2c\x20\x31\x36\x20\x72\x6f\x75\x6e\x64\x73\x0d\x04\x0e"
  "\x04\x0a\x04\x04\x04\x04\x09\x19\x62\x6c\x6f\x77\x66\x69\x73\x68"
  "\x2d\x6f\x66\x62\x36\x34\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x0a\x1c\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x63\x66\x62\x36\x34"
  "\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x76\x32\x10\x62\x6c"
  "\x6f\x77\x66\x69\x73\x68\x2d\x63\x62\x63\x2d\x76\x32\x0d\x62\x6c"
  "\x6f\x77\x66\x69\x73\x68\x2d\x65\x63\x62\x11\x62\x6c\x6f\x77\x66"
  "\x69\x73\x68\x2d\x73\x65\x74\x2d\x6b\x65\x79\x0e\x0b\x0f\x62\x6c"
  "\x6f\x77\x66\x69\x73\x68\x2d\x66\x69\x6c\x65\x3f\x1b\x77\x72\x69"
  "\x74\x65\x2d\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x66\x69\x6c\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x09\x16\x62\x6c\x6f\x77\x66\x69\x73"
  "\x68\x2d\x65\x6e\x63\x72\x79\x70\x74\x2d\x70\x6f\x72\x74\x14\x62"
  "\x6c\x6f\x77\x66\x69\x73\x68\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c"
  "\x65\x3f\x0f\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x6f\x66\x62\x36"
  "\x34\x0d\x62\x6c\x6f\x77\x66\x69\x73\x68\x2d\x63\x62\x63\x0d\x62"
  "\x6c\x6f\x77\x66\x69\x73\x68\x2d\x65\x63\x62\x0e\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
blowfish_so_data_0fd891ee4a3a0d98 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_blowfish_so_data_0fd891ee4a3a0d98 [0]))), (sizeof (prog_blowfish_so_data_0fd891ee4a3a0d98)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("blowfish.so", blowfish_so_data_0fd891ee4a3a0d98)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("blowfish.so", "b1a426264806b269")
