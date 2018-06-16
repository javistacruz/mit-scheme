/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define TAG_1_8 3
#define LABEL_1_11 11
#define LABEL_1_15 13
#define LABEL_1_13 15
#define TAG_1_14 6
#define LABEL_1_16 17
#define TAG_1_17 7
#define LABEL_1_18 19
#define LABEL_1_19 21
#define ENVIRONMENT_LABEL_1_3 34
#define DEBUGGING_LABEL_1_2 33
#define OBJECT_1_1 32
#define OBJECT_1_0 31
#define EXECUTE_CACHE_1_20 23
#define EXECUTE_CACHE_1_12 25
#define EXECUTE_CACHE_1_10 27
#define EXECUTE_CACHE_1_9 29
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd49;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto expression_replaceB_13;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_replaceB_17)
DEFLABEL (expression_replaceB_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd17 = Wrd6;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd19.pObj) [4]);
  ((Wrd17.pObj) [4]) = (Wrd12.Obj);
  ((Wrd17.pObj) [5]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd49.Obj) = ((Wrd19.pObj) [5]);
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_21)
  (Wrd33.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd33.uLng) == 62))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_23;
  (Wrd25.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_16])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd45 = Wrd42;
  (Wrd46.Obj) = (Rsp [1]);
  ((Wrd45.pObj) [2]) = (Wrd46.Obj);
  ((Wrd45.pObj) [3]) = (Wrd39.Obj);
  (Rsp [6]) = (Wrd41.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_23)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_1_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (lambda_19)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Rsp [4]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_1_16);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  goto lambda_5;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_12 11
#define LABEL_2_13 13
#define LABEL_2_14 15
#define LABEL_2_10 17
#define LABEL_2_15 19
#define LABEL_2_17 21
#define ENVIRONMENT_LABEL_2_3 41
#define DEBUGGING_LABEL_2_2 40
#define OBJECT_2_8 39
#define OBJECT_2_7 38
#define OBJECT_2_6 37
#define OBJECT_2_5 36
#define OBJECT_2_4 35
#define OBJECT_2_3 34
#define OBJECT_2_2 33
#define OBJECT_2_1 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_16 23
#define EXECUTE_CACHE_2_11 25
#define EXECUTE_CACHE_2_9 27
#define FREE_REFERENCE_2_0 30
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto expression_inserter_10;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_2_17);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_inserter_18)
DEFLABEL (expression_inserter_10)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
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

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = ((Wrd6.pObj) [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_33;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_32)
  if ((Wrd12.Obj) == (current_block [OBJECT_2_1]))
    goto label_26;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_10);

DEFLABEL (label_25)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Rsp [0]) = Rvl;
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd31.uLng) == 62))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_24;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd27.pObj) [4]) = (Wrd23.Obj);

DEFLABEL (label_23)
  (Wrd6.Obj) = (current_block [OBJECT_2_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 2);

DEFLABEL (label_22)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_2_3]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_26)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [5]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_31;
  Wrd16 = Wrd20;

DEFLABEL (label_30)
  Wrd15 = Wrd16;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_29;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd28.Lng))))
    goto label_29;
  (Wrd22.Obj) = ((Wrd26.pObj) [4]);

DEFLABEL (label_28)
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_27;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_27;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_27;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd38.pObj) = (& ((Wrd44.pObj) [(Wrd36.Lng)]));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [5]);
  ((Wrd38.pObj) [1]) = (Wrd41.Obj);
  goto label_25;

DEFLABEL (label_27)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [5]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 3);

DEFLABEL (label_15)
  goto label_25;

DEFLABEL (label_29)
  (Wrd31.Obj) = (current_block [OBJECT_2_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_14)
  (Wrd22.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd17.pObj));

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_11 9
#define LABEL_3_6 11
#define LABEL_3_15 13
#define LABEL_3_16 15
#define LABEL_3_17 17
#define LABEL_3_18 19
#define LABEL_3_7 21
#define LABEL_3_20 23
#define LABEL_3_13 25
#define LABEL_3_21 27
#define LABEL_3_22 29
#define LABEL_3_23 31
#define LABEL_3_24 33
#define ENVIRONMENT_LABEL_3_3 56
#define DEBUGGING_LABEL_3_2 55
#define OBJECT_3_6 54
#define OBJECT_3_5 53
#define OBJECT_3_4 52
#define OBJECT_3_3 51
#define OBJECT_3_2 50
#define OBJECT_3_1 49
#define OBJECT_3_0 48
#define EXECUTE_CACHE_3_19 35
#define EXECUTE_CACHE_3_14 37
#define EXECUTE_CACHE_3_12 39
#define EXECUTE_CACHE_3_10 41
#define EXECUTE_CACHE_3_8 43
#define FREE_REFERENCE_3_1 46
#define FREE_REFERENCE_3_0 47
#define FREE_REFERENCES_LABEL_3_0 34
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_3_4);
      goto expression_canonicalize_15;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_3_15);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_3_21);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_3_23);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_3_24);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_canonicalize_28)
DEFLABEL (expression_canonicalize_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_58;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_57)
  if ((Wrd5.Obj) == (current_block [OBJECT_3_1]))
    goto label_45;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_41;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_38;
  Wrd25 = Wrd29;

DEFLABEL (label_37)
  Wrd24 = Wrd25;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_36;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_36;
  (Wrd31.Obj) = ((Wrd35.pObj) [4]);

DEFLABEL (label_35)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_34;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_34;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_34;
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd49.pObj) = (& ((Wrd54.pObj) [(Wrd47.Lng)]));
  (Wrd45.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd45.Obj);
  if ((Wrd45.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (Wrd45.Obj);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (Rsp [1]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_26)
  (Wrd45.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd40.Obj) = (current_block [OBJECT_3_5]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_25)
  (Wrd31.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd26.pObj));

DEFLABEL (label_24)
  (Wrd25.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd45.Obj) = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_41)
  (Wrd15.Obj) = (current_block [OBJECT_3_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_44;
  Wrd13 = Wrd17;

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd14.pObj));

DEFLABEL (label_18)
  (Wrd13.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_56;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_54;
  Wrd20 = Wrd24;

DEFLABEL (label_53)
  Wrd19 = Wrd20;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_52;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_52;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);

DEFLABEL (label_51)
  (Wrd39.Obj) = (* (Rsp++));
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_50;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_50;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_50;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd42.pObj) = (& ((Wrd46.pObj) [(Wrd40.Lng)]));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_49)
  (Wrd55.Obj) = (Rsp [0]);
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  Rvl = (Wrd55.Obj);
  goto label_46;

DEFLABEL (label_47)
  Rvl = (Rsp [1]);

DEFLABEL (label_46)
DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd35.Obj) = (current_block [OBJECT_3_5]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_21)
  (Wrd26.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd21.pObj));

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd15.Obj) = (current_block [OBJECT_3_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Wrd45.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto expression_hash_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_hash_4)
DEFLABEL (expression_hash_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_9 5
#define LABEL_5_11 7
#define LABEL_5_12 9
#define LABEL_5_14 11
#define LABEL_5_15 13
#define LABEL_5_16 15
#define LABEL_5_7 17
#define TAG_5_8 7
#define LABEL_5_17 19
#define LABEL_5_5 21
#define TAG_5_6 9
#define LABEL_5_24 23
#define LABEL_5_10 25
#define LABEL_5_22 27
#define LABEL_5_19 29
#define LABEL_5_20 31
#define LABEL_5_18 33
#define LABEL_5_25 35
#define LABEL_5_32 37
#define LABEL_5_30 39
#define LABEL_5_33 41
#define ENVIRONMENT_LABEL_5_3 85
#define DEBUGGING_LABEL_5_2 84
#define OBJECT_5_15 83
#define OBJECT_5_14 82
#define OBJECT_5_13 81
#define OBJECT_5_12 80
#define OBJECT_5_11 79
#define OBJECT_5_10 78
#define OBJECT_5_9 77
#define OBJECT_5_8 76
#define OBJECT_5_7 75
#define OBJECT_5_6 74
#define OBJECT_5_5 73
#define OBJECT_5_4 72
#define OBJECT_5_3 71
#define OBJECT_5_2 70
#define OBJECT_5_1 69
#define OBJECT_5_0 68
#define EXECUTE_CACHE_5_36 43
#define EXECUTE_CACHE_5_35 45
#define EXECUTE_CACHE_5_34 47
#define EXECUTE_CACHE_5_31 49
#define EXECUTE_CACHE_5_29 51
#define EXECUTE_CACHE_5_28 53
#define EXECUTE_CACHE_5_27 55
#define EXECUTE_CACHE_5_26 57
#define EXECUTE_CACHE_5_23 59
#define EXECUTE_CACHE_5_21 61
#define EXECUTE_CACHE_5_13 63
#define FREE_REFERENCE_5_1 66
#define FREE_REFERENCE_5_0 67
#define FREE_REFERENCES_LABEL_5_0 42
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd56;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd13;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd43;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd85;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto full_expression_hash_28;

    case 1:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_11);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_5_12);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_7);
      goto loop_38;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_5_5);
      goto continue_26;

    case 10:
      current_block = (Rpc - LABEL_5_24);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_5_25);
      goto lambda_25;

    case 17:
      current_block = (Rpc - LABEL_5_32);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_5_33);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (full_expression_hash_36)
