/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:05-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 5
#define DEBUGGING_LABEL_1_2 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto Z__sf_associate__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__sf_associate__3)
DEFLABEL (Z__sf_associate__0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_7 7
#define LABEL_2_6 9
#define ENVIRONMENT_LABEL_2_3 16
#define DEBUGGING_LABEL_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 11
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto cgen_output_2;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_output_6)
DEFLABEL (cgen_output_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_9;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_9;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_7)
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_2_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define TAG_3_8 1
#define LABEL_3_5 7
#define TAG_3_6 2
#define LABEL_3_12 9
#define LABEL_3_13 11
#define LABEL_3_14 13
#define LABEL_3_10 15
#define ENVIRONMENT_LABEL_3_3 30
#define DEBUGGING_LABEL_3_2 29
#define OBJECT_3_1 28
#define OBJECT_3_0 27
#define EXECUTE_CACHE_3_15 17
#define EXECUTE_CACHE_3_11 19
#define EXECUTE_CACHE_3_9 21
#define FREE_REFERENCE_3_0 24
#define FREE_ASSIGNMENT_3_0 26
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_3_4);
      goto cgen_external_10;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto swapB_17;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_external_16)
DEFLABEL (cgen_external_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (swapB_17)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_22)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_12])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define TAG_4_8 1
#define LABEL_4_10 7
#define LABEL_4_11 9
#define LABEL_4_12 11
#define LABEL_4_13 13
#define LABEL_4_5 15
#define TAG_4_6 6
#define LABEL_4_14 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define ENVIRONMENT_LABEL_4_3 36
#define DEBUGGING_LABEL_4_2 35
#define OBJECT_4_4 34
#define OBJECT_4_3 33
#define OBJECT_4_2 32
#define OBJECT_4_1 31
#define OBJECT_4_0 30
#define EXECUTE_CACHE_4_9 23
#define FREE_REFERENCE_4_1 26
#define FREE_REFERENCE_4_0 27
#define FREE_ASSIGNMENT_4_0 29
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_4);
      goto cgen_external_with_declarations_14;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_4_10);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_4_5);
      goto swapB_25;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_external_with_declarations_24)
DEFLABEL (cgen_external_with_declarations_14)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_34;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_33)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_32;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_32;
  (Wrd30.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_31)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_30;
  Wrd43 = Wrd47;

DEFLABEL (label_29)
  Wrd42 = Wrd43;
  (Wrd49.Obj) = (* (Rsp++));
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_28;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_28;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_28;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd52.pObj) = (& ((Wrd56.pObj) [(Wrd50.Lng)]));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_27)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_28)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd44.pObj));

DEFLABEL (label_18)
  (Wrd43.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd38.Obj) = (current_block [OBJECT_4_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_4_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_16)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (swapB_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_38)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_22)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_21)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_14])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define LABEL_5_9 19
#define LABEL_5_15 21
#define ENVIRONMENT_LABEL_5_3 38
#define DEBUGGING_LABEL_5_2 37
#define OBJECT_5_5 36
#define OBJECT_5_4 35
#define OBJECT_5_3 34
#define OBJECT_5_2 33
#define OBJECT_5_1 32
#define OBJECT_5_0 31
#define EXECUTE_CACHE_5_16 23
#define EXECUTE_CACHE_5_14 25
#define EXECUTE_CACHE_5_8 27
#define FREE_REFERENCE_5_0 30
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto cgen_top_level_11;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_top_level_21)
DEFLABEL (cgen_top_level_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_32;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_32;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (label_22)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_30;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd25.Lng))))
    goto label_30;
  (Wrd17.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_29)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_28;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_28;
  (Wrd34.Obj) = ((Wrd37.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_27)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_26;
  Wrd47 = Wrd51;

DEFLABEL (label_25)
  Wrd46 = Wrd47;
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_24;
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_24;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd62.Lng))))
    goto label_24;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd56.pObj) = (& ((Wrd60.pObj) [(Wrd54.Lng)]));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_23)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_24)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_12])), (Wrd48.pObj));

DEFLABEL (label_17)
  (Wrd47.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd42.Obj) = (current_block [OBJECT_5_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_5_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_5_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Rsp [1]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_36;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_36;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_36)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_5_5]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto cgen_declaration_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_declaration_6)
DEFLABEL (cgen_declaration_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_6_0]))
    goto label_7;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_7)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_9 13
#define LABEL_7_13 15
#define LABEL_7_15 17
#define LABEL_7_16 19
#define LABEL_7_12 21
#define LABEL_7_17 23
#define LABEL_7_20 25
#define LABEL_7_19 27
#define LABEL_7_21 29
#define ENVIRONMENT_LABEL_7_3 46
#define DEBUGGING_LABEL_7_2 45
#define OBJECT_7_3 44
#define OBJECT_7_2 43
#define OBJECT_7_1 42
#define OBJECT_7_0 41
#define EXECUTE_CACHE_7_18 31
#define EXECUTE_CACHE_7_14 33
#define EXECUTE_CACHE_7_11 35
#define EXECUTE_CACHE_7_6 37
#define FREE_REFERENCE_7_0 40
#define FREE_REFERENCES_LABEL_7_0 30
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd9;
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
      goto maybe_flush_declarations_17;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto loop_14;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_7_21);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_flush_declarations_27)
DEFLABEL (maybe_flush_declarations_17)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_29;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_32;
  Wrd6 = Wrd10;

DEFLABEL (label_31)
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto loop_14;

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_31;

DEFLABEL (loop_28)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_33;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_14;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_46;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_39)
  goto loop_14;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_37)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_44;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_43)
  (Wrd31.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_16);
  goto label_41;

DEFLABEL (label_44)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 15
#define DEBUGGING_LABEL_8_2 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_7 9
#define FREE_REFERENCE_8_0 12
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_8_4);
      goto known_compiler_declarationP_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (known_compiler_declarationP_6)
DEFLABEL (known_compiler_declarationP_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_8 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_7 15
#define FREE_REFERENCE_9_0 18
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
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
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto cgen_expressions_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_expressions_12)
DEFLABEL (cgen_expressions_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_20)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_19;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_19;
  (Wrd25.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_18)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_17;
  Wrd38 = Wrd42;

DEFLABEL (label_16)
  Wrd37 = Wrd38;
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_15;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_15;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_15;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd47.pObj) = (& ((Wrd51.pObj) [(Wrd45.Lng)]));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_14)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_15)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd39.pObj));

DEFLABEL (label_9)
  (Wrd38.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd33.Obj) = (current_block [OBJECT_9_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define OBJECT_10_2 16
#define OBJECT_10_1 15
#define OBJECT_10_0 14
#define FREE_REFERENCE_10_0 13
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_10_4);
      goto cgen_expression_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_expression_10)
DEFLABEL (cgen_expression_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [1]);
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
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_14;
  Wrd35 = Wrd39;

DEFLABEL (label_13)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_12;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_12;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_12;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_12)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd30.Obj) = (current_block [OBJECT_10_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_8 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define EXECUTE_CACHE_11_9 9
#define EXECUTE_CACHE_11_7 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto define_method_cgen_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_method_cgen_5)
DEFLABEL (define_method_cgen_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_8 7
#define LABEL_12_9 9
#define LABEL_12_10 11
#define LABEL_12_5 13
#define LABEL_12_11 15
#define ENVIRONMENT_LABEL_12_3 26
#define DEBUGGING_LABEL_12_2 25
#define OBJECT_12_3 24
#define OBJECT_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_12 17
#define EXECUTE_CACHE_12_7 19
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_12_4);
      goto cgen_variable_11;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_variable_18)
DEFLABEL (cgen_variable_11)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd8.Obj) = Rvl;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_27;
  (Wrd21.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [0]) = (Wrd36.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_25;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_24)
  (Wrd52.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_23;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  ((Wrd55.pObj) [1]) = (Wrd49.Obj);

DEFLABEL (label_22)
  (Wrd8.Obj) = (Rsp [0]);
  goto label_20;

DEFLABEL (label_23)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_16)
  goto label_22;

