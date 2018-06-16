/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:42-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_6 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define ENVIRONMENT_LABEL_1_3 43
#define DEBUGGING_LABEL_1_2 42
#define OBJECT_1_3 41
#define OBJECT_1_2 40
#define OBJECT_1_1 39
#define OBJECT_1_0 38
#define EXECUTE_CACHE_1_16 23
#define EXECUTE_CACHE_1_11 25
#define EXECUTE_CACHE_1_8 27
#define FREE_REFERENCE_1_3 30
#define FREE_REFERENCE_1_2 31
#define FREE_REFERENCE_1_1 32
#define FREE_REFERENCE_1_0 33
#define FREE_ASSIGNMENT_1_2 35
#define FREE_ASSIGNMENT_1_1 36
#define FREE_ASSIGNMENT_1_0 37
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_12)
DEFLABEL (initialize_packageB_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_26;
  Wrd22 = Wrd26;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_17)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;
  Wrd23 = Wrd27;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_14;
  Wrd29 = Wrd33;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd30.pObj));

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd24.pObj));

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_8)
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_22;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd23.pObj));

DEFLABEL (label_5)
  (Wrd22.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_4)
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define TAG_2_9 2
#define LABEL_2_11 9
#define LABEL_2_14 11
#define TAG_2_15 4
#define ENVIRONMENT_LABEL_2_3 27
#define DEBUGGING_LABEL_2_2 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_16 13
#define EXECUTE_CACHE_2_13 15
#define EXECUTE_CACHE_2_12 17
#define EXECUTE_CACHE_2_10 19
#define EXECUTE_CACHE_2_7 21
#define EXECUTE_CACHE_2_6 23
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto load_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_14);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_11)
DEFLABEL (load_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_2_0]))
    goto label_15;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_14;

DEFLABEL (label_15)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_17)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  if ((Wrd11.Obj) == (current_block [OBJECT_2_0]))
    goto label_16;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_14])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = ((Wrd21.pObj) [3]);
  (Rsp [2]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_2_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_9 7
#define LABEL_3_11 9
#define LABEL_3_7 11
#define LABEL_3_12 13
#define ENVIRONMENT_LABEL_3_3 25
#define DEBUGGING_LABEL_3_2 24
#define EXECUTE_CACHE_3_13 15
#define EXECUTE_CACHE_3_10 17
#define EXECUTE_CACHE_3_8 19
#define FREE_REFERENCE_3_1 22
#define FREE_REFERENCE_3_0 23
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto load_1_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_1_8)
DEFLABEL (load_1_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [4]);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_14;
  Wrd34 = Wrd38;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd35.pObj));

DEFLABEL (label_6)
  (Wrd34.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto file_loadableP_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_loadableP_5)
DEFLABEL (file_loadableP_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_4_0]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define TAG_5_10 3
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_19 15
#define LABEL_5_11 17
#define LABEL_5_16 19
#define TAG_5_17 8
#define LABEL_5_23 21
#define LABEL_5_24 23
#define LABEL_5_22 25
#define LABEL_5_20 27
#define LABEL_5_26 29
#define LABEL_5_28 31
#define TAG_5_29 14
#define ENVIRONMENT_LABEL_5_3 51
#define DEBUGGING_LABEL_5_2 50
#define OBJECT_5_0 49
#define EXECUTE_CACHE_5_27 33
#define EXECUTE_CACHE_5_25 35
#define EXECUTE_CACHE_5_21 37
#define EXECUTE_CACHE_5_18 39
#define EXECUTE_CACHE_5_15 41
#define EXECUTE_CACHE_5_12 43
#define EXECUTE_CACHE_5_8 45
#define EXECUTE_CACHE_5_6 47
#define FREE_REFERENCES_LABEL_5_0 32
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto choose_load_method_21;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_25;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_5_22);
      goto lambda_6;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_5_26);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_5_28);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (choose_load_method_24)
DEFLABEL (choose_load_method_21)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_16])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd7.Obj) = (Rsp [0]);
  goto label_30;

DEFLABEL (label_31)
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd10.Obj) = (Rsp [0]);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_26);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_28])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  goto label_33;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_5_16);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_27)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_5_22);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_5_28);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define LABEL_6_7 9
#define LABEL_6_10 11
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define EXECUTE_CACHE_6_12 13
#define EXECUTE_CACHE_6_11 15
#define EXECUTE_CACHE_6_9 17
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_6_4);
      goto fasloader__loader_5;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasloader__loader_8)
DEFLABEL (fasloader__loader_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_8);
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define TAG_7_8 2
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_13 13
#define LABEL_7_15 15
#define ENVIRONMENT_LABEL_7_3 27
#define DEBUGGING_LABEL_7_2 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_16 17
#define EXECUTE_CACHE_7_14 19
#define EXECUTE_CACHE_7_12 21
#define EXECUTE_CACHE_7_9 23
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto source_loader_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_loader_12)
DEFLABEL (source_loader_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_7_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (loop_15)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_5;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define TAG_8_8 2
#define LABEL_8_9 9
#define TAG_8_10 3
#define LABEL_8_12 11
#define LABEL_8_14 13
#define TAG_8_15 5
#define ENVIRONMENT_LABEL_8_3 22
#define DEBUGGING_LABEL_8_2 21
#define EXECUTE_CACHE_8_16 15
#define EXECUTE_CACHE_8_13 17
#define EXECUTE_CACHE_8_11 19
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_8_4);
      goto wrap_loader_5;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_loader_8)
DEFLABEL (wrap_loader_5)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_9])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd23 = Wrd10;
  (Wrd26.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  ((Wrd23.pObj) [5]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_8_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_14])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd18.pObj) [5]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_8_14);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_9 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 20
#define DEBUGGING_LABEL_9_2 19
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_8 15
#define FREE_REFERENCE_9_0 18
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_9_4);
      goto fasload_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_6)
DEFLABEL (fasload_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (label_8)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [3]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_9])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto file_fasloadableP_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_fasloadableP_5)
DEFLABEL (file_fasloadableP_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_7);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_10_0]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_10 7
#define LABEL_11_13 9
#define LABEL_11_15 11
#define LABEL_11_17 13
#define LABEL_11_7 15
#define LABEL_11_8 17
#define LABEL_11_20 19
#define LABEL_11_19 21
#define LABEL_11_22 23
#define LABEL_11_16 25
#define LABEL_11_23 27
#define TAG_11_24 12
#define LABEL_11_25 29
#define TAG_11_26 13
#define LABEL_11_14 31
#define LABEL_11_27 33
#define LABEL_11_11 35
#define LABEL_11_28 37
#define ENVIRONMENT_LABEL_11_3 55
#define DEBUGGING_LABEL_11_2 54
#define OBJECT_11_2 53
#define OBJECT_11_1 52
#define OBJECT_11_0 51
#define EXECUTE_CACHE_11_29 39
#define EXECUTE_CACHE_11_21 41
#define EXECUTE_CACHE_11_18 43
#define EXECUTE_CACHE_11_12 45
#define EXECUTE_CACHE_11_9 47
#define EXECUTE_CACHE_11_6 49
#define FREE_REFERENCES_LABEL_11_0 38
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_11_4);
      goto choose_fasload_method_26;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_11_19);
      goto lambda_14;

    case 10:
      current_block = (Rpc - LABEL_11_22);
      goto lambda_22;

    case 11:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_11_23);
      goto lambda_32;

    case 13:
      current_block = (Rpc - LABEL_11_25);
      goto lambda_33;

    case 14:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_11_27);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (choose_fasload_method_29)
DEFLABEL (choose_fasload_method_26)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_38)
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_38;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (lambda_30)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_11_19);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_31)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_11_22);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_23])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_25])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  ((Wrd19.pObj) [3]) = (Wrd6.Obj);
  ((Wrd19.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_11_23);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11_28);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_11_25);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define TAG_12_8 2
#define LABEL_12_9 9
#define TAG_12_10 3
#define LABEL_12_11 11
#define LABEL_12_13 13
#define LABEL_12_15 15
#define TAG_12_16 6
#define LABEL_12_17 17
#define TAG_12_18 7
#define LABEL_12_22 19
#define LABEL_12_19 21
#define LABEL_12_20 23
#define ENVIRONMENT_LABEL_12_3 41
#define DEBUGGING_LABEL_12_2 40
#define OBJECT_12_2 39
#define OBJECT_12_1 38
#define OBJECT_12_0 37
#define EXECUTE_CACHE_12_24 25
#define EXECUTE_CACHE_12_23 27
#define EXECUTE_CACHE_12_21 29
#define EXECUTE_CACHE_12_14 31
#define EXECUTE_CACHE_12_12 33
#define EXECUTE_CACHE_12_6 35
#define FREE_REFERENCES_LABEL_12_0 24
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_12_4);
      goto try_fasl_file_13;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_12_17);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_12_20);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_fasl_file_16)
DEFLABEL (try_fasl_file_13)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_21;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_15])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_17])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  ((Wrd22.pObj) [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_12_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [3]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_22);
  goto label_24;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_12_17);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_9 7
#define TAG_13_10 2
#define LABEL_13_7 9
#define LABEL_13_11 11
#define TAG_13_12 4
#define LABEL_13_13 13
#define LABEL_13_15 15
#define TAG_13_16 6
#define LABEL_13_17 17
#define TAG_13_18 7
#define LABEL_13_19 19
#define TAG_13_20 8
#define LABEL_13_21 21
#define LABEL_13_24 23
#define TAG_13_25 10
#define ENVIRONMENT_LABEL_13_3 36
#define DEBUGGING_LABEL_13_2 35
#define EXECUTE_CACHE_13_23 25
#define EXECUTE_CACHE_13_22 27
#define EXECUTE_CACHE_13_14 29
#define EXECUTE_CACHE_13_8 31
#define EXECUTE_CACHE_13_6 33
#define FREE_REFERENCES_LABEL_13_0 24
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_13_4);
      goto try_object_file_13;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto lambda_18;

    case 5:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_13_17);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_13_19);
      goto lambda_21;

    case 9:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_13_24);
      goto lambda_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_object_file_16)
DEFLABEL (try_object_file_13)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_24;

DEFLABEL (label_25)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_13_9);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_11])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_17])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_13_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_13_15);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_19])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_24])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_13_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_13_19);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_13_24);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_9 9
#define LABEL_14_11 11
#define LABEL_14_12 13
#define LABEL_14_13 15
#define LABEL_14_14 17
#define LABEL_14_17 19
#define LABEL_14_18 21
#define ENVIRONMENT_LABEL_14_3 40
#define DEBUGGING_LABEL_14_2 39
#define OBJECT_14_5 38
#define OBJECT_14_4 37
#define OBJECT_14_3 36
#define OBJECT_14_2 35
#define OBJECT_14_1 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_16 23
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_10 27
#define EXECUTE_CACHE_14_8 29
#define EXECUTE_CACHE_14_6 31
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto fasl_fileP_16;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14_17);
      goto loop_11;

    case 9:
      current_block = (Rpc - LABEL_14_18);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasl_fileP_21)
DEFLABEL (fasl_fileP_16)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_22)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_27;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd12.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_11;

DEFLABEL (label_25)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd15.Obj) = (current_block [OBJECT_14_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_14_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_29;
  Rvl = (current_block [OBJECT_14_5]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_32;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_32;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pChr) = (& ((Wrd24.pChr) [(Wrd14.Lng)]));
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd17.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_31)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_14_4])))
    goto label_30;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd39.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (Rsp [0]) = (Wrd37.Obj);
  goto loop_11;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_32)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 9
#define EXECUTE_CACHE_15_8 11
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto object_fileP_4;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_fileP_7)
DEFLABEL (object_fileP_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 30))
    goto label_8;
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_8 5
#define LABEL_16_10 7
#define LABEL_16_11 9
#define LABEL_16_12 11
#define LABEL_16_13 13
#define LABEL_16_14 15
#define LABEL_16_6 17
#define LABEL_16_5 19
#define LABEL_16_17 21
#define LABEL_16_15 23
#define ENVIRONMENT_LABEL_16_3 43
#define DEBUGGING_LABEL_16_2 42
#define OBJECT_16_6 41
#define OBJECT_16_5 40
#define OBJECT_16_4 39
#define OBJECT_16_3 38
#define OBJECT_16_2 37
#define OBJECT_16_1 36
#define OBJECT_16_0 35
#define EXECUTE_CACHE_16_18 25
#define EXECUTE_CACHE_16_16 27
#define EXECUTE_CACHE_16_9 29
#define EXECUTE_CACHE_16_7 31
#define FREE_REFERENCE_16_0 34
#define FREE_REFERENCES_LABEL_16_0 24
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd17;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_16_4);
      goto load_purification_root_20;

    case 1:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_16_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_16_12);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_16_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_purification_root_27)
DEFLABEL (load_purification_root_20)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_49)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_16_4]);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd31.Lng))))
    goto label_47;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd13.Obj) == (Wrd15.Obj)))
    goto label_46;

DEFLABEL (label_45)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd46.Obj) = (MAKE_OBJECT (26, (Wrd51.uLng)));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd55.Lng) = ((Wrd52.Lng) - 3L);
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  (* (--Rsp)) = (Wrd56.Obj);
  Wrd58 = Wrd55;
  if ((Wrd58.Lng) < 0)
    goto label_44;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_43;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) (Wrd58.Lng)) < ((unsigned long) (Wrd72.Lng))))
    goto label_43;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd64.pObj) = (& ((Wrd49.pObj) [(Wrd61.Lng)]));
  (Wrd59.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd59.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 1)
    goto label_36;

DEFLABEL (label_35)
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd17.Obj);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = (Wrd17.Obj);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (Rsp [1]);

DEFLABEL (label_31)
  goto label_29;

DEFLABEL (label_36)
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_41;
  Wrd81 = Wrd85;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_39;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [0]);

DEFLABEL (label_38)
  (Wrd96.Obj) = (* (Rsp++));
  if (! ((Wrd87.Obj) == (Wrd96.Obj)))
    goto label_35;
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_37;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_37)
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd17.Obj) = ((Wrd99.pObj) [1]);
  goto label_34;

DEFLABEL (label_39)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_25)
  (Wrd87.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_12])), (Wrd82.pObj));

DEFLABEL (label_24)
  (Wrd81.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_23)
  (Wrd59.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [3]));
  goto label_33;

DEFLABEL (label_46)
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [1]));
  goto label_33;

DEFLABEL (label_47)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  goto label_49;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_14);
  (Wrd17.Obj) = Rvl;
  goto label_33;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_9 9
#define TAG_17_10 3
#define LABEL_17_7 11
#define TAG_17_8 4
#define LABEL_17_12 13
#define LABEL_17_13 15
#define LABEL_17_14 17
#define ENVIRONMENT_LABEL_17_3 29
#define DEBUGGING_LABEL_17_2 28
#define OBJECT_17_1 27
#define OBJECT_17_0 26
#define EXECUTE_CACHE_17_11 19
#define FREE_REFERENCE_17_1 22
#define FREE_REFERENCE_17_0 23
#define FREE_ASSIGNMENT_17_0 25
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
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
      goto maybe_notify_12;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_22;

    case 4:
      current_block = (Rpc - LABEL_17_7);
      goto swapB_21;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_notify_20)
DEFLABEL (maybe_notify_12)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_17_0]))
    goto label_28;
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_7])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  ((Wrd29.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_9])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  ((Wrd22.pObj) [4]) = (Wrd13.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd30.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (label_25)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_27;
  Wrd31 = Wrd35;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd32.pObj));

DEFLABEL (label_14)
  (Wrd31.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_30;
  Wrd37 = Wrd41;

DEFLABEL (label_29)
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd38.pObj));

DEFLABEL (label_15)
  (Wrd37.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_17_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [0]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_17_7);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_35)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_18)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_12])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define TAG_18_8 2
