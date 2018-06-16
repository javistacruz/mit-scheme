/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_9 9
#define ENVIRONMENT_LABEL_1_3 23
#define DEBUGGING_LABEL_1_2 22
#define OBJECT_1_1 21
#define OBJECT_1_0 20
#define EXECUTE_CACHE_1_10 11
#define EXECUTE_CACHE_1_7 13
#define EXECUTE_CACHE_1_6 15
#define FREE_REFERENCE_1_1 18
#define FREE_REFERENCE_1_0 19
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apropos_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto apropos_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apropos_13)
DEFLABEL (apropos_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_1_0])))
    goto label_23;

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_21;
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_15;
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_14;

DEFLABEL (label_15)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_20)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_19;
  Wrd11 = Wrd15;

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_17;
  Wrd18 = Wrd22;

DEFLABEL (label_16)
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd19.pObj));

DEFLABEL (label_11)
  (Wrd18.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd12.pObj));

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd27.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_20;

DEFLABEL (label_23)
  if ((Wrd8.Obj) == (current_block [OBJECT_1_1]))
    goto label_22;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define LABEL_2_9 9
#define TAG_2_10 3
#define LABEL_2_11 11
#define ENVIRONMENT_LABEL_2_3 24
#define DEBUGGING_LABEL_2_2 23
#define OBJECT_2_3 22
#define OBJECT_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_12 13
#define EXECUTE_CACHE_2_7 15
#define EXECUTE_CACHE_2_6 17
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apropos_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto apropos_list_13;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apropos_list_16)
DEFLABEL (apropos_list_13)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_2_0])))
    goto label_24;

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_22;
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_20;
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_19;

DEFLABEL (label_20)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
DEFLABEL (label_21)
  (Wrd13.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd27.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_21;

DEFLABEL (label_24)
  if ((Wrd8.Obj) == (current_block [OBJECT_2_1]))
    goto label_23;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  ((Wrd12.pObj) [0]) = (Wrd5.Obj);
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_2_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_4 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_12 13
#define LABEL_3_15 15
#define LABEL_3_10 17
#define LABEL_3_11 19
#define LABEL_3_13 21
#define LABEL_3_19 23
#define TAG_3_20 10
#define LABEL_3_16 25
#define LABEL_3_23 27
#define LABEL_3_24 29
#define ENVIRONMENT_LABEL_3_3 56
#define DEBUGGING_LABEL_3_2 55
#define OBJECT_3_5 54
#define OBJECT_3_4 53
#define OBJECT_3_3 52
#define OBJECT_3_2 51
#define OBJECT_3_1 50
#define OBJECT_3_0 49
#define EXECUTE_CACHE_3_26 31
#define EXECUTE_CACHE_3_25 33
#define EXECUTE_CACHE_3_22 35
#define EXECUTE_CACHE_3_21 37
#define EXECUTE_CACHE_3_18 39
#define EXECUTE_CACHE_3_17 41
#define EXECUTE_CACHE_3_14 43
#define EXECUTE_CACHE_3_9 45
#define FREE_REFERENCE_3_0 48
#define FREE_REFERENCES_LABEL_3_0 30
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apropos_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_3_4);
      goto aproposer_14;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto lambda_20;

    case 11:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (aproposer_19)
DEFLABEL (aproposer_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_3_0]);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd40.Lng))))
    goto label_34;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd16.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd26.Lng)))
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_21)
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_23;
  (Wrd18.Obj) = (current_block [OBJECT_3_4]);
  goto label_22;

DEFLABEL (label_23)
  (Wrd18.Obj) = (current_block [OBJECT_3_3]);

DEFLABEL (label_22)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_28)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [7]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd29.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_28;

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto label_29;

DEFLABEL (label_34)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_3_19);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [3]);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apropos_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto apropos_describe_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apropos_describe_4)
DEFLABEL (apropos_describe_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define EXECUTE_CACHE_5_9 9
#define EXECUTE_CACHE_5_8 11
#define EXECUTE_CACHE_5_6 13
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apropos_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto apropos_describe_env_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apropos_describe_env_8)
DEFLABEL (apropos_describe_env_5)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Wrd9 = Wrd5;
  goto label_9;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [2]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

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
apropos_so_2cfe1c5e97f4deeb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
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

