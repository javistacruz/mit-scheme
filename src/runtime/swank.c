/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:55-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_17 9
#define LABEL_1_9 11
#define TAG_1_10 4
#define LABEL_1_12 13
#define LABEL_1_13 15
#define LABEL_1_15 17
#define LABEL_1_20 19
#define LABEL_1_18 21
#define ENVIRONMENT_LABEL_1_3 44
#define DEBUGGING_LABEL_1_2 43
#define OBJECT_1_3 42
#define OBJECT_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_24 23
#define EXECUTE_CACHE_1_23 25
#define EXECUTE_CACHE_1_22 27
#define EXECUTE_CACHE_1_21 29
#define EXECUTE_CACHE_1_19 31
#define EXECUTE_CACHE_1_16 33
#define EXECUTE_CACHE_1_14 35
#define EXECUTE_CACHE_1_11 37
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
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
      goto start_swank_11;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_1_20);
      goto lambda_4;

    case 9:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_swank_14)
DEFLABEL (start_swank_11)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  ((Wrd17.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_1_0]))
    goto label_19;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_17);

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_1_20);
  (Wrd5.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define TAG_2_9 2
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define OBJECT_2_1 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_11 9
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_7 13
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto serve_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (serve_5)
DEFLABEL (serve_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_10 7
#define LABEL_3_11 9
#define LABEL_3_7 11
#define TAG_3_8 4
#define LABEL_3_13 13
#define LABEL_3_14 15
#define LABEL_3_12 17
#define LABEL_3_15 19
#define ENVIRONMENT_LABEL_3_3 37
#define DEBUGGING_LABEL_3_2 36
#define OBJECT_3_6 35
#define OBJECT_3_5 34
#define OBJECT_3_4 33
#define OBJECT_3_3 32
#define OBJECT_3_2 31
#define OBJECT_3_1 30
#define OBJECT_3_0 29
#define EXECUTE_CACHE_3_17 21
#define EXECUTE_CACHE_3_16 23
#define EXECUTE_CACHE_3_9 25
#define FREE_REFERENCE_3_0 28
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto with_keyboard_interrupt_handler_8;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto lambda_1;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_keyboard_interrupt_handler_15)
DEFLABEL (with_keyboard_interrupt_handler_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  ((Wrd17.pObj) [2]) = (Wrd7.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_23;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 71L) < ((unsigned long) (Wrd19.Lng))))
    goto label_23;
  (Wrd11.Obj) = ((Wrd17.pObj) [72]);

DEFLABEL (label_22)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  ((Wrd30.pObj) [0]) = (Wrd11.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd47.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 3);

DEFLABEL (label_21)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 71L) < ((unsigned long) (Wrd45.Lng))))
    goto label_20;
  ((Wrd43.pObj) [72]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_3_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_10])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_29;
  Wrd6 = Wrd10;

DEFLABEL (label_28)
  Wrd5 = Wrd6;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_27;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 71L) < ((unsigned long) (Wrd31.Lng))))
    goto label_27;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  ((Wrd29.pObj) [72]) = (Wrd26.Obj);

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd15.pObj) [0]) = (Wrd18.Obj);
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd34.Obj) = (current_block [OBJECT_3_0]);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd39.pObj) [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 3);

DEFLABEL (label_13)
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_18)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_3_12);
  (Wrd5.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (lambda_19)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_15);
  (Wrd5.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto disconnect_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disconnect_4)
DEFLABEL (disconnect_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define TAG_5_8 3
#define LABEL_5_10 11
#define LABEL_5_14 13
#define TAG_5_15 5
#define LABEL_5_12 15
#define TAG_5_13 6
#define LABEL_5_18 17
#define LABEL_5_19 19
#define LABEL_5_20 21
#define ENVIRONMENT_LABEL_5_3 40
#define DEBUGGING_LABEL_5_2 39
#define OBJECT_5_3 38
#define OBJECT_5_2 37
#define OBJECT_5_1 36
#define OBJECT_5_0 35
#define EXECUTE_CACHE_5_17 23
#define EXECUTE_CACHE_5_16 25
#define EXECUTE_CACHE_5_11 27
#define EXECUTE_CACHE_5_9 29
#define FREE_REFERENCE_5_0 32
#define FREE_ASSIGNMENT_5_0 34
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto main_loop_15;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto do_loop_13;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto swapB_24;

    case 7:
      current_block = (Rpc - LABEL_5_18);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_5_19);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_5_20);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (main_loop_21)
DEFLABEL (main_loop_15)
  INTERRUPT_CHECK (26, LABEL_5_4);
  goto do_loop_13;

DEFLABEL (do_loop_22)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_6);
  goto do_loop_13;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_12])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  ((Wrd20.pObj) [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (swapB_24)
  CLOSURE_HEADER (LABEL_5_12);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_5_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_18])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto get_current_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_current_environment_3)
DEFLABEL (get_current_environment_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto set_current_environmentB_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_current_environmentB_4)
DEFLABEL (set_current_environmentB_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCE_8_0 10
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto top_level_abort_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_abort_4)
DEFLABEL (top_level_abort_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define LABEL_9_12 17
#define ENVIRONMENT_LABEL_9_3 27
#define DEBUGGING_LABEL_9_2 26
#define OBJECT_9_2 25
#define OBJECT_9_1 24
#define OBJECT_9_0 23
#define EXECUTE_CACHE_9_6 19
#define FREE_REFERENCE_9_0 22
#define FREE_REFERENCES_LABEL_9_0 18
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto bound_restarts_for_emacs_10;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_9_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bound_restarts_for_emacs_17)
DEFLABEL (bound_restarts_for_emacs_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  Rvl = (current_block [OBJECT_9_1]);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_30;
  Wrd12 = Wrd16;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_27)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd18.Obj) == (Wrd27.Obj))
    goto label_26;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_25;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_24)
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_23)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_22;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_21)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  goto label_19;

DEFLABEL (label_22)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_15)
  (Wrd39.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd38.Obj) = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_23;

DEFLABEL (label_28)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_9])), (Wrd13.pObj));

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define EXECUTE_CACHE_10_9 9
#define EXECUTE_CACHE_10_8 11
#define EXECUTE_CACHE_10_7 13
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto process_one_message_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_one_message_5)
DEFLABEL (process_one_message_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_10 13
#define LABEL_11_9 15
#define LABEL_11_12 17
#define LABEL_11_13 19
#define LABEL_11_14 21
#define LABEL_11_16 23
#define LABEL_11_18 25
#define LABEL_11_15 27
#define LABEL_11_19 29
#define LABEL_11_20 31
#define ENVIRONMENT_LABEL_11_3 47
#define DEBUGGING_LABEL_11_2 46
#define OBJECT_11_6 45
#define OBJECT_11_5 44
#define OBJECT_11_4 43
#define OBJECT_11_3 42
#define OBJECT_11_2 41
#define OBJECT_11_1 40
#define OBJECT_11_0 39
#define EXECUTE_CACHE_11_21 33
#define EXECUTE_CACHE_11_17 35
#define EXECUTE_CACHE_11_11 37
#define FREE_REFERENCES_LABEL_11_0 32
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto read_packet_19;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto read_stringB_18;

    case 6:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_12);
      goto loop_16;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_11_14);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_11_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_11_19);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_11_20);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_packet_27)
DEFLABEL (read_packet_19)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  goto read_stringB_18;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd5.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  goto read_stringB_18;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (read_stringB_28)
DEFLABEL (read_stringB_18)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd5.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_16;

DEFLABEL (loop_29)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_11_12);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_41;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_39;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_39;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd45.Lng) < (Wrd46.Lng))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_11_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_38;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd34.uLng)));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_37)
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd32.Lng) == 0))
    goto label_34;

DEFLABEL (label_35)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_18);

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_33;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_33;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_33;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_16;

DEFLABEL (label_33)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (Wrd17.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_41)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define TAG_12_7 2
#define LABEL_12_8 9
#define TAG_12_9 3
#define LABEL_12_11 11
#define LABEL_12_12 13
#define ENVIRONMENT_LABEL_12_3 30
#define DEBUGGING_LABEL_12_2 29
#define OBJECT_12_1 28
#define OBJECT_12_0 27
#define EXECUTE_CACHE_12_16 15
#define EXECUTE_CACHE_12_15 17
#define EXECUTE_CACHE_12_14 19
#define EXECUTE_CACHE_12_13 21
#define EXECUTE_CACHE_12_10 23
#define FREE_REFERENCE_12_0 26
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_12_4);
      goto decode_message_8;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_message_12)
DEFLABEL (decode_message_8)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Wrd15.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_6])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_8])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_12_6);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_11);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_12_8);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto write_message_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_message_4)
DEFLABEL (write_message_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_5 7
#define LABEL_14_11 9
#define LABEL_14_6 11
#define LABEL_14_12 13
#define LABEL_14_13 15
#define LABEL_14_9 17
#define LABEL_14_14 19
#define ENVIRONMENT_LABEL_14_3 37
#define DEBUGGING_LABEL_14_2 36
#define OBJECT_14_4 35
#define OBJECT_14_3 34
#define OBJECT_14_2 33
#define OBJECT_14_1 32
#define OBJECT_14_0 31
#define EXECUTE_CACHE_14_17 21
#define EXECUTE_CACHE_14_16 23
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_10 27
#define EXECUTE_CACHE_14_8 29
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_14_4);
      goto write_packet_9;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_packet_15)
DEFLABEL (write_packet_9)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_19)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_18;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) > 6L)
    goto label_17;

DEFLABEL (label_16)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_11);
  goto label_16;

DEFLABEL (label_18)
  (Wrd32.Obj) = (current_block [OBJECT_14_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_9);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_10 7
#define LABEL_15_5 9
#define LABEL_15_12 11
#define LABEL_15_13 13
#define LABEL_15_7 15
#define TAG_15_8 6
#define LABEL_15_14 17
#define ENVIRONMENT_LABEL_15_3 32
#define DEBUGGING_LABEL_15_2 31
#define OBJECT_15_3 30
#define OBJECT_15_2 29
#define OBJECT_15_1 28
#define OBJECT_15_0 27
#define EXECUTE_CACHE_15_15 19
#define EXECUTE_CACHE_15_11 21
#define EXECUTE_CACHE_15_9 23
#define FREE_REFERENCE_15_0 26
#define FREE_REFERENCES_LABEL_15_0 18
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto dispatch_9;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_16)
DEFLABEL (dispatch_9)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_10);

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_19;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_19)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 14
#define DEBUGGING_LABEL_16_2 13
#define OBJECT_16_0 12
#define FREE_REFERENCE_16_0 9
#define FREE_ASSIGNMENT_16_0 11
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_16_4);
      goto define_message_handler_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_message_handler_7)
DEFLABEL (define_message_handler_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd20.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_6])), (Wrd20.pObj), (Wrd17.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_8 7
#define LABEL_17_9 9
#define TAG_17_10 3
#define LABEL_17_11 11
#define TAG_17_12 4
#define LABEL_17_14 13
#define LABEL_17_16 15
#define TAG_17_17 6
#define LABEL_17_21 17
#define LABEL_17_18 19
#define LABEL_17_19 21
#define LABEL_17_23 23
#define TAG_17_24 10
#define LABEL_17_26 25
#define ENVIRONMENT_LABEL_17_3 49
#define DEBUGGING_LABEL_17_2 48
#define OBJECT_17_4 47
#define OBJECT_17_3 46
#define OBJECT_17_2 45
#define OBJECT_17_1 44
#define OBJECT_17_0 43
#define EXECUTE_CACHE_17_27 27
#define EXECUTE_CACHE_17_25 29
#define EXECUTE_CACHE_17_22 31
#define EXECUTE_CACHE_17_20 33
#define EXECUTE_CACHE_17_15 35
#define EXECUTE_CACHE_17_13 37
#define EXECUTE_CACHE_17_7 39
#define FREE_REFERENCE_17_0 42
#define FREE_REFERENCES_LABEL_17_0 26
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_17_16);
      goto lambda_30;

    case 7:
      current_block = (Rpc - LABEL_17_21);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_17_18);
      goto lambda_1;

    case 9:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17_23);
      goto lambda_32;

    case 11:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_34;
  Wrd6 = Wrd10;

DEFLABEL (label_33)
  (Wrd15.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_9])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd31 = Wrd18;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  ((Wrd31.pObj) [2]) = (Wrd34.Obj);
  (Wrd30.Obj) = ((Wrd33.pObj) [3]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd26.Obj) = ((Wrd33.pObj) [4]);
  ((Wrd31.pObj) [4]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd33.pObj) [6]);
  ((Wrd31.pObj) [5]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_11])));
  Rhp += 4;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd48 = Wrd37;
  ((Wrd48.pObj) [2]) = (Wrd34.Obj);
  (Wrd47.Obj) = ((Wrd33.pObj) [5]);
  ((Wrd48.pObj) [3]) = (Wrd47.Obj);
  ((Wrd48.pObj) [4]) = (Wrd22.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [5]) = (Wrd39.Obj);
  (Rsp [1]) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_17_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_14);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.Obj) = ((Wrd18.pObj) [5]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_17_11);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_16])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_23])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_25]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_17_16);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_36;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_36;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = ((Wrd22.pObj) [4]);
  (Rsp [2]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_22]));

DEFLABEL (label_36)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_31)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_17_18);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_17_23);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_27]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_26);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define TAG_18_8 1
#define LABEL_18_11 7
#define LABEL_18_12 9
#define LABEL_18_5 11
#define TAG_18_6 4
#define LABEL_18_14 13
#define LABEL_18_15 15
#define LABEL_18_16 17
#define LABEL_18_17 19
#define LABEL_18_18 21
#define LABEL_18_19 23
#define LABEL_18_10 25
#define LABEL_18_20 27
#define LABEL_18_21 29
#define ENVIRONMENT_LABEL_18_3 49
#define DEBUGGING_LABEL_18_2 48
#define OBJECT_18_2 47
#define OBJECT_18_1 46
#define OBJECT_18_0 45
#define EXECUTE_CACHE_18_22 31
#define EXECUTE_CACHE_18_13 33
#define EXECUTE_CACHE_18_9 35
#define FREE_REFERENCE_18_3 38
#define FREE_REFERENCE_18_2 39
#define FREE_REFERENCE_18_1 40
#define FREE_REFERENCE_18_0 41
#define FREE_ASSIGNMENT_18_1 43
#define FREE_ASSIGNMENT_18_0 44
#define FREE_REFERENCES_LABEL_18_0 30
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto emacs_rex_20;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_35;

    case 2:
      current_block = (Rpc - LABEL_18_11);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_18_12);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_18_5);
      goto swapB_34;

    case 5:
      current_block = (Rpc - LABEL_18_14);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_18_15);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_18_16);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_18_17);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_18_18);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_18_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_18_20);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_18_21);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (emacs_rex_33)
DEFLABEL (emacs_rex_20)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  Wrd27 = Wrd29;
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  ((Wrd27.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [5]) = (Wrd14.Obj);
  (Rsp [6]) = (Wrd30.Obj);
  (Rsp [4]) = (Wrd30.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_41;
  Wrd23 = Wrd27;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = ((Wrd10.pObj) [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_39;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_38)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_3]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_37;
  Wrd32 = Wrd36;

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_22]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_21])), (Wrd33.pObj));

DEFLABEL (label_31)
  (Wrd32.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_30)
  (Wrd12.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_12])), (Wrd24.pObj));

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (swapB_34)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (swapB_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  Wrd5 = Wrd9;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_56)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_53)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  Wrd57 = Wrd61;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_47)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_17])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_14])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
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
swank_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto buffer_env_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (buffer_env_4)
DEFLABEL (buffer_env_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_7 5
#define LABEL_20_4 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_6 13
#define LABEL_20_19 15
#define LABEL_20_20 17
#define LABEL_20_16 19
#define LABEL_20_17 21
#define LABEL_20_18 23
#define LABEL_20_13 25
#define LABEL_20_14 27
#define LABEL_20_28 29
#define LABEL_20_22 31
#define ENVIRONMENT_LABEL_20_3 64
#define DEBUGGING_LABEL_20_2 63
#define OBJECT_20_4 62
#define OBJECT_20_3 61
#define OBJECT_20_2 60
#define OBJECT_20_1 59
#define OBJECT_20_0 58
#define EXECUTE_CACHE_20_29 33
#define EXECUTE_CACHE_20_27 35
#define EXECUTE_CACHE_20_26 37
#define EXECUTE_CACHE_20_25 39
#define EXECUTE_CACHE_20_24 41
#define EXECUTE_CACHE_20_23 43
#define EXECUTE_CACHE_20_21 45
#define EXECUTE_CACHE_20_15 47
#define EXECUTE_CACHE_20_12 49
#define EXECUTE_CACHE_20_11 51
#define EXECUTE_CACHE_20_8 53
#define FREE_REFERENCE_20_1 56
#define FREE_REFERENCE_20_0 57
#define FREE_REFERENCES_LABEL_20_0 32
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_20_4);
      goto pstring__env_13;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_20_19);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_20_20);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_20_28);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pstring__env_21)
DEFLABEL (pstring__env_13)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_23;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (label_23)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_36;
  Wrd9 = Wrd13;

DEFLABEL (label_35)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd15.uLng) == 30))
    goto label_22;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_34;
  Wrd20 = Wrd24;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_32;
  Wrd32 = Wrd36;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_26]));

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_30;
  Wrd19 = Wrd23;

DEFLABEL (label_29)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd29.uLng) == 30))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd28.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_27)
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_28);
  goto label_25;

DEFLABEL (label_28)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_19])), (Wrd20.pObj));

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd33.pObj));

DEFLABEL (label_17)
  (Wrd32.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_10])), (Wrd21.pObj));

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd10.pObj));

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_10 9
#define LABEL_21_8 11
#define ENVIRONMENT_LABEL_21_3 26
#define DEBUGGING_LABEL_21_2 25
#define EXECUTE_CACHE_21_13 13
#define EXECUTE_CACHE_21_12 15
#define EXECUTE_CACHE_21_11 17
#define EXECUTE_CACHE_21_9 19
#define EXECUTE_CACHE_21_6 21
#define FREE_REFERENCE_21_0 24
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_21_4);
      goto env__pstring_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (env__pstring_8)
DEFLABEL (env__pstring_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd13.pObj));

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto swank_interactive_eval_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_interactive_eval_4)
DEFLABEL (swank_interactive_eval_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_8 7
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto swank_interactive_eval_region_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_interactive_eval_region_4)
DEFLABEL (swank_interactive_eval_region_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define OBJECT_24_4 21
#define OBJECT_24_3 20
#define OBJECT_24_2 19
#define OBJECT_24_1 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_10 11
#define EXECUTE_CACHE_24_9 13
#define EXECUTE_CACHE_24_8 15
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_24_4);
      goto swank_listener_eval_6;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_listener_eval_9)
DEFLABEL (swank_listener_eval_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (Wrd8.Obj) = (current_block [OBJECT_24_2]);
  (Wrd9.Obj) = (current_block [OBJECT_24_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_24_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_5);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define TAG_25_8 2
#define LABEL_25_10 9
#define LABEL_25_11 11
#define LABEL_25_14 13
#define ENVIRONMENT_LABEL_25_3 29
#define DEBUGGING_LABEL_25_2 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_16 15
#define EXECUTE_CACHE_25_15 17
#define EXECUTE_CACHE_25_13 19
#define EXECUTE_CACHE_25_12 21
#define EXECUTE_CACHE_25_9 23
#define EXECUTE_CACHE_25_6 25
#define FREE_REFERENCES_LABEL_25_0 14
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto interactive_eval_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interactive_eval_9)
DEFLABEL (interactive_eval_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_8 9
#define LABEL_26_10 11
#define LABEL_26_12 13
#define ENVIRONMENT_LABEL_26_3 23
#define DEBUGGING_LABEL_26_2 22
#define OBJECT_26_0 21
#define EXECUTE_CACHE_26_11 15
#define EXECUTE_CACHE_26_9 17
#define EXECUTE_CACHE_26_6 19
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto for_each_sexp_9;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_sexp_12)
DEFLABEL (for_each_sexp_9)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_12);
  Rsp = (& (Rsp [1]));
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_8 7
#define TAG_27_9 2
#define LABEL_27_11 9
#define ENVIRONMENT_LABEL_27_3 21
#define DEBUGGING_LABEL_27_2 20
#define OBJECT_27_0 19
#define EXECUTE_CACHE_27_13 11
#define EXECUTE_CACHE_27_12 13
#define EXECUTE_CACHE_27_10 15
#define EXECUTE_CACHE_27_7 17
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_27_4);
      goto repl_eval_3;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_eval_6)
DEFLABEL (repl_eval_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_27_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_8 9
#define TAG_28_9 3
#define LABEL_28_10 11
#define TAG_28_11 4
#define LABEL_28_12 13
#define ENVIRONMENT_LABEL_28_3 27
#define DEBUGGING_LABEL_28_2 26
#define OBJECT_28_0 25
#define EXECUTE_CACHE_28_15 15
#define EXECUTE_CACHE_28_14 17
#define EXECUTE_CACHE_28_13 19
#define EXECUTE_CACHE_28_7 21
#define FREE_REFERENCE_28_0 24
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_28_4);
      goto with_output_to_repl_5;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_output_to_repl_9)
DEFLABEL (with_output_to_repl_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_10])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (Rsp [0]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_28_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_28_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_28_12);
  Rvl = (current_block [OBJECT_28_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_9 7
#define LABEL_29_6 9
#define LABEL_29_13 11
#define LABEL_29_7 13
#define LABEL_29_14 15
#define LABEL_29_10 17
#define LABEL_29_11 19
#define LABEL_29_15 21
#define LABEL_29_16 23
#define LABEL_29_18 25
#define ENVIRONMENT_LABEL_29_3 46
#define DEBUGGING_LABEL_29_2 45
#define OBJECT_29_5 44
#define OBJECT_29_4 43
#define OBJECT_29_3 42
#define OBJECT_29_2 41
#define OBJECT_29_1 40
#define OBJECT_29_0 39
#define EXECUTE_CACHE_29_20 27
#define EXECUTE_CACHE_29_19 29
#define EXECUTE_CACHE_29_17 31
#define EXECUTE_CACHE_29_12 33
#define EXECUTE_CACHE_29_8 35
#define FREE_ASSIGNMENT_29_0 38
#define FREE_REFERENCES_LABEL_29_0 26
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_29_4);
      goto initialize_packageB_20;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_29_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_29_6);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_29_7);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_29_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_29_16);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_29_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_25)
DEFLABEL (initialize_packageB_20)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (Wrd16.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_29_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_29_3]);
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_22)
  goto label_28;

DEFLABEL (lambda_26)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_29_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_16);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_29_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_10);
  Rvl = (current_block [OBJECT_29_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_29_7);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_35;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_35;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd37.Lng) < (Wrd39.Lng)))
    goto label_33;

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_18);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_29_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_13);

DEFLABEL (label_33)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_31;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_31;
  Rvl = (LONG_TO_FIXNUM (Wrd22.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_9 9
#define ENVIRONMENT_LABEL_30_3 20
#define DEBUGGING_LABEL_30_2 19
#define EXECUTE_CACHE_30_11 11
#define EXECUTE_CACHE_30_10 13
#define EXECUTE_CACHE_30_8 15
#define EXECUTE_CACHE_30_7 17
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto swank_pprint_eval_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_pprint_eval_6)
DEFLABEL (swank_pprint_eval_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define TAG_31_8 2
#define LABEL_31_10 9
#define LABEL_31_12 11
#define LABEL_31_13 13
#define ENVIRONMENT_LABEL_31_3 30
#define DEBUGGING_LABEL_31_2 29
#define OBJECT_31_1 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_16 15
#define EXECUTE_CACHE_31_15 17
#define EXECUTE_CACHE_31_14 19
#define EXECUTE_CACHE_31_11 21
#define EXECUTE_CACHE_31_9 23
#define EXECUTE_CACHE_31_6 25
#define FREE_REFERENCES_LABEL_31_0 14
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_31_4);
      goto swank_compile_string_for_emacs_8;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_compile_string_for_emacs_11)
DEFLABEL (swank_compile_string_for_emacs_8)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_31_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (current_block [OBJECT_31_1]);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_10 11
#define LABEL_32_12 13
#define ENVIRONMENT_LABEL_32_3 23
#define DEBUGGING_LABEL_32_2 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_11 15
#define EXECUTE_CACHE_32_9 17
#define EXECUTE_CACHE_32_6 19
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_4);
      goto snarf_string_9;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snarf_string_12)
DEFLABEL (snarf_string_9)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_32_7);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_32_0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define TAG_33_7 2
#define LABEL_33_9 9
#define LABEL_33_10 11
#define ENVIRONMENT_LABEL_33_3 23
#define DEBUGGING_LABEL_33_2 22
#define OBJECT_33_2 21
#define OBJECT_33_1 20
#define OBJECT_33_0 19
#define EXECUTE_CACHE_33_12 13
#define EXECUTE_CACHE_33_11 15
#define EXECUTE_CACHE_33_8 17
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_33_4);
      goto call_compiler_6;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_compiler_9)
DEFLABEL (call_compiler_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Wrd9.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_33_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_33_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define TAG_34_7 2
#define LABEL_34_9 9
#define LABEL_34_11 11
#define TAG_34_12 4
#define LABEL_34_14 13
#define ENVIRONMENT_LABEL_34_3 30
#define DEBUGGING_LABEL_34_2 29
#define OBJECT_34_1 28
#define OBJECT_34_0 27
#define EXECUTE_CACHE_34_17 15
#define EXECUTE_CACHE_34_16 17
#define EXECUTE_CACHE_34_15 19
#define EXECUTE_CACHE_34_13 21
#define EXECUTE_CACHE_34_10 23
#define EXECUTE_CACHE_34_8 25
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_34_4);
      goto swank_compile_file_for_emacs_5;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_34_11);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_compile_file_for_emacs_8)
DEFLABEL (swank_compile_file_for_emacs_5)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (current_block [OBJECT_34_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_34_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_11])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_34_11);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_8 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define EXECUTE_CACHE_35_10 9
#define EXECUTE_CACHE_35_9 11
#define EXECUTE_CACHE_35_7 13
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_35_4);
      goto swank_load_file_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_load_file_5)
DEFLABEL (swank_load_file_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_8 7
#define LABEL_36_9 9
#define LABEL_36_12 11
#define ENVIRONMENT_LABEL_36_3 24
#define DEBUGGING_LABEL_36_2 23
#define EXECUTE_CACHE_36_14 13
#define EXECUTE_CACHE_36_13 15
#define EXECUTE_CACHE_36_11 17
#define EXECUTE_CACHE_36_10 19
#define EXECUTE_CACHE_36_7 21
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_36_4);
      goto swank_disassemble_symbol_4;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_disassemble_symbol_7)
DEFLABEL (swank_disassemble_symbol_4)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

INVOKE_INTERFACE_TARGET_0
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
swank_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto swank_default_directory_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_default_directory_4)
DEFLABEL (swank_default_directory_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
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
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_7 7
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto swank_set_default_directory_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_set_default_directory_4)
DEFLABEL (swank_set_default_directory_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_9 9
#define LABEL_39_13 11
#define LABEL_39_17 13
#define LABEL_39_18 15
#define LABEL_39_20 17
#define LABEL_39_21 19
#define LABEL_39_22 21
#define LABEL_39_11 23
#define LABEL_39_30 25
#define LABEL_39_31 27
#define LABEL_39_32 29
#define LABEL_39_24 31
#define LABEL_39_25 33
#define LABEL_39_26 35
#define LABEL_39_34 37
#define LABEL_39_35 39
#define TAG_39_36 18
#define LABEL_39_14 41
#define LABEL_39_15 43
#define ENVIRONMENT_LABEL_39_3 85
#define DEBUGGING_LABEL_39_2 84
#define OBJECT_39_6 83
#define OBJECT_39_5 82
#define OBJECT_39_4 81
#define OBJECT_39_3 80
#define OBJECT_39_2 79
#define OBJECT_39_1 78
#define OBJECT_39_0 77
#define EXECUTE_CACHE_39_41 45
#define EXECUTE_CACHE_39_40 47
#define EXECUTE_CACHE_39_39 49
#define EXECUTE_CACHE_39_38 51
#define EXECUTE_CACHE_39_37 53
#define EXECUTE_CACHE_39_33 55
#define EXECUTE_CACHE_39_29 57
#define EXECUTE_CACHE_39_28 59
#define EXECUTE_CACHE_39_27 61
#define EXECUTE_CACHE_39_23 63
#define EXECUTE_CACHE_39_19 65
#define EXECUTE_CACHE_39_16 67
#define EXECUTE_CACHE_39_12 69
#define EXECUTE_CACHE_39_10 71
#define EXECUTE_CACHE_39_8 73
#define EXECUTE_CACHE_39_6 75
#define FREE_REFERENCES_LABEL_39_0 44
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd44;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd56;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
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
      current_block = (Rpc - LABEL_39_4);
      goto swank_describe_symbol_29;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_13);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_39_17);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_39_18);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_39_20);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_39_21);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_39_22);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_39_30);
      goto continuation_19;

    case 12:
      current_block = (Rpc - LABEL_39_31);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_39_32);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_39_24);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_39_25);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_39_26);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_39_34);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_39_35);
      goto lambda_33;

    case 19:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_describe_symbol_32)
DEFLABEL (swank_describe_symbol_29)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (! (Rvl == (current_block [OBJECT_39_0])))
    goto label_51;
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_22);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_21);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd61.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_20);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_24]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_34)
DEFLABEL (label_45)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_39_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_38]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_39_17);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_43)
  (Wrd48.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_25]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_26]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_40]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_39_24);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_38]));

DEFLABEL (label_37)
  (Wrd15.Obj) = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_42)
  (Rsp [6]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_36;

DEFLABEL (label_38)
  (Wrd25.Obj) = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_41)
  (Rsp [7]) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_30]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_34]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_35])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  ((Wrd35.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_37]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_38]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_39_30);
  (Wrd39.Obj) = Rvl;

DEFLABEL (label_39)
  (Rsp [8]) = (Wrd39.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_33]));

DEFLABEL (label_40)
  (Wrd39.Obj) = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [1]));
  goto label_39;