#define LABEL_18_10 9
#define LABEL_18_12 11
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define OBJECT_18_0 21
#define EXECUTE_CACHE_18_14 13
#define EXECUTE_CACHE_18_13 15
#define EXECUTE_CACHE_18_11 17
#define EXECUTE_CACHE_18_9 19
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto loading_notifier_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (loading_notifier_7)
DEFLABEL (loading_notifier_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_7 7
#define LABEL_19_8 9
#define TAG_19_9 3
#define LABEL_19_11 11
#define LABEL_19_13 13
#define ENVIRONMENT_LABEL_19_3 25
#define DEBUGGING_LABEL_19_2 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_15 15
#define EXECUTE_CACHE_19_14 17
#define EXECUTE_CACHE_19_12 19
#define EXECUTE_CACHE_19_10 21
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto init_notifier_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_notifier_8)
DEFLABEL (init_notifier_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_7);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_19_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_9 7
#define TAG_20_10 2
#define LABEL_20_7 9
#define TAG_20_8 3
#define LABEL_20_12 11
#define LABEL_20_13 13
#define LABEL_20_14 15
#define ENVIRONMENT_LABEL_20_3 28
#define DEBUGGING_LABEL_20_2 27
#define OBJECT_20_1 26
#define OBJECT_20_0 25
#define EXECUTE_CACHE_20_11 17
#define EXECUTE_CACHE_20_6 19
#define FREE_REFERENCE_20_0 22
#define FREE_ASSIGNMENT_20_0 24
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_20_4);
      goto with_eval_unit_10;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_9);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto swapB_17;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_20_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_eval_unit_16)
DEFLABEL (with_eval_unit_10)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_7])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  ((Wrd20.pObj) [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_20_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_17)
  CLOSURE_HEADER (LABEL_20_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_12])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 18
#define DEBUGGING_LABEL_21_2 17
#define OBJECT_21_0 16
#define EXECUTE_CACHE_21_8 11
#define FREE_REFERENCE_21_1 14
#define FREE_REFERENCE_21_0 15
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto current_eval_unit_3;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_eval_unit_8)
DEFLABEL (current_eval_unit_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == (current_block [OBJECT_21_0]))
    goto label_13;
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_13)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;
  Wrd22 = Wrd26;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd23.pObj));

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_8 7
#define LABEL_22_6 9
#define ENVIRONMENT_LABEL_22_3 20
#define DEBUGGING_LABEL_22_2 19
#define EXECUTE_CACHE_22_10 11
#define EXECUTE_CACHE_22_9 13
#define EXECUTE_CACHE_22_7 15
#define FREE_REFERENCE_22_0 18
#define FREE_REFERENCES_LABEL_22_0 10
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto current_load_pathname_3;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_load_pathname_7)
DEFLABEL (current_load_pathname_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;
  Wrd10 = Wrd14;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCE_23_0 10
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto current_load_environment_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_load_environment_6)
DEFLABEL (current_load_environment_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_23_0]))
    goto label_7;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 21
#define DEBUGGING_LABEL_24_2 20
#define OBJECT_24_2 19
#define OBJECT_24_1 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_6 11
#define FREE_REFERENCE_24_0 14
#define FREE_ASSIGNMENT_24_0 16
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_24_4);
      goto set_load_environmentB_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_load_environmentB_7)
DEFLABEL (set_load_environmentB_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  if (! ((Wrd6.Obj) == (current_block [OBJECT_24_1])))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_24_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd13.pObj) [0]) = (Wrd14.Obj);
  goto label_8;

DEFLABEL (label_11)
  if ((Wrd21.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_8])), (Wrd13.pObj), (Wrd14.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_9 7
#define TAG_25_10 2
#define LABEL_25_7 9
#define TAG_25_8 3
#define LABEL_25_12 11
#define LABEL_25_13 13
#define LABEL_25_14 15
#define ENVIRONMENT_LABEL_25_3 28
#define DEBUGGING_LABEL_25_2 27
#define OBJECT_25_1 26
#define OBJECT_25_0 25
#define EXECUTE_CACHE_25_11 17
#define EXECUTE_CACHE_25_6 19
#define FREE_REFERENCE_25_0 22
#define FREE_ASSIGNMENT_25_0 24
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto with_load_environment_10;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto swapB_17;

    case 4:
      current_block = (Rpc - LABEL_25_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_25_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_25_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_load_environment_16)
DEFLABEL (with_load_environment_10)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd8.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_9])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_25_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_17)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_25_12])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_4 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define ENVIRONMENT_LABEL_26_3 25
#define DEBUGGING_LABEL_26_2 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_8 15
#define FREE_REFERENCE_26_2 18
#define FREE_REFERENCE_26_1 19
#define FREE_REFERENCE_26_0 20
#define FREE_ASSIGNMENT_26_0 22
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_26_4);
      goto load_push_hookB_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_push_hookB_9)
DEFLABEL (load_push_hookB_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd23.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_10])), (Wrd23.pObj), (Wrd19.Obj));

DEFLABEL (label_6)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd14.pObj));

DEFLABEL (label_5)
  (Wrd13.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_18;
  Wrd40 = Wrd44;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_7])), (Wrd41.pObj));

DEFLABEL (label_7)
  (Wrd40.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define TAG_27_9 2
#define LABEL_27_6 9
#define TAG_27_7 3
#define LABEL_27_13 11
#define LABEL_27_14 13
#define LABEL_27_15 15
#define LABEL_27_16 17
#define LABEL_27_17 19
#define LABEL_27_18 21
#define LABEL_27_11 23
#define LABEL_27_12 25
#define LABEL_27_23 27
#define LABEL_27_19 29
#define LABEL_27_20 31
#define LABEL_27_22 33
#define LABEL_27_25 35
#define TAG_27_26 16
#define ENVIRONMENT_LABEL_27_3 53
#define DEBUGGING_LABEL_27_2 52
#define OBJECT_27_2 51
#define OBJECT_27_1 50
#define OBJECT_27_0 49
#define EXECUTE_CACHE_27_24 37
#define EXECUTE_CACHE_27_21 39
#define EXECUTE_CACHE_27_10 41
#define FREE_REFERENCE_27_1 44
#define FREE_REFERENCE_27_0 45
#define FREE_ASSIGNMENT_27_1 47
#define FREE_ASSIGNMENT_27_0 48
#define FREE_REFERENCES_LABEL_27_0 36
#define NUMBER_OF_LINKER_SECTIONS_27_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto handle_load_hooks_24;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_36;

    case 3:
      current_block = (Rpc - LABEL_27_6);
      goto swapB_35;

    case 4:
      current_block = (Rpc - LABEL_27_13);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_27_14);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_27_15);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_27_16);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_27_17);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_27_18);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_27_11);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_27_23);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_27_20);
      goto lambda_0;

    case 15:
      current_block = (Rpc - LABEL_27_22);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_27_25);
      goto lambda_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_load_hooks_34)
DEFLABEL (handle_load_hooks_24)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_6])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  Wrd27 = Wrd29;
  ((Wrd27.pObj) [2]) = (Wrd10.Obj);
  ((Wrd27.pObj) [3]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_8])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd19.Obj);
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_27_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_12);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;
  Wrd10 = Wrd14;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_22);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_25])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_23])), (Wrd11.pObj));

DEFLABEL (label_32)
  (Wrd10.Obj) = Rvl;
  goto label_40;

DEFLABEL (swapB_35)
  CLOSURE_HEADER (LABEL_27_6);

DEFLABEL (swapB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_54)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_51)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  Wrd57 = Wrd61;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_45)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_27_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_31)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_30)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_27_16])), (Wrd58.pObj));

DEFLABEL (label_29)
  (Wrd57.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_28)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_27)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_27_13])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_37)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_27_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_38)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_27_20);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_27_25);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define OBJECT_28_3 12
#define OBJECT_28_2 11
#define OBJECT_28_1 10
#define OBJECT_28_0 9
#define EXECUTE_CACHE_28_6 7
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto load_failure_3;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_failure_6)
DEFLABEL (load_failure_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_12 11
#define LABEL_29_11 13
#define ENVIRONMENT_LABEL_29_3 28
#define DEBUGGING_LABEL_29_2 27
#define EXECUTE_CACHE_29_15 15
#define EXECUTE_CACHE_29_14 17
#define EXECUTE_CACHE_29_13 19
#define EXECUTE_CACHE_29_10 21
#define EXECUTE_CACHE_29_8 23
#define EXECUTE_CACHE_29_6 25
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto fasload_object_file_8;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasload_object_file_11)
DEFLABEL (fasload_object_file_8)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_11);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define LABEL_30_5 7
#define TAG_30_6 2
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_16 13
#define LABEL_30_13 15
#define LABEL_30_12 17
#define LABEL_30_17 19
#define ENVIRONMENT_LABEL_30_3 41
#define DEBUGGING_LABEL_30_2 40
#define OBJECT_30_0 39
#define EXECUTE_CACHE_30_21 21
#define EXECUTE_CACHE_30_20 23
#define EXECUTE_CACHE_30_19 25
#define EXECUTE_CACHE_30_18 27
#define EXECUTE_CACHE_30_15 29
#define EXECUTE_CACHE_30_14 31
#define EXECUTE_CACHE_30_11 33
#define EXECUTE_CACHE_30_8 35
#define FREE_REFERENCE_30_0 38
#define FREE_REFERENCES_LABEL_30_0 20
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_30_4);
      goto register_liarc_object_file_9;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_liarc_object_file_13)
DEFLABEL (register_liarc_object_file_9)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_16;
  Wrd13 = Wrd17;

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_21]));

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_19)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_12);
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define TAG_31_7 2
#define LABEL_31_9 9
#define ENVIRONMENT_LABEL_31_3 18
#define DEBUGGING_LABEL_31_2 17
#define OBJECT_31_1 16
#define OBJECT_31_0 15
#define EXECUTE_CACHE_31_10 11
#define EXECUTE_CACHE_31_8 13
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_31_4);
      goto liarc_object_file_nonce_5;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (liarc_object_file_nonce_8)
DEFLABEL (liarc_object_file_nonce_5)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 30)
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = Rvl;

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_31_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_9 11
#define ENVIRONMENT_LABEL_32_3 22
#define DEBUGGING_LABEL_32_2 21
#define OBJECT_32_3 20
#define OBJECT_32_2 19
#define OBJECT_32_1 18
#define OBJECT_32_0 17
#define EXECUTE_CACHE_32_10 13
#define EXECUTE_CACHE_32_8 15
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_4);
      goto initialize_object_file_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_object_file_7)
DEFLABEL (initialize_object_file_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_12 9
#define LABEL_33_9 11
#define LABEL_33_10 13
#define LABEL_33_15 15
#define LABEL_33_17 17
#define LABEL_33_19 19
#define LABEL_33_21 21
#define LABEL_33_24 23
#define LABEL_33_27 25
#define LABEL_33_28 27
#define LABEL_33_29 29
#define LABEL_33_25 31
#define ENVIRONMENT_LABEL_33_3 67
#define DEBUGGING_LABEL_33_2 66
#define OBJECT_33_4 65
#define OBJECT_33_3 64
#define OBJECT_33_2 63
#define OBJECT_33_1 62
#define OBJECT_33_0 61
#define EXECUTE_CACHE_33_32 33
#define EXECUTE_CACHE_33_31 35
#define EXECUTE_CACHE_33_30 37
#define EXECUTE_CACHE_33_26 39
#define EXECUTE_CACHE_33_23 41
#define EXECUTE_CACHE_33_22 43
#define EXECUTE_CACHE_33_20 45
#define EXECUTE_CACHE_33_18 47
#define EXECUTE_CACHE_33_16 49
#define EXECUTE_CACHE_33_14 51
#define EXECUTE_CACHE_33_13 53
#define EXECUTE_CACHE_33_11 55
#define EXECUTE_CACHE_33_8 57
#define EXECUTE_CACHE_33_7 59
#define FREE_REFERENCES_LABEL_33_0 32
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_4);
      goto object_file_prefix_20;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_33_21);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_33_24);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_33_27);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_33_28);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_33_29);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_33_25);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_file_prefix_24)
DEFLABEL (object_file_prefix_20)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (label_25)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_21);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_32]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 30))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));

DEFLABEL (label_27)
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd37.Lng) = ((Wrd34.Lng) - 3L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33_27);
  (Wrd43.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_33_3]);
  (Wrd17.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_31]));

DEFLABEL (label_28)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_29]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd12.Obj) = (current_block [OBJECT_33_1]);
  goto label_26;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (* (--Rsp)) = Rvl;
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_0 17
#define EXECUTE_CACHE_34_10 11
#define EXECUTE_CACHE_34_9 13
#define EXECUTE_CACHE_34_8 15
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto built_in_object_file_3;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (built_in_object_file_6)
DEFLABEL (built_in_object_file_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_9 9
#define EXECUTE_CACHE_35_8 11
#define EXECUTE_CACHE_35_7 13
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto object_file_pathname_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_file_pathname_5)
DEFLABEL (object_file_pathname_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_8 5
#define LABEL_36_9 7
#define LABEL_36_5 9
#define LABEL_36_6 11
#define LABEL_36_11 13
#define LABEL_36_14 15
#define LABEL_36_16 17
#define TAG_36_17 7
#define ENVIRONMENT_LABEL_36_3 40
#define DEBUGGING_LABEL_36_2 39
#define OBJECT_36_3 38
#define OBJECT_36_2 37
#define OBJECT_36_1 36
#define OBJECT_36_0 35
#define EXECUTE_CACHE_36_20 19
#define EXECUTE_CACHE_36_19 21
#define EXECUTE_CACHE_36_18 23
#define EXECUTE_CACHE_36_15 25
#define EXECUTE_CACHE_36_13 27
#define EXECUTE_CACHE_36_12 29
#define EXECUTE_CACHE_36_10 31
#define EXECUTE_CACHE_36_7 33
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_36_4);
      goto load_library_object_file_9;

    case 1:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_36_16);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_library_object_file_12)
DEFLABEL (load_library_object_file_9)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_36_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_16])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_6;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_18]));

DEFLABEL (label_17)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_8);
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_36_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_8 9
#define TAG_37_9 3
#define LABEL_37_15 11
#define LABEL_37_16 13
#define LABEL_37_17 15
#define LABEL_37_18 17
#define LABEL_37_19 19
#define LABEL_37_20 21
#define LABEL_37_23 23
#define LABEL_37_25 25
#define LABEL_37_28 27
#define LABEL_37_31 29
#define LABEL_37_12 31
#define LABEL_37_13 33
#define LABEL_37_35 35
#define LABEL_37_32 37
#define LABEL_37_29 39
#define LABEL_37_37 41
#define LABEL_37_26 43
#define LABEL_37_38 45
#define LABEL_37_24 47
#define LABEL_37_43 49
#define LABEL_37_40 51
#define LABEL_37_42 53
#define LABEL_37_48 55
#define LABEL_37_45 57
#define LABEL_37_49 59
#define LABEL_37_44 61
#define LABEL_37_46 63
#define ENVIRONMENT_LABEL_37_3 103
#define DEBUGGING_LABEL_37_2 102
#define OBJECT_37_2 101
#define OBJECT_37_1 100
#define OBJECT_37_0 99
#define EXECUTE_CACHE_37_52 65
#define EXECUTE_CACHE_37_51 67
#define EXECUTE_CACHE_37_50 69
#define EXECUTE_CACHE_37_47 71
#define EXECUTE_CACHE_37_41 73
#define EXECUTE_CACHE_37_39 75
#define EXECUTE_CACHE_37_36 77
#define EXECUTE_CACHE_37_34 79
#define EXECUTE_CACHE_37_33 81
#define EXECUTE_CACHE_37_30 83
#define EXECUTE_CACHE_37_27 85
#define EXECUTE_CACHE_37_22 87
#define EXECUTE_CACHE_37_21 89
#define EXECUTE_CACHE_37_14 91
#define EXECUTE_CACHE_37_11 93
#define EXECUTE_CACHE_37_10 95
#define EXECUTE_CACHE_37_7 97
#define FREE_REFERENCES_LABEL_37_0 64
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd110;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_37_4);
      goto with_loader_base_uri_41;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto lambda_50;

    case 4:
      current_block = (Rpc - LABEL_37_15);
      goto continuation_32;

    case 5:
      current_block = (Rpc - LABEL_37_16);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_37_17);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_37_18);
      goto loop_35;

    case 8:
      current_block = (Rpc - LABEL_37_19);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_37_20);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_37_23);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_37_25);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_37_28);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_37_31);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_37_35);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_37_32);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_37_29);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_37_37);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_37_26);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_37_38);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_37_24);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_37_43);
      goto lambda_10;

    case 24:
      current_block = (Rpc - LABEL_37_40);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_37_42);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_37_48);
      goto continuation_8;

    case 27:
      current_block = (Rpc - LABEL_37_45);
      goto continuation_4;

    case 28:
      current_block = (Rpc - LABEL_37_49);
      goto label_43;

    case 29:
      current_block = (Rpc - LABEL_37_44);
      goto continuation_5;

    case 30:
      current_block = (Rpc - LABEL_37_46);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_loader_base_uri_49)