DEFLABEL (full_expression_hash_28)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 3;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  Wrd25 = Wrd30;
  ((Wrd25.pObj) [2]) = (Wrd33.Obj);
  ((Wrd25.pObj) [3]) = (Wrd7.Obj);
  ((Wrd25.pObj) [4]) = (Wrd11.Obj);
  ((Wrd32.pObj) [2]) = (Wrd31.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  goto loop_19;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_43;
  Wrd16 = Wrd20;

DEFLABEL (label_42)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_41;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_40)
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_41)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd17.pObj));

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_42;

DEFLABEL (loop_38)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (loop_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  if ((Wrd17.Obj) == (current_block [OBJECT_5_4]))
    goto label_52;
  if ((Wrd17.Obj) == (current_block [OBJECT_5_5]))
    goto label_50;
  if ((Wrd17.Obj) == (current_block [OBJECT_5_7]))
    goto label_49;
  if ((Wrd17.Obj) == (current_block [OBJECT_5_9]))
    goto label_45;
  if ((Wrd17.Obj) == (current_block [OBJECT_5_10]))
    goto label_45;
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_44)
  (Wrd56.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd56.Obj);
  goto continue_26;

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = (current_block [OBJECT_5_8]);
  ((Wrd35.pObj) [0]) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd33.pObj) [4]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  ((Wrd40.pObj) [0]) = (Wrd36.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_5_11]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_48)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_47;

DEFLABEL (label_46)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_47)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_46;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_46;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [3]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = (current_block [OBJECT_5_8]);
  ((Wrd51.pObj) [0]) = (Wrd52.Obj);
  (Wrd55.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  goto label_44;

DEFLABEL (label_50)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_51)
  (Wrd71.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (label_52)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = (current_block [OBJECT_5_8]);
  ((Wrd14.pObj) [0]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd19.Obj);
  goto continue_26;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (* (--Rsp)) = Rvl;
  (Wrd85.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd85.Obj);
  (Wrd96.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd96.uLng) == 62)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_57)
  (Wrd92.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd94.Lng))))
    goto label_56;
  (Wrd43.Obj) = ((Wrd92.pObj) [2]);

DEFLABEL (label_58)
  Rsp = (& (Rsp [3]));
  goto label_48;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  (Wrd73.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd73.Obj);
  (Wrd84.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd84.uLng) == 62))
    goto label_56;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd82.Lng))))
    goto label_56;
  (Wrd43.Obj) = ((Wrd80.pObj) [2]);
  goto label_58;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Wrd43.Obj) = Rvl;
  goto label_48;

DEFLABEL (continue_37)
DEFLABEL (continue_26)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (current_block [OBJECT_5_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_60;
  Wrd6 = Wrd10;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (Rsp [4]) = (Wrd13.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_24])), (Wrd7.pObj));

DEFLABEL (label_33)
  (Wrd6.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_39)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_5_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_31]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_36]));

DEFLABEL (label_61)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_5_12]);
  (Wrd33.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd33.Lng))))
    goto label_71;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_70;

DEFLABEL (label_69)
  (Wrd15.Obj) = (current_block [OBJECT_5_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_62;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_13]), 2);

DEFLABEL (label_62)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_64;
  (Wrd17.Obj) = (current_block [OBJECT_5_15]);
  goto label_63;

DEFLABEL (label_64)
  (Wrd17.Obj) = (current_block [OBJECT_5_8]);

DEFLABEL (label_63)
DEFLABEL (label_68)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_66)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_67;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_35]));

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_70)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_71)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_13]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_70;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_5_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_6_4);
      goto find_cheapest_expression_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_cheapest_expression_5)
DEFLABEL (find_cheapest_expression_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_8)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_7;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_10 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define ENVIRONMENT_LABEL_7_3 30
#define DEBUGGING_LABEL_7_2 29
#define OBJECT_7_5 28
#define OBJECT_7_4 27
#define OBJECT_7_3 26
#define OBJECT_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_13 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto find_cheapest_valid_element_14;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_cheapest_valid_element_21)
DEFLABEL (find_cheapest_valid_element_14)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_27;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == (Wrd25.Obj))
    goto label_25;
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_25)
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_36;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_36;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_35)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_34;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_33)
  if (! ((Wrd23.Obj) == (current_block [OBJECT_7_5])))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_32;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd51.Lng))))
    goto label_32;
  (Wrd43.Obj) = ((Wrd49.pObj) [7]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_32)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (current_block [OBJECT_7_2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_19)
  (Wrd43.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_7_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_8 7
#define LABEL_8_6 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define LABEL_8_14 19
#define LABEL_8_15 21
#define ENVIRONMENT_LABEL_8_3 38
#define DEBUGGING_LABEL_8_2 37
#define OBJECT_8_6 36
#define OBJECT_8_5 35
#define OBJECT_8_4 34
#define OBJECT_8_3 33
#define OBJECT_8_2 32
#define OBJECT_8_1 31
#define OBJECT_8_0 30
#define EXECUTE_CACHE_8_9 23
#define EXECUTE_CACHE_8_7 25
#define FREE_REFERENCE_8_1 28
#define FREE_REFERENCE_8_0 29
#define FREE_REFERENCES_LABEL_8_0 22
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd76;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd38;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_8_4);
      goto expression_validP_8;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_8_14);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_validP_19)
DEFLABEL (expression_validP_8)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_40)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_1])))
    goto label_37;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_36;
  Wrd7 = Wrd11;

DEFLABEL (label_35)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_34;
  (Wrd13.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_33)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_32;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_32;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_32;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd29.pObj) = (& ((Wrd35.pObj) [(Wrd27.Lng)]));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_31)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_30;
  Wrd45 = Wrd49;

DEFLABEL (label_29)
  Wrd44 = Wrd45;
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_28;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd57.Lng))))
    goto label_28;
  (Wrd51.Obj) = ((Wrd55.pObj) [5]);

DEFLABEL (label_27)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_26;
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_26;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_26;
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd69.Obj));
  (Wrd68.pObj) = (& ((Wrd73.pObj) [(Wrd66.Lng)]));
  (Wrd64.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd64.Obj);
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd84.uLng) == 26)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_21)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_20;
  if ((Wrd83.Obj) == (Wrd64.Obj))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_8_6]);

DEFLABEL (label_22)
DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_17)
  (Wrd64.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd60.Obj) = (current_block [OBJECT_8_5]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_16)
  (Wrd51.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_13])), (Wrd46.pObj));

DEFLABEL (label_15)
  (Wrd45.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd22.Obj) = (current_block [OBJECT_8_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_39;
  Wrd17 = Wrd21;

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_8])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      goto element__class_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element__class_8)
DEFLABEL (element__class_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_12;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd35.Lng))))
    goto label_12;
  (Wrd27.Obj) = ((Wrd33.pObj) [7]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (label_12)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_9_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_6)
  (Wrd27.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_9_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_8 5
#define LABEL_10_9 7
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define LABEL_10_14 17
#define LABEL_10_15 19
#define LABEL_10_16 21
#define LABEL_10_17 23
#define LABEL_10_18 25
#define LABEL_10_19 27
#define LABEL_10_20 29
#define LABEL_10_21 31
#define LABEL_10_5 33
#define LABEL_10_6 35
#define LABEL_10_25 37
#define LABEL_10_26 39
#define LABEL_10_27 41
#define LABEL_10_22 43
#define LABEL_10_23 45
#define LABEL_10_29 47
#define ENVIRONMENT_LABEL_10_3 72
#define DEBUGGING_LABEL_10_2 71
#define OBJECT_10_9 70
#define OBJECT_10_8 69
#define OBJECT_10_7 68
#define OBJECT_10_6 67
#define OBJECT_10_5 66
#define OBJECT_10_4 65
#define OBJECT_10_3 64
#define OBJECT_10_2 63
#define OBJECT_10_1 62
#define OBJECT_10_0 61
#define EXECUTE_CACHE_10_31 49
#define EXECUTE_CACHE_10_30 51
#define EXECUTE_CACHE_10_28 53
#define EXECUTE_CACHE_10_24 55
#define EXECUTE_CACHE_10_7 57
#define FREE_REFERENCE_10_0 60
#define FREE_REFERENCES_LABEL_10_0 48
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd139;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd155;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd161;
  machine_word Wrd147;
  machine_word Wrd148;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd187;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd53;
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
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd203;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd214;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_10_4);
      goto insert_register_destinationB_20;

    case 1:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_10_18);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_10_19);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_10_20);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_10_21);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 17:
      current_block = (Rpc - LABEL_10_25);
      goto label_22;

    case 18:
      current_block = (Rpc - LABEL_10_26);
      goto label_23;

    case 19:
      current_block = (Rpc - LABEL_10_27);
      goto label_24;

    case 20:
      current_block = (Rpc - LABEL_10_22);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_register_destinationB_38)