DEFLABEL (label_44)
  (Wrd47.Obj) = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_43;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_39_31);
  (Wrd25.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_32);
  (Wrd15.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_39_35);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_41]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define EXECUTE_CACHE_40_5 5
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto swank_describe_function_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_describe_function_3)
DEFLABEL (swank_describe_function_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 8
#define DEBUGGING_LABEL_41_2 7
#define EXECUTE_CACHE_41_5 5
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto swank_describe_definition_for_emacs_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_describe_definition_for_emacs_3)
DEFLABEL (swank_describe_definition_for_emacs_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_9 9
#define LABEL_42_13 11
#define LABEL_42_11 13
#define LABEL_42_14 15
#define LABEL_42_15 17
#define LABEL_42_16 19
#define LABEL_42_17 21
#define LABEL_42_18 23
#define LABEL_42_19 25
#define LABEL_42_21 27
#define LABEL_42_23 29
#define LABEL_42_25 31
#define LABEL_42_29 33
#define LABEL_42_27 35
#define LABEL_42_30 37
#define LABEL_42_31 39
#define LABEL_42_32 41
#define LABEL_42_34 43
#define ENVIRONMENT_LABEL_42_3 105
#define DEBUGGING_LABEL_42_2 104
#define OBJECT_42_34 103
#define OBJECT_42_33 102
#define OBJECT_42_32 101
#define OBJECT_42_31 100
#define OBJECT_42_30 99
#define OBJECT_42_29 98
#define OBJECT_42_28 97
#define OBJECT_42_27 96
#define OBJECT_42_26 95
#define OBJECT_42_25 94
#define OBJECT_42_24 93
#define OBJECT_42_23 92
#define OBJECT_42_22 91
#define OBJECT_42_21 90
#define OBJECT_42_20 89
#define OBJECT_42_19 88
#define OBJECT_42_18 87
#define OBJECT_42_17 86
#define OBJECT_42_16 85
#define OBJECT_42_15 84
#define OBJECT_42_14 83
#define OBJECT_42_13 82
#define OBJECT_42_12 81
#define OBJECT_42_11 80
#define OBJECT_42_10 79
#define OBJECT_42_9 78
#define OBJECT_42_8 77
#define OBJECT_42_7 76
#define OBJECT_42_6 75
#define OBJECT_42_5 74
#define OBJECT_42_4 73
#define OBJECT_42_3 72
#define OBJECT_42_2 71
#define OBJECT_42_1 70
#define OBJECT_42_0 69
#define EXECUTE_CACHE_42_36 45
#define EXECUTE_CACHE_42_35 47
#define EXECUTE_CACHE_42_33 49
#define EXECUTE_CACHE_42_28 51
#define EXECUTE_CACHE_42_26 53
#define EXECUTE_CACHE_42_24 55
#define EXECUTE_CACHE_42_22 57
#define EXECUTE_CACHE_42_20 59
#define EXECUTE_CACHE_42_12 61
#define EXECUTE_CACHE_42_10 63
#define EXECUTE_CACHE_42_8 65
#define EXECUTE_CACHE_42_6 67
#define FREE_REFERENCES_LABEL_42_0 44
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd102;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_42_4);
      goto get_object_type_name_29;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_42_16);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_42_17);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_42_18);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_42_21);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_42_23);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_42_25);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_42_29);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_42_27);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_42_30);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_42_31);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_42_32);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_42_34);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_object_type_name_38)
DEFLABEL (get_object_type_name_29)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = (current_block [OBJECT_42_3]);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 30)
    goto label_87;
  if ((Wrd10.uLng) == 2)
    goto label_86;
  if ((Wrd10.uLng) == 26)
    goto label_85;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = (current_block [OBJECT_42_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = (current_block [OBJECT_42_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (current_block [OBJECT_42_21]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_42_6]);
  (Wrd97.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd97.Lng))))
    goto label_84;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd94.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_77;

DEFLABEL (label_83)
  (Wrd84.Obj) = (current_block [OBJECT_42_8]);
  (Wrd87.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd87.Lng))))
    goto label_82;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd84.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_77;

DEFLABEL (label_81)
  (Wrd74.Obj) = (current_block [OBJECT_42_9]);
  (Wrd77.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd77.Lng))))
    goto label_80;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd74.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_77;

DEFLABEL (label_79)
  (Wrd64.Obj) = (current_block [OBJECT_42_10]);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd67.Lng))))
    goto label_78;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_77;

DEFLABEL (label_76)
  (Wrd29.Obj) = (current_block [OBJECT_42_11]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd39.Lng)))
    goto label_45;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_45)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_47;
  (Wrd31.Obj) = (current_block [OBJECT_42_13]);
  goto label_46;

DEFLABEL (label_47)
  (Wrd31.Obj) = (current_block [OBJECT_42_12]);

DEFLABEL (label_46)
DEFLABEL (label_75)
  Rsp = (& (Rsp [3]));
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_42_20]);
  goto label_43;

DEFLABEL (label_49)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_74;
  if ((Wrd42.uLng) == 1)
    goto label_73;
  if ((Wrd41.Obj) == (current_block [OBJECT_42_16]))
    goto label_72;
  if ((Wrd42.uLng) == 47)
    goto label_71;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_19]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = (current_block [OBJECT_42_22]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_42_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (current_block [OBJECT_42_23]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_42_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = (current_block [OBJECT_42_24]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  Rvl = (current_block [OBJECT_42_25]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_42_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  Rvl = (current_block [OBJECT_42_26]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_42_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  Rvl = (current_block [OBJECT_42_32]);

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_42_27]);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd55.Lng))))
    goto label_70;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd17.Obj) = (current_block [OBJECT_42_28]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_57;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_57)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_59;
  (Wrd19.Obj) = (current_block [OBJECT_42_13]);
  goto label_58;

DEFLABEL (label_59)
  (Wrd19.Obj) = (current_block [OBJECT_42_12]);

DEFLABEL (label_58)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_60)
  Rvl = (current_block [OBJECT_42_31]);
  goto label_55;

DEFLABEL (label_61)
  (Wrd39.Obj) = (current_block [OBJECT_42_29]);
  (Wrd42.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd42.Lng))))
    goto label_66;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_32]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_33]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_42_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  Rvl = (current_block [OBJECT_42_33]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_35]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_42_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  Rvl = (current_block [OBJECT_42_34]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_36]));

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_42_30]);
  goto label_55;

DEFLABEL (label_66)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_60;

DEFLABEL (label_70)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_42_18]);
  goto label_43;

DEFLABEL (label_72)
  Rvl = (current_block [OBJECT_42_17]);
  goto label_43;

DEFLABEL (label_73)
  Rvl = (current_block [OBJECT_42_15]);
  goto label_43;

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_42_14]);
  goto label_43;

DEFLABEL (label_77)
  Rsp = (& (Rsp [2]));
  goto label_48;

DEFLABEL (label_78)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (label_80)
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_77;

DEFLABEL (label_82)
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_77;

DEFLABEL (label_84)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  goto label_77;

DEFLABEL (label_85)
  Rvl = (current_block [OBJECT_42_2]);
  goto label_39;

DEFLABEL (label_86)
  Rvl = (current_block [OBJECT_42_1]);
  goto label_39;

DEFLABEL (label_87)
  Rvl = (current_block [OBJECT_42_0]);
  goto label_39;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_42_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_60;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_9 9
#define ENVIRONMENT_LABEL_43_3 19
#define DEBUGGING_LABEL_43_2 18
#define OBJECT_43_0 17
#define EXECUTE_CACHE_43_10 11
#define EXECUTE_CACHE_43_8 13
#define EXECUTE_CACHE_43_6 15
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_43_4);
      goto swank_set_package_6;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_set_package_9)
DEFLABEL (swank_set_package_6)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Rsp [0]) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_43_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define ENVIRONMENT_LABEL_44_3 15
#define DEBUGGING_LABEL_44_2 14
#define OBJECT_44_0 13
#define EXECUTE_CACHE_44_8 9
#define EXECUTE_CACHE_44_7 11
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_44_4);
      goto swank_create_repl_4;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_create_repl_7)
DEFLABEL (swank_create_repl_4)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_44_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define TAG_45_6 1
#define LABEL_45_8 7
#define LABEL_45_9 9
#define LABEL_45_12 11
#define ENVIRONMENT_LABEL_45_3 24
#define DEBUGGING_LABEL_45_2 23
#define EXECUTE_CACHE_45_14 13
#define EXECUTE_CACHE_45_13 15
#define EXECUTE_CACHE_45_11 17
#define EXECUTE_CACHE_45_10 19
#define EXECUTE_CACHE_45_7 21
#define FREE_REFERENCES_LABEL_45_0 12
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_45_4);
      goto swank_swank_macroexpand_all_4;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_swank_macroexpand_all_7)
DEFLABEL (swank_swank_macroexpand_all_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define TAG_46_7 2
#define LABEL_46_9 9
#define LABEL_46_11 11
#define TAG_46_12 4
#define LABEL_46_14 13
#define LABEL_46_15 15
#define LABEL_46_18 17
#define ENVIRONMENT_LABEL_46_3 35
#define DEBUGGING_LABEL_46_2 34
#define OBJECT_46_0 33
#define EXECUTE_CACHE_46_20 19
#define EXECUTE_CACHE_46_19 21
#define EXECUTE_CACHE_46_17 23
#define EXECUTE_CACHE_46_16 25
#define EXECUTE_CACHE_46_13 27
#define EXECUTE_CACHE_46_10 29
#define EXECUTE_CACHE_46_8 31
#define FREE_REFERENCES_LABEL_46_0 18
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_46_4);
      goto swank_operator_arglist_8;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_46_11);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_operator_arglist_11)
DEFLABEL (swank_operator_arglist_8)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_46_0]);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (Rsp [0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_46_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_46_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define ENVIRONMENT_LABEL_47_3 22
#define DEBUGGING_LABEL_47_2 21
#define OBJECT_47_1 20
#define OBJECT_47_0 19
#define EXECUTE_CACHE_47_11 9
#define EXECUTE_CACHE_47_10 11
#define EXECUTE_CACHE_47_9 13
#define EXECUTE_CACHE_47_8 15
#define EXECUTE_CACHE_47_6 17
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_47_4);
      goto carefully_pa_2;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (carefully_pa_5)
DEFLABEL (carefully_pa_2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (label_6)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_47_1]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_11 11
#define ENVIRONMENT_LABEL_48_3 35
#define DEBUGGING_LABEL_48_2 34
#define OBJECT_48_12 33
#define OBJECT_48_11 32
#define OBJECT_48_10 31
#define OBJECT_48_9 30
#define OBJECT_48_8 29
#define OBJECT_48_7 28
#define OBJECT_48_6 27
#define OBJECT_48_5 26
#define OBJECT_48_4 25
#define OBJECT_48_3 24
#define OBJECT_48_2 23
#define OBJECT_48_1 22
#define OBJECT_48_0 21
#define EXECUTE_CACHE_48_12 13
#define EXECUTE_CACHE_48_10 15
#define EXECUTE_CACHE_48_9 17
#define EXECUTE_CACHE_48_7 19
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_48_4);
      goto swank_connection_info_22;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_connection_info_25)
DEFLABEL (swank_connection_info_22)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd9.Obj) = (current_block [OBJECT_48_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_48_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_48_3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_48_4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_48_5]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_48_6]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_48_7]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_48_8]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_48_9]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_48_10]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_48_11]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_48_12]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 6
#define DEBUGGING_LABEL_49_2 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto swank_swank_require_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_swank_require_3)
DEFLABEL (swank_swank_require_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_10 7
#define LABEL_50_12 9
#define LABEL_50_13 11
#define LABEL_50_7 13
#define LABEL_50_9 15
#define LABEL_50_14 17
#define LABEL_50_15 19
#define LABEL_50_16 21
#define TAG_50_17 9
#define ENVIRONMENT_LABEL_50_3 44
#define DEBUGGING_LABEL_50_2 43
#define OBJECT_50_1 42
#define OBJECT_50_0 41
#define EXECUTE_CACHE_50_22 23
#define EXECUTE_CACHE_50_21 25
#define EXECUTE_CACHE_50_20 27
#define EXECUTE_CACHE_50_19 29
#define EXECUTE_CACHE_50_18 31
#define EXECUTE_CACHE_50_11 33
#define EXECUTE_CACHE_50_8 35
#define EXECUTE_CACHE_50_6 37
#define FREE_REFERENCE_50_0 40
#define FREE_REFERENCES_LABEL_50_0 22
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto procedure_parameters_14;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_10);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_50_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_50_16);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_parameters_18)
DEFLABEL (procedure_parameters_14)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_50_0])))
    goto label_22;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_16])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd33 = Wrd32;
  (Wrd34.Obj) = (Rsp [3]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd8.Obj) = (current_block [OBJECT_50_1]);
  goto label_20;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;
  Wrd10 = Wrd14;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_24)
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
  goto label_20;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_10])), (Wrd11.pObj));

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_50_16);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define LABEL_51_11 9
#define LABEL_51_9 11
#define ENVIRONMENT_LABEL_51_3 24
#define DEBUGGING_LABEL_51_2 23
#define OBJECT_51_1 22
#define OBJECT_51_0 21
#define EXECUTE_CACHE_51_12 13
#define EXECUTE_CACHE_51_10 15
#define EXECUTE_CACHE_51_8 17
#define EXECUTE_CACHE_51_6 19
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_51_4);
      goto find_string_before_swank_cursor_marker_5;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_11);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_51_9);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_string_before_swank_cursor_marker_9)
DEFLABEL (find_string_before_swank_cursor_marker_5)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (label_12)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_16)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 30)
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_15;
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_15)
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd21.pObj) [0]);
  goto label_13;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_51_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_12 9
#define LABEL_52_9 11
#define LABEL_52_10 13
#define ENVIRONMENT_LABEL_52_3 29
#define DEBUGGING_LABEL_52_2 28
#define OBJECT_52_2 27
#define OBJECT_52_1 26
#define OBJECT_52_0 25
#define EXECUTE_CACHE_52_14 15
#define EXECUTE_CACHE_52_13 17
#define EXECUTE_CACHE_52_11 19
#define EXECUTE_CACHE_52_8 21
#define EXECUTE_CACHE_52_6 23
#define FREE_REFERENCES_LABEL_52_0 14
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_52_4);
      goto swank_autodoc_11;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_52_12);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_autodoc_14)
DEFLABEL (swank_autodoc_11)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd15.Obj) = (current_block [OBJECT_52_0]);
  (Wrd16.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_52_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_12);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd18.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (current_block [OBJECT_52_2]);
  Rsp = (& (Rsp [1]));
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 8
#define DEBUGGING_LABEL_53_2 7
#define EXECUTE_CACHE_53_5 5
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_53_4);
      goto swank_quit_lisp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_quit_lisp_3)
DEFLABEL (swank_quit_lisp_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 6
#define DEBUGGING_LABEL_54_2 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_54_4);
      goto swank_buffer_first_change_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_buffer_first_change_3)
DEFLABEL (swank_buffer_first_change_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  Rvl = (current_block [OBJECT_54_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 6
#define DEBUGGING_LABEL_55_2 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_55_4);
      goto swank_find_definitions_for_emacs_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_find_definitions_for_emacs_3)
DEFLABEL (swank_find_definitions_for_emacs_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  Rvl = (current_block [OBJECT_55_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto sldb_state_condition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_state_condition_3)
DEFLABEL (sldb_state_condition_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

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

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto sldb_state_restarts_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_state_restarts_3)
DEFLABEL (sldb_state_restarts_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

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

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 8
#define DEBUGGING_LABEL_58_2 7
#define OBJECT_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto set_sldb_state_conditionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_sldb_state_conditionB_3)
DEFLABEL (set_sldb_state_conditionB_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_58_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 8
#define DEBUGGING_LABEL_59_2 7
#define OBJECT_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto set_sldb_state_restartsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_sldb_state_restartsB_3)
DEFLABEL (set_sldb_state_restartsB_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_59_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define ENVIRONMENT_LABEL_60_3 17
#define DEBUGGING_LABEL_60_2 16
#define OBJECT_60_3 15
#define OBJECT_60_2 14
#define OBJECT_60_1 13
#define OBJECT_60_0 12
#define FREE_REFERENCE_60_0 11
#define FREE_REFERENCES_LABEL_60_0 10
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_60_4);
      goto sldb_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_stateP_10)
DEFLABEL (sldb_stateP_4)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_60_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_60_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define LABEL_61_10 9
#define TAG_61_11 3
#define LABEL_61_8 11
#define TAG_61_9 4
#define LABEL_61_20 13
#define LABEL_61_21 15
#define LABEL_61_22 17
#define LABEL_61_14 19
#define TAG_61_15 8
#define LABEL_61_25 21
#define LABEL_61_16 23
#define LABEL_61_17 25
#define TAG_61_18 11
#define LABEL_61_27 27
#define LABEL_61_23 29
#define LABEL_61_24 31
#define ENVIRONMENT_LABEL_61_3 59
#define DEBUGGING_LABEL_61_2 58
#define OBJECT_61_6 57
#define OBJECT_61_5 56
#define OBJECT_61_4 55
#define OBJECT_61_3 54
#define OBJECT_61_2 53
#define OBJECT_61_1 52
#define OBJECT_61_0 51
#define EXECUTE_CACHE_61_29 33
#define EXECUTE_CACHE_61_28 35
#define EXECUTE_CACHE_61_26 37
#define EXECUTE_CACHE_61_19 39
#define EXECUTE_CACHE_61_13 41
#define EXECUTE_CACHE_61_12 43
#define EXECUTE_CACHE_61_7 45
#define FREE_REFERENCE_61_0 48
#define FREE_ASSIGNMENT_61_0 50
#define FREE_REFERENCES_LABEL_61_0 32
#define NUMBER_OF_LINKER_SECTIONS_61_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_61_4);
      goto invoke_sldb_24;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_10);
      goto lambda_34;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto swapB_33;

    case 5:
      current_block = (Rpc - LABEL_61_20);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_61_21);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_61_22);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_61_14);
      goto lambda_35;

    case 9:
      current_block = (Rpc - LABEL_61_25);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_61_16);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_61_17);
      goto lambda_36;

    case 12:
      current_block = (Rpc - LABEL_61_27);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_61_23);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_61_24);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_sldb_32)
DEFLABEL (invoke_sldb_24)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_8])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  ((Wrd22.pObj) [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_10])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_61_10);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_14])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_17])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  ((Wrd24.pObj) [2]) = (Wrd14.Obj);
  ((Wrd24.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_19]));

DEFLABEL (swapB_33)
  CLOSURE_HEADER (LABEL_61_8);

DEFLABEL (swapB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_61_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_28)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_27)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_61_20])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_61_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_61_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_61_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_48;
  Wrd16 = Wrd20;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_26]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_61_24);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_61_2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_61_6]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_61_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_29]));

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_25])), (Wrd17.pObj));

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_37)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_61_16);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_61_17);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_50;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_50;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_49)
  (Wrd24.Obj) = (current_block [OBJECT_61_3]);
  (Wrd25.Obj) = (current_block [OBJECT_61_4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_61_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_61_5]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [3]);
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_28]));

DEFLABEL (label_50)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define LABEL_62_8 9
#define TAG_62_9 3
#define LABEL_62_10 11
#define ENVIRONMENT_LABEL_62_3 30
#define DEBUGGING_LABEL_62_2 29
#define OBJECT_62_5 28
#define OBJECT_62_4 27
#define OBJECT_62_3 26
#define OBJECT_62_2 25
#define OBJECT_62_1 24
#define OBJECT_62_0 23
#define EXECUTE_CACHE_62_14 13
#define EXECUTE_CACHE_62_13 15
#define EXECUTE_CACHE_62_12 17
#define EXECUTE_CACHE_62_11 19
#define EXECUTE_CACHE_62_6 21
#define FREE_REFERENCES_LABEL_62_0 12
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_62_4);
      goto sldb_loop_7;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_loop_10)
DEFLABEL (sldb_loop_7)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (current_block [OBJECT_62_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_62_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_62_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_8])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_62_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_62_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_62_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_7 9
#define LABEL_63_8 11
#define LABEL_63_10 13
#define LABEL_63_12 15
#define LABEL_63_13 17
#define LABEL_63_14 19
#define LABEL_63_16 21
#define ENVIRONMENT_LABEL_63_3 45
#define DEBUGGING_LABEL_63_2 44
#define OBJECT_63_6 43
#define OBJECT_63_5 42
#define OBJECT_63_4 41
#define OBJECT_63_3 40
#define OBJECT_63_2 39
#define OBJECT_63_1 38
#define OBJECT_63_0 37
#define EXECUTE_CACHE_63_19 23
#define EXECUTE_CACHE_63_18 25
#define EXECUTE_CACHE_63_17 27
#define EXECUTE_CACHE_63_15 29
#define EXECUTE_CACHE_63_11 31
#define EXECUTE_CACHE_63_9 33
#define FREE_REFERENCE_63_0 36
#define FREE_REFERENCES_LABEL_63_0 22
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_63_4);
      goto sldb_info_16;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_63_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_63_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_63_14);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_63_16);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_info_22)
DEFLABEL (sldb_info_16)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_25)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_24;
  Wrd38 = Wrd42;

DEFLABEL (label_23)
  (Wrd47.Obj) = (current_block [OBJECT_63_3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_63_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_63_12);
  (Wrd8.Obj) = (current_block [OBJECT_63_5]);
  (Wrd9.Obj) = (current_block [OBJECT_63_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_7])), (Wrd39.pObj));

DEFLABEL (label_20)
  (Wrd38.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_63_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_63_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define LABEL_64_8 9
#define TAG_64_9 3
#define LABEL_64_11 11
#define LABEL_64_12 13
#define ENVIRONMENT_LABEL_64_3 27
#define DEBUGGING_LABEL_64_2 26
#define OBJECT_64_0 25
#define EXECUTE_CACHE_64_15 15
#define EXECUTE_CACHE_64_14 17
#define EXECUTE_CACHE_64_13 19
#define EXECUTE_CACHE_64_10 21
#define EXECUTE_CACHE_64_6 23
#define FREE_REFERENCES_LABEL_64_0 14
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_64_4);
      goto sldb_restarts_6;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto lambda_5;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_64_8);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_64_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_64_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_restarts_9)
DEFLABEL (sldb_restarts_6)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_64_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_7);
  (Wrd9.Obj) = (current_block [OBJECT_64_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_64_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 8
#define DEBUGGING_LABEL_65_2 7
#define EXECUTE_CACHE_65_5 5
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_65_4);
      goto swank_throw_to_toplevel_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_throw_to_toplevel_3)
DEFLABEL (swank_throw_to_toplevel_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define ENVIRONMENT_LABEL_66_3 16
#define DEBUGGING_LABEL_66_2 15
#define OBJECT_66_1 14
#define OBJECT_66_0 13
#define EXECUTE_CACHE_66_7 9
#define FREE_REFERENCE_66_0 12
#define FREE_REFERENCES_LABEL_66_0 8
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_66_4);
      goto swank_sldb_abort_1;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_sldb_abort_6)
DEFLABEL (swank_sldb_abort_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_66_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define ENVIRONMENT_LABEL_67_3 16
#define DEBUGGING_LABEL_67_2 15
#define OBJECT_67_1 14
#define OBJECT_67_0 13
#define EXECUTE_CACHE_67_7 9
#define FREE_REFERENCE_67_0 12
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_67_4);
      goto swank_sldb_continue_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_sldb_continue_6)
DEFLABEL (swank_sldb_continue_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_67_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_6 5
#define LABEL_68_5 7
#define LABEL_68_9 9
#define LABEL_68_10 11
#define LABEL_68_8 13
#define ENVIRONMENT_LABEL_68_3 30
#define DEBUGGING_LABEL_68_2 29
#define OBJECT_68_4 28
#define OBJECT_68_3 27
#define OBJECT_68_2 26
#define OBJECT_68_1 25
#define OBJECT_68_0 24
#define EXECUTE_CACHE_68_12 15
#define EXECUTE_CACHE_68_11 17
#define EXECUTE_CACHE_68_7 19
#define FREE_REFERENCE_68_1 22
#define FREE_REFERENCE_68_0 23
#define FREE_REFERENCES_LABEL_68_0 14
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_68_4);
      goto swank_invoke_nth_restart_for_emacs_6;

    case 1:
      current_block = (Rpc - LABEL_68_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_68_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_68_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_invoke_nth_restart_for_emacs_12)
DEFLABEL (swank_invoke_nth_restart_for_emacs_6)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;
  Wrd10 = Wrd14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (current_block [OBJECT_68_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_68_1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_68_2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_16;
  Wrd10 = Wrd14;

DEFLABEL (label_15)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_14;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_14;
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (label_14)
  (Wrd25.Obj) = (current_block [OBJECT_68_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_4]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd11.pObj));

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd11.pObj));

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define EXECUTE_CACHE_69_6 7
#define FREE_REFERENCE_69_0 10
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_69_4);
      goto swank_debugger_info_for_emacs_0;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_debugger_info_for_emacs_4)
DEFLABEL (swank_debugger_info_for_emacs_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define ENVIRONMENT_LABEL_70_3 16
#define DEBUGGING_LABEL_70_2 15
#define OBJECT_70_1 14
#define OBJECT_70_0 13
#define EXECUTE_CACHE_70_7 9
#define FREE_REFERENCE_70_0 12
#define FREE_REFERENCES_LABEL_70_0 8
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_70_4);
      goto swank_backtrace_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_backtrace_6)
DEFLABEL (swank_backtrace_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_70_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 12
#define DEBUGGING_LABEL_71_2 11
#define EXECUTE_CACHE_71_7 7
#define EXECUTE_CACHE_71_6 9
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_71_4);
      goto sldb_backtrace_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_backtrace_4)
DEFLABEL (sldb_backtrace_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_9 9
#define LABEL_72_7 11
#define LABEL_72_12 13
#define LABEL_72_14 15
#define LABEL_72_15 17
#define LABEL_72_13 19
#define LABEL_72_16 21
#define ENVIRONMENT_LABEL_72_3 35
#define DEBUGGING_LABEL_72_2 34
#define OBJECT_72_2 33
#define OBJECT_72_1 32
#define OBJECT_72_0 31
#define EXECUTE_CACHE_72_11 23
#define EXECUTE_CACHE_72_10 25
#define EXECUTE_CACHE_72_8 27
#define FREE_REFERENCE_72_0 30
#define FREE_REFERENCES_LABEL_72_0 22
#define NUMBER_OF_LINKER_SECTIONS_72_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_72_4);
      goto sldb_backtrace_aux_14;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_72_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_72_12);
      goto loop_11;

    case 6:
      current_block = (Rpc - LABEL_72_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_72_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_72_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_72_16);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_backtrace_aux_21)
DEFLABEL (sldb_backtrace_aux_14)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_9])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_72_12);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_25;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_29;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_29;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_28)
  goto loop_11;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_72_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_26)
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_7 7
#define LABEL_73_11 9
#define LABEL_73_8 11
#define LABEL_73_9 13
#define TAG_73_10 5
#define LABEL_73_14 15
#define LABEL_73_15 17
#define TAG_73_16 7
#define LABEL_73_18 19
#define ENVIRONMENT_LABEL_73_3 39
#define DEBUGGING_LABEL_73_2 38
#define OBJECT_73_2 37
#define OBJECT_73_1 36
#define OBJECT_73_0 35
#define EXECUTE_CACHE_73_20 21
#define EXECUTE_CACHE_73_19 23
#define EXECUTE_CACHE_73_17 25
#define EXECUTE_CACHE_73_13 27
#define EXECUTE_CACHE_73_21 29
#define EXECUTE_CACHE_73_12 31
#define EXECUTE_CACHE_73_6 33
#define FREE_REFERENCES_LABEL_73_0 20
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
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
      goto continuation__frames_11;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_73_11);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_73_9);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_73_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_73_15);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_73_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation__frames_14)
DEFLABEL (continuation__frames_11)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Rsp [0]) = Rvl;
  goto loop_9;

DEFLABEL (loop_16)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_73_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_9])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_73_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_73_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_73_9);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_73_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_73_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_21]));

DEFLABEL (label_20)
  goto loop_9;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_73_15);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_10 7
#define LABEL_74_7 9
#define TAG_74_8 3
#define ENVIRONMENT_LABEL_74_3 24
#define DEBUGGING_LABEL_74_2 23
#define OBJECT_74_1 22
#define OBJECT_74_0 21
#define EXECUTE_CACHE_74_13 11
#define EXECUTE_CACHE_74_12 13
#define EXECUTE_CACHE_74_11 15
#define EXECUTE_CACHE_74_9 17
#define EXECUTE_CACHE_74_6 19
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_74_4);
      goto frame__string_3;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_74_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame__string_6)
DEFLABEL (frame__string_3)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_10);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_12]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_74_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_7 7
#define TAG_75_8 2
#define LABEL_75_9 9
#define LABEL_75_11 11
#define LABEL_75_19 13
#define LABEL_75_16 15
#define TAG_75_17 6
#define LABEL_75_14 17
#define TAG_75_15 7
#define LABEL_75_24 19
#define LABEL_75_25 21
#define LABEL_75_26 23
#define LABEL_75_21 25
#define LABEL_75_22 27
#define LABEL_75_31 29
#define LABEL_75_23 31
#define LABEL_75_27 33
#define LABEL_75_28 35
#define ENVIRONMENT_LABEL_75_3 67
#define DEBUGGING_LABEL_75_2 66
#define OBJECT_75_4 65
#define OBJECT_75_3 64
#define OBJECT_75_2 63
#define OBJECT_75_1 62
#define OBJECT_75_0 61
#define EXECUTE_CACHE_75_33 37
#define EXECUTE_CACHE_75_32 39
#define EXECUTE_CACHE_75_30 41
#define EXECUTE_CACHE_75_29 43
#define EXECUTE_CACHE_75_20 45
#define EXECUTE_CACHE_75_18 47
#define EXECUTE_CACHE_75_13 49
#define EXECUTE_CACHE_75_12 51
#define EXECUTE_CACHE_75_10 53
#define EXECUTE_CACHE_75_6 55
#define FREE_REFERENCE_75_0 58
#define FREE_ASSIGNMENT_75_0 60
#define FREE_REFERENCES_LABEL_75_0 36
#define NUMBER_OF_LINKER_SECTIONS_75_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_75_4);
      goto print_frame_21;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_20;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto lambda_28;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_75_19);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_75_16);
      goto lambda_30;

    case 7:
      current_block = (Rpc - LABEL_75_14);
      goto swapB_29;

    case 8:
      current_block = (Rpc - LABEL_75_24);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_75_25);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_75_26);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_75_21);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_75_22);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_75_31);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_75_23);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_75_27);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_75_28);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_frame_27)
DEFLABEL (print_frame_21)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_75_7);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd7.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

DEFLABEL (label_31)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd14.Obj) = (current_block [OBJECT_75_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_14])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  ((Wrd32.pObj) [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_16])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd33.Obj);
  (Rsp [5]) = (Wrd33.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_18]));

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd14.Obj) = (current_block [OBJECT_75_2]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_75_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_75_28);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_27);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_75_16);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_34)
DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_75_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_30]));

DEFLABEL (swapB_29)
  CLOSURE_HEADER (LABEL_75_14);

DEFLABEL (swapB_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_75_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_75_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_75_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_75_26])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_25)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_75_25])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_24)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_75_24])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define LABEL_76_7 9
#define LABEL_76_10 11
#define LABEL_76_13 13
#define LABEL_76_14 15
#define LABEL_76_8 17
#define LABEL_76_11 19
#define LABEL_76_17 21
#define ENVIRONMENT_LABEL_76_3 34
#define DEBUGGING_LABEL_76_2 33
#define OBJECT_76_1 32
#define OBJECT_76_0 31
#define EXECUTE_CACHE_76_16 23
#define EXECUTE_CACHE_76_15 25
#define EXECUTE_CACHE_76_12 27
#define EXECUTE_CACHE_76_9 29
#define FREE_REFERENCES_LABEL_76_0 22
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_76_4);
      goto substream_12;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_76_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_76_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_76_13);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_76_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_76_11);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_76_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substream_19)
DEFLABEL (substream_12)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_76_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_10;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_76_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_30;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_30;
  if (! ((Wrd5.Obj) == (Wrd7.Obj)))
    goto label_22;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd19.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_16]));

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_76_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_29;
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_29;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if ((Wrd64.Lng) < (Wrd66.Lng))
    goto label_26;

DEFLABEL (label_25)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_24;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_24;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_76_8);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_76_17);
  (Rsp [2]) = Rvl;
  goto loop_10;

DEFLABEL (label_24)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd39.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_28;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_28;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd53.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_76_11);
  (Rsp [2]) = Rvl;
  goto loop_10;

DEFLABEL (label_28)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd53.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_9 9
#define LABEL_77_7 11
#define ENVIRONMENT_LABEL_77_3 23
#define DEBUGGING_LABEL_77_2 22
#define OBJECT_77_0 21
#define EXECUTE_CACHE_77_11 13
#define EXECUTE_CACHE_77_10 15
#define EXECUTE_CACHE_77_8 17
#define FREE_REFERENCE_77_0 20
#define FREE_REFERENCES_LABEL_77_0 12
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_77_4);
      goto swank_frame_locals_and_catch_tags_4;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_77_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_frame_locals_and_catch_tags_8)