static const struct liarc_code_S arr_decl_apropos_so_2cfe1c5e97f4deeb [5] =
  {
    { "apropos_so_code_1", 4, apropos_so_code_1 },
    { "apropos_so_code_2", 5, apropos_so_code_2 },
    { "apropos_so_code_3", 14, apropos_so_code_3 },
    { "apropos_so_code_4", 2, apropos_so_code_4 },
    { "apropos_so_code_5", 3, apropos_so_code_5 }
  };

int
decl_apropos_so_2cfe1c5e97f4deeb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_apropos_so_2cfe1c5e97f4deeb);
  return (0);
}

DECLARE_COMPILED_CODE ("apropos.so", 3, decl_apropos_so_2cfe1c5e97f4deeb, apropos_so_2cfe1c5e97f4deeb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_apropos_so_data_2cfe1c5e97f4deeb [806] =
  "\x3e\x0b\xc8\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x1d\x0d\xb9"
  "\x0d\xba\x24\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\x1d\x08\x07"
  "\x1d\x28\xb3\x28\xb4\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x1d\x06\x07\x85\xc2\x02"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb5"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbb\x1d\xb0\x84\x88\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x28\xb7\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9c\xbf\x88\xb7\x1b"
  "\x2a\x1b\x2a\xb3\x2a\xb4\x2a\xb6\x2a\x9c\xb1\xb2\xb5\x0d\x0d\x9c"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x61\x70\x72\x6f\x70\x6f\x73\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08\x15\x61\x70\x72\x6f\x70\x6f"
  "\x73\x2d\x64\x65\x73\x63\x72\x69\x62\x65\x2d\x65\x6e\x76\x11\x61"
  "\x70\x72\x6f\x70\x6f\x73\x2d\x64\x65\x73\x63\x72\x69\x62\x65\x03"
  "\x02\x19\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x0e\x2d\x3e\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x07\x0a\x61\x70\x72\x6f\x70"
  "\x6f\x73\x65\x72\x04\x07\x0a\x81\x8b\x02\x06\x08\x81\x8b\x02\x05"
  "\x06\x81\x87\x02\x04\x04\x85\x04\x09\x18\x02\x02\x08\x02\x03\x07"
  "\x04\x0c\x0c\x83\x04\x0b\x0a\x81\x87\x02\x0a\x08\x81\x8d\x02\x09"
  "\x06\x81\x87\x02\x08\x04\x85\x04\x0b\x19\x02\x02\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x09\x73\x79\x6d\x62\x6f"
  "\x6c\x3c\x3f\x02\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d"
  "\x65\x03\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62"
  "\x6f\x75\x6e\x64\x2d\x6e\x61\x6d\x65\x73\x03\x13\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e\x74\x03\x18"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x68\x61\x73\x2d"
  "\x70\x61\x72\x65\x6e\x74\x3f\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x04\x05\x73\x6f\x72\x74\x07\x04\x0b\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x3f\x09\x1a\x1e\x81\x87\x02\x19\x1c\x81\x85\x02\x18"
  "\x1a\x81\x8d\x02\x17\x18\x81\x85\x02\x16\x16\x81\x93\x02\x15\x14"
  "\x81\x8f\x02\x14\x12\x81\x8d\x02\x13\x10\x81\x8d\x02\x12\x0e\x81"
  "\x91\x02\x11\x0c\x81\x8d\x02\x10\x0a\x81\x83\x02\x0f\x08\x87\x0c"
  "\x0e\x06\x81\x8b\x02\x0d\x04\x81\x8d\x02\x1d\x39\x02\x02\x08\x6e"
  "\x65\x77\x6c\x69\x6e\x65\x03\x06\x77\x72\x69\x74\x65\x09\x03\x1c"
  "\x06\x81\x85\x02\x1b\x04\x84\x06\x05\x0d\x0a\x02\x03\x15\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70\x61\x63\x6b\x61"
  "\x67\x65\x02\x03\x09\x04\x1f\x08\x81\x85\x02\x1e\x06\x81\x83\x02"
  "\x1d\x04\x83\x04\x07\x11\x09\x09\x04\x0a\x04\x08\x04\x04\x0d\x61"
  "\x70\x72\x6f\x70\x6f\x73\x2d\x6c\x69\x73\x74\x08\x61\x70\x72\x6f"
  "\x70\x6f\x73\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
apropos_so_data_2cfe1c5e97f4deeb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_apropos_so_data_2cfe1c5e97f4deeb [0]))), (sizeof (prog_apropos_so_data_2cfe1c5e97f4deeb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("apropos.so", apropos_so_data_2cfe1c5e97f4deeb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("apropos.so", "4e862263d0d6e778")