DEFLABEL (with_loader_base_uri_41)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_8])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_37_8);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_36]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_37_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_36]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_37_31);
  (Wrd17.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd17.Obj)))
    goto label_53;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_32]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_37_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_37_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_29]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_30]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_37_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_37_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_41]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_23]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_26]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_37_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_37_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_41]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_37_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  goto lambda_10;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_37_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_10;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_37_42);
  (Rsp [1]) = Rvl;
  goto loop_35;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_56)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_55)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_34]));

DEFLABEL (label_54)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (lambda_52)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_37_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_47]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_52]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  (Wrd5.Obj) = (Rsp [0]);

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_51]));

DEFLABEL (label_60)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_48]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd7.uLng) == 1))
    goto label_63;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_50]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_37_48);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_61;
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_61)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd5.Obj) = ((Wrd25.pObj) [1]);
  goto label_58;

DEFLABEL (label_63)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_49]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_44);
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (loop_51)
DEFLABEL (loop_35)
  INTERRUPT_CHECK (26, LABEL_37_18);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 1)
    goto label_64;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd60.Obj) = (current_block [OBJECT_37_2]);
  (Wrd61.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (label_64)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rsp = (& (Rsp [3]));
  goto label_56;

DEFLABEL (label_66)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd72.Obj);
  if (! ((Wrd55.uLng) == 1))
    goto label_74;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_73)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_72;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_21]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_37_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_70;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd93.Obj);
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_68;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd102.Obj) = ((Wrd104.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd102.Obj);
  goto loop_35;

DEFLABEL (label_68)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_47)
  (Wrd102.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_46)
  (Wrd93.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define LABEL_38_9 11
#define ENVIRONMENT_LABEL_38_3 24
#define DEBUGGING_LABEL_38_2 23
#define EXECUTE_CACHE_38_13 13
#define EXECUTE_CACHE_38_12 15
#define EXECUTE_CACHE_38_11 17
#define EXECUTE_CACHE_38_10 19
#define EXECUTE_CACHE_38_8 21
#define FREE_REFERENCES_LABEL_38_0 12
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_38_4);
      goto pathname__standard_uri_5;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname__standard_uri_8)
DEFLABEL (pathname__standard_uri_5)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_9 11
#define LABEL_39_10 13
#define LABEL_39_12 15
#define ENVIRONMENT_LABEL_39_3 33
#define DEBUGGING_LABEL_39_2 32
#define OBJECT_39_0 31
#define EXECUTE_CACHE_39_17 17
#define EXECUTE_CACHE_39_16 19
#define EXECUTE_CACHE_39_15 21
#define EXECUTE_CACHE_39_13 23
#define EXECUTE_CACHE_39_11 25
#define EXECUTE_CACHE_39_14 27
#define EXECUTE_CACHE_39_6 29
#define FREE_REFERENCES_LABEL_39_0 16
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto standard_uri__pathname_7;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_uri__pathname_10)
DEFLABEL (standard_uri__pathname_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_17]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_5 3
#define LABEL_40_6 5
#define LABEL_40_4 7
#define LABEL_40_7 9
#define LABEL_40_8 11
#define LABEL_40_10 13
#define ENVIRONMENT_LABEL_40_3 25
#define DEBUGGING_LABEL_40_2 24
#define OBJECT_40_0 23
#define EXECUTE_CACHE_40_11 15
#define EXECUTE_CACHE_40_9 17
#define FREE_REFERENCE_40_0 20
#define FREE_ASSIGNMENT_40_0 22
#define FREE_REFERENCES_LABEL_40_0 14
#define NUMBER_OF_LINKER_SECTIONS_40_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_40_4);
      goto system_uri_2;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_40_8);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_uri_9)
DEFLABEL (system_uri_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd12.uLng) == 30)
    goto label_13;

DEFLABEL (label_12)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_11;
  Wrd13 = Wrd17;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_10])), (Wrd14.pObj));

DEFLABEL (label_5)
  (Wrd13.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_17;
  Wrd24 = Wrd28;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd31.pObj) [0]) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_6])), (Wrd31.pObj), Rvl);

DEFLABEL (label_7)
  goto label_12;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_8])), (Wrd25.pObj));

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 14
#define DEBUGGING_LABEL_41_2 13
#define OBJECT_41_1 12
#define OBJECT_41_0 11
#define EXECUTE_CACHE_41_7 7
#define EXECUTE_CACHE_41_6 9
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto system_library_uri_1;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_library_uri_4)
DEFLABEL (system_library_uri_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_7 7
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_42_4);
      goto maybe_merge_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_merge_5)
DEFLABEL (maybe_merge_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_42_0])))
    goto label_6;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define ENVIRONMENT_LABEL_43_3 16
#define DEBUGGING_LABEL_43_2 15
#define OBJECT_43_1 14
#define OBJECT_43_0 13
#define EXECUTE_CACHE_43_7 9
#define FREE_ASSIGNMENT_43_0 12
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_43_4);
      goto process_command_line_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_command_line_5)
DEFLABEL (process_command_line_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_43_0]));
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (label_8)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_43_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 9
#define DEBUGGING_LABEL_44_2 8
#define FREE_REFERENCE_44_0 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto command_line_0;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_line_4)
DEFLABEL (command_line_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_9 5
#define LABEL_45_11 7
#define LABEL_45_14 9
#define TAG_45_15 3
#define LABEL_45_12 11
#define TAG_45_13 4
#define LABEL_45_20 13
#define LABEL_45_21 15
#define LABEL_45_22 17
#define LABEL_45_7 19
#define TAG_45_8 8
#define LABEL_45_23 21
#define LABEL_45_5 23
#define TAG_45_6 10
#define LABEL_45_26 25
#define LABEL_45_27 27
#define LABEL_45_29 29
#define LABEL_45_17 31
#define LABEL_45_30 33
#define LABEL_45_18 35
#define LABEL_45_34 37
#define LABEL_45_24 39
#define LABEL_45_28 41
#define LABEL_45_31 43
#define LABEL_45_41 45
#define LABEL_45_32 47
#define LABEL_45_44 49
#define LABEL_45_35 51
#define LABEL_45_39 53
#define LABEL_45_37 55
#define LABEL_45_42 57
#define LABEL_45_45 59
#define LABEL_45_46 61
#define TAG_45_47 29
#define ENVIRONMENT_LABEL_45_3 95
#define DEBUGGING_LABEL_45_2 94
#define OBJECT_45_7 93
#define OBJECT_45_6 92
#define OBJECT_45_5 91
#define OBJECT_45_4 90
#define OBJECT_45_3 89
#define OBJECT_45_2 88
#define OBJECT_45_1 87
#define OBJECT_45_0 86
#define EXECUTE_CACHE_45_43 63
#define EXECUTE_CACHE_45_40 65
#define EXECUTE_CACHE_45_38 67
#define EXECUTE_CACHE_45_36 69
#define EXECUTE_CACHE_45_33 71
#define EXECUTE_CACHE_45_25 73
#define EXECUTE_CACHE_45_19 75
#define EXECUTE_CACHE_45_16 77
#define EXECUTE_CACHE_45_10 79
#define FREE_REFERENCE_45_0 82
#define FREE_ASSIGNMENT_45_1 84
#define FREE_ASSIGNMENT_45_0 85
#define FREE_REFERENCES_LABEL_45_0 62
#define NUMBER_OF_LINKER_SECTIONS_45_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd53;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd70;
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
      current_block = (Rpc - LABEL_45_4);
      goto default_process_command_line_39;

    case 1:
      current_block = (Rpc - LABEL_45_9);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_45_11);
      goto label_41;

    case 3:
      current_block = (Rpc - LABEL_45_14);
      goto lambda_57;

    case 4:
      current_block = (Rpc - LABEL_45_12);
      goto swapB_56;

    case 5:
      current_block = (Rpc - LABEL_45_20);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_45_21);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_45_22);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_45_7);
      goto process_keyword_24;

    case 9:
      current_block = (Rpc - LABEL_45_23);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_45_5);
      goto find_next_keyword_32;

    case 11:
      current_block = (Rpc - LABEL_45_26);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_45_27);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_45_29);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_45_30);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_0;

    case 17:
      current_block = (Rpc - LABEL_45_34);
      goto done_37;

    case 18:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_45_28);
      goto continuation_30;

    case 20:
      current_block = (Rpc - LABEL_45_31);
      goto continuation_4;

    case 21:
      current_block = (Rpc - LABEL_45_41);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_45_32);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_45_44);
      goto continuation_35;

    case 24:
      current_block = (Rpc - LABEL_45_35);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_45_39);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_45_37);
      goto continuation_17;

    case 27:
      current_block = (Rpc - LABEL_45_42);
      goto lambda_2;

    case 28:
      current_block = (Rpc - LABEL_45_45);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_45_46);
      goto lambda_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_process_command_line_53)
DEFLABEL (default_process_command_line_39)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd70.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 1;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd68.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_7])));
  Rhp += 2;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd68.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  Wrd63 = Wrd68;
  ((Wrd63.pObj) [2]) = (Wrd71.Obj);
  ((Wrd63.pObj) [3]) = (Wrd7.Obj);
  ((Wrd70.pObj) [2]) = (Wrd69.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (current_block [OBJECT_45_1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_0]));
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd21.Obj) = ((Wrd11.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd11.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_61)
  (Wrd28.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_12])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  ((Wrd44.pObj) [2]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd45.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_14])));
  Rhp += 3;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd37 = Wrd32;
  (Wrd38.Obj) = (Rsp [5]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  ((Wrd37.pObj) [4]) = (Wrd34.Obj);
  (Rsp [4]) = (Wrd31.Obj);
  (Rsp [5]) = (Wrd45.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (label_63)
  if ((Wrd21.Obj) == (Wrd12.Obj))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_11])), (Wrd11.pObj), (Wrd12.Obj));

DEFLABEL (label_41)
  goto label_61;

DEFLABEL (label_64)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_0]));
  (Wrd54.Obj) = ((Wrd46.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd46.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (label_67)
  if ((Wrd54.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_9])), (Wrd46.pObj), (Wrd10.Obj));

DEFLABEL (label_42)
  goto label_65;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_45_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto process_keyword_24;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_71)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [4]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_32);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_42]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_43]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_31);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;
  Wrd5 = Wrd9;

DEFLABEL (label_69)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_45_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_41])), (Wrd6.pObj));

DEFLABEL (label_51)
  (Wrd5.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_73)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_30])), (Wrd6.pObj), Rvl);

DEFLABEL (label_50)
  goto label_71;

DEFLABEL (swapB_56)
  CLOSURE_HEADER (LABEL_45_12);

DEFLABEL (swapB_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  Wrd5 = Wrd9;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_77)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_45_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_45)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_44)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_45_20])), (Wrd6.pObj));

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (process_keyword_55)
DEFLABEL (process_keyword_24)
  INTERRUPT_CHECK (26, LABEL_45_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_83;
  Rsp = (& (Rsp [2]));
  goto done_37;

DEFLABEL (label_83)
  if (! ((Wrd6.uLng) == 1))
    goto label_87;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_86)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_45_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_40]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_45_39);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_84;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto find_next_keyword_32;

DEFLABEL (label_84)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_45);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_46])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_85)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45_37);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto find_next_keyword_32;

DEFLABEL (label_87)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (find_next_keyword_54)
DEFLABEL (find_next_keyword_32)
  INTERRUPT_CHECK (26, LABEL_45_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_95;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_94)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_93;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_92)
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_88;
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [4]));
  goto done_37;

DEFLABEL (label_88)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd33.Obj);
  if (! ((Wrd28.uLng) == 1))
    goto label_91;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_90)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_25]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_45_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto process_keyword_24;

DEFLABEL (label_89)
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  goto find_next_keyword_32;

DEFLABEL (label_91)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_29]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 1);

DEFLABEL (label_48)
  (Wrd14.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_5]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (done_58)
DEFLABEL (done_37)
  INTERRUPT_CHECK (26, LABEL_45_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_36]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45_35);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_44]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (current_block [OBJECT_45_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_38]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_45_44);
  goto label_96;

DEFLABEL (lambda_59)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_45_42);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_45_46);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  ((Wrd14.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_98)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [4]);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Rsp [0]) = (Wrd23.Obj);
  goto process_keyword_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_5 7
#define LABEL_46_9 9
#define LABEL_46_7 11
#define ENVIRONMENT_LABEL_46_3 21
#define DEBUGGING_LABEL_46_2 20
#define OBJECT_46_0 19
#define EXECUTE_CACHE_46_10 13
#define EXECUTE_CACHE_46_8 15
#define FREE_REFERENCE_46_0 18
#define FREE_REFERENCES_LABEL_46_0 12
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_46_4);
      goto find_keyword_parser_4;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_keyword_parser_9)
DEFLABEL (find_keyword_parser_4)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_10)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd19.pObj) [1]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define ENVIRONMENT_LABEL_47_3 14
#define DEBUGGING_LABEL_47_2 13
#define OBJECT_47_4 12
#define OBJECT_47_3 11
#define OBJECT_47_2 10
#define OBJECT_47_1 9
#define OBJECT_47_0 8
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_47_4);
      goto option_keywordP_3;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (option_keywordP_8)
DEFLABEL (option_keywordP_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_15;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_14)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 1L)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_13;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd31.Lng))))
    goto label_13;
  (Wrd25.uLng) = ((unsigned long) (((unsigned char *) (Wrd29.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd25.uLng)));

DEFLABEL (label_12)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_47_3])))
    goto label_10;
  Rvl = (current_block [OBJECT_47_4]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_47_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_6 5
#define LABEL_48_8 7
#define LABEL_48_5 9
#define ENVIRONMENT_LABEL_48_3 19
#define DEBUGGING_LABEL_48_2 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_9 11
#define EXECUTE_CACHE_48_7 13
#define FREE_REFERENCE_48_0 16
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_48_4);
      goto load_init_file_3;

    case 1:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_init_file_7)
DEFLABEL (load_init_file_3)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_8])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_48_0]);
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_7 5
#define LABEL_49_5 7
#define LABEL_49_8 9
#define LABEL_49_11 11
#define LABEL_49_10 13
#define LABEL_49_13 15
#define LABEL_49_14 17
#define LABEL_49_15 19
#define LABEL_49_16 21
#define LABEL_49_17 23
#define ENVIRONMENT_LABEL_49_3 43
#define DEBUGGING_LABEL_49_2 42
#define OBJECT_49_6 41
#define OBJECT_49_5 40
#define OBJECT_49_4 39
#define OBJECT_49_3 38
#define OBJECT_49_2 37
#define OBJECT_49_1 36
#define OBJECT_49_0 35
#define EXECUTE_CACHE_49_12 25
#define EXECUTE_CACHE_49_9 27
#define EXECUTE_CACHE_49_6 29
#define FREE_REFERENCE_49_0 32
#define FREE_ASSIGNMENT_49_0 34
#define FREE_REFERENCES_LABEL_49_0 24
#define NUMBER_OF_LINKER_SECTIONS_49_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd11;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_49_4);
      goto set_command_line_parserB_14;

    case 1:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_49_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_49_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_49_16);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_49_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_command_line_parserB_23)
DEFLABEL (set_command_line_parserB_14)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_49_1]))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_30;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_29)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd35.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_24;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [1]) = (Wrd29.Obj);
  Rvl = (current_block [OBJECT_49_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (label_26)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_4]), 1);

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_5]), 2);

DEFLABEL (label_19)
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_4]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_36;
  Wrd43 = Wrd47;

DEFLABEL (label_35)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_0]));
  (Wrd69.Obj) = ((Wrd61.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd61.pObj) [0]) = (Wrd58.Obj);

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_49_3]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  if ((Wrd69.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_14])), (Wrd61.pObj), (Wrd58.Obj));

DEFLABEL (label_21)
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_13])), (Wrd44.pObj));