DEFLABEL (swank_frame_locals_and_catch_tags_4)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd8.Obj) = (current_block [OBJECT_77_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_9])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_7 7
#define LABEL_78_8 9
#define ENVIRONMENT_LABEL_78_3 19
#define DEBUGGING_LABEL_78_2 18
#define OBJECT_78_0 17
#define EXECUTE_CACHE_78_10 11
#define EXECUTE_CACHE_78_9 13
#define EXECUTE_CACHE_78_6 15
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_78_4);
      goto frame_vars_3;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_vars_6)
DEFLABEL (frame_vars_3)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_78_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_78_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define LABEL_79_8 9
#define LABEL_79_11 11
#define LABEL_79_10 13
#define LABEL_79_13 15
#define ENVIRONMENT_LABEL_79_3 29
#define DEBUGGING_LABEL_79_2 28
#define OBJECT_79_0 27
#define EXECUTE_CACHE_79_15 17
#define EXECUTE_CACHE_79_14 19
#define EXECUTE_CACHE_79_12 21
#define EXECUTE_CACHE_79_9 23
#define EXECUTE_CACHE_79_7 25
#define FREE_REFERENCES_LABEL_79_0 16
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_79_4);
      goto environment_frame_vars_8;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_79_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_79_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_79_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_79_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_frame_vars_11)
DEFLABEL (environment_frame_vars_8)
  INTERRUPT_CHECK (26, LABEL_79_4);
  goto loop_6;

DEFLABEL (loop_12)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_79_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_79_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_79_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_79_13);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_10);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_15]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (current_block [OBJECT_79_0]);
  Rsp = (& (Rsp [1]));
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_5 3
#define LABEL_80_4 5
#define LABEL_80_6 7
#define LABEL_80_8 9
#define LABEL_80_10 11
#define LABEL_80_11 13
#define LABEL_80_7 15
#define ENVIRONMENT_LABEL_80_3 30
#define DEBUGGING_LABEL_80_2 29
#define OBJECT_80_7 28
#define OBJECT_80_6 27
#define OBJECT_80_5 26
#define OBJECT_80_4 25
#define OBJECT_80_3 24
#define OBJECT_80_2 23
#define OBJECT_80_1 22
#define OBJECT_80_0 21
#define EXECUTE_CACHE_80_12 17
#define EXECUTE_CACHE_80_9 19
#define FREE_REFERENCES_LABEL_80_0 16
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_80_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_80_4);
      goto frame_var_elisp_12;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_80_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_80_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_80_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_var_elisp_19)
DEFLABEL (frame_var_elisp_12)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_28)
  if ((Wrd8.Obj) == (current_block [OBJECT_80_1]))
    goto label_27;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_26;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_25)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd35.Obj) = Rvl;

DEFLABEL (label_22)
  (Wrd39.Obj) = (current_block [OBJECT_80_3]);
  (Wrd40.Obj) = (current_block [OBJECT_80_1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_80_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_80_5]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_21;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_80_7]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_6]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_6]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_15)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd35.Obj) = (current_block [OBJECT_80_2]);
  Rsp = (& (Rsp [1]));
  goto label_22;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_7 5
#define LABEL_81_8 7
#define LABEL_81_5 9
#define LABEL_81_6 11
#define ENVIRONMENT_LABEL_81_3 24
#define DEBUGGING_LABEL_81_2 23
#define OBJECT_81_1 22
#define OBJECT_81_0 21
#define EXECUTE_CACHE_81_11 13
#define EXECUTE_CACHE_81_10 15
#define EXECUTE_CACHE_81_9 17
#define FREE_REFERENCE_81_0 20
#define FREE_REFERENCES_LABEL_81_0 12
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_81_4);
      goto sldb_get_frame_3;

    case 1:
      current_block = (Rpc - LABEL_81_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_81_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_81_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sldb_get_frame_8)
DEFLABEL (sldb_get_frame_3)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_12;
  Wrd12 = Wrd16;

DEFLABEL (label_11)
  Wrd11 = Wrd12;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_10;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_10;
  (Wrd19.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_10]));

DEFLABEL (label_10)
  (Wrd27.Obj) = (current_block [OBJECT_81_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_7])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_8 7
#define LABEL_82_9 9
#define LABEL_82_6 11
#define ENVIRONMENT_LABEL_82_3 21
#define DEBUGGING_LABEL_82_2 20
#define OBJECT_82_2 19
#define OBJECT_82_1 18
#define OBJECT_82_0 17
#define EXECUTE_CACHE_82_10 13
#define EXECUTE_CACHE_82_7 15
#define FREE_REFERENCES_LABEL_82_0 12
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_82_4);
      goto frame_var_value_5;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_82_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_82_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_82_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_var_value_10)
DEFLABEL (frame_var_value_5)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 1);

DEFLABEL (label_11)
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd23.pObj) [0]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_7)
  (Wrd12.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_82_1]);
  goto label_12;

DEFLABEL (label_17)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_7 7
#define LABEL_83_8 9
#define ENVIRONMENT_LABEL_83_3 20
#define DEBUGGING_LABEL_83_2 19
#define EXECUTE_CACHE_83_11 11
#define EXECUTE_CACHE_83_10 13
#define EXECUTE_CACHE_83_9 15
#define EXECUTE_CACHE_83_6 17
#define FREE_REFERENCES_LABEL_83_0 10
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_83_4);
      goto swank_inspect_frame_var_3;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_83_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_inspect_frame_var_6)
DEFLABEL (swank_inspect_frame_var_3)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_83_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define LABEL_84_8 9
#define LABEL_84_12 11
#define LABEL_84_11 13
#define ENVIRONMENT_LABEL_84_3 27
#define DEBUGGING_LABEL_84_2 26
#define OBJECT_84_0 25
#define EXECUTE_CACHE_84_13 15
#define EXECUTE_CACHE_84_10 17
#define EXECUTE_CACHE_84_9 19
#define EXECUTE_CACHE_84_7 21
#define FREE_REFERENCE_84_0 24
#define FREE_REFERENCES_LABEL_84_0 14
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_84_4);
      goto swank_simple_completions_6;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_84_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_84_12);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_84_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_simple_completions_10)
DEFLABEL (swank_simple_completions_6)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_84_8);
  (Wrd9.Obj) = (current_block [OBJECT_84_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_12;
  Wrd13 = Wrd17;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_84_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_12])), (Wrd14.pObj));

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_6 5
#define LABEL_85_5 7
#define LABEL_85_9 9
#define LABEL_85_10 11
#define TAG_85_11 4
#define LABEL_85_16 13
#define LABEL_85_17 15
#define LABEL_85_13 17
#define LABEL_85_14 19
#define ENVIRONMENT_LABEL_85_3 37
#define DEBUGGING_LABEL_85_2 36
#define OBJECT_85_2 35
#define OBJECT_85_1 34
#define OBJECT_85_0 33
#define EXECUTE_CACHE_85_19 21
#define EXECUTE_CACHE_85_18 23
#define EXECUTE_CACHE_85_15 25
#define EXECUTE_CACHE_85_12 27
#define EXECUTE_CACHE_85_8 29
#define EXECUTE_CACHE_85_7 31
#define FREE_REFERENCES_LABEL_85_0 20
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
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
      goto all_completions_10;

    case 1:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_85_9);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_85_10);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_85_16);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_85_17);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_85_13);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_85_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_completions_13)
DEFLABEL (all_completions_10)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd8.Obj) = (current_block [OBJECT_85_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_15)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_10])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_85_9);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_85_10);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_85_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_85_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_85_16);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_7 7
#define ENVIRONMENT_LABEL_86_3 18
#define DEBUGGING_LABEL_86_2 17
#define OBJECT_86_1 16
#define OBJECT_86_0 15
#define EXECUTE_CACHE_86_9 9
#define EXECUTE_CACHE_86_8 11
#define EXECUTE_CACHE_86_6 13
#define FREE_REFERENCES_LABEL_86_0 8
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_86_4);
      goto longest_common_prefix_2;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (longest_common_prefix_5)
DEFLABEL (longest_common_prefix_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_86_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_86_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_5 7
#define LABEL_87_9 9
#define TAG_87_10 3
#define LABEL_87_11 11
#define LABEL_87_16 13
#define LABEL_87_17 15
#define LABEL_87_13 17
#define LABEL_87_21 19
#define LABEL_87_19 21
#define ENVIRONMENT_LABEL_87_3 54
#define DEBUGGING_LABEL_87_2 53
#define OBJECT_87_11 52
#define OBJECT_87_10 51
#define OBJECT_87_9 50
#define OBJECT_87_8 49
#define OBJECT_87_7 48
#define OBJECT_87_6 47
#define OBJECT_87_5 46
#define OBJECT_87_4 45
#define OBJECT_87_3 44
#define OBJECT_87_2 43
#define OBJECT_87_1 42
#define OBJECT_87_0 41
#define EXECUTE_CACHE_87_23 23
#define EXECUTE_CACHE_87_22 25
#define EXECUTE_CACHE_87_20 27
#define EXECUTE_CACHE_87_18 29
#define EXECUTE_CACHE_87_15 31
#define EXECUTE_CACHE_87_14 33
#define EXECUTE_CACHE_87_12 35
#define EXECUTE_CACHE_87_8 37
#define EXECUTE_CACHE_87_7 39
#define FREE_REFERENCES_LABEL_87_0 22
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd34;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_87_4);
      goto swank_apropos_list_for_emacs_21;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_87_9);
      goto lambda_25;

    case 4:
      current_block = (Rpc - LABEL_87_11);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_87_16);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_87_17);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_87_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_87_21);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_87_19);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_apropos_list_for_emacs_24)
DEFLABEL (swank_apropos_list_for_emacs_21)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_26)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_87_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_87_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_87_11);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (label_27)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_87_9);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_87_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_87_5]))
    goto label_35;
  if (Rvl == (current_block [OBJECT_87_6]))
    goto label_34;
  if (Rvl == (current_block [OBJECT_87_8]))
    goto label_33;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_87_21);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_87_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_16]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_87_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd34.Obj) = (current_block [OBJECT_87_2]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd34.Obj) = (current_block [OBJECT_87_1]);

DEFLABEL (label_28)
DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_87_4]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_87_10]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_19);
  (Wrd9.Obj) = (current_block [OBJECT_87_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_87_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd34.Obj) = (current_block [OBJECT_87_3]);
  goto label_31;

DEFLABEL (label_33)
  (Wrd19.Obj) = (current_block [OBJECT_87_9]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_30;

DEFLABEL (label_34)
  (Wrd29.Obj) = (current_block [OBJECT_87_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_30;

DEFLABEL (label_35)
  (Wrd31.Obj) = (current_block [OBJECT_87_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_8 9
#define ENVIRONMENT_LABEL_88_3 20
#define DEBUGGING_LABEL_88_2 19
#define EXECUTE_CACHE_88_11 11
#define EXECUTE_CACHE_88_10 13
#define EXECUTE_CACHE_88_9 15
#define EXECUTE_CACHE_88_7 17
#define FREE_REFERENCES_LABEL_88_0 10
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_88_4);
      goto swank_list_all_package_names_3;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_88_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_list_all_package_names_6)
DEFLABEL (swank_list_all_package_names_3)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_10]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_88_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 11
#define DEBUGGING_LABEL_89_2 10
#define OBJECT_89_1 9
#define OBJECT_89_0 8
#define FREE_ASSIGNMENT_89_0 7
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_89_4);
      goto reset_inspector_0;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_inspector_4)
DEFLABEL (reset_inspector_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_89_0]));
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_89_1]);
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_89_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_7 7
#define LABEL_90_8 9
#define LABEL_90_11 11
#define ENVIRONMENT_LABEL_90_3 24
#define DEBUGGING_LABEL_90_2 23
#define EXECUTE_CACHE_90_13 13
#define EXECUTE_CACHE_90_12 15
#define EXECUTE_CACHE_90_10 17
#define EXECUTE_CACHE_90_9 19
#define EXECUTE_CACHE_90_6 21
#define FREE_REFERENCES_LABEL_90_0 12
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_90_4);
      goto swank_init_inspector_4;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_90_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_init_inspector_7)
DEFLABEL (swank_init_inspector_4)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define LABEL_91_9 9
#define LABEL_91_12 11
#define LABEL_91_10 13
#define LABEL_91_13 15
#define LABEL_91_14 17
#define LABEL_91_16 19
#define ENVIRONMENT_LABEL_91_3 36
#define DEBUGGING_LABEL_91_2 35
#define EXECUTE_CACHE_91_17 21
#define EXECUTE_CACHE_91_15 23
#define EXECUTE_CACHE_91_11 25
#define EXECUTE_CACHE_91_8 27
#define EXECUTE_CACHE_91_6 29
#define FREE_REFERENCE_91_0 32
#define FREE_ASSIGNMENT_91_0 34
#define FREE_REFERENCES_LABEL_91_0 20
#define NUMBER_OF_LINKER_SECTIONS_91_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_91_4);
      goto inspect_object_5;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_91_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_91_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_91_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_91_13);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_91_14);
      goto label_10;

    case 8:
      current_block = (Rpc - LABEL_91_16);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_object_12)
DEFLABEL (inspect_object_5)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_91_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_18)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_17;
  Wrd23 = Wrd27;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_91_12);

DEFLABEL (label_15)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_14;
  Wrd31 = Wrd35;

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_15]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_14])), (Wrd32.pObj));

DEFLABEL (label_10)
  (Wrd31.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_16])), (Wrd24.pObj));

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_91_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_9])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define LABEL_92_8 9
#define LABEL_92_9 11
#define LABEL_92_11 13
#define LABEL_92_12 15
#define LABEL_92_13 17
#define LABEL_92_15 19
#define ENVIRONMENT_LABEL_92_3 40
#define DEBUGGING_LABEL_92_2 39
#define OBJECT_92_5 38
#define OBJECT_92_4 37
#define OBJECT_92_3 36
#define OBJECT_92_2 35
#define OBJECT_92_1 34
#define OBJECT_92_0 33
#define EXECUTE_CACHE_92_18 21
#define EXECUTE_CACHE_92_17 23
#define EXECUTE_CACHE_92_16 25
#define EXECUTE_CACHE_92_14 27
#define EXECUTE_CACHE_92_10 29
#define EXECUTE_CACHE_92_7 31
#define FREE_REFERENCES_LABEL_92_0 20
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_92_4);
      goto istate__elisp_13;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_92_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_92_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_92_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_92_12);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_92_13);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_92_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (istate__elisp_16)
DEFLABEL (istate__elisp_13)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_92_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_92_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd9.Obj) = (current_block [OBJECT_92_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_92_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_92_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_92_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_92_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_92_5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_7 7
#define ENVIRONMENT_LABEL_93_3 14
#define DEBUGGING_LABEL_93_2 13
#define EXECUTE_CACHE_93_8 9
#define EXECUTE_CACHE_93_6 11
#define FREE_REFERENCES_LABEL_93_0 8
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_93_4);
      goto assign_index_3;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assign_index_6)
DEFLABEL (assign_index_3)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_7 7
#define LABEL_94_10 9
#define LABEL_94_13 11
#define LABEL_94_14 13
#define LABEL_94_11 15
#define LABEL_94_15 17
#define LABEL_94_16 19
#define LABEL_94_9 21
#define ENVIRONMENT_LABEL_94_3 32
#define DEBUGGING_LABEL_94_2 31
#define OBJECT_94_1 30
#define OBJECT_94_0 29
#define EXECUTE_CACHE_94_12 23
#define EXECUTE_CACHE_94_8 25
#define EXECUTE_CACHE_94_6 27
#define FREE_REFERENCES_LABEL_94_0 22
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_94_4);
      goto prepare_range_12;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_94_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_94_13);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_94_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_94_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_94_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_94_16);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_94_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prepare_range_19)
DEFLABEL (prepare_range_12)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_29;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_29;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_29;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_28)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_11);
  (Wrd24.Obj) = Rvl;
  (Wrd23.Obj) = (* (Rsp++));
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd25.uLng) == 26))
    goto label_27;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! ((Wrd50.Lng) < (Wrd51.Lng)))
    goto label_25;

DEFLABEL (label_24)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_94_13);
  (Wrd52.Obj) = Rvl;
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_22;
  (Wrd61.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd61.uLng) == 26))
    goto label_22;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd62.Lng) = ((Wrd64.Lng) + (Wrd65.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_22;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));

DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_20)
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_94_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
DEFLABEL (label_23)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_26;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd43.Lng) + 1000L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_26;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  goto label_21;

DEFLABEL (label_26)
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.Obj) = (current_block [OBJECT_94_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_27)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

DEFLABEL (label_29)
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_5)
  (Wrd14.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_10 5
#define LABEL_95_7 7
#define TAG_95_8 2
#define LABEL_95_11 9
#define LABEL_95_12 11
#define LABEL_95_13 13
#define LABEL_95_5 15
#define TAG_95_6 6
#define LABEL_95_15 17
#define LABEL_95_17 19
#define LABEL_95_19 21
#define LABEL_95_21 23
#define ENVIRONMENT_LABEL_95_3 52
#define DEBUGGING_LABEL_95_2 51
#define OBJECT_95_13 50
#define OBJECT_95_12 49
#define OBJECT_95_11 48
#define OBJECT_95_10 47
#define OBJECT_95_9 46
#define OBJECT_95_8 45
#define OBJECT_95_7 44
#define OBJECT_95_6 43
#define OBJECT_95_5 42
#define OBJECT_95_4 41
#define OBJECT_95_3 40
#define OBJECT_95_2 39
#define OBJECT_95_1 38
#define OBJECT_95_0 37
#define EXECUTE_CACHE_95_22 25
#define EXECUTE_CACHE_95_20 27
#define EXECUTE_CACHE_95_18 29
#define EXECUTE_CACHE_95_16 31
#define EXECUTE_CACHE_95_14 33
#define EXECUTE_CACHE_95_9 35
#define FREE_REFERENCES_LABEL_95_0 24
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd38;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd66;
  machine_word Wrd12;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd9;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_95_4);
      goto prepare_parts_19;

    case 1:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_95_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_95_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_95_13);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_95_5);
      goto line_26;

    case 7:
      current_block = (Rpc - LABEL_95_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_95_17);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_95_19);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_95_21);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prepare_parts_25)
DEFLABEL (prepare_parts_19)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_5])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd13 = Wrd15;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_95_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_28;
  (Wrd73.Obj) = (current_block [OBJECT_95_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_95_1]);
  (Wrd61.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd61.Lng))))
    goto label_42;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd58.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_41;

DEFLABEL (label_40)
  (Wrd15.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_29;
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 2);

DEFLABEL (label_29)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_31;
  (Wrd17.Obj) = (current_block [OBJECT_95_5]);
  goto label_30;

DEFLABEL (label_31)
  (Wrd17.Obj) = (current_block [OBJECT_95_4]);

DEFLABEL (label_30)
DEFLABEL (label_39)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_95_15);
  (Wrd10.Obj) = (current_block [OBJECT_95_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_38;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_37)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (current_block [OBJECT_95_7]))
    goto label_34;
  (Wrd38.Obj) = (current_block [OBJECT_95_10]);
  (Rsp [1]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_14]));

DEFLABEL (label_34)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [2]);
  (Rsp [1]) = (Wrd40.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_36;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_9]), 2);

DEFLABEL (label_36)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_8]), 1);

DEFLABEL (label_22)
  (Wrd43.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_6]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_42)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_11]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

DEFLABEL (line_26)
  CLOSURE_HEADER (LABEL_95_5);

DEFLABEL (line_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_95_17);
  (Wrd9.Obj) = (current_block [OBJECT_95_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_95_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_95_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_95_12]);
  (Wrd18.Obj) = (current_block [OBJECT_95_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_95_13]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_95_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_7 5
#define LABEL_96_5 7
#define LABEL_96_6 9
#define ENVIRONMENT_LABEL_96_3 21
#define DEBUGGING_LABEL_96_2 20
#define OBJECT_96_0 19
#define EXECUTE_CACHE_96_10 11
#define EXECUTE_CACHE_96_9 13
#define EXECUTE_CACHE_96_8 15
#define FREE_REFERENCE_96_0 18
#define FREE_REFERENCES_LABEL_96_0 10
#define NUMBER_OF_LINKER_SECTIONS_96_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_96_4);
      goto swank_inspect_nth_part_2;

    case 1:
      current_block = (Rpc - LABEL_96_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_96_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_inspect_nth_part_6)
DEFLABEL (swank_inspect_nth_part_2)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_8;
  Wrd13 = Wrd17;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_7])), (Wrd14.pObj));

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 8
#define DEBUGGING_LABEL_97_2 7
#define EXECUTE_CACHE_97_5 5
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_97_4);
      goto swank_quit_inspector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_quit_inspector_3)
DEFLABEL (swank_quit_inspector_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_6 5
#define LABEL_98_5 7
#define LABEL_98_9 9
#define LABEL_98_8 11
#define LABEL_98_10 13
#define LABEL_98_11 15
#define ENVIRONMENT_LABEL_98_3 27
#define DEBUGGING_LABEL_98_2 26
#define OBJECT_98_0 25
#define EXECUTE_CACHE_98_12 17
#define EXECUTE_CACHE_98_7 19
#define FREE_REFERENCE_98_0 22
#define FREE_ASSIGNMENT_98_0 24
#define FREE_REFERENCES_LABEL_98_0 16
#define NUMBER_OF_LINKER_SECTIONS_98_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_98_4);
      goto swank_inspector_pop_2;

    case 1:
      current_block = (Rpc - LABEL_98_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_98_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_98_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_98_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_98_10);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_98_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_inspector_pop_9)
DEFLABEL (swank_inspector_pop_2)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_98_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_98_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_98_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_98_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_98_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_98_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_12;
  Wrd19 = Wrd23;

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_12]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98_11])), (Wrd20.pObj));

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_98_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98_9])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_6 5
#define LABEL_99_5 7
#define LABEL_99_9 9
#define LABEL_99_8 11
#define LABEL_99_10 13
#define LABEL_99_11 15
#define ENVIRONMENT_LABEL_99_3 27
#define DEBUGGING_LABEL_99_2 26
#define OBJECT_99_0 25
#define EXECUTE_CACHE_99_12 17
#define EXECUTE_CACHE_99_7 19
#define FREE_REFERENCE_99_0 22
#define FREE_ASSIGNMENT_99_0 24
#define FREE_REFERENCES_LABEL_99_0 16
#define NUMBER_OF_LINKER_SECTIONS_99_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_99_4);
      goto swank_inspector_next_2;

    case 1:
      current_block = (Rpc - LABEL_99_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_99_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_99_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_99_10);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_99_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_inspector_next_9)
DEFLABEL (swank_inspector_next_2)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_99_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_99_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_12;
  Wrd19 = Wrd23;

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_12]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_11])), (Wrd20.pObj));

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_99_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_9])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_6 5
#define LABEL_100_5 7
#define LABEL_100_9 9
#define LABEL_100_8 11
#define ENVIRONMENT_LABEL_100_3 22
#define DEBUGGING_LABEL_100_2 21
#define EXECUTE_CACHE_100_11 13
#define EXECUTE_CACHE_100_10 15
#define EXECUTE_CACHE_100_7 17
#define FREE_REFERENCE_100_0 20
#define FREE_REFERENCES_LABEL_100_0 12
#define NUMBER_OF_LINKER_SECTIONS_100_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_100_4);
      goto swank_inspector_range_2;

    case 1:
      current_block = (Rpc - LABEL_100_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_100_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_100_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (swank_inspector_range_7)
DEFLABEL (swank_inspector_range_2)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_100_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100_9])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 7
#define DEBUGGING_LABEL_101_2 6
#define OBJECT_101_1 5
#define OBJECT_101_0 4
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_101_4);
      goto iline_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iline_5)
DEFLABEL (iline_2)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_101_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_101_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_8 7
#define LABEL_102_11 9
#define LABEL_102_15 11
#define ENVIRONMENT_LABEL_102_3 36
#define DEBUGGING_LABEL_102_2 35
#define EXECUTE_CACHE_102_19 13
#define EXECUTE_CACHE_102_18 15
#define EXECUTE_CACHE_102_17 17
#define EXECUTE_CACHE_102_16 19
#define EXECUTE_CACHE_102_14 21
#define EXECUTE_CACHE_102_13 23
#define EXECUTE_CACHE_102_12 25
#define EXECUTE_CACHE_102_10 27
#define EXECUTE_CACHE_102_9 29
#define EXECUTE_CACHE_102_7 31
#define EXECUTE_CACHE_102_6 33
#define FREE_REFERENCES_LABEL_102_0 12
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_102_4);
      goto inspect_6;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_102_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_102_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_102_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_9)
DEFLABEL (inspect_6)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_10]));

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 10))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_7]));

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_102_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_13]));

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_102_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_17]));

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 1))
    goto label_14;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_14]));

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_102_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_19]));

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_18]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_6 7
#define LABEL_103_7 9
#define ENVIRONMENT_LABEL_103_3 20
#define DEBUGGING_LABEL_103_2 19
#define OBJECT_103_3 18
#define OBJECT_103_2 17
#define OBJECT_103_1 16
#define OBJECT_103_0 15
#define EXECUTE_CACHE_103_9 11
#define EXECUTE_CACHE_103_8 13
#define FREE_REFERENCES_LABEL_103_0 10
#define NUMBER_OF_LINKER_SECTIONS_103_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_103_4);
      goto inspect_fallback_3;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_103_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_103_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_fallback_6)
DEFLABEL (inspect_fallback_3)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_103_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_103_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_103_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_103_6);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_9]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_6 7
#define LABEL_104_8 9
#define LABEL_104_7 11
#define LABEL_104_11 13
#define LABEL_104_12 15
#define LABEL_104_18 17
#define LABEL_104_10 19
#define LABEL_104_17 21
#define LABEL_104_13 23
#define LABEL_104_22 25
#define LABEL_104_14 27
#define TAG_104_15 12
#define LABEL_104_23 29
#define LABEL_104_21 31
#define LABEL_104_25 33
#define LABEL_104_27 35
#define LABEL_104_24 37
#define LABEL_104_28 39
#define ENVIRONMENT_LABEL_104_3 62
#define DEBUGGING_LABEL_104_2 61
#define OBJECT_104_9 60
#define OBJECT_104_8 59
#define OBJECT_104_7 58
#define OBJECT_104_6 57
#define OBJECT_104_5 56
#define OBJECT_104_4 55
#define OBJECT_104_3 54
#define OBJECT_104_2 53
#define OBJECT_104_1 52
#define OBJECT_104_0 51
#define EXECUTE_CACHE_104_26 41
#define EXECUTE_CACHE_104_20 43
#define EXECUTE_CACHE_104_19 45
#define EXECUTE_CACHE_104_16 47
#define EXECUTE_CACHE_104_9 49
#define FREE_REFERENCES_LABEL_104_0 40
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_104_4);
      goto inspect_pair_25;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_104_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_104_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_104_11);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_104_12);
      goto loop_23;

    case 7:
      current_block = (Rpc - LABEL_104_18);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_104_10);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_104_17);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_104_13);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_104_22);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_104_14);
      goto lambda_39;

    case 13:
      current_block = (Rpc - LABEL_104_23);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_104_21);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_104_25);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_104_27);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_104_24);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_104_28);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_pair_37)
DEFLABEL (inspect_pair_25)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_49;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_48)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_41;

DEFLABEL (label_40)
  (Wrd38.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_104_2]);
  (Rsp [2]) = (Wrd40.Obj);
  goto loop_23;

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_46)
  if ((Wrd15.Obj) == (current_block [OBJECT_104_1]))
    goto label_40;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_45;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_44)
  (Wrd37.Obj) = (current_block [OBJECT_104_4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_104_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  (Wrd17.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_104_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_19]));

DEFLABEL (label_43)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_3]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_28)
  (Wrd15.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (loop_38)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_104_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_14])));
  Rhp += 3;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd32 = Wrd27;
  (Wrd33.Obj) = (Rsp [3]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  ((Wrd32.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_104_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_104_6]);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_7]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_104_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_104_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_3]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_104_1])))
    goto label_53;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_16]));

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_55;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_54)
  (Wrd21.Obj) = (current_block [OBJECT_104_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_104_17);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_20]));

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_104_14);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_64;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_63)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  if (! ((Wrd20.Obj) == (Wrd23.Obj)))
    goto label_56;
  (Wrd34.Obj) = (current_block [OBJECT_104_9]);
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_20]));

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_104_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_61;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd5.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_58;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd21.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_58;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd12.Obj);
  goto loop_23;

DEFLABEL (label_58)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_34)
  (Wrd12.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_27]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd5.Obj) = ((Wrd41.pObj) [3]);
  goto label_60;

DEFLABEL (label_64)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_104_24);
  (Wrd5.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define LABEL_105_7 7
#define LABEL_105_8 9
#define LABEL_105_10 11
#define LABEL_105_11 13
#define TAG_105_12 5
#define LABEL_105_13 15
#define TAG_105_14 6
#define LABEL_105_15 17
#define LABEL_105_20 19
#define LABEL_105_26 21
#define LABEL_105_17 23
#define LABEL_105_28 25
#define LABEL_105_29 27
#define LABEL_105_30 29
#define LABEL_105_31 31
#define LABEL_105_32 33
#define LABEL_105_34 35
#define LABEL_105_18 37
#define TAG_105_19 17
#define LABEL_105_36 39
#define LABEL_105_23 41
#define LABEL_105_24 43
#define LABEL_105_27 45
#define LABEL_105_33 47
#define ENVIRONMENT_LABEL_105_3 77
#define DEBUGGING_LABEL_105_2 76
#define OBJECT_105_8 75
#define OBJECT_105_7 74
#define OBJECT_105_6 73
#define OBJECT_105_5 72
#define OBJECT_105_4 71
#define OBJECT_105_3 70
#define OBJECT_105_2 69
#define OBJECT_105_1 68
#define OBJECT_105_0 67
#define EXECUTE_CACHE_105_38 49
#define EXECUTE_CACHE_105_35 51
#define EXECUTE_CACHE_105_25 53
#define EXECUTE_CACHE_105_37 55
#define EXECUTE_CACHE_105_22 57
#define EXECUTE_CACHE_105_21 59
#define EXECUTE_CACHE_105_16 61
#define EXECUTE_CACHE_105_9 63
#define EXECUTE_CACHE_105_6 65
#define FREE_REFERENCES_LABEL_105_0 48
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd65;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_105_4);
      goto inspect_environment_27;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_105_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_105_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_105_10);
      goto continuation_25;

    case 5:
      current_block = (Rpc - LABEL_105_11);
      goto lambda_38;

    case 6:
      current_block = (Rpc - LABEL_105_13);
      goto loop_21;

    case 7:
      current_block = (Rpc - LABEL_105_15);
      goto continuation_23;

    case 8:
      current_block = (Rpc - LABEL_105_20);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_105_26);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_105_17);
      goto continuation_20;

    case 11:
      current_block = (Rpc - LABEL_105_28);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_105_29);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_105_30);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_105_31);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_105_32);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_105_34);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_105_18);
      goto lambda_40;

    case 18:
      current_block = (Rpc - LABEL_105_36);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_105_23);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_105_24);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_105_27);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_105_33);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_environment_37)
DEFLABEL (inspect_environment_27)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_105_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_105_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_13])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  Wrd8 = Wrd10;
  (Wrd9.Obj) = (Rsp [4]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_21;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_105_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_41;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_11])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_105_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_105_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_105_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_105_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_105_11);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_39)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_105_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_105_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_22]));

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_105_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_105_23);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_37]));