DEFLABEL (insert_register_destinationB_20)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_79;
  Wrd6 = Wrd10;

DEFLABEL (label_78)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_77;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_77;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_76)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_75;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_75;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_75;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd32.pObj) = (& ((Wrd38.pObj) [(Wrd30.Lng)]));
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [1]) = (Wrd33.Obj);

DEFLABEL (label_74)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_72;
  Wrd15 = Wrd19;

DEFLABEL (label_71)
  Wrd14 = Wrd15;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_70;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_70;
  (Wrd21.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_69)
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd214.uLng) == 10))
    goto label_68;
  (Wrd207.Obj) = (Rsp [1]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 26))
    goto label_68;
  (Wrd210.Lng) = (FIXNUM_TO_LONG (Wrd207.Obj));
  (Wrd211.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd212.Obj) = ((Wrd211.pObj) [0]);
  (Wrd213.Lng) = (FIXNUM_TO_LONG (Wrd212.Obj));
  if (! (((unsigned long) (Wrd210.Lng)) < ((unsigned long) (Wrd213.Lng))))
    goto label_68;
  (Wrd203.uLng) = (OBJECT_DATUM (Wrd207.Obj));
  (Wrd205.pObj) = (& ((Wrd211.pObj) [(Wrd203.Lng)]));
  (Wrd206.Obj) = (Rsp [0]);
  ((Wrd205.pObj) [1]) = (Wrd206.Obj);

DEFLABEL (label_67)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_66;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_66;
  (Wrd39.Obj) = ((Wrd43.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_65)
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_57;
  Wrd56 = Wrd60;

DEFLABEL (label_56)
  Wrd55 = Wrd56;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_55;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd68.Lng))))
    goto label_55;
  (Wrd62.Obj) = ((Wrd66.pObj) [2]);

DEFLABEL (label_54)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd139.uLng) == 10))
    goto label_53;
  (Wrd132.Obj) = (Rsp [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_53;
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) (Wrd135.Lng)) < ((unsigned long) (Wrd138.Lng))))
    goto label_53;
  (Wrd128.uLng) = (OBJECT_DATUM (Wrd132.Obj));
  (Wrd130.pObj) = (& ((Wrd136.pObj) [(Wrd128.Lng)]));
  (Wrd131.Obj) = (Rsp [3]);
  ((Wrd130.pObj) [1]) = (Wrd131.Obj);

DEFLABEL (label_52)
  (Wrd75.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd81.Obj) = ((Wrd78.pObj) [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 50)
    goto label_51;
  Wrd77 = Wrd81;

DEFLABEL (label_50)
  Wrd76 = Wrd77;
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_49;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd89.Lng))))
    goto label_49;
  (Wrd84.Obj) = ((Wrd87.pObj) [3]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_48)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 10)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_40)
  (Wrd117.Obj) = (Rsp [1]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 26))
    goto label_39;
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) (Wrd120.Lng)) < ((unsigned long) (Wrd124.Lng))))
    goto label_39;
  (Wrd112.uLng) = (OBJECT_DATUM (Wrd117.Obj));
  (Wrd115.pObj) = (& ((Wrd122.pObj) [(Wrd112.Lng)]));
  (Wrd116.Obj) = (Rsp [2]);
  ((Wrd115.pObj) [1]) = (Wrd116.Obj);

DEFLABEL (label_47)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_46)
  (Wrd97.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd98.Obj);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd110.uLng) == 62)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 3);

DEFLABEL (label_42)
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd108.Lng))))
    goto label_41;
  (Wrd102.Obj) = (Rsp [2]);
  ((Wrd106.pObj) [4]) = (Wrd102.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_45)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_30]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd19.uLng) == 62)
    goto label_44;

DEFLABEL (label_43)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 3);

DEFLABEL (label_44)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  ((Wrd15.pObj) [4]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_10_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd92.Obj) = (current_block [OBJECT_10_6]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_20])), (Wrd78.pObj));

DEFLABEL (label_30)
  (Wrd77.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd141.Obj) = (Rsp [0]);
  (Wrd142.Obj) = (Rsp [3]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_32)
  goto label_52;

DEFLABEL (label_55)
  (Wrd71.Obj) = (current_block [OBJECT_10_8]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_29)
  (Wrd62.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_17])), (Wrd57.pObj));

DEFLABEL (label_28)
  (Wrd56.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd194.Obj) = (Rsp [2]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 62))
    goto label_64;
  (Wrd191.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd192.Obj) = ((Wrd191.pObj) [0]);
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd192.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd193.Lng))))
    goto label_64;
  (Wrd187.Obj) = (Rsp [3]);
  ((Wrd191.pObj) [3]) = (Wrd187.Obj);

DEFLABEL (label_63)
  (Wrd146.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd152.Obj) = ((Wrd149.pObj) [0]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if ((Wrd153.uLng) == 50)
    goto label_62;
  Wrd148 = Wrd152;

DEFLABEL (label_61)
  Wrd147 = Wrd148;
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd161.uLng) == 10))
    goto label_60;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd160.Lng))))
    goto label_60;
  (Wrd155.Obj) = ((Wrd158.pObj) [2]);
  (* (--Rsp)) = (Wrd155.Obj);

DEFLABEL (label_59)
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 10))
    goto label_39;
  (Wrd175.Obj) = (Rsp [1]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 26))
    goto label_39;
  (Wrd178.Lng) = (FIXNUM_TO_LONG (Wrd175.Obj));
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  if (! (((unsigned long) (Wrd178.Lng)) < ((unsigned long) (Wrd182.Lng))))
    goto label_39;
  (Wrd170.uLng) = (OBJECT_DATUM (Wrd175.Obj));
  (Wrd173.pObj) = (& ((Wrd180.pObj) [(Wrd170.Lng)]));
  ((Wrd173.pObj) [1]) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_60)
  (Wrd163.Obj) = (current_block [OBJECT_10_8]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_15])), (Wrd149.pObj));

DEFLABEL (label_33)
  (Wrd148.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd196.Obj) = (Rsp [2]);
  (Wrd197.Obj) = (current_block [OBJECT_10_6]);
  (Wrd198.Obj) = (Rsp [3]);
  (Wrd201.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd201.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd196.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 3);

DEFLABEL (label_35)
  goto label_63;

DEFLABEL (label_66)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_10_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd216.Obj) = (Rsp [1]);
  (Wrd217.Obj) = (Rsp [0]);
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_36)
  goto label_67;

DEFLABEL (label_70)
  (Wrd30.Obj) = (current_block [OBJECT_10_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_26)
  (Wrd21.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_10])), (Wrd16.pObj));

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  Rsp = (& (Rsp [3]));
  goto label_45;

DEFLABEL (label_75)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_24)
  goto label_74;

DEFLABEL (label_77)
  (Wrd21.Obj) = (current_block [OBJECT_10_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_25])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_78;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_8);
  goto label_46;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_12 13
#define ENVIRONMENT_LABEL_11_3 29
#define DEBUGGING_LABEL_11_2 28
#define OBJECT_11_2 27
#define OBJECT_11_1 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_14 15
#define EXECUTE_CACHE_11_13 17
#define EXECUTE_CACHE_11_11 19
#define EXECUTE_CACHE_11_8 21
#define EXECUTE_CACHE_11_7 23
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto insert_stack_destinationB_6;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_stack_destinationB_9)
DEFLABEL (insert_stack_destinationB_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd19.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_12)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  ((Wrd15.pObj) [4]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_12 13
#define LABEL_12_14 15
#define LABEL_12_10 17
#define ENVIRONMENT_LABEL_12_3 35
#define DEBUGGING_LABEL_12_2 34
#define OBJECT_12_4 33
#define OBJECT_12_3 32
#define OBJECT_12_2 31
#define OBJECT_12_1 30
#define OBJECT_12_0 29
#define EXECUTE_CACHE_12_16 19
#define EXECUTE_CACHE_12_15 21
#define EXECUTE_CACHE_12_13 23
#define EXECUTE_CACHE_12_11 25
#define EXECUTE_CACHE_12_6 27
#define FREE_REFERENCES_LABEL_12_0 18
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_12_4);
      goto get_element_quantity_11;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_element_quantity_17)