DEFLABEL (label_20)
  (Wrd43.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_11])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd12.Obj) = (current_block [OBJECT_49_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define ENVIRONMENT_LABEL_50_3 18
#define DEBUGGING_LABEL_50_2 17
#define OBJECT_50_3 16
#define OBJECT_50_2 15
#define OBJECT_50_1 14
#define OBJECT_50_0 13
#define EXECUTE_CACHE_50_8 11
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_50_4);
      goto strip_leading_hyphens_10;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (strip_leading_hyphens_15)
DEFLABEL (strip_leading_hyphens_10)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  (Wrd16.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_7;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_50_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_50_1]))
    goto label_19;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (label_19)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_23;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_23;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd22.pChr) = (& ((Wrd29.pChr) [(Wrd19.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd16.Obj) = (MAKE_OBJECT (2, (Wrd23.uLng)));

DEFLABEL (label_22)
  if (! ((Wrd16.Obj) == (current_block [OBJECT_50_3])))
    goto label_20;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_7;

DEFLABEL (label_23)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define TAG_51_9 4
#define ENVIRONMENT_LABEL_51_3 28
#define DEBUGGING_LABEL_51_2 27
#define OBJECT_51_5 26
#define OBJECT_51_4 25
#define OBJECT_51_3 24
#define OBJECT_51_2 23
#define OBJECT_51_1 22
#define OBJECT_51_0 21
#define EXECUTE_CACHE_51_13 13
#define EXECUTE_CACHE_51_12 15
#define EXECUTE_CACHE_51_11 17
#define EXECUTE_CACHE_51_10 19
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_51_4);
      goto command_line_option_description_7;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_line_option_description_12)
DEFLABEL (command_line_option_description_7)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_4]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_19)
  if ((Wrd10.Obj) == (current_block [OBJECT_51_1]))
    goto label_16;

DEFLABEL (label_15)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_8])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (Wrd5.Obj) = (current_block [OBJECT_51_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51_5]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_51_3]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (label_16)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_51_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_15;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_51_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define TAG_52_8 2
#define LABEL_52_12 9
#define LABEL_52_9 11
#define LABEL_52_10 13
#define LABEL_52_13 15
#define TAG_52_14 6
#define ENVIRONMENT_LABEL_52_3 29
#define DEBUGGING_LABEL_52_2 28
#define OBJECT_52_2 27
#define OBJECT_52_1 26
#define OBJECT_52_0 25
#define EXECUTE_CACHE_52_16 17
#define EXECUTE_CACHE_52_15 19
#define EXECUTE_CACHE_52_11 21
#define EXECUTE_CACHE_52_6 23
#define FREE_REFERENCES_LABEL_52_0 16
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto simple_command_line_parser_7;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_52_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_52_13);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_command_line_parser_11)
DEFLABEL (simple_command_line_parser_7)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_15]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_52_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_13])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  ((Wrd23.pObj) [2]) = (Wrd17.Obj);
  ((Wrd23.pObj) [3]) = (Wrd8.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_52_13);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_7 5
#define TAG_53_8 1
#define LABEL_53_12 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_5 13
#define TAG_53_6 5
#define LABEL_53_16 15
#define LABEL_53_19 17
#define LABEL_53_20 19
#define LABEL_53_23 21
#define TAG_53_24 9
#define LABEL_53_25 23
#define TAG_53_26 10
#define LABEL_53_17 25
#define TAG_53_18 11
#define LABEL_53_29 27
#define LABEL_53_30 29
#define LABEL_53_21 31
#define TAG_53_22 14
#define LABEL_53_27 33
#define ENVIRONMENT_LABEL_53_3 57
#define DEBUGGING_LABEL_53_2 56
#define OBJECT_53_8 55
#define OBJECT_53_7 54
#define OBJECT_53_6 53
#define OBJECT_53_5 52
#define OBJECT_53_4 51
#define OBJECT_53_3 50
#define OBJECT_53_2 49
#define OBJECT_53_1 48
#define OBJECT_53_0 47
#define EXECUTE_CACHE_53_31 35
#define EXECUTE_CACHE_53_15 37
#define EXECUTE_CACHE_53_14 39
#define EXECUTE_CACHE_53_13 41
#define EXECUTE_CACHE_53_28 43
#define EXECUTE_CACHE_53_11 45
#define FREE_REFERENCES_LABEL_53_0 34
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_53_4);
      goto argument_command_line_parser_20;

    case 1:
      current_block = (Rpc - LABEL_53_7);
      goto lambda_31;

    case 2:
      current_block = (Rpc - LABEL_53_12);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_30;

    case 6:
      current_block = (Rpc - LABEL_53_16);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_53_19);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_53_20);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_53_23);
      goto lambda_34;

    case 10:
      current_block = (Rpc - LABEL_53_25);
      goto lambda_35;

    case 11:
      current_block = (Rpc - LABEL_53_17);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_53_29);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_53_30);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_53_21);
      goto lambda_33;

    case 15:
      current_block = (Rpc - LABEL_53_27);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (argument_command_line_parser_29)
DEFLABEL (argument_command_line_parser_20)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Wrd11 = Wrd7;
  goto label_36;

DEFLABEL (label_37)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  Wrd11 = Wrd27;

DEFLABEL (label_36)
DEFLABEL (label_41)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd22.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_38;

DEFLABEL (label_39)
  (Wrd26.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_38)
DEFLABEL (label_40)
  (Wrd23.Obj) = (current_block [OBJECT_53_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_53_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_15]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_53_7);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_43;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (label_43)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_50;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_49)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_44;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_23])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_25])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  Rvl = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_17])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_48;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_47)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_46;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd52.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_21])));
  Rhp += 2;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd58 = Wrd55;
  ((Wrd58.pObj) [2]) = (Wrd52.Obj);
  ((Wrd58.pObj) [3]) = (Wrd45.Obj);
  Rvl = (Wrd54.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_25)
  (Wrd45.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_24)
  (Wrd36.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_53_23);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_53_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_28]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_27);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_31]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_53_25);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_7]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_53_17);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_54;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_53)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_52;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_51)
  (Rsp [1]) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_52)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_8]), 1);

DEFLABEL (label_27)
  (Wrd23.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_53_21);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_9 9
#define LABEL_54_7 11
#define LABEL_54_14 13
#define LABEL_54_12 15
#define TAG_54_13 6
#define LABEL_54_10 17
#define LABEL_54_15 19
#define TAG_54_16 8
#define LABEL_54_17 21
#define TAG_54_18 9
#define ENVIRONMENT_LABEL_54_3 33
#define DEBUGGING_LABEL_54_2 32
#define OBJECT_54_2 31
#define OBJECT_54_1 30
#define OBJECT_54_0 29
#define EXECUTE_CACHE_54_19 23
#define EXECUTE_CACHE_54_11 25
#define EXECUTE_CACHE_54_8 27
#define FREE_REFERENCES_LABEL_54_0 22
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_54_4);
      goto for_each_non_keyword_19;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto loop_16;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_54_9);
      goto lambda_8;

    case 4:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_54_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_54_12);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_54_15);
      goto lambda_28;

    case 9:
      current_block = (Rpc - LABEL_54_17);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_non_keyword_24)
DEFLABEL (for_each_non_keyword_19)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_16;

DEFLABEL (loop_25)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_54_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd7.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [0]) = (Wrd7.Obj);
  goto lambda_8;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_54_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rsp = (& (Rsp [1]));
  goto lambda_8;

DEFLABEL (label_31)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_33;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_16;

DEFLABEL (label_33)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_26)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_54_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_12])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_15])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_17])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_54_12);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_54_15);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_19]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_54_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_10 11
#define LABEL_55_13 13
#define LABEL_55_11 15
#define LABEL_55_16 17
#define LABEL_55_8 19
#define LABEL_55_18 21
#define LABEL_55_14 23
#define TAG_55_15 10
#define LABEL_55_19 25
#define LABEL_55_21 27
#define LABEL_55_20 29
#define LABEL_55_24 31
#define LABEL_55_22 33
#define TAG_55_23 15
#define ENVIRONMENT_LABEL_55_3 49
#define DEBUGGING_LABEL_55_2 48
#define OBJECT_55_2 47
#define OBJECT_55_1 46
#define OBJECT_55_0 45
#define EXECUTE_CACHE_55_17 35
#define EXECUTE_CACHE_55_12 37
#define EXECUTE_CACHE_55_9 39
#define FREE_REFERENCE_55_0 42
#define FREE_ASSIGNMENT_55_0 44
#define FREE_REFERENCES_LABEL_55_0 34
#define NUMBER_OF_LINKER_SECTIONS_55_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_55_4);
      goto collect_args_23;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto loop_16;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_55_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_55_13);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_55_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_55_16);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_55_18);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_55_14);
      goto lambda_35;

    case 11:
      current_block = (Rpc - LABEL_55_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_55_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_55_20);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_55_24);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_55_22);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (collect_args_33)
DEFLABEL (collect_args_23)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd14.Obj) = (current_block [OBJECT_55_1]);
  (Rsp [1]) = (Wrd14.Obj);
  goto loop_16;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (loop_34)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_55_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_14])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_16])), (Wrd6.pObj));

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  if (! ((Wrd6.uLng) == 1))
    goto label_54;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_53)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_55_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_55_20);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_49;
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_55_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_22])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_30)
  goto label_45;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_24])), (Wrd6.pObj));

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_52;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_16;

DEFLABEL (label_52)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 1);

DEFLABEL (label_29)
  (Wrd14.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_55_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_55_22);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_7 7
#define LABEL_56_5 9
#define LABEL_56_9 11
#define LABEL_56_10 13
#define ENVIRONMENT_LABEL_56_3 24
#define DEBUGGING_LABEL_56_2 23
#define OBJECT_56_1 22
#define OBJECT_56_0 21
#define EXECUTE_CACHE_56_8 15
#define FREE_REFERENCE_56_0 18
#define FREE_ASSIGNMENT_56_0 20
#define FREE_REFERENCES_LABEL_56_0 14
#define NUMBER_OF_LINKER_SECTIONS_56_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_56_4);
      goto collect_remaining_args_4;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_56_10);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (collect_remaining_args_10)
DEFLABEL (collect_remaining_args_4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_16;
  Wrd17 = Wrd21;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_12)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_10]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_12;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (lambda_11)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_56_10);
  (Wrd5.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_9 7
#define LABEL_57_7 9
#define LABEL_57_8 11
#define LABEL_57_11 13
#define LABEL_57_12 15
#define LABEL_57_14 17
#define LABEL_57_17 19
#define LABEL_57_18 21
#define LABEL_57_19 23
#define LABEL_57_20 25
#define LABEL_57_16 27
#define LABEL_57_24 29
#define LABEL_57_22 31
#define LABEL_57_25 33
#define ENVIRONMENT_LABEL_57_3 55
#define DEBUGGING_LABEL_57_2 54
#define OBJECT_57_4 53
#define OBJECT_57_3 52
#define OBJECT_57_2 51
#define OBJECT_57_1 50
#define OBJECT_57_0 49
#define EXECUTE_CACHE_57_23 35
#define EXECUTE_CACHE_57_21 37
#define EXECUTE_CACHE_57_15 39
#define EXECUTE_CACHE_57_13 41
#define EXECUTE_CACHE_57_10 43
#define EXECUTE_CACHE_57_6 45
#define FREE_REFERENCE_57_0 48
#define FREE_REFERENCES_LABEL_57_0 34
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_57_4);
      goto show_command_line_options_19;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_9);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_57_8);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_57_12);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_57_14);
      goto do_loop_17;

    case 8:
      current_block = (Rpc - LABEL_57_17);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_57_18);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_57_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_57_20);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_57_16);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_57_24);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_57_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_57_25);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_command_line_options_29)
DEFLABEL (show_command_line_options_19)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;
  Wrd10 = Wrd14;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_57_7);
  (* (--Rsp)) = Rvl;
  goto do_loop_17;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_9])), (Wrd11.pObj));

DEFLABEL (label_21)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_30)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_57_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_35;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (label_35)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_23)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (do_loop_31)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_57_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_57_2])))
    goto label_38;
  Rsp = (& (Rsp [1]));
  (Wrd38.Obj) = (current_block [OBJECT_57_3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_48;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_47)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_45)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_44;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_43)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_57_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_57_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_57_25);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_23]));

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_42)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_17;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_25)
  (Wrd19.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_47;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_57_16);
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_9 9
#define LABEL_58_7 11
#define LABEL_58_13 13
#define LABEL_58_10 15
#define LABEL_58_11 17
#define LABEL_58_16 19
#define LABEL_58_14 21
#define LABEL_58_15 23
#define LABEL_58_20 25
#define LABEL_58_17 27
#define LABEL_58_18 29
#define LABEL_58_21 31
#define LABEL_58_28 33
#define LABEL_58_22 35
#define LABEL_58_24 37
#define TAG_58_25 17
#define LABEL_58_27 39
#define LABEL_58_29 41
#define TAG_58_30 19
#define LABEL_58_31 43
#define LABEL_58_33 45
#define LABEL_58_34 47
#define LABEL_58_35 49
#define LABEL_58_39 51
#define TAG_58_40 24
#define LABEL_58_37 53
#define TAG_58_38 25
#define LABEL_58_50 55
#define LABEL_58_51 57
#define LABEL_58_52 59
#define LABEL_58_42 61
#define LABEL_58_43 63
#define LABEL_58_54 65
#define LABEL_58_46 67
#define LABEL_58_47 69
#define LABEL_58_49 71
#define LABEL_58_53 73
#define LABEL_58_59 75
#define ENVIRONMENT_LABEL_58_3 146
#define DEBUGGING_LABEL_58_2 145
#define OBJECT_58_27 144
#define OBJECT_58_26 143
#define OBJECT_58_25 142
#define OBJECT_58_24 141
#define OBJECT_58_23 140
#define OBJECT_58_22 139
#define OBJECT_58_21 138
#define OBJECT_58_20 137
#define OBJECT_58_19 136
#define OBJECT_58_18 135
#define OBJECT_58_17 134
#define OBJECT_58_16 133
#define OBJECT_58_15 132
#define OBJECT_58_14 131
#define OBJECT_58_13 130
#define OBJECT_58_12 129
#define OBJECT_58_11 128
#define OBJECT_58_10 127
#define OBJECT_58_9 126
#define OBJECT_58_8 125
#define OBJECT_58_7 124
#define OBJECT_58_6 123
#define OBJECT_58_5 122
#define OBJECT_58_4 121
#define OBJECT_58_3 120
#define OBJECT_58_2 119
#define OBJECT_58_1 118
#define OBJECT_58_0 117
#define EXECUTE_CACHE_58_58 77
#define EXECUTE_CACHE_58_57 79
#define EXECUTE_CACHE_58_56 81
#define EXECUTE_CACHE_58_55 83
#define EXECUTE_CACHE_58_48 85
#define EXECUTE_CACHE_58_45 87
#define EXECUTE_CACHE_58_44 89
#define EXECUTE_CACHE_58_41 91
#define EXECUTE_CACHE_58_36 93
#define EXECUTE_CACHE_58_32 95
#define EXECUTE_CACHE_58_26 97
#define EXECUTE_CACHE_58_23 99
#define EXECUTE_CACHE_58_19 101
#define EXECUTE_CACHE_58_12 103
#define EXECUTE_CACHE_58_8 105
#define FREE_REFERENCE_58_3 108
#define FREE_REFERENCE_58_2 109
#define FREE_REFERENCE_58_1 110
#define FREE_REFERENCE_58_0 111
#define FREE_ASSIGNMENT_58_3 113
#define FREE_ASSIGNMENT_58_2 114
#define FREE_ASSIGNMENT_58_1 115
#define FREE_ASSIGNMENT_58_0 116
#define FREE_REFERENCES_LABEL_58_0 76
#define NUMBER_OF_LINKER_SECTIONS_58_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
load_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_58_4);
      goto initialize_command_line_parsers_33;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_58_9);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_58_7);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_58_13);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_58_11);
      goto lambda_2;

    case 8:
      current_block = (Rpc - LABEL_58_16);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_58_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_58_15);
      goto lambda_4;

    case 11:
      current_block = (Rpc - LABEL_58_20);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_58_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_58_18);
      goto lambda_18;

    case 14:
      current_block = (Rpc - LABEL_58_21);
      goto continuation_26;

    case 15:
      current_block = (Rpc - LABEL_58_28);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_58_22);
      goto lambda_25;

    case 17:
      current_block = (Rpc - LABEL_58_24);
      goto lambda_52;

    case 18:
      current_block = (Rpc - LABEL_58_27);
      goto continuation_27;

    case 19:
      current_block = (Rpc - LABEL_58_29);
      goto lambda_54;

    case 20:
      current_block = (Rpc - LABEL_58_31);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_58_33);
      goto continuation_29;

    case 22:
      current_block = (Rpc - LABEL_58_34);
      goto lambda_28;

    case 23:
      current_block = (Rpc - LABEL_58_35);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_58_39);
      goto lambda_56;

    case 25:
      current_block = (Rpc - LABEL_58_37);
      goto swapB_55;

    case 26:
      current_block = (Rpc - LABEL_58_50);
      goto label_41;

    case 27:
      current_block = (Rpc - LABEL_58_51);
      goto label_42;

    case 28:
      current_block = (Rpc - LABEL_58_52);
      goto label_43;

    case 29:
      current_block = (Rpc - LABEL_58_42);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_58_43);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_58_54);
      goto label_44;

    case 32:
      current_block = (Rpc - LABEL_58_46);
      goto continuation_22;

    case 33:
      current_block = (Rpc - LABEL_58_47);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_58_49);
      goto continuation_7;

    case 35:
      current_block = (Rpc - LABEL_58_53);
      goto continuation_32;

    case 36:
      current_block = (Rpc - LABEL_58_59);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_command_line_parsers_47)