DEFLABEL (label_25)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_15)
  (Wrd40.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (current_block [OBJECT_12_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_11 13
#define LABEL_13_5 15
#define LABEL_13_6 17
#define LABEL_13_13 19
#define ENVIRONMENT_LABEL_13_3 33
#define DEBUGGING_LABEL_13_2 32
#define OBJECT_13_4 31
#define OBJECT_13_3 30
#define OBJECT_13_2 29
#define OBJECT_13_1 28
#define OBJECT_13_0 27
#define EXECUTE_CACHE_13_14 21
#define EXECUTE_CACHE_13_12 23
#define FREE_REFERENCE_13_0 26
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_13_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_28;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_28;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_26;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_25)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_24;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_24;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_23)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_22;
  Wrd60 = Wrd64;

DEFLABEL (label_21)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_20;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_20;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_20;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_20)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd61.pObj));

DEFLABEL (label_14)
  (Wrd60.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd55.Obj) = (current_block [OBJECT_13_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_13_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_13_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_30;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_30)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_13_4]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_8 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define LABEL_14_11 13
#define LABEL_14_5 15
#define LABEL_14_6 17
#define LABEL_14_14 19
#define LABEL_14_13 21
#define ENVIRONMENT_LABEL_14_3 37
#define DEBUGGING_LABEL_14_2 36
#define OBJECT_14_4 35
#define OBJECT_14_3 34
#define OBJECT_14_2 33
#define OBJECT_14_1 32
#define OBJECT_14_0 31
#define EXECUTE_CACHE_14_16 23
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_12 27
#define FREE_REFERENCE_14_0 30
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_29;
  (Wrd15.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_28)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_27;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_27;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_26)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_25;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_25;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_24)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_23;
  Wrd60 = Wrd64;

DEFLABEL (label_22)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_21;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_21;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_21;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_10])), (Wrd61.pObj));

DEFLABEL (label_15)
  (Wrd60.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd55.Obj) = (current_block [OBJECT_14_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_14_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_14_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_31;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_14_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_6 9
#define LABEL_15_11 11
#define LABEL_15_12 13
#define LABEL_15_13 15
#define LABEL_15_14 17
#define LABEL_15_15 19
#define LABEL_15_10 21
#define ENVIRONMENT_LABEL_15_3 37
#define DEBUGGING_LABEL_15_2 36
#define OBJECT_15_4 35
#define OBJECT_15_3 34
#define OBJECT_15_2 33
#define OBJECT_15_1 32
#define OBJECT_15_0 31
#define EXECUTE_CACHE_15_16 23
#define EXECUTE_CACHE_15_9 25
#define EXECUTE_CACHE_15_8 27
#define FREE_REFERENCE_15_0 30
#define FREE_REFERENCES_LABEL_15_0 22
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_15_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_15_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_15_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_31;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_31;
  (Wrd15.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_30)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
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
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_27;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_27;
  (Wrd25.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_26)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_25;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_25;
  (Wrd42.Obj) = ((Wrd45.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_24)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_23;
  Wrd55 = Wrd59;

DEFLABEL (label_22)
  Wrd54 = Wrd55;
  (Wrd61.Obj) = (* (Rsp++));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_21;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_21;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_21;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd64.pObj) = (& ((Wrd68.pObj) [(Wrd62.Lng)]));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_14])), (Wrd56.pObj));

DEFLABEL (label_16)
  (Wrd55.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd50.Obj) = (current_block [OBJECT_15_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_15_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_14)
  (Wrd25.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_15_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_8 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define LABEL_16_5 15
#define LABEL_16_6 17
#define LABEL_16_14 19
#define LABEL_16_15 21
#define LABEL_16_16 23
#define LABEL_16_17 25
#define LABEL_16_18 27
#define LABEL_16_13 29
#define LABEL_16_20 31
#define LABEL_16_21 33
#define LABEL_16_22 35
#define LABEL_16_23 37
#define LABEL_16_24 39
#define LABEL_16_19 41
#define ENVIRONMENT_LABEL_16_3 55
#define DEBUGGING_LABEL_16_2 54
#define OBJECT_16_4 53
#define OBJECT_16_3 52
#define OBJECT_16_2 51
#define OBJECT_16_1 50
#define OBJECT_16_0 49
#define EXECUTE_CACHE_16_25 43
#define EXECUTE_CACHE_16_12 45
#define FREE_REFERENCE_16_0 48
#define FREE_REFERENCES_LABEL_16_0 42
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_16_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_16_15);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_16_16);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_16_17);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_16_18);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_16_20);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_16_21);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_16_22);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_16_23);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_16_24);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_48;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_48;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_46;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_46;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_45)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_44;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_44;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_43)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_42;
  Wrd60 = Wrd64;

DEFLABEL (label_41)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_40;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_40;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_40;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_39)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_40)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_10])), (Wrd61.pObj));

DEFLABEL (label_25)
  (Wrd60.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd55.Obj) = (current_block [OBJECT_16_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_16_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_23)
  (Wrd30.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_16_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_58;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_58;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_57)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_56;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_56;
  (Wrd25.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_55)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_54;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_54;
  (Wrd42.Obj) = ((Wrd45.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_53)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_52;
  Wrd55 = Wrd59;

DEFLABEL (label_51)
  Wrd54 = Wrd55;
  (Wrd61.Obj) = (* (Rsp++));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_50;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_50;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_50;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd64.pObj) = (& ((Wrd68.pObj) [(Wrd62.Lng)]));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_49)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_50)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_17])), (Wrd56.pObj));

DEFLABEL (label_30)
  (Wrd55.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd50.Obj) = (current_block [OBJECT_16_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_16_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_28)
  (Wrd25.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_16_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_68;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_68;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_66;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_66;
  (Wrd25.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_65)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_64;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_64;
  (Wrd42.Obj) = ((Wrd45.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_63)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_62;
  Wrd55 = Wrd59;

DEFLABEL (label_61)
  Wrd54 = Wrd55;
  (Wrd61.Obj) = (* (Rsp++));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_60;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_60;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_60;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd64.pObj) = (& ((Wrd68.pObj) [(Wrd62.Lng)]));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_59)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_60)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_23])), (Wrd56.pObj));

DEFLABEL (label_35)
  (Wrd55.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd50.Obj) = (current_block [OBJECT_16_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_16_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_33)
  (Wrd25.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_16_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_4 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_17_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_7)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_6;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd13.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define LABEL_18_8 7
#define LABEL_18_9 9
#define LABEL_18_10 11
#define LABEL_18_11 13
#define LABEL_18_5 15
#define LABEL_18_6 17
#define LABEL_18_13 19
#define ENVIRONMENT_LABEL_18_3 32
#define DEBUGGING_LABEL_18_2 31
#define OBJECT_18_3 30
#define OBJECT_18_2 29
#define OBJECT_18_1 28
#define OBJECT_18_0 27
#define EXECUTE_CACHE_18_14 21
#define EXECUTE_CACHE_18_12 23
#define FREE_REFERENCE_18_0 26
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_28;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_28;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_26;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_25)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_24;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_24;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_23)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_22;
  Wrd60 = Wrd64;

DEFLABEL (label_21)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_20;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_20;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_20;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_20)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_10])), (Wrd61.pObj));