DEFLABEL (label_43)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_18])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_105_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_105_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_55;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_54)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_53;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_52)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_47;
  (Wrd39.Obj) = (current_block [OBJECT_105_6]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_33]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_46;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_45)
  (Wrd52.Obj) = (Rsp [8]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_105_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_38]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_105_26);
  (Wrd65.Obj) = Rvl;

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_16]));

DEFLABEL (label_46)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_34]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_4]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_51;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_50)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_49;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  goto label_44;

DEFLABEL (label_49)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_32]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_4]), 1);

DEFLABEL (label_34)
  (Wrd65.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_31]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_5]), 1);

DEFLABEL (label_33)
  (Wrd55.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_30]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_5]), 1);

DEFLABEL (label_31)
  (Wrd29.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_4]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_105_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_105_18);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_59;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_21;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_5]), 1);

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define LABEL_106_6 7
#define TAG_106_7 2
#define LABEL_106_8 9
#define LABEL_106_10 11
#define LABEL_106_14 13
#define LABEL_106_11 15
#define TAG_106_12 6
#define LABEL_106_16 17
#define LABEL_106_13 19
#define ENVIRONMENT_LABEL_106_3 31
#define DEBUGGING_LABEL_106_2 30
#define OBJECT_106_4 29
#define OBJECT_106_3 28
#define OBJECT_106_2 27
#define OBJECT_106_1 26
#define OBJECT_106_0 25
#define EXECUTE_CACHE_106_15 21
#define EXECUTE_CACHE_106_9 23
#define FREE_REFERENCES_LABEL_106_0 20
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_106_4);
      goto inspect_vector_11;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_106_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_106_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_106_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_106_14);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_106_11);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_106_16);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_106_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_vector_18)
DEFLABEL (inspect_vector_11)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_106_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_106_6])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd23 = Wrd25;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_106_1]);
  (Rsp [1]) = (Wrd18.Obj);
  goto loop_8;

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_19)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_106_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_27;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd32.Lng) < (Wrd36.Lng))
    goto label_24;

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_9]));

DEFLABEL (label_24)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_106_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_106_11])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_106_1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_106_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_106_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_26;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_26;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_26;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pObj) = (& ((Wrd23.pObj) [(Wrd9.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_106_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_4]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_106_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_29;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_29;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd14.Obj);
  goto loop_8;

DEFLABEL (label_29)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_9 7
#define LABEL_107_10 9
#define LABEL_107_7 11
#define LABEL_107_11 13
#define LABEL_107_12 15
#define LABEL_107_18 17
#define LABEL_107_19 19
#define LABEL_107_15 21
#define LABEL_107_16 23
#define LABEL_107_21 25
#define LABEL_107_22 27
#define LABEL_107_23 29
#define LABEL_107_24 31
#define LABEL_107_26 33
#define LABEL_107_27 35
#define TAG_107_28 16
#define LABEL_107_31 37
#define LABEL_107_32 39
#define LABEL_107_33 41
#define TAG_107_34 19
#define ENVIRONMENT_LABEL_107_3 78
#define DEBUGGING_LABEL_107_2 77
#define OBJECT_107_7 76
#define OBJECT_107_6 75
#define OBJECT_107_5 74
#define OBJECT_107_4 73
#define OBJECT_107_3 72
#define OBJECT_107_2 71
#define OBJECT_107_1 70
#define OBJECT_107_0 69
#define EXECUTE_CACHE_107_38 43
#define EXECUTE_CACHE_107_37 45
#define EXECUTE_CACHE_107_35 47
#define EXECUTE_CACHE_107_36 49
#define EXECUTE_CACHE_107_30 51
#define EXECUTE_CACHE_107_29 53
#define EXECUTE_CACHE_107_25 55
#define EXECUTE_CACHE_107_20 57
#define EXECUTE_CACHE_107_17 59
#define EXECUTE_CACHE_107_14 61
#define EXECUTE_CACHE_107_13 63
#define EXECUTE_CACHE_107_8 65
#define EXECUTE_CACHE_107_6 67
#define FREE_REFERENCES_LABEL_107_0 42
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto inspect_procedure_19;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_107_9);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_107_10);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_107_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_107_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_107_12);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_107_18);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_107_19);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_107_15);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_107_16);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_107_21);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_107_22);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_107_23);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_107_24);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_107_26);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_107_27);
      goto lambda_23;

    case 17:
      current_block = (Rpc - LABEL_107_31);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_107_32);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_107_33);
      goto lambda_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_procedure_22)
DEFLABEL (inspect_procedure_19)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_107_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_107_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_107_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_107_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_107_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_2]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_107_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_107_21);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_30]));

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_107_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_107_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_107_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_107_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_107_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_107_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_107_33])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_35]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_107_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_107_31);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_30]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_107_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_107_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_107_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_107_27])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_107_26);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_36]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_107_27);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_37]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_107_33);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_38]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_7 5
#define LABEL_108_5 7
#define TAG_108_6 2
#define LABEL_108_9 9
#define LABEL_108_11 11
#define LABEL_108_12 13
#define LABEL_108_13 15
#define LABEL_108_15 17
#define LABEL_108_24 19
#define LABEL_108_16 21
#define TAG_108_17 9
#define LABEL_108_25 23
#define LABEL_108_26 25
#define LABEL_108_18 27
#define LABEL_108_19 29
#define TAG_108_20 13
#define LABEL_108_23 31
#define LABEL_108_27 33
#define LABEL_108_28 35
#define ENVIRONMENT_LABEL_108_3 62
#define DEBUGGING_LABEL_108_2 61
#define OBJECT_108_5 60
#define OBJECT_108_4 59
#define OBJECT_108_3 58
#define OBJECT_108_2 57
#define OBJECT_108_1 56
#define OBJECT_108_0 55
#define EXECUTE_CACHE_108_31 37
#define EXECUTE_CACHE_108_30 39
#define EXECUTE_CACHE_108_29 41
#define EXECUTE_CACHE_108_22 43
#define EXECUTE_CACHE_108_21 45
#define EXECUTE_CACHE_108_14 47
#define EXECUTE_CACHE_108_10 49
#define EXECUTE_CACHE_108_8 51
#define FREE_REFERENCE_108_0 54
#define FREE_REFERENCES_LABEL_108_0 36
#define NUMBER_OF_LINKER_SECTIONS_108_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_108_4);
      goto inspect_code_block_17;

    case 1:
      current_block = (Rpc - LABEL_108_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_108_5);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_108_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_108_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_108_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_108_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_108_15);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_108_24);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_108_16);
      goto lambda_26;

    case 10:
      current_block = (Rpc - LABEL_108_25);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_108_26);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_108_18);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_108_19);
      goto lambda_27;

    case 14:
      current_block = (Rpc - LABEL_108_23);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_108_27);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_108_28);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_code_block_24)
DEFLABEL (inspect_code_block_17)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_108_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_108_5])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Wrd12 = Wrd14;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_108_7);
  (Rsp [1]) = Rvl;
  goto loop_15;

DEFLABEL (loop_25)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_108_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_108_9);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_32;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_32;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd36.Lng) < (Wrd37.Lng))
    goto label_29;

DEFLABEL (label_28)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_108_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_108_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_108_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_108_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_108_19])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_108_18);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_108_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_108_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_108_27);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_31]));

DEFLABEL (label_29)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_108_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_108_16])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_108_0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_108_1]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_108_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_31;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_31;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pObj) = (& ((Wrd23.pObj) [(Wrd9.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_108_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_24]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_4]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_108_16);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_108_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_36;
  Wrd9 = Wrd13;

DEFLABEL (label_35)
  Wrd8 = Wrd9;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_34;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_34;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd28.Lng) = ((Wrd32.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_34;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd22.Obj);
  goto loop_15;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108_25])), (Wrd10.pObj));

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_108_19);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define ENVIRONMENT_LABEL_109_3 12
#define DEBUGGING_LABEL_109_2 11
#define EXECUTE_CACHE_109_7 7
#define EXECUTE_CACHE_109_6 9
#define FREE_REFERENCES_LABEL_109_0 6
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_109_4);
      goto inspect_scode_1;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_scode_4)
DEFLABEL (inspect_scode_1)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_7 5
#define LABEL_110_5 7
#define TAG_110_6 2
#define ENVIRONMENT_LABEL_110_3 14
#define DEBUGGING_LABEL_110_2 13
#define EXECUTE_CACHE_110_8 9
#define FREE_REFERENCE_110_0 12
#define FREE_REFERENCES_LABEL_110_0 8
#define NUMBER_OF_LINKER_SECTIONS_110_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_110_4);
      goto probably_scodeP_1;

    case 1:
      current_block = (Rpc - LABEL_110_7);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_110_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (probably_scodeP_5)
DEFLABEL (probably_scodeP_1)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_110_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_110_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;
  Wrd10 = Wrd14;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110_7])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_110_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define LABEL_111_7 7
#define ENVIRONMENT_LABEL_111_3 16
#define DEBUGGING_LABEL_111_2 15
#define OBJECT_111_1 14
#define OBJECT_111_0 13
#define EXECUTE_CACHE_111_8 9
#define EXECUTE_CACHE_111_6 11
#define FREE_REFERENCES_LABEL_111_0 8
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_111_4);
      goto inspect_system_pair_4;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_111_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inspect_system_pair_7)
DEFLABEL (inspect_system_pair_4)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_111_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_111_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_111_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_111_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define ENVIRONMENT_LABEL_112_3 8
#define DEBUGGING_LABEL_112_2 7
#define OBJECT_112_2 6
#define OBJECT_112_1 5
#define OBJECT_112_0 4
#define FREE_REFERENCES_LABEL_112_0 4
#define NUMBER_OF_LINKER_SECTIONS_112_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_112_4);
      goto elisp_falseP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (elisp_falseP_4)
DEFLABEL (elisp_falseP_1)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_112_0]))
    goto label_6;
  if ((Wrd5.Obj) == (current_block [OBJECT_112_1]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_112_2]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_5 5
#define ENVIRONMENT_LABEL_113_3 11
#define DEBUGGING_LABEL_113_2 10
#define OBJECT_113_0 9
#define EXECUTE_CACHE_113_6 7
#define FREE_REFERENCES_LABEL_113_0 6
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_113_4);
      goto elisp_trueP_1;

    case 1:
      current_block = (Rpc - LABEL_113_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (elisp_trueP_4)
DEFLABEL (elisp_trueP_1)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_113_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_113_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define LABEL_114_5 5
#define LABEL_114_7 7
#define LABEL_114_8 9
#define ENVIRONMENT_LABEL_114_3 20
#define DEBUGGING_LABEL_114_2 19
#define OBJECT_114_3 18
#define OBJECT_114_2 17
#define OBJECT_114_1 16
#define OBJECT_114_0 15
#define EXECUTE_CACHE_114_9 11
#define EXECUTE_CACHE_114_6 13
#define FREE_REFERENCES_LABEL_114_0 10
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_114_4);
      goto Z___line_4;

    case 1:
      current_block = (Rpc - LABEL_114_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_114_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_114_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___line_9)
DEFLABEL (Z___line_4)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_114_5);
  (Rsp [0]) = Rvl;
  (Wrd27.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd27.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_10)
  (Wrd25.Obj) = (current_block [OBJECT_114_3]);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_9]));

DEFLABEL (label_11)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_2]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_14;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  Rvl = ((Wrd12.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_2]), 1);

DEFLABEL (label_15)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define LABEL_115_5 5
#define ENVIRONMENT_LABEL_115_3 12
#define DEBUGGING_LABEL_115_2 11
#define EXECUTE_CACHE_115_7 7
#define EXECUTE_CACHE_115_6 9
#define FREE_REFERENCES_LABEL_115_0 6
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_115_4);
      goto read_from_string_1;

    case 1:
      current_block = (Rpc - LABEL_115_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_from_string_4)
DEFLABEL (read_from_string_1)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_115_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_5 5
#define TAG_116_6 1
#define LABEL_116_10 7
#define TAG_116_11 2
#define LABEL_116_8 9
#define TAG_116_9 3
#define LABEL_116_14 11
#define LABEL_116_15 13
#define LABEL_116_16 15
#define LABEL_116_17 17
#define LABEL_116_18 19
#define LABEL_116_19 21
#define LABEL_116_20 23
#define LABEL_116_21 25
#define LABEL_116_22 27
#define ENVIRONMENT_LABEL_116_3 48
#define DEBUGGING_LABEL_116_2 47
#define OBJECT_116_3 46
#define OBJECT_116_2 45
#define OBJECT_116_1 44
#define OBJECT_116_0 43
#define EXECUTE_CACHE_116_13 29
#define EXECUTE_CACHE_116_12 31
#define EXECUTE_CACHE_116_7 33
#define FREE_REFERENCE_116_2 36
#define FREE_REFERENCE_116_1 37
#define FREE_REFERENCE_116_0 38
#define FREE_ASSIGNMENT_116_2 40
#define FREE_ASSIGNMENT_116_1 41
#define FREE_ASSIGNMENT_116_0 42
#define FREE_REFERENCES_LABEL_116_0 28
#define NUMBER_OF_LINKER_SECTIONS_116_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_116_4);
      goto pprint_to_string_22;

    case 1:
      current_block = (Rpc - LABEL_116_5);
      goto lambda_35;

    case 2:
      current_block = (Rpc - LABEL_116_10);
      goto lambda_37;

    case 3:
      current_block = (Rpc - LABEL_116_8);
      goto swapB_36;

    case 4:
      current_block = (Rpc - LABEL_116_14);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_116_15);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_116_16);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_116_17);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_116_18);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_116_19);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_116_20);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_116_21);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_116_22);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pprint_to_string_34)
DEFLABEL (pprint_to_string_22)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_7]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_116_5);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_116_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_116_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_116_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_8])));
  Rhp += 3;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  Wrd36 = Wrd38;
  ((Wrd36.pObj) [2]) = (Wrd7.Obj);
  ((Wrd36.pObj) [3]) = (Wrd11.Obj);
  ((Wrd36.pObj) [4]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_10])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd39.Obj);
  (Rsp [3]) = (Wrd39.Obj);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_12]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_116_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_13]));

DEFLABEL (swapB_36)
  CLOSURE_HEADER (LABEL_116_8);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_116_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  Wrd5 = Wrd9;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_59)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_56)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_116_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  Wrd57 = Wrd61;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_50)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_47)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_116_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd109 = Wrd113;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_41)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_116_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_22])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_32)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_21])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_31)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_116_20])), (Wrd110.pObj));

DEFLABEL (label_30)
  (Wrd109.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_116_17])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_116_14])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_5 3
#define LABEL_117_6 5
#define LABEL_117_7 7
#define LABEL_117_8 9
#define LABEL_117_9 11
#define LABEL_117_10 13
#define LABEL_117_11 15
#define LABEL_117_4 17
#define LABEL_117_12 19
#define LABEL_117_13 21
#define ENVIRONMENT_LABEL_117_3 39
#define DEBUGGING_LABEL_117_2 38
#define OBJECT_117_12 37
#define OBJECT_117_11 36
#define OBJECT_117_10 35
#define OBJECT_117_9 34
#define OBJECT_117_8 33
#define OBJECT_117_7 32
#define OBJECT_117_6 31
#define OBJECT_117_5 30
#define OBJECT_117_4 29
#define OBJECT_117_3 28
#define OBJECT_117_2 27
#define OBJECT_117_1 26
#define OBJECT_117_0 25
#define EXECUTE_CACHE_117_14 23
#define FREE_REFERENCES_LABEL_117_0 22
#define NUMBER_OF_LINKER_SECTIONS_117_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
swank_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd112;
  machine_word Wrd64;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd60;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd75;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd113;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd115;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd124;
  machine_word Wrd114;
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
      current_block = (Rpc - LABEL_117_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_117_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_117_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_117_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_117_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_117_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_117_11);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_117_4);
      goto quote_special_15;

    case 8:
      current_block = (Rpc - LABEL_117_12);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_117_13);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (quote_special_23)
DEFLABEL (quote_special_15)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_117_7]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd70.Lng))))
    goto label_45;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd13.Obj) = (current_block [OBJECT_117_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_8]), 2);

DEFLABEL (label_25)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_27;
  (Wrd15.Obj) = (current_block [OBJECT_117_11]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd15.Obj) = (current_block [OBJECT_117_10]);

DEFLABEL (label_26)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_7]))));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_28)
  (Wrd112.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd112.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_14]));

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_117_7]);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd55.Lng))))
    goto label_41;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_40;

DEFLABEL (label_39)
  (Wrd33.Obj) = (current_block [OBJECT_117_9]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd43.Lng))))
    goto label_24;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_32;
  (Wrd35.Obj) = (current_block [OBJECT_117_11]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd35.Obj) = (current_block [OBJECT_117_10]);

DEFLABEL (label_31)
DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_37)
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == (current_block [OBJECT_117_12]))
    goto label_34;

DEFLABEL (label_35)
  Rvl = (Rsp [0]);
  goto label_33;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_117_5]);

DEFLABEL (label_33)
DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_41)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_8]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_29;

DEFLABEL (label_45)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_12]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_8]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_117_7);
  (Wrd86.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd86.uLng) == 30))
    goto label_51;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (Wrd82.Obj) = (MAKE_OBJECT (26, (Wrd85.uLng)));

DEFLABEL (label_50)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd91.uLng) == 26))
    goto label_49;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if ((Wrd113.Lng) > 0)
    goto label_48;

DEFLABEL (label_47)
  (Wrd97.Obj) = (Rsp [0]);
  if (! ((Wrd97.Obj) == (current_block [OBJECT_117_4])))
    goto label_30;

DEFLABEL (label_46)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (current_block [OBJECT_117_5]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_117_6]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  goto label_36;

DEFLABEL (label_48)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_5]))));
  (* (--Rsp)) = (Wrd111.Obj);
  goto label_28;

DEFLABEL (label_49)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_9]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_51)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_8]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_3]), 1);

DEFLABEL (label_19)
  (Wrd82.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_117_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_37;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_117_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_117_5);
  (Wrd114.Obj) = Rvl;
  (Wrd124.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd124.uLng) == 30))
    goto label_53;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd122.Obj) = ((Wrd121.pObj) [1]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd123.Lng))))
    goto label_53;
  (Wrd118.uLng) = ((unsigned long) (((unsigned char *) (Wrd121.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd115.Obj) = (MAKE_OBJECT (2, (Wrd118.uLng)));

DEFLABEL (label_52)
  if ((Wrd115.Obj) == (current_block [OBJECT_117_2]))
    goto label_46;
  goto label_47;

DEFLABEL (label_53)
  (Wrd126.Obj) = (current_block [OBJECT_117_0]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_6]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_1]), 2);

DEFLABEL (label_21)
  (Wrd115.Obj) = Rvl;
  goto label_52;

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
#define LABEL_19 33
#define LABEL_20 35
#define LABEL_21 37
#define LABEL_22 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_37 67
#define LABEL_38 69
#define LABEL_39 71
#define LABEL_40 73
#define LABEL_41 75
#define LABEL_42 77
#define LABEL_43 79
#define LABEL_44 81
#define LABEL_45 83
#define LABEL_46 85
#define LABEL_47 87
#define LABEL_48 89
#define LABEL_49 91
#define LABEL_50 93
#define LABEL_51 95
#define LABEL_52 97
#define LABEL_53 99
#define LABEL_54 101
#define LABEL_55 103
#define LABEL_56 105
#define LABEL_58 107
#define LABEL_57 109
#define LABEL_60 111
#define LABEL_59 113
#define LABEL_61 115
#define LABEL_62 117
#define LABEL_63 119
#define LABEL_64 121
#define LABEL_65 123
#define LABEL_66 125
#define LABEL_67 127
#define LABEL_68 129
#define LABEL_69 131
#define LABEL_70 133
#define LABEL_71 135
#define LABEL_72 137
#define LABEL_77 139
#define LABEL_73 141
#define LABEL_75 143
#define LABEL_76 145
#define LABEL_79 147
#define LABEL_80 149
#define TAG_81 73
#define LABEL_82 151
#define LABEL_83 153
#define LABEL_84 155
#define LABEL_87 157
#define LABEL_85 159
#define LABEL_86 161
#define LABEL_88 163
#define LABEL_89 165
#define LABEL_90 167
#define LABEL_91 169
#define LABEL_92 171
#define LABEL_93 173
#define LABEL_94 175
#define LABEL_95 177
#define LABEL_96 179
#define LABEL_97 181
#define LABEL_98 183
#define LABEL_99 185
#define LABEL_100 187
#define LABEL_101 189
#define LABEL_102 191
#define LABEL_103 193
#define LABEL_104 195
#define LABEL_105 197
#define LABEL_106 199
#define LABEL_107 201
#define LABEL_108 203
#define LABEL_109 205
#define LABEL_110 207
#define LABEL_111 209
#define LABEL_112 211
#define LABEL_113 213
#define LABEL_114 215
#define LABEL_115 217
#define LABEL_116 219
#define LABEL_117 221
#define LABEL_118 223
#define LABEL_123 225
#define LABEL_119 227
#define LABEL_121 229
#define LABEL_127 231
#define LABEL_122 233
#define LABEL_125 235
#define LABEL_131 237
#define LABEL_126 239
#define LABEL_129 241
#define LABEL_135 243
#define LABEL_130 245
#define LABEL_133 247
#define LABEL_138 249
#define LABEL_134 251
#define LABEL_136 253
#define LABEL_141 255
#define LABEL_137 257
#define LABEL_139 259
#define LABEL_145 261
#define LABEL_140 263
#define LABEL_143 265
#define LABEL_148 267
#define LABEL_144 269
#define LABEL_146 271
#define LABEL_147 273
#define LABEL_149 275
#define LABEL_150 277
#define LABEL_151 279
#define LABEL_152 281
#define LABEL_153 283
#define LABEL_154 285
#define LABEL_155 287
#define LABEL_156 289
#define LABEL_157 291
#define LABEL_158 293
#define LABEL_159 295
#define LABEL_160 297
#define LABEL_161 299
#define LABEL_162 301
#define LABEL_163 303
#define LABEL_164 305
#define LABEL_165 307
#define LABEL_166 309
#define LABEL_167 311
#define LABEL_168 313
#define LABEL_169 315
#define LABEL_170 317
#define LABEL_171 319
#define LABEL_173 321
#define LABEL_174 323
#define LABEL_175 325
#define LABEL_176 327
#define LABEL_177 329
#define LABEL_178 331
#define LABEL_179 333
#define LABEL_180 335
#define LABEL_181 337
#define LABEL_182 339
#define LABEL_183 341
#define LABEL_184 343
#define LABEL_185 345
#define LABEL_172 347
#define LABEL_186 349
#define LABEL_187 351
#define LABEL_188 353
#define LABEL_189 355
#define LABEL_190 357
#define LABEL_191 359
#define LABEL_192 361
#define LABEL_193 363
#define LABEL_194 365
#define LABEL_195 367
#define LABEL_196 369
#define ENVIRONMENT_LABEL_3 681
#define DEBUGGING_LABEL_2 680
#define PURIFICATION_ROOT 679
#define OBJECT_272 678
#define OBJECT_271 677
#define OBJECT_270 676
#define OBJECT_269 675
#define OBJECT_268 674
#define OBJECT_267 673
#define OBJECT_266 672
#define OBJECT_265 671
#define OBJECT_264 670
#define OBJECT_263 669
#define OBJECT_262 668
#define OBJECT_261 667
#define OBJECT_260 666
#define OBJECT_259 665
#define OBJECT_258 664
#define OBJECT_257 663
#define OBJECT_256 662
#define OBJECT_255 661
#define OBJECT_254 660
#define OBJECT_253 659
#define OBJECT_252 658
#define OBJECT_251 657
#define OBJECT_250 656
#define OBJECT_249 655
#define OBJECT_248 654
#define OBJECT_247 653
#define OBJECT_246 652
#define OBJECT_245 651
#define OBJECT_244 650
#define OBJECT_243 649
#define OBJECT_242 648
#define OBJECT_241 647
#define OBJECT_240 646
#define OBJECT_239 645
#define OBJECT_238 644
#define OBJECT_237 643
#define OBJECT_236 642
#define OBJECT_235 641
#define OBJECT_234 640
#define OBJECT_233 639
#define OBJECT_232 638
#define OBJECT_231 637
#define OBJECT_230 636
#define OBJECT_229 635
#define OBJECT_228 634
#define OBJECT_227 633
#define OBJECT_226 632
#define OBJECT_225 631
#define OBJECT_224 630
#define OBJECT_223 629
#define OBJECT_222 628
#define OBJECT_221 627
#define OBJECT_220 626
#define OBJECT_219 625
#define OBJECT_218 624
#define OBJECT_217 623
#define OBJECT_216 622
#define OBJECT_215 621
#define OBJECT_214 620
#define OBJECT_213 619
#define OBJECT_212 618
#define OBJECT_211 617
#define OBJECT_210 616
#define OBJECT_209 615
#define OBJECT_208 614
#define OBJECT_207 613
#define OBJECT_206 612
#define OBJECT_205 611
#define OBJECT_204 610
#define OBJECT_203 609
#define OBJECT_202 608
#define OBJECT_201 607
#define OBJECT_200 606
#define OBJECT_199 605
#define OBJECT_198 604
#define OBJECT_197 603
#define OBJECT_196 602
#define OBJECT_195 601
#define OBJECT_194 600
#define OBJECT_193 599
#define OBJECT_192 598
#define OBJECT_191 597
#define OBJECT_190 596
#define OBJECT_189 595
#define OBJECT_188 594
#define OBJECT_187 593
#define OBJECT_186 592
#define OBJECT_185 591
#define OBJECT_184 590
#define OBJECT_183 589
#define OBJECT_182 588
#define OBJECT_181 587
#define OBJECT_180 586
#define OBJECT_179 585
#define OBJECT_178 584
#define OBJECT_177 583
#define OBJECT_176 582
#define OBJECT_175 581
#define OBJECT_174 580
#define OBJECT_173 579
#define OBJECT_172 578
#define OBJECT_171 577
#define OBJECT_170 576
#define OBJECT_169 575
#define OBJECT_168 574
#define OBJECT_167 573
#define OBJECT_166 572
#define OBJECT_165 571
#define OBJECT_164 570
#define OBJECT_163 569
#define OBJECT_162 568
#define OBJECT_161 567
#define OBJECT_160 566
#define OBJECT_159 565
#define OBJECT_158 564
#define OBJECT_157 563
#define OBJECT_156 562
#define OBJECT_155 561
#define OBJECT_154 560
#define OBJECT_153 559
#define OBJECT_152 558
#define OBJECT_151 557
#define OBJECT_150 556
#define OBJECT_149 555
#define OBJECT_148 554
#define OBJECT_147 553
#define OBJECT_146 552
#define OBJECT_145 551
#define OBJECT_144 550
#define OBJECT_143 549
#define OBJECT_142 548
#define OBJECT_141 547
#define OBJECT_140 546
#define OBJECT_139 545
#define OBJECT_138 544
#define OBJECT_137 543
#define OBJECT_136 542
#define OBJECT_135 541
#define OBJECT_134 540
#define OBJECT_133 539
#define OBJECT_132 538
#define OBJECT_131 537
#define OBJECT_130 536
#define OBJECT_129 535
#define OBJECT_128 534
#define OBJECT_127 533
#define OBJECT_126 532
#define OBJECT_125 531
#define OBJECT_124 530
#define OBJECT_123 529
#define OBJECT_122 528
#define OBJECT_121 527
#define OBJECT_120 526
#define OBJECT_119 525
#define OBJECT_118 524
#define OBJECT_117 523
#define OBJECT_116 522
#define OBJECT_115 521
#define OBJECT_114 520
#define OBJECT_113 519
#define OBJECT_112 518
#define OBJECT_111 517
#define OBJECT_110 516
#define OBJECT_109 515
#define OBJECT_108 514
#define OBJECT_107 513
#define OBJECT_106 512
#define OBJECT_105 511
#define OBJECT_104 510
#define OBJECT_103 509
#define OBJECT_102 508
#define OBJECT_101 507
#define OBJECT_100 506
#define OBJECT_99 505
#define OBJECT_98 504
#define OBJECT_97 503
#define OBJECT_96 502
#define OBJECT_95 501
#define OBJECT_94 500
#define OBJECT_93 499
#define OBJECT_92 498
#define OBJECT_91 497
#define OBJECT_90 496
#define OBJECT_89 495
#define OBJECT_88 494
#define OBJECT_87 493
#define OBJECT_86 492
#define OBJECT_85 491
#define OBJECT_84 490
#define OBJECT_83 489
#define OBJECT_82 488
#define OBJECT_81 487
#define OBJECT_80 486
#define OBJECT_79 485
#define OBJECT_78 484
#define OBJECT_77 483
#define OBJECT_76 482
#define OBJECT_75 481
#define OBJECT_74 480
#define OBJECT_73 479
#define OBJECT_72 478
#define OBJECT_71 477
#define OBJECT_70 476
#define OBJECT_69 475
#define OBJECT_68 474
#define OBJECT_67 473
#define OBJECT_66 472
#define OBJECT_65 471
#define OBJECT_64 470
#define OBJECT_63 469
#define OBJECT_62 468
#define OBJECT_61 467
#define OBJECT_60 466
#define OBJECT_59 465
#define OBJECT_58 464
#define OBJECT_57 463
#define OBJECT_56 462
#define OBJECT_55 461
#define OBJECT_54 460
#define OBJECT_53 459
#define OBJECT_52 458
#define OBJECT_51 457
#define OBJECT_50 456
#define OBJECT_49 455
#define OBJECT_48 454
#define OBJECT_47 453
#define OBJECT_46 452
#define OBJECT_45 451
#define OBJECT_44 450
#define OBJECT_43 449
#define OBJECT_42 448
#define OBJECT_41 447
#define OBJECT_40 446
#define OBJECT_39 445
#define OBJECT_38 444
#define OBJECT_37 443
#define OBJECT_36 442
#define OBJECT_35 441
#define OBJECT_34 440
#define OBJECT_33 439
#define OBJECT_32 438
#define OBJECT_31 437
#define OBJECT_30 436
#define OBJECT_29 435
#define OBJECT_28 434
#define OBJECT_27 433
#define OBJECT_26 432
#define OBJECT_25 431
#define OBJECT_24 430
#define OBJECT_23 429
#define OBJECT_22 428
#define OBJECT_21 427
#define OBJECT_20 426
#define OBJECT_19 425
#define OBJECT_18 424
#define OBJECT_17 423
#define OBJECT_16 422
#define OBJECT_15 421
#define OBJECT_14 420
#define OBJECT_13 419
#define OBJECT_12 418
#define OBJECT_11 417
#define OBJECT_10 416
#define OBJECT_9 415
#define OBJECT_8 414
#define OBJECT_7 413
#define OBJECT_6 412
#define OBJECT_5 411
#define OBJECT_4 410
#define OBJECT_3 409
#define OBJECT_2 408
#define OBJECT_1 407
#define OBJECT_0 406
#define EXECUTE_CACHE_142 371
#define EXECUTE_CACHE_132 373
#define EXECUTE_CACHE_128 375
#define EXECUTE_CACHE_124 377
#define EXECUTE_CACHE_120 379
#define EXECUTE_CACHE_23 381
#define FREE_REFERENCE_16 384
#define FREE_REFERENCE_15 385
#define FREE_REFERENCE_14 386
#define FREE_REFERENCE_13 387
#define FREE_REFERENCE_12 388
#define FREE_REFERENCE_11 389
#define FREE_REFERENCE_10 390
#define FREE_REFERENCE_9 391
#define FREE_REFERENCE_8 392
#define FREE_REFERENCE_7 393
#define FREE_REFERENCE_6 394
#define FREE_REFERENCE_5 395
#define FREE_REFERENCE_4 396
#define FREE_REFERENCE_3 397
#define FREE_REFERENCE_2 398
#define FREE_REFERENCE_1 399
#define FREE_REFERENCE_0 400
#define GLOBAL_EXECUTE_CACHE_78 402
#define GLOBAL_EXECUTE_CACHE_74 404
#define FREE_REFERENCES_LABEL_0 370
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
swank_so_1598117c1c3e9280 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd136;
  machine_word Wrd130;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_40);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_41);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_42);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_43);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_44);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_47);
      goto continuation_42;

    case 43:
      current_block = (Rpc - LABEL_48);
      goto continuation_43;

    case 44:
      current_block = (Rpc - LABEL_49);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_50);
      goto continuation_45;

    case 46:
      current_block = (Rpc - LABEL_51);
      goto continuation_46;

    case 47:
      current_block = (Rpc - LABEL_52);
      goto continuation_47;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_48;

    case 49:
      current_block = (Rpc - LABEL_54);
      goto continuation_49;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto continuation_50;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_51;

    case 52:
      current_block = (Rpc - LABEL_58);
      goto label_174;

    case 53:
      current_block = (Rpc - LABEL_57);
      goto continuation_52;

    case 54:
      current_block = (Rpc - LABEL_60);
      goto label_175;

    case 55:
      current_block = (Rpc - LABEL_59);
      goto continuation_53;

    case 56:
      current_block = (Rpc - LABEL_61);
      goto continuation_54;

    case 57:
      current_block = (Rpc - LABEL_62);
      goto continuation_55;

    case 58:
      current_block = (Rpc - LABEL_63);
      goto continuation_56;

    case 59:
      current_block = (Rpc - LABEL_64);
      goto continuation_57;

    case 60:
      current_block = (Rpc - LABEL_65);
      goto continuation_58;

    case 61:
      current_block = (Rpc - LABEL_66);
      goto continuation_59;

    case 62:
      current_block = (Rpc - LABEL_67);
      goto continuation_60;

    case 63:
      current_block = (Rpc - LABEL_68);
      goto continuation_61;

    case 64:
      current_block = (Rpc - LABEL_69);
      goto continuation_62;

    case 65:
      current_block = (Rpc - LABEL_70);
      goto continuation_63;

    case 66:
      current_block = (Rpc - LABEL_71);
      goto continuation_64;

    case 67:
      current_block = (Rpc - LABEL_72);
      goto continuation_68;

    case 68:
      current_block = (Rpc - LABEL_77);
      goto label_176;

    case 69:
      current_block = (Rpc - LABEL_73);
      goto continuation_67;

    case 70:
      current_block = (Rpc - LABEL_75);
      goto continuation_73;

    case 71:
      current_block = (Rpc - LABEL_76);
      goto continuation_69;

    case 72:
      current_block = (Rpc - LABEL_79);
      goto continuation_74;

    case 73:
      current_block = (Rpc - LABEL_80);
      goto make_sldb_state_201;

    case 74:
      current_block = (Rpc - LABEL_82);
      goto continuation_75;

    case 75:
      current_block = (Rpc - LABEL_83);
      goto continuation_76;

    case 76:
      current_block = (Rpc - LABEL_84);
      goto continuation_77;

    case 77:
      current_block = (Rpc - LABEL_87);
      goto label_177;

    case 78:
      current_block = (Rpc - LABEL_85);
      goto continuation_79;

    case 79:
      current_block = (Rpc - LABEL_86);
      goto continuation_78;

    case 80:
      current_block = (Rpc - LABEL_88);
      goto continuation_80;

    case 81:
      current_block = (Rpc - LABEL_89);
      goto continuation_81;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto continuation_82;

    case 83:
      current_block = (Rpc - LABEL_91);
      goto continuation_83;

    case 84:
      current_block = (Rpc - LABEL_92);
      goto continuation_84;

    case 85:
      current_block = (Rpc - LABEL_93);
      goto continuation_85;

    case 86:
      current_block = (Rpc - LABEL_94);
      goto continuation_86;

    case 87:
      current_block = (Rpc - LABEL_95);
      goto continuation_87;

    case 88:
      current_block = (Rpc - LABEL_96);
      goto continuation_88;

    case 89:
      current_block = (Rpc - LABEL_97);
      goto continuation_89;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto continuation_90;

    case 91:
      current_block = (Rpc - LABEL_99);
      goto continuation_91;

    case 92:
      current_block = (Rpc - LABEL_100);
      goto continuation_92;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_93;

    case 94:
      current_block = (Rpc - LABEL_102);
      goto continuation_94;

    case 95:
      current_block = (Rpc - LABEL_103);
      goto continuation_95;

    case 96:
      current_block = (Rpc - LABEL_104);
      goto continuation_96;

    case 97:
      current_block = (Rpc - LABEL_105);
      goto continuation_97;

    case 98:
      current_block = (Rpc - LABEL_106);
      goto continuation_98;

    case 99:
      current_block = (Rpc - LABEL_107);
      goto continuation_99;

    case 100:
      current_block = (Rpc - LABEL_108);
      goto continuation_100;

    case 101:
      current_block = (Rpc - LABEL_109);
      goto continuation_101;

    case 102:
      current_block = (Rpc - LABEL_110);
      goto continuation_102;

    case 103:
      current_block = (Rpc - LABEL_111);
      goto continuation_103;

    case 104:
      current_block = (Rpc - LABEL_112);
      goto continuation_104;

    case 105:
      current_block = (Rpc - LABEL_113);
      goto continuation_105;

    case 106:
      current_block = (Rpc - LABEL_114);
      goto continuation_106;

    case 107:
      current_block = (Rpc - LABEL_115);
      goto continuation_107;

    case 108:
      current_block = (Rpc - LABEL_116);
      goto continuation_108;

    case 109:
      current_block = (Rpc - LABEL_117);
      goto continuation_109;

    case 110:
      current_block = (Rpc - LABEL_118);
      goto continuation_111;

    case 111:
      current_block = (Rpc - LABEL_123);
      goto label_178;

    case 112:
      current_block = (Rpc - LABEL_119);
      goto continuation_110;

    case 113:
      current_block = (Rpc - LABEL_121);
      goto continuation_113;

    case 114:
      current_block = (Rpc - LABEL_127);
      goto label_179;

    case 115:
      current_block = (Rpc - LABEL_122);
      goto continuation_112;

    case 116:
      current_block = (Rpc - LABEL_125);
      goto continuation_115;

    case 117:
      current_block = (Rpc - LABEL_131);
      goto label_180;

    case 118:
      current_block = (Rpc - LABEL_126);
      goto continuation_114;

    case 119:
      current_block = (Rpc - LABEL_129);
      goto continuation_117;

    case 120:
      current_block = (Rpc - LABEL_135);
      goto label_181;

    case 121:
      current_block = (Rpc - LABEL_130);
      goto continuation_116;

    case 122:
      current_block = (Rpc - LABEL_133);
      goto continuation_119;

    case 123:
      current_block = (Rpc - LABEL_138);
      goto label_182;

    case 124:
      current_block = (Rpc - LABEL_134);
      goto continuation_118;

    case 125:
      current_block = (Rpc - LABEL_136);
      goto continuation_121;

    case 126:
      current_block = (Rpc - LABEL_141);
      goto label_183;

    case 127:
      current_block = (Rpc - LABEL_137);
      goto continuation_120;

    case 128:
      current_block = (Rpc - LABEL_139);
      goto continuation_123;

    case 129:
      current_block = (Rpc - LABEL_145);
      goto label_184;

    case 130:
      current_block = (Rpc - LABEL_140);
      goto continuation_122;

    case 131:
      current_block = (Rpc - LABEL_143);
      goto continuation_125;

    case 132:
      current_block = (Rpc - LABEL_148);
      goto label_185;

    case 133:
      current_block = (Rpc - LABEL_144);
      goto continuation_124;

    case 134:
      current_block = (Rpc - LABEL_146);
      goto continuation_127;

    case 135:
      current_block = (Rpc - LABEL_147);
      goto continuation_126;

    case 136:
      current_block = (Rpc - LABEL_149);
      goto continuation_128;

    case 137:
      current_block = (Rpc - LABEL_150);
      goto continuation_129;

    case 138:
      current_block = (Rpc - LABEL_151);
      goto continuation_130;

    case 139:
      current_block = (Rpc - LABEL_152);
      goto continuation_131;

    case 140:
      current_block = (Rpc - LABEL_153);
      goto continuation_132;

    case 141:
      current_block = (Rpc - LABEL_154);
      goto continuation_133;

    case 142:
      current_block = (Rpc - LABEL_155);
      goto continuation_134;

    case 143:
      current_block = (Rpc - LABEL_156);
      goto continuation_135;

    case 144:
      current_block = (Rpc - LABEL_157);
      goto continuation_136;

    case 145:
      current_block = (Rpc - LABEL_158);
      goto continuation_137;

    case 146:
      current_block = (Rpc - LABEL_159);
      goto continuation_138;

    case 147:
      current_block = (Rpc - LABEL_160);
      goto continuation_139;

    case 148:
      current_block = (Rpc - LABEL_161);
      goto continuation_140;

    case 149:
      current_block = (Rpc - LABEL_162);
      goto continuation_141;

    case 150:
      current_block = (Rpc - LABEL_163);
      goto continuation_142;

    case 151:
      current_block = (Rpc - LABEL_164);
      goto continuation_143;

    case 152:
      current_block = (Rpc - LABEL_165);
      goto continuation_144;

    case 153:
      current_block = (Rpc - LABEL_166);
      goto continuation_145;

    case 154:
      current_block = (Rpc - LABEL_167);
      goto continuation_146;

    case 155:
      current_block = (Rpc - LABEL_168);
      goto continuation_147;

    case 156:
      current_block = (Rpc - LABEL_169);
      goto continuation_148;

    case 157:
      current_block = (Rpc - LABEL_170);
      goto continuation_149;

    case 158:
      current_block = (Rpc - LABEL_171);
      goto continuation_150;

    case 159:
      current_block = (Rpc - LABEL_173);
      goto label_186;

    case 160:
      current_block = (Rpc - LABEL_174);
      goto label_187;

    case 161:
      current_block = (Rpc - LABEL_175);
      goto label_188;

    case 162:
      current_block = (Rpc - LABEL_176);
      goto label_189;

    case 163:
      current_block = (Rpc - LABEL_177);
      goto label_190;

    case 164:
      current_block = (Rpc - LABEL_178);
      goto label_191;

    case 165:
      current_block = (Rpc - LABEL_179);
      goto label_192;

    case 166:
      current_block = (Rpc - LABEL_180);
      goto label_193;

    case 167:
      current_block = (Rpc - LABEL_181);
      goto label_194;

    case 168:
      current_block = (Rpc - LABEL_182);
      goto label_195;

    case 169:
      current_block = (Rpc - LABEL_183);
      goto label_196;

    case 170:
      current_block = (Rpc - LABEL_184);
      goto label_197;

    case 171:
      current_block = (Rpc - LABEL_185);
      goto label_198;

    case 172:
      current_block = (Rpc - LABEL_172);
      goto continuation_164;

    case 173:
      current_block = (Rpc - LABEL_186);
      goto continuation_165;

    case 174:
      current_block = (Rpc - LABEL_187);
      goto continuation_166;

    case 175:
      current_block = (Rpc - LABEL_188);
      goto continuation_167;

    case 176:
      current_block = (Rpc - LABEL_189);
      goto continuation_168;

    case 177:
      current_block = (Rpc - LABEL_190);
      goto continuation_169;

    case 178:
      current_block = (Rpc - LABEL_191);
      goto continuation_170;

    case 179:
      current_block = (Rpc - LABEL_192);
      goto continuation_171;

    case 180:
      current_block = (Rpc - LABEL_193);
      goto label_199;

    case 181:
      current_block = (Rpc - LABEL_194);
      goto label_203;

    case 182:
      current_block = (Rpc - LABEL_195);
      goto label_204;

    case 183:
      current_block = (Rpc - LABEL_196);
      goto expression_173;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_173)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_195])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_204)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_203)
  {
    static const short sections [] =
      {
	0,
	1,
	3,
	1,
	1,
	1,
	0,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	2,
	3,
	3,
	1,
	2,
	1,
	1,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	3,
	1,
	1,
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	3,
	1,
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
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	3,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	3,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 117)
      goto label_202;
    blocks = (current_block [OBJECT_272]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_194])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_202)
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
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
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
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_256;
  Wrd8 = Wrd12;