DEFLABEL (get_element_quantity_11)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  goto loop_9;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_12_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_25;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_24)
  if ((Wrd23.Obj) == (current_block [OBJECT_12_3]))
    goto label_23;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (label_20)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd15.pObj) [7]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_12_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_25)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_14)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_12_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define ENVIRONMENT_LABEL_13_3 22
#define DEBUGGING_LABEL_13_2 21
#define OBJECT_13_3 20
#define OBJECT_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_10 11
#define EXECUTE_CACHE_13_8 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_13_4);
      goto insert_memory_destinationB_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_memory_destinationB_7)
DEFLABEL (insert_memory_destinationB_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13_2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_9)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  ((Wrd16.pObj) [4]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [3]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_8 7
#define LABEL_14_6 9
#define LABEL_14_10 11
#define LABEL_14_12 13
#define LABEL_14_13 15
#define LABEL_14_14 17
#define LABEL_14_15 19
#define LABEL_14_16 21
#define ENVIRONMENT_LABEL_14_3 41
#define DEBUGGING_LABEL_14_2 40
#define OBJECT_14_7 39
#define OBJECT_14_6 38
#define OBJECT_14_5 37
#define OBJECT_14_4 36
#define OBJECT_14_3 35
#define OBJECT_14_2 34
#define OBJECT_14_1 33
#define OBJECT_14_0 32
#define EXECUTE_CACHE_14_11 23
#define EXECUTE_CACHE_14_9 25
#define EXECUTE_CACHE_14_7 27
#define FREE_REFERENCE_14_1 30
#define FREE_REFERENCE_14_0 31
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_14_4);
      goto mention_registersB_8;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_14_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_14_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mention_registersB_18)
DEFLABEL (mention_registersB_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_34)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_14_1])))
    goto label_31;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_30;
  Wrd7 = Wrd11;

DEFLABEL (label_29)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_28;
  (Wrd14.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_26;
  Wrd27 = Wrd31;

DEFLABEL (label_25)
  Wrd26 = Wrd27;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_24;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_24;
  (Wrd33.Obj) = ((Wrd37.pObj) [5]);

DEFLABEL (label_23)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_22;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_22;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_22;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd50.pObj) = (& ((Wrd55.pObj) [(Wrd48.Lng)]));
  (Wrd46.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 10)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 3);

DEFLABEL (label_20)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_19;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) (Wrd75.Lng)) < ((unsigned long) (Wrd79.Lng))))
    goto label_19;
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd69.pObj) = (& ((Wrd77.pObj) [(Wrd66.Lng)]));
  ((Wrd69.pObj) [1]) = (Wrd46.Obj);
  Rvl = (current_block [OBJECT_14_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_16)
  (Wrd46.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd42.Obj) = (current_block [OBJECT_14_5]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_15)
  (Wrd33.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_14])), (Wrd28.pObj));

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd22.Obj) = (current_block [OBJECT_14_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_12])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_33;
  Wrd17 = Wrd21;

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define LABEL_15_9 13
#define LABEL_15_10 15
#define LABEL_15_11 17
#define LABEL_15_12 19
#define LABEL_15_13 21
#define LABEL_15_14 23
#define LABEL_15_15 25
#define LABEL_15_16 27
#define LABEL_15_17 29
#define TAG_15_18 13
#define LABEL_15_20 31
#define LABEL_15_21 33
#define ENVIRONMENT_LABEL_15_3 51
#define DEBUGGING_LABEL_15_2 50
#define OBJECT_15_8 49
#define OBJECT_15_7 48
#define OBJECT_15_6 47
#define OBJECT_15_5 46
#define OBJECT_15_4 45
#define OBJECT_15_3 44
#define OBJECT_15_2 43
#define OBJECT_15_1 42
#define OBJECT_15_0 41
#define EXECUTE_CACHE_15_22 35
#define EXECUTE_CACHE_15_19 37
#define FREE_REFERENCE_15_0 40
#define FREE_REFERENCES_LABEL_15_0 34
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd133;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd108;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd115;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd149;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_10;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto remove_invalid_referencesB_17;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_15_9);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_15_10);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_15_11);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_15_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_15_14);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_15_15);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_15_16);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_15_17);
      goto lambda_34;

    case 14:
      current_block = (Rpc - LABEL_15_20);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_15_21);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_invalid_referencesB_33)
DEFLABEL (remove_invalid_referencesB_17)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_58;
  Wrd6 = Wrd10;

DEFLABEL (label_57)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_56;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_56;
  (Wrd12.Obj) = ((Wrd16.pObj) [6]);

DEFLABEL (label_55)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_54;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_54;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_54;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd28.pObj) = (& ((Wrd34.pObj) [(Wrd26.Lng)]));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_53)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_52;
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd149.Lng) < 0)
    goto label_42;

DEFLABEL (label_51)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_50;
  Wrd51 = Wrd55;

DEFLABEL (label_49)
  Wrd50 = Wrd51;
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_48;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd63.Lng))))
    goto label_48;
  (Wrd57.Obj) = ((Wrd61.pObj) [5]);

DEFLABEL (label_47)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_46;
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_46;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) (Wrd78.Lng)) < ((unsigned long) (Wrd81.Lng))))
    goto label_46;
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd75.Obj));
  (Wrd74.pObj) = (& ((Wrd79.pObj) [(Wrd72.Lng)]));
  (Wrd70.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_45)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_44;
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_44;
  if ((Wrd88.Obj) == (Wrd70.Obj))
    goto label_42;

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd106.Obj) = ((Wrd103.pObj) [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd107.uLng) == 50)
    goto label_40;
  Wrd102 = Wrd106;

DEFLABEL (label_39)
  Wrd101 = Wrd102;
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd115.uLng) == 10))
    goto label_38;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd114.Lng))))
    goto label_38;
  (Wrd108.Obj) = ((Wrd112.pObj) [4]);

DEFLABEL (label_37)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd133.uLng) == 10))
    goto label_36;
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 26))
    goto label_36;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [0]);
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  if (! (((unsigned long) (Wrd129.Lng)) < ((unsigned long) (Wrd132.Lng))))
    goto label_36;
  (Wrd122.uLng) = (OBJECT_DATUM (Wrd126.Obj));
  (Wrd124.pObj) = (& ((Wrd130.pObj) [(Wrd122.Lng)]));
  (Wrd125.Obj) = ((Wrd124.pObj) [1]);
  (* (--Rsp)) = (Wrd125.Obj);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd141.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_17])));
  Rhp += 1;
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd141.pObj)));
  Wrd142 = Wrd141;
  (Wrd143.Obj) = (Rsp [0]);
  ((Wrd142.pObj) [2]) = (Wrd143.Obj);
  (Rsp [0]) = (Wrd140.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (label_36)
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd117.Obj) = (current_block [OBJECT_15_3]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_28)
  (Wrd108.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_14])), (Wrd103.pObj));

DEFLABEL (label_27)
  (Wrd102.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_15_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_46)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_25)
  (Wrd70.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd66.Obj) = (current_block [OBJECT_15_2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_24)
  (Wrd57.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_10])), (Wrd52.pObj));

DEFLABEL (label_23)
  (Wrd51.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_42;

DEFLABEL (label_54)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd21.Obj) = (current_block [OBJECT_15_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_5);
  goto label_43;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_15_17);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_63;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_62)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_61;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_60)
  if ((Wrd21.Obj) == (current_block [OBJECT_15_8]))
    goto label_59;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_7]), 1);

DEFLABEL (label_31)
  (Wrd21.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_15_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_8 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_2 17
#define OBJECT_16_1 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 11
#define EXECUTE_CACHE_16_6 13
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto non_object_invalidateB_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_object_invalidateB_7)
DEFLABEL (non_object_invalidateB_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_16_2]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_16_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_8 9
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_2 17
#define OBJECT_17_1 16
#define OBJECT_17_0 15
#define EXECUTE_CACHE_17_9 11
#define EXECUTE_CACHE_17_6 13
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_17_4);
      goto varying_address_invalidateB_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (varying_address_invalidateB_8)
DEFLABEL (varying_address_invalidateB_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd30.pObj) [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_13;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_13;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_17_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_17_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define TAG_18_8 2
#define LABEL_18_10 9
#define ENVIRONMENT_LABEL_18_3 22
#define DEBUGGING_LABEL_18_2 21
#define OBJECT_18_3 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_11 11
#define EXECUTE_CACHE_18_9 13
#define EXECUTE_CACHE_18_6 15
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_18_4);
      goto expression_invalidateB_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_invalidateB_9)
DEFLABEL (expression_invalidateB_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_12)
  if ((Wrd5.Obj) == (current_block [OBJECT_18_1]))
    goto label_11;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_18_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_9 9