DEFLABEL (label_14)
  (Wrd60.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd55.Obj) = (current_block [OBJECT_18_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_18_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_18_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_18_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_8 7
#define LABEL_19_9 9
#define LABEL_19_10 11
#define LABEL_19_11 13
#define LABEL_19_5 15
#define LABEL_19_6 17
#define ENVIRONMENT_LABEL_19_3 29
#define DEBUGGING_LABEL_19_2 28
#define OBJECT_19_2 27
#define OBJECT_19_1 26
#define OBJECT_19_0 25
#define EXECUTE_CACHE_19_13 19
#define EXECUTE_CACHE_19_12 21
#define FREE_REFERENCE_19_0 24
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_25)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_24;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_24;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_23)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_22;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_22;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_21)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_20;
  Wrd60 = Wrd64;

DEFLABEL (label_19)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_18;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_18;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_18;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_17)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_18)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd61.pObj));

DEFLABEL (label_13)
  (Wrd60.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd55.Obj) = (current_block [OBJECT_19_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_19_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_11)
  (Wrd30.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_19_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_5 15
#define LABEL_20_6 17
#define LABEL_20_14 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_17 25
#define LABEL_20_18 27
#define LABEL_20_13 29
#define ENVIRONMENT_LABEL_20_3 42
#define DEBUGGING_LABEL_20_2 41
#define OBJECT_20_3 40
#define OBJECT_20_2 39
#define OBJECT_20_1 38
#define OBJECT_20_0 37
#define EXECUTE_CACHE_20_19 31
#define EXECUTE_CACHE_20_12 33
#define FREE_REFERENCE_20_0 36
#define FREE_REFERENCES_LABEL_20_0 30
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
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
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_20_17);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_20_18);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_37;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_36)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_35;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_34)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_33;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_33;
  (Wrd47.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_32)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_31;
  Wrd60 = Wrd64;

DEFLABEL (label_30)
  Wrd59 = Wrd60;
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_29;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_29;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_29;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd69.pObj) = (& ((Wrd73.pObj) [(Wrd67.Lng)]));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_28)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_29)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_10])), (Wrd61.pObj));

DEFLABEL (label_19)
  (Wrd60.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd55.Obj) = (current_block [OBJECT_20_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_20_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_20_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_47;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_47;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_46)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_45;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_45;
  (Wrd25.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_44)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_43;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_43;
  (Wrd42.Obj) = ((Wrd45.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_42)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_41;
  Wrd55 = Wrd59;

DEFLABEL (label_40)
  Wrd54 = Wrd55;
  (Wrd61.Obj) = (* (Rsp++));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_39;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_39;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_39;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd64.pObj) = (& ((Wrd68.pObj) [(Wrd62.Lng)]));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_38)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_39)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_17])), (Wrd56.pObj));

DEFLABEL (label_24)
  (Wrd55.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd50.Obj) = (current_block [OBJECT_20_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_20_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_22)
  (Wrd25.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_20_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_19]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_7 7
#define LABEL_21_9 9
#define LABEL_21_10 11
#define LABEL_21_6 13
#define LABEL_21_8 15
#define LABEL_21_14 17
#define LABEL_21_15 19
#define LABEL_21_13 21
#define LABEL_21_16 23
#define LABEL_21_18 25
#define LABEL_21_19 27
#define LABEL_21_17 29
#define LABEL_21_20 31
#define LABEL_21_24 33
#define LABEL_21_25 35
#define LABEL_21_26 37
#define LABEL_21_27 39
#define LABEL_21_23 41
#define LABEL_21_30 43
#define LABEL_21_29 45
#define ENVIRONMENT_LABEL_21_3 74
#define DEBUGGING_LABEL_21_2 73
#define OBJECT_21_8 72
#define OBJECT_21_7 71
#define OBJECT_21_6 70
#define OBJECT_21_5 69
#define OBJECT_21_4 68
#define OBJECT_21_3 67
#define OBJECT_21_2 66
#define OBJECT_21_1 65
#define OBJECT_21_0 64
#define EXECUTE_CACHE_21_32 47
#define EXECUTE_CACHE_21_31 49
#define EXECUTE_CACHE_21_28 51
#define EXECUTE_CACHE_21_22 53
#define EXECUTE_CACHE_21_21 55
#define EXECUTE_CACHE_21_12 57
#define EXECUTE_CACHE_21_11 59
#define FREE_REFERENCE_21_1 62
#define FREE_REFERENCE_21_0 63
#define FREE_REFERENCES_LABEL_21_0 46
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_21_16);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_21_18);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_21_19);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_21_20);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_21_24);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_21_25);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_21_26);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_21_27);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_21_23);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_21_30);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_21_29);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_39)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_68;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd21.Lng))))
    goto label_68;
  (Wrd15.Obj) = ((Wrd19.pObj) [7]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_67)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_21_2]);
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_41;

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_41)
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd42.Lng))))
    goto label_40;
  (Wrd34.Obj) = ((Wrd40.pObj) [3]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_65)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_64;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng))))
    goto label_64;
  (Wrd50.Obj) = ((Wrd54.pObj) [6]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_63)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_62;
  Wrd64 = Wrd68;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_58;
  Wrd24 = Wrd28;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_54;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_54;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_53)
  (Wrd49.Obj) = (Rsp [6]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_52;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_52;
  (Wrd42.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_51)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_28]));

DEFLABEL (label_42)
  (Wrd8.Obj) = (current_block [OBJECT_21_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_50;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd26.Lng))))
    goto label_50;
  (Wrd18.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_49)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_48;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd40.Lng))))
    goto label_48;
  (Wrd35.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_47)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_46;
  Wrd48 = Wrd52;

DEFLABEL (label_45)
  Wrd47 = Wrd48;
  (Wrd54.Obj) = (* (Rsp++));
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_44;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_44;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_44;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd57.pObj) = (& ((Wrd61.pObj) [(Wrd55.Lng)]));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_43)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_44)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_27]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_26])), (Wrd49.pObj));

DEFLABEL (label_35)
  (Wrd48.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd43.Obj) = (current_block [OBJECT_21_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_25]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_21_8]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_24]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_33)
  (Wrd18.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd51.Obj) = (Rsp [6]);
  (Wrd52.Obj) = (current_block [OBJECT_21_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.Obj) = (current_block [OBJECT_21_6]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_21_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_15])), (Wrd25.pObj));

DEFLABEL (label_29)
  (Wrd24.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_21_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd65.pObj));

DEFLABEL (label_27)
  (Wrd64.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (current_block [OBJECT_21_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_65;

DEFLABEL (label_68)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_21_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21_23);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_70;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_70;
  (Wrd11.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21_29);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_32]));