DEFLABEL (initialize_command_line_parsers_33)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_67)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_58_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_1]));
  (Wrd6.Obj) = (current_block [OBJECT_58_3]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_66;

DEFLABEL (label_65)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_58_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_58_6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_58_7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_58_8]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_58_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_58_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_58_15]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_19]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_58_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_58_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_23]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_58_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_63;
  Wrd9 = Wrd13;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_58_18]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_58_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_58_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_58_21]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_58_22]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_44]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_58_43);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_61;
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_55]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_58_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_58_25]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_44]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_58_53);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;
  Wrd5 = Wrd9;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_55]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_59])), (Wrd6.pObj));

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_54])), (Wrd6.pObj));

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_28])), (Wrd10.pObj));

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_66)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_65;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_9])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_36)
  goto label_64;

DEFLABEL (label_69)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_35)
  goto label_67;

DEFLABEL (lambda_48)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_58_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_2]));
  (Wrd6.Obj) = (current_block [OBJECT_58_3]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_70)
  Rvl = (current_block [OBJECT_58_9]);
  goto pop_return;

DEFLABEL (label_72)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_13])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_37)
  goto label_70;

DEFLABEL (lambda_49)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_58_11);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_1]));
  (Wrd6.Obj) = (current_block [OBJECT_58_12]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_73)
  Rvl = (current_block [OBJECT_58_9]);
  goto pop_return;

DEFLABEL (label_75)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_16])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_38)
  goto label_73;

DEFLABEL (lambda_50)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_58_15);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_1]));
  (Wrd6.Obj) = (current_block [OBJECT_58_3]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_76)
  Rvl = (current_block [OBJECT_58_9]);
  goto pop_return;

DEFLABEL (label_78)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_20])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_39)
  goto label_76;

DEFLABEL (lambda_51)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_58_18);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_24])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_26]));

DEFLABEL (lambda_53)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_58_22);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_29])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_26]));

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_58_24);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_58_31);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_37])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  ((Wrd24.pObj) [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_39])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_41]));

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_58_29);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_58_35);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_46]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_47]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_48]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_58_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_57]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_58_46);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_56]));

DEFLABEL (lambda_57)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_58_34);
  (Wrd5.Obj) = (current_block [OBJECT_58_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_45]));

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_58_39);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_36]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_58_49);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_58]));

DEFLABEL (swapB_55)
  CLOSURE_HEADER (LABEL_58_37);

DEFLABEL (swapB_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  Wrd5 = Wrd9;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_3]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_82)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_3]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_79)
  Rvl = (current_block [OBJECT_58_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_52])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_43)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_51])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_42)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_58_50])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_85;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 28
#define DEBUGGING_LABEL_2 27
#define PURIFICATION_ROOT 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define FREE_REFERENCE_0 15
#define GLOBAL_EXECUTE_CACHE_5 17
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
load_so_92b1ac3294a1006f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
	3,
	3,
	1,
	1,
	1,
	1,
	1,
	3,
	2,
	0,
	2,
	3,
	1,
	2,
	1,
	1,
	3,
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
	1,
	1,
	3,
	3,
	3,
	3,
	2,
	2,
	2,
	3,
	1,
	1,
	3,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 58)
      goto label_6;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_load_so_92b1ac3294a1006f [58] =
  {
    { "load_so_code_1", 10, load_so_code_1 },
    { "load_so_code_2", 5, load_so_code_2 },
    { "load_so_code_3", 6, load_so_code_3 },
    { "load_so_code_4", 3, load_so_code_4 },
    { "load_so_code_5", 15, load_so_code_5 },
    { "load_so_code_6", 5, load_so_code_6 },
    { "load_so_code_7", 7, load_so_code_7 },
    { "load_so_code_8", 6, load_so_code_8 },
    { "load_so_code_9", 4, load_so_code_9 },
    { "load_so_code_10", 3, load_so_code_10 },
    { "load_so_code_11", 18, load_so_code_11 },
    { "load_so_code_12", 11, load_so_code_12 },
    { "load_so_code_13", 11, load_so_code_13 },
    { "load_so_code_14", 10, load_so_code_14 },
    { "load_so_code_15", 3, load_so_code_15 },
    { "load_so_code_16", 11, load_so_code_16 },
    { "load_so_code_17", 8, load_so_code_17 },
    { "load_so_code_18", 5, load_so_code_18 },
    { "load_so_code_19", 6, load_so_code_19 },
    { "load_so_code_20", 7, load_so_code_20 },
    { "load_so_code_21", 4, load_so_code_21 },
    { "load_so_code_22", 4, load_so_code_22 },
    { "load_so_code_23", 2, load_so_code_23 },
    { "load_so_code_24", 4, load_so_code_24 },
    { "load_so_code_25", 7, load_so_code_25 },
    { "load_so_code_26", 6, load_so_code_26 },
    { "load_so_code_27", 17, load_so_code_27 },
    { "load_so_code_28", 2, load_so_code_28 },
    { "load_so_code_29", 6, load_so_code_29 },
    { "load_so_code_30", 9, load_so_code_30 },
    { "load_so_code_31", 4, load_so_code_31 },
    { "load_so_code_32", 5, load_so_code_32 },
    { "load_so_code_33", 15, load_so_code_33 },
    { "load_so_code_34", 4, load_so_code_34 },
    { "load_so_code_35", 3, load_so_code_35 },
    { "load_so_code_36", 8, load_so_code_36 },
    { "load_so_code_37", 31, load_so_code_37 },
    { "load_so_code_38", 5, load_so_code_38 },
    { "load_so_code_39", 7, load_so_code_39 },
    { "load_so_code_40", 6, load_so_code_40 },
    { "load_so_code_41", 2, load_so_code_41 },
    { "load_so_code_42", 2, load_so_code_42 },
    { "load_so_code_43", 3, load_so_code_43 },
    { "load_so_code_44", 2, load_so_code_44 },
    { "load_so_code_45", 30, load_so_code_45 },
    { "load_so_code_46", 5, load_so_code_46 },
    { "load_so_code_47", 3, load_so_code_47 },
    { "load_so_code_48", 4, load_so_code_48 },
    { "load_so_code_49", 11, load_so_code_49 },
    { "load_so_code_50", 4, load_so_code_50 },
    { "load_so_code_51", 5, load_so_code_51 },
    { "load_so_code_52", 7, load_so_code_52 },
    { "load_so_code_53", 16, load_so_code_53 },
    { "load_so_code_54", 10, load_so_code_54 },
    { "load_so_code_55", 16, load_so_code_55 },
    { "load_so_code_56", 6, load_so_code_56 },
    { "load_so_code_57", 16, load_so_code_57 },
    { "load_so_code_58", 37, load_so_code_58 }
  };

int
decl_load_so_92b1ac3294a1006f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_load_so_92b1ac3294a1006f);
  return (0);
}