DEFLABEL (label_255)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_254;
  Wrd8 = Wrd12;

DEFLABEL (label_253)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_74]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_252;
  Wrd11 = Wrd15;

DEFLABEL (label_251)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_78]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_250;
  Wrd11 = Wrd15;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_78]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_119);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_248;
  Wrd12 = Wrd16;

DEFLABEL (label_247)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_246;
  Wrd11 = Wrd15;

DEFLABEL (label_245)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_126);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_244;
  Wrd12 = Wrd16;

DEFLABEL (label_243)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_130);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_242;
  Wrd12 = Wrd16;

DEFLABEL (label_241)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_134);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_240;
  Wrd12 = Wrd16;

DEFLABEL (label_239)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_137);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_238;
  Wrd12 = Wrd16;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_140);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_236;
  Wrd12 = Wrd16;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_144);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_234;
  Wrd12 = Wrd16;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132]));

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_147);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_232;
  Wrd9 = Wrd13;

DEFLABEL (label_231)
  (Wrd18.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_230;
  Wrd20 = Wrd24;

DEFLABEL (label_229)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_228;
  Wrd31 = Wrd35;

DEFLABEL (label_227)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_226;
  Wrd42 = Wrd46;

DEFLABEL (label_225)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_224;
  Wrd53 = Wrd57;

DEFLABEL (label_223)
  (Wrd59.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_222;
  Wrd64 = Wrd68;

DEFLABEL (label_221)
  (Wrd70.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_220;
  Wrd75 = Wrd79;

DEFLABEL (label_219)
  (Wrd81.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_218;
  Wrd86 = Wrd90;

DEFLABEL (label_217)
  (Wrd92.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd98.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd101.Obj) = ((Wrd98.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_216;
  Wrd97 = Wrd101;

DEFLABEL (label_215)
  (Wrd103.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd105.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd105.pObj)));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_214;
  Wrd108 = Wrd112;

DEFLABEL (label_213)
  (Wrd114.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd120.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd123.Obj) = ((Wrd120.pObj) [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if ((Wrd124.uLng) == 50)
    goto label_212;
  Wrd119 = Wrd123;

DEFLABEL (label_211)
  (Wrd125.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd131.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd134.Obj) = ((Wrd131.pObj) [0]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if ((Wrd135.uLng) == 50)
    goto label_210;
  Wrd130 = Wrd134;

DEFLABEL (label_209)
  (Wrd136.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd130.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd142.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd145.Obj) = ((Wrd142.pObj) [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if ((Wrd146.uLng) == 50)
    goto label_208;
  Wrd141 = Wrd145;

DEFLABEL (label_207)
  (Wrd147.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd141.Obj);
  (* (Rhp++)) = (Wrd147.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd151.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd152.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_257]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_258]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_259]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_260]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_261]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_262]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_188);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_189]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_263]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_264]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_265]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_266]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_267]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_268]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_191);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_269]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_270]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd5.Obj) = (current_block [OBJECT_271]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_206;
  Wrd8 = Wrd12;

DEFLABEL (label_205)
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_193])), (Wrd9.pObj));

DEFLABEL (label_199)
  (Wrd8.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_185])), (Wrd142.pObj));

DEFLABEL (label_198)
  (Wrd141.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_184])), (Wrd131.pObj));

DEFLABEL (label_197)
  (Wrd130.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_183])), (Wrd120.pObj));

DEFLABEL (label_196)
  (Wrd119.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_182])), (Wrd109.pObj));

DEFLABEL (label_195)
  (Wrd108.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_181])), (Wrd98.pObj));

DEFLABEL (label_194)
  (Wrd97.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_180])), (Wrd87.pObj));

DEFLABEL (label_193)
  (Wrd86.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_179])), (Wrd76.pObj));

DEFLABEL (label_192)
  (Wrd75.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_178])), (Wrd65.pObj));

DEFLABEL (label_191)
  (Wrd64.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_177])), (Wrd54.pObj));

DEFLABEL (label_190)
  (Wrd53.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_176])), (Wrd43.pObj));

DEFLABEL (label_189)
  (Wrd42.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175])), (Wrd32.pObj));

DEFLABEL (label_188)
  (Wrd31.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_174])), (Wrd21.pObj));

DEFLABEL (label_187)
  (Wrd20.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_173])), (Wrd10.pObj));

DEFLABEL (label_186)
  (Wrd9.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_148])), (Wrd13.pObj));

DEFLABEL (label_185)
  (Wrd12.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd13.pObj));

DEFLABEL (label_184)
  (Wrd12.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141])), (Wrd13.pObj));

DEFLABEL (label_183)
  (Wrd12.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_138])), (Wrd13.pObj));

DEFLABEL (label_182)
  (Wrd12.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_135])), (Wrd13.pObj));

DEFLABEL (label_181)
  (Wrd12.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd13.pObj));

DEFLABEL (label_180)
  (Wrd12.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd12.pObj));

DEFLABEL (label_179)
  (Wrd11.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd13.pObj));

DEFLABEL (label_178)
  (Wrd12.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd12.pObj));

DEFLABEL (label_177)
  (Wrd11.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd12.pObj));

DEFLABEL (label_176)
  (Wrd11.Obj) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd9.pObj));

DEFLABEL (label_175)
  (Wrd8.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd9.pObj));

DEFLABEL (label_174)
  (Wrd8.Obj) = Rvl;
  goto label_255;

DEFLABEL (make_sldb_state_201)
  CLOSURE_HEADER (LABEL_80);

DEFLABEL (make_sldb_state_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_swank_so_1598117c1c3e9280 [117] =
  {
    { "swank_so_code_1", 10, swank_so_code_1 },
    { "swank_so_code_2", 3, swank_so_code_2 },
    { "swank_so_code_3", 9, swank_so_code_3 },
    { "swank_so_code_4", 2, swank_so_code_4 },
    { "swank_so_code_5", 10, swank_so_code_5 },
    { "swank_so_code_6", 1, swank_so_code_6 },
    { "swank_so_code_7", 2, swank_so_code_7 },
    { "swank_so_code_8", 2, swank_so_code_8 },
    { "swank_so_code_9", 8, swank_so_code_9 },
    { "swank_so_code_10", 3, swank_so_code_10 },
    { "swank_so_code_11", 15, swank_so_code_11 },
    { "swank_so_code_12", 6, swank_so_code_12 },
    { "swank_so_code_13", 2, swank_so_code_13 },
    { "swank_so_code_14", 9, swank_so_code_14 },
    { "swank_so_code_15", 8, swank_so_code_15 },
    { "swank_so_code_16", 3, swank_so_code_16 },
    { "swank_so_code_17", 12, swank_so_code_17 },
    { "swank_so_code_18", 14, swank_so_code_18 },
    { "swank_so_code_19", 2, swank_so_code_19 },
    { "swank_so_code_20", 15, swank_so_code_20 },
    { "swank_so_code_21", 5, swank_so_code_21 },
    { "swank_so_code_22", 2, swank_so_code_22 },
    { "swank_so_code_23", 2, swank_so_code_23 },
    { "swank_so_code_24", 4, swank_so_code_24 },
    { "swank_so_code_25", 6, swank_so_code_25 },
    { "swank_so_code_26", 6, swank_so_code_26 },
    { "swank_so_code_27", 4, swank_so_code_27 },
    { "swank_so_code_28", 6, swank_so_code_28 },
    { "swank_so_code_29", 12, swank_so_code_29 },
    { "swank_so_code_30", 4, swank_so_code_30 },
    { "swank_so_code_31", 6, swank_so_code_31 },
    { "swank_so_code_32", 6, swank_so_code_32 },
    { "swank_so_code_33", 5, swank_so_code_33 },
    { "swank_so_code_34", 6, swank_so_code_34 },
    { "swank_so_code_35", 3, swank_so_code_35 },
    { "swank_so_code_36", 5, swank_so_code_36 },
    { "swank_so_code_37", 2, swank_so_code_37 },
    { "swank_so_code_38", 2, swank_so_code_38 },
    { "swank_so_code_39", 21, swank_so_code_39 },
    { "swank_so_code_40", 1, swank_so_code_40 },
    { "swank_so_code_41", 1, swank_so_code_41 },
    { "swank_so_code_42", 21, swank_so_code_42 },
    { "swank_so_code_43", 4, swank_so_code_43 },
    { "swank_so_code_44", 3, swank_so_code_44 },
    { "swank_so_code_45", 5, swank_so_code_45 },
    { "swank_so_code_46", 8, swank_so_code_46 },
    { "swank_so_code_47", 3, swank_so_code_47 },
    { "swank_so_code_48", 5, swank_so_code_48 },
    { "swank_so_code_49", 1, swank_so_code_49 },
    { "swank_so_code_50", 10, swank_so_code_50 },
    { "swank_so_code_51", 5, swank_so_code_51 },
    { "swank_so_code_52", 6, swank_so_code_52 },
    { "swank_so_code_53", 1, swank_so_code_53 },
    { "swank_so_code_54", 1, swank_so_code_54 },
    { "swank_so_code_55", 1, swank_so_code_55 },
    { "swank_so_code_56", 1, swank_so_code_56 },
    { "swank_so_code_57", 1, swank_so_code_57 },
    { "swank_so_code_58", 1, swank_so_code_58 },
    { "swank_so_code_59", 1, swank_so_code_59 },
    { "swank_so_code_60", 4, swank_so_code_60 },
    { "swank_so_code_61", 15, swank_so_code_61 },
    { "swank_so_code_62", 5, swank_so_code_62 },
    { "swank_so_code_63", 10, swank_so_code_63 },
    { "swank_so_code_64", 6, swank_so_code_64 },
    { "swank_so_code_65", 1, swank_so_code_65 },
    { "swank_so_code_66", 3, swank_so_code_66 },
    { "swank_so_code_67", 3, swank_so_code_67 },
    { "swank_so_code_68", 6, swank_so_code_68 },
    { "swank_so_code_69", 2, swank_so_code_69 },
    { "swank_so_code_70", 3, swank_so_code_70 },
    { "swank_so_code_71", 2, swank_so_code_71 },
    { "swank_so_code_72", 10, swank_so_code_72 },
    { "swank_so_code_73", 9, swank_so_code_73 },
    { "swank_so_code_74", 4, swank_so_code_74 },
    { "swank_so_code_75", 17, swank_so_code_75 },
    { "swank_so_code_76", 10, swank_so_code_76 },
    { "swank_so_code_77", 5, swank_so_code_77 },
    { "swank_so_code_78", 4, swank_so_code_78 },
    { "swank_so_code_79", 7, swank_so_code_79 },
    { "swank_so_code_80", 7, swank_so_code_80 },
    { "swank_so_code_81", 5, swank_so_code_81 },
    { "swank_so_code_82", 5, swank_so_code_82 },
    { "swank_so_code_83", 4, swank_so_code_83 },
    { "swank_so_code_84", 6, swank_so_code_84 },
    { "swank_so_code_85", 9, swank_so_code_85 },
    { "swank_so_code_86", 3, swank_so_code_86 },
    { "swank_so_code_87", 10, swank_so_code_87 },
    { "swank_so_code_88", 4, swank_so_code_88 },
    { "swank_so_code_89", 2, swank_so_code_89 },
    { "swank_so_code_90", 5, swank_so_code_90 },
    { "swank_so_code_91", 9, swank_so_code_91 },
    { "swank_so_code_92", 9, swank_so_code_92 },
    { "swank_so_code_93", 3, swank_so_code_93 },
    { "swank_so_code_94", 10, swank_so_code_94 },
    { "swank_so_code_95", 11, swank_so_code_95 },
    { "swank_so_code_96", 4, swank_so_code_96 },
    { "swank_so_code_97", 1, swank_so_code_97 },
    { "swank_so_code_98", 7, swank_so_code_98 },
    { "swank_so_code_99", 7, swank_so_code_99 },
    { "swank_so_code_100", 5, swank_so_code_100 },
    { "swank_so_code_101", 1, swank_so_code_101 },
    { "swank_so_code_102", 5, swank_so_code_102 },
    { "swank_so_code_103", 4, swank_so_code_103 },
    { "swank_so_code_104", 19, swank_so_code_104 },
    { "swank_so_code_105", 23, swank_so_code_105 },
    { "swank_so_code_106", 9, swank_so_code_106 },
    { "swank_so_code_107", 20, swank_so_code_107 },
    { "swank_so_code_108", 17, swank_so_code_108 },
    { "swank_so_code_109", 2, swank_so_code_109 },
    { "swank_so_code_110", 3, swank_so_code_110 },
    { "swank_so_code_111", 3, swank_so_code_111 },
    { "swank_so_code_112", 1, swank_so_code_112 },
    { "swank_so_code_113", 2, swank_so_code_113 },
    { "swank_so_code_114", 4, swank_so_code_114 },
    { "swank_so_code_115", 2, swank_so_code_115 },
    { "swank_so_code_116", 13, swank_so_code_116 },
    { "swank_so_code_117", 10, swank_so_code_117 }
  };

int
decl_swank_so_1598117c1c3e9280 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_swank_so_1598117c1c3e9280);
  return (0);
}