DEFLABEL (label_70)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_21_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_30]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21_17);
  (Rsp [4]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_8 9
#define LABEL_22_6 11
#define LABEL_22_12 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_10 19
#define LABEL_22_16 21
#define LABEL_22_11 23
#define LABEL_22_19 25
#define LABEL_22_22 27
#define LABEL_22_23 29
#define LABEL_22_25 31
#define LABEL_22_26 33
#define LABEL_22_27 35
#define LABEL_22_29 37
#define LABEL_22_15 39
#define LABEL_22_28 41
#define LABEL_22_32 43
#define LABEL_22_33 45
#define LABEL_22_34 47
#define LABEL_22_35 49
#define LABEL_22_36 51
#define LABEL_22_24 53
#define LABEL_22_39 55
#define LABEL_22_40 57
#define LABEL_22_41 59
#define LABEL_22_42 61
#define LABEL_22_43 63
#define LABEL_22_31 65
#define LABEL_22_37 67
#define LABEL_22_38 69
#define LABEL_22_44 71
#define LABEL_22_45 73
#define ENVIRONMENT_LABEL_22_3 104
#define DEBUGGING_LABEL_22_2 103
#define OBJECT_22_9 102
#define OBJECT_22_8 101
#define OBJECT_22_7 100
#define OBJECT_22_6 99
#define OBJECT_22_5 98
#define OBJECT_22_4 97
#define OBJECT_22_3 96
#define OBJECT_22_2 95
#define OBJECT_22_1 94
#define OBJECT_22_0 93
#define EXECUTE_CACHE_22_46 75
#define EXECUTE_CACHE_22_30 77
#define EXECUTE_CACHE_22_21 79
#define EXECUTE_CACHE_22_20 81
#define EXECUTE_CACHE_22_18 83
#define EXECUTE_CACHE_22_17 85
#define EXECUTE_CACHE_22_9 87
#define FREE_REFERENCE_22_2 90
#define FREE_REFERENCE_22_1 91
#define FREE_REFERENCE_22_0 92
#define FREE_REFERENCES_LABEL_22_0 74
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd50;
  machine_word Wrd75;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd9;
  machine_word Wrd77;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto cgen_open_block_42;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_44;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_40;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_22_19);
      goto loop_38;

    case 12:
      current_block = (Rpc - LABEL_22_22);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_22_23);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_22_25);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_22_26);
      goto label_55;

    case 16:
      current_block = (Rpc - LABEL_22_27);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_22_29);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_22_28);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_22_32);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_22_33);
      goto label_58;

    case 22:
      current_block = (Rpc - LABEL_22_34);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_22_35);
      goto label_60;

    case 24:
      current_block = (Rpc - LABEL_22_36);
      goto label_61;

    case 25:
      current_block = (Rpc - LABEL_22_24);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_22_39);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_22_40);
      goto label_63;

    case 28:
      current_block = (Rpc - LABEL_22_41);
      goto label_64;

    case 29:
      current_block = (Rpc - LABEL_22_42);
      goto label_65;

    case 30:
      current_block = (Rpc - LABEL_22_43);
      goto label_66;

    case 31:
      current_block = (Rpc - LABEL_22_31);
      goto continuation_16;

    case 32:
      current_block = (Rpc - LABEL_22_37);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_22_38);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_22_44);
      goto label_67;

    case 35:
      current_block = (Rpc - LABEL_22_45);
      goto label_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_open_block_70)
DEFLABEL (cgen_open_block_42)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_85;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_85;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_84)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_83;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_83;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_82)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_81;
  Wrd40 = Wrd44;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [3]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_79;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_79;
  (Wrd16.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_78)
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_77;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd38.Lng))))
    goto label_77;
  (Wrd32.Obj) = ((Wrd36.pObj) [5]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_76)
  (Wrd55.Obj) = (Rsp [7]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_75;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd54.Lng))))
    goto label_75;
  (Wrd48.Obj) = ((Wrd52.pObj) [4]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_74)
  goto loop_38;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_73;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_73;
  (Wrd11.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_30]));

DEFLABEL (label_73)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_22_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd57.Obj) = (Rsp [7]);
  (Wrd58.Obj) = (current_block [OBJECT_22_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.Obj) = (current_block [OBJECT_22_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (current_block [OBJECT_22_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd41.pObj));

DEFLABEL (label_46)
  (Wrd40.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_22_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (loop_71)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_22_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_22_5]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_86;
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Rsp [2]) = (Wrd80.Obj);
  (Rsp [3]) = (Wrd79.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (label_86)
  (Wrd7.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_87;
  (Wrd77.Obj) = (current_block [OBJECT_22_6]);
  (Rsp [3]) = (Wrd77.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_21]));

DEFLABEL (label_87)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_100;
  Wrd9 = Wrd13;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_98;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_97)
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd15.Obj) == (Wrd24.Obj))
    goto label_91;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_90;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_89)
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_88)
  goto loop_38;

DEFLABEL (label_90)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_29]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_8]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_96;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_95)
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_94;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_93)
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_92;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_88;

DEFLABEL (label_92)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_8]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_94)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_8]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_8]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_52)
  (Wrd15.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_22])), (Wrd10.pObj));

DEFLABEL (label_51)
  (Wrd9.Obj) = Rvl;
  goto label_99;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_22_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_110;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_109)
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Obj) = (current_block [OBJECT_22_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_108;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_108;
  (Wrd24.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_107)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_106;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_106;
  (Wrd41.Obj) = ((Wrd44.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_105)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_104;
  Wrd54 = Wrd58;

DEFLABEL (label_103)
  Wrd53 = Wrd54;
  (Wrd60.Obj) = (* (Rsp++));
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_102;
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_102;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd66.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_102;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd63.pObj) = (& ((Wrd67.pObj) [(Wrd61.Lng)]));
  (Wrd64.Obj) = ((Wrd63.pObj) [1]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_101)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_102)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_36]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_35])), (Wrd55.pObj));

DEFLABEL (label_60)
  (Wrd54.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd49.Obj) = (current_block [OBJECT_22_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_34]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_22_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_33]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_58)
  (Wrd24.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_22_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_120;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_119)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Obj) = (current_block [OBJECT_22_5]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_118;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd35.Lng))))
    goto label_118;
  (Wrd27.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_117)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_116;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd49.Lng))))
    goto label_116;
  (Wrd44.Obj) = ((Wrd47.pObj) [3]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_115)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_114;
  Wrd57 = Wrd61;

DEFLABEL (label_113)
  Wrd56 = Wrd57;
  (Wrd63.Obj) = (* (Rsp++));
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_112;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_112;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) (Wrd69.Lng)) < ((unsigned long) (Wrd72.Lng))))
    goto label_112;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd63.Obj));
  (Wrd66.pObj) = (& ((Wrd70.pObj) [(Wrd64.Lng)]));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_111)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_112)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_43]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_42])), (Wrd58.pObj));

DEFLABEL (label_65)
  (Wrd57.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd52.Obj) = (current_block [OBJECT_22_0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_41]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_22_9]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_40]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_63)
  (Wrd27.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_22_38);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_124;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_123)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_122;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_122;
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_46]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_22_37);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_122)
  (Wrd23.Obj) = (current_block [OBJECT_22_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_45]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_123;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define EXECUTE_CACHE_23_9 9
#define EXECUTE_CACHE_23_8 11
#define EXECUTE_CACHE_23_7 13
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define ENVIRONMENT_LABEL_24_3 16
#define DEBUGGING_LABEL_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  (Wrd10.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_24_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_8;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_4 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_9 11
#define LABEL_25_10 13
#define LABEL_25_11 15
#define LABEL_25_12 17
#define LABEL_25_13 19
#define LABEL_25_14 21
#define LABEL_25_17 23
#define LABEL_25_6 25
#define LABEL_25_15 27
#define ENVIRONMENT_LABEL_25_3 47
#define DEBUGGING_LABEL_25_2 46
#define OBJECT_25_5 45
#define OBJECT_25_4 44
#define OBJECT_25_3 43
#define OBJECT_25_2 42
#define OBJECT_25_1 41
#define OBJECT_25_0 40
#define EXECUTE_CACHE_25_20 29
#define EXECUTE_CACHE_25_19 31
#define EXECUTE_CACHE_25_18 33
#define EXECUTE_CACHE_25_16 35
#define FREE_REFERENCE_25_1 38
#define FREE_REFERENCE_25_0 39
#define FREE_REFERENCES_LABEL_25_0 28
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd128;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_25_4);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_25_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_25_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_25_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_25_14);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_25_17);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_46;
  Wrd13 = Wrd17;

DEFLABEL (label_45)
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_41;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_41;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_39)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_38;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_37)
  if ((Wrd53.Obj) == (current_block [OBJECT_25_3]))
    goto label_26;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_15);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_20]));

