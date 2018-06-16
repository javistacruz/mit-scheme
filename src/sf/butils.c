/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:04-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_9 9
#define TAG_1_10 3
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_13 15
#define LABEL_1_15 17
#define LABEL_1_23 19
#define LABEL_1_19 21
#define TAG_1_20 9
#define LABEL_1_21 23
#define LABEL_1_25 25
#define LABEL_1_24 27
#define LABEL_1_28 29
#define ENVIRONMENT_LABEL_1_3 56
#define DEBUGGING_LABEL_1_2 55
#define OBJECT_1_3 54
#define OBJECT_1_2 53
#define OBJECT_1_1 52
#define OBJECT_1_0 51
#define EXECUTE_CACHE_1_30 31
#define EXECUTE_CACHE_1_29 33
#define EXECUTE_CACHE_1_27 35
#define EXECUTE_CACHE_1_26 37
#define EXECUTE_CACHE_1_22 39
#define EXECUTE_CACHE_1_18 41
#define EXECUTE_CACHE_1_16 43
#define EXECUTE_CACHE_1_17 45
#define EXECUTE_CACHE_1_14 47
#define EXECUTE_CACHE_1_6 49
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto directory_processor_23;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto lambda_29;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_processor_26)
DEFLABEL (directory_processor_23)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x204, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  ((Wrd20.pObj) [5]) = (Wrd7.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_2]))
    goto label_31;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
DEFLABEL (label_36)
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_1_2]))
    goto label_33;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_32;

DEFLABEL (label_33)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_32)
DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_19])));
  Rhp += 5;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd24 = Wrd13;
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [4]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [5]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [6]) = (Wrd15.Obj);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 1)
    goto label_34;
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd36.Obj) = ((Wrd26.pObj) [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto lambda_5;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = ((Wrd26.pObj) [5]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_1_19);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd10.pObj) [6]);
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [6]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_24);
  goto label_40;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define TAG_6_9 2
#define LABEL_6_10 9
#define LABEL_6_12 11
#define LABEL_6_15 13
#define LABEL_6_17 15
#define LABEL_6_19 17
#define ENVIRONMENT_LABEL_6_3 38
#define DEBUGGING_LABEL_6_2 37
#define OBJECT_6_3 36
#define OBJECT_6_2 35
#define OBJECT_6_1 34
#define OBJECT_6_0 33
#define EXECUTE_CACHE_6_20 19
#define EXECUTE_CACHE_6_18 21
#define EXECUTE_CACHE_6_16 23
#define EXECUTE_CACHE_6_14 25
#define EXECUTE_CACHE_6_13 27
#define EXECUTE_CACHE_6_11 29
#define EXECUTE_CACHE_6_7 31
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
butils_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto sf_conditionally_10;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_conditionally_13)
DEFLABEL (sf_conditionally_10)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_16;
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_7;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_8])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_6_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (Wrd5.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_25 35
#define ENVIRONMENT_LABEL_3 71
#define DEBUGGING_LABEL_2 70
#define PURIFICATION_ROOT 69
#define OBJECT_20 68
#define OBJECT_19 67
#define OBJECT_18 66
#define OBJECT_17 65
#define OBJECT_16 64
#define OBJECT_15 63
#define OBJECT_14 62
#define OBJECT_13 61
#define OBJECT_12 60
#define OBJECT_11 59
#define OBJECT_10 58
#define OBJECT_9 57
#define OBJECT_8 56
#define OBJECT_7 55
#define OBJECT_6 54
#define OBJECT_5 53
#define OBJECT_4 52
#define OBJECT_3 51
#define OBJECT_2 50
#define OBJECT_1 49
#define OBJECT_0 48
#define EXECUTE_CACHE_22 37
#define EXECUTE_CACHE_20 39
#define EXECUTE_CACHE_18 41
#define EXECUTE_CACHE_7 43
#define GLOBAL_EXECUTE_CACHE_11 46
#define FREE_REFERENCES_LABEL_0 36
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
butils_so_a1643c3005099dce (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto lambda_9;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto label_21;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_21)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_20)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
      goto label_19;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_23])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_19)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (lambda_18)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_butils_so_a1643c3005099dce [6] =
  {
    { "butils_so_code_1", 14, butils_so_code_1 },
    { "butils_so_code_2", 1, butils_so_code_2 },
    { "butils_so_code_3", 1, butils_so_code_3 },
    { "butils_so_code_4", 1, butils_so_code_4 },
    { "butils_so_code_5", 1, butils_so_code_5 },
    { "butils_so_code_6", 8, butils_so_code_6 }
  };

int
decl_butils_so_a1643c3005099dce (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_butils_so_a1643c3005099dce);
  return (0);
}