DECLARE_COMPILED_CODE ("swank.so", 184, decl_swank_so_1598117c1c3e9280, swank_so_1598117c1c3e9280)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_swank_so_data_1598117c1c3e9280 [19908] =
  "\xaa\x05\xde\x01\xdc\x25\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x1d"
  "\x07\x1d\x28\x0d\xb9\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0"
  "\x82\x88\x0d\xbd\x0c\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0c\x0d\x1c"
  "\x0c\xc3\x1d\xc2\x1c\x02\x0d\x24\x28\xb1\x28\xb6\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb5\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\x80"
  "\x0d\x1c\x0c\x0d\x1c\x25\x1b\x24\x28\xb6\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28"
  "\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x08\xc1\x1c\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc1\x1c\x07\x02\x80\xc1\x86"
  "\x28\x0d\x1c\x28\x0d\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0f\x86\x1b\x02\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x1c\x1b\x0c\x0d\x1c\x24\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x25"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x0d\x1c\x0d\x1d\x08\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\xb1\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x0d\x1c\x0d"
  "\x1c\x25\x0d\x1c\x1b\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x02\x07\x0c\x0d\x1c\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x0d\x0d\x1c\x07\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x24\x28\x0d\x28\xb1\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1d\x0d\x0d\x08\x1b\x25\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x07\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1d\x28\x0d\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x0c\x0c\x0c\x02\x85\x02\x0c\x0c\x0c\x0c\x0c\x0c\x0c\xc1"
  "\x0c\x0c\x08\x0c\x0c\x06\x07\x02\x86\x02\x02\xc2\x1c\x02\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\x0d\x1c\x0d\x0d\x0c\x0d\x0d\x0c\x0c\x08\x89\x08\x89\x0d"
  "\x0c\x0d\x08\x0c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x06\x1b\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x08\x0d"
  "\x1c\x1b\x08\x89\x80\x02\x1d\x0d\x1c\x25\x1b\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\xb1\x28\x0d\xb9\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x0d\x80\x08\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x0c\x1b\x0c\x08\x81\x1b\x82\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x1b\x1b\x0c\x08\x89\x08\x1b\x1b\x24\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\xb1\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x08\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c"
  "\x02\x80\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c\x07\x0c\x0d"
  "\x1c\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x28\xb2\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\x08\x0d\x1c\x24\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x0d\x1c\x80\x0c"
  "\x08\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x0d\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x08\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0c\x28"
  "\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0c\x0d\x1b\x08\x89\x08\x88\x0d\x0d\x1c\x1b"
  "\x08\x89\x08\x88\x0d\x0d\x08\x0d\x0d\x1b\x07\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x06\x0d\x1c\x25\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x25\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b"
  "\x0d\x08\x80\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x02\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x0c\x1b\x1b\x0d"
  "\x1c\x1b\x06\x07\x85\x1b\x02\x08\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x25\x1b\x24\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x25\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1b\x02\x80\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x1b\x02\x0c\x0c\x1b\x80\x08\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x1b\x1b\x0c\x1b\x02\x80\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x02\x80\xc1\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\xc1\x0c\xc1\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc2\x0c\x1b\x02\x80"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x08\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x02\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x02\x84\x02\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x06\x07\x85\x1b\x02\x1b\x08\x1b"
  "\x1b\x0f\xc2\x80\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x0d\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x0d"
  "\x1c\x1b\x0d\x1c\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x0d\x0d\x1c\x1b\x0d"
  "\x1c\x1b\x1b\x1b\x1b\x1b\x08\x8c\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\xb2\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x2a\xb1\x1b\x2a\x1b\xb6\x2a\x1b\x1b\x2a\x1b\x1b\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x0d"
  "\x1c\x0c\x0d\x0d\x08\x89\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x0d\x1c\x0d\x1c\x89\x0d"
  "\x1b\x1b\x89\x0d\x1b\x1b\x89\x0d\x1b\x0d\x1c\x1b\x8a\x0d\x0d\x1c"
  "\x1b\x89\x1b\x1b\x08\x89\x0d\x1b\x08\x89\x0d\x1b\x08\x89\x0d\x1b"
  "\x08\x89\x0d\x0d\x0d\x0d\x08\x8b\x0d\x1b\x0d\x08\x8a\x08\x14\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x0d\x0d\x1c\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x0c\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x1b\x1b\x2a\x1b\x1b\x0d\x08\x89\x0d\x0d\x1c\x1b"
  "\x0d\x08\x8c\x1b\x2a\x1b\x08\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\xb5\x1b\x2a"
  "\xb7\x1b\x2a\xb3\x1b\x2a\xc3\x0d\xb4\x2a\x28\x0d\x1c\x28\x0d\x26"
  "\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x77\x61"
  "\x6e\x6b\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\xa6\x1f\x02\x08"
  "\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x02\x16"
  "\x68\x6f\x73\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x6c\x6f\x6f"
  "\x70\x62\x61\x63\x6b\x03\x18\x63\x6c\x6f\x73\x65\x2d\x74\x63\x70"
  "\x2d\x73\x65\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74\x05\x1d"
  "\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x69\x6f\x6e\x2d\x61\x63\x63\x65\x70\x74\x04\x16\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x04\x17\x6f\x70\x65\x6e\x2d\x74\x63\x70\x2d\x73\x65"
  "\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74\x04\x06\x77\x72\x69"
  "\x74\x65\x03\x06\x73\x65\x72\x76\x65\x09\xc2\x01\x16\x81\x83\x02"
  "\xc1\x01\x14\x83\x04\xc0\x01\x12\x81\x83\x02\xbf\x01\x10\x81\x85"
  "\x02\xbe\x01\x0e\x81\x83\x02\xbd\x01\x0c\x81\x83\x02\xbc\x01\x0a"
  "\x81\x83\x02\xbb\x01\x08\x81\x83\x02\xba\x01\x06\x81\x83\x02\xb9"
  "\x01\x04\x83\x02\x15\x2d\x02\x0b\x64\x69\x73\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x12\x43\x6c\x6f\x73\x65\x20\x63\x6f\x6e\x6e\x65\x63\x74"
  "\x69\x6f\x6e\x2e\x05\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x03\x20\x77\x69\x74\x68\x2d"
  "\x6b\x65\x79\x62\x6f\x61\x72\x64\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x0a\x6d\x61\x69\x6e"
  "\x2d\x6c\x6f\x6f\x70\x09\x04\xc5\x01\x08\x81\x83\x02\xc4\x01\x06"
  "\x81\x83\x02\xc3\x01\x04\x83\x04\x07\x13\x0a\x02\x14\x4b\x65\x79"
  "\x62\x6f\x61\x72\x64\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x2e"
  "\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x0b\x19\x43\x6f\x6e\x74\x69"
  "\x6e\x75\x65\x20\x66\x72\x6f\x6d\x20\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2e\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02"
  "\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0c\x48\x1a\x6b\x65"
  "\x79\x62\x6f\x61\x72\x64\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2d\x76\x65\x63\x74\x6f\x72\x02\x05\x05\x03\x06\x65\x72\x72\x6f"
  "\x72\x0d\x04\xce\x01\x14\x82\x02\xcd\x01\x12\x83\x04\xcc\x01\x10"
  "\x81\x83\x02\xcb\x01\x0e\x81\x83\x02\xca\x01\x0c\x81\x83\x02\xc9"
  "\x01\x0a\x81\x85\x02\xc8\x01\x08\x81\x83\x02\xc7\x01\x06\x81\x83"
  "\x02\xc6\x01\x04\x83\x04\x13\x26\x0e\x02\x03\x0d\x66\x69\x6e\x64"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x0f\x03\x0f\x69\x6e\x76\x6f\x6b"
  "\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x10\x03\xd0\x01\x06\x81\x81"
  "\x02\xcf\x01\x04\x82\x02\x05\x0e\x11\x02\x02\x06\x61\x62\x6f\x72"
  "\x74\x12\x1b\x52\x65\x74\x75\x72\x6e\x20\x74\x6f\x20\x53\x4c\x49"
  "\x4d\x45\x20\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2e\x14\x2a\x74"
  "\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x2a\x13\x02\x13\x02\x05\x03\x0f\x05\x13\x73\x68\x61\x6c\x6c\x6f"
  "\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0f\x04\x14\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x6f\x6e\x65\x2d\x6d\x65\x73\x73\x61"
  "\x67\x65\x14\x05\xda\x01\x16\x81\x83\x02\xd9\x01\x14\x81\x85\x02"
  "\xd8\x01\x12\x81\x83\x02\xd7\x01\x10\x81\x83\x02\xd6\x01\x0e\x81"
  "\x83\x02\xd5\x01\x0c\x81\x83\x02\xd4\x01\x0a\x81\x83\x02\xd3\x01"
  "\x08\x81\x83\x02\xd2\x01\x06\x81\x83\x02\xd1\x01\x04\x83\x04\x15"
  "\x29\x15\x02\x02\x19\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70"
  "\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\xdb\x01"
  "\x04\x82\x02\x03\x16\x02\x08\x02\x0d\x6e\x65\x61\x72\x65\x73\x74"
  "\x2d\x72\x65\x70\x6c\x04\x16\x73\x65\x74\x2d\x72\x65\x70\x6c\x2f"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x03\xdd\x01\x06"
  "\x81\x83\x02\xdc\x01\x04\x83\x04\x05\x0d\x17\x02\x09\x13\x02\x03"
  "\x10\x02\xdf\x01\x06\x81\x81\x02\xde\x01\x04\x82\x02\x05\x0d\x18"
  "\x02\x0a\x04\x63\x64\x72\x19\x04\x63\x61\x72\x1a\x13\x02\x02\x0f"
  "\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x02\xe7"
  "\x01\x12\x81\x85\x02\xe6\x01\x10\x81\x85\x02\xe5\x01\x0e\x81\x87"
  "\x02\xe4\x01\x0c\x81\x85\x02\xe3\x01\x0a\x81\x83\x02\xe2\x01\x08"
  "\x81\x83\x02\xe1\x01\x06\x81\x81\x02\xe0\x01\x04\x82\x02\x11\x1c"
  "\x1b\x02\x0b\x03\x0c\x72\x65\x61\x64\x2d\x70\x61\x63\x6b\x65\x74"
  "\x1c\x05\x09\x64\x69\x73\x70\x61\x74\x63\x68\x1d\x04\x0f\x64\x65"
  "\x63\x6f\x64\x65\x2d\x6d\x65\x73\x73\x61\x67\x65\x1e\x04\xea\x01"
  "\x08\x81\x87\x02\xe9\x01\x06\x81\x85\x02\xe8\x01\x04\x84\x06\x07"
  "\x11\x1f\x02\x0c\x02\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x20\x11\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c"
  "\x6f\x63\x61\x74\x65\x05\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e"
  "\x75\x6d\x62\x65\x72\x21\x06\x10\x72\x65\x61\x64\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x21\x02\x04\xf9\x01\x20\x81\x89\x02\xf8"
  "\x01\x1e\x81\x89\x02\xf7\x01\x1c\x81\x87\x02\xf6\x01\x1a\x81\x89"
  "\x02\xf5\x01\x18\x81\x8b\x02\xf4\x01\x16\x81\x87\x02\xf3\x01\x14"
  "\x81\x87\x02\xf2\x01\x12\x81\x87\x02\xf1\x01\x10\x81\x83\x02\xf0"
  "\x01\x0e\x81\x85\x02\xef\x01\x0c\x81\x85\x02\xee\x01\x0a\x81\x87"
  "\x02\xed\x01\x08\x81\x85\x02\xec\x01\x06\x81\x83\x02\xeb\x01\x04"
  "\x83\x04\x1f\x30\x22\x02\x0d\x0e\x3a\x72\x65\x61\x64\x65\x72\x2d"
  "\x65\x72\x72\x6f\x72\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x73\x65\x72\x69\x6f\x75\x73\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x23\x02\x05\x17\x62\x69\x6e\x64\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x24\x03\x18\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x72\x65\x70"
  "\x6f\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x25\x03\x11\x72\x65\x61"
  "\x64\x2d\x66\x72\x6f\x6d\x2d\x73\x74\x72\x69\x6e\x67\x26\x02\x10"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x61\x62\x6f\x72\x74\x27"
  "\x04\x0e\x77\x72\x69\x74\x65\x2d\x6d\x65\x73\x73\x61\x67\x65\x28"
  "\x06\xff\x01\x0e\x81\x89\x02\xfe\x01\x0c\x81\x85\x02\xfd\x01\x0a"
  "\x81\x83\x02\xfc\x01\x08\x81\x85\x02\xfb\x01\x06\x81\x85\x02\xfa"
  "\x01\x04\x84\x06\x0d\x1f\x29\x02\x0e\x03\x10\x77\x72\x69\x74\x65"
  "\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x2a\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x70\x61\x63\x6b\x65\x74\x2b\x03\x81\x02\x06\x81\x85"
  "\x02\x80\x02\x04\x84\x06\x05\x0d\x2c\x02\x0f\x23\x45\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x20\x6c\x65\x6e\x67\x74\x68\x20\x65\x78"
  "\x63\x65\x65\x64\x73\x20\x32\x34\x20\x62\x69\x74\x73\x3a\x01\x31"
  "\x20\x11\x04\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69"
  "\x6e\x67\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65"
  "\x66\x74\x04\x0d\x03\x0d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2e\x06\x8a\x02\x14\x81\x83\x02\x89\x02\x12\x81\x85\x02"
  "\x88\x02\x10\x81\x83\x02\x87\x02\x0e\x81\x83\x02\x86\x02\x0c\x81"
  "\x87\x02\x85\x02\x0a\x81\x83\x02\x84\x02\x08\x81\x85\x02\x83\x02"
  "\x06\x81\x8b\x02\x82\x02\x04\x84\x06\x13\x26\x2f\x02\x10\x1a\x06"
  "\x61\x70\x70\x6c\x79\x30\x19\x11\x55\x6e\x6b\x6e\x6f\x77\x6e\x20"
  "\x6d\x65\x73\x73\x61\x67\x65\x3a\x11\x6d\x65\x73\x73\x61\x67\x65"
  "\x2d\x68\x61\x6e\x64\x6c\x65\x72\x73\x31\x02\x04\x05\x66\x69\x6e"
  "\x64\x04\x0d\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63"
  "\x68\x3f\x04\x92\x02\x12\x81\x87\x02\x91\x02\x10\x81\x85\x02\x90"
  "\x02\x0e\x81\x89\x02\x8f\x02\x0c\x81\x89\x02\x8e\x02\x0a\x81\x87"
  "\x02\x8d\x02\x08\x81\x89\x02\x8c\x02\x06\x81\x89\x02\x8b\x02\x04"
  "\x85\x08\x11\x21\x32\x02\x11\x02\x31\x02\x31\x02\x95\x02\x08\x81"
  "\x85\x02\x94\x02\x06\x81\x85\x02\x93\x02\x04\x84\x06\x07\x0f\x33"
  "\x02\x12\x07\x3a\x61\x62\x6f\x72\x74\x34\x08\x3a\x72\x65\x74\x75"
  "\x72\x6e\x35\x04\x3a\x6f\x6b\x02\x23\x02\x03\x1f\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x05\x24\x06\x0a\x65\x6d"
  "\x61\x63\x73\x2d\x72\x65\x78\x24\x04\x28\x05\x0c\x69\x6e\x76\x6f"
  "\x6b\x65\x2d\x73\x6c\x64\x62\x23\x06\x03\x25\x08\xa1\x02\x1a\x81"
  "\x83\x02\xa0\x02\x18\x81\x83\x02\x9f\x02\x16\x81\x89\x02\x9e\x02"
  "\x14\x82\x02\x9d\x02\x12\x81\x83\x02\x9c\x02\x10\x81\x83\x02\x9b"
  "\x02\x0e\x81\x83\x02\x9a\x02\x0c\x81\x85\x02\x99\x02\x0a\x81\x83"
  "\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06\x81\x85\x02\x96\x02\x04"
  "\x88\x0e\x19\x32\x36\x02\x13\x1a\x02\x19\x11\x2a\x62\x75\x66\x66"
  "\x65\x72\x2d\x70\x73\x74\x72\x69\x6e\x67\x2a\x37\x08\x2a\x69\x6e"
  "\x64\x65\x78\x2a\x38\x03\x0e\x71\x75\x6f\x74\x65\x2d\x73\x70\x65"
  "\x63\x69\x61\x6c\x39\x37\x38\x0a\x73\x77\x61\x6e\x6b\x2d\x65\x6e"
  "\x76\x3a\x05\x05\x0f\x04\x04\x6d\x61\x70\x3b\x04\x05\x65\x76\x61"
  "\x6c\x3c\x04\xaf\x02\x1e\x81\x85\x02\xae\x02\x1c\x81\x85\x02\xad"
  "\x02\x1a\x81\x83\x02\xac\x02\x18\x81\x83\x02\xab\x02\x16\x81\x85"
  "\x02\xaa\x02\x14\x81\x83\x02\xa9\x02\x12\x81\x83\x02\xa8\x02\x10"
  "\x81\x85\x02\xa7\x02\x0e\x81\x83\x02\xa6\x02\x0c\x81\x83\x02\xa5"
  "\x02\x0a\x81\x87\x02\xa4\x02\x08\x81\x85\x02\xa3\x02\x06\x81\x83"
  "\x02\xa2\x02\x04\x86\x0a\x1d\x32\x3d\x02\x14\x37\x02\x03\x0d\x70"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x65\x6e\x76\x3e\x02\xb1\x02\x06"
  "\x81\x81\x02\xb0\x02\x04\x82\x02\x05\x0d\x3f\x02\x15\x0c\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x0b\x11\x43\x4f\x4d\x4d"
  "\x4f\x4e\x2d\x4c\x49\x53\x50\x2d\x55\x53\x45\x52\x19\x61\x6e\x6f"
  "\x6e\x79\x6d\x6f\x75\x73\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x70"
  "\x72\x65\x66\x69\x78\x40\x37\x03\x04\x0f\x73\x74\x72\x69\x6e\x67"
  "\x2d\x70\x72\x65\x66\x69\x78\x3f\x41\x04\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x63\x69\x3d\x3f\x02\x18\x67\x65\x74\x2d\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x42"
  "\x03\x26\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69\x6c\x03"
  "\x0d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x43\x03\x0e"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x75\x6e\x68\x61\x73\x68\x05\x21\x03"
  "\x14\x70\x61\x63\x6b\x61\x67\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x21\x04\x0d\x66\x69\x6e\x64\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x04\x17\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67"
  "\x2d\x74\x79\x70\x65\x2d\x64\x61\x74\x75\x6d\x0c\xc0\x02\x20\x81"
  "\x83\x02\xbf\x02\x1e\x81\x83\x02\xbe\x02\x1c\x81\x87\x02\xbd\x02"
  "\x1a\x81\x83\x02\xbc\x02\x18\x81\x8b\x02\xbb\x02\x16\x81\x85\x02"
  "\xba\x02\x14\x81\x83\x02\xb9\x02\x12\x81\x8d\x02\xb8\x02\x10\x81"
  "\x8d\x02\xb7\x02\x0e\x81\x83\x02\xb6\x02\x0c\x81\x87\x02\xb5\x02"
  "\x0a\x81\x83\x02\xb4\x02\x08\x83\x04\xb3\x02\x06\x81\x87\x02\xb2"
  "\x02\x04\x81\x83\x02\x1f\x41\x44\x02\x16\x40\x02\x03\x15\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70\x61\x63\x6b\x61"
  "\x67\x65\x45\x03\x0c\x6f\x62\x6a\x65\x63\x74\x2d\x68\x61\x73\x68"
  "\x46\x03\x0d\x70\x61\x63\x6b\x61\x67\x65\x2f\x6e\x61\x6d\x65\x03"
  "\x2a\x04\x07\x73\x74\x72\x69\x6e\x67\x47\x06\xc5\x02\x0c\x81\x85"
  "\x02\xc4\x02\x0a\x81\x85\x02\xc3\x02\x08\x81\x85\x02\xc2\x02\x06"
  "\x81\x83\x02\xc1\x02\x04\x83\x04\x0b\x1b\x48\x02\x17\x03\x26\x05"
  "\x11\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x76\x65\x2d\x65\x76\x61"
  "\x6c\x49\x03\xc7\x02\x06\x81\x85\x02\xc6\x02\x04\x84\x06\x05\x0d"
  "\x4a\x02\x18\x04\x0e\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x73\x65"
  "\x78\x70\x4b\x05\x49\x03\xc9\x02\x06\x81\x85\x02\xc8\x02\x04\x84"
  "\x06\x05\x0d\x4c\x02\x19\x0e\x3a\x77\x72\x69\x74\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x4d\x0d\x3a\x72\x65\x70\x6c\x2d\x72\x65\x73\x75"
  "\x6c\x74\x04\x6e\x69\x6c\x4e\x03\x26\x04\x28\x05\x49\x04\xcd\x02"
  "\x0a\x81\x8f\x02\xcc\x02\x08\x81\x89\x02\xcb\x02\x06\x81\x85\x02"
  "\xca\x02\x04\x84\x06\x09\x18\x4f\x02\x1a\x02\x04\x0a\x72\x65\x70"
  "\x6c\x2d\x65\x76\x61\x6c\x50\x03\x18\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x51\x02\x0b\x62\x75\x66\x66\x65\x72\x2d\x65\x6e\x76\x52\x03\x08"
  "\x6e\x65\x77\x6c\x69\x6e\x65\x03\x46\x07\x12\x70\x6f\x72\x74\x2f"
  "\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74\x07\xd3\x02\x0e"
  "\x81\x89\x02\xd2\x02\x0c\x81\x87\x02\xd1\x02\x0a\x81\x85\x02\xd0"
  "\x02\x08\x81\x85\x02\xcf\x02\x06\x81\x87\x02\xce\x02\x04\x85\x08"
  "\x0d\x1e\x46\x02\x1b\x02\x03\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x53\x03\x05\x72\x65\x61\x64"
  "\x54\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x55\x04"
  "\xd9\x02\x0e\x81\x89\x02\xd8\x02\x0c\x81\x89\x02\xd7\x02\x0a\x81"
  "\x87\x02\xd6\x02\x08\x81\x87\x02\xd5\x02\x06\x81\x85\x02\xd4\x02"
  "\x04\x84\x06\x0d\x18\x56\x02\x1c\x06\x73\x77\x61\x6e\x6b\x04\x14"
  "\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x72"
  "\x65\x70\x6c\x57\x04\x18\x77\x69\x74\x68\x2d\x72\x65\x70\x6c\x2d"
  "\x65\x76\x61\x6c\x2d\x62\x6f\x75\x6e\x64\x61\x72\x79\x02\x52\x04"
  "\x3c\x05\xdd\x02\x0a\x81\x85\x02\xdc\x02\x08\x81\x83\x02\xdb\x02"
  "\x06\x81\x83\x02\xda\x02\x04\x84\x06\x09\x16\x58\x02\x1d\x02\x0f"
  "\x72\x65\x70\x6c\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x59\x02"
  "\x04\x0a\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x05\x04\x14\x77\x69"
  "\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x70\x6f\x72"
  "\x74\x03\x2e\x05\xe3\x02\x0e\x82\x02\xe2\x02\x0c\x81\x83\x02\xe1"
  "\x02\x0a\x81\x83\x02\xe0\x02\x08\x81\x85\x02\xdf\x02\x06\x81\x89"
  "\x02\xde\x02\x04\x84\x06\x0d\x1c\x2e\x02\x1e\x4d\x02\x10\x77\x72"
  "\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x0b\x77\x72"
  "\x69\x74\x65\x2d\x63\x68\x61\x72\x59\x02\x04\x0f\x6d\x61\x6b\x65"
  "\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x03\x0b\x70\x6f\x72\x74"
  "\x2f\x73\x74\x61\x74\x65\x03\x47\x05\x0a\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x4d\x04\x28\x06\xef\x02\x1a\x81\x8d\x02\xee\x02\x18"
  "\x81\x89\x02\xed\x02\x16\x81\x8b\x02\xec\x02\x14\x81\x87\x02\xeb"
  "\x02\x12\x81\x85\x02\xea\x02\x10\x81\x89\x02\xe9\x02\x0e\x86\x0a"
  "\xe8\x02\x0c\x81\x89\x02\xe7\x02\x0a\x84\x06\xe6\x02\x08\x81\x81"
  "\x02\xe5\x02\x06\x81\x81\x02\xe4\x02\x04\x82\x02\x19\x2f\x5a\x02"
  "\x1f\x02\x52\x03\x11\x70\x70\x72\x69\x6e\x74\x2d\x74\x6f\x2d\x73"
  "\x74\x72\x69\x6e\x67\x5b\x03\x26\x04\x3c\x05\xf3\x02\x0a\x81\x89"
  "\x02\xf2\x02\x08\x81\x87\x02\xf1\x02\x06\x81\x85\x02\xf0\x02\x04"
  "\x84\x06\x09\x15\x5c\x02\x20\x06\x62\x65\x67\x69\x6e\x03\x0d\x73"
  "\x6e\x61\x72\x66\x2d\x73\x74\x72\x69\x6e\x67\x5d\x03\x0e\x63\x61"
  "\x6c\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x5e\x02\x52\x04\x07"
  "\x73\x79\x6e\x74\x61\x78\x5f\x04\x0b\x73\x63\x6f\x64\x65\x2d\x65"
  "\x76\x61\x6c\x04\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f"
  "\x64\x65\x07\xf9\x02\x0e\x81\x8b\x02\xf8\x02\x0c\x81\x87\x02\xf7"
  "\x02\x0a\x81\x83\x02\xf6\x02\x08\x81\x83\x02\xf5\x02\x06\x81\x87"
  "\x02\xf4\x02\x04\xfd\x07\x0d\x1f\x60\x02\x21\x03\x53\x03\x54\x03"
  "\x55\x04\xff\x02\x0e\xfd\xff\x03\xfe\x02\x0c\xfd\xff\x03\xfd\x02"
  "\x0a\xfd\xff\x03\xfc\x02\x08\xff\xff\x03\xfb\x02\x06\x81\x83\x02"
  "\xfa\x02\x04\x83\x04\x0d\x18\x55\x02\x22\x4e\x02\x04\x0d\x77\x69"
  "\x74\x68\x2d\x74\x69\x6d\x69\x6e\x67\x73\x03\x1d\x69\x6e\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x74\x69\x6d\x65\x2f\x74\x69\x63\x6b\x73\x2d"
  "\x3e\x73\x65\x63\x6f\x6e\x64\x73\x03\x47\x04\x84\x03\x0c\x81\x87"
  "\x02\x83\x03\x0a\x81\x85\x02\x82\x03\x08\x81\x89\x02\x81\x03\x06"
  "\x81\x85\x02\x80\x03\x04\x83\x04\x0b\x18\x61\x02\x23\x04\x63\x6f"
  "\x6d\x02\x03\x5e\x03\x0c\x65\x6c\x69\x73\x70\x2d\x74\x72\x75\x65"
  "\x3f\x62\x04\x57\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e"
  "\x65\x77\x2d\x74\x79\x70\x65\x03\x0d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x66\x69\x6c\x65\x04\x10\x73\x77\x61\x6e\x6b\x3a\x6c\x6f\x61"
  "\x64\x2d\x66\x69\x6c\x65\x63\x07\x8a\x03\x0e\x81\x87\x02\x89\x03"
  "\x0c\x81\x83\x02\x88\x03\x0a\x81\x87\x02\x87\x03\x08\x81\x83\x02"
  "\x86\x03\x06\x81\x87\x02\x85\x03\x04\x85\x08\x0d\x1f\x64\x02\x24"
  "\x04\x57\x02\x52\x04\x05\x6c\x6f\x61\x64\x04\x8d\x03\x08\x81\x85"
  "\x02\x8c\x03\x06\x81\x83\x02\x8b\x03\x04\x84\x06\x07\x11\x65\x02"
  "\x25\x03\x16\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74"
  "\x6f\x2d\x73\x74\x72\x69\x6e\x67\x66\x02\x52\x03\x15\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x3a\x64\x69\x73\x61\x73\x73\x65\x6d\x62\x6c"
  "\x65\x67\x03\x26\x04\x3c\x06\x92\x03\x0c\x81\x87\x02\x91\x03\x0a"
  "\x81\x85\x02\x90\x03\x08\x81\x83\x02\x8f\x03\x06\x81\x83\x02\x8e"
  "\x03\x04\x84\x06\x0b\x19\x68\x02\x26\x02\x1b\x77\x6f\x72\x6b\x69"
  "\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72"
  "\x69\x6e\x67\x69\x03\x94\x03\x06\x81\x83\x02\x93\x03\x04\x83\x04"
  "\x05\x0d\x6a\x02\x27\x03\x20\x73\x65\x74\x2d\x77\x6f\x72\x6b\x69"
  "\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x21\x03\x69\x03\x96\x03\x06\x81\x85\x02\x95"
  "\x03\x04\x84\x06\x05\x0d\x69\x02\x28\x24\x20\x5b\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x6c\x79\x20\x64\x65\x66\x69\x6e\x65\x64\x20\x69"
  "\x6e\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x7e\x61\x5d\x0f\x49\x74"
  "\x20\x69\x73\x3a\x7e\x25\x7e\x25\x7e\x61\x7e\x25\x23\x7e\x61\x20"
  "\x69\x6e\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x7e\x61\x7e\x61\x20"
  "\x6f\x66\x20\x74\x79\x70\x65\x20\x7e\x61\x2e\x7e\x25\x7e\x25\x0f"
  "\x42\x6f\x75\x6e\x64\x20\x74\x6f\x20\x7e\x61\x2e\x7e\x25\x15\x7e"
  "\x25\x53\x69\x67\x6e\x61\x74\x75\x72\x65\x3a\x20\x7e\x61\x2e\x7e"
  "\x25\x7e\x25\x01\x07\x6e\x6f\x72\x6d\x61\x6c\x6b\x02\x52\x03\x0d"
  "\x65\x6e\x76\x2d\x3e\x70\x73\x74\x72\x69\x6e\x67\x6c\x03\x0f\x73"
  "\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c\x6d\x04\x1b"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x79\x70\x65\x6e\x03\x16\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x6f\x04\x15\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x70"
  "\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x70\x04\x13\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x71\x03"
  "\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x72"
  "\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x73\x03\x15\x67"
  "\x65\x74\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x2d\x6e"
  "\x61\x6d\x65\x74\x06\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x75\x03\x66\x05\x07\x66\x6f\x72\x6d\x61\x74\x76\x08"
  "\x76\x03\x0e\x73\x74\x72\x69\x6e\x67\x2d\x75\x70\x63\x61\x73\x65"
  "\x03\x03\x70\x70\x76\x11\xab\x03\x2c\x81\x9b\x02\xaa\x03\x2a\x81"
  "\x99\x02\xa9\x03\x28\x81\x83\x02\xa8\x03\x26\x81\x95\x02\xa7\x03"
  "\x24\x81\x9d\x02\xa6\x03\x22\x81\x9b\x02\xa5\x03\x20\x81\x93\x02"
  "\xa4\x03\x1e\x81\x93\x02\xa3\x03\x1c\x81\x93\x02\xa2\x03\x1a\x81"
  "\x93\x02\xa1\x03\x18\x81\x8b\x02\xa0\x03\x16\x81\x8d\x02\x9f\x03"
  "\x14\x81\x8f\x02\x9e\x03\x12\x81\x91\x02\x9d\x03\x10\x81\x93\x02"
  "\x9c\x03\x0e\x81\x97\x02\x9b\x03\x0c\x81\x99\x02\x9a\x03\x0a\x81"
  "\x89\x02\x99\x03\x08\x81\x87\x02\x98\x03\x06\x81\x85\x02\x97\x03"
  "\x04\x84\x06\x2b\x56\x77\x02\x29\x04\x16\x73\x77\x61\x6e\x6b\x3a"
  "\x64\x65\x73\x63\x72\x69\x62\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x78"
  "\x02\xac\x03\x04\x84\x06\x03\x79\x02\x2a\x04\x78\x02\xad\x03\x04"
  "\x85\x08\x03\x7a\x02\x2b\x0c\x77\x69\x64\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x0c\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x08\x70"
  "\x72\x6f\x6d\x69\x73\x65\x07\x73\x79\x6d\x62\x6f\x6c\x0a\x77\x65"
  "\x61\x6b\x2d\x70\x61\x69\x72\x38\x1e\x0a\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x05\x70\x6f\x72\x74\x0c\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x05\x63"
  "\x65\x6c\x6c\x05\x72\x65\x61\x6c\x08\x63\x6f\x6d\x70\x6c\x65\x78"
  "\x06\x63\x65\x6c\x6c\x3f\x0b\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x0b\x65\x6d\x70\x74\x79\x20\x6c\x69\x73\x74\x05\x70\x61\x69"
  "\x72\x07\x76\x65\x63\x74\x6f\x72\x3d\x3b\x0f\x0d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x74\x79\x70\x65\x3f\x7b\x1b\x09\x72\x61\x74\x69\x6f"
  "\x6e\x61\x6c\x08\x69\x6e\x74\x65\x67\x65\x72\x08\x62\x6f\x6f\x6c"
  "\x65\x61\x6e\x07\x66\x69\x78\x6e\x75\x6d\x05\x63\x68\x61\x72\x07"
  "\x73\x74\x72\x69\x6e\x67\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f"
  "\x03\x09\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x0a\x72\x61\x74\x69"
  "\x6f\x6e\x61\x6c\x3f\x03\x06\x72\x65\x61\x6c\x3f\x03\x0b\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x3f\x7c\x03\x43\x03\x06\x70\x6f\x72"
  "\x74\x3f\x03\x73\x03\x09\x70\x72\x6f\x6d\x69\x73\x65\x3f\x03\x0d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x3f\x03\x0d\x77\x69"
  "\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x3f\x03\x11\x75\x73\x65\x72"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x0d\xc2\x03\x2c"
  "\x81\x83\x02\xc1\x03\x2a\x81\x83\x02\xc0\x03\x28\x81\x83\x02\xbf"
  "\x03\x26\x81\x83\x02\xbe\x03\x24\x81\x83\x02\xbd\x03\x22\x81\x83"
  "\x02\xbc\x03\x20\x81\x83\x02\xbb\x03\x1e\x81\x83\x02\xba\x03\x1c"
  "\x81\x83\x02\xb9\x03\x1a\x81\x83\x02\xb8\x03\x18\x81\x83\x02\xb7"
  "\x03\x16\x81\x83\x02\xb6\x03\x14\x81\x83\x02\xb5\x03\x12\x81\x83"
  "\x02\xb4\x03\x10\x81\x83\x02\xb3\x03\x0e\x81\x83\x02\xb2\x03\x0c"
  "\x81\x83\x02\xb1\x03\x0a\x81\x83\x02\xb0\x03\x08\x81\x83\x02\xaf"
  "\x03\x06\x81\x83\x02\xae\x03\x04\x83\x04\x2b\x6a\x7d\x02\x2c\x03"
  "\x3e\x03\x19\x73\x65\x74\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x7e\x03\x6c\x04\xc6"
  "\x03\x0a\x81\x83\x02\xc5\x03\x08\x81\x83\x02\xc4\x03\x06\x81\x85"
  "\x02\xc3\x03\x04\x84\x06\x09\x14\x7f\x02\x2d\x02\x1b\x6d\x61\x6b"
  "\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x6c\x03\xc9\x03\x08\x81\x87\x02"
  "\xc8\x03\x06\x81\x85\x02\xc7\x03\x04\xfe\x05\x07\x10\x80\x01\x02"
  "\x2e\x03\x66\x02\x52\x03\x76\x03\x26\x04\x5f\x06\xce\x03\x0c\x81"
  "\x87\x02\xcd\x03\x0a\x81\x85\x02\xcc\x03\x08\x81\x83\x02\xcb\x03"
  "\x06\x81\x83\x02\xca\x03\x04\x84\x06\x0b\x19\x5f\x02\x2f\x4e\x03"
  "\x0e\x69\x67\x6e\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x81\x01"
  "\x03\x7c\x03\x66\x03\x3e\x03\x0d\x63\x61\x72\x65\x66\x75\x6c\x6c"
  "\x79\x2d\x70\x61\x82\x01\x03\x26\x04\x3c\x08\xd6\x03\x12\x81\x87"
  "\x02\xd5\x03\x10\x81\x85\x02\xd4\x03\x0e\x81\x83\x02\xd3\x03\x0c"
  "\x81\x83\x02\xd2\x03\x0a\x81\x83\x02\xd1\x03\x08\x81\x83\x02\xd0"
  "\x03\x06\x81\x87\x02\xcf\x03\x04\x85\x08\x11\x24\x83\x01\x02\x30"
  "\x10\x4e\x6f\x74\x20\x61\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x1b\x61\x72\x69\x74\x79\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65"
  "\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x1c\x61\x72\x69"
  "\x74\x79\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x73\x03\x08\x64\x69\x73\x70"
  "\x6c\x61\x79\x03\x0d\x03\x03\x70\x61\x84\x01\x06\xd9\x03\x08\x81"
  "\x83\x02\xd8\x03\x06\x81\x83\x02\xd7\x03\x04\x83\x04\x07\x17\x85"
  "\x01\x02\x31\x05\x3a\x70\x69\x64\x09\x3a\x70\x61\x63\x6b\x61\x67"
  "\x65\x06\x3a\x6e\x61\x6d\x65\x86\x01\x08\x3a\x70\x72\x6f\x6d\x70"
  "\x74\x15\x3a\x6c\x69\x73\x70\x2d\x69\x6d\x70\x6c\x65\x6d\x65\x6e"
  "\x74\x61\x74\x69\x6f\x6e\x0b\x32\x30\x31\x32\x2d\x30\x35\x2d\x30"
  "\x32\x0a\x3a\x65\x6e\x63\x6f\x64\x69\x6e\x67\x10\x3a\x63\x6f\x64"
  "\x69\x6e\x67\x2d\x73\x79\x73\x74\x65\x6d\x73\x0b\x75\x74\x66\x2d"
  "\x38\x2d\x75\x6e\x69\x78\x11\x69\x73\x6f\x2d\x6c\x61\x74\x69\x6e"
  "\x2d\x31\x2d\x75\x6e\x69\x78\x06\x3a\x74\x79\x70\x65\x0f\x4d\x49"
  "\x54\x2f\x47\x4e\x55\x20\x53\x63\x68\x65\x6d\x65\x09\x3a\x76\x65"
  "\x72\x73\x69\x6f\x6e\x08\x72\x65\x6c\x65\x61\x73\x65\x02\x52\x03"
  "\x1d\x67\x65\x74\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x76"
  "\x65\x72\x73\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x03\x6c\x02"
  "\x11\x75\x6e\x69\x78\x2f\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x69"
  "\x64\x05\xde\x03\x0c\x81\x85\x02\xdd\x03\x0a\x81\x83\x02\xdc\x03"
  "\x08\x81\x85\x02\xdb\x03\x06\x81\x83\x02\xda\x03\x04\x83\x04\x0b"
  "\x24\x87\x01\x02\x32\xdf\x03\x04\x84\x06\x03\x88\x01\x02\x33\x6b"
  "\x1a\x73\x77\x61\x6e\x6b\x2d\x65\x78\x74\x72\x61\x2d\x64\x6f\x63"
  "\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x6b\x02\x04\x6e\x04\x71"
  "\x04\x05\x61\x73\x73\x71\x03\x66\x03\x73\x03\x26\x03\x0c\x73\x74"
  "\x72\x69\x6e\x67\x2d\x74\x72\x69\x6d\x03\x84\x01\x09\xe9\x03\x16"
  "\x81\x83\x02\xe8\x03\x14\x81\x8d\x02\xe7\x03\x12\x81\x8b\x02\xe6"
  "\x03\x10\x81\x87\x02\xe5\x03\x0e\x81\x87\x02\xe4\x03\x0c\x81\x89"
  "\x02\xe3\x03\x0a\x81\x89\x02\xe2\x03\x08\x81\x89\x02\xe1\x03\x06"
  "\x81\x85\x02\xe0\x03\x04\x84\x06\x15\x2d\x84\x01\x02\x34\x1a\x17"
  "\x73\x77\x61\x6e\x6b\x3a\x3a\x25\x63\x75\x72\x73\x6f\x72\x2d\x6d"
  "\x61\x72\x6b\x65\x72\x25\x03\x06\x6c\x69\x73\x74\x3f\x04\x07\x6d"
  "\x65\x6d\x62\x65\x72\x04\x04\x61\x6e\x79\x89\x01\x03\x27\x66\x69"
  "\x6e\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d\x62\x65\x66\x6f\x72\x65"
  "\x2d\x73\x77\x61\x6e\x6b\x2d\x63\x75\x72\x73\x6f\x72\x2d\x6d\x61"
  "\x72\x6b\x65\x72\x8a\x01\x05\xee\x03\x0c\x83\x04\xed\x03\x0a\x81"
  "\x83\x02\xec\x03\x08\x81\x83\x02\xeb\x03\x06\x81\x83\x02\xea\x03"
  "\x04\x83\x04\x0b\x19\x8b\x01\x02\x35\x0f\x3a\x6e\x6f\x74\x2d\x61"
  "\x76\x61\x69\x6c\x61\x62\x6c\x65\x02\x74\x8c\x01\x03\x8a\x01\x03"
  "\x6d\x02\x52\x03\x2a\x04\x70\x06\xf4\x03\x0e\x81\x85\x02\xf3\x03"
  "\x0c\x81\x83\x02\xf2\x03\x0a\x81\x83\x02\xf1\x03\x08\x81\x83\x02"
  "\xf0\x03\x06\x81\x87\x02\xef\x03\x04\xfd\x07\x0d\x1e\x6d\x02\x36"
  "\x02\x06\x25\x65\x78\x69\x74\x02\xf5\x03\x04\x83\x04\x03\x8d\x01"
  "\x02\x37\x4e\xf6\x03\x04\x84\x06\x03\x8e\x01\x02\x38\x4e\xf7\x03"
  "\x04\x84\x06\x03\x8f\x01\x02\x39\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x90\x01\xf8\x03\x04\x83\x04\x03\x91\x01\x02\x3a"
  "\x90\x01\xf9\x03\x04\x83\x04\x03\x92\x01\x02\x3b\x0d\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x93\x01\x02\xfa\x03\x04\x84"
  "\x06\x03\x94\x01\x02\x3c\x93\x01\x02\xfb\x03\x04\x84\x06\x03\x93"
  "\x01\x02\x3d\x90\x01\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x95\x01\x02\xff\x03"
  "\x0a\x81\x85\x02\xfe\x03\x08\x81\x83\x02\xfd\x03\x06\x81\x83\x02"
  "\xfc\x03\x04\x83\x04\x09\x12\x96\x01\x02\x3e\x07\x3a\x64\x65\x62"
  "\x75\x67\x0e\x3a\x64\x65\x62\x75\x67\x2d\x72\x65\x74\x75\x72\x6e"
  "\x06\x71\x75\x6f\x74\x65\x97\x01\x4e\x15\x02\x0d\x2a\x73\x6c\x64"
  "\x62\x2d\x73\x74\x61\x74\x65\x2a\x98\x01\x02\x98\x01\x02\x02\x19"
  "\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x2d\x66"
  "\x6f\x72\x2d\x65\x6d\x61\x63\x73\x99\x01\x05\x0f\x04\x10\x6d\x61"
  "\x6b\x65\x2d\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65\x9a\x01\x05"
  "\x05\x0a\x73\x6c\x64\x62\x2d\x69\x6e\x66\x6f\x04\x28\x04\x0a\x73"
  "\x6c\x64\x62\x2d\x6c\x6f\x6f\x70\x9b\x01\x08\x8e\x04\x20\x81\x87"
  "\x02\x8d\x04\x1e\x81\x83\x02\x8c\x04\x1c\x81\x83\x02\x8b\x04\x1a"
  "\x81\x83\x02\x8a\x04\x18\x82\x02\x89\x04\x16\x81\x8d\x02\x88\x04"
  "\x14\x81\x83\x02\x87\x04\x12\x81\x83\x02\x86\x04\x10\x81\x85\x02"
  "\x85\x04\x0e\x81\x83\x02\x84\x04\x0c\x81\x83\x02\x83\x04\x0a\x81"
  "\x83\x02\x82\x04\x08\x81\x89\x02\x81\x04\x06\x81\x87\x02\x80\x04"
  "\x04\x85\x08\x1f\x3c\x9c\x01\x02\x3f\x12\x16\x52\x65\x74\x75\x72"
  "\x6e\x20\x74\x6f\x20\x53\x4c\x44\x42\x20\x6c\x65\x76\x65\x6c\x20"
  "\x02\x2e\x10\x3a\x64\x65\x62\x75\x67\x2d\x61\x63\x74\x69\x76\x61"
  "\x74\x65\x04\x28\x05\x47\x04\x9b\x01\x04\x14\x05\x06\x93\x04\x0c"
  "\x81\x89\x02\x92\x04\x0a\x81\x83\x02\x91\x04\x08\x81\x85\x02\x90"
  "\x04\x06\x81\x85\x02\x8f\x04\x04\x84\x06\x0b\x1f\x02\x40\x04\x20"
  "\x20\x5b\x4e\x02\x5d\x90\x01\x38\x02\x05\x0f\x73\x6c\x64\x62\x2d"
  "\x62\x61\x63\x6b\x74\x72\x61\x63\x65\x9d\x01\x03\x0e\x73\x6c\x64"
  "\x62\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x9e\x01\x03\x0f\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x74\x79\x70\x65\x03\x25\x05\x47"
  "\x03\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x6e\x61\x6d\x65\x07\x9d\x04\x16\x81\x8f\x02\x9c\x04\x14\x81"
  "\x93\x02\x9b\x04\x12\x81\x91\x02\x9a\x04\x10\x81\x8d\x02\x99\x04"
  "\x0e\x81\x8d\x02\x98\x04\x0c\x81\x8d\x02\x97\x04\x0a\x81\x8b\x02"
  "\x96\x04\x08\x81\x89\x02\x95\x04\x06\x81\x87\x02\x94\x04\x04\x85"
  "\x08\x15\x2e\x9f\x01\x02\x41\x04\x3b\x03\x18\x77\x69\x74\x68\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x03\x0d\x72\x65\x73\x74\x61\x72\x74\x2f\x6e\x61\x6d\x65"
  "\x04\x15\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x2d"
  "\x72\x65\x70\x6f\x72\x74\x03\x72\x06\xa3\x04\x0e\x81\x87\x02\xa2"
  "\x04\x0c\x81\x85\x02\xa1\x04\x0a\x81\x85\x02\xa0\x04\x08\x81\x83"
  "\x02\x9f\x04\x06\x83\x04\x9e\x04\x04\x83\x04\x0d\x1c\xa0\x01\x02"
  "\x42\x02\x27\x02\xa4\x04\x04\xfe\x05\x03\xa1\x01\x02\x43\x90\x01"
  "\x98\x01\x02\x03\x12\x02\xa7\x04\x08\x81\x85\x02\xa6\x04\x06\x81"
  "\x85\x02\xa5\x04\x04\xfe\x05\x07\x11\x12\x02\x44\x90\x01\x98\x01"
  "\x02\x03\x0b\x02\xaa\x04\x08\x81\x85\x02\xa9\x04\x06\x81\x85\x02"
  "\xa8\x04\x04\xfe\x05\x07\x11\x0b\x02\x45\x90\x01\x35\x34\x04\x4e"
  "\x49\x4c\x38\x98\x01\x03\x04\x28\x04\x09\x6c\x69\x73\x74\x2d\x72"
  "\x65\x66\x35\x03\x10\x04\xb0\x04\x0e\x81\x87\x02\xaf\x04\x0c\x81"
  "\x8b\x02\xae\x04\x0a\x81\x8b\x02\xad\x04\x08\x81\x87\x02\xac\x04"
  "\x06\x81\x8b\x02\xab\x04\x04\x85\x08\x0d\x1f\x34\x02\x46\x98\x01"
  "\x02\x05\x02\xb2\x04\x06\x81\x87\x02\xb1\x04\x04\x85\x08\x05\x0d"
  "\x10\x02\x47\x90\x01\x98\x01\x02\x05\x9d\x01\x02\xb5\x04\x08\x81"
  "\x87\x02\xb4\x04\x06\x81\x87\x02\xb3\x04\x04\x85\x08\x07\x11\xa2"
  "\x01\x02\x48\x03\x17\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\xa3\x01\x05\x13\x73"
  "\x6c\x64\x62\x2d\x62\x61\x63\x6b\x74\x72\x61\x63\x65\x2d\x61\x75"
  "\x78\xa4\x01\x03\xb7\x04\x06\x81\x87\x02\xb6\x04\x04\x85\x08\x05"
  "\x0d\xa5\x01\x02\x49\x1a\x19\x0e\x66\x72\x61\x6d\x65\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\xa6\x01\x02\x03\x15\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x3e\x66\x72\x61\x6d\x65\x73\xa7\x01"
  "\x04\x3b\x05\x0a\x73\x75\x62\x73\x74\x72\x65\x61\x6d\xa8\x01\x04"
  "\xc1\x04\x16\x81\x87\x02\xc0\x04\x14\x81\x85\x02\xbf\x04\x12\x81"
  "\x89\x02\xbe\x04\x10\x81\x87\x02\xbd\x04\x0e\x81\x85\x02\xbc\x04"
  "\x0c\x81\x8f\x02\xbb\x04\x0a\x81\x8b\x02\xba\x04\x08\x81\x89\x02"
  "\xb9\x04\x06\x81\x87\x02\xb8\x04\x04\x85\x08\x15\x24\xa9\x01\x02"
  "\x4a\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f"
  "\x6e\x73\xaa\x01\x14\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x02\x07\x73\x74\x72\x65\x61\x6d\xab\x01\x03\xab\x01\x03\x20\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x70\x6c\x2d"
  "\x65\x76\x61\x6c\x2d\x62\x6f\x75\x6e\x64\x61\x72\x79\x3f\x03\x81"
  "\x01\x03\x7c\x03\x1c\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x6e\x65\x78\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x08\xca\x04\x14\x81\x83\x02\xc9\x04\x12\x81\x83\x02\xc8\x04\x10"
  "\x81\x83\x02\xc7\x04\x0e\x81\x83\x02\xc6\x04\x0c\x81\x83\x02\xc5"
  "\x04\x0a\x81\x83\x02\xc4\x04\x08\x81\x83\x02\xc3\x04\x06\x81\x83"
  "\x02\xc2\x04\x04\x83\x04\x13\x28\xac\x01\x02\x4b\x0e\x42\x6f\x67"
  "\x75\x73\x20\x66\x72\x61\x6d\x65\x3a\x20\x02\x20\x03\x7c\x03\x51"
  "\x03\x25\x06\x47\x04\x0c\x70\x72\x69\x6e\x74\x2d\x66\x72\x61\x6d"
  "\x65\x7c\x06\xce\x04\x0a\x81\x85\x02\xcd\x04\x08\x81\x89\x02\xcc"
  "\x04\x06\x81\x83\x02\xcb\x04\x04\x83\x04\x09\x19\x25\x02\x4c\x02"
  "\x02\x3b\x16\x3b\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x17\x3b\x75\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f\x64\x65\x1e"
  "\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x73\x2d\x62\x79\x2d\x6e\x61\x6d\x65\x3f\x2a\xad\x01\x02"
  "\xad\x01\x02\x03\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\xad"
  "\x01\x03\x1e\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x3f"
  "\x03\x25\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f"
  "\x2f\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x3f\x04\x2d\x05\x0f\x03\x16\x64\x65\x62\x75"
  "\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x6e\x6f\x69\x73\x65"
  "\x3f\x03\x15\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x6e\x6f\x69\x73\x65\x04\x03\x23\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x03\x09\x75\x6e"
  "\x73\x79\x6e\x74\x61\x78\x0b\xdf\x04\x24\x81\x8d\x02\xde\x04\x22"
  "\x81\x89\x02\xdd\x04\x20\x81\x85\x02\xdc\x04\x1e\x81\x85\x02\xdb"
  "\x04\x1c\x81\x83\x02\xda\x04\x1a\x81\x89\x02\xd9\x04\x18\x81\x83"
  "\x02\xd8\x04\x16\x81\x85\x02\xd7\x04\x14\x81\x83\x02\xd6\x04\x12"
  "\x81\x83\x02\xd5\x04\x10\x81\x83\x02\xd4\x04\x0e\x81\x89\x02\xd3"
  "\x04\x0c\x81\x89\x02\xd2\x04\x0a\x81\x89\x02\xd1\x04\x08\x81\x89"
  "\x02\xd0\x04\x06\x81\x85\x02\xcf\x04\x04\x84\x06\x23\x44\x2d\x02"
  "\x4d\x03\x0b\x73\x74\x72\x65\x61\x6d\x2d\x63\x61\x72\x03\x0b\x73"
  "\x74\x72\x65\x61\x6d\x2d\x63\x64\x72\x03\x0d\x73\x74\x72\x65\x61"
  "\x6d\x2d\x6e\x75\x6c\x6c\x3f\x03\x08\x72\x65\x76\x65\x72\x73\x65"
  "\x05\xe9\x04\x16\x81\x8d\x02\xe8\x04\x14\x81\x8d\x02\xe7\x04\x12"
  "\x81\x8d\x02\xe6\x04\x10\x81\x8d\x02\xe5\x04\x0e\x81\x8d\x02\xe4"
  "\x04\x0c\x81\x8d\x02\xe3\x04\x0a\x81\x8d\x02\xe2\x04\x08\x81\x8d"
  "\x02\xe1\x04\x06\x81\x8d\x02\xe0\x04\x04\x85\x08\x15\x23\x02\x4e"
  "\x10\x66\x72\x61\x6d\x65\x2d\x76\x61\x72\x3e\x65\x6c\x69\x73\x70"
  "\xae\x01\x02\x03\x0f\x73\x6c\x64\x62\x2d\x67\x65\x74\x2d\x66\x72"
  "\x61\x6d\x65\xaf\x01\x04\x3b\x03\x0b\x66\x72\x61\x6d\x65\x2d\x76"
  "\x61\x72\x73\xb0\x01\x04\xee\x04\x0c\x81\x89\x02\xed\x04\x0a\x81"
  "\x89\x02\xec\x04\x08\x81\x87\x02\xeb\x04\x06\x81\x85\x02\xea\x04"
  "\x04\x84\x06\x0b\x18\xb1\x01\x02\x4f\x03\xad\x01\x03\x43\x03\x17"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3e\x66\x72\x61\x6d"
  "\x65\x2d\x76\x61\x72\x73\xad\x01\x04\xf2\x04\x0a\x81\x87\x02\xf1"
  "\x04\x08\x85\x08\xf0\x04\x06\x81\x83\x02\xef\x04\x04\x83\x04\x09"
  "\x14\xb2\x01\x02\x50\x03\x17\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x03\x15\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62\x69\x6e\x64\x69"
  "\x6e\x67\x73\xb3\x01\x03\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f\xb4\x01"
  "\x03\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x61"
  "\x72\x65\x6e\x74\xb5\x01\x04\x07\x61\x70\x70\x65\x6e\x64\x06\xf9"
  "\x04\x10\x81\x87\x02\xf8\x04\x0e\x81\x85\x02\xf7\x04\x0c\x81\x87"
  "\x02\xf6\x04\x0a\x81\x83\x02\xf5\x04\x08\x81\x83\x02\xf4\x04\x06"
  "\x81\x83\x02\xf3\x04\x04\x83\x04\x0f\x1e\xb6\x01\x02\x51\x86\x01"
  "\x1a\x07\x3a\x76\x61\x6c\x75\x65\x86\x01\x04\x3a\x69\x64\xb7\x01"
  "\x0e\x7b\x75\x6e\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x7d\x19\x03"
  "\x2a\x03\x07\x2d\x3e\x6c\x69\x6e\x65\xb8\x01\x03\x80\x05\x10\x81"
  "\x85\x02\xff\x04\x0e\x81\x85\x02\xfe\x04\x0c\x81\x85\x02\xfd\x04"
  "\x0a\x81\x87\x02\xfc\x04\x08\x81\x85\x02\xfb\x04\x06\x83\x04\xfa"
  "\x04\x04\x81\x83\x02\x0f\x1f\xb9\x01\x02\x52\x90\x01\x98\x01\x02"
  "\x03\xa3\x01\x04\x0b\x73\x74\x72\x65\x61\x6d\x2d\x72\x65\x66\x03"
  "\xa7\x01\x04\x85\x05\x0c\x81\x85\x02\x84\x05\x0a\x81\x83\x02\x83"
  "\x05\x08\x81\x87\x02\x82\x05\x06\x81\x87\x02\x81\x05\x04\x83\x04"
  "\x0b\x19\xa3\x01\x02\x53\x1a\x02\x19\x03\xb0\x01\x04\x35\x03\x8a"
  "\x05\x0c\x81\x89\x02\x89\x05\x0a\x81\x83\x02\x88\x05\x08\x81\x83"
  "\x02\x87\x05\x06\x81\x85\x02\x86\x05\x04\x84\x06\x0b\x16\x90\x01"
  "\x02\x54\x02\x10\x72\x65\x73\x65\x74\x2d\x69\x6e\x73\x70\x65\x63"
  "\x74\x6f\x72\x35\x03\xaf\x01\x03\x0f\x69\x6e\x73\x70\x65\x63\x74"
  "\x2d\x6f\x62\x6a\x65\x63\x74\xba\x01\x04\x10\x66\x72\x61\x6d\x65"
  "\x2d\x76\x61\x72\x2d\x76\x61\x6c\x75\x65\xbb\x01\x05\x8e\x05\x0a"
  "\x81\x8b\x02\x8d\x05\x08\x81\x87\x02\x8c\x05\x06\x81\x87\x02\x8b"
  "\x05\x04\x85\x08\x09\x15\xbc\x01\x02\x55\x09\x73\x74\x72\x69\x6e"
  "\x67\x3c\x3f\x02\x03\x3e\x03\x16\x6c\x6f\x6e\x67\x65\x73\x74\x2d"
  "\x63\x6f\x6d\x6d\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\xbd\x01\x04"
  "\x10\x61\x6c\x6c\x2d\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e\x73"
  "\xbe\x01\x04\x05\x73\x6f\x72\x74\x05\x94\x05\x0e\x81\x85\x02\x93"
  "\x05\x0c\x81\x87\x02\x92\x05\x0a\x81\x83\x02\x91\x05\x08\x81\x89"
  "\x02\x90\x05\x06\x81\x87\x02\x8f\x05\x04\x85\x08\x0d\x1c\xbf\x01"
  "\x02\x56\x02\x1f\x2a\x70\x61\x72\x73\x65\x72\x2d\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73"
  "\x3f\x2a\x04\x71\x03\x10\x73\x74\x72\x69\x6e\x67\x2d\x64\x6f\x77"
  "\x6e\x63\x61\x73\x65\x03\x19\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d"
  "\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x03"
  "\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x04\x13\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62\x6f\x75\x6e\x64\x3f"
  "\x04\x41\x07\x9d\x05\x14\x81\x87\x02\x9c\x05\x12\x81\x85\x02\x9b"
  "\x05\x10\x81\x85\x02\x9a\x05\x0e\x81\x85\x02\x99\x05\x0c\x81\x85"
  "\x02\x98\x05\x0a\x81\x89\x02\x97\x05\x08\x81\x87\x02\x96\x05\x06"
  "\x81\x89\x02\x95\x05\x04\x84\x06\x13\x26\x41\x02\x57\x01\x05\x07"
  "\x72\x65\x64\x75\x63\x65\x04\x15\x73\x74\x72\x69\x6e\x67\x2d\x6d"
  "\x61\x74\x63\x68\x2d\x66\x6f\x72\x77\x61\x72\x64\x05\x4d\x04\xa0"
  "\x05\x08\x81\x87\x02\x9f\x05\x06\x84\x06\x9e\x05\x04\x83\x04\x07"
  "\x13\x4d\x02\x58\x0c\x3a\x64\x65\x73\x69\x67\x6e\x61\x74\x6f\x72"
  "\x02\x20\x07\x3a\x6d\x61\x63\x72\x6f\x4e\x06\x6d\x61\x63\x72\x6f"
  "\x0a\x3a\x76\x61\x72\x69\x61\x62\x6c\x65\xc0\x01\x4e\x0b\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x08\x75\x6e\x62\x6f\x75\x6e\x64"
  "\x12\x3a\x67\x65\x6e\x65\x72\x69\x63\x2d\x66\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x0a\x3a\x66\x75\x6e\x63\x74\x69\x6f\x6e\xc0\x01\x03\x62"
  "\x03\x3e\x05\x0d\x61\x70\x72\x6f\x70\x6f\x73\x2d\x6c\x69\x73\x74"
  "\x04\x6e\x04\x3b\x03\x73\x05\x47\x04\x71\x03\x13\x67\x65\x6e\x65"
  "\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x0a\xaa"
  "\x05\x16\x81\x87\x02\xa9\x05\x14\x81\x87\x02\xa8\x05\x12\x81\x85"
  "\x02\xa7\x05\x10\x81\x87\x02\xa6\x05\x0e\x81\x87\x02\xa5\x05\x0c"
  "\x81\x8d\x02\xa4\x05\x0a\x81\x85\x02\xa3\x05\x08\x81\x8b\x02\xa2"
  "\x05\x06\x81\x8d\x02\xa1\x05\x04\x87\x0c\x15\x37\xc0\x01\x02\x59"
  "\x02\x0d\x61\x6c\x6c\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x03\x21"
  "\x04\x3b\x03\x6c\x05\xae\x05\x0a\x81\x83\x02\xad\x05\x08\x81\x85"
  "\x02\xac\x05\x06\x83\x04\xab\x05\x04\xfe\x05\x09\x15\x71\x02\x5a"
  "\x02\x07\x69\x73\x74\x61\x74\x65\x3b\x02\xb0\x05\x06\x81\x81\x02"
  "\xaf\x05\x04\x82\x02\x05\x0c\x21\x02\x5b\x02\x35\x02\x52\x03\xba"
  "\x01\x03\x26\x04\x3c\x06\xb5\x05\x0c\x81\x89\x02\xb4\x05\x0a\x81"
  "\x87\x02\xb3\x05\x08\x81\x85\x02\xb2\x05\x06\x81\x85\x02\xb1\x05"
  "\x04\x84\x06\x0b\x19\x3c\x02\x5c\x3b\x02\x3b\x02\x02\x1b\x6d\x61"
  "\x6b\x65\x2d\x73\x74\x72\x6f\x6e\x67\x2d\x65\x71\x76\x2d\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x03\x08\x69\x6e\x73\x70\x65\x63"
  "\x74\xc1\x01\x07\x0c\x6d\x61\x6b\x65\x2d\x69\x73\x74\x61\x74\x65"
  "\xc2\x01\x03\x0e\x69\x73\x74\x61\x74\x65\x2d\x3e\x65\x6c\x69\x73"
  "\x70\xc3\x01\x04\x11\x73\x65\x74\x2d\x69\x73\x74\x61\x74\x65\x2d"
  "\x6e\x65\x78\x74\x21\xc4\x01\x06\xbe\x05\x14\x81\x8b\x02\xbd\x05"
  "\x12\x81\x89\x02\xbc\x05\x10\x81\x89\x02\xbb\x05\x0e\x81\x89\x02"
  "\xba\x05\x0c\x81\x89\x02\xb9\x05\x0a\x81\x87\x02\xb8\x05\x08\x81"
  "\x85\x02\xb7\x05\x06\x81\x83\x02\xb6\x05\x04\x83\x04\x13\x25\xc5"
  "\x01\x02\x5d\x07\x3a\x74\x69\x74\x6c\x65\xb7\x01\x09\x3a\x63\x6f"
  "\x6e\x74\x65\x6e\x74\xf5\x03\x03\x0f\x69\x73\x74\x61\x74\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x6e\x74\xb7\x01\x03\x0d\x69\x73\x74\x61\x74"
  "\x65\x2d\x70\x61\x72\x74\x73\xc6\x01\x03\x0e\x69\x73\x74\x61\x74"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\xc7\x01\x06\x0e\x70\x72\x65\x70"
  "\x61\x72\x65\x2d\x72\x61\x6e\x67\x65\xc8\x01\x03\xb8\x01\x04\x0d"
  "\x61\x73\x73\x69\x67\x6e\x2d\x69\x6e\x64\x65\x78\xc9\x01\x07\xc7"
  "\x05\x14\x81\x89\x02\xc6\x05\x12\x81\x87\x02\xc5\x05\x10\x81\x85"
  "\x02\xc4\x05\x0e\x81\x8b\x02\xc3\x05\x0c\x81\x87\x02\xc2\x05\x0a"
  "\x81\x85\x02\xc1\x05\x08\x81\x89\x02\xc0\x05\x06\x81\x83\x02\xbf"
  "\x05\x04\x83\x04\x13\x29\xca\x01\x02\x5e\x03\x11\x68\x61\x73\x68"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x63\x6f\x75\x6e\x74\x05\x10\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x03\xca\x05"
  "\x08\x81\x87\x02\xc9\x05\x06\x81\x85\x02\xc8\x05\x04\x84\x06\x07"
  "\x0f\xcb\x01\x02\x5f\xe9\x07\x05\xa8\x01\x04\x0e\x70\x72\x65\x70"
  "\x61\x72\x65\x2d\x70\x61\x72\x74\x73\xcc\x01\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x04\xd4\x05\x16\x81\x8d\x02\xd3\x05\x14\x81\x8f\x02"
  "\xd2\x05\x12\x81\x8f\x02\xd1\x05\x10\x81\x91\x02\xd0\x05\x0e\x81"
  "\x8f\x02\xcf\x05\x0c\x81\x8f\x02\xce\x05\x0a\x81\x8f\x02\xcd\x05"
  "\x08\x81\x8b\x02\xcc\x05\x06\x81\x89\x02\xcb\x05\x04\x86\x0a\x15"
  "\x21\xcd\x01\x02\x60\x03\x3a\x20\x02\x0a\x86\x01\x0e\x49\x6e\x76"
  "\x61\x6c\x69\x64\x20\x70\x61\x72\x74\x3a\x30\x19\x05\x6c\x69\x6e"
  "\x65\x86\x01\x1a\x7b\x1e\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d"
  "\x61\x70\x04\x0d\x03\x72\x04\xc9\x01\x03\xb8\x01\x04\x47\x07\xdf"
  "\x05\x18\x81\x89\x02\xde\x05\x16\x81\x89\x02\xdd\x05\x14\x81\x87"
  "\x02\xdc\x05\x12\x81\x85\x02\xdb\x05\x10\x81\x87\x02\xda\x05\x0e"
  "\x81\x87\x02\xd9\x05\x0c\x81\x85\x02\xd8\x05\x0a\x81\x83\x02\xd7"
  "\x05\x08\x81\x85\x02\xd6\x05\x06\x81\x85\x02\xd5\x05\x04\x84\x06"
  "\x17\x35\x30\x02\x61\x0d\x6e\x6f\x2d\x73\x75\x63\x68\x2d\x70\x61"
  "\x72\x74\x3b\x02\x03\xc6\x01\x03\xba\x01\x05\x0f\x68\x61\x73\x68"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x04\xe3\x05\x0a\x81\x8b"
  "\x02\xe2\x05\x08\x81\x85\x02\xe1\x05\x06\x81\x8d\x02\xe0\x05\x04"
  "\x84\x06\x09\x16\x0d\x02\x62\x02\x35\x02\xe4\x05\x04\x83\x04\x03"
  "\xce\x01\x02\x63\x4e\x3b\x02\x3b\x02\x03\x10\x69\x73\x74\x61\x74"
  "\x65\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\xcf\x01\x03\xc3\x01\x03"
  "\xeb\x05\x10\x81\x83\x02\xea\x05\x0e\x81\x83\x02\xe9\x05\x0c\x81"
  "\x83\x02\xe8\x05\x0a\x81\x85\x02\xe7\x05\x08\x81\x83\x02\xe6\x05"
  "\x06\x81\x85\x02\xe5\x05\x04\x83\x04\x0f\x1c\xd0\x01\x02\x64\x4e"
  "\x3b\x02\x3b\x02\x03\x0c\x69\x73\x74\x61\x74\x65\x2d\x6e\x65\x78"
  "\x74\xd1\x01\x03\xc3\x01\x03\xf2\x05\x10\x81\x83\x02\xf1\x05\x0e"
  "\x81\x83\x02\xf0\x05\x0c\x81\x83\x02\xef\x05\x0a\x81\x85\x02\xee"
  "\x05\x08\x81\x83\x02\xed\x05\x06\x81\x85\x02\xec\x05\x04\x83\x04"
  "\x0f\x1c\xd2\x01\x02\x65\x3b\x02\x03\xc6\x01\x03\xb7\x01\x06\xc8"
  "\x01\x04\xf7\x05\x0c\x81\x89\x02\xf6\x05\x0a\x81\x8b\x02\xf5\x05"
  "\x08\x81\x87\x02\xf4\x05\x06\x81\x89\x02\xf3\x05\x04\x85\x08\x0b"
  "\x17\xd3\x01\x02\x66\x86\x01\xf8\x05\x04\x84\x06\x03\x86\x01\x02"
  "\x67\x03\x43\x03\x0f\x69\x6e\x73\x70\x65\x63\x74\x2d\x76\x65\x63"
  "\x74\x6f\x72\x43\x03\x73\x03\x14\x69\x6e\x73\x70\x65\x63\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x73\x03\x15\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x3f\x03\x12\x69\x6e\x73\x70\x65\x63\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\xd4\x01\x03\x0d\x69\x6e\x73\x70\x65\x63\x74"
  "\x2d\x70\x61\x69\x72\xd5\x01\x03\x10\x70\x72\x6f\x62\x61\x62\x6c"
  "\x79\x2d\x73\x63\x6f\x64\x65\x3f\xd6\x01\x03\x13\x69\x6e\x73\x70"
  "\x65\x63\x74\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\xd7\x01"
  "\x03\x11\x69\x6e\x73\x70\x65\x63\x74\x2d\x66\x61\x6c\x6c\x62\x61"
  "\x63\x6b\xd8\x01\x03\x0e\x69\x6e\x73\x70\x65\x63\x74\x2d\x73\x63"
  "\x6f\x64\x65\xd9\x01\x0c\xfd\x05\x0c\x81\x83\x02\xfc\x05\x0a\x81"
  "\x83\x02\xfb\x05\x08\x81\x83\x02\xfa\x05\x06\x81\x83\x02\xf9\x05"
  "\x04\x83\x04\x0b\x25\xda\x01\x02\x68\x07\x4f\x62\x6a\x65\x63\x74"
  "\xaa\x01\x14\x04\x06\x69\x6c\x69\x6e\x65\xdb\x01\x02\xab\x01\x03"
  "\x81\x06\x0a\x81\x85\x02\x80\x06\x08\x82\x02\xff\x05\x06\x81\x83"
  "\x02\xfe\x05\x04\x83\x04\x09\x15\xdc\x01\x02\x69\x19\x7b\x63\x69"
  "\x72\x63\x75\x6c\x61\x72\x20\x6c\x69\x73\x74\x20\x64\x65\x74\x65"
  "\x63\x74\x65\x64\x7d\x05\x74\x61\x69\x6c\xaa\x01\x14\x04\x63\x64"
  "\x72\x04\x63\x61\x72\x1a\x19\x04\xdb\x01\x02\xab\x01\x04\xab\x01"
  "\x03\xab\x01\x03\x05\x6f\x64\x64\x3f\x06\x94\x06\x28\x81\x87\x02"
  "\x93\x06\x26\x81\x87\x02\x92\x06\x24\x81\x89\x02\x91\x06\x22\x81"
  "\x89\x02\x90\x06\x20\x81\x89\x02\x8f\x06\x1e\x81\x83\x02\x8e\x06"
  "\x1c\x81\x83\x02\x8d\x06\x1a\x81\x8b\x02\x8c\x06\x18\x81\x87\x02"
  "\x8b\x06\x16\x81\x87\x02\x8a\x06\x14\x81\x85\x02\x89\x06\x12\x81"
  "\x89\x02\x88\x06\x10\x81\x87\x02\x87\x06\x0e\x81\x87\x02\x86\x06"
  "\x0c\x81\x83\x02\x85\x06\x0a\x81\x85\x02\x84\x06\x08\x81\x83\x02"
  "\x83\x06\x06\x81\x83\x02\x82\x06\x04\x83\x04\x27\x3f\xdd\x01\x02"
  "\x6a\x02\x7b\x0b\x28\x3c\x70\x61\x72\x65\x6e\x74\x3e\x29\x02\x7d"
  "\x19\x1a\x0a\x28\x70\x61\x63\x6b\x61\x67\x65\x29\xaa\x01\x14\x03"
  "\x45\x03\xb3\x01\x04\xdb\x01\x03\xb4\x01\x02\xab\x01\x03\xab\x01"
  "\x03\xb5\x01\x04\x6e\x05\x47\x0a\xab\x06\x30\x81\x89\x02\xaa\x06"
  "\x2e\x81\x87\x02\xa9\x06\x2c\x81\x87\x02\xa8\x06\x2a\x81\x85\x02"
  "\xa7\x06\x28\x81\x85\x02\xa6\x06\x26\x81\x83\x02\xa5\x06\x24\x81"
  "\x8b\x02\xa4\x06\x22\x81\x87\x02\xa3\x06\x20\x81\x87\x02\xa2\x06"
  "\x1e\x81\x87\x02\xa1\x06\x1c\x81\x83\x02\xa0\x06\x1a\x81\x89\x02"
  "\x9f\x06\x18\x81\x85\x02\x9e\x06\x16\x81\x85\x02\x9d\x06\x14\x81"
  "\x85\x02\x9c\x06\x12\x81\x87\x02\x9b\x06\x10\x81\x85\x02\x9a\x06"
  "\x0e\x81\x83\x02\x99\x06\x0c\x81\x85\x02\x98\x06\x0a\x81\x87\x02"
  "\x97\x06\x08\x81\x85\x02\x96\x06\x06\x81\x83\x02\x95\x06\x04\x83"
  "\x04\x2f\x4e\xb5\x01\x02\x6b\x0c\xaa\x01\x14\x0e\x76\x65\x63\x74"
  "\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x02\xab\x01\x04\xdb\x01\x03"
  "\xb4\x06\x14\x81\x87\x02\xb3\x06\x12\x81\x85\x02\xb2\x06\x10\x81"
  "\x83\x02\xb1\x06\x0e\x81\x89\x02\xb0\x06\x0c\x81\x85\x02\xaf\x06"
  "\x0a\x81\x85\x02\xae\x06\x08\x81\x85\x02\xad\x06\x06\x81\x83\x02"
  "\xac\x06\x04\x83\x04\x13\x20\xb4\x01\x02\x6c\x04\x65\x6e\x76\x04"
  "\x64\x6f\x63\x06\x62\x6c\x6f\x63\x6b\x07\x6c\x61\x6d\x62\x64\x61"
  "\x05\x6e\x61\x6d\x65\x22\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x64\x6f\x63\x75\x6d\x65"
  "\x6e\x74\x61\x74\x69\x6f\x6e\x06\x61\x72\x69\x74\x79\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x61\x72\x69\x74\x79\x03\x15\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x14\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x03\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x04\xdb\x01\x03"
  "\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f"
  "\x62\x6c\x6f\x63\x6b\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x03\x10\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x61\x72\x69\x74\x79\x03\x66\x05\xab\x01\x04\xab\x01"
  "\x03\x81\x01\x03\x67\x03\x6f\x0e\xc8\x06\x2a\x81\x83\x02\xc7\x06"
  "\x28\x81\x89\x02\xc6\x06\x26\x81\x87\x02\xc5\x06\x24\x81\x83\x02"
  "\xc4\x06\x22\x81\x85\x02\xc3\x06\x20\x81\x87\x02\xc2\x06\x1e\x81"
  "\x85\x02\xc1\x06\x1c\x81\x89\x02\xc0\x06\x1a\x81\x87\x02\xbf\x06"
  "\x18\x81\x85\x02\xbe\x06\x16\x81\x83\x02\xbd\x06\x14\x81\x85\x02"
  "\xbc\x06\x12\x81\x83\x02\xbb\x06\x10\x81\x87\x02\xba\x06\x0e\x81"
  "\x85\x02\xb9\x06\x0c\x81\x83\x02\xb8\x06\x0a\x81\x85\x02\xb7\x06"
  "\x08\x81\x83\x02\xb6\x06\x06\x81\x83\x02\xb5\x06\x04\x83\x04\x29"
  "\x4f\xb3\x01\x02\x6d\x04\x65\x6e\x76\x12\x73\x79\x73\x74\x65\x6d"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0a\x64\x65\x62\x75"
  "\x67\x69\x6e\x66\x6f\xaa\x01\x14\x25\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x62\x79\x74"
  "\x65\x73\x2d\x70\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x02\x03\x24"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2d\x73\x74"
  "\x61\x72\x74\x03\x22\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f"
  "\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x73\x2d\x65\x6e\x64\x03\x23\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62\x75"
  "\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x03\x66\x04\xdb\x01\x03"
  "\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x03\x67\x05\xab\x01\x09\xd9\x06\x24\x81\x89\x02\xd8\x06\x22\x81"
  "\x87\x02\xd7\x06\x20\x81\x87\x02\xd6\x06\x1e\x81\x83\x02\xd5\x06"
  "\x1c\x81\x87\x02\xd4\x06\x1a\x81\x85\x02\xd3\x06\x18\x81\x85\x02"
  "\xd2\x06\x16\x81\x83\x02\xd1\x06\x14\x81\x89\x02\xd0\x06\x12\x81"
  "\x85\x02\xcf\x06\x10\x81\x87\x02\xce\x06\x0e\x81\x85\x02\xcd\x06"
  "\x0c\x81\x85\x02\xcc\x06\x0a\x81\x85\x02\xcb\x06\x08\x81\x85\x02"
  "\xca\x06\x06\x81\x85\x02\xc9\x06\x04\x83\x04\x23\x3f\xaa\x01\x02"
  "\x6e\x03\x5b\x03\xab\x01\x03\xdb\x06\x06\x81\x83\x02\xda\x06\x04"
  "\x83\x04\x05\x0d\x81\x01\x02\x6f\x11\x73\x63\x6f\x64\x65\x2d\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x73\x6f\x02\x04\x89\x01\x02\xde"
  "\x06\x08\x81\x85\x02\xdd\x06\x06\x81\x85\x02\xdc\x06\x04\x83\x04"
  "\x07\x0f\x89\x01\x02\x70\x04\x63\x64\x72\x04\x63\x61\x72\x04\xdb"
  "\x01\x04\xab\x01\x03\xe1\x06\x08\x81\x85\x02\xe0\x06\x06\x81\x83"
  "\x02\xdf\x06\x04\x83\x04\x07\x11\xab\x01\x02\x71\x4e\xe2\x06\x04"
  "\x83\x04\x03\x6e\x02\x72\x03\x0d\x65\x6c\x69\x73\x70\x2d\x66\x61"
  "\x6c\x73\x65\x3f\x67\x02\xe4\x06\x06\x81\x83\x02\xe3\x06\x04\x83"
  "\x04\x05\x0c\x66\x02\x73\x04\x20\x2e\x2e\x19\x1a\x65\x04\x2a\x04"
  "\x75\x03\xe8\x06\x0a\x81\x83\x02\xe7\x06\x08\x81\x83\x02\xe6\x06"
  "\x06\x81\x83\x02\xe5\x06\x04\x83\x04\x09\x15\x75\x02\x74\x03\x53"
  "\x03\x54\x03\xea\x06\x06\x81\x83\x02\xe9\x06\x04\x83\x04\x05\x0d"
  "\x54\x02\x75\x02\x0b\x65\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x6c\x69\x73\x74\x2d\x62\x72\x65\x61\x64\x74\x68\x2d\x6c\x69"
  "\x6d\x69\x74\x2a\x53\x1c\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x6c\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x2d\x6c\x69\x6d\x69\x74"
  "\x2a\x47\x1f\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x6c\x69\x6d\x69\x74"
  "\x2a\x45\x04\x53\x47\x45\x04\x03\x51\x05\x0f\x04\x76\x04\xf7\x06"
  "\x1c\x81\x83\x02\xf6\x06\x1a\x81\x85\x02\xf5\x06\x18\x81\x83\x02"
  "\xf4\x06\x16\x81\x83\x02\xf3\x06\x14\x81\x85\x02\xf2\x06\x12\x81"
  "\x83\x02\xf1\x06\x10\x81\x83\x02\xf0\x06\x0e\x81\x85\x02\xef\x06"
  "\x0c\x81\x83\x02\xee\x06\x0a\x81\x83\x02\xed\x06\x08\x81\x83\x02"
  "\xec\x06\x06\x81\x85\x02\xeb\x06\x04\x83\x04\x1b\x31\x76\x02\x76"
  "\x4e\x7b\x1e\x97\x01\x8c\x01\x20\x01\x3b\x0b\x73\x74\x72\x69\x6e"
  "\x67\x2d\x72\x65\x66\x03\x72\x02\x81\x07\x16\x81\x83\x02\x80\x07"
  "\x14\x81\x83\x02\xff\x06\x12\x83\x04\xfe\x06\x10\x81\x83\x02\xfd"
  "\x06\x0e\x81\x83\x02\xfc\x06\x0c\x81\x83\x02\xfb\x06\x0a\x81\x83"
  "\x02\xfa\x06\x08\x81\x83\x02\xf9\x06\x06\x81\x83\x02\xf8\x06\x04"
  "\x81\x83\x02\x15\x28\x8c\x01\x76\x7b\x7b\x12\x73\x77\x61\x6e\x6b"
  "\x3a\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e\x73\x39\x8c\x01\x12"
  "\x5b\x76\x04\x26\x54\x04\xb8\x01\x75\x04\x62\x66\x04\x67\x6e\x04"
  "\x14\x69\x6e\x73\x70\x65\x63\x74\x2d\x73\x79\x73\x74\x65\x6d\x2d"
  "\x70\x61\x69\x72\xab\x01\x04\x6f\xd6\x01\x89\x01\x04\xd9\x01\x81"
  "\x01\x04\xd7\x01\xaa\x01\x04\xd4\x01\xb3\x01\x04\x43\xb4\x01\x04"
  "\x73\xb5\x01\x04\xd5\x01\xdd\x01\x04\xd8\x01\xdc\x01\x04\xc1\x01"
  "\xda\x01\x04\xdb\x01\x86\x01\x04\x16\x73\x77\x61\x6e\x6b\x3a\x69"
  "\x6e\x73\x70\x65\x63\x74\x6f\x72\x2d\x72\x61\x6e\x67\x65\xd3\x01"
  "\x04\x15\x73\x77\x61\x6e\x6b\x3a\x69\x6e\x73\x70\x65\x63\x74\x6f"
  "\x72\x2d\x6e\x65\x78\x74\xd2\x01\x04\x14\x73\x77\x61\x6e\x6b\x3a"
  "\x69\x6e\x73\x70\x65\x63\x74\x6f\x72\x2d\x70\x6f\x70\xd0\x01\x04"
  "\x15\x73\x77\x61\x6e\x6b\x3a\x71\x75\x69\x74\x2d\x69\x6e\x73\x70"
  "\x65\x63\x74\x6f\x72\xce\x01\x04\x17\x73\x77\x61\x6e\x6b\x3a\x69"
  "\x6e\x73\x70\x65\x63\x74\x2d\x6e\x74\x68\x2d\x70\x61\x72\x74\x0d"
  "\x04\xcc\x01\x30\x04\xc8\x01\xcd\x01\x04\xc9\x01\xcb\x01\x04\xc3"
  "\x01\xca\x01\x04\xba\x01\xc5\x01\x04\x15\x73\x77\x61\x6e\x6b\x3a"
  "\x69\x6e\x69\x74\x2d\x69\x6e\x73\x70\x65\x63\x74\x6f\x72\x3c\x04"
  "\x35\x21\x04\xb7\x01\x3b\xcf\x01\x08\x63\x6f\x6e\x74\x65\x6e\x74"
  "\xdd\x01\xc4\x01\x09\x70\x72\x65\x76\x69\x6f\x75\x73\xdc\x01\xd1"
  "\x01\xc6\x01\x05\x6e\x65\x78\x74\xdb\x01\xc7\x01\x06\x70\x61\x72"
  "\x74\x73\xda\x01\x08\x69\x73\x74\x61\x74\x65\x3f\x07\x6f\x62\x6a"
  "\x65\x63\x74\xd9\x01\xc2\x01\x09\x3c\x69\x73\x74\x61\x74\x65\x3e"
  "\xd8\x01\xd9\x01\xda\x01\xdb\x01\xdc\x01\xdd\x01\x1d\x73\x77\x61"
  "\x6e\x6b\x3a\x6c\x69\x73\x74\x2d\x61\x6c\x6c\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x2d\x6e\x61\x6d\x65\x73\x71\x04\x1d\x73\x77\x61\x6e"
  "\x6b\x3a\x61\x70\x72\x6f\x70\x6f\x73\x2d\x6c\x69\x73\x74\x2d\x66"
  "\x6f\x72\x2d\x65\x6d\x61\x63\x73\xc0\x01\x04\xbd\x01\x4d\x04\xbe"
  "\x01\x41\x04\x19\x73\x77\x61\x6e\x6b\x3a\x73\x69\x6d\x70\x6c\x65"
  "\x2d\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e\x73\xdd\x01\xbf\x01"
  "\x04\x18\x73\x77\x61\x6e\x6b\x3a\x69\x6e\x73\x70\x65\x63\x74\x2d"
  "\x66\x72\x61\x6d\x65\x2d\x76\x61\x72\xbc\x01\x04\xbb\x01\x90\x01"
  "\x04\xaf\x01\xa3\x01\x04\xae\x01\xb9\x01\x06\xad\x01\xb6\x01\x04"
  "\xb0\x01\xb2\x01\x04\x22\x73\x77\x61\x6e\x6b\x3a\x66\x72\x61\x6d"
  "\x65\x2d\x6c\x6f\x63\x61\x6c\x73\x2d\x61\x6e\x64\x2d\x63\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x73\xb1\x01\x04\xa8\x01\x04\x7c\x2d\x04"
  "\xa6\x01\x25\x04\xa7\x01\xac\x01\x04\xa4\x01\xa9\x01\x04\x9d\x01"
  "\xa5\x01\x04\x10\x73\x77\x61\x6e\x6b\x3a\x62\x61\x63\x6b\x74\x72"
  "\x61\x63\x65\xa2\x01\x04\x1e\x73\x77\x61\x6e\x6b\x3a\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x2d\x69\x6e\x66\x6f\x2d\x66\x6f\x72\x2d\x65"
  "\x6d\x61\x63\x73\x10\x04\x23\x73\x77\x61\x6e\x6b\x3a\x69\x6e\x76"
  "\x6f\x6b\x65\x2d\x6e\x74\x68\x2d\x72\x65\x73\x74\x61\x72\x74\x2d"
  "\x66\x6f\x72\x2d\x65\x6d\x61\x63\x73\x34\x04\x14\x73\x77\x61\x6e"
  "\x6b\x3a\x73\x6c\x64\x62\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x0b"
  "\x04\x11\x73\x77\x61\x6e\x6b\x3a\x73\x6c\x64\x62\x2d\x61\x62\x6f"
  "\x72\x74\x12\x04\x18\x73\x77\x61\x6e\x6b\x3a\x74\x68\x72\x6f\x77"
  "\x2d\x74\x6f\x2d\x74\x6f\x70\x6c\x65\x76\x65\x6c\xa1\x01\x04\x9e"
  "\x01\xa0\x01\x04\x9f\x01\x04\x9b\x01\x04\x23\x9c\x01\x04\x98\x01"
  "\x95\x01\x0c\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65\x3f\x96\x01"
  "\x04\x19\x73\x65\x74\x2d\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65"
  "\x2e\x72\x65\x73\x74\x61\x72\x74\x73\x21\x93\x01\x04\x1a\x73\x65"
  "\x74\x2d\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65\x2e\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x21\x94\x01\x04\x14\x73\x6c\x64\x62\x2d"
  "\x73\x74\x61\x74\x65\x2e\x72\x65\x73\x74\x61\x72\x74\x73\x92\x01"
  "\x04\x9a\x01\x15\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65\x2e\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x91\x01\x04\x0f\x72\x74\x64\x3a"
  "\x73\x6c\x64\x62\x2d\x73\x74\x61\x74\x65\xdc\x01\x0b\x73\x6c\x64"
  "\x62\x2d\x73\x74\x61\x74\x65\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x09\x72\x65\x73\x74\x61\x72\x74\x73\x21\x73\x77\x61\x6e\x6b"
  "\x3a\x66\x69\x6e\x64\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x73\x2d\x66\x6f\x72\x2d\x65\x6d\x61\x63\x73\x8f\x01\x04\x1a\x73"
  "\x77\x61\x6e\x6b\x3a\x62\x75\x66\x66\x65\x72\x2d\x66\x69\x72\x73"
  "\x74\x2d\x63\x68\x61\x6e\x67\x65\x8e\x01\x04\x10\x73\x77\x61\x6e"
  "\x6b\x3a\x71\x75\x69\x74\x2d\x6c\x69\x73\x70\x8d\x01\x04\x0e\x73"
  "\x77\x61\x6e\x6b\x3a\x61\x75\x74\x6f\x64\x6f\x63\x6d\x04\x8a\x01"
  "\x8b\x01\x04\x70\x84\x01\x04\x6b\x04\x6c\x65\x74\x09\x62\x69\x6e"
  "\x64\x69\x6e\x67\x73\xdb\x01\x05\x62\x6f\x64\x79\xda\x01\x05\x6c"
  "\x65\x74\x2a\xdb\x01\xda\x01\x07\x6c\x65\x74\x72\x65\x63\xdb\x01"
  "\xda\x01\x08\x72\x65\x63\x65\x69\x76\x65\xdb\x01\x0b\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\xdb\x01\xda\x01\x07\x64\x65\x66\x69"
  "\x6e\x65\x05\x6e\x61\x6d\x65\xd9\x01\xda\x01\x97\x01\xdb\x01\x0b"
  "\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\xdb\x01\x08\x75\x6e\x71"
  "\x75\x6f\x74\x65\xdb\x01\x11\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73"
  "\x70\x6c\x69\x63\x69\x6e\x67\xdb\x01\x03\x69\x66\x05\x74\x65\x73"
  "\x74\x05\x74\x68\x65\x6e\x05\x65\x6c\x73\x65\x05\x73\x65\x74\x21"
  "\xd9\x01\x06\x76\x61\x6c\x75\x65\x0b\x14\x73\x77\x61\x6e\x6b\x3a"
  "\x73\x77\x61\x6e\x6b\x2d\x72\x65\x71\x75\x69\x72\x65\x88\x01\x04"
  "\x16\x73\x77\x61\x6e\x6b\x3a\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f"
  "\x6e\x2d\x69\x6e\x66\x6f\x87\x01\x04\x82\x01\x85\x01\x04\x17\x73"
  "\x77\x61\x6e\x6b\x3a\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x61\x72"
  "\x67\x6c\x69\x73\x74\x83\x01\x04\x18\x73\x77\x61\x6e\x6b\x3a\x73"
  "\x77\x61\x6e\x6b\x2d\x6d\x61\x63\x72\x6f\x65\x78\x70\x61\x6e\x64"
  "\x1a\x73\x77\x61\x6e\x6b\x3a\x73\x77\x61\x6e\x6b\x2d\x6d\x61\x63"
  "\x72\x6f\x65\x78\x70\x61\x6e\x64\x2d\x31\x1c\x73\x77\x61\x6e\x6b"
  "\x3a\x73\x77\x61\x6e\x6b\x2d\x6d\x61\x63\x72\x6f\x65\x78\x70\x61"
  "\x6e\x64\x2d\x61\x6c\x6c\xdb\x01\x5f\x04\x12\x73\x77\x61\x6e\x6b"
  "\x3a\x63\x72\x65\x61\x74\x65\x2d\x72\x65\x70\x6c\x80\x01\x04\x12"
  "\x73\x77\x61\x6e\x6b\x3a\x73\x65\x74\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x7f\x04\x74\x7d\x04\x24\x73\x77\x61\x6e\x6b\x3a\x64\x65\x73"
  "\x63\x72\x69\x62\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x2d\x66\x6f\x72\x2d\x65\x6d\x61\x63\x73\x7a\x04\x18\x73\x77\x61"
  "\x6e\x6b\x3a\x64\x65\x73\x63\x72\x69\x62\x65\x2d\x66\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x79\x04\x78\x77\x04\x1c\x73\x77\x61\x6e\x6b\x3a"
  "\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x69\x04\x18\x73\x77\x61\x6e\x6b\x3a\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x6a"
  "\x04\x19\x73\x77\x61\x6e\x6b\x3a\x64\x69\x73\x61\x73\x73\x65\x6d"
  "\x62\x6c\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x68\x04\x63\x65\x04\x1d"
  "\x73\x77\x61\x6e\x6b\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x66\x69"
  "\x6c\x65\x2d\x66\x6f\x72\x2d\x65\x6d\x61\x63\x73\x64\x04\x5e\x61"
  "\x04\x5d\x55\x04\x1f\x73\x77\x61\x6e\x6b\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x66\x6f\x72\x2d\x65\x6d"
  "\x61\x63\x73\x60\x04\x12\x73\x77\x61\x6e\x6b\x3a\x70\x70\x72\x69"
  "\x6e\x74\x2d\x65\x76\x61\x6c\x5c\x04\x14\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x5a\x04\x59"
  "\x57\x2e\x04\x50\x58\x04\x4b\x56\x04\x49\x46\x04\x14\x73\x77\x61"
  "\x6e\x6b\x3a\x6c\x69\x73\x74\x65\x6e\x65\x72\x2d\x65\x76\x61\x6c"
  "\x4f\x04\x1e\x73\x77\x61\x6e\x6b\x3a\x69\x6e\x74\x65\x72\x61\x63"
  "\x74\x69\x76\x65\x2d\x65\x76\x61\x6c\x2d\x72\x65\x67\x69\x6f\x6e"
  "\x4c\x04\x17\x73\x77\x61\x6e\x6b\x3a\x69\x6e\x74\x65\x72\x61\x63"
  "\x74\x69\x76\x65\x2d\x65\x76\x61\x6c\x4a\x04\x40\x0d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x48\x04\x3e\x44\x08\x52"
  "\x3f\x04\x3a\x37\x24\x3d\x04\x38\x97\x01\x0b\x3a\x65\x6d\x61\x63"
  "\x73\x2d\x72\x65\x78\x05\x66\x6f\x72\x6d\x06\x64\x61\x74\x75\x6d"
  "\xda\x01\xda\x01\x06\x69\x6e\x64\x65\x78\x36\x04\x31\x17\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x65\x73\x73\x61\x67\x65\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x72\xda\x01\x33\x04\x1d\x32\x04\x2b\x2f\x04\x28\x2c"
  "\x04\x1e\x29\x04\x1c\x22\x04\x14\x1f\x04\x99\x01\x1b\x04\x27\x18"
  "\x04\x7e\x17\x04\x42\x16\x04\x13\x09\x15\x04\x11\x04\x0e\x04\x0a"
  "\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x0c\x73\x74\x61\x72\x74\x2d\x73\x77\x61\x6e\x6b\x04\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\xd9\x01\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x03\xdb\x01"
  "\xdc\x01\xd8\x01\x0a\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x11\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x0a"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x3f\x0b\x71\x75\x6f\x74\x61\x74"
  "\x69\x6f\x6e\x3f\x08\x6c\x61\x6d\x62\x64\x61\x3f\x0d\x64\x69\x73"
  "\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x3f\x07\x64\x65\x6c\x61\x79\x3f"
  "\x0c\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x0d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x61\x6c\x3f\x09\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x3f\x0d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x0c"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3f\x08\x61\x63\x63\x65"
  "\x73\x73\x3f\xdd\x01\x12\x04\xda\x01\x04\xd9\x01\x04\x13\x72\x65"
  "\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72"
  "\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64\x69\x63\x61"
  "\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73"
  "\x73\x6f\x72\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69"
  "\x66\x69\x65\x72\x07\xb8\x01\xf2\x02\x80\x80\x04\xb7\x01\xf0\x02"
  "\x81\x81\x02\xb6\x01\xee\x02\x81\x81\x02\xb5\x01\xec\x02\x81\x87"
  "\x02\xb4\x01\xea\x02\x81\x83\x02\xb3\x01\xe8\x02\x81\x83\x02\xb2"
  "\x01\xe6\x02\x81\x83\x02\xb1\x01\xe4\x02\x81\x83\x02\xb0\x01\xe2"
  "\x02\x81\x83\x02\xaf\x01\xe0\x02\x81\x83\x02\xae\x01\xde\x02\x81"
  "\x83\x02\xad\x01\xdc\x02\x81\x83\x02\xac\x01\xda\x02\x81\x87\x02"
  "\xab\x01\xd8\x02\x81\x87\x02\xaa\x01\xd6\x02\x81\x87\x02\xa9\x01"
  "\xd4\x02\x81\x87\x02\xa8\x01\xd2\x02\x81\x87\x02\xa7\x01\xd0\x02"
  "\x81\x87\x02\xa6\x01\xce\x02\x81\x87\x02\xa5\x01\xcc\x02\x81\x87"
  "\x02\xa4\x01\xca\x02\x81\x87\x02\xa3\x01\xc8\x02\x81\x87\x02\xa2"
  "\x01\xc6\x02\x81\x87\x02\xa1\x01\xc4\x02\x81\x87\x02\xa0\x01\xc2"
  "\x02\x81\x85\x02\x9f\x01\xc0\x02\x81\x83\x02\x9e\x01\xbe\x02\x81"
  "\x83\x02\x9d\x01\xbc\x02\x81\x83\x02\x9c\x01\xba\x02\x81\x83\x02"
  "\x9b\x01\xb8\x02\x81\x83\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01"
  "\xb4\x02\x81\x83\x02\x98\x01\xb2\x02\x81\x83\x02\x97\x01\xb0\x02"
  "\x81\x83\x02\x96\x01\xae\x02\x81\x83\x02\x95\x01\xac\x02\x81\x83"
  "\x02\x94\x01\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02\x92"
  "\x01\xa6\x02\x81\x83\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2"
  "\x02\x81\x83\x02\x8f\x01\xa0\x02\x81\x83\x02\x8e\x01\x9e\x02\x81"
  "\x83\x02\x8d\x01\x9c\x02\x81\x83\x02\x8c\x01\x9a\x02\x81\x83\x02"
  "\x8b\x01\x98\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x83\x02\x89\x01"
  "\x94\x02\x81\x83\x02\x88\x01\x92\x02\x81\x85\x02\x87\x01\x90\x02"
  "\x81\x83\x02\x86\x01\x8e\x02\x81\x85\x02\x85\x01\x8c\x02\x81\x89"
  "\x02\x84\x01\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x85\x02\x82"
  "\x01\x86\x02\x81\x89\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82"
  "\x02\x81\x85\x02\x7f\x80\x02\x81\x89\x02\x7e\xfe\x01\x81\x83\x02"
  "\x7d\xfc\x01\x81\x85\x02\x7c\xfa\x01\x81\x89\x02\x7b\xf8\x01\x81"
  "\x83\x02\x7a\xf6\x01\x81\x85\x02\x79\xf4\x01\x81\x89\x02\x78\xf2"
  "\x01\x81\x83\x02\x77\xf0\x01\x81\x85\x02\x76\xee\x01\x81\x89\x02"
  "\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x85\x02\x73\xe8\x01\x81"
  "\x87\x02\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x85\x02\x70\xe2"
  "\x01\x81\x89\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02"
  "\x6d\xdc\x01\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81"
  "\x83\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2"
  "\x01\x81\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02"
  "\x65\xcc\x01\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81"
  "\x83\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2"
  "\x01\x81\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02"
  "\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81"
  "\x83\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2"
  "\x01\x81\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02"
  "\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81"
  "\x83\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2"
  "\x01\x81\x85\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x87\x02"
  "\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81"
  "\x83\x02\x4a\x96\x01\x81\x87\x02\x49\x94\x01\x81\x83\x02\x48\x92"
  "\x01\x81\x85\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x85\x02"
  "\x45\x8c\x01\x81\x87\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81"
  "\x83\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82"
  "\x01\x81\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d"
  "\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76"
  "\x81\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81"
  "\x85\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x85\x02\x34\x6a\x81\x83"
  "\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02"
  "\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d"
  "\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56"
  "\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81"
  "\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83"
  "\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02"
  "\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d"
  "\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02"
  "\xf1\x02\xaa\x05";

SCHEME_OBJECT *
swank_so_data_1598117c1c3e9280 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_swank_so_data_1598117c1c3e9280 [0]))), (sizeof (prog_swank_so_data_1598117c1c3e9280)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_196]));
}

DECLARE_COMPILED_DATA_NS ("swank.so", swank_so_data_1598117c1c3e9280)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("swank.so", "8d3256ac7be252d4")