DEFLABEL (label_26)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_36;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd68.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_34;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd85.Lng))))
    goto label_34;
  (Wrd77.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_33)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd100.uLng) == 10))
    goto label_32;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_32;
  (Wrd94.Obj) = ((Wrd97.pObj) [3]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_31)
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_30;
  Wrd107 = Wrd111;

DEFLABEL (label_29)
  Wrd106 = Wrd107;
  (Wrd113.Obj) = (* (Rsp++));
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd123.uLng) == 10))
    goto label_28;
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd118.uLng) == 26))
    goto label_28;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) (Wrd119.Lng)) < ((unsigned long) (Wrd122.Lng))))
    goto label_28;
  (Wrd114.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd116.pObj) = (& ((Wrd120.pObj) [(Wrd114.Lng)]));
  (Wrd117.Obj) = ((Wrd116.pObj) [1]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_27)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_28)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_13])), (Wrd108.pObj));

DEFLABEL (label_22)
  (Wrd107.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd102.Obj) = (current_block [OBJECT_25_0]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.Obj) = (current_block [OBJECT_25_5]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_20)
  (Wrd77.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_19)
  (Wrd68.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_18)
  (Wrd53.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (current_block [OBJECT_25_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_44;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_44;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_39;

DEFLABEL (label_44)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_25_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_17)
  (Wrd37.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd14.pObj));

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_45;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_6 9
#define LABEL_26_10 11
#define LABEL_26_9 13
#define LABEL_26_12 15
#define ENVIRONMENT_LABEL_26_3 25
#define DEBUGGING_LABEL_26_2 24
#define OBJECT_26_2 23
#define OBJECT_26_1 22
#define OBJECT_26_0 21
#define EXECUTE_CACHE_26_11 17
#define EXECUTE_CACHE_26_8 19
#define FREE_REFERENCES_LABEL_26_0 16
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_26_4);
      goto remove_references_8;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_references_15)
DEFLABEL (remove_references_8)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_25)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_26_1])))
    goto label_16;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_22;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Rsp [0]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  goto label_17;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_7 5
#define TAG_28_8 1
#define LABEL_28_5 7
#define TAG_28_6 2
#define LABEL_28_12 9
#define LABEL_28_13 11
#define LABEL_28_14 13
#define LABEL_28_15 15
#define LABEL_28_16 17
#define LABEL_28_17 19
#define LABEL_28_18 21
#define LABEL_28_19 23
#define LABEL_28_20 25
#define LABEL_28_10 27
#define ENVIRONMENT_LABEL_28_3 46
#define DEBUGGING_LABEL_28_2 45
#define OBJECT_28_1 44
#define OBJECT_28_0 43
#define EXECUTE_CACHE_28_21 29
#define EXECUTE_CACHE_28_11 31
#define EXECUTE_CACHE_28_9 33
#define FREE_REFERENCE_28_2 36
#define FREE_REFERENCE_28_1 37
#define FREE_REFERENCE_28_0 38
#define FREE_ASSIGNMENT_28_2 40
#define FREE_ASSIGNMENT_28_1 41
#define FREE_ASSIGNMENT_28_0 42
#define FREE_REFERENCES_LABEL_28_0 28
#define NUMBER_OF_LINKER_SECTIONS_28_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cgen_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_28_4);
      goto pp_expression_22;

    case 1:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_36;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto swapB_35;

    case 3:
      current_block = (Rpc - LABEL_28_12);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_28_13);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_28_14);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_28_15);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_28_16);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_28_17);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_28_18);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_28_19);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_28_20);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pp_expression_34)
DEFLABEL (pp_expression_22)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 3;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd34 = Wrd36;
  ((Wrd34.pObj) [2]) = (Wrd7.Obj);
  ((Wrd34.pObj) [3]) = (Wrd11.Obj);
  ((Wrd34.pObj) [4]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_7])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [4]) = (Wrd18.Obj);
  (Rsp [5]) = (Wrd37.Obj);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_28_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_21]));

DEFLABEL (swapB_35)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (swapB_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  Wrd5 = Wrd9;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_58)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_55)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd57 = Wrd61;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_49)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_46)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  Wrd109 = Wrd113;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_40)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_20])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_32)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_19])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_31)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_28_18])), (Wrd110.pObj));

DEFLABEL (label_30)
  (Wrd109.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_28_15])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_57)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_28_12])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_61;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_32 51
#define ENVIRONMENT_LABEL_3 106
#define DEBUGGING_LABEL_2 105
#define PURIFICATION_ROOT 104
#define OBJECT_39 103
#define OBJECT_38 102
#define OBJECT_37 101
#define OBJECT_36 100
#define OBJECT_35 99
#define OBJECT_34 98
#define OBJECT_33 97
#define OBJECT_32 96
#define OBJECT_31 95
#define OBJECT_30 94
#define OBJECT_29 93
#define OBJECT_28 92
#define OBJECT_27 91
#define OBJECT_26 90
#define OBJECT_25 89
#define OBJECT_24 88
#define OBJECT_23 87
#define OBJECT_22 86
#define OBJECT_21 85
#define OBJECT_20 84
#define OBJECT_19 83
#define OBJECT_18 82
#define OBJECT_17 81
#define OBJECT_16 80
#define OBJECT_15 79
#define OBJECT_14 78
#define OBJECT_13 77
#define OBJECT_12 76
#define OBJECT_11 75
#define OBJECT_10 74
#define OBJECT_9 73
#define OBJECT_8 72
#define OBJECT_7 71
#define OBJECT_6 70
#define OBJECT_5 69
#define OBJECT_4 68
#define OBJECT_3 67
#define OBJECT_2 66
#define OBJECT_1 65
#define OBJECT_0 64
#define EXECUTE_CACHE_15 53
#define EXECUTE_CACHE_12 55
#define EXECUTE_CACHE_8 57
#define FREE_REFERENCE_0 60
#define GLOBAL_EXECUTE_CACHE_5 62
#define FREE_REFERENCES_LABEL_0 52
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cgen_so_2ca843cc5ffa12ba (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto label_26;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto label_27;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto expression_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_22)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_27)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_26)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	2,
	3,
	3,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 28)
      goto label_25;
    blocks = (current_block [OBJECT_39]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_25)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_29;
  Wrd11 = Wrd15;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_38]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cgen_so_2ca843cc5ffa12ba [28] =
  {
    { "cgen_so_code_1", 1, cgen_so_code_1 },
    { "cgen_so_code_2", 4, cgen_so_code_2 },
    { "cgen_so_code_3", 7, cgen_so_code_3 },
    { "cgen_so_code_4", 10, cgen_so_code_4 },
    { "cgen_so_code_5", 10, cgen_so_code_5 },
    { "cgen_so_code_6", 2, cgen_so_code_6 },
    { "cgen_so_code_7", 14, cgen_so_code_7 },
    { "cgen_so_code_8", 3, cgen_so_code_8 },
    { "cgen_so_code_9", 6, cgen_so_code_9 },
    { "cgen_so_code_10", 5, cgen_so_code_10 },
    { "cgen_so_code_11", 3, cgen_so_code_11 },
    { "cgen_so_code_12", 7, cgen_so_code_12 },
    { "cgen_so_code_13", 9, cgen_so_code_13 },
    { "cgen_so_code_14", 10, cgen_so_code_14 },
    { "cgen_so_code_15", 10, cgen_so_code_15 },
    { "cgen_so_code_16", 20, cgen_so_code_16 },
    { "cgen_so_code_17", 2, cgen_so_code_17 },
    { "cgen_so_code_18", 9, cgen_so_code_18 },
    { "cgen_so_code_19", 8, cgen_so_code_19 },
    { "cgen_so_code_20", 14, cgen_so_code_20 },
    { "cgen_so_code_21", 22, cgen_so_code_21 },
    { "cgen_so_code_22", 36, cgen_so_code_22 },
    { "cgen_so_code_23", 3, cgen_so_code_23 },
    { "cgen_so_code_24", 3, cgen_so_code_24 },
    { "cgen_so_code_25", 13, cgen_so_code_25 },
    { "cgen_so_code_26", 7, cgen_so_code_26 },
    { "cgen_so_code_27", 2, cgen_so_code_27 },
    { "cgen_so_code_28", 13, cgen_so_code_28 }
  };