DECLARE_COMPILED_CODE ("butils.so", 17, decl_butils_so_a1643c3005099dce, butils_so_a1643c3005099dce)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_butils_so_data_a1643c3005099dce [1131] =
  "\x48\x0b\xfa\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x1d\x0d\x0d"
  "\x28\x0d\x28\x0d\xb9\x28\xb1\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xb9\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x0c\x22\x29\x21"
  "\x9d\x2b\xbc\x1d\xb0\x83\x88\x28\x0d\xbd\x23\x22\x29\x21\x9f\x2b"
  "\xbe\x1d\xb0\x84\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\xbf\x1d\xb0"
  "\x85\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x86\x88\x0c"
  "\x0c\x1d\x1d\x28\xb1\x28\x0d\x28\xb2\x28\xb5\x28\x0d\xbd\x28\x0d"
  "\xba\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb9\x9d\xb8\x88\xb0\x0c\x0d\xb8\xc3"
  "\x0d\x1c\x0c\xb1\x2a\x0d\x0d\xb0\x1b\x99\x1e\x1e\x99\x0d\x0c\xb7"
  "\x2a\x1b\x2a\x0c\xb4\x2a\xb6\x2a\xc3\x0d\x1c\xb3\x2a\x28\x0d\x26"
  "\x28\x1b\x28\xb5\x28\xb2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x50\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73"
  "\x66\x2f\x2e\x2f\x62\x75\x74\x69\x6c\x73\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x02\x08\x05\x77\x69\x6c\x64\x07\x6e\x65\x77\x65"
  "\x73\x74\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x73\x04\x03\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72"
  "\x65\x61\x64\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x04\x0c\x61\x70\x70\x65"
  "\x6e\x64\x2d\x6d\x61\x70\x21\x04\x12\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x04\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70\x65\x04\x1a\x66\x69\x6c"
  "\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x69\x6d\x65\x3c\x3d\x3f\x0b\x1f\x1e\x81\x89\x02\x1e\x1c\x81\x87"
  "\x02\x1d\x1a\x81\x89\x02\x1c\x18\x81\x8f\x02\x1b\x16\x81\x85\x02"
  "\x1a\x14\x81\x85\x02\x19\x12\x81\x89\x02\x18\x10\x81\x8b\x02\x17"
  "\x0e\x81\x89\x02\x16\x0c\x81\x85\x02\x15\x0a\x81\x89\x02\x14\x08"
  "\x81\x85\x02\x13\x06\x81\x87\x02\x12\x04\x85\x08\x1d\x39\x02\x04"
  "\x62\x69\x6e\x20\x04\x82\x02\x03\x02\x04\x03\x73\x66\x02\x21\x04"
  "\x84\x06\x03\x02\x02\x25\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x02\x22\x04\x82\x02\x03"
  "\x02\x04\x11\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x62\x69\x6e\x2d\x66"
  "\x69\x6c\x65\x02\x23\x04\x84\x06\x03\x09\x02\x0f\x20\x69\x73\x20"
  "\x75\x70\x20\x74\x6f\x20\x64\x61\x74\x65\x0e\x53\x79\x6e\x74\x61"
  "\x78\x20\x66\x69\x6c\x65\x3a\x20\x02\x08\x04\x05\x17\x73\x66\x2f"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x69\x6e\x67\x04\x03\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x03\x0d"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x06\x77\x72"
  "\x69\x74\x65\x08\x2b\x12\x81\x89\x02\x2a\x10\x81\x89\x02\x29\x0e"
  "\x81\x89\x02\x28\x0c\x81\x89\x02\x27\x0a\x81\x87\x02\x26\x08\x81"
  "\x89\x02\x25\x06\x81\x85\x02\x24\x04\x84\x04\x11\x27\x0f\x50\x72"
  "\x6f\x63\x65\x73\x73\x20\x66\x69\x6c\x65\x3a\x20\x13\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x13"
  "\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x0e\x73\x66\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f"
  "\x0a\x04\x63\x6f\x6d\x04\x11\x73\x66\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x6c\x79\x12\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x0a\x0d\x73\x66\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x04\x62\x69\x6e\x04\x09\x04\x04\x73"
  "\x63\x6d\x04\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x14\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x72\x6f\x63\x65\x73\x73\x6f\x72\x0a\x04\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x05\x0a\x02"
  "\x03\x03\x12\x65\x6e\x6f\x75\x67\x68\x2d\x6e\x61\x6d\x65\x73\x74"
  "\x72\x69\x6e\x67\x05\x11\x24\x80\x80\x04\x10\x22\x81\x81\x02\x0f"
  "\x20\x81\x81\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x85\x02\x0c\x1a"
  "\x81\x85\x02\x0b\x18\x81\x81\x02\x0a\x16\x84\x06\x09\x14\x81\x83"
  "\x02\x08\x12\x81\x81\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02"
  "\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\x23\x48";

SCHEME_OBJECT *
butils_so_data_a1643c3005099dce (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_butils_so_data_a1643c3005099dce [0]))), (sizeof (prog_butils_so_data_a1643c3005099dce)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_25]));
}

DECLARE_COMPILED_DATA_NS ("butils.so", butils_so_data_a1643c3005099dce)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("butils.so", "dd6fc458c545236b")