DECLARE_COMPILED_CODE ("load.so", 6, decl_load_so_92b1ac3294a1006f, load_so_92b1ac3294a1006f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_load_so_data_92b1ac3294a1006f [10963] =
  "\xcf\x01\x80\x01\x80\x14\x1d\x0c\xb8\x0d\xb9\x1d\xb0\x81\x88\x0d"
  "\x08\x0c\xb1\x0d\xb9\x0d\xba\x0d\xbb\x25\x0d\x0d\xbc\x0d\xbd\x0d"
  "\x24\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x82\x88\x1d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x07\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x0c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\xc1\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x02\xc2\xc1\xc2\x80\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\xc2\x02\xc1\x1c\xc1\x1c\xc2\x06\xb1\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1d\x0d\x1c\x25\x1b\x1b\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x0d\x1c\x25\x1b\x24\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb2\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb2\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x0d\x1c\x1b\x25\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x25"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c"
  "\x25\x0d\x1c\xb2\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x08"
  "\x1b\x1b\x25\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0c\x0c\x0c\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0d\x24\x28\xb7\x28\x0d\xbf\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x0c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0c\x1b\xc1\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\xc1\x1c\x08\x0c\x0c\x0c"
  "\x0c\x0c\x08\x8c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0c\x0c\x0c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc0\x06\x0d\x1c\x25\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x1b\x1d\x07\x06"
  "\x08\x0d\x1c\x0d\x1c\x25\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0f\xc2\x1c\x80\x1b\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2\x1b\x1d\x0c"
  "\x1d\x0d\x1c\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x80"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x1b\x08\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0c\x1b\x0c\x0c"
  "\x0c\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\x1b\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x25\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x80\x08\x1b\x0c\x1b\x24\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x0c\x0c\x08\x89\x80\x0c\x0c\x08\x88\xb6\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x07\x0c\x0c\x1d\x0c\x0c\x0c\x0c\x0c\x06\x0c"
  "\x0c\x08\x1b\x1b\x1b\x1b\x25\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\xb6\x1b\x1b"
  "\x1b\x1b\x1b\x9d\xc3\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb4\xb3\x1b"
  "\x0d\x1b\x1b\x1b\xb5\x1b\x1b\x1b\x1b\xb7\x1b\x0d\x0d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d"
  "\xb2\xb1\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x08\x1b\x2a\x1e\x1e"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1e\x1e\x07\x1b\x06\x06\x1e\x06\x1b"
  "\x2a\x17\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x6c\x6f\x61\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c"
  "\x6e\x6f\x74\x2d\x6c\x6f\x61\x64\x69\x6e\x67\x16\x4e\x6f\x20\x66"
  "\x69\x6c\x65\x20\x62\x65\x69\x6e\x67\x20\x6c\x6f\x61\x64\x65\x64"
  "\x2e\x1b\x2a\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x2d\x6d\x61\x72\x6b\x65\x72\x2a\x1b\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x74\x2d"
  "\x6c\x6f\x61\x64\x69\x6e\x67\x1a\x68\x6f\x6f\x6b\x2f\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e"
  "\x65\x04\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x65\x72\x72\x6f\x72\x1d\x64\x65\x66\x61\x75\x6c\x74\x2f"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d"
  "\x6c\x69\x6e\x65\x15\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6d"
  "\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x14\x65\x76\x65\x6e\x74\x3a"
  "\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x05\x06\x14"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x02\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2d\x70\x61\x72"
  "\x73\x65\x72\x73\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d"
  "\x72\x65\x63\x65\x69\x76\x65\x72\x21\x04\x10\x16\x81\x83\x02\x0f"
  "\x14\x81\x81\x02\x0e\x12\x81\x81\x02\x0d\x10\x81\x81\x02\x0c\x0e"
  "\x81\x81\x02\x0b\x0c\x81\x81\x02\x0a\x0a\x81\x81\x02\x09\x08\x81"
  "\x87\x02\x08\x06\x81\x81\x02\x07\x04\x82\x02\x15\x2c\x09\x02\x08"
  "\x02\x19\x63\x75\x72\x72\x65\x6e\x74\x2d\x6c\x6f\x61\x64\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0a\x03\x0e\x2d\x3e\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x12\x68\x61\x6e\x64"
  "\x6c\x65\x2d\x6c\x6f\x61\x64\x2d\x68\x6f\x6f\x6b\x73\x0b\x03\x06"
  "\x6c\x69\x73\x74\x3f\x05\x07\x6c\x6f\x61\x64\x2d\x31\x0c\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x0d\x07\x15\x0c\x81\x85\x02\x14"
  "\x0a\x81\x83\x02\x13\x08\x81\x83\x02\x12\x06\x81\x8b\x02\x11\x04"
  "\x86\x04\x0b\x1c\x0e\x02\x0c\x1f\x6c\x6f\x61\x64\x2f\x73\x75\x70"
  "\x70\x72\x65\x73\x73\x2d\x6c\x6f\x61\x64\x69\x6e\x67\x2d\x6d\x65"
  "\x73\x73\x61\x67\x65\x3f\x0f\x03\x03\x13\x63\x68\x6f\x6f\x73\x65"
  "\x2d\x6c\x6f\x61\x64\x2d\x6d\x65\x74\x68\x6f\x64\x10\x06\x0d\x6c"
  "\x6f\x61\x64\x2d\x66\x61\x69\x6c\x75\x72\x65\x11\x05\x0d\x6d\x61"
  "\x79\x62\x65\x2d\x6e\x6f\x74\x69\x66\x79\x12\x04\x1b\x0e\x81\x89"
  "\x02\x1a\x0c\x81\x87\x02\x19\x0a\x81\x89\x02\x18\x08\x81\x89\x02"
  "\x17\x06\x81\x89\x02\x16\x04\x85\x08\x0d\x1a\x13\x02\x03\x10\x02"
  "\x1e\x08\x85\x08\x1d\x06\x81\x83\x02\x1c\x04\x83\x04\x07\x0e\x14"
  "\x02\x04\x73\x63\x6d\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x73\x15\x03\x16\x63\x68\x6f\x6f\x73\x65\x2d"
  "\x66\x61\x73\x6c\x6f\x61\x64\x2d\x6d\x65\x74\x68\x6f\x64\x16\x03"
  "\x0e\x66\x69\x6c\x65\x2d\x72\x65\x67\x75\x6c\x61\x72\x3f\x17\x03"
  "\x12\x66\x61\x73\x6c\x6f\x61\x64\x65\x72\x2d\x3e\x6c\x6f\x61\x64"
  "\x65\x72\x18\x04\x0c\x77\x72\x61\x70\x2d\x6c\x6f\x61\x64\x65\x72"
  "\x19\x04\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x74\x79\x70\x65\x1a\x03\x0e\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6c\x6f\x61\x64\x65\x72\x1b\x03\x11\x6c\x6f\x61\x64\x69"
  "\x6e\x67\x2d\x6e\x6f\x74\x69\x66\x69\x65\x72\x1c\x09\x2d\x20\x81"
  "\x85\x02\x2c\x1e\x81\x87\x02\x2b\x1c\x81\x89\x02\x2a\x1a\x83\x04"
  "\x29\x18\x81\x85\x02\x28\x16\x81\x83\x02\x27\x14\x81\x85\x02\x26"
  "\x12\x81\x89\x02\x25\x10\x81\x8b\x02\x24\x0e\x81\x8b\x02\x23\x0c"
  "\x81\x89\x02\x22\x0a\x81\x89\x02\x21\x08\x81\x83\x02\x20\x06\x81"
  "\x83\x02\x1f\x04\x83\x04\x1f\x34\x1d\x02\x04\x14\x65\x78\x74\x65"
  "\x6e\x64\x65\x64\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c\x03"
  "\x17\x6c\x6f\x61\x64\x2f\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x1e\x03\x07\x70\x75\x72\x69\x66\x79"
  "\x04\x32\x0c\x81\x8b\x02\x31\x0a\x81\x87\x02\x30\x08\x81\x89\x02"
  "\x2f\x06\x81\x87\x02\x2e\x04\x83\x04\x0b\x15\x1f\x02\x08\x02\x04"
  "\x15\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x66\x69\x6c\x65\x04\x05\x72\x65\x61\x64\x20\x03\x0c\x65\x6f"
  "\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x04\x0a\x72\x65\x70\x6c\x2d"
  "\x65\x76\x61\x6c\x05\x39\x10\x81\x89\x02\x38\x0e\x81\x89\x02\x37"
  "\x0c\x81\x87\x02\x36\x0a\x81\x87\x02\x35\x08\x81\x85\x02\x34\x06"
  "\x81\x87\x02\x33\x04\x83\x04\x0f\x1c\x21\x02\x09\x04\x16\x77\x69"
  "\x74\x68\x2d\x6c\x6f\x61\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x22\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x3e"
  "\x75\x72\x69\x23\x04\x0f\x77\x69\x74\x68\x2d\x65\x76\x61\x6c\x2d"
  "\x75\x6e\x69\x74\x24\x04\x3f\x0e\x81\x83\x02\x3e\x0c\x81\x83\x02"
  "\x3d\x0a\x81\x83\x02\x3c\x08\x81\x83\x02\x3b\x06\x81\x87\x02\x3a"
  "\x04\x84\x06\x0d\x17\x25\x02\x0a\x08\x66\x61\x73\x6c\x6f\x61\x64"
  "\x26\x02\x03\x16\x05\x11\x05\x12\x04\x43\x0a\x81\x85\x02\x42\x08"
  "\x81\x89\x02\x41\x06\x81\x89\x02\x40\x04\x84\x04\x09\x15\x27\x02"
  "\x0b\x03\x16\x02\x46\x08\x85\x08\x45\x06\x81\x83\x02\x44\x04\x83"
  "\x04\x07\x0e\x28\x02\x0c\x04\x63\x6f\x6d\x03\x73\x6f\x04\x62\x69"
  "\x6e\x03\x15\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79"
  "\x70\x65\x29\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65"
  "\x77\x2d\x74\x79\x70\x65\x2a\x03\x0e\x74\x72\x79\x2d\x66\x61\x73"
  "\x6c\x2d\x66\x69\x6c\x65\x2b\x03\x10\x74\x72\x79\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x66\x69\x6c\x65\x2c\x04\x1f\x66\x61\x73\x6c\x6f"
  "\x61\x64\x2f\x75\x70\x64\x61\x74\x65\x2d\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x07\x58\x26\x81\x85\x02\x57"
  "\x24\x81\x83\x02\x56\x22\x81\x83\x02\x55\x20\x81\x85\x02\x54\x1e"
  "\x81\x85\x02\x53\x1c\x81\x83\x02\x52\x1a\x81\x85\x02\x51\x18\x85"
  "\x08\x50\x16\x83\x04\x4f\x14\x81\x83\x02\x4e\x12\x81\x85\x02\x4d"
  "\x10\x81\x83\x02\x4c\x0e\x81\x85\x02\x4b\x0c\x81\x85\x02\x4a\x0a"
  "\x81\x83\x02\x49\x08\x81\x83\x02\x48\x06\x81\x83\x02\x47\x04\x83"
  "\x04\x25\x38\x2d\x02\x0d\x1f\x53\x6f\x75\x72\x63\x65\x20\x66\x69"
  "\x6c\x65\x20\x6e\x65\x77\x65\x72\x20\x74\x68\x61\x6e\x20\x62\x69"
  "\x6e\x61\x72\x79\x3a\x04\x73\x63\x6d\x0f\x62\x69\x6e\x61\x72\x79"
  "\x2d\x66\x61\x73\x6c\x6f\x61\x64\x03\x0b\x66\x61\x73\x6c\x2d\x66"
  "\x69\x6c\x65\x3f\x2e\x03\x1c\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x04\x2a\x04\x05\x77\x61\x72\x6e\x2f\x04\x19"
  "\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x69\x6d\x65\x3c\x3f\x07\x63\x18\x81\x87\x02\x62\x16"
  "\x81\x85\x02\x61\x14\x81\x85\x02\x60\x12\x81\x85\x02\x5f\x10\x81"
  "\x85\x02\x5e\x0e\x81\x83\x02\x5d\x0c\x81\x87\x02\x5c\x0a\x81\x83"
  "\x02\x5b\x08\x81\x83\x02\x5a\x06\x81\x83\x02\x59\x04\x83\x04\x17"
  "\x2a\x30\x02\x0e\x03\x15\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x31\x03\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x66\x69\x6c\x65\x3f\x32\x03\x0e\x69\x6e\x69\x74"
  "\x2d\x6e\x6f\x74\x69\x66\x69\x65\x72\x33\x03\x1c\x03\x14\x66\x61"
  "\x73\x6c\x6f\x61\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c"
  "\x65\x34\x06\x6e\x18\x81\x85\x02\x6d\x16\x81\x87\x02\x6c\x14\x81"
  "\x83\x02\x6b\x12\x81\x85\x02\x6a\x10\x81\x83\x02\x69\x0e\x81\x87"
  "\x02\x68\x0c\x81\x83\x02\x67\x0a\x81\x85\x02\x66\x08\x81\x83\x02"
  "\x65\x06\x81\x83\x02\x64\x04\x83\x04\x17\x25\x35\x02\x0f\xfb\x01"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x10\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x03\x17\x04\x1c\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x66\x69\x6c\x65\x02\x10\x67\x63\x2d\x73\x70\x61"
  "\x63\x65\x2d\x73\x74\x61\x74\x75\x73\x04\x0d\x72\x65\x61\x64\x2d"
  "\x73\x74\x72\x69\x6e\x67\x21\x04\x05\x65\x71\x76\x3f\x06\x78\x16"
  "\x81\x89\x02\x77\x14\x81\x89\x02\x76\x12\x81\x8b\x02\x75\x10\x81"
  "\x87\x02\x74\x0e\x81\x85\x02\x73\x0c\x81\x83\x02\x72\x0a\x81\x83"
  "\x02\x71\x08\x83\x04\x70\x06\x81\x83\x02\x6f\x04\x83\x04\x15\x29"
  "\x36\x02\x10\x03\x73\x6f\x03\x29\x04\x09\x73\x74\x72\x69\x6e\x67"
  "\x3d\x3f\x29\x03\x17\x04\x7b\x08\x81\x83\x02\x7a\x06\x81\x85\x02"
  "\x79\x04\x83\x04\x07\x12\x37\x02\x11\x1d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x62\x6c\x6f\x63\x6b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x29\x04\x63\x64\x72\x38\x04\x63\x61\x72\x39\x12\x73"
  "\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x02\x03\x09\x63\x6f\x6d\x6d\x65\x6e\x74\x3f\x03\x22\x64\x62\x67"
  "\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x03\x0d"
  "\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x65\x78\x74\x03\x11\x64\x62"
  "\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x3f\x05\x86"
  "\x01\x18\x81\x85\x02\x85\x01\x16\x81\x87\x02\x84\x01\x14\x81\x83"
  "\x02\x83\x01\x12\x81\x85\x02\x82\x01\x10\x81\x85\x02\x81\x01\x0e"
  "\x81\x85\x02\x80\x01\x0c\x81\x83\x02\x7f\x0a\x81\x85\x02\x7e\x08"
  "\x81\x87\x02\x7d\x06\x81\x83\x02\x7c\x04\x83\x04\x17\x2c\x3a\x02"
  "\x12\x02\x08\x17\x2a\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x73\x3f\x2a\x3b\x02\x0f\x3b\x03\x05"
  "\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62"
  "\x69\x6e\x64\x3c\x02\x8e\x01\x12\x81\x83\x02\x8d\x01\x10\x81\x85"
  "\x02\x8c\x01\x0e\x81\x83\x02\x8b\x01\x0c\x81\x83\x02\x8a\x01\x0a"
  "\x81\x83\x02\x89\x01\x08\x81\x87\x02\x88\x01\x06\x81\x87\x02\x87"
  "\x01\x04\x85\x08\x11\x1e\x3d\x02\x13\x09\x4c\x6f\x61\x64\x69\x6e"
  "\x67\x20\x04\x12\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x3e\x03\x12\x65\x6e\x6f\x75\x67\x68\x2d\x6e\x61\x6d"
  "\x65\x73\x74\x72\x69\x6e\x67\x3f\x04\x06\x77\x72\x69\x74\x65\x40"
  "\x05\x93\x01\x0c\x81\x85\x02\x92\x01\x0a\x81\x85\x02\x91\x01\x08"
  "\x81\x85\x02\x90\x01\x06\x81\x85\x02\x8f\x01\x04\x83\x04\x0b\x18"
  "\x41\x02\x14\x0d\x49\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x20"
  "\x03\x18\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x6c\x69\x6e\x65\x04\x3e\x03\x3f\x04\x40\x05"
  "\x99\x01\x0e\x81\x85\x02\x98\x01\x0c\x81\x85\x02\x97\x01\x0a\x81"
  "\x85\x02\x96\x01\x08\x81\x85\x02\x95\x01\x06\x81\x85\x02\x94\x01"
  "\x04\x83\x04\x0d\x1a\x40\x02\x15\x02\x24\x0c\x2a\x65\x76\x61\x6c"
  "\x2d\x75\x6e\x69\x74\x2a\x3f\x02\x3f\x02\x04\x0f\x2d\x3e\x61\x62"
  "\x73\x6f\x6c\x75\x74\x65\x2d\x75\x72\x69\x05\x3c\x03\xa0\x01\x10"
  "\x81\x83\x02\x9f\x01\x0e\x81\x85\x02\x9e\x01\x0c\x81\x83\x02\x9d"
  "\x01\x0a\x81\x83\x02\x9c\x01\x08\x81\x83\x02\x9b\x01\x06\x81\x85"
  "\x02\x9a\x01\x04\x84\x06\x0f\x1d\x42\x02\x16\x08\x3f\x03\x03\x06"
  "\x65\x72\x72\x6f\x72\x43\x02\xa4\x01\x0a\x81\x87\x02\xa3\x01\x08"
  "\x81\x83\x02\xa2\x01\x06\x83\x02\xa1\x01\x04\x81\x85\x02\x09\x13"
  "\x44\x02\x17\x02\x02\x12\x63\x75\x72\x72\x65\x6e\x74\x2d\x65\x76"
  "\x61\x6c\x2d\x75\x6e\x69\x74\x45\x03\x43\x04\x0e\x75\x72\x69\x2d"
  "\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x46\x04\xa8\x01\x0a\x81\x85"
  "\x02\xa7\x01\x08\x81\x83\x02\xa6\x01\x06\x81\x81\x02\xa5\x01\x04"
  "\x82\x02\x09\x15\x47\x02\x18\x05\x6e\x6f\x6e\x65\x48\x1b\x2a\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x6c\x6f\x61\x64\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2a\x49\x02\x02\x19\x6e\x65\x61\x72"
  "\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x02\xaa\x01\x06\x81\x81\x02\xa9\x01\x04\x82\x02"
  "\x05\x0e\x4a\x02\x19\x02\x48\x16\x73\x65\x74\x2d\x6c\x6f\x61\x64"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x4b\x49\x02"
  "\x49\x02\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x4c\x02\xae\x01\x0a\x81\x83"
  "\x02\xad\x01\x08\x81\x83\x02\xac\x01\x06\x81\x83\x02\xab\x01\x04"
  "\x83\x04\x09\x16\x4d\x02\x1a\x02\x22\x49\x02\x49\x02\x04\x4c\x05"
  "\x3c\x03\xb5\x01\x10\x81\x83\x02\xb4\x01\x0e\x81\x85\x02\xb3\x01"
  "\x0c\x81\x83\x02\xb2\x01\x0a\x81\x83\x02\xb1\x01\x08\x81\x83\x02"
  "\xb0\x01\x06\x81\x85\x02\xaf\x01\x04\x84\x06\x0f\x1d\x4c\x02\x1b"
  "\x02\x16\x6c\x6f\x61\x64\x2f\x61\x66\x74\x65\x72\x2d\x6c\x6f\x61"
  "\x64\x2d\x68\x6f\x6f\x6b\x73\x4e\x02\x0e\x6c\x6f\x61\x64\x2f\x6c"
  "\x6f\x61\x64\x69\x6e\x67\x3f\x4f\x4e\x04\x03\x43\x02\xbb\x01\x0e"
  "\x81\x83\x02\xba\x01\x0c\x81\x83\x02\xb9\x01\x0a\x81\x85\x02\xb8"
  "\x01\x08\x81\x83\x02\xb7\x01\x06\x83\x04\xb6\x01\x04\x81\x83\x02"
  "\x0d\x1a\x50\x02\x1c\x02\x4f\x4e\x03\x4f\x4e\x03\x05\x3c\x04\x0d"
  "\x03\x08\x72\x65\x76\x65\x72\x73\x65\x51\x04\xcc\x01\x24\x81\x85"
  "\x02\xcb\x01\x22\x81\x85\x02\xca\x01\x20\x83\x04\xc9\x01\x1e\x81"
  "\x85\x02\xc8\x01\x1c\x81\x87\x02\xc7\x01\x1a\x81\x83\x02\xc6\x01"
  "\x18\x84\x06\xc5\x01\x16\x81\x83\x02\xc4\x01\x14\x81\x85\x02\xc3"
  "\x01\x12\x81\x83\x02\xc2\x01\x10\x81\x83\x02\xc1\x01\x0e\x81\x85"
  "\x02\xc0\x01\x0c\x81\x83\x02\xbf\x01\x0a\x81\x83\x02\xbe\x01\x08"
  "\x81\x83\x02\xbd\x01\x06\x81\x83\x02\xbc\x01\x04\x83\x04\x23\x36"
  "\x52\x02\x1d\x06\x61\x70\x70\x6c\x79\x05\x66\x69\x6e\x64\x05\x66"
  "\x69\x6c\x65\x14\x66\x69\x6c\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f"
  "\x74\x20\x65\x78\x69\x73\x74\x08\x15\x65\x72\x72\x6f\x72\x3a\x66"
  "\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x02\xce\x01"
  "\x06\x81\x87\x02\xcd\x01\x04\xfd\x07\x05\x0f\x53\x02\x1e\x03\x15"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x54\x03\x0e\x64\x6c\x64\x2d\x6c\x6f\x61\x64\x2d"
  "\x66\x69\x6c\x65\x55\x03\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x3e\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x72\x69\x56\x03\x18"
  "\x6c\x69\x61\x72\x63\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c"
  "\x65\x2d\x6e\x6f\x6e\x63\x65\x57\x04\x1b\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6c\x69\x61\x72\x63\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x66\x69\x6c\x65\x58\x04\x17\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x59\x07\xd4"
  "\x01\x0e\x81\x85\x02\xd3\x01\x0c\x81\x87\x02\xd2\x01\x0a\x81\x85"
  "\x02\xd1\x01\x08\x81\x83\x02\xd0\x01\x06\x81\x83\x02\xcf\x01\x04"
  "\x83\x04\x0d\x1d\x5a\x02\x1f\x21\x43\x61\x6e\x27\x74\x20\x72\x65"
  "\x73\x74\x6f\x72\x65\x20\x6c\x69\x61\x72\x63\x20\x6f\x62\x6a\x65"
  "\x63\x74\x20\x66\x69\x6c\x65\x3a\x14\x65\x76\x65\x6e\x74\x3a\x61"
  "\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x02\x04\x03\x17"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x72\x69\x2d\x3e\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x03\x57\x03\x55\x03\x10\x64\x6c\x64\x2d"
  "\x75\x6e\x6c\x6f\x61\x64\x2d\x66\x69\x6c\x65\x04\x29\x04\x59\x04"
  "\x43\x09\xdd\x01\x14\x81\x83\x02\xdc\x01\x12\x81\x85\x02\xdb\x01"
  "\x10\x81\x87\x02\xda\x01\x0e\x81\x83\x02\xd9\x01\x0c\x81\x85\x02"
  "\xd8\x01\x0a\x81\x83\x02\xd7\x01\x08\x81\x83\x02\xd6\x01\x06\x81"
  "\x85\x02\xd5\x01\x04\x84\x06\x13\x2a\x55\x02\x20\x12\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x5b\x0c"
  "\x64\x6c\x6f\x61\x64\x5f\x6e\x6f\x6e\x63\x65\x03\x0e\x69\x67\x6e"
  "\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x5c\x04\x12\x64\x6c\x64"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x73\x79\x6d\x62\x6f\x6c\x5d\x03"
  "\xe1\x01\x0a\x81\x83\x02\xe0\x01\x08\x81\x83\x02\xdf\x01\x06\x81"
  "\x83\x02\xde\x01\x04\x83\x04\x09\x13\x5e\x02\x21\x1d\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x2d\x6c\x69\x61\x72\x63\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x16\x64\x6c\x6f\x61\x64\x5f"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x5f\x66\x69\x6c\x65\x5b"
  "\x1c\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x5b\x03\x13\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x2d\x70\x72\x65\x66\x69"
  "\x78\x5f\x04\x5d\x03\xe6\x01\x0c\x81\x8b\x02\xe5\x01\x0a\x81\x89"
  "\x02\xe4\x01\x08\x81\x87\x02\xe3\x01\x06\x81\x85\x02\xe2\x01\x04"
  "\x84\x06\x0b\x17\x5d\x02\x22\x04\x2e\x73\x6f\x01\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x60\x01\x09\x73\x6f\x66"
  "\x74\x77\x61\x72\x65\x0b\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x04\x6c\x69\x62\x04\x6c\x69\x62\x04\x46\x03\x0c\x75\x72\x69\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x61\x03\x09\x75\x72\x69\x2d\x70\x61"
  "\x74\x68\x62\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x63\x03\x23\x03\x0e\x75\x72\x69\x2d"
  "\x61\x75\x74\x68\x6f\x72\x69\x74\x79\x64\x03\x11\x65\x78\x63\x65"
  "\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x03\x0b\x75\x72"
  "\x69\x2d\x73\x63\x68\x65\x6d\x65\x65\x03\x05\x6c\x61\x73\x74\x07"
  "\x09\x6d\x61\x6b\x65\x2d\x75\x72\x69\x66\x04\x07\x65\x71\x75\x61"
  "\x6c\x3f\x67\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64"
  "\x05\x07\x61\x70\x70\x65\x6e\x64\x04\x0f\x73\x74\x72\x69\x6e\x67"
  "\x2d\x73\x75\x66\x66\x69\x78\x3f\x0f\xf5\x01\x20\x81\x87\x02\xf4"
  "\x01\x1e\x81\x89\x02\xf3\x01\x1c\x81\x87\x02\xf2\x01\x1a\x81\x87"
  "\x02\xf1\x01\x18\x81\x85\x02\xf0\x01\x16\x81\x85\x02\xef\x01\x14"
  "\x81\x89\x02\xee\x01\x12\x81\x83\x02\xed\x01\x10\x81\x87\x02\xec"
  "\x01\x0e\x81\x87\x02\xeb\x01\x0c\x81\x85\x02\xea\x01\x0a\x81\x83"
  "\x02\xe9\x01\x08\x81\x85\x02\xe8\x01\x06\x81\x83\x02\xe7\x01\x04"
  "\x83\x04\x1f\x44\x68\x02\x23\x5b\x03\x54\x03\x61\x03\x56\x04\xf9"
  "\x01\x0a\x81\x87\x02\xf8\x01\x08\x81\x85\x02\xf7\x01\x06\x81\x83"
  "\x02\xf6\x01\x04\x83\x04\x09\x14\x61\x02\x24\x03\x73\x6f\x03\x15"
  "\x04\x1a\x03\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x73\x69\x6d"
  "\x70\x6c\x69\x66\x79\x04\xfc\x01\x08\x81\x85\x02\xfb\x01\x06\x81"
  "\x83\x02\xfa\x01\x04\x83\x04\x07\x12\x5b\x02\x25\x03\x73\x6f\x25"
  "\x4e\x6f\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x6f\x62\x6a\x65\x63"
  "\x74\x20\x66\x69\x6c\x65\x20\x6f\x66\x20\x74\x68\x69\x73\x20\x6e"
  "\x61\x6d\x65\x3a\x04\x6c\x69\x62\x04\x22\x73\x79\x73\x74\x65\x6d"
  "\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1a\x04\x43\x03\x11"
  "\x64\x6c\x64\x2d\x6c\x6f\x61\x64\x65\x64\x2d\x66\x69\x6c\x65\x3f"
  "\x03\x17\x04\x2a\x03\x5c\x04\x15\x03\x05\x6c\x6f\x61\x64\x5c\x09"
  "\x84\x02\x12\x81\x83\x02\x83\x02\x10\x81\x89\x02\x82\x02\x0e\x81"
  "\x87\x02\x81\x02\x0c\x81\x87\x02\x80\x02\x0a\x81\x85\x02\xff\x01"
  "\x08\x81\x87\x02\xfe\x01\x06\x81\x87\x02\xfd\x01\x04\x84\x06\x11"
  "\x29\x43\x02\x26\x09\x72\x65\x6c\x61\x74\x69\x76\x65\x39\x38\x02"
  "\x16\x63\x75\x72\x72\x65\x6e\x74\x2d\x6c\x6f\x61\x64\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2a\x04\x20\x77\x69\x74\x68\x2d\x77\x6f"
  "\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x63\x02\x13\x73\x79\x73\x74"
  "\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x75\x72\x69\x63\x04"
  "\x29\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x03\x0d\x75\x72\x69\x2d\x66\x72\x61\x67\x6d\x65\x6e\x74\x03\x0a"
  "\x75\x72\x69\x2d\x71\x75\x65\x72\x79\x03\x64\x05\x1e\x77\x69\x74"
  "\x68\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x77\x72"
  "\x69\x74\x69\x6e\x67\x2d\x72\x75\x6c\x65\x03\x65\x04\x10\x75\x72"
  "\x69\x2d\x61\x75\x74\x68\x6f\x72\x69\x74\x79\x3d\x3f\x04\x67\x03"
  "\x62\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x67"
  "\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x65\x03\x51\x12\xa3\x02"
  "\x40\x81\x87\x02\xa2\x02\x3e\x81\x83\x02\xa1\x02\x3c\x81\x85\x02"
  "\xa0\x02\x3a\x81\x85\x02\x9f\x02\x38\x81\x83\x02\x9e\x02\x36\x81"
  "\x85\x02\x9d\x02\x34\x81\x87\x02\x9c\x02\x32\x81\x83\x02\x9b\x02"
  "\x30\x81\x83\x02\x9a\x02\x2e\x81\x87\x02\x99\x02\x2c\x81\x85\x02"
  "\x98\x02\x2a\x81\x87\x02\x97\x02\x28\x81\x85\x02\x96\x02\x26\x81"
  "\x85\x02\x95\x02\x24\x81\x83\x02\x94\x02\x22\x81\x85\x02\x93\x02"
  "\x20\x81\x83\x02\x92\x02\x1e\x81\x85\x02\x91\x02\x1c\x81\x83\x02"
  "\x90\x02\x1a\x81\x83\x02\x8f\x02\x18\x81\x83\x02\x8e\x02\x16\x81"
  "\x89\x02\x8d\x02\x14\x81\x87\x02\x8c\x02\x12\x81\x85\x02\x8b\x02"
  "\x10\x81\x85\x02\x8a\x02\x0e\x81\x85\x02\x89\x02\x0c\x81\x85\x02"
  "\x88\x02\x0a\x81\x83\x02\x87\x02\x08\x81\x87\x02\x86\x02\x06\x81"
  "\x85\x02\x85\x02\x04\x84\x06\x3f\x68\x64\x02\x27\x02\x1a\x03\x0e"
  "\x75\x72\x69\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x3f\x03\x23\x04"
  "\x10\x65\x6e\x6f\x75\x67\x68\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x03\x63\x06\xa8\x02\x0c\x81\x83\x02\xa7\x02\x0a\x81\x87\x02\xa6"
  "\x02\x08\x81\x85\x02\xa5\x02\x06\x81\x83\x02\xa4\x02\x04\x83\x04"
  "\x0b\x19\x29\x02\x28\x04\x46\x03\x46\x03\x62\x02\x1a\x07\x66\x04"
  "\x0a\x6c\x69\x73\x74\x2d\x74\x61\x69\x6c\x04\x15\x08\xaf\x02\x10"
  "\x81\x85\x02\xae\x02\x0e\x81\x91\x02\xad\x02\x0c\x81\x8d\x02\xac"
  "\x02\x0a\x81\x87\x02\xab\x02\x08\x81\x85\x02\xaa\x02\x06\x81\x83"
  "\x02\xa9\x02\x04\x83\x04\x0f\x22\x66\x02\x29\x0b\x73\x79\x73\x74"
  "\x65\x6d\x2d\x75\x72\x69\x62\x10\x73\x79\x73\x74\x65\x6d\x2d\x62"
  "\x61\x73\x65\x2d\x75\x72\x69\x46\x02\x46\x02\x03\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x75\x72\x69\x05\x0c\x6d\x61\x79\x62\x65\x2d"
  "\x6d\x65\x72\x67\x65\x23\x03\xb5\x02\x0e\x81\x83\x02\xb4\x02\x0c"
  "\x81\x85\x02\xb3\x02\x0a\x81\x83\x02\xb2\x02\x08\x83\x02\xb1\x02"
  "\x06\x81\x83\x02\xb0\x02\x04\x81\x83\x02\x0d\x1a\x1a\x02\x2a\x63"
  "\x05\x6c\x69\x62\x2f\x03\x62\x05\x23\x03\xb7\x02\x06\x81\x83\x02"
  "\xb6\x02\x04\x83\x02\x05\x0f\x17\x02\x2b\x08\x04\x0f\x2d\x3e\x72"
  "\x65\x6c\x61\x74\x69\x76\x65\x2d\x75\x72\x69\x04\x0b\x6d\x65\x72"
  "\x67\x65\x2d\x75\x72\x69\x73\x03\xb9\x02\x06\x81\x89\x02\xb8\x02"
  "\x04\x85\x08\x05\x0e\x15\x02\x2c\x18\x67\x65\x74\x2d\x75\x6e\x75"
  "\x73\x65\x64\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65"
  "\x17\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x73\x75\x73\x70\x65\x6e"
  "\x64\x2d\x66\x69\x6c\x65\x3f\x69\x02\x03\x02\xbc\x02\x08\x81\x81"
  "\x02\xbb\x02\x06\x81\x81\x02\xba\x02\x04\x82\x02\x07\x11\x6a\x02"
  "\x2d\x0f\x2a\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2a"
  "\x6b\x02\xbe\x02\x06\x81\x81\x02\xbd\x02\x04\x82\x02\x05\x0a\x6c"
  "\x02\x2e\x20\x55\x6e\x68\x61\x6e\x64\x6c\x65\x64\x20\x63\x6f\x6d"
  "\x6d\x61\x6e\x64\x20\x6c\x69\x6e\x65\x20\x6f\x70\x74\x69\x6f\x6e"
  "\x73\x3a\x11\x49\x6e\x76\x61\x6c\x69\x64\x20\x6b\x65\x79\x77\x6f"
  "\x72\x64\x3a\x38\x39\x02\x16\x2a\x75\x6e\x75\x73\x65\x64\x2d\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2a\x6d\x12\x2a\x6c"
  "\x6f\x61\x64\x2d\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x3f\x2a\x6e"
  "\x03\x6e\x02\x02\x0f\x6c\x6f\x61\x64\x2d\x69\x6e\x69\x74\x2d\x66"
  "\x69\x6c\x65\x6f\x05\x3c\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e"
  "\x6c\x69\x73\x74\x03\x10\x6f\x70\x74\x69\x6f\x6e\x2d\x6b\x65\x79"
  "\x77\x6f\x72\x64\x3f\x70\x03\x51\x03\x65\x04\x2f\x03\x14\x66\x69"
  "\x6e\x64\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x70\x61\x72\x73\x65"
  "\x72\x51\x04\x0d\x0a\xdc\x02\x3e\x81\x87\x02\xdb\x02\x3c\x81\x89"
  "\x02\xda\x02\x3a\x83\x04\xd9\x02\x38\x81\x89\x02\xd8\x02\x36\x81"
  "\x89\x02\xd7\x02\x34\x81\x83\x02\xd6\x02\x32\x81\x83\x02\xd5\x02"
  "\x30\x81\x85\x02\xd4\x02\x2e\x81\x83\x02\xd3\x02\x2c\x81\x83\x02"
  "\xd2\x02\x2a\x81\x8b\x02\xd1\x02\x28\x81\x89\x02\xd0\x02\x26\x81"
  "\x83\x02\xcf\x02\x24\x81\x87\x02\xce\x02\x22\x81\x83\x02\xcd\x02"
  "\x20\x81\x83\x02\xcc\x02\x1e\x81\x8d\x02\xcb\x02\x1c\x81\x89\x02"
  "\xca\x02\x1a\x81\x87\x02\xc9\x02\x18\x81\x87\x02\xc8\x02\x16\x81"
  "\x87\x02\xc7\x02\x14\x81\x87\x02\xc6\x02\x12\x81\x83\x02\xc5\x02"
  "\x10\x81\x85\x02\xc4\x02\x0e\x81\x83\x02\xc3\x02\x0c\x81\x83\x02"
  "\xc2\x02\x0a\x81\x83\x02\xc1\x02\x08\x81\x89\x02\xc0\x02\x06\x81"
  "\x89\x02\xbf\x02\x04\x83\x04\x3d\x60\x71\x02\x2f\x38\x17\x2a\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2d\x70\x61\x72\x73"
  "\x65\x72\x73\x2a\x72\x02\x03\x16\x73\x74\x72\x69\x70\x2d\x6c\x65"
  "\x61\x64\x69\x6e\x67\x2d\x68\x79\x70\x68\x65\x6e\x73\x73\x04\x06"
  "\x61\x73\x73\x6f\x63\x74\x03\xe1\x02\x0c\x81\x87\x02\xe0\x02\x0a"
  "\x81\x83\x02\xdf\x02\x08\x81\x83\x02\xde\x02\x06\x81\x85\x02\xdd"
  "\x02\x04\x83\x04\x0b\x16\x75\x02\x30\x01\x2e\x0b\x73\x74\x72\x69"
  "\x6e\x67\x2d\x72\x65\x66\x76\x60\xe4\x02\x08\x81\x83\x02\xe3\x02"
  "\x06\x81\x83\x02\xe2\x02\x04\x83\x04\x07\x0f\x77\x02\x31\x02\x19"
  "\x75\x73\x65\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x02\x13\x69\x6e\x69\x74\x2d"
  "\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x5c\x03"
  "\xe8\x02\x0a\x81\x81\x02\xe7\x02\x08\x81\x85\x02\xe6\x02\x06\x81"
  "\x83\x02\xe5\x02\x04\x82\x02\x09\x14\x78\x02\x32\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x38\x02"
  "\x01\x08\x19\x73\x65\x74\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c"
  "\x69\x6e\x65\x2d\x70\x61\x72\x73\x65\x72\x21\x79\x72\x02\x72\x02"
  "\x04\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x7a\x03\x73\x04\x74\x04\xf3\x02\x18\x81\x8d\x02\xf2\x02"
  "\x16\x81\x8d\x02\xf1\x02\x14\x81\x8d\x02\xf0\x02\x12\x81\x8d\x02"
  "\xef\x02\x10\x81\x8d\x02\xee\x02\x0e\x81\x8b\x02\xed\x02\x0c\x81"
  "\x8d\x02\xec\x02\x0a\x81\x89\x02\xeb\x02\x08\x81\x87\x02\xea\x02"
  "\x06\x81\x87\x02\xe9\x02\x04\x85\x06\x17\x2c\x74\x02\x33\x01\x2e"
  "\x76\x60\x05\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x02\xf7\x02"
  "\x0a\x81\x87\x02\xf6\x02\x08\x81\x87\x02\xf5\x02\x06\x81\x83\x02"
  "\xf4\x02\x04\x83\x04\x09\x13\x76\x02\x34\x04\x0a\x20\x20\x15\x0a"
  "\x20\x20\x28\x4e\x6f\x20\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f"
  "\x6e\x2e\x29\x01\x39\x38\x04\x0d\x04\x0e\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x70\x70\x65\x6e\x64\x60\x06\x18\x64\x65\x63\x6f\x72\x61"
  "\x74\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e"
  "\x64\x04\x7a\x05\xfc\x02\x0c\x81\x85\x02\xfb\x02\x0a\x81\x87\x02"
  "\xfa\x02\x08\x81\x87\x02\xf9\x02\x06\x81\x87\x02\xf8\x02\x04\x85"
  "\x08\x0b\x1d\x7b\x02\x35\x38\x03\x2d\x2d\x1b\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2d\x70"
  "\x61\x72\x73\x65\x72\x7c\x04\x7a\x04\x60\x05\x79\x05\x20\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2d\x6f\x70\x74\x69\x6f"
  "\x6e\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x7a\x05\x83"
  "\x03\x10\x81\x85\x02\x82\x03\x0e\x81\x8d\x02\x81\x03\x0c\x81\x87"
  "\x02\x80\x03\x0a\x81\x87\x02\xff\x02\x08\x81\x85\x02\xfe\x02\x06"
  "\x81\x87\x02\xfd\x02\x04\xfd\x07\x0f\x1e\x7d\x02\x36\x39\x29\x4d"
  "\x69\x73\x73\x69\x6e\x67\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20"
  "\x74\x6f\x20\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x20"
  "\x6f\x70\x74\x69\x6f\x6e\x3a\x38\x03\x2d\x2d\x05\x20\x41\x52\x47"
  "\x05\x20\x2e\x2e\x2e\x01\x1d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x2d\x70\x61\x72"
  "\x73\x65\x72\x7e\x06\x60\x04\x60\x04\x15\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x6e\x6f\x6e\x2d\x6b\x65\x79\x77\x6f\x72\x64\x60\x05"
  "\x79\x05\x7a\x04\x2f\x07\x93\x03\x22\x81\x85\x02\x92\x03\x20\x81"
  "\x85\x02\x91\x03\x1e\x81\x85\x02\x90\x03\x1c\x81\x85\x02\x8f\x03"
  "\x1a\x81\x83\x02\x8e\x03\x18\x81\x85\x02\x8d\x03\x16\x81\x83\x02"
  "\x8c\x03\x14\x81\x87\x02\x8b\x03\x12\x81\x87\x02\x8a\x03\x10\x81"
  "\x85\x02\x89\x03\x0e\x81\x85\x02\x88\x03\x0c\x81\x8f\x02\x87\x03"
  "\x0a\x81\x89\x02\x86\x03\x08\x81\x87\x02\x85\x03\x06\x81\x85\x02"
  "\x84\x03\x04\xfc\x09\x21\x3a\x2f\x02\x37\x38\x39\x03\x70\x03\x65"
  "\x04\x0d\x04\x9d\x03\x16\x81\x85\x02\x9c\x03\x14\x81\x83\x02\x9b"
  "\x03\x12\x81\x89\x02\x9a\x03\x10\x81\x85\x02\x99\x03\x0e\x81\x8b"
  "\x02\x98\x03\x0c\x81\x8b\x02\x97\x03\x0a\x81\x89\x02\x96\x03\x08"
  "\x81\x89\x02\x95\x03\x06\x81\x89\x02\x94\x03\x04\x84\x06\x15\x22"
  "\x0d\x02\x38\x39\x38\x6b\x02\x6b\x02\x03\x70\x03\x65\x04\x08\x61"
  "\x70\x70\x65\x6e\x64\x21\x65\x04\xad\x03\x22\x81\x85\x02\xac\x03"
  "\x20\x81\x8b\x02\xab\x03\x1e\x81\x89\x02\xaa\x03\x1c\x81\x87\x02"
  "\xa9\x03\x1a\x81\x87\x02\xa8\x03\x18\x81\x85\x02\xa7\x03\x16\x81"
  "\x87\x02\xa6\x03\x14\x81\x87\x02\xa5\x03\x12\x81\x89\x02\xa4\x03"
  "\x10\x81\x87\x02\xa3\x03\x0e\x81\x85\x02\xa2\x03\x0c\x81\x85\x02"
  "\xa1\x03\x0a\x81\x85\x02\xa0\x03\x08\x81\x85\x02\x9f\x03\x06\x81"
  "\x83\x02\x9e\x03\x04\x83\x04\x21\x32\x7f\x02\x39\x38\x6b\x02\x6b"
  "\x02\x04\x65\x02\xb3\x03\x0e\x83\x04\xb2\x03\x0c\x81\x83\x02\xb1"
  "\x03\x0a\x81\x83\x02\xb0\x03\x08\x81\x87\x02\xaf\x03\x06\x81\x85"
  "\x02\xae\x03\x04\x83\x04\x0d\x19\x65\x02\x3a\x38\x39\x2e\x0a\x0a"
  "\x41\x44\x44\x49\x54\x49\x4f\x4e\x41\x4c\x20\x4f\x50\x54\x49\x4f"
  "\x4e\x53\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x79\x20"
  "\x74\x68\x69\x73\x20\x62\x61\x6e\x64\x3a\x0a\x72\x02\x03\x3e\x04"
  "\x05\x73\x6f\x72\x74\x04\x09\x73\x74\x72\x69\x6e\x67\x3c\x3f\x03"
  "\x06\x25\x65\x78\x69\x74\x3e\x03\x67\x02\x08\x6e\x65\x77\x6c\x69"
  "\x6e\x65\x07\xc3\x03\x22\x81\x83\x02\xc2\x03\x20\x81\x83\x02\xc1"
  "\x03\x1e\x81\x83\x02\xc0\x03\x1c\x81\x83\x02\xbf\x03\x1a\x81\x83"
  "\x02\xbe\x03\x18\x81\x85\x02\xbd\x03\x16\x81\x85\x02\xbc\x03\x14"
  "\x81\x85\x02\xbb\x03\x12\x81\x83\x02\xba\x03\x10\x81\x85\x02\xb9"
  "\x03\x0e\x81\x85\x02\xb8\x03\x0c\x84\x06\xb7\x03\x0a\x81\x81\x02"
  "\xb6\x03\x08\x81\x85\x02\xb5\x03\x06\x81\x81\x02\xb4\x03\x04\x82"
  "\x02\x21\x38\x67\x02\x3b\x01\x05\x61\x72\x67\x73\x0b\x2d\x2d\x20"
  "\x41\x52\x47\x20\x2e\x2e\x2e\x3e\x41\x70\x70\x65\x6e\x64\x73\x20"
  "\x61\x6c\x6c\x20\x41\x52\x47\x73\x20\x28\x74\x6f\x20\x74\x68\x65"
  "\x20\x65\x6e\x64\x20\x6f\x66\x20\x74\x68\x65\x20\x63\x6f\x6d\x6d"
  "\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x29\x20\x74\x6f\x20\x74\x68\x65"
  "\x20\x6c\x69\x73\x74\x10\x28\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c"
  "\x69\x6e\x65\x29\x2e\x0f\x2d\x2d\x61\x72\x67\x73\x20\x41\x52\x47"
  "\x20\x2e\x2e\x2e\x42\x41\x70\x70\x65\x6e\x64\x73\x20\x41\x52\x47"
  "\x73\x20\x28\x75\x70\x20\x74\x6f\x20\x74\x68\x65\x20\x6e\x65\x78"
  "\x74\x20\x6b\x65\x79\x77\x6f\x72\x64\x29\x20\x74\x6f\x20\x74\x68"
  "\x65\x20\x6c\x69\x73\x74\x20\x28\x63\x6f\x6d\x6d\x61\x6e\x64\x2d"
  "\x6c\x69\x6e\x65\x29\x2e\x08\x76\x65\x72\x73\x69\x6f\x6e\x05\x68"
  "\x65\x6c\x70\x05\x65\x76\x61\x6c\x36\x45\x76\x61\x6c\x75\x61\x74"
  "\x65\x73\x20\x74\x68\x65\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x20\x61\x73\x20\x69"
  "\x66\x20\x69\x6e\x20\x74\x68\x65\x20\x52\x45\x50\x4c\x2e\x05\x6c"
  "\x6f\x61\x64\x2c\x4c\x6f\x61\x64\x73\x20\x74\x68\x65\x20\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x20\x66\x69\x6c\x65\x73\x20\x61\x73\x20"
  "\x69\x66\x20\x69\x6e\x20\x74\x68\x65\x20\x52\x45\x50\x4c\x2e\x30"
  "\x49\x6e\x20\x62\x61\x74\x63\x68\x20\x6d\x6f\x64\x65\x2c\x20\x6c"
  "\x6f\x61\x64\x69\x6e\x67\x20\x6d\x65\x73\x73\x61\x67\x65\x73\x20"
  "\x61\x72\x65\x20\x73\x75\x70\x70\x72\x65\x73\x73\x65\x64\x2e\x10"
  "\x6e\x6f\x2d\x73\x75\x73\x70\x65\x6e\x64\x2d\x66\x69\x6c\x65\x38"
  "\x49\x6e\x68\x69\x62\x69\x74\x73\x20\x61\x75\x74\x6f\x6d\x61\x74"
  "\x69\x63\x20\x73\x61\x76\x69\x6e\x67\x20\x6f\x66\x20\x62\x61\x6e"
  "\x64\x73\x20\x74\x6f\x20\x7e\x2f\x73\x63\x68\x65\x6d\x65\x5f\x73"
  "\x75\x73\x70\x65\x6e\x64\x2e\x02\x0d\x73\x75\x73\x70\x65\x6e\x64"
  "\x2d\x66\x69\x6c\x65\x43\x49\x66\x20\x73\x70\x65\x63\x69\x66\x69"
  "\x65\x64\x2c\x20\x53\x63\x68\x65\x6d\x65\x20\x73\x61\x76\x65\x73"
  "\x20\x61\x20\x62\x61\x6e\x64\x20\x74\x6f\x20\x7e\x2f\x73\x63\x68"
  "\x65\x6d\x65\x5f\x73\x75\x73\x70\x65\x6e\x64\x20\x6f\x6e\x20\x72"
  "\x65\x63\x65\x70\x74\x69\x6f\x6e\x41\x6f\x66\x20\x73\x6f\x6d\x65"
  "\x20\x73\x69\x67\x6e\x61\x6c\x73\x2e\x20\x20\x54\x68\x69\x73\x20"
  "\x69\x73\x20\x75\x6e\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x20\x6f"
  "\x6e\x20\x73\x6f\x6d\x65\x20\x6f\x70\x65\x72\x61\x74\x69\x6e\x67"
  "\x20\x73\x79\x73\x74\x65\x6d\x73\x2e\x42\x55\x6e\x64\x65\x72\x20"
  "\x55\x6e\x69\x78\x2c\x20\x74\x68\x69\x73\x20\x69\x73\x20\x74\x72"
  "\x69\x67\x67\x65\x72\x65\x64\x20\x62\x79\x20\x53\x49\x47\x55\x53"
  "\x52\x31\x20\x61\x6e\x64\x20\x53\x49\x47\x50\x57\x52\x2c\x20\x61"
  "\x6e\x64\x20\x61\x6c\x73\x6f\x2c\x20\x69\x66\x2b\x53\x63\x68\x65"
  "\x6d\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x72\x75\x6e\x6e\x69\x6e"
  "\x67\x20\x75\x6e\x64\x65\x72\x20\x45\x6d\x61\x63\x73\x2c\x20\x53"
  "\x49\x47\x48\x55\x50\x2e\x0d\x6e\x6f\x2d\x69\x6e\x69\x74\x2d\x66"
  "\x69\x6c\x65\x37\x49\x6e\x68\x69\x62\x69\x74\x73\x20\x61\x75\x74"
  "\x6f\x6d\x61\x74\x69\x63\x20\x6c\x6f\x61\x64\x69\x6e\x67\x20\x6f"
  "\x66\x20\x74\x68\x65\x20\x7e\x2f\x2e\x73\x63\x68\x65\x6d\x65\x2e"
  "\x69\x6e\x69\x74\x20\x66\x69\x6c\x65\x2e\x72\x69\x6e\x0f\x05\x1a"
  "\x73\x68\x6f\x77\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e"
  "\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x69\x0f\x0d\x63\x6f\x6c\x6c"
  "\x65\x63\x74\x2d\x61\x72\x67\x73\x39\x17\x63\x6f\x6c\x6c\x65\x63"
  "\x74\x2d\x72\x65\x6d\x61\x69\x6e\x69\x6e\x67\x2d\x61\x72\x67\x73"
  "\x38\x05\x05\x7c\x08\x7c\x07\x7e\x06\x7e\x03\x14\x72\x75\x6e\x2d"
  "\x69\x6e\x2d\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x03"
  "\x11\x63\x6d\x64\x6c\x2f\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65"
  "\x3f\x03\x11\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x05\x3c\x05\x7a\x03\x3e\x03\x12\x6f\x70\x65\x6e\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x05\x79\x05\x10"
  "\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c\x2f\x77\x72\x69\x74\x65\x04"
  "\x20\x04\x5c\x10\xe8\x03\x4c\x81\x83\x02\xe7\x03\x4a\x81\x81\x02"
  "\xe6\x03\x48\x81\x85\x02\xe5\x03\x46\x81\x8d\x02\xe4\x03\x44\x81"
  "\x89\x02\xe3\x03\x42\x81\x85\x02\xe2\x03\x40\x81\x83\x02\xe1\x03"
  "\x3e\x81\x81\x02\xe0\x03\x3c\x81\x83\x02\xdf\x03\x3a\x81\x85\x02"
  "\xde\x03\x38\x81\x83\x02\xdd\x03\x36\x81\x83\x02\xdc\x03\x34\x81"
  "\x83\x02\xdb\x03\x32\x81\x85\x02\xda\x03\x30\x82\x02\xd9\x03\x2e"
  "\x81\x81\x02\xd8\x03\x2c\x81\x85\x02\xd7\x03\x2a\x81\x85\x02\xd6"
  "\x03\x28\x81\x81\x02\xd5\x03\x26\x81\x85\x02\xd4\x03\x24\x83\x04"
  "\xd3\x03\x22\x81\x85\x02\xd2\x03\x20\x81\x81\x02\xd1\x03\x1e\x83"
  "\x04\xd0\x03\x1c\x81\x81\x02\xcf\x03\x1a\x81\x81\x02\xce\x03\x18"
  "\x82\x02\xcd\x03\x16\x81\x81\x02\xcc\x03\x14\x81\x81\x02\xcb\x03"
  "\x12\x82\x02\xca\x03\x10\x81\x81\x02\xc9\x03\x0e\x81\x81\x02\xc8"
  "\x03\x0c\x82\x02\xc7\x03\x0a\x81\x81\x02\xc6\x03\x08\x81\x81\x02"
  "\xc5\x03\x06\x81\x81\x02\xc4\x03\x04\x82\x02\x4b\x93\x01\x3e\x3b"
  "\x3c\x3c\x3e\x04\x67\x04\x65\x04\x7f\x04\x0d\x04\x2f\x04\x69\x38"
  "\x39\x60\x7e\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x15\x73\x69\x6d\x70\x6c\x65\x2d\x6f\x70\x74\x69"
  "\x6f\x6e\x2d\x70\x61\x72\x73\x65\x72\x7c\x7a\x73\x79\x6f\x70\x51"
  "\x6b\x0d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x69\x6e\x65\x6e\x72"
  "\x6d\x23\x63\x46\x62\x56\x15\x77\x69\x74\x68\x2d\x6c\x6f\x61\x64"
  "\x65\x72\x2d\x62\x61\x73\x65\x2d\x75\x72\x69\x19\x6c\x6f\x61\x64"
  "\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x66\x69\x6c\x65\x54\x31\x5f\x59\x57\x58\x34\x11\x0b\x10\x6c\x6f"
  "\x61\x64\x2f\x70\x75\x73\x68\x2d\x68\x6f\x6f\x6b\x21\x22\x4b\x0a"
  "\x2a\x45\x24\x33\x1c\x12\x1e\x32\x2e\x2c\x2b\x16\x12\x66\x69\x6c"
  "\x65\x2d\x66\x61\x73\x6c\x6f\x61\x64\x61\x62\x6c\x65\x3f\x26\x19"
  "\x1b\x18\x10\x0f\x66\x69\x6c\x65\x2d\x6c\x6f\x61\x64\x61\x62\x6c"
  "\x65\x3f\x0c\x5c\x0e\x6c\x6f\x61\x64\x2d\x6e\x6f\x69\x73\x69\x6c"
  "\x79\x3f\x3b\x49\x3f\x0f\x4e\x4f\x14\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x44\x7d\x04\x7b"
  "\x04\x76\x04\x74\x04\x78\x04\x77\x04\x75\x04\x71\x04\x6c\x04\x6a"
  "\x04\x15\x04\x17\x04\x28\x68\x74\x74\x70\x3a\x2f\x2f\x77\x77\x77"
  "\x2e\x67\x6e\x75\x2e\x6f\x72\x67\x2f\x73\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x1a\x08\x66"
  "\x04\x29\x04\x64\x04\x43\x04\x5b\x04\x61\x04\x68\x04\x5d\x04\x5e"
  "\x04\x55\x04\x5a\x04\x53\x04\x52\x04\x50\x06\x4c\x04\x4d\x04\x4a"
  "\x04\x47\x04\x44\x06\x42\x04\x40\x04\x41\x04\x3d\x04\x3a\x04\x37"
  "\x04\x36\x04\x35\x04\x30\x04\x2d\x04\x28\x04\x27\x04\x25\x04\x21"
  "\x04\x1f\x04\x1d\x04\x14\x04\x13\x04\x0e\x04\x48\x09\x04\x44\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x7c\x02\x06\x0e\x80\x80\x04\x05\x0c\x81\x81\x02\x04\x0a\x81"
  "\x81\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83"
  "\x02\x0d\x1d";

SCHEME_OBJECT *
load_so_data_92b1ac3294a1006f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_load_so_data_92b1ac3294a1006f [0]))), (sizeof (prog_load_so_data_92b1ac3294a1006f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("load.so", load_so_data_92b1ac3294a1006f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("load.so", "26749648d4944176")