int
decl_cgen_so_2ca843cc5ffa12ba (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cgen_so_2ca843cc5ffa12ba);
  return (0);
}

DECLARE_COMPILED_CODE ("cgen.so", 25, decl_cgen_so_2ca843cc5ffa12ba, cgen_so_2ca843cc5ffa12ba)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cgen_so_data_2ca843cc5ffa12ba [4552] =
  "\x81\x01\x2e\xdd\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x22\x29\x21"
  "\x9c\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x81\x28\x0d\xbb\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x1d\x07"
  "\x0d\xbd\x25\xb5\x24\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x1d\x82\xb2\x80\x08\xb5\x25\x0d\x1c\xb5\x24"
  "\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x84"
  "\x80\x08\x83\xb2\x82\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x08\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\xc1\x1c\xc1\x1c\x08\xb5\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb2\x80\x1b\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb2\x80\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x82\xc2\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x84\x82\x80\xb2\x83\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x82\x80\xb2\x84\x1b\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x82\x80\x83\xb2\x84\x1b\x24\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x84"
  "\x80\xb2\x82\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x82\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x80\xb2\x83\x1b"
  "\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\xb2\x82\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\x80\xb2\x83\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x08\x02\x83\x84\x85\x82\xb2\x86\x0d\x1c\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x1b\x1b\x0c\x08\x84\x85\x83\xb2\x82\x1b\x0d\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\xb7\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x08\x1b\xb2\x82"
  "\xb5\x1b\x24\x28\x1b\x28\x0d\xba\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\x1b\x28\xb2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07"
  "\x0d\xb8\x0d\x1c\x0d\x1c\x25\xb0\x1b\x1b\x24\x28\xb6\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\xbe\x88\xb6\x1b\x2a\x0d\x0d\x1b\x2a\xb2\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x0d\x99\x1b\x2a\x1b\x2a\x99\xc3"
  "\x1b\x0d\x1b\x1b\x1b\x1b\xb5\x1b\xb7\x1b\x0d\x1b\xb3\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08"
  "\x14\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\xb1\x2a"
  "\x17\x28\x0d\x26\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x4e\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x63\x67\x65\x6e\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x1a\x04\x84\x06\x03\x02\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x04\x0f\x2a\x73\x66\x2d\x61\x73\x73"
  "\x6f\x63\x69\x61\x74\x65\x2a\x02\x1e\x0a\x81\x85\x02\x1d\x08\x81"
  "\x89\x02\x1c\x06\x84\x06\x1b\x04\x81\x87\x02\x09\x11\x02\x02\x14"
  "\x66\x6c\x75\x73\x68\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x73\x3f\x02\x02\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x0f\x63\x67\x65\x6e\x2f"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x04\x0c\x63\x67\x65\x6e\x2f"
  "\x6f\x75\x74\x70\x75\x74\x09\x04\x25\x10\x81\x85\x02\x24\x0e\x81"
  "\x83\x02\x23\x0c\x81\x85\x02\x22\x0a\x81\x83\x02\x21\x08\x81\x83"
  "\x02\x20\x06\x81\x83\x02\x1f\x04\x83\x04\x0f\x1f\x0a\x02\x02\x02"
  "\x10\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f\x72"
  "\x0b\x03\x05\x02\x2f\x16\x81\x83\x02\x2e\x14\x81\x85\x02\x2d\x12"
  "\x81\x83\x02\x2c\x10\x81\x83\x02\x2b\x0e\x81\x85\x02\x2a\x0c\x81"
  "\x87\x02\x29\x0a\x81\x85\x02\x28\x08\x81\x85\x02\x27\x06\x81\x83"
  "\x02\x26\x04\x83\x04\x15\x25\x0c\x02\x0b\x02\x03\x0c\x6f\x70\x65"
  "\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x0d\x03\x10\x63\x67\x65\x6e\x2d"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x0e\x04\x11\x63\x67\x65"
  "\x6e\x2f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x0f\x04\x39"
  "\x16\x81\x85\x02\x38\x14\x81\x85\x02\x37\x12\x81\x85\x02\x36\x10"
  "\x81\x87\x02\x35\x0e\x81\x85\x02\x34\x0c\x81\x85\x02\x33\x0a\x81"
  "\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x83\x02\x30\x04\x83\x04"
  "\x15\x27\x10\x02\x03\x19\x6d\x61\x79\x62\x65\x2d\x66\x6c\x75\x73"
  "\x68\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x11\x04"
  "\x11\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x03\x3b\x06\x81\x85\x02\x3a\x04\x84\x06\x05\x0e\x12\x02\x08"
  "\x13\x55\x6e\x75\x73\x65\x64\x20\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x04\x63\x64\x72\x13\x04\x63\x61\x72\x14\x02\x03\x16"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6f\x72\x69"
  "\x67\x69\x6e\x61\x6c\x03\x14\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x73\x2f\x6b\x6e\x6f\x77\x6e\x3f\x03\x1c\x6b\x6e\x6f\x77"
  "\x6e\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x3f\x15\x04\x05\x77\x61\x72\x6e\x05\x49"
  "\x1e\x81\x85\x02\x48\x1c\x81\x83\x02\x47\x1a\x81\x85\x02\x46\x18"
  "\x81\x85\x02\x45\x16\x81\x83\x02\x44\x14\x81\x83\x02\x43\x12\x81"
  "\x83\x02\x42\x10\x81\x85\x02\x41\x0e\x81\x83\x02\x40\x0c\x81\x85"
  "\x02\x3f\x0a\x81\x83\x02\x3e\x08\x81\x83\x02\x3d\x06\x81\x83\x02"
  "\x3c\x04\x83\x04\x1d\x2f\x16\x02\x09\x14\x1e\x2a\x6b\x6e\x6f\x77"
  "\x6e\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2a\x17\x02\x04\x05\x6d\x65\x6d\x71"
  "\x02\x4c\x08\x81\x85\x02\x4b\x06\x81\x83\x02\x4a\x04\x83\x04\x07"
  "\x10\x18\x02\x0a\x0b\x02\x04\x04\x6d\x61\x70\x19\x02\x52\x0e\x81"
  "\x85\x02\x51\x0c\x81\x87\x02\x50\x0a\x81\x85\x02\x4f\x08\x81\x85"
  "\x02\x4e\x06\x81\x85\x02\x4d\x04\x84\x06\x0d\x18\x1a\x02\x0b\x0b"
  "\x02\x57\x0c\x81\x85\x02\x56\x0a\x81\x87\x02\x55\x08\x81\x85\x02"
  "\x54\x06\x81\x85\x02\x53\x04\x84\x06\x0b\x13\x1b\x02\x0c\x04\x14"
  "\x25\x64\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2f\x63"
  "\x67\x65\x6e\x1c\x04\x09\x03\x5a\x08\x81\x87\x02\x59\x06\x81\x87"
  "\x02\x58\x04\x84\x06\x07\x0f\x1d\x02\x0d\x09\x73\x65\x74\x2d\x63"
  "\x64\x72\x21\x13\x04\x05\x61\x73\x73\x71\x03\x0e\x6d\x61\x6b\x65"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x03\x61\x10\x81\x89\x02\x60"
  "\x0e\x81\x85\x02\x5f\x0c\x81\x87\x02\x5e\x0a\x81\x87\x02\x5d\x08"
  "\x81\x87\x02\x5c\x06\x81\x87\x02\x5b\x04\x84\x06\x0f\x1b\x1e\x02"
  "\x0e\x0b\x02\x04\x09\x04\x0c\x6d\x61\x6b\x65\x2d\x61\x63\x63\x65"
  "\x73\x73\x03\x6a\x14\x81\x85\x02\x69\x12\x81\x85\x02\x68\x10\x81"
  "\x85\x02\x67\x0e\x81\x85\x02\x66\x0c\x81\x87\x02\x65\x0a\x81\x85"
  "\x02\x64\x08\x81\x85\x02\x63\x06\x81\x87\x02\x62\x04\x84\x06\x13"
  "\x22\x1f\x02\x0f\x0b\x02\x04\x09\x04\x0e\x63\x67\x65\x6e\x2f\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x20\x04\x1e\x6d\x61\x6b\x65\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x66\x72\x6f\x6d\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x04\x74\x16\x81\x87\x02\x73\x14\x81"
  "\x89\x02\x72\x12\x81\x85\x02\x71\x10\x81\x85\x02\x70\x0e\x81\x85"
  "\x02\x6f\x0c\x81\x87\x02\x6e\x0a\x81\x85\x02\x6d\x08\x81\x85\x02"
  "\x6c\x06\x81\x87\x02\x6b\x04\x84\x06\x15\x26\x21\x02\x10\x0b\x02"
  "\x04\x11\x63\x67\x65\x6e\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x73\x22\x04\x09\x04\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x04\x7e\x16\x81\x87\x02\x7d\x14\x81"
  "\x85\x02\x7c\x12\x81\x87\x02\x7b\x10\x81\x85\x02\x7a\x0e\x81\x85"
  "\x02\x79\x0c\x81\x89\x02\x78\x0a\x81\x85\x02\x77\x08\x81\x85\x02"
  "\x76\x06\x81\x87\x02\x75\x04\x84\x06\x15\x26\x23\x02\x11\x0b\x02"
  "\x04\x09\x05\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x61\x6c\x03\x92\x01\x2a\x81\x89\x02\x91\x01\x28\x81\x85"
  "\x02\x90\x01\x26\x81\x87\x02\x8f\x01\x24\x81\x85\x02\x8e\x01\x22"
  "\x81\x85\x02\x8d\x01\x20\x81\x8b\x02\x8c\x01\x1e\x81\x87\x02\x8b"
  "\x01\x1c\x81\x85\x02\x8a\x01\x1a\x81\x87\x02\x89\x01\x18\x81\x85"
  "\x02\x88\x01\x16\x81\x85\x02\x87\x01\x14\x81\x89\x02\x86\x01\x12"
  "\x81\x85\x02\x85\x01\x10\x81\x85\x02\x84\x01\x0e\x81\x85\x02\x83"
  "\x01\x0c\x81\x87\x02\x82\x01\x0a\x81\x85\x02\x81\x01\x08\x81\x85"
  "\x02\x80\x01\x06\x81\x87\x02\x7f\x04\x84\x06\x29\x38\x24\x02\x12"
  "\x04\x09\x02\x94\x01\x06\x84\x06\x93\x01\x04\x81\x85\x02\x05\x0d"
  "\x25\x02\x13\x0b\x02\x04\x09\x04\x0f\x03\x9d\x01\x14\x81\x87\x02"
  "\x9c\x01\x12\x81\x85\x02\x9b\x01\x10\x81\x85\x02\x9a\x01\x0e\x81"
  "\x85\x02\x99\x01\x0c\x81\x87\x02\x98\x01\x0a\x81\x85\x02\x97\x01"
  "\x08\x81\x85\x02\x96\x01\x06\x81\x87\x02\x95\x01\x04\x84\x06\x13"
  "\x21\x26\x02\x14\x0b\x02\x04\x09\x03\x0b\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x6c\x61\x79\x03\xa5\x01\x12\x81\x85\x02\xa4\x01\x10\x81\x85"
  "\x02\xa3\x01\x0e\x81\x85\x02\xa2\x01\x0c\x81\x87\x02\xa1\x01\x0a"
  "\x81\x85\x02\xa0\x01\x08\x81\x85\x02\x9f\x01\x06\x81\x87\x02\x9e"
  "\x01\x04\x84\x06\x11\x1e\x27\x02\x15\x0b\x02\x04\x09\x04\x11\x6d"
  "\x61\x6b\x65\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x03"
  "\xb3\x01\x1e\x81\x87\x02\xb2\x01\x1c\x81\x85\x02\xb1\x01\x1a\x81"
  "\x87\x02\xb0\x01\x18\x81\x85\x02\xaf\x01\x16\x81\x85\x02\xae\x01"
  "\x14\x81\x89\x02\xad\x01\x12\x81\x85\x02\xac\x01\x10\x81\x85\x02"
  "\xab\x01\x0e\x81\x85\x02\xaa\x01\x0c\x81\x87\x02\xa9\x01\x0a\x81"
  "\x85\x02\xa8\x01\x08\x81\x85\x02\xa7\x01\x06\x81\x87\x02\xa6\x01"
  "\x04\x84\x06\x1d\x2b\x28\x02\x16\x08\x0e\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x6e\x61\x6d\x65\x29\x0b\x03\x04\x19\x04\x09\x03\x0d"
  "\x07\x0d\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2a\x03\x0e"
  "\x03\x11\x05\x10\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x0d\x08\xc9\x01\x2e\x81\x87\x02\xc8\x01\x2c\x81\x89"
  "\x02\xc7\x01\x2a\x81\x87\x02\xc6\x01\x28\x81\x85\x02\xc5\x01\x26"
  "\x81\x87\x02\xc4\x01\x24\x81\x85\x02\xc3\x01\x22\x81\x85\x02\xc2"
  "\x01\x20\x81\x85\x02\xc1\x01\x1e\x81\x8b\x02\xc0\x01\x1c\x81\x8f"
  "\x02\xbf\x01\x1a\x81\x8d\x02\xbe\x01\x18\x81\x89\x02\xbd\x01\x16"
  "\x81\x87\x02\xbc\x01\x14\x81\x8b\x02\xbb\x01\x12\x81\x89\x02\xba"
  "\x01\x10\x81\x85\x02\xb9\x01\x0e\x81\x85\x02\xb8\x01\x0c\x81\x89"
  "\x02\xb7\x01\x0a\x81\x87\x02\xb6\x01\x08\x81\x85\x02\xb5\x01\x06"
  "\x84\x06\xb4\x01\x04\x81\x83\x02\x2d\x4b\x2a\x02\x17\x13\x14\x17"
  "\x45\x78\x74\x72\x61\x6e\x65\x6f\x75\x73\x20\x61\x75\x78\x69\x6c"
  "\x69\x61\x72\x69\x65\x73\x29\x18\x6f\x70\x65\x6e\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x76\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72\x0b"
  "\x04\x04\x19\x03\x11\x03\x0e\x6d\x61\x6b\x65\x2d\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x29\x04\x22\x03\x06\x65\x72\x72\x6f\x72\x05\x0d"
  "\x04\x10\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x08\xed\x01\x4a\x81\x8f\x02\xec\x01\x48\x81\x8f\x02\xeb\x01"
  "\x46\x81\x8d\x02\xea\x01\x44\x81\x8b\x02\xe9\x01\x42\x81\x8b\x02"
  "\xe8\x01\x40\x81\x85\x02\xe7\x01\x3e\x81\x87\x02\xe6\x01\x3c\x81"
  "\x85\x02\xe5\x01\x3a\x81\x85\x02\xe4\x01\x38\x81\x8f\x02\xe3\x01"
  "\x36\x81\x89\x02\xe2\x01\x34\x81\x85\x02\xe1\x01\x32\x81\x87\x02"
  "\xe0\x01\x30\x81\x85\x02\xdf\x01\x2e\x81\x85\x02\xde\x01\x2c\x81"
  "\x8d\x02\xdd\x01\x2a\x81\x89\x02\xdc\x01\x28\x81\x87\x02\xdb\x01"
  "\x26\x81\x8d\x02\xda\x01\x24\x81\x91\x02\xd9\x01\x22\x81\x8f\x02"
  "\xd8\x01\x20\x81\x8d\x02\xd7\x01\x1e\x81\x8b\x02\xd6\x01\x1c\x81"
  "\x89\x02\xd5\x01\x1a\x81\x89\x02\xd4\x01\x18\x81\x89\x02\xd3\x01"
  "\x16\x81\x89\x02\xd2\x01\x14\x81\x87\x02\xd1\x01\x12\x81\x91\x02"
  "\xd0\x01\x10\x81\x8f\x02\xcf\x01\x0e\x81\x8d\x02\xce\x01\x0c\x81"
  "\x85\x02\xcd\x01\x0a\x81\x89\x02\xcc\x01\x08\x81\x87\x02\xcb\x01"
  "\x06\x81\x83\x02\xca\x01\x04\x83\x04\x49\x69\x19\x02\x18\x03\x04"
  "\x09\x03\x0f\x6d\x61\x6b\x65\x2d\x71\x75\x6f\x74\x61\x74\x69\x6f"
  "\x6e\x04\xf0\x01\x08\x81\x83\x02\xef\x01\x06\x81\x85\x02\xee\x01"
  "\x04\x84\x06\x07\x11\x0d\x02\x19\x04\x20\x04\x09\x03\xf3\x01\x08"
  "\x81\x85\x02\xf2\x01\x06\x81\x85\x02\xf1\x01\x04\x84\x06\x07\x11"
  "\x2b\x02\x1a\x14\x13\x0b\x03\x04\x22\x03\x12\x72\x65\x6d\x6f\x76"
  "\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x04\x09\x03\x29"
  "\x05\x80\x02\x1c\x81\x87\x02\xff\x01\x1a\x81\x85\x02\xfe\x01\x18"
  "\x81\x87\x02\xfd\x01\x16\x81\x85\x02\xfc\x01\x14\x81\x87\x02\xfb"
  "\x01\x12\x81\x85\x02\xfa\x01\x10\x81\x85\x02\xf9\x01\x0e\x81\x87"
  "\x02\xf8\x01\x0c\x81\x87\x02\xf7\x01\x0a\x81\x87\x02\xf6\x01\x08"
  "\x81\x87\x02\xf5\x01\x06\x84\x06\xf4\x01\x04\x81\x85\x02\x1b\x30"
  "\x29\x02\x1b\x14\x13\x03\x03\x0b\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x3f\x03\x87\x02\x10\x81\x85\x02\x86\x02\x0e\x81\x85\x02\x85"
  "\x02\x0c\x81\x87\x02\x84\x02\x0a\x81\x83\x02\x83\x02\x08\x81\x85"
  "\x02\x82\x02\x06\x81\x83\x02\x81\x02\x04\x83\x04\x0f\x1a\x14\x02"
  "\x1c\x02\x15\x6d\x61\x6b\x65\x2d\x74\x68\x65\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x09\x03\x89\x02\x06\x81\x85\x02"
  "\x88\x02\x04\x84\x06\x05\x0d\x13\x02\x1d\x02\x18\x2a\x70\x70\x2d"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x62\x79\x2d\x6e\x61"
  "\x6d\x65\x2a\x20\x2a\x70\x70\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79\x2d\x6e\x61"
  "\x6d\x65\x2a\x2c\x21\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x61\x62"
  "\x62\x72\x65\x76\x69\x61\x74\x65\x2d\x71\x75\x6f\x74\x61\x74\x69"
  "\x6f\x6e\x73\x3f\x2a\x2d\x04\x2c\x2d\x04\x05\x03\x20\x63\x67\x65"
  "\x6e\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2d\x04\x03\x70"
  "\x70\x04\x96\x02\x1c\x81\x83\x02\x95\x02\x1a\x81\x83\x02\x94\x02"
  "\x18\x81\x85\x02\x93\x02\x16\x81\x83\x02\x92\x02\x14\x81\x83\x02"
  "\x91\x02\x12\x81\x85\x02\x90\x02\x10\x81\x83\x02\x8f\x02\x0e\x81"
  "\x83\x02\x8e\x02\x0c\x81\x85\x02\x8d\x02\x0a\x81\x83\x02\x8c\x02"
  "\x08\x81\x83\x02\x8b\x02\x06\x81\x83\x02\x8a\x02\x04\x84\x04\x1b"
  "\x2f\x2c\x1d\x2c\x04\x0e\x70\x70\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x10\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x13\x04\x14\x04\x09\x73\x65\x71\x75\x65\x6e\x63\x65"
  "\x29\x06\x0a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2b\x04\x0a\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x0d\x04\x0e\x19\x04\x0a\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2a\x06\x0c\x64\x69\x73\x6a\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x28\x04\x06\x64\x65\x6c\x61\x79\x27\x04\x0c"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x26\x04\x09\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x2c\x25\x06\x0c\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x24\x04\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x23\x04\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x21\x04\x07\x61\x63\x63\x65\x73\x73\x1f\x04\x1c\x20\x13\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2f\x63\x67\x65\x6e"
  "\x1e\x04\x1d\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x0b\x10\x63\x67\x65\x6e\x2f\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x22\x15\x17\x11\x0f\x2d\x0e\x63\x67\x65"
  "\x6e\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x09\x0d\x1b\x04\x1a\x04"
  "\x18\x04\x2c\x18\x69\x67\x6e\x6f\x72\x65\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x2d\x74\x72\x61\x70\x73\x17\x69\x67\x6e\x6f"
  "\x72\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61"
  "\x70\x73\x10\x6e\x6f\x2d\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63"
  "\x6b\x73\x0f\x6e\x6f\x2d\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b"
  "\x73\x0e\x70\x75\x72\x65\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x0d"
  "\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x11\x73\x69\x64"
  "\x65\x2d\x65\x66\x66\x65\x63\x74\x2d\x66\x72\x65\x65\x0c\x74\x79"
  "\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x11\x75\x73\x75\x61\x6c\x2d"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x09\x75\x75\x6f\x2d\x6c"
  "\x69\x6e\x6b\x0b\x16\x04\x12\x04\x10\x04\x0c\x04\x0a\x04\x06\x04"
  "\x0d\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x0b\x02\x02\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2f\x6d\x61\x6b\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x76\x65\x63\x74\x6f\x72\x03\x1f\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2f\x6d\x61\x6b\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x64"
  "\x65\x66\x69\x6e\x65\x72\x04\x1c\x04\x19\x34\x80\x80\x04\x18\x32"
  "\x81\x81\x02\x17\x30\x81\x81\x02\x16\x2e\x81\x83\x02\x15\x2c\x81"
  "\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83"
  "\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02"
  "\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83"
  "\x02\x01\x04\x81\x83\x02\x33\x6b";

SCHEME_OBJECT *
cgen_so_data_2ca843cc5ffa12ba (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cgen_so_data_2ca843cc5ffa12ba [0]))), (sizeof (prog_cgen_so_data_2ca843cc5ffa12ba)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("cgen.so", cgen_so_data_2ca843cc5ffa12ba)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cgen.so", "f5a43b642ddae532")