#define LABEL_19_11 11
#define LABEL_19_13 13
#define ENVIRONMENT_LABEL_19_3 31
#define DEBUGGING_LABEL_19_2 30
#define OBJECT_19_0 29
#define EXECUTE_CACHE_19_16 15
#define EXECUTE_CACHE_19_15 17
#define EXECUTE_CACHE_19_14 19
#define EXECUTE_CACHE_19_12 21
#define EXECUTE_CACHE_19_10 23
#define EXECUTE_CACHE_19_8 25
#define EXECUTE_CACHE_19_6 27
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto register_expression_invalidateB_6;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_expression_invalidateB_9)
DEFLABEL (register_expression_invalidateB_6)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_10)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_8 5
#define LABEL_20_9 7
#define LABEL_20_10 9
#define LABEL_20_11 11
#define LABEL_20_12 13
#define LABEL_20_13 15
#define LABEL_20_14 17
#define LABEL_20_15 19
#define LABEL_20_16 21
#define LABEL_20_5 23
#define LABEL_20_6 25
#define LABEL_20_17 27
#define LABEL_20_18 29
#define LABEL_20_19 31
#define LABEL_20_20 33
#define LABEL_20_21 35
#define LABEL_20_22 37
#define LABEL_20_23 39
#define LABEL_20_24 41
#define LABEL_20_25 43
#define LABEL_20_26 45
#define LABEL_20_27 47
#define LABEL_20_28 49
#define LABEL_20_29 51
#define LABEL_20_30 53
#define LABEL_20_31 55
#define LABEL_20_32 57
#define LABEL_20_33 59
#define LABEL_20_34 61
#define LABEL_20_35 63
#define LABEL_20_36 65
#define LABEL_20_37 67
#define ENVIRONMENT_LABEL_20_3 85
#define DEBUGGING_LABEL_20_2 84
#define OBJECT_20_8 83
#define OBJECT_20_7 82
#define OBJECT_20_6 81
#define OBJECT_20_5 80
#define OBJECT_20_4 79
#define OBJECT_20_3 78
#define OBJECT_20_2 77
#define OBJECT_20_1 76
#define OBJECT_20_0 75
#define EXECUTE_CACHE_20_38 69
#define EXECUTE_CACHE_20_7 71
#define FREE_REFERENCE_20_0 74
#define FREE_REFERENCES_LABEL_20_0 68
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse2_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd214;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd208;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd179;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd186;
  machine_word Wrd172;
  machine_word Wrd173;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd231;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd217;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd170;
  machine_word Wrd250;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd233;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd244;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd157;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd164;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd253;
  machine_word Wrd259;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd148;
  machine_word Wrd285;
  machine_word Wrd281;
  machine_word Wrd271;
  machine_word Wrd269;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd279;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd134;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd141;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd118;
  machine_word Wrd103;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd81;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd66;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd99;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd117;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_20_4);
      goto register_invalidateB_22;

    case 1:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_20_9);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_20_10);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_20_15);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_20_16);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_20_17);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_20_18);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_20_19);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_20_20);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_20_21);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_20_22);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_20_23);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_20_24);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_20_25);
      goto label_32;

    case 21:
      current_block = (Rpc - LABEL_20_26);
      goto label_33;

    case 22:
      current_block = (Rpc - LABEL_20_27);
      goto label_34;

    case 23:
      current_block = (Rpc - LABEL_20_28);
      goto label_35;

    case 24:
      current_block = (Rpc - LABEL_20_29);
      goto label_44;

    case 25:
      current_block = (Rpc - LABEL_20_30);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_20_31);
      goto label_36;

    case 27:
      current_block = (Rpc - LABEL_20_32);
      goto label_37;

    case 28:
      current_block = (Rpc - LABEL_20_33);
      goto label_42;

    case 29:
      current_block = (Rpc - LABEL_20_34);
      goto label_41;

    case 30:
      current_block = (Rpc - LABEL_20_35);
      goto label_38;

    case 31:
      current_block = (Rpc - LABEL_20_36);
      goto label_39;

    case 32:
      current_block = (Rpc - LABEL_20_37);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_invalidateB_54)
DEFLABEL (register_invalidateB_22)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_115;
  Wrd6 = Wrd10;

DEFLABEL (label_114)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_113;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_113;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_112)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_111;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_111;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_111;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd28.pObj) = (& ((Wrd34.pObj) [(Wrd26.Lng)]));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_110)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_109;
  Wrd44 = Wrd48;

DEFLABEL (label_108)
  Wrd43 = Wrd44;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_107;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd56.Lng))))
    goto label_107;
  (Wrd50.Obj) = ((Wrd54.pObj) [2]);

DEFLABEL (label_106)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_105;
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_105;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) (Wrd71.Lng)) < ((unsigned long) (Wrd74.Lng))))
    goto label_105;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd66.pObj) = (& ((Wrd72.pObj) [(Wrd64.Lng)]));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_104)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd86.Obj) = ((Wrd83.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_103;
  Wrd82 = Wrd86;

DEFLABEL (label_102)
  Wrd81 = Wrd82;
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_101;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd94.Lng))))
    goto label_101;
  (Wrd88.Obj) = ((Wrd92.pObj) [5]);

DEFLABEL (label_100)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd113.uLng) == 10))
    goto label_99;
  (Wrd106.Obj) = (Rsp [4]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 26))
    goto label_99;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) (Wrd109.Lng)) < ((unsigned long) (Wrd112.Lng))))
    goto label_99;
  (Wrd103.uLng) = (OBJECT_DATUM (Wrd106.Obj));
  (Wrd105.pObj) = (& ((Wrd110.pObj) [(Wrd103.Lng)]));
  (Wrd101.Obj) = ((Wrd105.pObj) [1]);

DEFLABEL (label_98)
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_97;
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  (Wrd124.Lng) = ((Wrd125.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd124.Lng)))
    goto label_97;
  (Wrd126.Obj) = (LONG_TO_FIXNUM (Wrd124.Lng));
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_96)
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd132.Obj) = ((Wrd129.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_95;
  Wrd128 = Wrd132;

DEFLABEL (label_94)
  Wrd127 = Wrd128;
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd141.uLng) == 10))
    goto label_93;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd140.Lng))))
    goto label_93;
  (Wrd134.Obj) = ((Wrd138.pObj) [5]);

DEFLABEL (label_92)
  (Wrd147.Obj) = (* (Rsp++));
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd279.uLng) == 10))
    goto label_91;
  (Wrd272.Obj) = (Rsp [4]);
  (Wrd273.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd273.uLng) == 26))
    goto label_91;
  (Wrd275.Lng) = (FIXNUM_TO_LONG (Wrd272.Obj));
  (Wrd276.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd277.Obj) = ((Wrd276.pObj) [0]);
  (Wrd278.Lng) = (FIXNUM_TO_LONG (Wrd277.Obj));
  if (! (((unsigned long) (Wrd275.Lng)) < ((unsigned long) (Wrd278.Lng))))
    goto label_91;
  (Wrd269.uLng) = (OBJECT_DATUM (Wrd272.Obj));
  (Wrd271.pObj) = (& ((Wrd276.pObj) [(Wrd269.Lng)]));
  ((Wrd271.pObj) [1]) = (Wrd147.Obj);

DEFLABEL (label_90)
  (Wrd148.Obj) = (Rsp [0]);
  if ((Wrd148.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd152.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd155.Obj) = ((Wrd152.pObj) [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if ((Wrd156.uLng) == 50)
    goto label_87;
  Wrd151 = Wrd155;

DEFLABEL (label_86)
  Wrd150 = Wrd151;
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd164.uLng) == 10))
    goto label_85;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd162.Obj) = ((Wrd161.pObj) [0]);
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd162.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd163.Lng))))
    goto label_85;
  (Wrd157.Obj) = ((Wrd161.pObj) [3]);

DEFLABEL (label_84)
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd244.uLng) == 10))
    goto label_83;
  (Wrd237.Obj) = (Rsp [0]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 26))
    goto label_83;
  (Wrd240.Lng) = (FIXNUM_TO_LONG (Wrd237.Obj));
  (Wrd241.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd242.Obj) = ((Wrd241.pObj) [0]);
  (Wrd243.Lng) = (FIXNUM_TO_LONG (Wrd242.Obj));
  if (! (((unsigned long) (Wrd240.Lng)) < ((unsigned long) (Wrd243.Lng))))
    goto label_83;
  (Wrd233.uLng) = (OBJECT_DATUM (Wrd237.Obj));
  (Wrd235.pObj) = (& ((Wrd241.pObj) [(Wrd233.Lng)]));
  (Wrd236.Obj) = (Rsp [1]);
  ((Wrd235.pObj) [1]) = (Wrd236.Obj);

DEFLABEL (label_82)
  (Wrd170.Obj) = (Rsp [1]);
  if ((Wrd170.Obj) == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd174.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd177.Obj) = ((Wrd174.pObj) [0]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if ((Wrd178.uLng) == 50)
    goto label_79;
  Wrd173 = Wrd177;

DEFLABEL (label_78)
  Wrd172 = Wrd173;
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd186.uLng) == 10))
    goto label_77;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [0]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd185.Lng))))
    goto label_77;
  (Wrd179.Obj) = ((Wrd183.pObj) [2]);

DEFLABEL (label_76)
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd208.uLng) == 10))
    goto label_75;
  (Wrd201.Obj) = (Rsp [1]);
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd201.Obj));
  if (! ((Wrd202.uLng) == 26))
    goto label_75;
  (Wrd204.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [0]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  if (! (((unsigned long) (Wrd204.Lng)) < ((unsigned long) (Wrd207.Lng))))
    goto label_75;
  (Wrd197.uLng) = (OBJECT_DATUM (Wrd201.Obj));
  (Wrd199.pObj) = (& ((Wrd205.pObj) [(Wrd197.Lng)]));
  (Wrd200.Obj) = (Rsp [0]);
  ((Wrd199.pObj) [1]) = (Wrd200.Obj);

DEFLABEL (label_74)
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd194.Obj);
  (Wrd195.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd195.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (* (--Rsp)) = Rvl;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_73;
  Wrd8 = Wrd12;

DEFLABEL (label_72)
  Wrd7 = Wrd8;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_71;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_71;
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_70)
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_69;
  (Wrd110.Obj) = (Rsp [4]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_69;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) (Wrd113.Lng)) < ((unsigned long) (Wrd116.Lng))))
    goto label_69;
  (Wrd107.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  (Wrd109.pObj) = (& ((Wrd114.pObj) [(Wrd107.Lng)]));
  ((Wrd109.pObj) [1]) = (Wrd27.Obj);

DEFLABEL (label_68)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_67;
  Wrd29 = Wrd33;

DEFLABEL (label_66)
  Wrd28 = Wrd29;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_65;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_65;
  (Wrd35.Obj) = ((Wrd39.pObj) [2]);

DEFLABEL (label_64)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_63;
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_63;
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) (Wrd95.Lng)) < ((unsigned long) (Wrd98.Lng))))
    goto label_63;
  (Wrd88.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd90.pObj) = (& ((Wrd96.pObj) [(Wrd88.Lng)]));
  ((Wrd90.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_61;
  Wrd49 = Wrd53;

DEFLABEL (label_60)
  Wrd48 = Wrd49;
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_59;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd61.Lng))))
    goto label_59;
  (Wrd55.Obj) = ((Wrd59.pObj) [3]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd55.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd68.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd86.uLng) == 10)
    goto label_56;

DEFLABEL (label_55)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_56)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_55;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) (Wrd80.Lng)) < ((unsigned long) (Wrd84.Lng))))
    goto label_55;
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd75.pObj) = (& ((Wrd82.pObj) [(Wrd72.Lng)]));
  ((Wrd75.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_20_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd64.Obj) = (current_block [OBJECT_20_4]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_50)
  (Wrd55.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_15])), (Wrd50.pObj));

DEFLABEL (label_49)
  (Wrd49.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd101.Obj) = (Rsp [4]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_51)
  goto label_62;

DEFLABEL (label_65)
  (Wrd44.Obj) = (current_block [OBJECT_20_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_48)
  (Wrd35.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_12])), (Wrd30.pObj));

DEFLABEL (label_47)
  (Wrd29.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd119.Obj) = (Rsp [4]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_52)
  goto label_68;

DEFLABEL (label_71)
  (Wrd23.Obj) = (current_block [OBJECT_20_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_46)
  (Wrd14.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd210.Obj) = (Rsp [1]);
  (Wrd211.Obj) = (Rsp [0]);
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_37]))));
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_40)
  goto label_74;

DEFLABEL (label_77)
  (Wrd188.Obj) = (current_block [OBJECT_20_3]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_36]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_39)
  (Wrd179.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_35])), (Wrd174.pObj));

DEFLABEL (label_38)
  (Wrd173.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd224.Obj) = (Rsp [2]);
  (Wrd225.uLng) = (OBJECT_TYPE (Wrd224.Obj));
  if (! ((Wrd225.uLng) == 62))
    goto label_81;
  (Wrd221.pObj) = (OBJECT_ADDRESS (Wrd224.Obj));
  (Wrd222.Obj) = ((Wrd221.pObj) [0]);
  (Wrd223.Lng) = (FIXNUM_TO_LONG (Wrd222.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd223.Lng))))
    goto label_81;
  (Wrd217.Obj) = (Rsp [0]);
  ((Wrd221.pObj) [3]) = (Wrd217.Obj);
  goto label_74;

DEFLABEL (label_81)
  (Wrd226.Obj) = (Rsp [2]);
  (Wrd227.Obj) = (current_block [OBJECT_20_4]);
  (Wrd228.Obj) = (Rsp [0]);
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_34]))));
  (* (--Rsp)) = (Wrd231.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd226.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_8]), 3);

DEFLABEL (label_41)
  goto label_74;

DEFLABEL (label_83)
  (Wrd246.Obj) = (Rsp [0]);
  (Wrd247.Obj) = (Rsp [1]);
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_33]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd247.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_42)
  goto label_82;

DEFLABEL (label_85)
  (Wrd166.Obj) = (current_block [OBJECT_20_4]);
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_37)
  (Wrd157.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_31])), (Wrd152.pObj));

DEFLABEL (label_36)
  (Wrd151.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd260.Obj) = (Rsp [2]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if (! ((Wrd261.uLng) == 62))
    goto label_89;
  (Wrd257.pObj) = (OBJECT_ADDRESS (Wrd260.Obj));
  (Wrd258.Obj) = ((Wrd257.pObj) [0]);
  (Wrd259.Lng) = (FIXNUM_TO_LONG (Wrd258.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd259.Lng))))
    goto label_89;
  (Wrd253.Obj) = (Rsp [1]);
  ((Wrd257.pObj) [4]) = (Wrd253.Obj);
  goto label_82;

DEFLABEL (label_89)
  (Wrd262.Obj) = (Rsp [2]);
  (Wrd263.Obj) = (current_block [OBJECT_20_7]);
  (Wrd264.Obj) = (Rsp [1]);
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  (* (--Rsp)) = (Wrd262.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_8]), 3);

DEFLABEL (label_43)
  goto label_82;

DEFLABEL (label_91)
  (Wrd281.Obj) = (Rsp [4]);
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_44)
  goto label_90;

DEFLABEL (label_93)
  (Wrd143.Obj) = (current_block [OBJECT_20_6]);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_35)
  (Wrd134.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_27])), (Wrd129.pObj));

DEFLABEL (label_34)
  (Wrd128.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd115.Obj) = (Rsp [4]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_32)
  (Wrd101.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd97.Obj) = (current_block [OBJECT_20_6]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_31)
  (Wrd88.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_23])), (Wrd83.pObj));

DEFLABEL (label_30)
  (Wrd82.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd59.Obj) = (current_block [OBJECT_20_3]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_28)
  (Wrd50.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_20])), (Wrd45.pObj));

DEFLABEL (label_27)
  (Wrd44.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd21.Obj) = (current_block [OBJECT_20_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_25)
  (Wrd12.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_17])), (Wrd7.pObj));

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_114;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_5);
  goto label_57;

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
rcse2_so_ead86885c689b299 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 20)
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

static const struct liarc_code_S arr_decl_rcse2_so_ead86885c689b299 [20] =
  {
    { "rcse2_so_code_1", 10, rcse2_so_code_1 },
    { "rcse2_so_code_2", 10, rcse2_so_code_2 },
    { "rcse2_so_code_3", 16, rcse2_so_code_3 },
    { "rcse2_so_code_4", 2, rcse2_so_code_4 },
    { "rcse2_so_code_5", 20, rcse2_so_code_5 },
    { "rcse2_so_code_6", 2, rcse2_so_code_6 },
    { "rcse2_so_code_7", 8, rcse2_so_code_7 },
    { "rcse2_so_code_8", 10, rcse2_so_code_8 },
    { "rcse2_so_code_9", 3, rcse2_so_code_9 },
    { "rcse2_so_code_10", 23, rcse2_so_code_10 },
    { "rcse2_so_code_11", 6, rcse2_so_code_11 },
    { "rcse2_so_code_12", 8, rcse2_so_code_12 },
    { "rcse2_so_code_13", 4, rcse2_so_code_13 },
    { "rcse2_so_code_14", 10, rcse2_so_code_14 },
    { "rcse2_so_code_15", 16, rcse2_so_code_15 },
    { "rcse2_so_code_16", 4, rcse2_so_code_16 },
    { "rcse2_so_code_17", 4, rcse2_so_code_17 },
    { "rcse2_so_code_18", 4, rcse2_so_code_18 },
    { "rcse2_so_code_19", 6, rcse2_so_code_19 },
    { "rcse2_so_code_20", 33, rcse2_so_code_20 }
  };

int
decl_rcse2_so_ead86885c689b299 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcse2_so_ead86885c689b299);
  return (0);
}

DECLARE_COMPILED_CODE ("rcse2.so", 3, decl_rcse2_so_ead86885c689b299, rcse2_so_ead86885c689b299)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcse2_so_data_ead86885c689b299 [3587] =
  "\x6c\x2a\xbd\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81\x28"
  "\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x82\x88\xb1\x02\xc3\xbf\xc3\x1c\xc2\x1c"
  "\x83\x86\x0d\x1c\xc1\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b"
  "\x83\xb1\x82\x86\x1b\x1b\xb3\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28"
  "\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x06\x85"
  "\xc2\x02\x80\x0d\x0d\x07\x0d\x86\x0d\x1b\x1b\xb1\x81\xc1\x0d\x0d"
  "\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb1\x81\x28\xb4\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x86\xb1\x02"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x84\x1b\x85\x86\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xb1\x02\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x81\xb7\x82\xb1\x83\x1b\x1b\x80\x86\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1d"
  "\x83\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x86\x1b\x1b\xb1\x81\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x07\x83\x1d\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x84\x1b\x85\x86\x1b\x1b\x1b\x1b\x24\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\xb1\x81\x1d\x83\x84\x1b\x85\x1b\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x81\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\xb1\x83\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x83\x84"
  "\x1d\x82\x81\x1b\x1b\x80\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x17"
  "\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x0d\x0d\x1b\x1b\xb4\x0d\xb2"
  "\x1b\xb3\xb5\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70"
  "\x74\x2f\x72\x63\x73\x65\x32\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x04\x15\x66"
  "\x75\x6c\x6c\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x68"
  "\x61\x73\x68\x03\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d"
  "\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x05\x1c\x66\x69"
  "\x6e\x64\x2d\x63\x68\x65\x61\x70\x65\x73\x74\x2d\x76\x61\x6c\x69"
  "\x64\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x06\x14\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x73\x65\x72\x74\x65\x72\x05\x0d"
  "\x16\x81\x8b\x02\x0c\x14\x81\x8b\x02\x0b\x12\x81\x89\x02\x0a\x10"
  "\x81\x8b\x02\x09\x0e\x81\x8d\x02\x08\x0c\x81\x89\x02\x07\x0a\x81"
  "\x89\x02\x06\x08\x81\x8b\x02\x05\x06\x81\x89\x02\x04\x04\x86\x0a"
  "\x15\x23\x02\x09\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74"
  "\x21\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x09\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0a\x09\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x0b\x04\x63\x61\x72\x0c\x12\x2a\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x74\x61\x62\x6c\x65\x73\x2a\x0d\x02\x04\x10\x67"
  "\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x0e\x03"
  "\x13\x6d\x65\x6e\x74\x69\x6f\x6e\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x73\x21\x0f\x05\x13\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x69\x6e\x73\x65\x72\x74\x21\x10\x04\x17\x16\x81\x85\x02\x16"
  "\x14\x81\x85\x02\x15\x12\x81\x85\x02\x14\x10\x81\x85\x02\x13\x0e"
  "\x81\x87\x02\x12\x0c\x81\x87\x02\x11\x0a\x81\x85\x02\x10\x08\x81"
  "\x85\x02\x0f\x06\x81\x83\x02\x0e\x04\x86\x0a\x15\x2a\x11\x02\x0a"
  "\x0b\x0c\x0d\x03\x04\x0e\x03\x11\x73\x74\x61\x63\x6b\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x3f\x12\x04\x17\x72\x74\x6c\x3a\x6d"
  "\x61\x70\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x73\x03\x19\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x13\x03\x16\x67\x65"
  "\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x71\x75\x61\x6e\x74"
  "\x69\x74\x79\x14\x06\x27\x22\x81\x87\x02\x26\x20\x81\x87\x02\x25"
  "\x1e\x81\x87\x02\x24\x1c\x81\x83\x02\x23\x1a\x81\x83\x02\x22\x18"
  "\x81\x85\x02\x21\x16\x81\x85\x02\x20\x14\x81\x83\x02\x1f\x12\x81"
  "\x85\x02\x1e\x10\x81\x85\x02\x1d\x0e\x81\x83\x02\x1c\x0c\x81\x83"
  "\x02\x1b\x0a\x81\x85\x02\x1a\x08\x81\x83\x02\x19\x06\x81\x83\x02"
  "\x18\x04\x83\x04\x21\x39\x15\x02\x04\x02\x29\x06\x85\x08\x28\x04"
  "\x83\x04\x05\x0b\x16\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x1e\x0f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d"
  "\x65\x6e\x74\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e"
  "\x74\x0c\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x07\x6f\x66"
  "\x66\x73\x65\x74\x0b\x0c\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x0d\x2a\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2a\x02\x2b\x03\x04\x07\x6d\x6f\x64\x75\x6c\x6f\x04\x0e\x03\x0c"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x68\x61\x73\x68\x07\x14\x72\x74\x6c"
  "\x3a\x72\x65\x64\x75\x63\x65\x2d\x73\x75\x62\x70\x61\x72\x74\x73"
  "\x03\x13\x03\x1b\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x17\x03"
  "\x14\x03\x09\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x68\x61\x73\x68\x03\x05\x68\x61\x73\x68\x03\x0f"
  "\x69\x6e\x65\x78\x61\x63\x74\x2d\x3e\x65\x78\x61\x63\x74\x0c\x3d"
  "\x2a\x81\x83\x02\x3c\x28\x81\x83\x02\x3b\x26\x81\x83\x02\x3a\x24"
  "\x83\x04\x39\x22\x81\x85\x02\x38\x20\x81\x85\x02\x37\x1e\x81\x83"
  "\x02\x36\x1c\x81\x87\x02\x35\x1a\x81\x8f\x02\x34\x18\x81\x87\x02"
  "\x33\x16\x81\x85\x02\x32\x14\x81\x85\x02\x31\x12\x81\x85\x02\x30"
  "\x10\x81\x87\x02\x2f\x0e\x81\x83\x02\x2e\x0c\x81\x83\x02\x2d\x0a"
  "\x81\x91\x02\x2c\x08\x81\x91\x02\x2b\x06\x81\x8d\x02\x2a\x04\x84"
  "\x06\x29\x56\x18\x02\x05\x02\x3f\x06\x81\x87\x02\x3e\x04\x85\x08"
  "\x05\x0d\x19\x02\x08\x0b\x0c\x09\x04\x12\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x1a\x03\x12\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61\x6c\x69\x64\x3f\x1b"
  "\x03\x47\x12\x81\x85\x02\x46\x10\x81\x83\x02\x45\x0e\x81\x83\x02"
  "\x44\x0c\x81\x85\x02\x43\x0a\x81\x85\x02\x42\x08\x81\x83\x02\x41"
  "\x06\x81\x87\x02\x40\x04\x85\x08\x11\x1f\x1c\x02\x09\x0a\x0b\x0c"
  "\x1b\x0d\x03\x04\x0e\x04\x18\x72\x74\x6c\x3a\x61\x6c\x6c\x2d\x73"
  "\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x3f\x03\x51"
  "\x16\x81\x85\x02\x50\x14\x81\x85\x02\x4f\x12\x81\x85\x02\x4e\x10"
  "\x81\x83\x02\x4d\x0e\x81\x83\x02\x4c\x0c\x81\x83\x02\x4b\x0a\x81"
  "\x83\x02\x4a\x08\x81\x85\x02\x49\x06\x81\x83\x02\x48\x04\x83\x04"
  "\x15\x27\x1d\x02\x0a\x09\x03\x0f\x65\x6c\x65\x6d\x65\x6e\x74\x2d"
  "\x3e\x63\x6c\x61\x73\x73\x1e\x02\x54\x08\x81\x85\x02\x53\x06\x81"
  "\x83\x02\x52\x04\x83\x04\x07\x10\x1f\x02\x0b\x02\x09\x0a\x0d\x02"
  "\x04\x0e\x03\x1e\x03\x15\x67\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x20\x03\x10\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x68\x61\x73\x68\x21\x05\x10\x06"
  "\x6b\x30\x81\x8b\x02\x6a\x2e\x81\x87\x02\x69\x2c\x81\x85\x02\x68"
  "\x2a\x81\x83\x02\x67\x28\x81\x83\x02\x66\x26\x81\x83\x02\x65\x24"
  "\x81\x87\x02\x64\x22\x81\x85\x02\x63\x20\x81\x85\x02\x62\x1e\x81"
  "\x85\x02\x61\x1c\x81\x83\x02\x60\x1a\x81\x83\x02\x5f\x18\x81\x83"
  "\x02\x5e\x16\x81\x85\x02\x5d\x14\x81\x85\x02\x5c\x12\x81\x83\x02"
  "\x5b\x10\x81\x87\x02\x5a\x0e\x81\x85\x02\x59\x0c\x81\x85\x02\x58"
  "\x0a\x81\x85\x02\x57\x08\x81\x83\x02\x56\x06\x81\x85\x02\x55\x04"
  "\x84\x06\x2f\x49\x22\x02\x0c\x02\x03\x20\x04\x1e\x73\x65\x74\x2d"
  "\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x71\x75\x61\x6e\x74\x69\x74\x79\x21\x03\x1e\x03\x21\x05\x10\x06"
  "\x71\x0e\x81\x8b\x02\x70\x0c\x81\x87\x02\x6f\x0a\x81\x85\x02\x6e"
  "\x08\x81\x85\x02\x6d\x06\x81\x87\x02\x6c\x04\x84\x06\x0d\x1e\x23"
  "\x02\x0d\x0b\x0c\x03\x1e\x04\x0e\x03\x12\x03\x13\x03\x14\x06\x79"
  "\x12\x81\x85\x02\x78\x10\x81\x85\x02\x77\x0e\x81\x85\x02\x76\x0c"
  "\x81\x85\x02\x75\x0a\x81\x83\x02\x74\x08\x81\x83\x02\x73\x06\x81"
  "\x83\x02\x72\x04\x83\x04\x11\x24\x13\x02\x0e\x02\x03\x1e\x03\x0f"
  "\x05\x10\x04\x7d\x0a\x81\x89\x02\x7c\x08\x81\x89\x02\x7b\x06\x81"
  "\x87\x02\x7a\x04\x85\x08\x09\x17\x12\x02\x0f\x09\x02\x0a\x0b\x0c"
  "\x0f\x0d\x03\x04\x0e\x04\x1b\x72\x74\x6c\x3a\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x03\x1b\x72\x65\x6d\x6f\x76\x65\x2d\x69\x6e\x76\x61\x6c\x69"
  "\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x21\x10\x04\x87"
  "\x01\x16\x81\x87\x02\x86\x01\x14\x81\x87\x02\x85\x01\x12\x81\x87"
  "\x02\x84\x01\x10\x81\x85\x02\x83\x01\x0e\x81\x85\x02\x82\x01\x0c"
  "\x81\x83\x02\x81\x01\x0a\x81\x83\x02\x80\x01\x08\x81\x85\x02\x7f"
  "\x06\x81\x83\x02\x7e\x04\x83\x04\x15\x2a\x24\x02\x10\x0b\x0c\x02"
  "\x0a\x0d\x02\x03\x19\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d"
  "\x64\x65\x6c\x65\x74\x65\x2d\x63\x6c\x61\x73\x73\x21\x25\x04\x16"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x72\x65\x66\x65\x72"
  "\x73\x2d\x74\x6f\x3f\x26\x03\x97\x01\x22\x81\x87\x02\x96\x01\x20"
  "\x81\x85\x02\x95\x01\x1e\x81\x85\x02\x94\x01\x1c\x81\x85\x02\x93"
  "\x01\x1a\x81\x85\x02\x92\x01\x18\x81\x85\x02\x91\x01\x16\x81\x85"
  "\x02\x90\x01\x14\x81\x85\x02\x8f\x01\x12\x81\x85\x02\x8e\x01\x10"
  "\x81\x85\x02\x8d\x01\x0e\x81\x85\x02\x8c\x01\x0c\x81\x83\x02\x8b"
  "\x01\x0a\x81\x83\x02\x8a\x01\x08\x81\x83\x02\x89\x01\x06\x83\x04"
  "\x88\x01\x04\x81\x83\x02\x21\x34\x27\x02\x11\x03\x25\x03\x1e\x72"
  "\x74\x6c\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x76\x61\x6c\x75\x65\x64"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x03\x9b\x01\x0a"
  "\x81\x83\x02\x9a\x01\x08\x81\x85\x02\x99\x01\x06\x83\x04\x98\x01"
  "\x04\x82\x02\x09\x14\x28\x02\x12\x03\x25\x03\x1b\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x76"
  "\x61\x72\x69\x65\x73\x3f\x03\x9f\x01\x0a\x81\x83\x02\x9e\x01\x08"
  "\x81\x83\x02\x9d\x01\x06\x83\x04\x9c\x01\x04\x82\x02\x09\x14\x29"
  "\x02\x13\x0b\x0c\x03\x20\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61\x6c\x69"
  "\x64\x61\x74\x65\x21\x0c\x03\x25\x04\x26\x04\xa3\x01\x0a\x81\x87"
  "\x02\xa2\x01\x08\x81\x85\x02\xa1\x01\x06\x81\x83\x02\xa0\x01\x04"
  "\x83\x04\x09\x17\x26\x02\x14\x03\x21\x04\x0e\x03\x15\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65"
  "\x21\x25\x03\x17\x04\x1a\x03\x0f\x04\x13\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x64\x65\x6c\x65\x74\x65\x21\x08\xa9\x01\x0e"
  "\x81\x87\x02\xa8\x01\x0c\x81\x87\x02\xa7\x01\x0a\x81\x87\x02\xa6"
  "\x01\x08\x81\x85\x02\xa5\x01\x06\x81\x83\x02\xa4\x01\x04\x83\x04"
  "\x0d\x20\x1a\x02\x15\x02\x09\x0a\x0d\x02\x03\x14\x03\x0d\x6e\x65"
  "\x77\x2d\x71\x75\x61\x6e\x74\x69\x74\x79\x03\xca\x01\x44\x81\x87"
  "\x02\xc9\x01\x42\x81\x87\x02\xc8\x01\x40\x81\x87\x02\xc7\x01\x3e"
  "\x81\x87\x02\xc6\x01\x3c\x81\x87\x02\xc5\x01\x3a\x81\x87\x02\xc4"
  "\x01\x38\x81\x87\x02\xc3\x01\x36\x81\x87\x02\xc2\x01\x34\x81\x87"
  "\x02\xc1\x01\x32\x81\x89\x02\xc0\x01\x30\x81\x89\x02\xbf\x01\x2e"
  "\x81\x87\x02\xbe\x01\x2c\x81\x87\x02\xbd\x01\x2a\x81\x87\x02\xbc"
  "\x01\x28\x81\x87\x02\xbb\x01\x26\x81\x89\x02\xba\x01\x24\x81\x89"
  "\x02\xb9\x01\x22\x81\x89\x02\xb8\x01\x20\x81\x87\x02\xb7\x01\x1e"
  "\x81\x87\x02\xb6\x01\x1c\x81\x87\x02\xb5\x01\x1a\x81\x85\x02\xb4"
  "\x01\x18\x81\x83\x02\xb3\x01\x16\x81\x87\x02\xb2\x01\x14\x81\x87"
  "\x02\xb1\x01\x12\x81\x87\x02\xb0\x01\x10\x81\x87\x02\xaf\x01\x0e"
  "\x81\x87\x02\xae\x01\x0c\x81\x87\x02\xad\x01\x0a\x81\x89\x02\xac"
  "\x01\x08\x81\x89\x02\xab\x01\x06\x81\x87\x02\xaa\x01\x04\x83\x04"
  "\x43\x56\x17\x15\x14\x14\x17\x04\x1a\x04\x26\x04\x29\x04\x28\x04"
  "\x27\x06\x24\x04\x12\x04\x13\x04\x23\x04\x22\x04\x1f\x04\x1d\x04"
  "\x1c\x04\x19\x04\x18\x04\x16\x04\x15\x04\x11\x04\x04\x15\x25\x0c"
  "\x17\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61"
  "\x6c\x69\x64\x61\x74\x65\x21\x1c\x76\x61\x72\x79\x69\x6e\x67\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61"
  "\x74\x65\x21\x17\x6e\x6f\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x69"
  "\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x10\x0f\x1b\x69\x6e\x73"
  "\x65\x72\x74\x2d\x6d\x65\x6d\x6f\x72\x79\x2d\x64\x65\x73\x74\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x21\x20\x1a\x69\x6e\x73\x65\x72\x74\x2d"
  "\x73\x74\x61\x63\x6b\x2d\x64\x65\x73\x74\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x21\x1d\x69\x6e\x73\x65\x72\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x64\x65\x73\x74\x69\x6e\x61\x74\x69\x6f\x6e\x21\x1e"
  "\x1b\x19\x66\x69\x6e\x64\x2d\x63\x68\x65\x61\x70\x65\x73\x74\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x21\x14\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x72\x65\x70\x6c\x61\x63\x65\x21\x15"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
rcse2_so_data_ead86885c689b299 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcse2_so_data_ead86885c689b299 [0]))), (sizeof (prog_rcse2_so_data_ead86885c689b299)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rcse2.so", rcse2_so_data_ead86885c689b299)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcse2.so", "5e27a9f688f04277")
